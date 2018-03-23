#include<iostream>

#include "VMState.hpp"
#include "RandomAccessStack.hpp"
#include "Types/ByteArray.hpp"
#include "BigInteger.hpp"

#include "OpCode.hpp"

using namespace vm;
using namespace std;

int main() {
   cout << "Testing..." << endl;

   cout << "75:" << OpCode::PUSHBYTES75 << endl;

   cout << "Finished successfully" << endl;
   return 0;
}
