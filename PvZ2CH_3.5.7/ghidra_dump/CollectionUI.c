// Class: CollectionUI


/* CollectionUI::~CollectionUI() */

void __thiscall CollectionUI::~CollectionUI(CollectionUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6550;
  *(undefined ***)(this + 0x10) = &PTR__CollectionUI_066a66f0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to CollectionUI::~CollectionUI() */

void __thiscall CollectionUI::~CollectionUI(CollectionUI *this)

{
  ~CollectionUI(this + -0x10);
  return;
}


/* CollectionUI::~CollectionUI() */

void __thiscall CollectionUI::~CollectionUI(CollectionUI *this)

{
  ~CollectionUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectionUI::~CollectionUI() */

void __thiscall CollectionUI::~CollectionUI(CollectionUI *this)

{
  ~CollectionUI(this + -0x10);
  return;
}


/* CollectionUI::onLevelStarting() */

void __thiscall CollectionUI::onLevelStarting(CollectionUI *this)

{
  if (this[0x168] == (CollectionUI)0x0) {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* CollectionUI::onLastStandStart() */

void __thiscall CollectionUI::onLastStandStart(CollectionUI *this)

{
  if (this[0x168] == (CollectionUI)0x0) {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUI::StaticClassInit() */

void CollectionUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectionUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03831ff4,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectionUI::StaticGetClass() */

long * CollectionUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectionUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectionUI::GetClass() const */

long * CollectionUI::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectionUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectionUI::CollectionUI() */

void __thiscall CollectionUI::CollectionUI(CollectionUI *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 auVar1 [12];
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0;
  this[0x168] = (CollectionUI)0x0;
  *(undefined ***)this = &PTR_GetClass_066a6550;
  *(undefined ***)(this + 0x10) = &PTR__CollectionUI_066a66f0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  auVar1 = PlayerInfo::GetCollection(this_01,0xf231);
  this[0x168] = (CollectionUI)(auVar1._0_4_ != 0 && auVar1._8_4_ == 1);
  *(int *)(this + 0x164) = auVar1._4_4_;
  return;
}


/* CollectionUI::StaticNew() */

CollectionUI * CollectionUI::StaticNew(void)

{
  CollectionUI *this;
  
  this = ::operator_new(0x170);
  CollectionUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUI::registerForEvents() */

void __thiscall CollectionUI::registerForEvents(CollectionUI *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelStarting);
  Sexy::Delegate0::Delegate0<CollectionUI,void(CollectionUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<CollectionUI,void(CollectionUI::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUI::Draw(Sexy::Graphics*) */

void __thiscall CollectionUI::Draw(CollectionUI *this,Graphics *param_1)

{
  int iVar1;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = *(int *)(this + 0x164);
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3d58;
  if ((iVar1 != 1) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3e78, iVar1 != 2)) {
    if (iVar1 != 3) goto LAB_038323e8;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3e50;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
LAB_038323e8:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CollectionUI::Draw(Sexy::Graphics*) */

void __thiscall CollectionUI::Draw(CollectionUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

