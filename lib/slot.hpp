/*
 * File: slot.hpp
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

/* */
#ifndef GAME_OBJECT_NOT__TANGIBLE_SLOT
#define GAME_OBJECT_NOT__TANGIBLE_SLOT

/* for inheritance */
#include "not__tangible.hpp"    /* NotTangible */

/* */
#include "../tools/array.hpp"    /* Array */
#include "../tools/tools__log.hpp"    /* for log */

/* */
class Slot: public NotTangible
{
  /* Example Slots: Slot ... */

  public:

    /* */
    Slot()
    {
      this->add_my_type("Container");
      this->add_my_type("Slot");

      tools__log::created("Slot");
    }


    /* */
    ~Slot()
    {
      this->clearTypesOfChanges();

      tools__log::killed("Slot");
    }

    /* */
    void
    clear_Slot()
    {
      this->clearObject();
      this->types_of_changes.clear("types of changes");
    }
    
    /* */
    void
    clear()
    {
      this->clear_Slot();
    }

  private:

    /* types that affect the statistics of the object I am in */
    Array types_of_changes;
};

#endif /* GAME_OBJECT_NOT__TANGIBLE_SLOT */

