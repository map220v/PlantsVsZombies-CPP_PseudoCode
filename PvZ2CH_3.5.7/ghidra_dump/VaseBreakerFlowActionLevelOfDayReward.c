// Class: VaseBreakerFlowActionLevelOfDayReward


/* VaseBreakerFlowActionLevelOfDayReward::onRewardSequenceFinished() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::onRewardSequenceFinished
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  LawnApp::KillLevelOfTheDayRewardDialog(gLawnApp);
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionLevelOfDayReward::StaticClassInit() */

void VaseBreakerFlowActionLevelOfDayReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionLevelOfDayReward");
    (*pcVar2)(plVar1,asStack_10,FUN_04974254,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionLevelOfDayReward::StaticGetClass() */

long * VaseBreakerFlowActionLevelOfDayReward::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionLevelOfDayReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionLevelOfDayReward::GetClass() const */

long * VaseBreakerFlowActionLevelOfDayReward::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionLevelOfDayReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionLevelOfDayReward::VaseBreakerFlowActionLevelOfDayReward() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::VaseBreakerFlowActionLevelOfDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917b00;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionLevelOfDayReward_06917ba8;
  return;
}


/* VaseBreakerFlowActionLevelOfDayReward::StaticNew() */

VaseBreakerFlowActionLevelOfDayReward * VaseBreakerFlowActionLevelOfDayReward::StaticNew(void)

{
  VaseBreakerFlowActionLevelOfDayReward *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowActionLevelOfDayReward(this);
  return this;
}


/* VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06917b00;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionLevelOfDayReward_06917ba8;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  ~VaseBreakerFlowActionLevelOfDayReward(this + -0x10);
  return;
}


/* VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  ~VaseBreakerFlowActionLevelOfDayReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::~VaseBreakerFlowActionLevelOfDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  ~VaseBreakerFlowActionLevelOfDayReward(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionLevelOfDayReward::onBegin() */

void VaseBreakerFlowActionLevelOfDayReward::onBegin(void)

{
  LawnApp *this;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  LevelOfTheDaySystem *pLVar3;
  SecretGachaMgr *this_00;
  DangerRoomManager *this_01;
  LevelOfTheDayMgr *this_02;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    pLVar3 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    LevelOfTheDaySystem::setCurLotdAcType(pLVar3,2);
    this_00 = (SecretGachaMgr *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    SecretGachaMgr::SetSelectId(this_00,1);
    this_01 = (DangerRoomManager *)LevelOfTheDayMgr::GetInstance();
    DangerRoomManager::SetCurrentLevel(this_01,3);
    this_02 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    LevelOfTheDayMgr::InitRewardPool(this_02);
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
    INetworkMsgProcess::ICloudRequestLeveloftheDayReward(this_04,0x2a8f);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionLevelOfDayReward::onBegin() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::onBegin(VaseBreakerFlowActionLevelOfDayReward *this)

{
  onBegin();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionLevelOfDayReward::onNetworkError(int) */

void VaseBreakerFlowActionLevelOfDayReward::onNetworkError(int param_1)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
  FUN_05478178(awStack_50,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionLevelOfDayReward::onGotChristmasProtect(bool) */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::onGotChristmasProtect
          (VaseBreakerFlowActionLevelOfDayReward *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  LevelOfTheDayRewardDialog *pLVar2;
  long lVar3;
  ActivityManager *this_01;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    LawnApp::ShowLevelOfTheDayRewardDialog(gLawnApp);
    pLVar2 = (LevelOfTheDayRewardDialog *)LawnApp::GetLevelOfTheDayRewardDialog(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRewardSequenceFinished);
    Sexy::Delegate0::
    Delegate0<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)()>
              (aDStack_38,awStack_50);
    LevelOfTheDayRewardDialog::BeginRewardSequence(pLVar2,aDStack_38);
    lVar3 = LevelOfTheDayMgr::GetInstance();
    FUN_04972d3c(lVar3 + 0x28);
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,0x2a8f,false,0);
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionLevelOfDayReward::OnLeveloftheDayReward(bool) */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::OnLeveloftheDayReward
          (VaseBreakerFlowActionLevelOfDayReward *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  LevelOfTheDayRewardDialog *pLVar2;
  long lVar3;
  ActivityManager *this_01;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  this_00 = gLawnApp;
  lStack_8 = ___stack_chk_guard;
  if (param_1) {
    LawnApp::ShowLevelOfTheDayRewardDialog(gLawnApp);
    pLVar2 = (LevelOfTheDayRewardDialog *)LawnApp::GetLevelOfTheDayRewardDialog(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRewardSequenceFinished);
    Sexy::Delegate0::
    Delegate0<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)()>
              (aDStack_38,awStack_50);
    LevelOfTheDayRewardDialog::BeginRewardSequence(pLVar2,aDStack_38);
    lVar3 = LevelOfTheDayMgr::GetInstance();
    FUN_04972d3c(lVar3 + 0x28);
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,0x2a8f,false,0);
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionLevelOfDayReward::registerForEvents() */

void __thiscall
VaseBreakerFlowActionLevelOfDayReward::registerForEvents
          (VaseBreakerFlowActionLevelOfDayReward *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLeveloftheDayReward);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LeveloftheDayReward,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionLevelOfDayReward,void(VaseBreakerFlowActionLevelOfDayReward::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_70);
  return;
}

