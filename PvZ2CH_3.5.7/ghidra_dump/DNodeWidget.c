// Class: DNodeWidget


/* DNodeWidget::setTouchEnable(bool) */

void __thiscall DNodeWidget::setTouchEnable(DNodeWidget *this,bool param_1)

{
  this[0x130] = (DNodeWidget)param_1;
  return;
}


/* DNodeWidget::isTouchEnable() const */

DNodeWidget __thiscall DNodeWidget::isTouchEnable(DNodeWidget *this)

{
  return this[0x130];
}


/* DNodeWidget::getLoader() */

void __thiscall DNodeWidget::getLoader(DNodeWidget *this)

{
  DEditorNode *this_00;
  
  this_00 = (DEditorNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DEditorNode::getLoader(this_00);
  return;
}


/* DNodeWidget::setRootName(std::string const&) */

void DNodeWidget::setRootName(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0xd8));
  DEditorNode::setRootName(psVar1);
  return;
}


/* DNodeWidget::addToWidgetManager(bool, bool) */

void __thiscall DNodeWidget::addToWidgetManager(DNodeWidget *this,bool param_1,bool param_2)

{
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  if (param_2) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  }
  if (param_1) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  }
  return;
}


/* DNodeWidget::addToWidgetManager(bool) */

void __thiscall DNodeWidget::addToWidgetManager(DNodeWidget *this,bool param_1)

{
  (**(code **)(*(long *)this + 0x340))(this,param_1,1);
  return;
}


/* DNodeWidget::removeFromWidgetManager() */

void __thiscall DNodeWidget::removeFromWidgetManager(DNodeWidget *this)

{
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  (**(code **)(*(long *)this + 0x350))(this,0);
  return;
}


/* DNodeWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall DNodeWidget::TouchBegan(DNodeWidget *this,Touch *param_1)

{
  if (this[0x130] == (DNodeWidget)0x0) {
    return;
  }
  DTouchEventDispatcher::touchHandle((DTouchEventDispatcher *)(this + 0xe0),param_1,0);
  return;
}


/* DNodeWidget::TouchMoved(Sexy::Touch const&) */

void __thiscall DNodeWidget::TouchMoved(DNodeWidget *this,Touch *param_1)

{
  if (this[0x130] == (DNodeWidget)0x0) {
    return;
  }
  DTouchEventDispatcher::touchHandle((DTouchEventDispatcher *)(this + 0xe0),param_1,1);
  return;
}


/* DNodeWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall DNodeWidget::TouchEnded(DNodeWidget *this,Touch *param_1)

{
  if (this[0x130] == (DNodeWidget)0x0) {
    return;
  }
  DTouchEventDispatcher::touchHandle((DTouchEventDispatcher *)(this + 0xe0),param_1,2);
  return;
}


/* DNodeWidget::getWinSize() */

void __thiscall DNodeWidget::getWinSize(DNodeWidget *this)

{
  long lVar1;
  DVec2 *in_x8;
  float fVar2;
  float fVar3;
  
  lVar1 = gLawnApp;
  fVar2 = (float)FUN_04f8d528((float)*(int *)(gLawnApp + 0xd4));
  fVar3 = (float)FUN_04f8d528((float)*(int *)(lVar1 + 0xd8));
  DVec2::DVec2(in_x8,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::StaticClassInit() */

void DNodeWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"DNodeWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_04f8d6d0,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeWidget::StaticGetClass() */

long * DNodeWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DNodeWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DNodeWidget::GetClass() const */

long * DNodeWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DNodeWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::OnGestureLongPress(Sexy::Point) */

void __thiscall DNodeWidget::OnGestureLongPress(DNodeWidget *this,undefined4 *param_2)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x130] != (DNodeWidget)0x0) {
    Sexy::Touch::Touch((Touch *)&local_40);
    local_38 = 0;
    local_2c = param_2[1];
    local_30 = *param_2;
    local_40 = 0;
    local_20 = 1;
    local_18 = 0;
    local_28 = local_30;
    local_24 = local_2c;
    DTouchEventDispatcher::touchHandle((DTouchEventDispatcher *)(this + 0xe0),(Touch *)&local_40,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::TouchesCanceled() */

void __thiscall DNodeWidget::TouchesCanceled(DNodeWidget *this)

{
  Touch aTStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x130] != (DNodeWidget)0x0) {
    Sexy::Touch::Touch(aTStack_40);
    DTouchEventDispatcher::touchHandle((DTouchEventDispatcher *)(this + 0xe0),aTStack_40,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::setRect(int, int, int, int) */

void __thiscall
DNodeWidget::setRect(DNodeWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  code *pcVar6;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04f8d514(param_1);
  uVar2 = FUN_04f8d514(param_2);
  uVar3 = FUN_04f8d514(param_3);
  uVar4 = FUN_04f8d514(param_4);
  (**(code **)(*(long *)this + 0x198))(this,uVar1,uVar2,uVar3,uVar4);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  pcVar6 = *(code **)(*plVar5 + 0x210);
  DVec2::DVec2(aDStack_10,(float)param_3,(float)param_4);
  (*pcVar6)(plVar5,aDStack_10);
  plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar5 + 0x110))(0,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::setRect2(int, int, int, int) */

void __thiscall
DNodeWidget::setRect2(DNodeWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  code *pcVar2;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))(this,param_1,param_2);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  pcVar2 = *(code **)(*plVar1 + 0x210);
  DVec2::DVec2(aDStack_10,(float)param_3,(float)param_4);
  (*pcVar2)(plVar1,aDStack_10);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x110))(0,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeWidget::addChild(DTransformNode*, int, int) */

void __thiscall
DNodeWidget::addChild(DNodeWidget *this,DTransformNode *param_1,int param_2,int param_3)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2,param_3);
  return;
}


