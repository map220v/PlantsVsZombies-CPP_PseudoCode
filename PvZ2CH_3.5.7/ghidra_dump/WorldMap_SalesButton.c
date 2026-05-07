// Class: WorldMap_SalesButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SalesButton::StaticClassInit() */

void WorldMap_SalesButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_SalesButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04a642c4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SalesButton::StaticGetClass() */

long * WorldMap_SalesButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SalesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_SalesButton::GetClass() const */

long * WorldMap_SalesButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SalesButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_SalesButton::~WorldMap_SalesButton() */

void __thiscall WorldMap_SalesButton::~WorldMap_SalesButton(WorldMap_SalesButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069373d0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SalesButton_06937578;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_SalesButton::~WorldMap_SalesButton() */

void __thiscall WorldMap_SalesButton::~WorldMap_SalesButton(WorldMap_SalesButton *this)

{
  ~WorldMap_SalesButton(this + -0x10);
  return;
}


/* WorldMap_SalesButton::~WorldMap_SalesButton() */

void __thiscall WorldMap_SalesButton::~WorldMap_SalesButton(WorldMap_SalesButton *this)

{
  ~WorldMap_SalesButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_SalesButton::~WorldMap_SalesButton() */

void __thiscall WorldMap_SalesButton::~WorldMap_SalesButton(WorldMap_SalesButton *this)

{
  ~WorldMap_SalesButton(this + -0x10);
  return;
}


/* WorldMap_SalesButton::CheckActivated() */

undefined1 __thiscall WorldMap_SalesButton::CheckActivated(WorldMap_SalesButton *this)

{
  char cVar1;
  undefined1 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = false;
  if (this_01 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsActiveServerConfigValid(this_01);
    if (cVar1 == '\0') {
      LawnApp::RefreshSalesInfo();
    }
    uVar2 = PlayerInfo::IsSalesOpening(this_01);
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)uVar2);
  return uVar2;
}


/* WorldMap_SalesButton::onWorldLoaded() */

undefined1 __thiscall WorldMap_SalesButton::onWorldLoaded(WorldMap_SalesButton *this)

{
  char cVar1;
  undefined1 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = false;
  if (this_01 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsActiveServerConfigValid(this_01);
    if (cVar1 == '\0') {
      LawnApp::RefreshSalesInfo();
    }
    uVar2 = PlayerInfo::IsSalesOpening(this_01);
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)uVar2);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SalesButton::onButtonClicked() */

void WorldMap_SalesButton::onButtonClicked(void)

{
  LawnApp *pLVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    cVar2 = PlayerInfo::HasValidSales(this_00);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_58,L"[SALES_REWARD_NO_VALID_SALES_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[SALES_REWARD_NO_VALID_SALES]",auStack_60);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      cVar2 = LawnApp::IsNetworkModuleOK();
      pLVar1 = gLawnApp;
      if (cVar2 == '\0') {
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        LawnApp::ShowSalesUI(gLawnApp);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SalesButton::WorldMap_SalesButton() */

void __thiscall WorldMap_SalesButton::WorldMap_SalesButton(WorldMap_SalesButton *this)

{
  undefined *this_00;
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069373d0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SalesButton_06937578;
  std::string::string(asStack_50,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_SALES");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_50);
  nop();
  FUN_04a64134(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_SalesButton,void(WorldMap_SalesButton::*)()>
            ((Delegate0 *)afStack_38,asStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)this_00,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SalesButton::StaticNew() */

WorldMap_SalesButton * WorldMap_SalesButton::StaticNew(void)

{
  WorldMap_SalesButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_SalesButton(this);
  return this;
}

