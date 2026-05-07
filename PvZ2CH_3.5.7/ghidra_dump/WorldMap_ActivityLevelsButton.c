// Class: WorldMap_ActivityLevelsButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityLevelsButton::StaticClassInit() */

void WorldMap_ActivityLevelsButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_ActivityLevelsButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045793c0,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ActivityLevelsButton::StaticGetClass() */

long * WorldMap_ActivityLevelsButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ActivityLevelsButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ActivityLevelsButton::GetClass() const */

long * WorldMap_ActivityLevelsButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_ActivityLevelsButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton() */

void __thiscall
WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton(WorldMap_ActivityLevelsButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685fb50;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityLevelsButton_0685fcf8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton() */

void __thiscall
WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton(WorldMap_ActivityLevelsButton *this)

{
  ~WorldMap_ActivityLevelsButton(this + -0x10);
  return;
}


/* WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton() */

void __thiscall
WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton(WorldMap_ActivityLevelsButton *this)

{
  ~WorldMap_ActivityLevelsButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton() */

void __thiscall
WorldMap_ActivityLevelsButton::~WorldMap_ActivityLevelsButton(WorldMap_ActivityLevelsButton *this)

{
  ~WorldMap_ActivityLevelsButton(this + -0x10);
  return;
}


/* WorldMap_ActivityLevelsButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_ActivityLevelsButton::Draw(WorldMap_ActivityLevelsButton *this,Graphics *param_1)

{
  long lVar1;
  
  lVar1 = UISingletonDialog<ActivityLevelsChoose>::GetSingletonPtr();
  FUN_04579004(this + 0x1a8,lVar1 != 0);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_ActivityLevelsButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_ActivityLevelsButton::Draw(WorldMap_ActivityLevelsButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityLevelsButton::updateNoticeState() */

void __thiscall
WorldMap_ActivityLevelsButton::updateNoticeState(WorldMap_ActivityLevelsButton *this)

{
  char cVar1;
  FestivalManager *pFVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  cVar1 = FestivalManager::IsFestivalActive(pFVar2,0xffffffff);
  if (cVar1 == '\0') {
    UIEasyButtonWidget::RemoveNotice((UIEasyButtonWidget *)this);
  }
  else {
    std::string::string(asStack_10,"IMAGE_UI_HUD_WORLDMAP_NOTICE_ICON");
    UIEasyButtonWidget::AddNotice((UIEasyButtonWidget *)this,asStack_10,-0.1,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityLevelsButton::WorldMap_ActivityLevelsButton() */

void __thiscall
WorldMap_ActivityLevelsButton::WorldMap_ActivityLevelsButton(WorldMap_ActivityLevelsButton *this)

{
  undefined *puVar1;
  FestivalManager *this_00;
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
  this[0x1d0] = (WorldMap_ActivityLevelsButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0685fb50;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityLevelsButton_0685fcf8;
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::FestivalInit(this_00);
  updateNoticeState(this);
  std::string::string((string *)&local_40,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_CHALLENGE");
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
  FUN_04579230(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_40;
  uStack_68 = uStack_38;
  local_60 = local_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ActivityLevelsButton,void(WorldMap_ActivityLevelsButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ActivityLevelsButton::StaticNew() */

WorldMap_ActivityLevelsButton * WorldMap_ActivityLevelsButton::StaticNew(void)

{
  WorldMap_ActivityLevelsButton *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_ActivityLevelsButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityLevelsButton::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void WorldMap_ActivityLevelsButton::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  char cVar1;
  int iVar2;
  WorldMap_ActivityLevelsButton *this;
  FestivalManager *this_00;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  bool local_70;
  long local_8;
  
  this = (WorldMap_ActivityLevelsButton *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04579014(local_80);
  ActiveItem::~ActiveItem(aAStack_88);
  if (cVar1 != '\0') {
    if (((ulong)param_2 & 0xff) != 0) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (this[0x1d0] == (WorldMap_ActivityLevelsButton)0x0) {
        updateNoticeState(this);
        this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
        FestivalManager::SetSpringFestivalButtonVisible(this_00,local_70);
      }
      else if (local_70 != false) {
        UISingletonDialog<ActivityLevelsChoose>::ShowDialog();
      }
    }
    this[0x1d0] = (WorldMap_ActivityLevelsButton)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

