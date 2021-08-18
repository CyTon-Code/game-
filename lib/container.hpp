/* INFO
 *
 * File: container.hpp
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
 *
 */


#ifndef GAME_OBJECT_NOT__TANGIBLE_CONTAINER
#define GAME_OBJECT_NOT__TANGIBLE_CONTAINER

#include "./not__tangible.hpp"

#include "../tools/array.hpp"

class Container : public NotTangible
{
  /* Example Container: Cell Slot Panel ... */

  public:

    Container()
    {
      this->get_my_type().add("Container");

      cout << "Container was created" << endl;
    }

    ~Container()
    {
      cout << "Container was killed" << endl;
    }

    void clearContainer()
    {
      this->my_res.clear();
    }

  private:

    // ресурсы которые я в себе храню
    Array my_res;
};

#endif // GAME_OBJECT_NOT__TANGIBLE_CONTAINER

