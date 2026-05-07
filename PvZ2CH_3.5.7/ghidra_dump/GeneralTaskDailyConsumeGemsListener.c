// Class: GeneralTaskDailyConsumeGemsListener


/* GeneralTaskDailyConsumeGemsListener::~GeneralTaskDailyConsumeGemsListener() */

void __thiscall
GeneralTaskDailyConsumeGemsListener::~GeneralTaskDailyConsumeGemsListener
          (GeneralTaskDailyConsumeGemsListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e0f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskDailyConsumeGemsListener::~GeneralTaskDailyConsumeGemsListener() */

void __thiscall
GeneralTaskDailyConsumeGemsListener::~GeneralTaskDailyConsumeGemsListener
          (GeneralTaskDailyConsumeGemsListener *this)

{
  ~GeneralTaskDailyConsumeGemsListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskDailyConsumeGemsListener::StaticClassInit() */

void GeneralTaskDailyConsumeGemsListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskDailyConsumeGemsListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a81ce0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskDailyConsumeGemsListener::StaticGetClass() */

long * GeneralTaskDailyConsumeGemsListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskDailyConsumeGemsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskDailyConsumeGemsListener::GetClass() const */

long * GeneralTaskDailyConsumeGemsListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskDailyConsumeGemsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskDailyConsumeGemsListener::GeneralTaskDailyConsumeGemsListener() */

void __thiscall
GeneralTaskDailyConsumeGemsListener::GeneralTaskDailyConsumeGemsListener
          (GeneralTaskDailyConsumeGemsListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e0f0;
  return;
}


/* GeneralTaskDailyConsumeGemsListener::StaticNew() */

GeneralTaskDailyConsumeGemsListener * GeneralTaskDailyConsumeGemsListener::StaticNew(void)

{
  GeneralTaskDailyConsumeGemsListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskDailyConsumeGemsListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskDailyConsumeGemsListener::onRefreshTaskInfo() */

void __thiscall
GeneralTaskDailyConsumeGemsListener::onRefreshTaskInfo(GeneralTaskDailyConsumeGemsListener *this)

{
  uint uVar1;
  uint uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (uVar3 == 0) {
    uVar3 = Sexy::SexyTime((Sexy *)0x0);
    uVar3 = uVar3 / 1000;
  }
  local_10 = FUN_03a79cd0(uVar3);
  lVar4 = LawnApp::BeijingTime(gLawnApp,&local_10);
  uVar1 = *(int *)(lVar4 + 0x10) * 100 + 100 + (*(int *)(lVar4 + 0x14) + 0x76c) * 10000 +
          *(int *)(lVar4 + 0xc);
  uVar2 = PlayerInfo::GetNumGemConsumeRecordedBetween(this_01,uVar1,uVar1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"Gem Consume Currency, date is %d, gems are %d",(ulong)uVar1,(ulong)uVar2);
  lVar4 = *(long *)(this + 0x10);
  *(uint *)(lVar4 + 0x10) = uVar2;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x20));
  plVar5 = *(long **)(this + 0x10);
  if ((*(int *)(lVar4 + 0x28) <= (int)uVar2) && (*(int *)((long)plVar5 + 0x14) != 3)) {
    *(undefined4 *)((long)plVar5 + 0x14) = 2;
    GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
    plVar5 = *(long **)(this + 0x10);
  }
  (**(code **)(*plVar5 + 0x60))(plVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskDailyConsumeGemsListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskDailyConsumeGemsListener::RegisterListener
          (GeneralTaskDailyConsumeGemsListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRefreshTaskInfo);
  Sexy::Delegate0::
  Delegate0<GeneralTaskDailyConsumeGemsListener,void(GeneralTaskDailyConsumeGemsListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshSomeTasksData,aDStack_38);
  this[8] = (GeneralTaskDailyConsumeGemsListener)0x1;
  onRefreshTaskInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

