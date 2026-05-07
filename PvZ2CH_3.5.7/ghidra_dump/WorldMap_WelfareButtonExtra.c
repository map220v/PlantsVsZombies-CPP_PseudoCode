// Class: WorldMap_WelfareButtonExtra


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::SetNotice(bool) */

void __thiscall
WorldMap_WelfareButtonExtra::SetNotice(WorldMap_WelfareButtonExtra *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_NOTICE_ICON");
    UIEasyButtonWidget::AddNotice((UIEasyButtonWidget *)this,asStack_10,-0.1,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    UIEasyButtonWidget::RemoveNotice((UIEasyButtonWidget *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_WelfareButtonExtra::Draw(WorldMap_WelfareButtonExtra *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsWelfareChooseDialogValid(gLawnApp);
  FUN_0458a5ac(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_WelfareButtonExtra::Draw(WorldMap_WelfareButtonExtra *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_WelfareButtonExtra::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_WelfareButtonExtra::OnKillChooseDialog(WorldMap_WelfareButtonExtra *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsWelfareChooseDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillWelfareChooseDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_WelfareButtonExtra::KillChooseDialog() */

void WorldMap_WelfareButtonExtra::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsWelfareChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillWelfareChooseDialog(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WorldMap_WelfareButtonExtra::onLoadComplete() */

void WorldMap_WelfareButtonExtra::onLoadComplete(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar16 *in_x0;
  undefined4 in_w1;
  undefined4 in_register_0000400c;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (in_x0,(wchar16 *)CONCAT44(in_register_0000400c,in_w1),in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = FUN_0458a594(*(undefined4 *)(in_x0 + 0x1c));
  iVar3 = FUN_0458a5a0(*(undefined4 *)(in_x0 + 0x1e));
  FUN_0458a598(in_x0 + 0x1c,(int)((float)iVar2 * 0.8));
  FUN_0458a5a4(in_x0 + 0x1e,(int)((float)iVar3 * 0.8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::StaticClassInit() */

void WorldMap_WelfareButtonExtra::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_WelfareButtonExtra");
    (*pcVar2)(plVar1,asStack_10,FUN_0458ac90,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButtonExtra::StaticGetClass() */

long * WorldMap_WelfareButtonExtra::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_WelfareButtonExtra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_WelfareButtonExtra::GetClass() const */

long * WorldMap_WelfareButtonExtra::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_WelfareButtonExtra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_WelfareButtonExtra::onMsgErrorRequest(int, std::string const&) */

void WorldMap_WelfareButtonExtra::onMsgErrorRequest(int param_1,string *param_2)

{
  *(undefined1 *)((ulong)(uint)param_1 + 0x1d1) = 0;
  nop();
  return;
}


/* WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra() */

void __thiscall
WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra(WorldMap_WelfareButtonExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_06861800;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WelfareButtonExtra_068619a8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra() */

void __thiscall
WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra(WorldMap_WelfareButtonExtra *this)

{
  ~WorldMap_WelfareButtonExtra(this + -0x10);
  return;
}


/* WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra() */

void __thiscall
WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra(WorldMap_WelfareButtonExtra *this)

{
  ~WorldMap_WelfareButtonExtra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra() */

void __thiscall
WorldMap_WelfareButtonExtra::~WorldMap_WelfareButtonExtra(WorldMap_WelfareButtonExtra *this)

{
  ~WorldMap_WelfareButtonExtra(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::RequestData(ActivityTypeID) */

void __thiscall
WorldMap_WelfareButtonExtra::RequestData(WorldMap_WelfareButtonExtra *this,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  ActivityManager *this_01;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    nop();
  }
  else {
    if (param_2 == 0x2a53) {
      GameStateMgr::ShowRechargeWelfare(gGameStateMgr,5,5);
    }
    else if (param_2 == 0x29d6) {
      DailySignUI::RequestNetwork(true);
    }
    else {
      this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(this_01,param_2,true,0);
    }
    this[0x1d1] = (WorldMap_WelfareButtonExtra)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButtonExtra::OnTouch() */

void __thiscall WorldMap_WelfareButtonExtra::OnTouch(WorldMap_WelfareButtonExtra *this)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsWelfareChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    MessageRouter::Post<UIWidget*,WorldMap_WelfareButtonExtra*>
              ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
    LawnApp::KillGameMaskUI(gLawnApp);
    LawnApp::ShowWelfareChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    this[0x1d0] = (WorldMap_WelfareButtonExtra)0x1;
    return;
  }
  LawnApp::KillWelfareChooseDialog(this_00);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::CheckVisibility(bool) */

void WorldMap_WelfareButtonExtra::CheckVisibility(bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  UniverseMap *this;
  PlayerInfo *pPVar6;
  ProfileMgr *pPVar7;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar5 == 0) ||
      (this = (UniverseMap *)FUN_0458a5c8(*(undefined8 *)(lVar5 + 0x2b0)),
      this == (UniverseMap *)0x0)) || (cVar2 = UniverseMap::isInState(this,2), cVar2 != '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = RiftUtils::IsWorldMapButtonsEnabled();
    pLVar1 = gLawnApp;
    bVar3 = bVar3 | param_1;
    if ((bVar3 != 0) &&
       ((cVar2 = LawnApp::IsWelfareChooseDialogValid(gLawnApp), cVar2 == '\0' ||
        (cVar2 = LawnApp::IsServiceAvailable(pLVar1,0x2000000), cVar2 == '\0')))) {
      pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
      cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar6,0x17);
      if (cVar2 != '\0') {
        iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar4);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if ((cVar2 != '\0') &&
           (cVar2 = RechargeWelfareUI::CheckActivityOpenAtLeastOne(), cVar2 != '\0'))
        goto LAB_0458b850;
        iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar4);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar2 != '\0') goto LAB_0458b850;
        iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar4);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar2 != '\0') goto LAB_0458b850;
      }
      pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
      cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(4,false,pPVar6);
      if (cVar2 != '\0') {
        iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar4);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar2 != '\0') goto LAB_0458b850;
      }
      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar4);
      cVar2 = local_70;
      ActiveItem::~ActiveItem(aAStack_88);
      if (cVar2 == '\0') {
        iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar4);
        cVar2 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar2 == '\0') {
          iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar4);
          cVar2 = local_70;
          ActiveItem::~ActiveItem(aAStack_88);
          if (cVar2 == '\0') {
            iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar4);
            cVar2 = local_70;
            ActiveItem::~ActiveItem(aAStack_88);
            if (cVar2 == '\0') {
              iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar4);
              cVar2 = local_70;
              ActiveItem::~ActiveItem(aAStack_88);
              if (cVar2 == '\0') {
                iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                ActivityManager::GetActiveItem(iVar4);
                cVar2 = local_70;
                ActiveItem::~ActiveItem(aAStack_88);
                if (cVar2 == '\0') {
                  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar4);
                  cVar2 = local_70;
                  ActiveItem::~ActiveItem(aAStack_88);
                  if (cVar2 == '\0') {
                    std::string::string(asStack_90,"egypt4");
                    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
                    cVar2 = ProfileUtils::HasCompletedLevel(asStack_90,false,pPVar6);
                    std::string::~string(asStack_90);
                    nop();
                    if (cVar2 != '\0') {
                      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar4);
                      cVar2 = local_70;
                      ActiveItem::~ActiveItem(aAStack_88);
                      if (cVar2 != '\0') goto LAB_0458b850;
                      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar4);
                      cVar2 = local_70;
                      ActiveItem::~ActiveItem(aAStack_88);
                      if (cVar2 != '\0') goto LAB_0458b850;
                      iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar4);
                      ActiveItem::~ActiveItem(aAStack_88);
                      if (local_70 != '\0') goto LAB_0458b850;
                    }
                    pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
                    bVar3 = 0;
                    PlayerInfo::PlayerHasCompletedTutorial(pPVar6,0x17);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0458b850:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::CheckActivityTips() */

void WorldMap_WelfareButtonExtra::CheckActivityTips(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  PennyTaskManager *this;
  long lVar5;
  DaveTaskManager *this_00;
  BigInt *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar6;
  string asStack_d8 [20];
  char local_c4;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  cVar3 = '\x01';
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d8,"Anniversary/warning");
  bVar1 = GetLuaSharedData<bool>(asStack_d8,false);
  std::string::~string(asStack_d8);
  nop();
  if (bVar1) goto LAB_0458bb8c;
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  if (local_70 != '\0') {
    DailySignConfig::DailySignConfig((DailySignConfig *)asStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_d8);
    if ((cVar2 != '\0') && (local_c4 == '\0')) {
      DailySignConfig::~DailySignConfig((DailySignConfig *)asStack_d8);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0458bb8c;
    }
    DailySignConfig::~DailySignConfig((DailySignConfig *)asStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  if (local_70 == '\0') {
LAB_0458bc30:
    ActiveItem::~ActiveItem(aAStack_88);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      this_00 = (DaveTaskManager *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
      cVar3 = DaveTaskManager::HaveCompletedTask(this_00);
      if (cVar3 != '\0') goto LAB_0458bcc4;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      this_01 = (BigInt *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
      cVar3 = BigInt::IsNegative(this_01);
      if (cVar3 != '\0') {
        std::string::string(asStack_d8,"egypt7");
        this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
        cVar3 = ProfileUtils::HasCompletedLevel(asStack_d8,false,pPVar6);
        std::string::~string(asStack_d8);
        nop();
        if (cVar3 != '\0') goto LAB_0458bcc4;
      }
    }
    ActiveItem::~ActiveItem(aAStack_88);
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    if (local_70 != '\0') {
      lVar5 = Sexy::LazySingleton<GiftFoReturnTaskManager>::GetInstancePtr();
      cVar3 = HappyVaseBreakerTaskManager::HaveCompletedTask
                        ((HappyVaseBreakerTaskManager *)(lVar5 + 8));
      if (cVar3 != '\0') goto LAB_0458bcc4;
    }
    cVar3 = '\0';
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    this = (PennyTaskManager *)Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr();
    cVar3 = PennyTaskManager::HaveCompletedTask(this);
    if (cVar3 == '\0') goto LAB_0458bc30;
LAB_0458bcc4:
    ActiveItem::~ActiveItem(aAStack_88);
  }
LAB_0458bb8c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::WorldMap_WelfareButtonExtra() */

void __thiscall
WorldMap_WelfareButtonExtra::WorldMap_WelfareButtonExtra(WorldMap_WelfareButtonExtra *this)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  this[0x1d1] = (WorldMap_WelfareButtonExtra)0x0;
  *(undefined ***)this = &PTR_GetClass_06861800;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WelfareButtonExtra_068619a8;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_BOON");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0458a92c(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_WelfareButtonExtra)0x0;
  bVar2 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  bVar2 = (bool)CheckActivityTips();
  SetNotice(this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButtonExtra::StaticNew() */

WorldMap_WelfareButtonExtra * WorldMap_WelfareButtonExtra::StaticNew(void)

{
  WorldMap_WelfareButtonExtra *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_WelfareButtonExtra(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButtonExtra::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_WelfareButtonExtra::onNotifyRefreshActivityList
          (WorldMap_WelfareButtonExtra *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  HappyVaseBreakerTaskManager *this_00;
  long lVar4;
  UIPennyClassroom *this_01;
  CornucopiaMgr *this_02;
  int local_29c;
  ActiveItem aAStack_298 [8];
  undefined4 local_290;
  char local_280;
  undefined8 local_218 [25];
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    nop();
    goto LAB_0458c03c;
  }
  bVar1 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar1);
  if (this[0x1d1] != (WorldMap_WelfareButtonExtra)0x0) {
    local_29c = 0x2a3a;
    local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_29c);
    local_150[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
    if (bVar1) {
      UISingletonDialog<UIAnniversaryTreasure>::ShowDialog();
    }
    else {
      local_29c = 0x2a33;
      local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_29c);
      local_150[0] = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
      if (bVar1) {
        UISingletonDialog<UIPennyGuide>::ShowDialog();
      }
      else {
        local_29c = 0x29fd;
        local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_29c)
        ;
        local_150[0] = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
        if (bVar1) {
          UISingletonDialog<UIDaveTreasure>::ShowDialog();
        }
        else {
          local_29c = 0x2a4c;
          local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    &local_29c);
          local_150[0] = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
          if (bVar1) {
            UISingletonDialog<UINoviceSevenDays>::ShowDialog();
          }
          else {
            local_29c = 0x2a60;
            local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      &local_29c);
            local_150[0] = std::
                           map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
            if (bVar1) {
              UISingletonDialog<UIGrowthPackage>::ShowDialog();
            }
            else {
              local_29c = 0x2a76;
              local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        &local_29c);
              local_150[0] = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150);
              if (bVar1) {
                UISingletonDialog<UIGiftFoReturn>::ShowDialog();
              }
              else {
                local_29c = 0x2a5b;
                local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          &local_29c);
                local_150[0] = std::
                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_2);
                bVar1 = eastl::operator!=((rbtree_iterator *)local_218,(rbtree_iterator *)local_150)
                ;
                if (bVar1) {
                  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar3);
                  cVar2 = FUN_0458a5b4(local_290);
                  if ((cVar2 != '\0') && (local_280 != '\0')) {
                    NetworkPennyClassroomData::NetworkPennyClassroomData
                              ((NetworkPennyClassroomData *)local_218);
                    cVar2 = ActiveItem::GetDataSerialized(aAStack_298,(RtObject *)local_218);
                    if ((cVar2 != '\0') &&
                       (this_01 = (UIPennyClassroom *)
                                  UISingletonDialog<UIPennyClassroom>::ShowDialog(),
                       this_01 != (UIPennyClassroom *)0x0)) {
                      NetworkPennyClassroomData::NetworkPennyClassroomData
                                ((NetworkPennyClassroomData *)local_150,
                                 (NetworkPennyClassroomData *)local_218);
                      UIPennyClassroom::SetData(this_01,(CornucopiaData *)local_150);
                      NetworkPennyClassroomData::~NetworkPennyClassroomData
                                ((NetworkPennyClassroomData *)local_150);
                      UIPennyClassroom::InitView(this_01);
                    }
                    NetworkPennyClassroomData::~NetworkPennyClassroomData
                              ((NetworkPennyClassroomData *)local_218);
                  }
LAB_0458c28c:
                  ActiveItem::~ActiveItem(aAStack_298);
                }
                else {
                  local_29c = 0x2a63;
                  local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            &local_29c);
                  local_150[0] = std::
                                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_2);
                  bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                            (rbtree_iterator *)local_150);
                  if (bVar1) {
                    UISingletonDialog<UIBattleOrder>::ShowDialog();
                  }
                  else {
                    local_29c = 0x2a6f;
                    local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,&local_29c);
                    local_150[0] = std::
                                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_2);
                    bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                              (rbtree_iterator *)local_150);
                    if (bVar1) {
                      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar3);
                      cVar2 = FUN_0458a5b4(local_290);
                      if ((cVar2 != '\0') && (local_280 != '\0')) {
                        CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
                        cVar2 = ActiveItem::GetDataSerialized(aAStack_298,(RtObject *)local_150);
                        if (cVar2 != '\0') {
                          this_02 = (CornucopiaMgr *)
                                    Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
                          CornucopiaMgr::LoadData(this_02,(CornucopiaData *)local_150);
                          UISingletonDialog<UICornucopia>::ShowDialog();
                        }
                        CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
                      }
                      goto LAB_0458c28c;
                    }
                    local_29c = 0x2a26;
                    local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,&local_29c);
                    local_150[0] = std::
                                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_2);
                    bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                              (rbtree_iterator *)local_150);
                    if (bVar1) {
                      this_00 = (HappyVaseBreakerTaskManager *)
                                Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
                      HappyVaseBreakerTaskManager::Initialize(this_00);
                      UISingletonDialog<UIHappyVaseBreaker>::ShowDialog();
                    }
                    else {
                      local_29c = 0x2a34;
                      local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                               ((set<int,std::less<int>,std::allocator<int>> *)
                                                param_2,&local_29c);
                      local_150[0] = std::
                                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)param_2);
                      bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                                (rbtree_iterator *)local_150);
                      if (bVar1) {
                        lVar4 = UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr();
                        if (lVar4 == 0) {
                          UISingletonDialog<UILimitLotteryPage>::ShowDialog();
                        }
                      }
                      else {
                        local_29c = 0x2a74;
                        local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                 ((set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,&local_29c);
                        local_150[0] = std::
                                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              *)param_2);
                        bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                                  (rbtree_iterator *)local_150);
                        if (bVar1) {
                          UISingletonDialog<UIInvitation>::ShowDialog();
                        }
                        else {
                          local_29c = 0x2a89;
                          local_218[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                   ((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2,&local_29c);
                          local_150[0] = std::
                                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                *)param_2);
                          bVar1 = eastl::operator!=((rbtree_iterator *)local_218,
                                                    (rbtree_iterator *)local_150);
                          if ((bVar1) &&
                             (lVar4 = UISingletonDialog<UILuckyChest>::ShowDialog(), lVar4 != 0)) {
                            nop();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar1 = (bool)CheckActivityTips();
  SetNotice(this,bVar1);
LAB_0458c03c:
  this[0x1d1] = (WorldMap_WelfareButtonExtra)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

