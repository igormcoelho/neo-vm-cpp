#ifndef BOOLEAN_HPP
#define BOOLEAN_HPP

#include "../StackItem.hpp"
#include "../Basic.hpp"
#include "../BigInteger.hpp"

namespace vm
{
    class Boolean : StackItem
    {
    private:
        static const vector<byte> TRUE() {
          return vector<byte>(1,1);
        }

        static const vector<byte> FALSE() {
          return vector<byte>(0);
        }

        bool value;

    public:
        virtual int typeId() {
          return 0;
        }

        Boolean(bool value) {
            this->value = value;
        }

        bool Equals(StackItem* other) {
            if(!other)
                return false;
            if(this->typeId() == other.typeId()) {
                Boolean* b = (Boolean*) other;
                return value == b->value;
            }
            else
                return GetByteArray() == other->GetByteArray();
        }

        BigInteger GetBigInteger() {
            return value ? BigInteger.One() : BigInteger.Zero();
        }

        bool GetBoolean() {
            return value;
        }

        std::vector<byte> GetByteArray() {
            return value ? TRUE() : FALSE();
        }
    };
}

#endif
