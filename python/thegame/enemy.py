import random
import pygame as pg
from map import *
from settings import *
from entity import Entity
from support import *


class Enemy(Entity):
    def __init__(self, name, pos, groups, obstacle_sprites, damage_player):
        super().__init__(groups)
        self.sprite_type = 'enemy'

        self.import_graphics(name)
        self.status = 'left'
        self.image = self.animations[self.status][self.frame_index]
        self.rect = self.image.get_rect(topleft=pos)
        self.hitbox = self.rect.inflate(0, 0)
        self.obstacle_sprites = obstacle_sprites
        self.damage_player = damage_player

        self.name = name
        info = enemy_data[self.name]
        self.health = info['health']
        self.exp = info['exp']
        self.damage = info['damage']
        self.resistance = info['resistance']
        self.attack_cooldown = info['cooldown']
        self.attack_radius = info['attack_radius']
        self.speed = 64

        self.moving = False
        self.can_move = True
        self.move_time = None
        self.move_cooldown = 600

        self.attacking = False
        self.is_close = False
        self.can_attack = True
        self.attack_time = None

        # path of the enemy on x
        self.path_x = [1, 1]  # 1 to the left, 1 to the right
        self.path_x_copy = self.path_x.copy()

        # invincibility
        self.vulnerable = True
        self.hit_time = None
        self.invincibility_duration = 300

    def import_graphics(self, name):
        self.animations = {
            'right': [],
            'left': []
        }
        main = f'./sprites/npc/{name}'
        for animation in self.animations:
            full_path = main + '/' + animation
            self.animations[animation] = import_folder(full_path)

    def get_player_distance(self, player):
        enemy_vec = pg.math.Vector2(self.rect.center)
        player_vec = pg.math.Vector2(player.rect.center)
        distance = (player_vec - enemy_vec).magnitude()
        return distance

    def get_status(self, player):
        distance = self.get_player_distance(player)
        if distance <= self.attack_radius:
            self.attacking = True
            self.is_close = True
        else:
            self.is_close = False
        if not self.attacking:
            self.moving = True

    def cooldowns(self):
        curr_time = pg.time.get_ticks()
        if not self.can_attack:
            if curr_time - self.attack_time >= self.attack_cooldown:
                self.can_attack = True
        if not self.can_move:
            if curr_time - self.move_time >= self.move_cooldown:
                self.can_move = True
        if not self.vulnerable:
            if curr_time - self.hit_time >= self.invincibility_duration:
                self.vulnerable = True

    def get_damage(self, player, attack_type):
        if self.vulnerable:
            if attack_type == 'weapon':
                self.health -= player.get_weapon_damage()
            else:
                pass  # magic damage
            self.hit_time = pg.time.get_ticks()
            self.vulnerable = False

    def check_death(self):
        if self.health <= 0:
            self.kill()

    def hit_reaction(self):
        if not self.vulnerable:
            self.direction *= -self.resistance

    def actions(self):

        if self.attacking and self.can_attack:
            self.attack_time = pg.time.get_ticks()
            self.damage_player(self.damage)
            self.attacking = False
            self.can_attack = False

        if (self.moving and self.can_move and not self.is_close) or self.is_close and not self.vulnerable:
            self.move_time = pg.time.get_ticks()
            # move loop
            if self.path_x[0] != 0:
                self.direction.x = -1
                self.path_x[0] -= 1
            elif self.path_x[1] != 0:
                self.direction.x = 1
                self.path_x[1] -= 1
            if self.path_x == [0, 0]:
                self.path_x = self.path_x_copy.copy()

            self.hitbox.x += self.direction.x * self.speed
            self.collision('vertical')
            self.rect.center = self.hitbox.center
            self.can_move = False
        else:
            self.direction = pg.math.Vector2()

    def animate(self):
        animation = self.animations[self.status]
        self.frame_index += self.animation_speed
        if self.frame_index >= len(animation):
            self.frame_index = 0
        self.image = animation[int(self.frame_index)]
        self.rect = self.image.get_rect(center=self.hitbox.center)

        if not self.vulnerable:
            alpha = self.wave_value()
            self.image.set_alpha(alpha)
        else:
            self.image.set_alpha(255)

    def update(self):
        self.animate()
        self.cooldowns()
        self.check_death()

    def enemy_update(self, player):
        self.get_status(player)
        self.hit_reaction()
        self.actions()
