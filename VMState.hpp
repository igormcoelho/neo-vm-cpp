#ifndef VMSTATE_HPP
#define VMSTATE_HPP

#include "Basic.hpp"

namespace vm
{
    enum class VMState : byte
    {
        NONE = 0,

        HALT = 1 << 0,
        FAULT = 1 << 1,
        BREAK = 1 << 2
    };
}

#endif
