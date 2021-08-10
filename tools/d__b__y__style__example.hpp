/*
 * File: DBY__style__example
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



/* WARN
 * 
 * Adress on file: ./tools/d__b__y__style__example.hpp
 * 
 * or
 * 
 * Inheritance in game: DBYStyleExample is Tools
 * 
 * equale:
 * 
 * define: TOOLS_D__B__Y__STYLE__EXAMPLE
 * namespace, var, fun: d__b__y__style__example
 * class: DBYStyleExample
 * 
 */
#ifndef TOOLS_D__B__Y__STYLE__EXAMPLE
#define TOOLS_D__B__Y__STYLE__EXAMPLE

#include /lib/ <library>     // commands, that, I, use
#include ./    "library"     // commands, that, I, use


/* this function makes it ... */
return_type
name_function (type_element name_element, ...)
{
  ...
}

...
/* */
namespace name_namespace
{
  ...

};
...

...
/* Question? */
if (true)
  {
    ...
  }
else
  {
    ...
  }
...

...
/* */
for (...)
  {
    ...
  }
...


/* echo-print-write this vector in cout */
void
print (const std::vector<std::string> array)
{
  std::cout << "[";
  for (auto i: array)
    {
      std::cout << i << ", ";
    }
  std::cout << "]" << std::endl;
}

/* find in vector */
bool
find (const std::vector<std::string> &array, std::string name)
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


/* push (back) if value not found in array */
void
add (std::vector<std::string> &array, std::string value)
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


/* push (back) in vector */
void
append (std::vector<std::string> &array, std::string value)
{
  array.push_back (value);
}


#endif /* TOOLS_D__B__Y__STYLE__EXAMPLE */

