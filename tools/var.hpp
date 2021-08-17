/*
 * File: var.hpp
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


#ifndef GAME_VAR
#define GAME_VAR

#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string

#include "../tools/tools__log.hpp" // tools__log

/* */
class Var
{
  /* Example Objects: *these are all objects in the game* */

  /* The most important */
  public:

    /* constructor function */
    Var ()
    {
      std::cout << std::endl;
      tools__log::created ("Var");
    }

    /* destructor function */
    ~
    Var ()
    {
      this->clearObject ();

      tools__log::killed ("Var");
      std::cout << std::endl;
    }
    
    /* get my res */
    std::vector<std::string>
    get ()
    {
      return this->res;
    }
    
    /* set my res */
    void
    set (std::vector<std::string> _res)
    {
      this->res = _res;
    }
  
    /* copy function */  
    Var (std::vector<std::string> _res)
    {
      this->set (_res);
      
      tools__log::coptied ("Var");
    }
  
  /* important */
  public:
  
    /* find in vector */
    bool
    find (std::string value)
      const
    {
      for (auto i: this->res)
        {
          if (i == value)
            {
              return true;
            }
        }
      return false;
    } 

    /* */
    void
    clear ()
    {
      this->res.clear ();

      tools__log::cleared ("Var");
    }
    /* push (back) in vector */
    void
    append (std::string value)
    {
      this->res.push_back (value);
    }   
  
    /* push (back) if no _value is found in the array */
    void
    add (std::string _value)
    {
      if (not this->find (_value))
        {
          this->append (_value);
        }
      else
        {
          std::cerr << "I can't pushed! Vector have this value!" << std::endl;
        }
    }

    /* echo-print-write this vector in cout */
    void
    echo (std::string _step=" ", std::string _stop="", std::string _start="")
      const
    {
      std::cout << _start;
      for (auto i: this->res)
        {
          std::cout << i << _step;
        }
      std::cout << _stop;
    }

  /* Python style */
  public:
    
    /* echo vector in python style: */
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
    
    /* */
    void
    add (char* value)
    {
      this->add (std::string (value));
    }

  private:
  
    // TODO:
    // create: Var -> del find echo print  ...

    // типы за которые меня принимают:
    std::vector<std::string> res;
};

#endif // GAME_VAR

