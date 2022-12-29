
import pygame as pg
from random import choice
from main import *
from tile import Tile
from player import Player
from settings import *
from support import *
from weapon import Weapon
from ui import UI
from enemy import Enemy
from magic import MagicPlayer


class Map:

    def __init__(self):
        self.display_surface = pg.display.get_surface()
        self.visible_sprites = YSortGroup()
        self.obstacle_sprites = YSortGroup()
        self.attack_sprites = pg.sprite.Group()
        self.attackable_sprites = pg.sprite.Group()
        self.object_sprites = pg.sprite.Group()

        self.curr_attack = None

        self.is_exiting = False

        self.get_map()

        self.ui = UI()

        self.magic_player = MagicPlayer()

    def get_map(self):
        layouts = {
            'border': import_csv_layout('./map/map_borders.csv'),
            'object': import_csv_layout('./map/map_objects.csv'),
            'entity': import_csv_layout('./map/map_entities.csv'),
        }
        graphics = {
            'chest': import_folder('./map/images/chest'),
            'exit': import_folder('./map/images/exit'),
        }
        for style, layout in layouts.items():
            for j, row in enumerate(layout):
                for i, value in enumerate(row):
                    if value != '-1':
                        x = MAP_OFFSET_X + i * TILE_SIZE
                        y = MAP_OFFSET_Y + j * TILE_SIZE
                        if style == 'border':
                            Tile((x, y), [self.obstacle_sprites], 'invisible')
                        if style == 'object':
                            if value == '627':
                                surf = graphics['chest'][0]
                                self.chest = Tile((x, y), [self.visible_sprites, self.object_sprites], 'chest', surf)
                            else:
                                surf = graphics['exit'][0]
                                self.exit = Tile((x, y), [self.visible_sprites, self.object_sprites], 'exit', surf)
                        if style == 'entity':
                            if value == '388':
                                self.player = Player((x, y),
                                                     [self.visible_sprites],
                                                     self.obstacle_sprites,
                                                     self.create_attack,
                                                     self.delete_attack,
                                                     self.create_heal
                                                     )
                            else:
                                names = ['imp', 'chort']
                                name = choice(names)
                                Enemy(name,
                                      (x, y),
                                      [self.visible_sprites, self.attackable_sprites],
                                      self.obstacle_sprites,
                                      self.damage_player
                                      )

    def create_attack(self):
        self.curr_attack = Weapon(self.player, [self.visible_sprites, self.attack_sprites])

    def create_heal(self, style, cost):
        if style == 'heal':
            self.magic_player.heal(self.player, cost)

    def delete_attack(self):
        if self.curr_attack:
            self.curr_attack.kill()
        self.curr_attack = None

    def player_attack_logic(self):
        if self.attack_sprites:
            for attack_sprite in self.attack_sprites:
                collision_sprites = pg.sprite.spritecollide(attack_sprite, self.attackable_sprites, False)
                if collision_sprites:
                    for target_sprite in collision_sprites:
                        target_sprite.get_damage(self.player, attack_sprite.sprite_type)

    def damage_player(self, damage):
        if self.player.vulnerable:
            self.player.health -= damage
            self.player.vulnerable = False
            self.player.hurt_time = pg.time.get_ticks()

    def check_collide(self):
        if self.object_sprites:
            collision_sprites = pg.sprite.spritecollide(self.player, self.object_sprites, False)
            if collision_sprites:
                for target_sprite in collision_sprites:
                    if target_sprite.sprite_type == 'chest':
                        upgrade = ['health', 'energy', 'attack']
                        i = choice(upgrade)
                        if i == 'health':
                            self.player.stats['health'] += 10
                            print(f'{self.player.exp} room: +10 hp!')
                        elif i == 'energy':
                            self.player.stats['energy'] += 5
                            print(f'{self.player.exp} room: +5 mana!')
                        else:
                            self.player.stats['attack'] += 1
                            print(f'{self.player.exp} room: +1 attack!')
                        target_sprite.kill()
                    elif target_sprite.sprite_type == 'exit':
                        if not self.is_exiting and len(self.attackable_sprites.sprites()) == 0:
                            self.player.stats['exp'] += 1
                            self.is_exiting = True

    def run(self):
        self.visible_sprites.custom_draw()
        self.visible_sprites.update()
        self.visible_sprites.enemy_update(self.player)
        self.player_attack_logic()
        self.check_collide()
        self.ui.display(self.player)


class YSortGroup(pg.sprite.Group):
    def __init__(self):
        super().__init__()
        self.display_surface = pg.display.get_surface()

        self.floor_surf = pg.transform.scale(pg.image.load('./map/images/floor.png').convert(), (704, 704))
        self.floor_rect = self.floor_surf.get_rect(topleft=(MAP_OFFSET_X, MAP_OFFSET_Y))

        self.dec_surf = pg.transform.scale(pg.image.load('./map/images/decorations.png').convert_alpha(), (704, 704))
        self.dec_rect = self.dec_surf.get_rect(topleft=(MAP_OFFSET_X, MAP_OFFSET_Y))

        self.walls_surf = pg.transform.scale(pg.image.load('./map/images/walls.png').convert_alpha(), (704, 704))
        self.walls_rect = self.walls_surf.get_rect(topleft=(MAP_OFFSET_X, MAP_OFFSET_Y))

    def custom_draw(self):
        # drawing the floor under everything
        self.display_surface.blit(self.floor_surf, self.floor_rect)
        self.display_surface.blit(self.dec_surf, self.dec_rect)

        for sprite in sorted(self.sprites(), key=lambda sprite: sprite.rect.centery):
            self.display_surface.blit(sprite.image, sprite.rect.topleft)

        self.display_surface.blit(self.walls_surf, self.walls_rect)

    def enemy_update(self, player):
        enemy_sprites = [sprite for sprite in self.sprites() if hasattr(sprite, 'sprite_type') and sprite.sprite_type == 'enemy']
        for enemy in enemy_sprites:
            enemy.enemy_update(player)
