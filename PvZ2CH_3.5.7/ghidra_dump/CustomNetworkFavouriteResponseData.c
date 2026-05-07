// Class: CustomNetworkFavouriteResponseData


/* CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData() */

void __thiscall
CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665daf0;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkFavouriteResponseData_0665db58;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData() */

void __thiscall
CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this)

{
  ~CustomNetworkFavouriteResponseData(this + -8);
  return;
}


/* CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData() */

void __thiscall
CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this)

{
  ~CustomNetworkFavouriteResponseData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData() */

void __thiscall
CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this)

{
  ~CustomNetworkFavouriteResponseData(this + -8);
  return;
}


/* CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData() */

void __thiscall
CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665daf0;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkFavouriteResponseData_0665db58;
  return;
}


/* CustomNetworkFavouriteResponseData::StaticNew() */

CustomNetworkFavouriteResponseData * CustomNetworkFavouriteResponseData::StaticNew(void)

{
  CustomNetworkFavouriteResponseData *this;
  
  this = ::operator_new(0x20);
  CustomNetworkFavouriteResponseData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkFavouriteResponseData::StaticClassInit() */

void CustomNetworkFavouriteResponseData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomNetworkFavouriteResponseData");
    (*pcVar2)(plVar1,asStack_10,FUN_03593b54,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkFavouriteResponseData::StaticGetClass() */

long * CustomNetworkFavouriteResponseData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkFavouriteResponseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkFavouriteResponseData::GetClass() const */

long * CustomNetworkFavouriteResponseData::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomNetworkFavouriteResponseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkFavouriteResponseData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkFavouriteResponseData
   const&) */

CustomNetworkFavouriteResponseData * __thiscall
CustomNetworkFavouriteResponseData::operator=
          (CustomNetworkFavouriteResponseData *this,CustomNetworkFavouriteResponseData *param_1)

{
  undefined4 uVar1;
  CustomNetworkFavouriteResponseData CVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  CVar2 = param_1[0x14];
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  this[0x14] = CVar2;
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}


/* CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData(CustomNetworkFavouriteResponseData
   const&) */

void __thiscall
CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData
          (CustomNetworkFavouriteResponseData *this,CustomNetworkFavouriteResponseData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  this[0x14] = param_1[0x14];
  *(undefined ***)this = &PTR_GetClass_0665daf0;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkFavouriteResponseData_0665db58;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}

