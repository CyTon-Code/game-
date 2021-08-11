/* INFO
 *
 * -- META DATA --
 *
 * File: tools__str.hpp
 * Language: Cpp
 * Author: Dal Bo Yob
 * We: DBY Company
 *
 * -- COPYRIGHT --
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

/* */
#ifndef F_D__B__Y_TOOLS__STR
#define F_D__B__Y_TOOLS__STR

/* for write text in IO stream: */
#include <iostream>    /* std, std::cout, std::endl */

/* for work with string: */
#include <string>    /* std::string */

/* where use: tools__str::use_function */
namespace tools__str
{
  /* converting_to_string translates c_str into string: */
  std::string
  converting_to_string (const char c_str[])
  {
    /* convert to string: */
    return std::string (c_str);
  }

  /* use_function use converting_chars_to_string function: */
  void
  use_function ()
  {
    /* write done text in cout: */
    std::cout << tools__str::converting_to_string ("text") << std::endl;
  }
};

#endif /* F_D__B__Y_TOOLS__STR */

/* THOUGHT
 *
 * -- DEFINE VARIABLE --
 *
 * If the name DEFINE VARIABLE begins with __ characters, this is the
 * path to that file from the parent folder of your game.
 *
 * If the name DEFINE VARIABLE starts with a word and not __
 * characters, it's the name of the company or the name of the game -
 * in my case it's DBY or GAME.
 *
 * This is to make it easier to find your classes, namespaces, and so
 * on ... in the development environment
 *
 * The _ symbol in DEFINE VARIABLE means '/' in path and 'is' in
 * inheritance.
 *
 * The __ symbol in DEFINE VARIABLE is a separator between words in the
 * name.
 *
 *
 */

/* WARNING
 *
 * -- STYLE NAMING --
 *
 * File address: ./d__b__y/my_namespace.hpp
 *
 * OR
 *
 * Inheritance in game: MyNamespace is DBY
 *
 * EQUAL:
 *
 * define: __D__B__Y_MY__NAMESPACE
 * namespace, var, fun: my__namespace
 * class: MyNamespace
 * parent class: DBY
 * parent parent class:
 *
 *
 */

...
/* reason use this: */
#include *lib/ <library>    /* commands, that, I, use */
...

...
/* reason use this: */
#include ./    "library.hpp"    /* commands, that, I, use */
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

