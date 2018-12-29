# llvm_passes

/*  These are basic passes to decode the Basic Blocks and instructions which are transformed by the llvm compiler */


cd ~/llvm/llvm/lib/Transforms/       ----> PATH1
mkdir sat1
copy the source and makefiles

To build the new custom pass
cd ~/build/lib/Transforms/sat1           ----> PATH2
$make   (source file should always be in PATH1....make will pick from there only)
this will put the LLVMsat1.so  file in lib directory.


To use this pass 
$/home/wyvern/wyvern_2018-11-14/build/bin/opt -load /home/wyvern/wyvern_2018-11-14/build/lib/LLVMsat1.so -sat1 demo2.ll
