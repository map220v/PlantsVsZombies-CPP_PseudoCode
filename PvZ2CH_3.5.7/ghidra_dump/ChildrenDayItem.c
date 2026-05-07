// Class: ChildrenDayItem


/* ChildrenDayItem::~ChildrenDayItem() */

void __thiscall ChildrenDayItem::~ChildrenDayItem(ChildrenDayItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ac80;
  *(undefined ***)(this + 8) = &PTR__ChildrenDayItem_0660ace8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ChildrenDayItem::~ChildrenDayItem() */

void __thiscall ChildrenDayItem::~ChildrenDayItem(ChildrenDayItem *this)

{
  ~ChildrenDayItem(this + -8);
  return;
}


/* ChildrenDayItem::~ChildrenDayItem() */

void __thiscall ChildrenDayItem::~ChildrenDayItem(ChildrenDayItem *this)

{
  ~ChildrenDayItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChildrenDayItem::~ChildrenDayItem() */

void __thiscall ChildrenDayItem::~ChildrenDayItem(ChildrenDayItem *this)

{
  ~ChildrenDayItem(this + -8);
  return;
}


/* ChildrenDayItem::ChildrenDayItem() */

void __thiscall ChildrenDayItem::ChildrenDayItem(ChildrenDayItem *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660ac80;
  *(undefined ***)(this + 8) = &PTR__ChildrenDayItem_0660ace8;
  return;
}


/* ChildrenDayItem::StaticNew() */

ChildrenDayItem * ChildrenDayItem::StaticNew(void)

{
  ChildrenDayItem *this;
  
  this = ::operator_new(0x20);
  ChildrenDayItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayItem::StaticClassInit() */

void ChildrenDayItem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ChildrenDayItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03210744,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChildrenDayItem::StaticGetClass() */

long * ChildrenDayItem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"ChildrenDayItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChildrenDayItem::GetClass() const */

long * ChildrenDayItem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"ChildrenDayItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChildrenDayItem::ChildrenDayItem(ChildrenDayItem const&) */

void __thiscall ChildrenDayItem::ChildrenDayItem(ChildrenDayItem *this,ChildrenDayItem *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660ac80;
  *(undefined ***)(this + 8) = &PTR__ChildrenDayItem_0660ace8;
  return;
}

