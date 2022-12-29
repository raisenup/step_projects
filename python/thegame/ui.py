import pygame as pg
from settings import *


class UI:
    def __init__(self):
        self.display_surface = pg.display.get_surface()
        self.font = pg.font.Font(UI_FONT, UI_FONT_SIZE)

        self.health_bar_rect = pg.Rect((WIDTH - BAR_WIDTH) / 2, 748, BAR_WIDTH, BAR_HEIGHT)
        self.energy_bar_rect = pg.Rect((WIDTH - BAR_WIDTH) / 2, 780, BAR_WIDTH, BAR_HEIGHT)

    def show_bar(self, curr_amount, max_amount, bg_rect, color):
        # bg
        pg.draw.rect(self.display_surface, UI_BG_COLOR, bg_rect)

        # converting stat to pixel
        ratio = curr_amount / max_amount
        curr_width = bg_rect.width * ratio
        curr_rect = bg_rect.copy()
        curr_rect.width = curr_width

        # drawing the bar
        pg.draw.rect(self.display_surface, color, curr_rect)
        pg.draw.rect(self.display_surface, UI_BORDER_COLOR, bg_rect, 4)

    def show_exp(self, exp):
        text_surf = self.font.render(str(int(exp)), False, UI_FONT_COLOR)
        x = self.display_surface.get_size()[0] / 2
        y = 100
        text_rect = text_surf.get_rect(center=(x, y))
        self.display_surface.blit(text_surf, text_rect)

    def display(self, player):
        self.show_bar(player.health, player.stats['health'], self.health_bar_rect, HEALTH_COLOR)
        self.show_bar(player.energy, player.stats['energy'], self.energy_bar_rect, ENERGY_COLOR)
        self.show_exp(player.exp)
