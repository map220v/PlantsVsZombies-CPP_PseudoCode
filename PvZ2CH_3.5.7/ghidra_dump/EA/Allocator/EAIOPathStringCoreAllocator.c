// Class: EA::Allocator::EAIOPathStringCoreAllocator


/* EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator(char const*) */

void __thiscall
EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator
          (EAIOPathStringCoreAllocator *this,char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = IO::GetAllocator();
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)this = uVar1;
  return;
}


/* EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator(EA::Allocator::EAIOPathStringCoreAllocator
   const&) */

void __thiscall
EA::Allocator::EAIOPathStringCoreAllocator::EAIOPathStringCoreAllocator
          (EAIOPathStringCoreAllocator *this,EAIOPathStringCoreAllocator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}


/* EA::Allocator::EAIOPathStringCoreAllocator::TEMPNAMEPLACEHOLDERVALUE(EA::Allocator::EAIOPathStringCoreAllocator
   const&) */

EAIOPathStringCoreAllocator * __thiscall
EA::Allocator::EAIOPathStringCoreAllocator::operator=
          (EAIOPathStringCoreAllocator *this,EAIOPathStringCoreAllocator *param_1)

{
  FUN_0533e448(this,*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8));
  return this;
}

