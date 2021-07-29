/*
 * File: mouse.hpp
 * Autor: Dal Bo Yob
 * Language: Cpp
 *
 * Copyright 2021 Game Code <dal@bo.yob>
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


#ifndef GAME_OBJECT_TANGIBLE
#define GAME_OBJECT_TANGIBLE

#include "./object.hpp"

#include "./coordinates.hpp"
#include "./exp.hpp"
#include "./xp.hpp"

#include "./test__fun.hpp"

class Tangible : public Object
{
    /* Example Tangibles: Essence Block Map Man ... */

    public:

        Tangible()
        {
            this->add_my_type("Tangible");

            test::created("Tangible");
        }

        ~Tangible()
        {
            test::killed("Tangible");
        }

    private:

        Coordinates coordinates;
        Exp exp; // EXP
        Xp xp; // XP


};

#endif // GAME_OBJECT_TANGIBLE

