/*
 * File: man.hpp
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


#ifndef GAME_OBJECT_ESSENCE_MAN
#define GAME_OBJECT_ESSENCE_MAN

#include "./essence.hpp"

class Man : public Essence
{
    /* Example Mans: Elf Gnom Druid Man ... */

    public:

        Man()
        {
            this->add_my_type("Man");

            // this->add slots for objects of Essence-Man (head, body, foot)

            cout << "Man created" << endl;
        }

        ~Man()
        {
            cout << "Man killed" << endl;
        }

    private:
};

#endif // GAME_OBJECT_ESSENCE_MAN

