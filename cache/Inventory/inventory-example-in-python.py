#!/usr/bin/env python
#-*- coding:utf-8 -*-

from download_inventory import *

class Cell:
 """
  In this cell, you can store any item
 """
 res = []

 def is_empty(self):
  return not len(self.res)

 pass

class Slot(Cell):
 """
  Things in this slot affect statistics and character abilities
 """
 pass

class ToolForCraft(Slot):
 pass

class Block:
 """
  можно поставить\ломать как блок
 """
 pass


class Torb(Slot):
 """
  [[0, 0, 0],
   [1, 0, 1],
   [2, 1, 2]]-craft
  If you wear "Torb", its first pocket is displayed on the panel
  Displayed on the panel for taking in hand
 """
 pass

class Helmet(Slot):
 """
  [[1, 1, 1],
   [1, 0, 1],
   [0, 0, 0]]-craft
  Only a helmet can be stored in this slot.
 """
 pass

class Hand(Slot):
 """
  The pointer to selected element in the panel goes to hand
  Only things for 'hand' in this slot affect statistics and abilities of characters
 """
 pass

class Belt(Slot):
 """
  в зависимости от уровня изменяет количество доступных слотов для инструментов
 """
 lvl = 0
 pockets = []

 def update_pockets(self):
  self.pockets = [ToolForCraft() for _ in range(5+self.lvl)]
  pass

 def __init__(self):
  self.lvl = 0
  self.update_pockets()
  pass

 pass

class Bag(Block):
 """
  [[0, 0, 0],
   [1, 0, 1],
   [2, 1, 2]]-craft
  надевается\снимается в слоте для торбы
  можно открывать когда поставлен как блок
  не может хранить в своих ячейках торбу
 """
 pass

class Pocket(Bag):
 """
  [[0, 0, 0],
   [1, 0, 1],
   [2, 1, 2]]-craft
  можно скрафтить
  нужен для улучшения торбы, одежды
 """
 cells = [Cell() for _ in range(9)]
 pass

class Backpack(Bag):
 """
  [[0, 0, 0],
   [1, 0, 1],
   [2, 1, 2]]-craft
  можно скрафтить
  один на планету
  можно открывать когда надет как экипировка
  количество карманов равно уровню рюкзака + 5
 """
 lvl = 0
 pockets = [Pocket() for _ in range(5+lvl)]
 pass

class Pouch(Bag):
 """
  [[0, 0, 0],
   [1, 0, 1],
   [2, 1, 2]]-craft
  количество карманов равно уровню сумки + 3
 """
 lvl = 0
 pockets = [Pocket() for _ in range(3+lvl)]
 pass

class AancientPouchOfDruids(Pouch):
 """
  нельзя скрафтить
  можно получить зачаровав друидами обычную сумку
  одна для всех планет галактики
 """
 pass

class Craft:
 """
  Number of crafts can change tools in tool slots
 """
 pass

class Inventory:
 """
  Equipment - special cells (slots) affecting characteristics of character
  Hand crafts are list of crafts that can be used without "Forge" and "Workbench"
 """

 slots = [Torb()]  # - for Helmet, Sword, Hand ...
 crafts = [Craft()]  # - a Helmet, Sword, Hand ...

 def init(self):
  self.crafts += download_crafts()
  self.slots += download_slots()
 pass

class Panel: # отображается на экране
 """
  если торбы в слоте для торбы нет, то этот слот используется как ячейка
  панель будет отображать всего один карман торбы
  если торбы нет панель отображает слот для торбы как единственную ячейку
 """
 pass
