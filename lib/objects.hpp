/*
 * File: objects.hpp
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


// WARN:
// THIS FILE WILL BE CREATED AUTOMATICALLY


#include "all__objects.hpp"

#ifndef GAME_OBJECTS
#define GAME_OBJECTS

class Objects
{
  /* Objects: store all objects in game */

  public:

    Objects()
    {
      cout << "Objects created" << endl;
    }

    ~Objects()
    {
      cout << "Objects killed" << endl << endl;
    }

  private:

    // Objects all_objects;
    // all objects:

    std::vector<Cell> all_cells; // for auto i:COUNT_CELL: .back_push(Cell())
    std::vector<Slot> all_slots; // for auto i:COUNT_SLOT: .back_push(Slot())

    // ... all types ????
};

#endif // GAME_OBJECTS

