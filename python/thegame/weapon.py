import pygame as pg


class Weapon(pg.sprite.Sprite):
    def __init__(self, player, groups):
        super().__init__(groups)
        self.sprite_type = 'weapon'
        direction = player.status

        self.image = pg.transform.scale(pg.image.load('./sprites/player/weapons/slash.png'), (64, 192)).convert_alpha()

        if direction == 'right':
            self.rect = self.image.get_rect(midleft=player.rect.midright)
        elif direction == 'left':
            self.image = pg.transform.flip(
                pg.transform.scale(pg.image.load('./sprites/player/weapons/slash.png').convert_alpha(), (64, 192)),
                True, False
            )
            self.rect = self.image.get_rect(midright=player.rect.midleft)
