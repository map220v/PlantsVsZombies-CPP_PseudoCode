// Class: TodAllocator


/* TodAllocator::Grow() */

void __thiscall TodAllocator::Grow(TodAllocator *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  
  iVar2 = *(int *)(this + 0x18);
  puVar4 = operator_new__((long)(iVar2 * *(int *)(this + 0x10) + 8));
  uVar3 = *(uint *)(this + 0x10);
  *puVar4 = *(undefined8 *)(this + 8);
  *(undefined8 **)(this + 8) = puVar4;
  plVar5 = *(long **)this;
  if (0 < (int)uVar3) {
    plVar6 = puVar4 + 1;
    uVar1 = 0;
    do {
      uVar7 = uVar1;
      uVar1 = uVar7 + 1;
      *plVar6 = (long)plVar5;
      plVar5 = plVar6;
      plVar6 = (long *)((long)plVar6 + (long)iVar2);
    } while (uVar1 != uVar3);
    plVar5 = (long *)((long)puVar4 + (ulong)uVar7 * (long)iVar2 + 8);
  }
  *(long **)this = plVar5;
  return;
}


/* TodAllocator::Alloc(int) */

undefined8 * __thiscall TodAllocator::Alloc(TodAllocator *this,int param_1)

{
  undefined8 *__s;
  
  __s = *(undefined8 **)this;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  if (__s == (undefined8 *)0x0) {
    Grow(this);
    __s = *(undefined8 **)this;
  }
  *(undefined8 *)this = *__s;
  memset(__s,0,(long)param_1);
  return __s;
}


/* TodAllocator::FreeAll() */

void __thiscall TodAllocator::FreeAll(TodAllocator *this)

{
  ColourFit *this_00;
  ColourFit *pCVar1;
  
  this_00 = *(ColourFit **)(this + 8);
  while (this_00 != (ColourFit *)0x0) {
    pCVar1 = *(ColourFit **)this_00;
    EATextSquish::ColourFit::~ColourFit(this_00);
    this_00 = pCVar1;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* TodAllocator::Dispose() */

void __thiscall TodAllocator::Dispose(TodAllocator *this)

{
  ColourFit *this_00;
  ColourFit *pCVar1;
  
  this_00 = *(ColourFit **)(this + 8);
  while (this_00 != (ColourFit *)0x0) {
    pCVar1 = *(ColourFit **)this_00;
    EATextSquish::ColourFit::~ColourFit(this_00);
    this_00 = pCVar1;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* TodAllocator::Initialize(int, int) */

void __thiscall TodAllocator::Initialize(TodAllocator *this,int param_1,int param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_2;
  *(int *)(this + 0x10) = param_1;
  Grow(this);
  return;
}

