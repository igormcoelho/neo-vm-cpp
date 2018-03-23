#ifndef BYTE_ARRAY_HPP
#define BYTE_ARRAY_HPP

#include <vector>

#include "../StackItem.hpp"
#include "../Basic.hpp"

namespace vm
{
    class ByteArray : public StackItem
    {
    public:
        std::vector<byte> value;

        virtual int typeId() {
          return 2;
        }

        ByteArray()
        {
          // empty
        }

        ByteArray(byte bvalue)
        {
            this->value = std::vector<byte>(1,bvalue);
        }

        ByteArray(BigInteger big)
        {
            this->value = big.ToByteArray();
        }

        ByteArray(int ivalue)
        {
            this->value = std::vector<byte>(1,ivalue);
        }

        ByteArray(std::vector<byte> value)
        {
            this->value = value;
        }

        bool Equals(StackItem* other)
        {
            if(!other)
                return false;
            return value == other->GetByteArray();
        }

        std::vector<byte> GetByteArray()
        {
            return value;
        }

    };
}

#endif
