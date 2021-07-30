/*
 * File: exp.hpp
 * Autor: Dal Bo Yob
 * Language: Cpp
 *
 * Copyright 2021 Game Code <dal@bo.yob>
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


#ifndef GAME_OBJECT_EXP
#define GAME_OBJECT_EXP

#include "./element.hpp"

#include "./test.hpp"

class Exp : public Element
{
    /* Example Exps: Exp ... */

    public:

        Exp()
        {
           test::created("Exp");
        }

        Exp(const long int &_exp)
        {
            this->exp = _exp;

            test::copied("Exp");
        }

        ~Exp()
        {
            test::killed("Exp");
        }

    private:

        long int exp = 1; // EXP
};

#endif // GAME_OBJECT_EXP

