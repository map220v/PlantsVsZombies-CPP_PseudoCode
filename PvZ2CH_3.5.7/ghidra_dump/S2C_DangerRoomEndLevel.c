// Class: S2C_DangerRoomEndLevel


/* S2C_DangerRoomEndLevel::S2C_DangerRoomEndLevel() */

void __thiscall S2C_DangerRoomEndLevel::S2C_DangerRoomEndLevel(S2C_DangerRoomEndLevel *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660dab0;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomEndLevel_0660db18;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  S2C_DangerRoomRecord::S2C_DangerRoomRecord((S2C_DangerRoomRecord *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  return;
}


/* S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel() */

void __thiscall S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel(S2C_DangerRoomEndLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_0660dab0;
  *(undefined ***)(this + 8) = &PTR__S2C_DangerRoomEndLevel_0660db18;
  std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::~vector
            ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)(this + 0xe0))
  ;
  S2C_DangerRoomRecord::~S2C_DangerRoomRecord((S2C_DangerRoomRecord *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel() */

void __thiscall S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel(S2C_DangerRoomEndLevel *this)

{
  ~S2C_DangerRoomEndLevel(this + -8);
  return;
}


/* S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel() */

void __thiscall S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel(S2C_DangerRoomEndLevel *this)

{
  ~S2C_DangerRoomEndLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel() */

void __thiscall S2C_DangerRoomEndLevel::~S2C_DangerRoomEndLevel(S2C_DangerRoomEndLevel *this)

{
  ~S2C_DangerRoomEndLevel(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DangerRoomEndLevel::StaticClassInit() */

void S2C_DangerRoomEndLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_DangerRoomEndLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03237df4,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DangerRoomEndLevel::StaticGetClass() */

long * S2C_DangerRoomEndLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomEndLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomEndLevel::GetClass() const */

long * S2C_DangerRoomEndLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DangerRoomEndLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DangerRoomEndLevel::StaticNew() */

S2C_DangerRoomEndLevel * S2C_DangerRoomEndLevel::StaticNew(void)

{
  S2C_DangerRoomEndLevel *this;
  
  this = ::operator_new(0xf8);
  S2C_DangerRoomEndLevel(this);
  return this;
}

