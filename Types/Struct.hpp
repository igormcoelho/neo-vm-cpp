#ifndef STRUCT_HPP
#define STRUCT_HPP

#include "../StackItem.hpp"
#include "../Basic.hpp"
#include "../BigInteger.hpp"

namespace vm
{
    class Struct : public StackItem
    {
    private:
        bool value;

    public:
        virtual int typeId() {
          return 5;
        }

        Struct(bool value) {
            this->value = value;
        }

        Struct(std::vector<StackItem*> v) {
          
        }

        bool Equals(StackItem* other) {
            if(!other)
                return false;
            if(this->typeId() == other->typeId()) {
                Struct* b = (Struct*) other;
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
            return std::vector<byte>(0);//value ? TRUE() : FALSE();
        }

        StackItem* Clone() {
          return this;
        }
    };
}

#endif
