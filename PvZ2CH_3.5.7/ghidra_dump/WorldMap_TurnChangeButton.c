// Class: WorldMap_TurnChangeButton


/* WorldMap_TurnChangeButton::onWorldLoaded() */

void __thiscall WorldMap_TurnChangeButton::onWorldLoaded(WorldMap_TurnChangeButton *this)

{
  (**(code **)(*(long *)this + 0x198))();
  (**(code **)(*(long *)this + 0x1c8))(this);
  return;
}


/* WorldMap_TurnChangeButton::onNotifyBackFromRift() */

void __thiscall WorldMap_TurnChangeButton::onNotifyBackFromRift(WorldMap_TurnChangeButton *this)

{
  (**(code **)(*(long *)this + 0x1d0))();
  return;
}


/* WorldMap_TurnChangeButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_TurnChangeButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  (**(code **)(*(long *)(ulong)param_1 + 0x1c0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TurnChangeButton::StaticClassInit() */

void WorldMap_TurnChangeButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TurnChangeButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0458c9e0,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TurnChangeButton::StaticGetClass() */

long * WorldMap_TurnChangeButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TurnChangeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TurnChangeButton::GetClass() const */

long * WorldMap_TurnChangeButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TurnChangeButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton() */

void __thiscall
WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton(WorldMap_TurnChangeButton *this)

{
  LawnApp *pLVar1;
  char cVar2;
  long lVar3;
  ResourceManager *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TurnChangeButton_06861bc8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068619e0;
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
    lVar3 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    pLVar1 = gLawnApp;
    if (lVar3 != 0) {
      std::string::string(asStack_10,"UPDATE_UI_WorldMap");
      LawnApp::DeleteGroup(pLVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton() */

void __thiscall
WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton(WorldMap_TurnChangeButton *this)

{
  ~WorldMap_TurnChangeButton(this + -0x10);
  return;
}


/* WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton() */

void __thiscall
WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton(WorldMap_TurnChangeButton *this)

{
  ~WorldMap_TurnChangeButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton() */

void __thiscall
WorldMap_TurnChangeButton::~WorldMap_TurnChangeButton(WorldMap_TurnChangeButton *this)

{
  ~WorldMap_TurnChangeButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TurnChangeButton::WorldMap_TurnChangeButton() */

void __thiscall
WorldMap_TurnChangeButton::WorldMap_TurnChangeButton(WorldMap_TurnChangeButton *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
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
  *(undefined ***)this = &PTR_GetClass_068619e0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TurnChangeButton_06861bc8;
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
  FUN_0458c818(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a0);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1b0);
  Sexy::Delegate0::Delegate0<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1b8);
  Sexy::Delegate0::Delegate0<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyBackFromRift,(Delegate0 *)afStack_38);
  this[0x1d0] = (WorldMap_TurnChangeButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TurnChangeButton::StaticNew() */

WorldMap_TurnChangeButton * WorldMap_TurnChangeButton::StaticNew(void)

{
  WorldMap_TurnChangeButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_TurnChangeButton(this);
  return this;
}

