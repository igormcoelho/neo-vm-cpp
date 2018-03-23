#ifndef BINARY_READER_HPP
#define BINARY_READER_HPP

#include<vector>
#include "Basic.hpp"

namespace vm
{
    class BinaryReader {
    public:

        int Position;

        BinaryReader() {

        }

        BinaryReader(std::vector<byte> input) {
        }

        std::vector<byte> ReadBytes(int nbytes) {
           return std::vector<byte>(0);
        }

        byte ReadByte() {
           return 0;
        }

        unsigned int ReadUInt16() {
           return 0;
        }

        int ReadInt16() {
          return 0;
        }

        int ReadInt32() {
          return 0;
        }

        void Seek(int value) {

        }

    };
}

#endif