/* DNodeWidget::addChild(DTransformNode*, int) */

void __thiscall DNodeWidget::addChild(DNodeWidget *this,DTransformNode *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2);
  return;
}


/* DNodeWidget::addChild(DTransformNode*) */

void __thiscall DNodeWidget::addChild(DNodeWidget *this,DTransformNode *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  return;
}


/* DNodeWidget::getChildByTag(int) */

void __thiscall DNodeWidget::getChildByTag(DNodeWidget *this,int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}


/* DNodeWidget::getChildByName(std::string const&) */

void __thiscall DNodeWidget::getChildByName(DNodeWidget *this,string *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  return;
}


/* DNodeWidget::removeAllChildren(bool) */

void __thiscall DNodeWidget::removeAllChildren(DNodeWidget *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  return;
}


/* DNodeWidget::removeChild(DTransformNode*, bool) */

void __thiscall DNodeWidget::removeChild(DNodeWidget *this,DTransformNode *param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x70))(plVar1,param_1,param_2);
  return;
}


/* DNodeWidget::removeChildByTag(int, bool) */

void __thiscall DNodeWidget::removeChildByTag(DNodeWidget *this,int param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2);
  return;
}


/* DNodeWidget::removeChildByName(std::string const&, bool) */

void __thiscall DNodeWidget::removeChildByName(DNodeWidget *this,string *param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2);
  return;
}


/* DNodeWidget::~DNodeWidget() */

void __thiscall DNodeWidget::~DNodeWidget(DNodeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a246c0;
  DTouchEventDispatcher::~DTouchEventDispatcher((DTouchEventDispatcher *)(this + 0xe0));
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DNodeWidget::~DNodeWidget() */

void __thiscall DNodeWidget::~DNodeWidget(DNodeWidget *this)

{
  ~DNodeWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNodeWidget::DNodeWidget() */

void __thiscall DNodeWidget::DNodeWidget(DNodeWidget *this)

{
  long *plVar1;
  DRefPtr<DEditorNode> *this_00;
  code *pcVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_00 = (DRefPtr<DEditorNode> *)(this + 0xd8);
  *(undefined ***)this = &PTR_GetClass_06a246c0;
  DRefPtr<DEditorNode>::DRefPtr(this_00);
  DTouchEventDispatcher::DTouchEventDispatcher((DTouchEventDispatcher *)(this + 0xe0));
  this[0x130] = (DNodeWidget)0x1;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
  pcVar2 = *(code **)(*plVar1 + 0x210);
  getWinSize(this);
  (*pcVar2)(plVar1,auStack_10);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this_00);
  (**(code **)(*plVar1 + 0x2f8))(plVar1,(DTouchEventDispatcher *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DNodeWidget::StaticNew() */

DNodeWidget * DNodeWidget::StaticNew(void)

{
  DNodeWidget *this;
  
  this = ::operator_new(0x138);
  DNodeWidget(this);
  return this;
}


/* DNodeWidget::loadGroup(std::string const&) */

void __thiscall DNodeWidget::loadGroup(DNodeWidget *this,string *param_1)

{
  DEditorNode *this_00;
  
  this_00 = (DEditorNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DEditorNode::loadGroup(this_00,param_1);
  return;
}


/* DNodeWidget::load(std::string const&, bool) */

void __thiscall DNodeWidget::load(DNodeWidget *this,string *param_1,bool param_2)

{
  DEditorNode *this_00;
  
  this_00 = (DEditorNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DEditorNode::load(this_00,param_1,param_2);
  return;
}


/* DNodeWidget::reload(std::string const&) */

void DNodeWidget::reload(string *param_1)

{
  string *psVar1;
  
  (**(code **)(*(long *)param_1 + 0x388))(param_1,1);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0xd8));
  DEditorNode::reload(psVar1);
  (**(code **)(*(long *)param_1 + 0x318))(param_1);
  return;
}


/* DNodeWidget::reload() */

void __thiscall DNodeWidget::reload(DNodeWidget *this)

{
  DEditorNode *this_00;
  
  (**(code **)(*(long *)this + 0x388))(this,1);
  this_00 = (DEditorNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DEditorNode::reload(this_00);
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}

