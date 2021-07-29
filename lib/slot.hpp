/*
 * File: slot.hpp
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


#ifndef GAME_OBJECT_NOT__TANGIBLE_SLOT
#define GAME_OBJECT_NOT__TANGIBLE_SLOT

#include "./not__tangible.hpp"

class Slot: public NotTangible
{
    /* Example Slots: Slot ... */

    public:

      Slot()
    {
        this->add_my_type("Container");
        this->add_my_type("Slot");

        cout << "Slot created" << endl;
    }


        ~Slot()
        {
            this->clearTypesOfChanges();

            cout << "Slot killed" << endl;
        }

        void clearSlot()
        {
            this->clearObject();
            this->clearTypesOfChanges();
        }

        void clearTypesOfChanges()
        {
            this->types_of_changes.clear();

            test::cleared("types of changes");
        }

    private:

        // типы влияющие на статистику объекта в котором нахожусь:
        std::vector<std::string> types_of_changes;
};

#endif /* GAME_OBJECT_NOT__TANGIBLE_SLOT */

