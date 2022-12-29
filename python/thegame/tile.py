import pygame as pg
from settings import *
from map import *


class Tile(pg.sprite.Sprite):
    def __init__(self, pos, groups, sprite_type, surface=pg.Surface((TILE_SIZE, TILE_SIZE))):
        super().__init__(groups)
        self.sprite_type = sprite_type
        self.image = surface
        self.rect = self.image.get_rect(topleft=pos)
        self.hitbox = self.rect
