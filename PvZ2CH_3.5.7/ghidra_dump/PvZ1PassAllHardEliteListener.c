// Class: PvZ1PassAllHardEliteListener


/* PvZ1PassAllHardEliteListener::~PvZ1PassAllHardEliteListener() */

void __thiscall
PvZ1PassAllHardEliteListener::~PvZ1PassAllHardEliteListener(PvZ1PassAllHardEliteListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067108f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1PassAllHardEliteListener::~PvZ1PassAllHardEliteListener() */

void __thiscall
PvZ1PassAllHardEliteListener::~PvZ1PassAllHardEliteListener(PvZ1PassAllHardEliteListener *this)

{
  ~PvZ1PassAllHardEliteListener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1PassAllHardEliteListener::PvZ1PassAllHardEliteListener() */

void __thiscall
PvZ1PassAllHardEliteListener::PvZ1PassAllHardEliteListener(PvZ1PassAllHardEliteListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067108f0;
  return;
}


/* PvZ1PassAllHardEliteListener::StaticNew() */

PvZ1PassAllHardEliteListener * PvZ1PassAllHardEliteListener::StaticNew(void)

{
  PvZ1PassAllHardEliteListener *this;
  
  this = ::operator_new(0x18);
  PvZ1PassAllHardEliteListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1PassAllHardEliteListener::StaticClassInit() */

void PvZ1PassAllHardEliteListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1PassAllHardEliteListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8e064,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1PassAllHardEliteListener::StaticGetClass() */

long * PvZ1PassAllHardEliteListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1PassAllHardEliteListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1PassAllHardEliteListener::GetClass() const */

long * PvZ1PassAllHardEliteListener::GetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1PassAllHardEliteListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1PassAllHardEliteListener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1PassAllHardEliteListener::RegisterListener
          (PvZ1PassAllHardEliteListener *this,GeneralTask *param_1)

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
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PvZ1PassAllHardEliteListener,void(PvZ1PassAllHardEliteListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PvZ1PassAllHardEliteListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1PassAllHardEliteListener::onPvZ1FinishLevel(int, bool) */

void __thiscall
PvZ1PassAllHardEliteListener::onPvZ1FinishLevel
          (PvZ1PassAllHardEliteListener *this,int param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar1 != '\0') && (param_2)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    pvVar3 = (vector *)PlayerInfo::GetPvZ1HardLevelFinishInfoForAchievement(this_01);
    uVar8 = 0;
    std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::vector
              ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_38,
               pvVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    lVar4 = FUN_03a79d1c(local_38,local_30);
    if (lVar4 != 0) {
      do {
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
        lVar4 = FUN_03a79d30(local_38,uVar8);
        local_48 = std::
                   find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                             (uVar5,uVar6,lVar4 + 8);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        if (bVar2) {
          lVar4 = FUN_03a79d30(local_38,uVar8);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_20,(int *)(lVar4 + 8));
        }
        uVar8 = uVar8 + 1;
        uVar7 = FUN_03a79d1c(local_38,local_30);
      } while (uVar8 < uVar7);
    }
    iVar9 = 0;
    uVar8 = 0;
    while (uVar5 = local_20, uVar7 = FUN_03a79cb0(local_20,local_18), uVar8 < uVar7) {
      uVar7 = uVar8 + 1;
      uVar5 = FUN_03a79d5c(uVar5,uVar8);
      cVar1 = FUN_03aa0704(uVar5,(vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>
                                  *)&local_38);
      uVar8 = uVar7;
      if (cVar1 != '\0') {
        iVar9 = iVar9 + 1;
      }
    }
    (**(code **)(*(long *)this + 0x60))(this,iVar9);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    std::vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>>::~vector
              ((vector<PvZ1LevelCompleteInfo,std::allocator<PvZ1LevelCompleteInfo>> *)&local_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

