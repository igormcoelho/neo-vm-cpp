#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <vector>

#include "../StackItem.hpp"
#include "../Basic.hpp"
#include "../BigInteger.hpp"

namespace vm
{
    class Integer : StackItem
    {
    private:
        BigInteger value;

    public:
        Integer(BigInteger value) {
            this->value = value;
        }

        virtual int typeId() {
          return 3;
        }

        bool Equals(StackItem* other) {
            if(!other) {
                return false;
            }
            if(this->typeId() == other.typeId()) {
                Integer* i = (Integer*) other;
                return value == i->value;
            }
            else
                return GetByteArray() == other->GetByteArray();
        }

        BigInteger GetBigInteger() {
            return value;
        }

        bool GetBoolean() {
            return value != BigInteger.Zero();
        }

        std::vector<byte> GetByteArray() {
            return value.ToByteArray();
        }
    };
}

#endif
