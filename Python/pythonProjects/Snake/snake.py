import math
import random
import pygame
import tkinter as tk
from tkinter import messagebox

# Cube
class cube(object):
    rows = 0
    w = 0
    def _init_(self,start,dirnx=1,dirny=0,color=(255,0,0)):
        pass

    def move(self, dirnx, dirny):
        pass

    def draw (self, surface, eyes=False):
        pass

class snake(object):
    def __init__(self, color, pos):
        pass

    def move(self):
        pass

    def reset(self, pos):
        pass

    def addCube(self):
        pass

    def draw(self, surface):
        pass


def drawGrid(w, rows, surface):
    sizeBtwn = 


def redrawWindow(surface):
    global rows, width
    surface.fill(0,0,0)
    drawGrid(width, rows, surface)
    pygame.display.update()    


def randomSnack(rows, items):
    pass


def message_box(subject, content):
    pass


def main():
    global rows, width
    width = 500
    rows = 20
    win = pygame.display.set_mode((width, width))
    s = snake((255,0,0), (10,10))
    flag = True

    clock = pygame.time.Clock()

    while flag:
        pygame.time.delay(50)
        clock.tick(10)
        redrawWindow(win)
    pass



main()