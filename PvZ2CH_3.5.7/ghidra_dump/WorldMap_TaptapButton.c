// Class: WorldMap_TaptapButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TaptapButton::StaticClassInit() */

void WorldMap_TaptapButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_TaptapButton");
    (*pcVar2)(plVar1,asStack_10,FUN_038fd248,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TaptapButton::StaticGetClass() */

long * WorldMap_TaptapButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TaptapButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_TaptapButton::GetClass() const */

long * WorldMap_TaptapButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_TaptapButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TaptapButton::onButtonClicked() */

void WorldMap_TaptapButton::onButtonClicked(void)

{
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*gLawnApp + 0x168);
  std::string::string(asStack_10,"https://l.taptap.cn/y3BAB5dU?channel=rep-rep_h9ratlb6oum");
  (*pcVar2)(plVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TaptapButton::~WorldMap_TaptapButton() */

void __thiscall WorldMap_TaptapButton::~WorldMap_TaptapButton(WorldMap_TaptapButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066beea0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TaptapButton_066bf048;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_TaptapButton::~WorldMap_TaptapButton() */

void __thiscall WorldMap_TaptapButton::~WorldMap_TaptapButton(WorldMap_TaptapButton *this)

{
  ~WorldMap_TaptapButton(this + -0x10);
  return;
}


/* WorldMap_TaptapButton::~WorldMap_TaptapButton() */

void __thiscall WorldMap_TaptapButton::~WorldMap_TaptapButton(WorldMap_TaptapButton *this)

{
  ~WorldMap_TaptapButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_TaptapButton::~WorldMap_TaptapButton() */

void __thiscall WorldMap_TaptapButton::~WorldMap_TaptapButton(WorldMap_TaptapButton *this)

{
  ~WorldMap_TaptapButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TaptapButton::CheckActivated() */

void __thiscall WorldMap_TaptapButton::CheckActivated(WorldMap_TaptapButton *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  UniverseMap *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if ((((lVar3 == 0) ||
       (this_00 = (UniverseMap *)FUN_038fca80(*(undefined8 *)(lVar3 + 0x2b0)),
       this_00 == (UniverseMap *)0x0)) || (cVar1 = UniverseMap::isInState(this_00,2), cVar1 != '\0')
      ) || (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 == '\0')) {
    UIWidget::SetVisible((UIWidget *)this,false);
  }
  else {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_rightmost(this_01);
    PurchaseBroker::GetChannelID();
    bVar2 = std::operator==(asStack_10,"250");
    if (bVar2) {
      UIWidget::SetVisible((UIWidget *)this,true);
    }
    else {
      UIWidget::SetVisible((UIWidget *)this,false);
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TaptapButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_TaptapButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  CheckActivated((WorldMap_TaptapButton *)(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_TaptapButton::WorldMap_TaptapButton() */

void __thiscall WorldMap_TaptapButton::WorldMap_TaptapButton(WorldMap_TaptapButton *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066beea0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_TaptapButton_066bf048;
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_TINY_ICON_TAPTAP");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_40);
  nop();
  FUN_038fce78(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  CheckActivated(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_TaptapButton,void(WorldMap_TaptapButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_TaptapButton::StaticNew() */

WorldMap_TaptapButton * WorldMap_TaptapButton::StaticNew(void)

{
  WorldMap_TaptapButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_TaptapButton(this);
  return this;
}

