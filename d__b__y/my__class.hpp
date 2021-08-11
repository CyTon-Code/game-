/* INFO
 *
 * File: d__b__y__style__example.hpp
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
...

...
/* THOUGHT
 *
 *
 */
...

...
/* WARNING
 *
 * <!-- STYLE NAMING -->
 *
 * File address: ./tools/d__b__y__style__example.hpp
 *
 * OR
 *
 * Inheritance in game: DBYStyleExample is Tools
 *
 * EQUAL:
 *
 * define: __TOOLS_D__B__Y__STYLE__EXAMPLE
 * namespace, var, fun: d__b__y__style__example
 * class: DBYStyleExample
 *
 *
 */

/* style for: Classes ...: */
#ifndef DBY_MY__PARENT__CLASS_MY__CLASS
#define DBY_MY__PARENT__CLASS_MY__CLASS

/* for inheritance: */
#include "my__parent__class.hpp"    /* MyParentClass */

/* */
class MyClass : public MyParentClass
{
  /* Example MyClasses: MyClass ... */

  private:

    /* if empty move to up please! And not Remove ... */

  public:

    /* after creation: */
    MyClass() //  EVENTS function
    {
      tools__log::created("MyClass");
    }

    /* before removal: */
    ~MyClass() //  EVENTS function
    {
      tools__log::killed("MyClass");
    }
};

#endif /* DBY_MY__PARENT__CLASS_MY__CLASS */

