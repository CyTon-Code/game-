/*
 * File: mouse.hpp
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


#ifndef GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE
#define GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE


#include "./cell.hpp"

class Mouse : public Cell
{
    /* Example Slots: Mouse ... */

    public:

        Mouse()
        {
            this->add_my_type("Mouse");

            cout << "Mouse was created" << endl;
        }

        ~Mouse()
        {
            cout << "Mouse was killed" << endl;
        }

    private:
};

#endif // GAME_OBJECT_NOT__TANGIBLE_CELL_MOUSE

