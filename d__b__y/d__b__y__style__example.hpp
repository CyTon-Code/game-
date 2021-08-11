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
 *
 * <!--
 *  sometimes the name of the first folder can be changed to DBY or GAME
 *  - the name of the company or the name of the game
 *  -->
 *
 * namespace, var, fun: d__b__y__style__example
 * class: DBYStyleExample
 *
 *
 */
...

...
/* */
#ifndef __TOOLS_D__B__Y__STYLE__EXAMPLE
#define __TOOLS_D__B__Y__STYLE__EXAMPLE

...

#endif /* __TOOLS_D__B__Y__STYLE__EXAMPLE */
...

...
/* reason use this: */
#include *lib/ <library>    /* commands, that, I, use */
...

...
/* reason use this: */
#include ./    "library.hpp"    /* commands, that, I, use */
...

...
/* my_function makes it ... */
return_type
my_function (type_element name_element, ...)
{
  ...
}
...

...
/* my_namespace stores: ... */
namespace my_namespace
{
  ...
};
...

...
/* */
else / catch / ...
  {
    ...
  }
...

...
/* */
for / try / if / else if / while / ... (...)
  {
    ...
  }
...

...
/* */
do
  {
    ...
  }
while (...) /* */
...

...
/* */
class MyParentClass // STORE: my__parent__class.hpp
{
  /* Example MyParentClasses: MyParentClass MyClass ... */

  public:

    ...

  private:

    ...
};
...

...
/* for inheritance: */
#include "my__parent__class.hpp"    /* MyParentClass */

/* */
class MyClass : public MyParentClass
{
  /* Example MyClasses: MyClass ... */

  public:

    ...

  private:

    ...
};
...

...
/* after creation: */
MyClass() //  EVENTS function
{
  ...

  tools__log::created("MyClass");
}
...

...
/* before removal: */
~MyClass() //  EVENTS function
{
  ...

  tools__log::killed("MyClass");
}
...

...
/* copying: */
~MyClass(...) //  EVENTS function
{
  ...

  tools__log::copied("MyClass");
}
...

