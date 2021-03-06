#ifndef BOOLEAN_HPP
#define BOOLEAN_HPP

#include "../StackItem.hpp"
#include "../Basic.hpp"
#include "../BigInteger.hpp"

namespace vm
{
    class Boolean : public StackItem
    {
    private:
        static const std::vector<byte> TRUE() {
          return std::vector<byte>(1,1);
        }

        static const std::vector<byte> FALSE() {
          return std::vector<byte>(0);
        }

        bool value;

    public:
        virtual int typeId() {
          return 1;
        }

        Boolean(bool value) {
            this->value = value;
        }

        bool Equals(StackItem* other) {
            if(!other)
                return false;
            if(this->typeId() == other->typeId()) {
                Boolean* b = (Boolean*) other;
                return value == b->value;
            }
            else
                return GetByteArray() == other->GetByteArray();
        }

        BigInteger GetBigInteger() {
            return value ? BigInteger::One() : BigInteger::Zero();
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
