#ifndef STACK_ITEM_HPP
#define STACK_ITEM_HPP

#include "Basic.hpp"
#include "BigInteger.hpp"
#include "IInteropInterface.hpp"

class Boolean;
class Array;

namespace vm
{
    class StackItem
    {
    public:
        //virtual int typeId() = 0;
        virtual int typeId() {
          return -1; // TODO: fix
        }

        virtual bool IsArray() {
          return false;
        }

        virtual bool IsStruct() {
          return false;
        }

        virtual std::vector<byte> GetByteArray() = 0;

        virtual bool Equals(StackItem* other) = 0;

        /*
        static StackItem* FromInterface(IInteropInterface* value) {
            return new InteropInterface(value);
        }
        */

        virtual std::vector<StackItem*> GetArray() {
            //throw new NotSupportedException();
            return std::vector<StackItem*>(0);
        }

        virtual BigInteger GetBigInteger() {
            return BigInteger(GetByteArray());
        }

        virtual bool GetBoolean() {
            return GetByteArray().size() > 0;
        }

        /*
        template<class T>
        virtual void GetInterface(T* t) {
            //throw new NotSupportedException();
            // TODO: fix
        }
        */

/*
        static implicit operator StackItem(int value)
        {
            return (BigInteger)value;
        }

        public static implicit operator StackItem(uint value)
        {
            return (BigInteger)value;
        }

        public static implicit operator StackItem(long value)
        {
            return (BigInteger)value;
        }

        public static implicit operator StackItem(ulong value)
        {
            return (BigInteger)value;
        }

        public static implicit operator StackItem(BigInteger value)
        {
            return new Integer(value);
        }

        public static implicit operator StackItem(bool value)
        {
            return new Boolean(value);
        }

        public static implicit operator StackItem(byte[] value)
        {
            return new ByteArray(value);
        }

        public static implicit operator StackItem(StackItem[] value)
        {
            return new Array(value);
        }
        */
    };
}

#endif
