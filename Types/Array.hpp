#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "../StackItem.hpp"

namespace vm
{
    class Array : public StackItem
    {
    public:
        std::vector<StackItem*> _array;

        virtual int typeId() {
          return 0;
        }

        bool IsArray() {
          return true;
        }

        Array(std::vector<StackItem*> value)
        {
            this->_array = value;
        }

        bool Equals(StackItem* other)
        {
          if(!other)
              return false;
          if(this->typeId() == other->typeId()) {
              Array* a = (Array*) other;
              return _array == a->_array;
          }
          else
              return false;
        }

        std::vector<StackItem*> GetArray()
        {
            return _array;
        }

        BigInteger GetBigInteger()
        {
            //throw new NotSupportedException();
            return BigInteger::Zero();
        }

        bool GetBoolean()
        {
            return _array.size() > 0;
        }

        std::vector<byte> GetByteArray()
        {
            //throw new NotSupportedException();
            return std::vector<byte>(0);
        }
    };
}

#endif
