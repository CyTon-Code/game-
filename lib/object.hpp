/*
 * File: object.hpp
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
#ifndef GAME_OBJECT
#define GAME_OBJECT

/* for using */
#include "../tools/array.hpp"

/* for log */
#include "../tools/tools__log.hpp"

/* */
class Object
{
  /* Example Objects: *these are all objects in the game* */

  /* */
  public:

    /* */
    Object ()
    {
      this->get_my_types ().add ("Object");

      std::cout << std::endl;
      tools__log::created ("Object");
    }

    /* */
    ~Object ()
    {
      this->clear ();

      tools__log::killed ("Object");
      std::cout << std::endl;
    }
  
    /* */
    void
    save ()
    {
      /* */
      tools__cpp::save
        (
          this->name,
          this->my_types,
          this->types_of_friends,
          this->types_ignore,
          this->my_res
        )
    }
  
    /* */
    void
    load()
    {
      /* */
      tools__cpp::load
        (
          this->my_types,
          this->types_of_friends,
          this->types_ignore,
          this->my_res
        ) = tools__cpp::load (this->name)
    }

    /* */
    List
    get_my_types ()
    {
      return this->my_types ();
    }
  
    /* */
    List
    get_types_of_friends ()
    {
      return this->types_of_friends ();
    }
  
    /* */
    List
    get_types_ignore ()
    {
      return this->types_ignore ();
    }
  
    /* */
    List
    get_my_res ()
    {
      return this->my_res ();
    }
  
    /* */
    std::string
    get_name ()
    {
      return this->name;
    }

    /* */
    void
    clear_Object ()
    {
      this->my_types.clear ();
      this->types_of_friends.clear ();
      this->types_ignore.clear ();
      this->my_res.clear ();
    }
  
    /* */
    void
    clear ()
    {
      this->clear_Object ();
    }

  private:
  
    /* имя файла - обьекта */
    std::string name;

    /* типы за которые меня принимают */
    List my_types;

    /* типы которые я могу позволить хранить у себя в контейнерах */
    List types_of_friends;

    /* типы которые я не могу позволить хранить у себя в контейнерах
     * - я также не могу хранить те вещи которые не может родителский обьект - например сумку в сумке
     *
     *
     */
    List types_ignore;

    /* ресурсы которые я в себе храню */
    List my_res;
};

#endif /* GAME_OBJECT */

