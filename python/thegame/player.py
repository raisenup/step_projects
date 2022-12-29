import pygame as pg
import sys
from settings import *
from map import *
from support import *
from entity import Entity


class Player(Entity):

    def __init__(self, pos, groups, obstacle_sprites, create_attack, delete_attack, create_heal):
        # graphics
        super().__init__(groups)
        self.image = pg.transform.scale(pg.image.load('./sprites/player/right/legs/theknight_d1.png').convert_alpha(), (64, 64))
        self.rect = self.image.get_rect(topleft=pos)
        self.hitbox = self.rect.inflate(0, 0)
        self.head = PlayerHead(pos, groups)
        self.import_player_assets()

        # setup
        self.status = 'right'
        self.speed = 64

        # collision
        self.obstacle_sprites = obstacle_sprites

        # cooldowns
        self.moving = False
        self.can_move = True
        self.move_time = None

        self.attacking = False
        self.attack_time = None

        # attack
        self.create_attack = create_attack
        self.delete_attack = delete_attack

        # magic
        self.create_heal = create_heal
        self.magic_index = 0

        # stats
        self.stats = PLAYER_STATS
        self.curr_stats = self.stats
        self.health = self.curr_stats['health']
        self.energy = self.curr_stats['energy']
        self.attack = self.curr_stats['attack']
        self.magic = self.curr_stats['magic']
        self.exp = self.curr_stats['exp']

        # damage timer
        self.vulnerable = True
        self.hit_time = None
        self.invulnerability_duration = 500

    def import_player_assets(self):
        character_path = './sprites/player'
        self.animations = {
            'right': {
                'head': [],
                'legs': []
            },
            'left': {
                'head': [],
                'legs': []
            }
        }
        for animation in self.animations:
            for i in self.animations[animation]:
                full_path = character_path + '/' + animation + '/' + i
                self.animations[animation][i] = import_folder(full_path)

    def input(self):
        keys = pg.key.get_pressed()
        # vertical
        if keys[pg.K_DOWN] and not self.moving:
            self.moving = True
            self.move_time = pg.time.get_ticks()
            self.direction.y = 1
        elif keys[pg.K_UP] and not self.moving:
            self.moving = True
            self.move_time = pg.time.get_ticks()
            self.direction.y = -1
        else:
            self.direction.y = 0
        # horizontal
        if keys[pg.K_RIGHT] and not self.moving:
            self.moving = True
            self.move_time = pg.time.get_ticks()
            self.direction.x = 1
            self.status = 'right'
        elif keys[pg.K_LEFT] and not self.moving:
            self.moving = True
            self.move_time = pg.time.get_ticks()
            self.direction.x = -1
            self.status = 'left'
        else:
            self.direction.x = 0

        if keys[pg.K_SPACE] and not self.attacking:
            self.attacking = True
            self.attack_time = pg.time.get_ticks()
            self.can_move = False
            self.create_attack()

        if keys[pg.K_LCTRL] and not self.attacking:
            self.attacking = True
            self.attack_time = pg.time.get_ticks()
            style = list(magic_data.keys())[self.magic_index]
            cost = list(magic_data.values())[self.magic_index]['cost']
            self.create_heal(style, cost)

    def move(self):
        if self.can_move:
            self.hitbox.x += self.direction.x * self.speed
            x_copy = self.hitbox.x
            self.collision('horizontal')
            if x_copy == self.hitbox.x:
                self.head.rect.x += self.direction.x * self.speed
            self.hitbox.y += self.direction.y * self.speed
            y_copy = self.hitbox.y
            self.collision('vertical')
            if y_copy == self.hitbox.y:
                self.head.rect.y += self.direction.y * self.speed

            self.rect.center = self.hitbox.center

    def cooldowns(self):
        curr_time = pg.time.get_ticks()
        if self.moving:
            if curr_time - self.move_time >= MOVE_COOLDOWN:
                self.moving = False
        if self.attacking:
            if curr_time - self.attack_time >= ATTACK_COOLDOWN:
                self.attacking = False
                self.can_move = True
                self.delete_attack()
        if not self.vulnerable:
            if curr_time - self.hurt_time >= self.invulnerability_duration:
                self.vulnerable = True

    def animate(self):
        animation_head = self.animations[self.status]['head']
        animation_legs = self.animations[self.status]['legs']
        self.frame_index += self.animation_speed
        if self.frame_index >= len(animation_legs):
            self.frame_index = 0
        self.head.image = animation_head[int(self.frame_index)]
        self.image = animation_legs[int(self.frame_index)]
        self.head.rect = self.head.image.get_rect(center=self.head.rect.center)
        self.rect = self.image.get_rect(center=self.hitbox.center)
        if not self.vulnerable:
            alpha = self.wave_value()
            self.image.set_alpha(alpha)
        else:
            self.image.set_alpha(255)

    def get_weapon_damage(self):
        weapon_damage = weapon_data['sword']['damage']
        base_damage = self.attack

        return weapon_damage + base_damage

    def energy_recovery(self):
        if self.energy < self.stats['energy']:
            self.energy += 0.01 * self.stats['magic']
        else:
            self.energy = self.stats['energy']

    def check_death(self):
        if self.health <= 0:
            print('Game over! Try again :)')
            pg.quit()
            sys.exit()

    def update(self):
        self.input()
        self.cooldowns()
        self.animate()
        self.move()
        self.energy_recovery()
        self.check_death()


class PlayerHead(pg.sprite.Sprite):
    def __init__(self, pos, groups):
        super().__init__(groups)
        self.player_h_pos = pos[0], pos[1] - 64
        self.image = pg.transform.scale(pg.image.load('./sprites/player/right/head/theknight_u1.png').convert_alpha(), (64, 64))
        self.rect = self.image.get_rect(topleft=self.player_h_pos)
