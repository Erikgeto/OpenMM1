/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 1
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/*
    pcwindis:dxmovie

    0x556B90 | void __cdecl dxiPlayMovie(char *) | ?dxiPlayMovie@@YAXPAD@Z
*/

// 0x556B90 | ?dxiPlayMovie@@YAXPAD@Z
inline void dxiPlayMovie(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x556B90, arg1);
}
