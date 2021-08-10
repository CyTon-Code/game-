/*
 * File: cpp.hpp
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


#ifndef TOOLS_CPP
#define TOOLS_CPP

#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string

namespace tools_cpp
{
  // echo-print-write this vector in cout
  void echo (const std::vector<std::string> array)
  {
    for (auto i: array)
      {
        std::cout << i << " ";
      }
    std::cout << std::endl;
  }

  // echo-print-write this vector in cout
  void print (const std::vector<std::string> array)
  {
    std::cout << "[";
    for (auto i: array)
      {
        std::cout << i << ", ";
      }
    std::cout << "]" << std::endl;
  }

  // find in vector
  bool find (const std::vector<std::string> &array, std::string name)
  {
    for (auto i: array)
      {
        if (i == name)
          {
            return true;
          }
      }
    return false;
  }


  // push (back) if value not found in array
  void add (std::vector<std::string> &array, std::string value)
  {
    if (not tools_cpp::find (array, value))
      {
        array.push_back (value);
      }
    else
      {
        std::cerr << "I can't pushed! Vector have this value!" << std::endl;
      }
  }


  // push (back) in vector
  void append (std::vector<std::string> &array, std::string value)
  {
    array.push_back (value);
  }
};

#endif // TOOLS_CPP

