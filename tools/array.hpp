/*
 * File: array.hpp
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


#ifndef GAME_LIST
#define GAME_LIST

#include <iostream>    /* std::cout */
#include <vector>    /* std::vector */
#include <string>    /* std::string */

#include "../tools/tools__log.hpp"    /* tools__log */

/* */
class Array
{
  /* Example Objects: *these are all objects in the game* */

  /* The most important */
  public:

    /* constructor function */
    Array ()
    {
      std::cout << std::endl;
      tools__log::created ("Array");
    }

    /* destructor function */
    ~Array ()
    {
      this->clear ();

      tools__log::killed ("Array");
      std::cout << std::endl;
    }
    
    /* get my array */
    std::vector<std::string>
    get ()
    {
      return this->array;
    }
    
    /* set my array */
    void
    set (std::vector<std::string> _array)
    {
      this->array = _array;
    }
  
    /* copy to my array */  
    Array (std::vector<std::string> _array)
    {
      this->set (_array);
      
      tools__log::coptied ("Array");
    }
  
  /* important */
  public:
  
    /* find in vector */
    bool
    find (const std::string &_value)
      const
    {
      for (auto i: this->array)
        {
          if (i == _value)
            {
              return true;
            }
        }
      return false;
    } 

    /* clear my array */
    void
    clear (_name_array_for_log="Array")
    {
      this->array.clear ();

      tools__log::cleared (_name_array_for_log);
    }
  
    /* push (back) in vector */
    void
    append (const std::string &_value)
    {
      this->array.push_back (_value);
    }   
  
    /* push (back) if no _value is found in the array */
    void
    add (const std::string &_value)
    {
      if (not this->find (_value))
        {
          this->append (_value);
        }
      else
        {
          std::cerr << "I can't pushed! array have this value!" << std::endl;
        }
    }

    /* output this vector to the terminal
     * 
     * start - output before printing array
     * step - print after everyone ellement in array
     * stop - output after printing array
     * return - void
     * 
     * 
     */
    void
    echo (std::string _step=" ", std::string _stop="", std::string _start="")
      const
    {
      std::cout << _start;
      for (auto i: this->array)
        {
          std::cout << i << _step;
        }
      std::cout << _stop;
    }

  /* Python style */
  public:
    
    /* output this vector to the terminal in python style */
    void
    print ()
      const
    {
      this->echo
        (
          ", ", // step - separator
          "]", // stop - example: \n
          "[" // start
        )
    }
    
  /* converting a string from C to Cpp */
  public:
    
    /* converting and after push (to end) if no _value is found in the array */
    void
    add (const char* _value)
    {
      this->add (std::string (_value));
    }
    
  /* TODO add function */
  public:
      
    /* */
    /*
    void
    del (const std::string &_value)
    {
      ...
    }
    */
  
    /* */
    /*
    int
    search (const std::string &_value)
    {
      ...
    }
    */
  
     /* get end element * / end ()
     /* ... () */
  private:
  
    /* my lines */ 
    std::vector<std::string> array;
};

#endif /* GAME_LIST */

