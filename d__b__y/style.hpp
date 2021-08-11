/* INFO
 *
 * -- META DATA --
 *
 * File: style.hpp
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
...

...
/* THOUGHT
 *
 * -- DEFINE VARIABLE -- STYLE NAMING--
 *
 * If the name DEFINE VARIABLE starts with the word F, this name is the
 * path to this file from the parent folder of your game.
 *
 * If the name DEFINE VARIABLE starts with any word other than F, it is
 * the name of the company or the name of the game - in my case it is
 * DBY or GAME. Then the inheritance style is used in that case.
 *
 * -- DEFINE VARIABLE -- USING _ --
 *
 * The one this _ symbol in DEFINE VARIABLE means '/' in path and 'is'
 * in inheritance.
 *
 * The two this __ symbols in DEFINE VARIABLE is a separator between
 * words in the name.
 *
 * -- FINALLY --
 *
 * This is to make it easier to find your classes, namespaces, and so
 * on ... in the development environment
 *
 *
 */
...

...
/* WARNING
 *
 * -- STYLE NAMING --
 *
 * File address: ./tools/d__b__y__style__example.hpp
 *
 * OR
 *
 * Inheritance in game: Style is DBY
 *
 * EQUAL:
 *
 * define: F_D__B__Y_STYLE
 * namespace, var, fun: style
 * class: Style
 * parent class: DBY
 * parent parent class:
 *
 *
 */
...

...
/* style for: Classes ...: */
#ifndef DBY_STYLE
#define DBY_STYLE

...

#endif /* DBY_STYLE */
...

...
/* style for: Namespaces ...: */
#ifndef F_D__B__Y_STYLE
#define F_D__B__Y_STYLE

...

#endif /* F_D__B__Y_STYLE */
...

...
/* search this lib in *lib/: */
#include <library>    /* commands, that, I, use */
...

...
/* search this lib in ./: */
#include "library.hpp"    /* commands, that, I, use */
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
/* where use: ... */
namespace my_namespace
{
  ...
};
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
else / catch / ...
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
class MyParentClass // for example STORE: my__parent__class.hpp
{
  /* Example MyParentClasses: MyParentClass MyClass ... */

  public:

    ...

  private:

    ...
};
...

...
/* */
class Class
{
  /* Example Classes: Class ... */

  private:

    /* if empty move to up please! And not Remove ... */

  public:

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

