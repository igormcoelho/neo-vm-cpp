#ifndef EXECUTION_CONTEXT_HPP
#define EXECUTION_CONTEXT_HPP

#include<vector>

#include "BinaryReader.hpp"
#include "OpCode.hpp"


namespace vm
{
    class ExecutionEngine;
    class ExecutionContext
    {
    public:
        ExecutionEngine* engine;
        std::vector<byte> Script;
        bool PushOnly;
        BinaryReader OpReader;
        //HashSet<uint> BreakPoints;

        int InstructionPointer()
        {
            return (int)OpReader.Position;
        }

        int InstructionPointer(int value)
        {
            OpReader.Seek(value);
        }

        OpCode NextInstruction() {
          return (OpCode)Script[OpReader.Position];
        }

    private:
        std::vector<byte> _script_hash;

    public:
        std::vector<byte> ScriptHash()
        {
            //if (_script_hash == null)
            //    _script_hash = engine->Crypto.Hash160(Script);
            return _script_hash;
        }

        ExecutionContext(ExecutionEngine* engine, std::vector<byte> script, bool push_only /*, HashSet<uint> break_points = null */)
        {
            this->engine = engine;
            this->Script = script;
            this->PushOnly = push_only;
            this->OpReader = BinaryReader(script);
            //this.BreakPoints = break_points ?? new HashSet<uint>();
        }

        ExecutionContext* Clone()
        {
            ExecutionContext* ec = new ExecutionContext(engine, Script, PushOnly);
            ec->InstructionPointer(this->InstructionPointer());
            return ec;
        }

        virtual ~ExecutionContext() {
              //OpReader.Dispose();
        }
    };
}

#endif
