/*
 * File: fun.hpp
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


#ifndef GAME_FUN
#define GAME_FUN

// find example
// #include <algorithm>    // std::find
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string

namespace fun
{
    // search in vector
    // using std::find with vector and iterator:
    bool search(const std::vector<std::string> &array, std::string name)
    {
        for (std::string i : array)
            if (i == name)
                return true;
        return false;
        // return std::find(object.begin(), object.end(), name) != object.end();
    }

    // push (back) in vector
    void add(std::vector<std::string> &array, std::string value)
    {
        // TODO: if value not found in array then add:
            array.push_back(value);
    }


    // save object in file
    template <class type>
    void save(type *object)
    {
        /*
            file={name}.game
            touch $file // creat file
            save(object, $file)
        */
    }


    // load object from file


    // remove


    // get


    // set
};

#endif // GAME_FUN

