// Class: OakArrowAddUI


/* OakArrowAddUI::cancelTouch() */

void __thiscall OakArrowAddUI::cancelTouch(OakArrowAddUI *this)

{
  *(undefined8 *)(this + 0x168) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* OakArrowAddUI::~OakArrowAddUI() */

void __thiscall OakArrowAddUI::~OakArrowAddUI(OakArrowAddUI *this)

{
  *(undefined ***)this = &PTR_GetClass_068327f0;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowAddUI_06832990;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to OakArrowAddUI::~OakArrowAddUI() */

void __thiscall OakArrowAddUI::~OakArrowAddUI(OakArrowAddUI *this)

{
  ~OakArrowAddUI(this + -0x10);
  return;
}


/* OakArrowAddUI::~OakArrowAddUI() */

void __thiscall OakArrowAddUI::~OakArrowAddUI(OakArrowAddUI *this)

{
  ~OakArrowAddUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OakArrowAddUI::~OakArrowAddUI() */

void __thiscall OakArrowAddUI::~OakArrowAddUI(OakArrowAddUI *this)

{
  ~OakArrowAddUI(this + -0x10);
  return;
}


/* OakArrowAddUI::unregisterForEvents() */

void __thiscall OakArrowAddUI::unregisterForEvents(OakArrowAddUI *this)

{
  if ((this[0x170] != (OakArrowAddUI)0x0) && (*(long *)(gLawnApp + 0x9f0) != 0)) {
    LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowAddUI::StaticClassInit() */

void OakArrowAddUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakArrowAddUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0430f5b4,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakArrowAddUI::StaticGetClass() */

long * OakArrowAddUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakArrowAddUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakArrowAddUI::GetClass() const */

long * OakArrowAddUI::GetClass(void)

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
  (*pcVar3)(plVar1,"OakArrowAddUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakArrowAddUI::OakArrowAddUI() */

void __thiscall OakArrowAddUI::OakArrowAddUI(OakArrowAddUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  this[0x170] = (OakArrowAddUI)0x0;
  *(undefined ***)this = &PTR_GetClass_068327f0;
  *(undefined ***)(this + 0x10) = &PTR__OakArrowAddUI_06832990;
  return;
}


/* OakArrowAddUI::StaticNew() */

OakArrowAddUI * OakArrowAddUI::StaticNew(void)

{
  OakArrowAddUI *this;
  
  this = ::operator_new(0x178);
  OakArrowAddUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowAddUI::handleTouch(Sexy::Touch const&) */

void __thiscall OakArrowAddUI::handleTouch(OakArrowAddUI *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar2 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 3) {
    lVar3 = *(long *)param_1;
    lVar4 = *(long *)(this + 0x168);
    if ((cVar2 == '\0') || (lVar3 != lVar4)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      MessageRouter::Post((_func_void *)gMessageRouter);
      lVar3 = *(long *)param_1;
      lVar4 = *(long *)(this + 0x168);
    }
  }
  else {
    if (iVar1 != 4) {
      if (((iVar1 == 0) && (cVar2 != '\0')) && (*(long *)(this + 0x168) == 0)) {
        *(undefined8 *)(this + 0x168) = *(undefined8 *)param_1;
        uVar5 = 1;
        (**(code **)(*(long *)this + 0xe8))(this,4);
      }
      else {
        uVar5 = 0;
      }
      goto LAB_0430f79c;
    }
    lVar3 = *(long *)param_1;
    uVar5 = 0;
    lVar4 = *(long *)(this + 0x168);
  }
  if (lVar3 == lVar4) {
    cancelTouch(this);
  }
LAB_0430f79c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowAddUI::registerForEvents() */

void __thiscall OakArrowAddUI::registerForEvents(OakArrowAddUI *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar1 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<OakArrowAddUI,bool(OakArrowAddUI::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_98);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<OakArrowAddUI,void(OakArrowAddUI::*)()>(aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
    this[0x170] = (OakArrowAddUI)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakArrowAddUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowAddUI::Draw(OakArrowAddUI *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar1 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  if (iVar1 == 4) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06af9078;
  }
  else {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06af90d0;
  }
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_0430f46c();
  Sexy::Graphics::DrawImage(param_1,pIVar2,iVar1,iVar1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to OakArrowAddUI::Draw(Sexy::Graphics*) */

void __thiscall OakArrowAddUI::Draw(OakArrowAddUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

