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


#ifndef GAME_OBJECT
#define GAME_OBJECT


#include "../tools/cpp.hpp"
#include "../tools/log.hpp"

// debug and test:
using std::cout, std::endl;

class Object
{
  /* Example Objects: *these are all objects in the game* */

  public:

    Object()
    {
      this->add_my_type("Object");

      std::cout << std::endl;
      tools__log::created("Object");
    }

    ~Object()
    {
      this->clearObject();

      tools__log::killed("Object");
      std::cout << std::endl;
    }


    std::vector<std::string> get_my_type()
    {
      return this->my_types;
    }


    void add_my_type(std::string value)
    {
      tools_cpp::add(this->my_types, value);
    }

    void add_type_friend(std::string value)
    {
      tools_cpp::add(this->types_of_friends, value);
    }

    void add_type_ignore(std::string value)
    {
      tools_cpp::add(this->types_ignore, value);
    }

    void add_my_res(std::string value)
    {
      tools_cpp::add(this->my_res, value);
    }


    void clearMyRes()
    {
      this->my_res.clear();

      tools__log::cleared("my res");
    }

    void clearMyTypes()
    {
      this->my_types.clear();

      tools__log::cleared("my types");
    }

    void clearTypesignore()
    {
      this->types_ignore.clear();

      tools__log::cleared("types ignore");
    }

    void clearTypesOfFriends()
    {
      this->types_of_friends.clear();

      tools__log::cleared("types of friends");
    }

    void clearObject()
    {
      this->clearMyRes();
      this->clearMyTypes();
      this->clearTypesignore();
      this->clearTypesOfFriends();
    }

  private:

    // имя файла - обьекта:
    std::string name;

    // типы за которые меня принимают:
    std::vector<std::string> my_types;

    // типы которые я могу позволить хранить у себя в контейнерах:
    std::vector<std::string> types_of_friends;

    // типы которые я не могу позволить хранить у себя в контейнерах: - я также не могу хранить те вещи которые не может родителский обьект - например сумку в сумке
    std::vector<std::string> types_ignore;

    // ресурсы которые я в себе храню
    std::vector<std::string> my_res;
};

#endif // GAME_OBJECT

