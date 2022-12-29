import pygame as pg
import sys
from settings import *
from map import *
from player import *


class Game:

    def __init__(self):
        pg.init()
        print("""Controls:
        LEFT, RIGHT, UP, DOWN - movement
        SPACE - attack
        LCTRL - heal        
        """)
        self.screen = pg.display.set_mode(RES)
        self.clock = pg.time.Clock()
        self.map = Map()

    def event_handler(self):
        for event in pg.event.get():
            keys = pg.key.get_pressed()
            if event.type == pg.QUIT or keys[pg.K_ESCAPE]:
                pg.quit()
                sys.exit()

        if self.map.is_exiting:
            self.map = Map()
            self.map.is_exiting = False

    def update(self):
        pg.display.update()
        self.clock.tick(FPS)
        pg.display.set_caption(f'{self.clock.get_fps() :.1f}')

    def draw(self):
        self.screen.fill('#000000')
        if self.map:
            self.map.run()

    def change_map(self):
        # self.map = None
        self.map = Map()

    def run(self):
        while True:
            self.event_handler()
            self.update()
            self.draw()


if __name__ == '__main__':
    game = Game()
    game.run()
