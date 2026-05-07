// Class: TodList<DefMap*>


/* TodList<DefMap*>::AddTail(DefMap* const&) */

void __thiscall TodList<DefMap*>::AddTail(TodList<DefMap*> *this,DefMap **param_1)

{
  TodAllocator *this_00;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  this_00 = *(TodAllocator **)(this + 0x18);
  if (this_00 == (TodAllocator *)0x0) {
    this_00 = (TodAllocator *)FindGlobalAllocator(0x18);
    *(TodAllocator **)(this + 0x18) = this_00;
  }
  lVar1 = TodAllocator::Alloc(this_00,0x18);
  puVar2 = (undefined8 *)FUN_0485199c();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_1;
  }
  lVar3 = *(long *)(this + 8);
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined8 *)(lVar1 + 8) = 0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = lVar1;
    *(long *)(this + 8) = lVar1;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    return;
  }
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


/* TodList<DefMap*>::TodList() */

void __thiscall TodList<DefMap*>::TodList(TodList<DefMap*> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* TodList<DefMap*>::RemoveAll() */

void __thiscall TodList<DefMap*>::RemoveAll(TodList<DefMap*> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_048519b0(*(long *)(this + 0x18),*(long *)(this + 0x18) + 0x14,lVar1);
    lVar1 = lVar2;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* TodList<DefMap*>::~TodList() */

void __thiscall TodList<DefMap*>::~TodList(TodList<DefMap*> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_048519b0(*(long *)(this + 0x18),*(long *)(this + 0x18) + 0x14,lVar1);
    lVar1 = lVar2;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

