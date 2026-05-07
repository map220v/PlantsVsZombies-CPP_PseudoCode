// Class: WorldMap_AnniversaryButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::StaticClassInit() */

void WorldMap_AnniversaryButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AnniversaryButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0395c8e0,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AnniversaryButton::StaticGetClass() */

long * WorldMap_AnniversaryButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AnniversaryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AnniversaryButton::GetClass() const */

long * WorldMap_AnniversaryButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_AnniversaryButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::onButtonClicked() */

void WorldMap_AnniversaryButton::onButtonClicked(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"OpenAnniversaryUI");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AnniversaryButton::onNotifyBackFromRift() */

void WorldMap_AnniversaryButton::onNotifyBackFromRift(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x297d,false,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton() */

void __thiscall
WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton(WorldMap_AnniversaryButton *this)

{
  LawnApp *pLVar1;
  char cVar2;
  WorldMapActivityBtnTurnChangeManager *pWVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AnniversaryButton_066d2d68;
  *(undefined ***)this = &PTR_GetClass_066d2bc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UPDATE_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pWVar3 = (WorldMapActivityBtnTurnChangeManager *)
           Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsLoaded(pWVar3,0x297d,false);
  pWVar3 = (WorldMapActivityBtnTurnChangeManager *)
           Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::updateData(pWVar3);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton() */

void __thiscall
WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton(WorldMap_AnniversaryButton *this)

{
  ~WorldMap_AnniversaryButton(this + -0x10);
  return;
}


/* WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton() */

void __thiscall
WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton(WorldMap_AnniversaryButton *this)

{
  ~WorldMap_AnniversaryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton() */

void __thiscall
WorldMap_AnniversaryButton::~WorldMap_AnniversaryButton(WorldMap_AnniversaryButton *this)

{
  ~WorldMap_AnniversaryButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::WorldMap_AnniversaryButton() */

void __thiscall
WorldMap_AnniversaryButton::WorldMap_AnniversaryButton(WorldMap_AnniversaryButton *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  ActivityManager *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066d2bc0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AnniversaryButton_066d2d68;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"LUA_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_50,"LUA_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
  }
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UPDATE_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_50,"UPDATE_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
  }
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0395c750(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_AnniversaryButton,void(WorldMap_AnniversaryButton::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_AnniversaryButton,void(WorldMap_AnniversaryButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBackFromRift);
  Sexy::Delegate0::Delegate0<WorldMap_AnniversaryButton,void(WorldMap_AnniversaryButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBackFromRift,(Delegate0 *)afStack_38);
  cVar3 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar3 != '\0') {
    this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_00,0x297d,false,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AnniversaryButton::StaticNew() */

WorldMap_AnniversaryButton * WorldMap_AnniversaryButton::StaticNew(void)

{
  WorldMap_AnniversaryButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_AnniversaryButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::onUpdate() */

void __thiscall WorldMap_AnniversaryButton::onUpdate(WorldMap_AnniversaryButton *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Anniversary/warning");
  bVar1 = GetLuaSharedData<bool>(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (bVar1) {
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::CheckActivated() */

void __thiscall WorldMap_AnniversaryButton::CheckActivated(WorldMap_AnniversaryButton *this)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Anniversary/active");
  bVar1 = GetLuaSharedData<bool>(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  cVar2 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar2 == '\0') {
    bVar1 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::onWorldLoaded() */

void __thiscall WorldMap_AnniversaryButton::onWorldLoaded(WorldMap_AnniversaryButton *this)

{
  bool bVar1;
  char cVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Anniversary/active");
  bVar1 = GetLuaSharedData<bool>(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  cVar2 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar2 == '\0') {
    bVar1 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,bVar1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AnniversaryButton::OnLuaNotify(std::string const&) */

void __thiscall
WorldMap_AnniversaryButton::OnLuaNotify(WorldMap_AnniversaryButton *this,string *param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  WorldMapActivityBtnTurnChangeManager *this_00;
  string asStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  ActiveItem aAStack_1f8 [24];
  char local_1e0;
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [104];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator!=(param_1,"RefreshBtnIcon");
  if (bVar2) goto LAB_0395d20c;
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar3 = FUN_0547419c(auStack_1b8);
  if ((cVar3 != '\0') || (local_1e0 == '\0')) {
    ActiveItem::~ActiveItem(aAStack_1f8);
    goto LAB_0395d20c;
  }
  uVar6 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar6);
  std::string::string(asStack_200,"");
  FUN_05462980(auStack_178,asStack_200);
  std::string::~string(asStack_200);
  nop();
  FUN_0544a0a4(auStack_110,0);
  std::string::string(asStack_218,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_SUBENTRY_4");
  nop();
  std::string::string(asStack_208,"Anniversary/icon_res");
  FUN_05475d88(asStack_200,asStack_218);
  GetLuaSharedData<std::string>(asStack_210,asStack_208,asStack_200);
  std::string::~string(asStack_200);
  std::string::~string(asStack_208);
  nop();
  cVar3 = FUN_0547419c(asStack_210);
  pLVar1 = gLawnApp;
  if (cVar3 == '\0') {
    std::string::string(asStack_208,"LUA_UI_Anniversary");
    cVar3 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_208);
    pLVar1 = gLawnApp;
    bVar4 = 0;
    if (cVar3 == '\0') {
      std::string::string(asStack_200,"UPDATE_UI_Anniversary");
      bVar4 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_200);
      bVar4 = bVar4 ^ 1;
      std::string::~string(asStack_200);
      nop();
    }
    std::string::~string(asStack_208);
    nop();
    if (bVar4 != 0) goto LAB_0395d350;
  }
  else {
LAB_0395d350:
    thunk_FUN_05475e00(asStack_210,asStack_218);
  }
  FUN_05462980(auStack_178,asStack_210);
  FUN_05462824(asStack_200,auStack_178);
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_200);
  std::string::~string(asStack_200);
  this_00 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsLoaded(this_00,0x297d,true);
  CheckActivated(this);
  std::string::~string(asStack_210);
  std::string::~string(asStack_218);
  FUN_054617bc(auStack_178);
  ActiveItem::~ActiveItem(aAStack_1f8);
LAB_0395d20c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

