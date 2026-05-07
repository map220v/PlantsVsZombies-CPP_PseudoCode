// Class: TutorialPeashooterDeathModule


/* TutorialPeashooterDeathModule::StaticGetClass() */

long * TutorialPeashooterDeathModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialPeashooterDeathModule",uVar2,StaticNew);
  return sClass;
}


/* TutorialPeashooterDeathModule::TutorialPeashooterDeathModule() */

void __thiscall
TutorialPeashooterDeathModule::TutorialPeashooterDeathModule(TutorialPeashooterDeathModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06854410;
  return;
}


/* TutorialPeashooterDeathModule::StaticNew() */

TutorialPeashooterDeathModule * TutorialPeashooterDeathModule::StaticNew(void)

{
  TutorialPeashooterDeathModule *this;
  
  this = ::operator_new(0x18);
  TutorialPeashooterDeathModule(this);
  return this;
}


/* TutorialPeashooterDeathModule::~TutorialPeashooterDeathModule() */

void __thiscall
TutorialPeashooterDeathModule::~TutorialPeashooterDeathModule(TutorialPeashooterDeathModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06854410;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* TutorialPeashooterDeathModule::~TutorialPeashooterDeathModule() */

void __thiscall
TutorialPeashooterDeathModule::~TutorialPeashooterDeathModule(TutorialPeashooterDeathModule *this)

{
  ~TutorialPeashooterDeathModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialPeashooterDeathModule::onPlantDied(Plant*) */

void __thiscall
TutorialPeashooterDeathModule::onPlantDied(TutorialPeashooterDeathModule *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  Board *pBVar3;
  undefined1 auStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==((string *)(lVar2 + 8),"peashooter");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((bVar1) && (6 < *(int *)(param_1 + 0x114))) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aRStack_10,L"[ADVICE_PEASHOOTER_DIED]",auStack_18);
    Board::DisplayAdvice(pBVar3,aRStack_10,9,1);
    FUN_05476c50(aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialPeashooterDeathModule::registerForEvents() */

void __thiscall
TutorialPeashooterDeathModule::registerForEvents(TutorialPeashooterDeathModule *this)

{
  undefined *puVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    std::string::string((string *)&local_20,"egypt4");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this_01,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (2 < iVar2) goto LAB_044cb3e0;
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<TutorialPeashooterDeathModule,void(TutorialPeashooterDeathModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_50);
LAB_044cb3e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

