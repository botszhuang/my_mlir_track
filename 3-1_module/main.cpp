#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

using namespace llvm;

static LLVMContext TheContext;

static Module * myModule = new Module("my module", TheContext);

 int main() {
    myModule->dump();
    return 0;
 }