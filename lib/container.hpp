/* INFO
 *
 * File: container.hpp
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


#ifndef GAME_OBJECT_NOT__TANGIBLE_CONTAINER
#define GAME_OBJECT_NOT__TANGIBLE_CONTAINER

/* for inheritance */
#include "./not__tangible.hpp"    /* NotTangible */

/* for using */
#include "../tools/array.hpp"    /* Array */

/* for log */
#include "../tools/tools__log.hpp"    /* tools__log */

/* */
class Container : public NotTangible
{
  /* Example Container: Cell Slot Panel ... */
    
  /* */
  public:
    
    /* */
    Container ()
    {
      this->get_my_type ().add("Container");

      tools__log::created ("Container");
    }
  
    /* */
    ~Container ()
    {
      tools__log::killed ("Container");
    }
    
    /* */
    void
    clear_Container ()
    {
      this->my_res.clear ();
    }    

    /* */
    void
    clear ()
    {
      this->clear_Container ();
    }
    
  /* */
  private:

    /* The resources I keep in me */
    Array my_res;
};

#endif /* GAME_OBJECT_NOT__TANGIBLE_CONTAINER */

