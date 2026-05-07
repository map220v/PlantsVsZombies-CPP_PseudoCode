// Class: WorldMap_LevelofDay


/* WorldMap_LevelofDay::OnMouseMove(int, int) */

void WorldMap_LevelofDay::OnMouseMove(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 400))((long *)(ulong)(uint)param_1,param_2,in_x2,1);
  return;
}


/* WorldMap_LevelofDay::OnMouseUp(int, int) */

void WorldMap_LevelofDay::OnMouseUp(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 400))((long *)(ulong)(uint)param_1,param_2,in_x2,0);
  return;
}


/* WorldMap_LevelofDay::~WorldMap_LevelofDay() */

void __thiscall WorldMap_LevelofDay::~WorldMap_LevelofDay(WorldMap_LevelofDay *this)

{
  *(undefined ***)this = &PTR_GetClass_0693cbf0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LevelofDay_0693cd98;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LevelofDay::~WorldMap_LevelofDay() */

void __thiscall WorldMap_LevelofDay::~WorldMap_LevelofDay(WorldMap_LevelofDay *this)

{
  ~WorldMap_LevelofDay(this + -0x10);
  return;
}


/* WorldMap_LevelofDay::~WorldMap_LevelofDay() */

void __thiscall WorldMap_LevelofDay::~WorldMap_LevelofDay(WorldMap_LevelofDay *this)

{
  ~WorldMap_LevelofDay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LevelofDay::~WorldMap_LevelofDay() */

void __thiscall WorldMap_LevelofDay::~WorldMap_LevelofDay(WorldMap_LevelofDay *this)

{
  ~WorldMap_LevelofDay(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelofDay::StaticClassInit() */

void WorldMap_LevelofDay::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LevelofDay");
    (*pcVar2)(plVar1,asStack_10,FUN_04a79db8,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LevelofDay::StaticGetClass() */

long * WorldMap_LevelofDay::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_LevelofDay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LevelofDay::GetClass() const */

long * WorldMap_LevelofDay::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_LevelofDay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LevelofDay::CheckActivated() */

void __thiscall WorldMap_LevelofDay::CheckActivated(WorldMap_LevelofDay *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (((this_01 != (PlayerInfo *)0x0) &&
      (iVar3 = PlayerInfo::GetLevelOfTheDayRemainDays(this_01,0x2a0a), 0 < iVar3)) &&
     (cVar1 = PlayerInfo::IsLevelOfTheDayInfoValid(this_01,0x2a0a), cVar1 != '\0')) {
    bVar2 = (bool)PlayerInfo::IsLevelOfTheDayOpening(this_01,0x2a0a);
    UIWidget::SetVisible((UIWidget *)this,bVar2);
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WorldMap_LevelofDay::OnWorldLoaded() */

void __thiscall WorldMap_LevelofDay::OnWorldLoaded(WorldMap_LevelofDay *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (((this_01 != (PlayerInfo *)0x0) &&
      (iVar3 = PlayerInfo::GetLevelOfTheDayRemainDays(this_01,0x2a0a), 0 < iVar3)) &&
     (cVar1 = PlayerInfo::IsLevelOfTheDayInfoValid(this_01,0x2a0a), cVar1 != '\0')) {
    bVar2 = (bool)PlayerInfo::IsLevelOfTheDayOpening(this_01,0x2a0a);
    UIWidget::SetVisible((UIWidget *)this,bVar2);
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelofDay::OnLevelofDayOpening(bool) */

void __thiscall WorldMap_LevelofDay::OnLevelofDayOpening(WorldMap_LevelofDay *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      iVar3 = PlayerInfo::GetLevelOfTheDayRemainDays(this_01,0x2a0a);
      if (((iVar3 < 1) ||
          (cVar2 = PlayerInfo::IsLevelOfTheDayInfoValid(this_01,0x2a0a), cVar2 == '\0')) ||
         (cVar2 = PlayerInfo::IsLevelOfTheDayOpening(this_01,0x2a0a), cVar2 == '\0')) {
        pLVar1 = gLawnApp;
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        LawnApp::ShowLevelofDayEntrance(gLawnApp);
      }
    }
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,param_1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LevelofDay::OnButtonClicked() */

void __thiscall WorldMap_LevelofDay::OnButtonClicked(WorldMap_LevelofDay *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActiveActivityStates(this_01,3);
    return;
  }
  OnLevelofDayOpening(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelofDay::WorldMap_LevelofDay() */

void __thiscall WorldMap_LevelofDay::WorldMap_LevelofDay(WorldMap_LevelofDay *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0693cbf0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LevelofDay_0693cd98;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelofDayOpening);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_LevelofDay,void(WorldMap_LevelofDay::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LevelofDayOpening,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_LevelofDay,void(WorldMap_LevelofDay::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LevelofDay::StaticNew() */

WorldMap_LevelofDay * WorldMap_LevelofDay::StaticNew(void)

{
  WorldMap_LevelofDay *this;
  
  this = ::operator_new(0x168);
  WorldMap_LevelofDay(this);
  return this;
}


/* WorldMap_LevelofDay::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_LevelofDay::updateButtonStates
          (WorldMap_LevelofDay *this,int param_1,int param_2,bool param_3)

{
  LawnApp *this_00;
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04a79b64(this + 0x160);
  }
  else {
    cVar1 = FUN_04a79b6c(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_04a79b64(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), this_00 = gLawnApp,
     cVar1 != '\0')) {
    cVar1 = LawnApp::IsLevelofDayEntranceValid(gLawnApp);
    if (cVar1 == '\0') {
      OnButtonClicked(this);
      return;
    }
    LawnApp::KillLevelofDayEntrance(this_00);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LevelofDay::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LevelofDay::Draw(WorldMap_LevelofDay *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Image *pIVar3;
  undefined1 auVar4 [12];
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 == '\0') goto LAB_04a7a528;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    UIWidget::Draw((Graphics *)this);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    cVar1 = FUN_04a79b6c(this[0x160]);
    if (cVar1 == '\0') {
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e428);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    }
    else {
LAB_04a7a618:
      pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e478);
      Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    }
  }
  else {
    cVar1 = PlayerInfo::IsActiveServerConfigValid(this_01);
    if (cVar1 == '\0') goto LAB_04a7a528;
    UIWidget::Draw((Graphics *)this);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    cVar1 = FUN_04a79b6c(this[0x160]);
    if (cVar1 != '\0') goto LAB_04a7a618;
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e428);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    cVar1 = PlayerInfo::IsLevelOfTheDayInfoValid(this_01,0x2a0a);
    if ((cVar1 == '\0') ||
       (cVar1 = PlayerInfo::IsLevelOfTheDayOpening(this_01,0x2a0a), cVar1 == '\0')) {
LAB_04a7a5dc:
      cVar1 = PlayerInfo::CanBuyChildrenDayItem(this_01);
      if (cVar1 == '\0') goto LAB_04a7a638;
    }
    else {
      auVar4 = PlayerInfo::GetLevelOfTheDayInfo(this_01,0x2a0a);
      local_10 = auVar4._8_4_;
      local_18 = auVar4._0_4_;
      local_14 = auVar4._4_4_;
      if ((7 < local_18) || (2 < local_14)) goto LAB_04a7a5dc;
    }
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e518);
    iVar2 = FUN_04a79c60();
    Sexy::Graphics::DrawImage(param_1,pIVar3,iVar2,0);
  }
LAB_04a7a638:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
LAB_04a7a528:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WorldMap_LevelofDay::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LevelofDay::Draw(WorldMap_LevelofDay *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

