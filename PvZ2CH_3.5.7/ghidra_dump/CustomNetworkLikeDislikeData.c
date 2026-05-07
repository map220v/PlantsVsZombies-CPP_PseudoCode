// Class: CustomNetworkLikeDislikeData


/* CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData() */

void __thiscall
CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665dc10;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkLikeDislikeData_0665dc78;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData() */

void __thiscall
CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData *this)

{
  ~CustomNetworkLikeDislikeData(this + -8);
  return;
}


/* CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData() */

void __thiscall
CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData *this)

{
  ~CustomNetworkLikeDislikeData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData() */

void __thiscall
CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData *this)

{
  ~CustomNetworkLikeDislikeData(this + -8);
  return;
}


/* CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData() */

void __thiscall
CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665dc10;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkLikeDislikeData_0665dc78;
  return;
}


/* CustomNetworkLikeDislikeData::StaticNew() */

CustomNetworkLikeDislikeData * CustomNetworkLikeDislikeData::StaticNew(void)

{
  CustomNetworkLikeDislikeData *this;
  
  this = ::operator_new(0x20);
  CustomNetworkLikeDislikeData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkLikeDislikeData::StaticClassInit() */

void CustomNetworkLikeDislikeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomNetworkLikeDislikeData");
    (*pcVar2)(plVar1,asStack_10,FUN_035940cc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkLikeDislikeData::StaticGetClass() */

long * CustomNetworkLikeDislikeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkLikeDislikeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkLikeDislikeData::GetClass() const */

long * CustomNetworkLikeDislikeData::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkLikeDislikeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkLikeDislikeData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkLikeDislikeData const&) */

CustomNetworkLikeDislikeData * __thiscall
CustomNetworkLikeDislikeData::operator=
          (CustomNetworkLikeDislikeData *this,CustomNetworkLikeDislikeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return this;
}


/* CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData(CustomNetworkLikeDislikeData const&)
    */

void __thiscall
CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData
          (CustomNetworkLikeDislikeData *this,CustomNetworkLikeDislikeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_0665dc10;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkLikeDislikeData_0665dc78;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}

