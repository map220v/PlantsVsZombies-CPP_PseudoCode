// Class: EA::IO::SharedPointer


/* EA::IO::SharedPointer::SharedPointer(void*, bool, EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::IO::SharedPointer::SharedPointer
          (SharedPointer *this,void *param_1,bool param_2,ICoreAllocator *param_3)

{
  undefined8 uVar1;
  
  Allocator::EAIOZoneObject::EAIOZoneObject((EAIOZoneObject *)this);
  *(undefined ***)this = &PTR_nop_06a36710;
  if (param_3 != (ICoreAllocator *)0x0) {
    *(void **)(this + 0x10) = param_1;
    *(ICoreAllocator **)(this + 8) = param_3;
    *(undefined4 *)(this + 0x18) = 0;
    this[0x1c] = (SharedPointer)param_2;
    return;
  }
  uVar1 = GetAllocator();
  *(void **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (SharedPointer)param_2;
  return;
}


/* EA::IO::SharedPointer::SharedPointer(unsigned long, char const*) */

void __thiscall
EA::IO::SharedPointer::SharedPointer(SharedPointer *this,ulong param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  Allocator::EAIOZoneObject::EAIOZoneObject((EAIOZoneObject *)this);
  *(undefined ***)this = &PTR_nop_06a36710;
  plVar1 = (long *)GetAllocator();
  lVar3 = *plVar1;
  *(long **)(this + 8) = plVar1;
  if (param_2 == (char *)0x0) {
    param_2 = "EAIO/EAStreamMemory/data";
  }
  uVar2 = (**(code **)(lVar3 + 0x10))(plVar1,param_1,param_2,0);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  this[0x1c] = (SharedPointer)0x1;
  return;
}


/* EA::IO::SharedPointer::SharedPointer(unsigned long, EA::Allocator::ICoreAllocator*, char const*)
    */

void __thiscall
EA::IO::SharedPointer::SharedPointer
          (SharedPointer *this,ulong param_1,ICoreAllocator *param_2,char *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  Allocator::EAIOZoneObject::EAIOZoneObject((EAIOZoneObject *)this);
  *(undefined ***)this = &PTR_nop_06a36710;
  if (param_2 == (ICoreAllocator *)0x0) {
    param_2 = (ICoreAllocator *)GetAllocator();
  }
  lVar2 = *(long *)param_2;
  *(ICoreAllocator **)(this + 8) = param_2;
  if (param_3 == (char *)0x0) {
    param_3 = "EAIO/EAStreamMemory/data";
  }
  uVar1 = (**(code **)(lVar2 + 0x10))(param_2,param_1,param_3,0);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = uVar1;
  this[0x1c] = (SharedPointer)0x1;
  return;
}


/* EA::IO::SharedPointer::Release() */

int __thiscall EA::IO::SharedPointer::Release(SharedPointer *this)

{
  int iVar1;
  
  if (1 < *(int *)(this + 0x18)) {
    iVar1 = *(int *)(this + 0x18) + -1;
    *(int *)(this + 0x18) = iVar1;
    return iVar1;
  }
  if (this[0x1c] != (SharedPointer)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),*(undefined8 *)(this + 0x10),0)
    ;
  }
  (**(code **)(*(long *)this + 8))(this);
  return 0;
}

