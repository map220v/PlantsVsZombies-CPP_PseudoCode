// Class: WorldMap_PlantSpecialOfferUIButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::StaticClassInit() */

void WorldMap_PlantSpecialOfferUIButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlantSpecialOfferUIButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0395e57c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantSpecialOfferUIButton::StaticGetClass() */

long * WorldMap_PlantSpecialOfferUIButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantSpecialOfferUIButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantSpecialOfferUIButton::GetClass() const */

long * WorldMap_PlantSpecialOfferUIButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlantSpecialOfferUIButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlantSpecialOfferUIButton::onNotifyBackFromRift() */

void WorldMap_PlantSpecialOfferUIButton::onNotifyBackFromRift(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x29c0,false,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton
          (WorldMap_PlantSpecialOfferUIButton *this)

{
  LawnApp *pLVar1;
  char cVar2;
  WorldMapActivityBtnTurnChangeManager *pWVar3;
  long lVar4;
  ResourceManager *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantSpecialOfferUIButton_066d3128;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d2f80;
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
  WorldMapActivityBtnTurnChangeManager::setIsLoaded(pWVar3,0x29c0,false);
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


/* non-virtual thunk to WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton
          (WorldMap_PlantSpecialOfferUIButton *this)

{
  ~WorldMap_PlantSpecialOfferUIButton(this + -0x10);
  return;
}


/* WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton
          (WorldMap_PlantSpecialOfferUIButton *this)

{
  ~WorldMap_PlantSpecialOfferUIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::~WorldMap_PlantSpecialOfferUIButton
          (WorldMap_PlantSpecialOfferUIButton *this)

{
  ~WorldMap_PlantSpecialOfferUIButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::onButtonClicked() */

void WorldMap_PlantSpecialOfferUIButton::onButtonClicked(void)

{
  RtObject *this;
  WorldMap_ActivityHomeButton *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapActivityHomeButton");
  this = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this != (RtObject *)0x0) &&
     (pWVar1 = Sexy::RtObject::Cast<WorldMap_ActivityHomeButton>(this),
     pWVar1 != (WorldMap_ActivityHomeButton *)0x0)) {
    WorldMap_ActivityHomeButton::RequestData(pWVar1,0x29c0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::WorldMap_PlantSpecialOfferUIButton() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::WorldMap_PlantSpecialOfferUIButton
          (WorldMap_PlantSpecialOfferUIButton *this)

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
  *(undefined ***)this = &PTR_GetClass_066d2f80;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlantSpecialOfferUIButton_066d3128;
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
  FUN_0395e3ec(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::
  Delegate0<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)()>
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
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBackFromRift);
  Sexy::Delegate0::
  Delegate0<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBackFromRift,(Delegate0 *)afStack_38);
  cVar3 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar3 != '\0') {
    this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_00,0x29c0,false,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlantSpecialOfferUIButton::StaticNew() */

WorldMap_PlantSpecialOfferUIButton * WorldMap_PlantSpecialOfferUIButton::StaticNew(void)

{
  WorldMap_PlantSpecialOfferUIButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_PlantSpecialOfferUIButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::CheckActivated() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::CheckActivated(WorldMap_PlantSpecialOfferUIButton *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::~ActiveItem(aAStack_88);
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    local_70 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::onWorldLoaded() */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::onWorldLoaded(WorldMap_PlantSpecialOfferUIButton *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [24];
  undefined1 uStack_70;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  ActiveItem::~ActiveItem(aAStack_88);
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 == '\0') {
    uStack_70 = false;
  }
  UIWidget::SetVisible((UIWidget *)this,(bool)uStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlantSpecialOfferUIButton::onNotifyRefreshActivityList(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
WorldMap_PlantSpecialOfferUIButton::onNotifyRefreshActivityList
          (WorldMap_PlantSpecialOfferUIButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  WorldMapActivityBtnTurnChangeManager *this_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string *psVar5;
  undefined4 local_220 [2];
  undefined8 local_218;
  undefined8 local_210 [3];
  ActiveItem aAStack_1f8 [24];
  char local_1e0;
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_220[0] = 0x29c0;
  local_218 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_220);
  local_210[0] = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_218,(rbtree_iterator *)local_210);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0547419c(auStack_1b8);
    if ((cVar2 == '\0') && (local_1e0 != '\0')) {
      uVar4 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar4);
      FUN_054603b8(auStack_168,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_PLANT_SPECIAL_OFFER_");
      std::string::string((string *)local_220,"");
      nop();
      NetworkOfferInfo::NetworkOfferInfo((NetworkOfferInfo *)local_210);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_210);
      psVar5 = extraout_x1;
      if (cVar2 != '\0') {
        iVar3 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        FUN_05474278((string *)local_220,(rbtree_iterator *)&local_218);
        std::string::~string((string *)&local_218);
        psVar5 = extraout_x1_00;
      }
      Sexy::Upper((Sexy *)local_220,psVar5);
      FUN_0545ec84(auStack_168,(rbtree_iterator *)&local_218);
      std::string::~string((string *)&local_218);
      FUN_05462824((rbtree_iterator *)&local_218,auStack_178);
      UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_218);
      std::string::~string((string *)&local_218);
      this_00 = (WorldMapActivityBtnTurnChangeManager *)
                Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstance();
      WorldMapActivityBtnTurnChangeManager::setIsLoaded(this_00,0x29c0,true);
      CheckActivated(this);
      NetworkOfferInfo::~NetworkOfferInfo((NetworkOfferInfo *)local_210);
      std::string::~string((string *)local_220);
      FUN_054617bc(auStack_178);
      ActiveItem::~ActiveItem(aAStack_1f8);
    }
    else {
      ActiveItem::~ActiveItem(aAStack_1f8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

