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


#ifndef GAME_ELEMENT
#define GAME_ELEMENT

#include "../tools/tools__cpp.hpp"
#include "../tools/tools__log.hpp"

class Element
{
  /* Example Elements: Exp Xp Coordinates Object?? ... */

  public:

  Element()
  {
    std::cout << std::endl;
    tools__log::created("Element");
  }

  ~Element()
  {
    this->clearType();

    tools__log::killed("Element");
    std::cout << std::endl;
  }

  void add_my_res(std::string value)
  {
    tools_cpp::add(this->my_res, value);
  }

  void clearMyRes()
  {
    this->my_res.clear();
    tools__log::cleared("Element");
  }


  void clearType()
  {
    this->clearMyRes();
  }

  private:

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;
};

#endif // GAME_ELEMENT

