// Class: LevelRecordSubsystem


/* LevelRecordSubsystem::readyForNextEvent() */

bool __thiscall LevelRecordSubsystem::readyForNextEvent(LevelRecordSubsystem *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x18) < fVar1 - *(float *)(this + 0x14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordSubsystem::updateTimeForEvent() */

void __thiscall LevelRecordSubsystem::updateTimeForEvent(LevelRecordSubsystem *this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x14);
  if (0.0 < fVar2 - fVar4) {
    std::string::string(asStack_10,"LevelReplayRecord");
    LevelReplayData::AddEvent(fVar2 - fVar4,this + 0x28,0,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x14) = uVar3;
    lVar1 = JoustPropertySheet::GetProperties();
    fVar2 = (float)Sexy::Rand(*(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 0x10));
    *(float *)(this + 0x18) = fVar2 + *(float *)(lVar1 + 0x10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordSubsystem::recordEvents() */

void __thiscall LevelRecordSubsystem::recordEvents(LevelRecordSubsystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = JoustUtils::GetScoringSystem();
  iVar2 = FUN_0384a060(*(undefined4 *)(lVar6 + 0x14));
  iVar1 = *(int *)(this + 0x1c);
  if (iVar2 != iVar1) {
    updateTimeForEvent(this);
    iVar3 = FUN_0384a060(*(undefined4 *)(lVar6 + 0x14));
    std::string::string(asStack_10,"LevelReplayRecord");
    LevelReplayData::AddEvent((float)iVar3,this + 0x28,1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar4 = FUN_0384a060(*(undefined4 *)(lVar6 + 0x14));
    *(undefined4 *)(this + 0x1c) = uVar4;
  }
  iVar3 = FUN_0384a064(*(undefined4 *)(lVar6 + 0x18));
  fVar7 = *(float *)(this + 0x20);
  if ((float)iVar3 != fVar7) {
    updateTimeForEvent(this);
    iVar5 = FUN_0384a064(*(undefined4 *)(lVar6 + 0x18));
    std::string::string(asStack_10,"LevelReplayRecord");
    LevelReplayData::AddEvent((float)iVar5,this + 0x28,2,asStack_10);
    std::string::~string(asStack_10);
    nop();
    iVar5 = FUN_0384a064(*(undefined4 *)(lVar6 + 0x18));
    *(float *)(this + 0x20) = (float)iVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)iVar3 != fVar7 || iVar2 != iVar1);
}


/* LevelRecordSubsystem::stop() */

void __thiscall LevelRecordSubsystem::stop(LevelRecordSubsystem *this)

{
  if (this[0x24] != (LevelRecordSubsystem)0x0) {
    recordEvents(this);
    this[0x24] = (LevelRecordSubsystem)0x0;
  }
  return;
}


/* LevelRecordSubsystem::updateRecording() */

void __thiscall LevelRecordSubsystem::updateRecording(LevelRecordSubsystem *this)

{
  char cVar1;
  
  cVar1 = readyForNextEvent(this);
  if (cVar1 == '\0') {
    return;
  }
  recordEvents(this);
  return;
}


/* LevelRecordSubsystem::Update() */

void __thiscall LevelRecordSubsystem::Update(LevelRecordSubsystem *this)

{
  if (this[0x24] == (LevelRecordSubsystem)0x0) {
    return;
  }
  updateRecording(this);
  return;
}


/* LevelRecordSubsystem::LevelRecordSubsystem() */

void __thiscall LevelRecordSubsystem::LevelRecordSubsystem(LevelRecordSubsystem *this)

{
  LevelRecordingBaseSubsystem::LevelRecordingBaseSubsystem((LevelRecordingBaseSubsystem *)this);
  *(undefined ***)this = &PTR_GetClass_066a76b0;
  LevelReplayData::LevelReplayData((LevelReplayData *)(this + 0x28));
  this[0x24] = (LevelRecordSubsystem)0x0;
  return;
}


/* LevelRecordSubsystem::StaticNew() */

LevelRecordSubsystem * LevelRecordSubsystem::StaticNew(void)

{
  LevelRecordSubsystem *this;
  
  this = ::operator_new(0x68);
  LevelRecordSubsystem(this);
  return this;
}


/* LevelRecordSubsystem::~LevelRecordSubsystem() */

void __thiscall LevelRecordSubsystem::~LevelRecordSubsystem(LevelRecordSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a76b0;
  LevelReplayData::~LevelReplayData((LevelReplayData *)(this + 0x28));
  LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem((LevelRecordingBaseSubsystem *)this);
  return;
}


/* LevelRecordSubsystem::~LevelRecordSubsystem() */

void __thiscall LevelRecordSubsystem::~LevelRecordSubsystem(LevelRecordSubsystem *this)

{
  ~LevelRecordSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordSubsystem::cachePlantLoadout() */

void __thiscall LevelRecordSubsystem::cachePlantLoadout(LevelRecordSubsystem *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UINewPVPTopZombieQueue *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PlantNameMapperServerID *pPVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>>::clear
            ((vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>> *)(this + 0x50));
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    cVar2 = FUN_0384a0b8(this_00[0x199]);
    if (0 < cVar2) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 1;
        UINewPVPTopZombieQueue::gettItem(this_00,iVar4);
        pPVar5 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        iVar3 = PlantNameMapperServerID::GetIdForType(pPVar5,aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        iVar4 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar6 + 8),false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        JoustPlayerPlantData::JoustPlayerPlantData((JoustPlayerPlantData *)aRStack_18,iVar3,iVar4);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        local_10 = FUN_0384b47c(*(undefined4 *)(lVar6 + 400));
        std::vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>>::push_back
                  ((vector<JoustPlayerPlantData,std::allocator<JoustPlayerPlantData>> *)
                   (this + 0x50),(JoustPlayerPlantData *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        iVar4 = iVar1;
      } while (cVar2 != iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelRecordSubsystem::start() */

void __thiscall LevelRecordSubsystem::start(LevelRecordSubsystem *this)

{
  string *psVar1;
  undefined4 uVar2;
  
  uVar2 = PVZ_T();
  this[0x24] = (LevelRecordSubsystem)0x1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  psVar1 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  LevelReplayData::Init((LevelReplayData *)(this + 0x28),psVar1,0);
  cachePlantLoadout(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordSubsystem::StaticClassInit() */

void LevelRecordSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"t",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"s",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"m",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"LevelReplayEvent::EventType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelReplayEvent");
    (*pcVar3)(plVar2,avStack_20,FUN_0384bb28,8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"JoustPlayerLoadoutData");
    (*pcVar3)(plVar2,avStack_20,FUN_0384c864,0x18,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelReplayData");
    (*pcVar3)(plVar2,avStack_20,FUN_0384c9ec,0x40,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LevelRecordSubsystem");
    (*pcVar3)(plVar2,avStack_20,FUN_0384d178,0x68,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelRecordSubsystem::StaticGetClass() */

long * LevelRecordSubsystem::StaticGetClass(void)

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
  uVar2 = LevelRecordingBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelRecordSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelRecordSubsystem::GetClass() const */

long * LevelRecordSubsystem::GetClass(void)

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
  uVar2 = LevelRecordingBaseSubsystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelRecordSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelRecordSubsystem::ExportToBinary(Sexy::Buffer*) */

void __thiscall LevelRecordSubsystem::ExportToBinary(LevelRecordSubsystem *this,Buffer *param_1)

{
  LevelReplayData::ExportToBinary((LevelReplayData *)(this + 0x28),param_1);
  return;
}

