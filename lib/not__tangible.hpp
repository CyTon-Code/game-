/* INFO
 *
 * File: not__tangible.hpp
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


/* THOUGHT
 *
 * This class is not used or needed ...
 * Should I delete it?
 *
 *
 */


/* REASON DROP
 *
 * I add this class to have a NotTangible tag in my_type. But is this
 * tag worth an entire class? I have a Tangible tag in my_type, which
 * is the opposite of NotTangible. Using the 'not' + Tangible tag, you
 * can discard the NotTangible tag.
 *
 *
 */


#ifndef GAME_OBJECT_NOT__TANGIBLE
#define GAME_OBJECT_NOT__TANGIBLE

#include "./object.hpp"

class NotTangible : public Object
{
    /* Example NotTangibles: Cell Slot ... */

    public:

        NotTangible()
        {
            this->add_my_type("NotTangible");

            cout << "NotTangible created" << endl;
        }

        ~NotTangible()
        {
            cout << "NotTangible killed" << endl;
        }

    private:
};

#endif // GAME_OBJECT_NOT__TANGIBLE

