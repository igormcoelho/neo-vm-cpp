#include<iostream>

#include "VMState.hpp"
#include "RandomAccessStack.hpp"
#include "Types/ByteArray.hpp"
#include "BigInteger.hpp"

#include "OpCode.hpp"

#include "ExecutionEngine.hpp"

using namespace vm;
using namespace std;

int main() {
   cout << "Testing..." << endl;

   cout << "75:" << OpCode::PUSHBYTES75 << endl;

   vm::ExecutionEngine eng;

   cout << "Finished successfully" << endl;
   return 0;
}
