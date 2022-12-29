
# ! There is a great chance that something won't work if you change something

# MAP
MAP_OFFSET_X, MAP_OFFSET_Y = 100, 100
TILE_SIZE = 64

# MAIN
FPS = 60
RES = WIDTH, HEIGHT = 904, 904

# PLAYER
PLAYER_STATS = {'health': 100, 'energy': 60, 'attack': 5, 'magic': 4, 'exp': 0}

MOVE_COOLDOWN = 150
ATTACK_COOLDOWN = 200
MAGIC_COOLDOWN = 500

# WEAPONS
weapon_data = {
    'sword': {'damage': 15, 'graphic': './sprites/player/weapons/sword.png'}
}

# MAGIC
magic_data = {
    'heal': {
        'cost': 20,
    }
}

# ENEMY
enemy_data = {
    'imp': {'health': 25, 'exp': 100, 'damage': 5, 'resistance': 3, 'cooldown': 350, 'attack_radius': 100},
    'chort': {'health': 50, 'exp': 250, 'damage': 20, 'resistance': 3, 'cooldown': 1000, 'attack_radius': 100},
}

# UI
BAR_WIDTH = 576
BAR_HEIGHT = 20

UI_BG_COLOR = '#222222'
UI_BORDER_COLOR = '#333333'
UI_FONT = './font/joystix.ttf'
UI_FONT_COLOR = '#eeeeee'
UI_FONT_SIZE = 30

HEALTH_COLOR = 'red'
ENERGY_COLOR = 'blue'
