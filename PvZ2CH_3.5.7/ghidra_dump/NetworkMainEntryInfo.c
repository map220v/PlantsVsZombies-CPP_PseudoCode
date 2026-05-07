// Class: NetworkMainEntryInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkMainEntryInfo::StaticClassInit() */

void NetworkMainEntryInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftPlayerData");
    (*pcVar3)(plVar2,asStack_10,FUN_036ec2fc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftAPIResponseLeagueChange");
    (*pcVar3)(plVar2,asStack_10,FUN_036ef71c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_036ebe9c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftPerkData");
    (*pcVar3)(plVar2,asStack_10,FUN_036ebd48,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftLeaderboardRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_036ef554,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftDifficultyInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_036ef404,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftDifficultyReward");
    (*pcVar3)(plVar2,asStack_10,FUN_036ee168,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftBossReward");
    (*pcVar3)(plVar2,asStack_10,FUN_036ef1c8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkMainEntryInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_036efb80,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkMainEntryInfo::StaticGetClass() */

long * NetworkMainEntryInfo::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkMainEntryInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkMainEntryInfo::GetClass() const */

long * NetworkMainEntryInfo::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkMainEntryInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkMainEntryInfo::NetworkMainEntryInfo() */

void __thiscall NetworkMainEntryInfo::NetworkMainEntryInfo(NetworkMainEntryInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066864c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Set8BytesTo0(this + 0x28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  PlantWarsLevelData::PlantWarsLevelData((PlantWarsLevelData *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  *(undefined4 *)(this + 0xd8) = 0;
  RiftAPIResponseLeagueChange::RiftAPIResponseLeagueChange
            ((RiftAPIResponseLeagueChange *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  Set8BytesTo0(this + 0x168);
  return;
}


/* NetworkMainEntryInfo::StaticNew() */

NetworkMainEntryInfo * NetworkMainEntryInfo::StaticNew(void)

{
  NetworkMainEntryInfo *this;
  
  this = ::operator_new(0x170);
  NetworkMainEntryInfo(this);
  return this;
}


/* NetworkMainEntryInfo::~NetworkMainEntryInfo() */

void __thiscall NetworkMainEntryInfo::~NetworkMainEntryInfo(NetworkMainEntryInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066864c0;
  std::string::~string((string *)(this + 0x168));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x148));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x130));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x110));
  RiftAPIResponseLeagueChange::~RiftAPIResponseLeagueChange
            ((RiftAPIResponseLeagueChange *)(this + 0xe0));
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::~vector
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)(this + 0xb8));
  RiftBossReward::~RiftBossReward((RiftBossReward *)(this + 0x58));
  std::vector<RiftDifficultyReward,std::allocator<RiftDifficultyReward>>::~vector
            ((vector<RiftDifficultyReward,std::allocator<RiftDifficultyReward>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  nop();
  return;
}


/* NetworkMainEntryInfo::~NetworkMainEntryInfo() */

void __thiscall NetworkMainEntryInfo::~NetworkMainEntryInfo(NetworkMainEntryInfo *this)

{
  ~NetworkMainEntryInfo(this);
  AK::FreeHook(this);
  return;
}


/* NetworkMainEntryInfo::TEMPNAMEPLACEHOLDERVALUE(NetworkMainEntryInfo const&) */

NetworkMainEntryInfo * __thiscall
NetworkMainEntryInfo::operator=(NetworkMainEntryInfo *this,NetworkMainEntryInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  NetworkMainEntryInfo NVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  std::vector<RiftDifficultyReward,std::allocator<RiftDifficultyReward>>::operator=
            ((vector<RiftDifficultyReward,std::allocator<RiftDifficultyReward>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  RiftBossReward::operator=((RiftBossReward *)(this + 0x58),(RiftBossReward *)(param_1 + 0x58));
  std::vector<RiftPerkData,std::allocator<RiftPerkData>>::operator=
            ((vector<RiftPerkData,std::allocator<RiftPerkData>> *)(this + 0xb8),
             (vector *)(param_1 + 0xb8));
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  uVar2 = *(undefined4 *)(param_1 + 0xd4);
  uVar3 = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xd0) = uVar1;
  *(undefined4 *)(this + 0xd4) = uVar2;
  *(undefined4 *)(this + 0xd8) = uVar3;
  RiftAPIResponseLeagueChange::operator=
            ((RiftAPIResponseLeagueChange *)(this + 0xe0),
             (RiftAPIResponseLeagueChange *)(param_1 + 0xe0));
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x108) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x110),(vector *)(param_1 + 0x110));
  NVar4 = param_1[0x129];
  this[0x128] = param_1[0x128];
  this[0x129] = NVar4;
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x130),(vector *)(param_1 + 0x130));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x148),(vector *)(param_1 + 0x148));
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  NVar4 = param_1[0x164];
  this[0x165] = param_1[0x165];
  *(undefined4 *)(this + 0x160) = uVar1;
  this[0x164] = NVar4;
  thunk_FUN_05475e00(this + 0x168,param_1 + 0x168);
  return this;
}

