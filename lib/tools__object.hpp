/*
 * File: tools_object.hpp
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


#ifndef GAME_TOOLS__OBJECT
#define GAME_TOOLS__OBJECT

namespace tools_object
{
    // save object in file
    template <class type>
    void save(type &object)
    {
        /*
            file={object.name}.hpp
            touch $file // creat file
            save(object, $file)
        */
    }


    // load object from file


    // remove


    // get


    // set
};

#endif // GAME_TOOLS__OBJECT

