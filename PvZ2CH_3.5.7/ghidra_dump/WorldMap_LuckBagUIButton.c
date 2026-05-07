// Class: WorldMap_LuckBagUIButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::StaticClassInit() */

void WorldMap_LuckBagUIButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LuckBagUIButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0395f3d8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuckBagUIButton::StaticGetClass() */

long * WorldMap_LuckBagUIButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuckBagUIButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuckBagUIButton::GetClass() const */

long * WorldMap_LuckBagUIButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuckBagUIButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuckBagUIButton::onNotifyBackFromRift() */

void WorldMap_LuckBagUIButton::onNotifyBackFromRift(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a1b,false,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton() */

void __thiscall WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton(WorldMap_LuckBagUIButton *this)

{
  LawnApp *pLVar1;
  char cVar2;
  WorldMapActivityBtnTurnChangeManager *pWVar3;
  long lVar4;
  ResourceManager *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuckBagUIButton_066d3308;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d3160;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_18,"UPDATE_UI_WorldMap");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_18);
  if (cVar2 == '\0') {
    std::string::~string(asStack_18);
    nop();
  }
  else {
    this_00 = *(ResourceManager **)(gLawnApp + 0x848);
    std::string::string(asStack_10,"UPDATE_UI_WorldMap");
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    pLVar1 = gLawnApp;
    if (lVar4 != 0) {
      std::string::string(asStack_10,"UPDATE_UI_WorldMap");
      LawnApp::DeleteGroup(pLVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  pWVar3 = (WorldMapActivityBtnTurnChangeManager *)
           Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
  WorldMapActivityBtnTurnChangeManager::setIsLoaded(pWVar3,0x2a1b,false);
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


/* non-virtual thunk to WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton() */

void __thiscall WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton(WorldMap_LuckBagUIButton *this)

{
  ~WorldMap_LuckBagUIButton(this + -0x10);
  return;
}


/* WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton() */

void __thiscall WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton(WorldMap_LuckBagUIButton *this)

{
  ~WorldMap_LuckBagUIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton() */

void __thiscall WorldMap_LuckBagUIButton::~WorldMap_LuckBagUIButton(WorldMap_LuckBagUIButton *this)

{
  ~WorldMap_LuckBagUIButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::WorldMap_LuckBagUIButton() */

void __thiscall WorldMap_LuckBagUIButton::WorldMap_LuckBagUIButton(WorldMap_LuckBagUIButton *this)

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
  *(undefined ***)this = &PTR_GetClass_066d3160;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuckBagUIButton_066d3308;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UPDATE_UI_WorldMap");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_50,"UPDATE_UI_WorldMap");
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
  FUN_0395f248(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBackFromRift);
  Sexy::Delegate0::Delegate0<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBackFromRift,(Delegate0 *)afStack_38);
  cVar3 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar3 != '\0') {
    this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_00,0x2a1b,false,0);
  }
  this[0x1d0] = (WorldMap_LuckBagUIButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuckBagUIButton::StaticNew() */

WorldMap_LuckBagUIButton * WorldMap_LuckBagUIButton::StaticNew(void)

{
  WorldMap_LuckBagUIButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_LuckBagUIButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::onButtonClicked() */

void __thiscall WorldMap_LuckBagUIButton::onButtonClicked(WorldMap_LuckBagUIButton *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this[0x1d0] = (WorldMap_LuckBagUIButton)0x1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨛';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::CheckActivated() */

void __thiscall WorldMap_LuckBagUIButton::CheckActivated(WorldMap_LuckBagUIButton *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  bool local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  ActiveItem::~ActiveItem(aAStack_88);
  UIWidget::SetVisible((UIWidget *)this,local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::onWorldLoaded() */

void __thiscall WorldMap_LuckBagUIButton::onWorldLoaded(WorldMap_LuckBagUIButton *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  bool bStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  ActiveItem::~ActiveItem(aAStack_88);
  UIWidget::SetVisible((UIWidget *)this,bStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bStack_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuckBagUIButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_LuckBagUIButton::onNotifyRefreshActivityList
          (WorldMap_LuckBagUIButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  WorldMapActivityBtnTurnChangeManager *this_00;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_9c = 0x2a1b;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0547419c(auStack_48);
    if ((cVar2 == '\0') && (local_70 != '\0')) {
      std::string::string((string *)&local_90,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_LUCKBAG");
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_90);
      std::string::~string((string *)&local_90);
      nop();
      this_00 = (WorldMapActivityBtnTurnChangeManager *)
                Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
      WorldMapActivityBtnTurnChangeManager::setIsLoaded(this_00,0x2a1b,true);
      CheckActivated(this);
      if (this[0x1d0] != (WorldMap_LuckBagUIButton)0x0) {
        this[0x1d0] = (WorldMap_LuckBagUIButton)0x0;
        UISingletonDialog<UILuckBag>::ShowDialog();
      }
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

