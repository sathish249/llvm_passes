#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/InstIterator.h"

using namespace llvm;

namespace {
  // Hello - The first implementation, without getAnalysisUsage.
  struct sat1 : public FunctionPass
  {
    static char ID; // Pass identification, replacement for typeid
    sat1() : FunctionPass(ID) {}

    bool runOnFunction(Function &F) override {
      errs() << "Hello: ";
      errs() << F.getName() << '\n';
      for(BasicBlock &BB : F)
      {
              errs() << "Basic block (name=" << BB.getName() << ") has " << BB.size() << " instructions.\n";

      for (Instruction &I : BB)
              errs() << I << "\n";
      }
    }
  };
}

char sat1::ID = 0;
static RegisterPass<sat1> X("sat1", "Hello World Pass");
