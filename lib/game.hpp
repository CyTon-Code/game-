/*
 * File: game.hpp
 * Language: Cpp
 * Author: Dal Bo Yob
 * We: DBY Company
 *
 * Copyright 2021 DBY Company <dal@bo.yob>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#include "block.hpp"
#include "cell.hpp"
#include "container.hpp"
#include "coordinates.hpp"
#include "count.hpp"
#include "craft.hpp"
#include "element.hpp"
#include "essence.hpp"
#include "exp.hpp"
#include "man.hpp"
#include "map.hpp"
#include "mouse.hpp"
#include "not__tangible.hpp"
#include "object.hpp"
#include "objects.hpp"
#include "slot.hpp"
#include "tangible.hpp"
#include "tools__cpp.hpp"
#include "tools__log.hpp"
#include "tools__object.hpp"


#ifndef GAME
#define GAME

class Game
{
    /* Example Games: Game ... */

    public:

    private:

        // Имена блоков на карте
        // Имена сущстностей на карте
        // Имена предметов на карте

        Map my_objects_on_map;

        // обьекты игры:
        Objects my_objects;
};

#endif // GAME

