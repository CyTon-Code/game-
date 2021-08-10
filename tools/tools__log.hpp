/*
 * File: test.hpp
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


#ifndef GAME_TOOLS__LOG
#define GAME_TOOLS__LOG

namespace tools__log
{
  void launched(std::string _name = "Object")
  {
    std::cerr << _name << " was launched" << std::endl;
  }

  void created(std::string _name = "Object")
  {
    std::cerr << _name << " was created" << std::endl;
  }

  void killed(std::string _name = "Object")
  {
    std::cerr << _name << " was killed" << std::endl;
  }

  void copied(std::string _name = "Object")
  {
    std::cerr << _name << " was copied" << std::endl;
  }

  void cleared(std::string _name = "Array")
  {
    std::cerr << _name << " was cleared" << std::endl;
  }
};

#endif // GAME_TOOLS__LOG

// debug  log and print

