// Class: DStackAllocator


/* DStackAllocator::purge() */

void DStackAllocator::purge(void)

{
  if (sp_stackAllocator != (long *)0x0) {
    (**(code **)(*sp_stackAllocator + 8))();
    sp_stackAllocator = (long *)0x0;
  }
  return;
}


/* DStackAllocator::DStackAllocator() */

void __thiscall DStackAllocator::DStackAllocator(DStackAllocator *this)

{
  *(undefined ***)this = &PTR__DStackAllocator_06a23a40;
  *(undefined8 *)(this + 0xc808) = 0;
  *(undefined8 *)(this + 0xc810) = 0;
  *(undefined8 *)(this + 0xc818) = 0;
  *(undefined8 *)(this + 52000) = 0;
  return;
}


/* DStackAllocator::getInstance() */

DStackAllocator * DStackAllocator::getInstance(void)

{
  DStackAllocator *this;
  
  if (sp_stackAllocator != (DStackAllocator *)0x0) {
    return sp_stackAllocator;
  }
  this = ::operator_new(0xcb28);
  DStackAllocator(this);
  sp_stackAllocator = this;
  return this;
}


/* DStackAllocator::push(unsigned long) */

undefined8 __thiscall DStackAllocator::push(DStackAllocator *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 52000);
  *(ulong *)(this + lVar4 * 0x18 + 0xc828) = param_1;
  lVar3 = *(long *)(this + 0xc808);
  uVar1 = param_1 + lVar3;
  if (uVar1 < 0xc801) {
    this[lVar4 * 0x18 + 0xc830] = (DStackAllocator)0x0;
    *(DStackAllocator **)(this + lVar4 * 0x18 + 0xc820) = this + lVar3 + 8;
    *(ulong *)(this + 0xc808) = uVar1;
    lVar3 = lVar4;
  }
  else {
    pvVar2 = operator_new__(param_1);
    *(void **)(this + lVar4 * 0x18 + 0xc820) = pvVar2;
    this[lVar4 * 0x18 + 0xc830] = (DStackAllocator)0x1;
    lVar3 = *(long *)(this + 52000);
  }
  uVar1 = param_1 + *(long *)(this + 0xc810);
  *(ulong *)(this + 0xc810) = uVar1;
  if (uVar1 < *(ulong *)(this + 0xc818)) {
    uVar1 = *(ulong *)(this + 0xc818);
  }
  *(long *)(this + 52000) = lVar3 + 1;
  *(ulong *)(this + 0xc818) = uVar1;
  return *(undefined8 *)(this + lVar4 * 0x18 + 0xc820);
}


/* DStackAllocator::pop() */

void __thiscall DStackAllocator::pop(DStackAllocator *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 52000);
  lVar3 = lVar1 * 0x18;
  if (this[lVar3 + 0xc818] == (DStackAllocator)0x0) {
    lVar2 = *(long *)(this + lVar3 + 0xc810);
    *(long *)(this + 0xc808) = *(long *)(this + 0xc808) - lVar2;
  }
  else {
    if (*(ColourFit **)(this + lVar3 + 0xc808) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + lVar3 + 0xc808));
      lVar1 = *(long *)(this + 52000);
    }
    lVar2 = *(long *)(this + lVar3 + 0xc810);
  }
  *(long *)(this + 52000) = lVar1 + -1;
  *(long *)(this + 0xc810) = *(long *)(this + 0xc810) - lVar2;
  *(undefined8 *)(this + lVar3 + 0xc808) = 0;
  return;
}


/* DStackAllocator::pop(unsigned long) */

void __thiscall DStackAllocator::pop(DStackAllocator *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(ulong *)(this + 52000) < param_1) {
    param_1 = *(ulong *)(this + 52000);
  }
  if (param_1 != 0) {
    do {
      uVar1 = uVar1 + 1;
      pop(this);
    } while (uVar1 != param_1);
  }
  return;
}


/* DStackAllocator::popAll() */

void __thiscall DStackAllocator::popAll(DStackAllocator *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = 1;
  if (*(long *)(this + 52000) != 0) {
    do {
      pop(this);
      bVar1 = uVar2 < *(ulong *)(this + 52000);
      uVar2 = uVar2 + 1;
    } while (bVar1);
  }
  return;
}


/* DStackAllocator::~DStackAllocator() */

void __thiscall DStackAllocator::~DStackAllocator(DStackAllocator *this)

{
  *(undefined ***)this = &PTR__DStackAllocator_06a23a40;
  popAll(this);
  return;
}


/* DStackAllocator::~DStackAllocator() */

void __thiscall DStackAllocator::~DStackAllocator(DStackAllocator *this)

{
  ~DStackAllocator(this);
  AK::FreeHook(this);
  return;
}


/* DStackAllocator::getMaxAllocation() const */

undefined8 __thiscall DStackAllocator::getMaxAllocation(DStackAllocator *this)

{
  return *(undefined8 *)(this + 0xc818);
}

