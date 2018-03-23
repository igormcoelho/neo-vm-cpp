#ifndef VMSTATE_HPP
#define VMSTATE_HPP

#include "Basic.hpp"

namespace vm
{
    enum VMState
    {
        NONE = 0,

        HALT = 1 << 0,
        FAULT = 1 << 1,
        BREAK = 1 << 2
    };

    class VMFlags {
    public:
        static bool HasFlag(VMState state, VMState flag) {
           return false; // TODO: fix
        }
        
        static bool HasFlag(int state, VMState flag) {
           return false; // TODO: fix
        }
    };
}

#endif
