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

        int toInt(){
          return 0; // TODO: fix
        }

        // ~ operator
        BigInteger negate() {
          return *this;
        }

        // - operator
        BigInteger MinusNegate() {
          return *this;
        }

        // & operator
        BigInteger _and(BigInteger b) {
          return *this;
        }

        // | operator
        BigInteger _or(BigInteger b) {
          return *this;
        }

        // ^ operator
        BigInteger _xor(BigInteger b) {
          return *this;
        }

        // + operator
        BigInteger plus(BigInteger v) {
          return *this;
        }

        // - operator
        BigInteger minus(BigInteger v) {
          return *this;
        }

        // * operator
        BigInteger mul(BigInteger v) {
          return *this;
        }

        // / operator
        BigInteger div(BigInteger v) {
          return *this;
        }

        // % operator
        BigInteger mod(BigInteger v) {
          return *this;
        }

        // == operator
        bool eq(BigInteger v) {
          return false;
        }

        // != operator
        bool neq(BigInteger v) {
          return false;
        }

        // < operator
        bool lt(BigInteger v) {
          return false;
        }

        // > operator
        bool gt(BigInteger v) {
          return false;
        }

        // <= operator
        bool lte(BigInteger v) {
          return false;
        }

        // >= operator
        bool gte(BigInteger v) {
          return false;
        }

        // << operator (shift left)
        BigInteger shl(int v) {
          return *this;
        }

        // >> operator (shift right)
        BigInteger shr(int v) {
          return *this;
        }

        static BigInteger Abs(BigInteger b) {
          return b;
        }

        static bool Min(BigInteger b1, BigInteger b2) {
          return false;
        }

        static bool Max(BigInteger b1, BigInteger b2) {
          return false;
        }

        bool Sign() {
          return true;
        }
    };
}

#endif
