/* INFO
 *
 * File: tangible.hpp
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


/* */
#ifndef GAME_OBJECT_TANGIBLE
#define GAME_OBJECT_TANGIBLE

/* for inheritance */
#include "object.hpp"    /* Object */

/* for log */
#include "../tools/tools__log.hpp"    /* tools__log */

/* for using */
#include "coordinates.hpp"    /* Coordinates */
#include "exp.hpp"    /* Exp */
#include "xp.hpp"    /* Xp */

/* */
class Tangible : public Object
{
  /* Example Tangibles: Essence Block Map Man ... */
  
  /* */
  public:

    /* */
    Tangible ()
    {
      this->get_my_type ().add ("Tangible");

      tools__log::created ("Tangible");
    }

    /* */
    ~Tangible ()
    {
      tools__log::killed ("Tangible");
    }
  
  /* */
  private:

    /* XYZ */
    Coordinates coordinates;

    /* EXP */
    Exp exp;

    /* XP */
    Xp xp;
};

#endif /* GAME_OBJECT_TANGIBLE */

