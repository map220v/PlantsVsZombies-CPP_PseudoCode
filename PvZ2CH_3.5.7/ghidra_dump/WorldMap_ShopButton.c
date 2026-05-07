// Class: WorldMap_ShopButton


/* WorldMap_ShopButton::OnKillChooseDialog(UIWidget*) */

void __thiscall WorldMap_ShopButton::OnKillChooseDialog(WorldMap_ShopButton *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsShopChooseDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillShopChooseDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_ShopButton::KillChooseDialog() */

void WorldMap_ShopButton::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsShopChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillShopChooseDialog(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WorldMap_ShopButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ShopButton::Draw(WorldMap_ShopButton *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsShopChooseDialogValid(gLawnApp);
  FUN_04588d94(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_ShopButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_ShopButton::Draw(WorldMap_ShopButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::onLoadComplete() */

void WorldMap_ShopButton::onLoadComplete(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *in_x0;
  SexyVector2 *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar4;
  float fVar5;
  FastCurve aFStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 != '\0') {
    this = (SexyVector2 *)UIWidget::GetPositionOffset(in_x0);
    iVar2 = FUN_04589158(0x2d);
    iVar3 = FUN_04589158(0xffffffec);
    fVar5 = (float)iVar3;
    Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar2,fVar5);
    uVar4 = Sexy::SexyVector2::operator+(this,(SexyVector2 *)aFStack_10);
    UIWidget::SetPositionOffset(uVar4,fVar5);
    iVar2 = FUN_04588d78(*(undefined4 *)(in_x0 + 0x38));
    iVar3 = FUN_04588d84(*(undefined4 *)(in_x0 + 0x3c));
    FUN_04588d7c(in_x0 + 0x38,(int)((float)iVar2 * 0.8));
    FUN_04588d88(in_x0 + 0x3c,(int)((float)iVar3 * 0.8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::StaticClassInit() */

void WorldMap_ShopButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ShopButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04589508,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ShopButton::StaticGetClass() */

long * WorldMap_ShopButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ShopButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ShopButton::GetClass() const */

long * WorldMap_ShopButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ShopButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ShopButton::CheckVisibility(bool) */

byte WorldMap_ShopButton::CheckVisibility(bool param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  UniverseMap *this;
  
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar3 != 0) &&
      (this = (UniverseMap *)FUN_04588d90(*(undefined8 *)(lVar3 + 0x2b0)),
      this != (UniverseMap *)0x0)) && (cVar1 = UniverseMap::isInState(this,2), cVar1 == '\0')) {
    bVar2 = RiftUtils::IsWorldMapButtonsEnabled();
    return bVar2 | param_1;
  }
  return 0;
}


/* WorldMap_ShopButton::onMsgErrorRequest(int, std::string const&) */

void WorldMap_ShopButton::onMsgErrorRequest(int param_1,string *param_2)

{
  *(undefined1 *)((ulong)(uint)param_1 + 0x1d1) = 0;
  nop();
  return;
}


/* WorldMap_ShopButton::~WorldMap_ShopButton() */

void __thiscall WorldMap_ShopButton::~WorldMap_ShopButton(WorldMap_ShopButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06861620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ShopButton_068617c8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ShopButton::~WorldMap_ShopButton() */

void __thiscall WorldMap_ShopButton::~WorldMap_ShopButton(WorldMap_ShopButton *this)

{
  ~WorldMap_ShopButton(this + -0x10);
  return;
}


/* WorldMap_ShopButton::~WorldMap_ShopButton() */

void __thiscall WorldMap_ShopButton::~WorldMap_ShopButton(WorldMap_ShopButton *this)

{
  ~WorldMap_ShopButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ShopButton::~WorldMap_ShopButton() */

void __thiscall WorldMap_ShopButton::~WorldMap_ShopButton(WorldMap_ShopButton *this)

{
  ~WorldMap_ShopButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::RequestData(int) */

void __thiscall WorldMap_ShopButton::RequestData(WorldMap_ShopButton *this,int param_1)

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
    if (param_1 == 0x2983) {
      RechargeBundleUI::requestNetwork();
    }
    else if (param_1 == 0x29c0) {
      PlantSpecialOfferUI::requestNetwork();
    }
    else if (param_1 == 0x2a53) {
      LawnApp::ShowActivityCollection(gLawnApp);
    }
    else {
      this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(this_01,param_1,false,0);
    }
    this[0x1d1] = (WorldMap_ShopButton)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ShopButton::OnTouch() */

void __thiscall WorldMap_ShopButton::OnTouch(WorldMap_ShopButton *this)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsShopChooseDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    MessageRouter::Post<UIWidget*,WorldMap_ShopButton*>
              ((MessageRouter *)gMessageRouter,Message::KillChooseDialog,this);
    LawnApp::KillGameMaskUI(gLawnApp);
    LawnApp::ShowShopChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
    this[0x1d0] = (WorldMap_ShopButton)0x1;
    return;
  }
  LawnApp::KillShopChooseDialog(this_00);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::CheckActivityTips() */

void WorldMap_ShopButton::CheckActivityTips(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this;
  FirstRechargeExtraManager *this_00;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    this = (PlayerInfo *)ProfileUtils::Profile();
    std::string::string(asStack_90,"egypt8");
    cVar1 = PlayerInfo::GetLevelCompleted(this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (cVar1 != '\0') {
      this_00 = (FirstRechargeExtraManager *)
                Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
      iVar2 = FirstRechargeExtraManager::IsBonusReadyGot(this_00);
      if (-1 < iVar2) {
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04589dbc;
      }
    }
  }
  cVar1 = '\0';
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04589dbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::WorldMap_ShopButton() */

void __thiscall WorldMap_ShopButton::WorldMap_ShopButton(WorldMap_ShopButton *this)

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
  this[0x1d1] = (WorldMap_ShopButton)0x0;
  *(undefined ***)this = &PTR_GetClass_06861620;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ShopButton_068617c8;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_SHOP");
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
  FUN_045890fc(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_ShopButton)0x0;
  bVar2 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  bVar2 = (bool)CheckActivityTips();
  WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_ShopButton,void(WorldMap_ShopButton::*)()>
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
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_ShopButton,void(WorldMap_ShopButton::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ShopButton,void(WorldMap_ShopButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_ShopButton,void(WorldMap_ShopButton::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ShopButton::StaticNew() */

WorldMap_ShopButton * WorldMap_ShopButton::StaticNew(void)

{
  WorldMap_ShopButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_ShopButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ShopButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_ShopButton::onNotifyRefreshActivityList
          (WorldMap_ShopButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  MysteryCrystalMgr *this_00;
  NewerPresentMgr *this_01;
  ArtifactPresentMgr *this_02;
  SecretStoreMgr *this_03;
  MonthlyCardSpecialManager *this_04;
  long lVar4;
  FirstRechargeExtraManager *this_05;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0 [13];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    bVar1 = (bool)CheckVisibility(false);
    UIWidget::SetVisible((UIWidget *)this,bVar1);
    if (this[0x1d1] != (WorldMap_ShopButton)0x0) {
      local_fc = 0x2a39;
      local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
      local_f0[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
      if (bVar1) {
        this_00 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
        MysteryCrystalMgr::Init(this_00,true);
      }
      else {
        local_fc = 0x29c6;
        local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
        local_f0[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
        if (bVar1) {
          UISingletonDialog<UIChagreDouble>::ShowDialog();
        }
        else {
          local_fc = 0x29f3;
          local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
          local_f0[0] = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
          if (bVar1) {
            this_01 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
            NewerPresentMgr::Init(this_01);
          }
          else {
            local_fc = 0x2a50;
            local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc);
            local_f0[0] = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
            if (bVar1) {
              this_02 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance()
              ;
              ArtifactPresentMgr::Init(this_02);
            }
            else {
              local_fc = 0x2983;
              local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_fc
                                   );
              local_f0[0] = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
              if (bVar1) {
                LawnApp::ShowRechargeBundleUI(gLawnApp);
              }
              else {
                local_fc = 0x2a1b;
                local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      &local_fc);
                local_f0[0] = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0);
                if (bVar1) {
                  UISingletonDialog<UILuckBagAnnouncement>::ShowDialog();
                }
                else {
                  local_fc = 0x2a32;
                  local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        &local_fc);
                  local_f0[0] = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                  bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,(rbtree_iterator *)local_f0
                                           );
                  if (bVar1) {
                    this_03 = (SecretStoreMgr *)Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
                    SecretStoreMgr::Init(this_03);
                  }
                  else {
                    local_fc = 0x2a27;
                    local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          &local_fc);
                    local_f0[0] = std::
                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_2);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,
                                              (rbtree_iterator *)local_f0);
                    if (bVar1) {
                      UISingletonDialog<UINewRecall>::ShowDialog();
                    }
                    else {
                      local_fc = 0x2a31;
                      local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            &local_fc);
                      local_f0[0] = std::
                                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_2);
                      bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,
                                                (rbtree_iterator *)local_f0);
                      if (bVar1) {
                        UISingletonDialog<UILimitLottery>::ShowDialog();
                      }
                      else {
                        local_fc = 0x29c0;
                        local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,&local_fc);
                        local_f0[0] = std::
                                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_2);
                        bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,
                                                  (rbtree_iterator *)local_f0);
                        if (bVar1) {
                          LawnApp::ShowPlantSpecialOfferUI(gLawnApp);
                        }
                        else {
                          local_fc = 0x29c1;
                          local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                               ((set<int,std::less<int>,std::allocator<int>> *)
                                                param_2,&local_fc);
                          local_f0[0] = std::
                                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_2);
                          bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,
                                                    (rbtree_iterator *)local_f0);
                          if (bVar1) {
                            FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
                                      ((FirstRechargeExtraNetworkData *)local_f0);
                            iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                            ActivityManager::GetActiveItem(iVar3);
                            cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_f0);
                            if (cVar2 != '\0') {
                              this_05 = (FirstRechargeExtraManager *)
                                        Sexy::LazySingleton<FirstRechargeExtraManager>::
                                        GetInstancePtr();
                              FirstRechargeExtraManager::LoadData
                                        (this_05,(FirstRechargeExtraNetworkData *)local_f0,true);
                            }
                            ActiveItem::~ActiveItem(aAStack_88);
                            FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
                                      ((FirstRechargeExtraNetworkData *)local_f0);
                          }
                          else {
                            local_fc = 0x2a3f;
                            local_f8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                 ((set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,&local_fc);
                            local_f0[0] = std::
                                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)param_2);
                            bVar1 = eastl::operator!=((rbtree_iterator *)&local_f8,
                                                      (rbtree_iterator *)local_f0);
                            if (bVar1) {
                              iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                              ActivityManager::GetActiveItem(iVar3);
                              cVar2 = FUN_02fd455c(local_80);
                              if ((cVar2 != '\0') && (local_70 != '\0')) {
                                MonthlyCardSpecialData::MonthlyCardSpecialData
                                          ((MonthlyCardSpecialData *)local_f0);
                                cVar2 = ActiveItem::GetDataSerialized
                                                  (aAStack_88,(RtObject *)local_f0);
                                if (cVar2 != '\0') {
                                  this_04 = (MonthlyCardSpecialManager *)
                                            Sexy::LazySingleton<MonthlyCardSpecialManager>::
                                            GetInstance();
                                  MonthlyCardSpecialManager::LoadData
                                            (this_04,(MonthlyCardSpecialData *)local_f0);
                                  lVar4 = Sexy::LazySingleton<MonthlyCardSpecialManager>::
                                          GetInstance();
                                  FUN_02fd4568(lVar4 + 0x38,local_38);
                                  UISingletonDialog<MonthlyCardSpecialUI>::ShowDialog();
                                }
                                MonthlyCardSpecialData::~MonthlyCardSpecialData
                                          ((MonthlyCardSpecialData *)local_f0);
                              }
                              ActiveItem::~ActiveItem(aAStack_88);
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
    WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar1);
  }
  else {
    nop();
  }
  this[0x1d1] = (WorldMap_ShopButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

