// Class: S2C_PVP_TrainingInfos


/* S2C_PVP_TrainingInfos::S2C_PVP_TrainingInfos() */

void __thiscall S2C_PVP_TrainingInfos::S2C_PVP_TrainingInfos(S2C_PVP_TrainingInfos *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_0660b590;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_TrainingInfos_0660b5f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos() */

void __thiscall S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos(S2C_PVP_TrainingInfos *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b590;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_TrainingInfos_0660b5f8;
  std::vector<S2C_PVP_ZombieData,std::allocator<S2C_PVP_ZombieData>>::~vector
            ((vector<S2C_PVP_ZombieData,std::allocator<S2C_PVP_ZombieData>> *)(this + 0x30));
  std::vector<S2C_Training_ZombieData,std::allocator<S2C_Training_ZombieData>>::~vector
            ((vector<S2C_Training_ZombieData,std::allocator<S2C_Training_ZombieData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos() */

void __thiscall S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos(S2C_PVP_TrainingInfos *this)

{
  ~S2C_PVP_TrainingInfos(this + -8);
  return;
}


/* S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos() */

void __thiscall S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos(S2C_PVP_TrainingInfos *this)

{
  ~S2C_PVP_TrainingInfos(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos() */

void __thiscall S2C_PVP_TrainingInfos::~S2C_PVP_TrainingInfos(S2C_PVP_TrainingInfos *this)

{
  ~S2C_PVP_TrainingInfos(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_TrainingInfos::StaticClassInit() */

void S2C_PVP_TrainingInfos::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_Training_ZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_03204750,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_ZombieData");
    (*pcVar3)(plVar2,asStack_10,FUN_031ffffc,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PVP_TrainingInfos");
    (*pcVar3)(plVar2,asStack_10,FUN_03232b00,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_TrainingInfos::StaticGetClass() */

long * S2C_PVP_TrainingInfos::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_TrainingInfos",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_TrainingInfos::GetClass() const */

long * S2C_PVP_TrainingInfos::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_TrainingInfos",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_TrainingInfos::StaticNew() */

S2C_PVP_TrainingInfos * S2C_PVP_TrainingInfos::StaticNew(void)

{
  S2C_PVP_TrainingInfos *this;
  
  this = ::operator_new(0x48);
  S2C_PVP_TrainingInfos(this);
  return this;
}

