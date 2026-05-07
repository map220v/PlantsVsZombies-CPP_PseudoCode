// Class: PvZ1FinishAllThemeLevelListener


/* PvZ1FinishAllThemeLevelListener::~PvZ1FinishAllThemeLevelListener() */

void __thiscall
PvZ1FinishAllThemeLevelListener::~PvZ1FinishAllThemeLevelListener
          (PvZ1FinishAllThemeLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f8f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1FinishAllThemeLevelListener::~PvZ1FinishAllThemeLevelListener() */

void __thiscall
PvZ1FinishAllThemeLevelListener::~PvZ1FinishAllThemeLevelListener
          (PvZ1FinishAllThemeLevelListener *this)

{
  ~PvZ1FinishAllThemeLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1FinishAllThemeLevelListener::PvZ1FinishAllThemeLevelListener() */

void __thiscall
PvZ1FinishAllThemeLevelListener::PvZ1FinishAllThemeLevelListener
          (PvZ1FinishAllThemeLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f8f0;
  return;
}


/* PvZ1FinishAllThemeLevelListener::StaticNew() */

PvZ1FinishAllThemeLevelListener * PvZ1FinishAllThemeLevelListener::StaticNew(void)

{
  PvZ1FinishAllThemeLevelListener *this;
  
  this = ::operator_new(0x18);
  PvZ1FinishAllThemeLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishAllThemeLevelListener::StaticClassInit() */

void PvZ1FinishAllThemeLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1FinishAllThemeLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a89264,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1FinishAllThemeLevelListener::StaticGetClass() */

long * PvZ1FinishAllThemeLevelListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1FinishAllThemeLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishAllThemeLevelListener::GetClass() const */

long * PvZ1FinishAllThemeLevelListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1FinishAllThemeLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishAllThemeLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1FinishAllThemeLevelListener::RegisterListener
          (PvZ1FinishAllThemeLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PvZ1FinishAllThemeLevelListener,void(PvZ1FinishAllThemeLevelListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PvZ1FinishAllThemeLevelListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishAllThemeLevelListener::onPvZ1FinishLevel(int, bool) */

void PvZ1FinishAllThemeLevelListener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  vector *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined1 *local_90;
  vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *pvStack_88;
  ulong *local_80;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *local_18;
  ulong *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    pvVar3 = (vector *)PlayerInfo::GetPvZ1HardLevelFinishInfoForAchievement(this_00);
    std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::vector
              ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_50,
               pvVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    for (local_68 = 0; uVar8 = local_68, uVar4 = FUN_03a79d1c(local_50,local_48), uVar8 < uVar4;
        local_68 = local_68 + 1) {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
      local_90 = auStack_70;
      pvStack_88 = (vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_50;
      local_80 = &local_68;
      local_20 = auStack_70;
      local_18 = (vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_50;
      local_10 = &local_68;
      local_60 = FUN_03a9fb60(uVar5,uVar6,&local_90);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
      if (bVar2) {
        lVar7 = FUN_03a79d30(local_50,local_68);
        std::
        vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
        ::push_back((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                     *)&local_38,(vector *)(lVar7 + 0x10));
      }
    }
    iVar9 = 0;
    uVar8 = 0;
    while (uVar5 = local_38, uVar4 = FUN_03a79d3c(local_38,local_30), uVar8 < uVar4) {
      uVar4 = uVar8 + 1;
      uVar5 = FUN_03a79d50(uVar5,uVar8);
      cVar1 = FUN_03a9f2a8(uVar5,(vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>
                                  *)&local_50);
      uVar8 = uVar4;
      if (cVar1 != '\0') {
        iVar9 = iVar9 + 1;
      }
    }
    (**(code **)(*(long *)(ulong)(uint)param_1 + 0x60))((long *)(ulong)(uint)param_1,iVar9);
    std::
    vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
    ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)&local_38);
    std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::~vector
              ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

