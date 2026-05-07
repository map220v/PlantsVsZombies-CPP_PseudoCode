// Class: VacationMaterialItem


/* VacationMaterialItem::VacationMaterialItem(VacationMaterialItem&&) */

void __thiscall
VacationMaterialItem::VacationMaterialItem(VacationMaterialItem *this,VacationMaterialItem *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR_GetClass_0660c8b0;
  *(undefined ***)(this + 8) = &PTR__VacationMaterialItem_0660c918;
  return;
}


/* VacationMaterialItem::~VacationMaterialItem() */

void __thiscall VacationMaterialItem::~VacationMaterialItem(VacationMaterialItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c8b0;
  *(undefined ***)(this + 8) = &PTR__VacationMaterialItem_0660c918;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to VacationMaterialItem::~VacationMaterialItem() */

void __thiscall VacationMaterialItem::~VacationMaterialItem(VacationMaterialItem *this)

{
  ~VacationMaterialItem(this + -8);
  return;
}


/* VacationMaterialItem::~VacationMaterialItem() */

void __thiscall VacationMaterialItem::~VacationMaterialItem(VacationMaterialItem *this)

{
  ~VacationMaterialItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VacationMaterialItem::~VacationMaterialItem() */

void __thiscall VacationMaterialItem::~VacationMaterialItem(VacationMaterialItem *this)

{
  ~VacationMaterialItem(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VacationMaterialItem::StaticClassInit() */

void VacationMaterialItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"VacationMaterialItem");
    (*pcVar2)(plVar1,asStack_10,FUN_0321794c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VacationMaterialItem::StaticGetClass() */

long * VacationMaterialItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VacationMaterialItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VacationMaterialItem::GetClass() const */

long * VacationMaterialItem::GetClass(void)

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
  (*pcVar3)(plVar1,"VacationMaterialItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VacationMaterialItem::VacationMaterialItem(int, int) */

void __thiscall
VacationMaterialItem::VacationMaterialItem(VacationMaterialItem *this,int param_1,int param_2)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(int *)(this + 0x14) = param_1;
  *(int *)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR_GetClass_0660c8b0;
  *(undefined ***)(this + 8) = &PTR__VacationMaterialItem_0660c918;
  return;
}


/* VacationMaterialItem::StaticNew() */

VacationMaterialItem * VacationMaterialItem::StaticNew(void)

{
  VacationMaterialItem *this;
  
  this = ::operator_new(0x20);
  VacationMaterialItem(this,0,0);
  return this;
}

