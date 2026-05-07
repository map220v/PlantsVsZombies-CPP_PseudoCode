// Class: S2C_AvatarLevel


/* S2C_AvatarLevel::S2C_AvatarLevel() */

void __thiscall S2C_AvatarLevel::S2C_AvatarLevel(S2C_AvatarLevel *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609600;
  *(undefined ***)(this + 8) = &PTR__S2C_AvatarLevel_06609668;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x14));
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)(this + 0x20));
  return;
}


/* S2C_AvatarLevel::~S2C_AvatarLevel() */

void __thiscall S2C_AvatarLevel::~S2C_AvatarLevel(S2C_AvatarLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_06609600;
  *(undefined ***)(this + 8) = &PTR__S2C_AvatarLevel_06609668;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_AvatarLevel::~S2C_AvatarLevel() */

void __thiscall S2C_AvatarLevel::~S2C_AvatarLevel(S2C_AvatarLevel *this)

{
  ~S2C_AvatarLevel(this + -8);
  return;
}


/* S2C_AvatarLevel::~S2C_AvatarLevel() */

void __thiscall S2C_AvatarLevel::~S2C_AvatarLevel(S2C_AvatarLevel *this)

{
  ~S2C_AvatarLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_AvatarLevel::~S2C_AvatarLevel() */

void __thiscall S2C_AvatarLevel::~S2C_AvatarLevel(S2C_AvatarLevel *this)

{
  ~S2C_AvatarLevel(this + -8);
  return;
}


/* S2C_AvatarLevel::StaticNew() */

S2C_AvatarLevel * S2C_AvatarLevel::StaticNew(void)

{
  S2C_AvatarLevel *this;
  
  this = ::operator_new(0x28);
  S2C_AvatarLevel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_AvatarLevel::StaticClassInit() */

void S2C_AvatarLevel::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_AvatarLevelInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031fe0dc,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_AvatarLevel");
    (*pcVar3)(plVar2,asStack_10,FUN_032226e8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_AvatarLevel::StaticGetClass() */

long * S2C_AvatarLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AvatarLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_AvatarLevel::GetClass() const */

long * S2C_AvatarLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AvatarLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

