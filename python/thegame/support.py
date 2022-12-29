import pygame as pg
from csv import reader
from os import walk


def import_csv_layout(path):
    terrain = list()

    with open(path) as file:
        layout = reader(file, delimiter=',')
        for row in layout:
            terrain.append(list(row))
        return terrain


def import_folder(path):
    surface_list = list()
    for _, __, img_files in walk(path):
        for image in img_files:
            full_path = path + '/' + image
            image_surf = pg.transform.scale(pg.image.load(full_path).convert_alpha(), (64, 64))
            surface_list.append(image_surf)
    return surface_list
