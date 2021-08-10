/*
 * File: count.hpp
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


#ifndef GAME_OBJECT_NOT__TANGIBLE_COUNT
#define GAME_OBJECT_NOT__TANGIBLE_COUNT

#include "./not__tangible.hpp"

class Count: public NotTangible
{
  /* Example Counts: Count ... */

  public:

    Count()
    {
      this->add_my_type("Stack");
      this->add_my_type("Count");

      cout << "Count created" << endl;
    }


    ~Count()
    {
      cout << "Count killed" << endl;
    }

  private:

    // ссылка на обьект которого в ячейке более 1:
    std::string link_on_object;

    // количество копий этого обьекта:
    long int count;
};

#endif /* GAME_OBJECT_NOT__TANGIBLE_COUNT */

