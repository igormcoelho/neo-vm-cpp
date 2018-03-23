#ifndef INTEROP_INTERFACE_HPP
#define INTEROP_INTERFACE_HPP

#include "../StackItem.hpp"
#include "../Basic.hpp"
#include "../BigInteger.hpp"

#include "../IInteropInterface.hpp"

namespace vm
{
    template<class T>
    class InteropInterface : StackItem
    {
    public:
        IInteropInterface* _object;

        InteropInterface(IInteropInterface* value)
        {
            this->_object = value;
        }

        virtual int typeId() {
          return 4;
        }

        bool Equals(StackItem* other)
        {
          if(!other)
              return false;
          if(this->typeId() == other.typeId()) {
              //return (*value) == (*b->value);
              return false; // TODO: not implemented
          }
          else
              return GetByteArray() == other->GetByteArray();
        }

        bool GetBoolean() {
            return _object != null;
        }

        byte[] GetByteArray() {
            //throw new NotSupportedException();
            return std::vector<byte>(0);
        }

        /*
        template<class T>
        void GetInterface(T* t)
        {
            //return _object as T;
            t = _object;
        }
        */
    };
}

#endif
