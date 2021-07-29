/*
 * File: coordinates.hpp
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


#ifndef GAME_OBJECT_COORDINATES
#define GAME_OBJECT_COORDINATES

#include "./element.hpp"

#include "./test__fun.hpp"

class Coordinates : public Element
{
    /* Example Coordinateses: Coordinates ... */

    public:

        Coordinates()
        {
            test::created("Coordinates");
        }

        Coordinates(const long double &_x, const long double &_y, const long double &_z)
        {
            this->x = _x;
            this->y = _y;
            this->z = _z;

            test::copied("Coordinates");
        }

        ~Coordinates()
        {
            test::killed("Coordinates");
        }

    private:

        long double x = 0, y = 0, z = 0; // coordinates
};

#endif // GAME_OBJECT_COORDINATES

