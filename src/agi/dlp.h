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

// agi:dlp

#include "hooking.h"

// 0x70ED90 | ?DLPHash@@3VHashTable@@A
inline extern_var(0x70ED90, class HashTable, DLPHash);

class DLP : agiRefreshable
{
public:
    // DLP::`vftable' @ 0x595DF0

    // 0x53FD10 | ??0DLP@@QAE@PAVagiPipeline@@@Z
    inline DLP(class agiPipeline* arg1)
    {
        stub<member_func_t<void, DLP, class agiPipeline*>>(0x53FD10, this, arg1);
    }

    // 0x53FE80 | ?FixTemplateRefs@DLP@@IAEXH@Z
    inline void FixTemplateRefs(int32_t arg1)
    {
        return stub<member_func_t<void, DLP, int32_t>>(0x53FE80, this, arg1);
    }

    // 0x540180 | ?Init@DLP@@QAEHPAD0PAVVector3@@@Z
    inline int32_t Init(char* arg1, char* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<int32_t, DLP, char*, char*, class Vector3*>>(0x540180, this, arg1, arg2, arg3);
    }

    // 0x540200 | ?Init@DLP@@QAEHPAVDLPTemplate@@PADPAVVector3@@@Z
    inline int32_t Init(class DLPTemplate* arg1, char* arg2, class Vector3* arg3)
    {
        return stub<member_func_t<int32_t, DLP, class DLPTemplate*, char*, class Vector3*>>(
            0x540200, this, arg1, arg2, arg3);
    }

    // 0x5402E0 | ?Clone@DLP@@QAEPAV1@XZ
    inline class DLP* Clone()
    {
        return stub<member_func_t<class DLP*, DLP>>(0x5402E0, this);
    }

    // 0x540170 | ?EndGfx@DLP@@UAEXXZ
    inline void EndGfx() override
    {
        return stub<member_func_t<void, DLP>>(0x540170, this);
    }

    // 0x540370 | ?GetName@DLP@@UAEPADXZ
    inline char* GetName() override
    {
        return stub<member_func_t<char*, DLP>>(0x540370, this);
    }

    // 0x53FD70 | ??1DLP@@UAE@XZ
    inline ~DLP() override
    {
        stub<member_func_t<void, DLP>>(0x53FD70, this);
    }

    // 0x53FF50 | ?BeginGfx@DLP@@UAEHXZ
    inline int32_t BeginGfx() override
    {
        return stub<member_func_t<int32_t, DLP>>(0x53FF50, this);
    }

    // 0x540310 | ?Cull@DLP@@UAEXH@Z
    virtual inline void Cull(int32_t arg1)
    {
        return stub<member_func_t<void, DLP, int32_t>>(0x540310, this, arg1);
    }

    // 0x5403B0 | ?FixROpts@DLP@@UAEXHH@Z
    virtual inline void FixROpts(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, DLP, int32_t, int32_t>>(0x5403B0, this, arg1, arg2);
    }
};
