/*
 * File: echo.c
 * Autor: Dal Bo Yob
 * Language: C
 *
 * Copyright 2021 My Code <dal@bo.yob>
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


#include <stdio.h>
#include <stdbool.h>

#define TERM_KEYS {"l", "a"}

int main(int arguments_end, char* arguments[])
{
    _Bool end_line = true;
    int arguments_begin = 2;

    // if  count more 1  and  2 argument it's a key  then
    if(arguments_end > 1 && arguments[1][0] == '-' )
    {
        // if  this key it's a -n  then
        if (arguments[1][1] == 'n')
        {
            end_line = false;
        }

        else
        {
            arguments_begin = 1;
        }
    }

    for (int i = arguments_begin; i < arguments_end; i++)
    {
        printf("%s ", arguments[i]);
    }

    if (end_line)
    {
        printf("\n");
    }

    return 0;
}

