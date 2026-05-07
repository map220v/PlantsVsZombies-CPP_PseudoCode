// Class: EA::Allocator::EAIOEASTLCoreAllocator


/* EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator(EA::Allocator::EAIOEASTLCoreAllocator
   const&) */

void __thiscall
EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
          (EAIOEASTLCoreAllocator *this,EAIOEASTLCoreAllocator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}


/* EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator(char const*) */

void __thiscall
EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
          (EAIOEASTLCoreAllocator *this,char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = IO::GetAllocator();
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = uVar1;
  return;
}

