import pygame as pg


class MagicPlayer:

    def heal(self, player, cost):
        if player.energy >= cost:
            player.health += player.stats['health'] / 3
            player.energy -= cost
            if player.health >= player.stats['health']:
                player.health = player.stats['health']