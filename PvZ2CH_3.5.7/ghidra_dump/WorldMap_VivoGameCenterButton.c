// Class: WorldMap_VivoGameCenterButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::StaticClassInit() */

void WorldMap_VivoGameCenterButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_VivoGameCenterButton");
    (*pcVar2)(plVar1,asStack_10,FUN_038fe124,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_VivoGameCenterButton::StaticGetClass() */

long * WorldMap_VivoGameCenterButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_VivoGameCenterButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_VivoGameCenterButton::GetClass() const */

long * WorldMap_VivoGameCenterButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_VivoGameCenterButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton() */

void __thiscall
WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton(WorldMap_VivoGameCenterButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066bf080;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_VivoGameCenterButton_066bf228;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x1d8));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton() */

void __thiscall
WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton(WorldMap_VivoGameCenterButton *this)

{
  ~WorldMap_VivoGameCenterButton(this + -0x10);
  return;
}


/* WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton() */

void __thiscall
WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton(WorldMap_VivoGameCenterButton *this)

{
  ~WorldMap_VivoGameCenterButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton() */

void __thiscall
WorldMap_VivoGameCenterButton::~WorldMap_VivoGameCenterButton(WorldMap_VivoGameCenterButton *this)

{
  ~WorldMap_VivoGameCenterButton(this + -0x10);
  return;
}


/* WorldMap_VivoGameCenterButton::onButtonClicked() */

void WorldMap_VivoGameCenterButton::onButtonClicked(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this);
  PurchaseBroker::CheckGameCenterStatus(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::WorldMap_VivoGameCenterButton() */

void __thiscall
WorldMap_VivoGameCenterButton::WorldMap_VivoGameCenterButton(WorldMap_VivoGameCenterButton *this)

{
  undefined *puVar1;
  undefined **__n;
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
  __n = &PTR__WorldMap_VivoGameCenterButton_066bf228;
  *(undefined ***)this = &PTR_GetClass_066bf080;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_VivoGameCenterButton_066bf228;
  Set8BytesTo0((string *)(this + 0x1d8));
  this[0x1d0] = (WorldMap_VivoGameCenterButton)0x0;
  std::string::append((string *)(this + 0x1d8),"",(size_t)__n);
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_VIVO_BTN");
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
  FUN_038fde60(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapLoadComplete,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCheckGameCenterFinished);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CheckGameCenterFinished,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGetGameCenterUrlFinished);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::GetGameCenterUrlFinished,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_VivoGameCenterButton::StaticNew() */

WorldMap_VivoGameCenterButton * WorldMap_VivoGameCenterButton::StaticNew(void)

{
  WorldMap_VivoGameCenterButton *this;
  
  this = ::operator_new(0x1e0);
  WorldMap_VivoGameCenterButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::onCheckGameCenterFinished(bool) */

void __thiscall
WorldMap_VivoGameCenterButton::onCheckGameCenterFinished
          (WorldMap_VivoGameCenterButton *this,bool param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  undefined1 auStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this[0x1d0] = (WorldMap_VivoGameCenterButton)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
               &DAT_05751d40,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)asStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
  }
  else {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_rightmost(this_00);
    PurchaseBroker::GetGameCenterUrl();
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::onGetGameCenterUrlFinished(std::string const&) */

void WorldMap_VivoGameCenterButton::onGetGameCenterUrlFinished(string *param_1)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x1d8);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_05751d30,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,false);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::initGachaUI(std::vector<GiftItem, std::allocator<GiftItem> >
   const&, int) */

void __thiscall
WorldMap_VivoGameCenterButton::initGachaUI
          (WorldMap_VivoGameCenterButton *this,vector *param_1,int param_2)

{
  PuzzlePlatformGiftPanel *pPVar1;
  undefined1 uVar2;
  string asStack_28 [8];
  vector<GiftItem,std::allocator<GiftItem>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PuzzlePlatformGiftPanel *)UISingletonDialog<PuzzlePlatformGiftPanel>::ShowDialog();
  if (pPVar1 != (PuzzlePlatformGiftPanel *)0x0) {
    if (this[0x1d0] == (WorldMap_VivoGameCenterButton)0x0) {
      FUN_05475d88(asStack_28,this + 0x1d8);
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
      if (0 < param_2) {
        uVar2 = 1;
      }
      std::string::string(asStack_28,"");
      nop();
    }
    std::vector<GiftItem,std::allocator<GiftItem>>::vector(avStack_20,param_1);
    PuzzlePlatformGiftPanel::InitRotateList(pPVar1,avStack_20);
    std::vector<GiftItem,std::allocator<GiftItem>>::~vector(avStack_20);
    PuzzlePlatformGiftPanel::InitView(pPVar1,uVar2,param_2,asStack_28);
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::CheckActivated() */

void __thiscall WorldMap_VivoGameCenterButton::CheckActivated(WorldMap_VivoGameCenterButton *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if (iVar1 == 0x67) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    ActiveItem::~ActiveItem(aAStack_88);
    if (local_70 != '\0') {
      UIWidget::SetVisible((UIWidget *)this,true);
      goto LAB_038fef30;
    }
  }
  UIWidget::SetVisible((UIWidget *)this,false);
LAB_038fef30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::onWorldLoaded() */

void __thiscall WorldMap_VivoGameCenterButton::onWorldLoaded(WorldMap_VivoGameCenterButton *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char cStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if (iVar1 == 0x67) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    ActiveItem::~ActiveItem(aAStack_88);
    if (cStack_70 != '\0') {
      UIWidget::SetVisible((UIWidget *)this,true);
      goto LAB_038fef30;
    }
  }
  UIWidget::SetVisible((UIWidget *)this,false);
LAB_038fef30:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_VivoGameCenterButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_VivoGameCenterButton::onNotifyRefreshActivityList
          (WorldMap_VivoGameCenterButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0 [3];
  vector avStack_a8 [24];
  int local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_cc = 0x2a3d;
  local_8 = ___stack_chk_guard;
  local_c8 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_cc);
  local_c0[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)local_c0);
  if ((bVar1) && (param_1)) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    if (local_70 == '\0') {
      ActiveItem::~ActiveItem(aAStack_88);
    }
    else {
      NetworkVivoGachaList::NetworkVivoGachaList((NetworkVivoGachaList *)local_c0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_c0);
      if (cVar2 != '\0') {
        initGachaUI(this,avStack_a8,local_90);
      }
      NetworkVivoGachaList::~NetworkVivoGachaList((NetworkVivoGachaList *)local_c0);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

