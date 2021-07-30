/*
 * File: xp.hpp
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


#ifndef GAME_OBJECT_XP
#define GAME_OBJECT_XP

#include "./element.hpp"

#include "./test.hpp"

class Xp : public Element
{
    /* Example Xps: Xp ... */

    public:

        Xp()
        {
            test::created("Xp");
        }

        Xp(const long int &_xp)
        {
            this->xp = _xp;

            test::copied("Xp");
        }

        ~Xp()
        {
            test::killed("Xp");
        }

    private:

        long double xp = 1; // XP
};

#endif // GAME_OBJECT_XP
