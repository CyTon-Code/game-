/*
 * File: game-.cpp
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


#include "./lib/game.hpp"

int main()
{
    // Tangible();
    // Coordinates();
    // Exp();
    // Xp();
    Slot slot = Slot();
    slot.add_my_type("Slot");
    tools::print(slot.get_my_type());
    cout << tools::find(slot.get_my_type(), "Object") << endl;
    cout << tools::find(slot.get_my_type(), "bject") << endl;

    // Slot();

    // 1. terminal_interface {select planet, u/mount galaxy, next, exit} - run bash
    // 2. load configs, data - create map, objects... - run cpp game --planet your_planet
    // 3. game: terminal_interface {save/load/del/add/find/edit/... object/s, close}
    // 4. save congigs, data - delete map, objects ...
    // 5. terminal_interface {select planet, u/mount galaxy, next, exit} - run bash

    return 0;
}
