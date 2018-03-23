#ifndef BIG_INTEGER_HPP
#define BIG_INTEGER_HPP

#include<vector>

#include "Basic.hpp"

namespace vm
{
    class BigInteger
    {
    public:
        int value;

        BigInteger(int value) {
            this->value = value;
        }

        BigInteger(std::vector<byte> bytearray) {
            this->value = 0; // TODO: fix
        }

        static BigInteger Zero() {
            return BigInteger(0);
        }

        static BigInteger One() {
            return BigInteger(1);
        }

        std::vector<byte> ToByteArray() {
           return std::vector<byte>(value); // TODO: fix
        }
    };
}

#endif
