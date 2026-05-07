// Class: DScrollView


/* DScrollView::setDirection(DScrollView::Direction) */

void __thiscall DScrollView::setDirection(DScrollView *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x170) = param_2;
  return;
}


/* DScrollView::getViewSize() const */

FPoint * DScrollView::getViewSize(void)

{
  long in_x0;
  FPoint *in_x8;
  
  Sexy::FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0x1d0));
  return in_x8;
}


/* DScrollView::isTouchEnable() const */

bool __thiscall DScrollView::isTouchEnable(DScrollView *this)

{
  return *(long *)(this + 0x208) != 0;
}


/* non-virtual thunk to DScrollView::isTouchEnable() const */

void __thiscall DScrollView::isTouchEnable(DScrollView *this)

{
  isTouchEnable(this + -0x150);
  return;
}


/* DScrollView::onTouchLongPress(Sexy::Touch const&) */

void DScrollView::onTouchLongPress(Touch *param_1)

{
  return;
}


/* non-virtual thunk to DScrollView::onTouchLongPress(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchLongPress(DScrollView *this,Touch *param_1)

{
  onTouchLongPress((Touch *)(this + -0x150));
  return;
}


/* DScrollView::onActive() */

void __thiscall DScrollView::onActive(DScrollView *this)

{
  undefined4 uVar1;
  code *pcVar2;
  
  DTouchLayer::onActive();
  pcVar2 = *(code **)(*(long *)this + 0x358);
  uVar1 = (**(code **)(*(long *)this + 0x360))(this);
  (*pcVar2)(this,uVar1,*(undefined4 *)(this + 500));
  return;
}


/* DScrollView::getContentSize() const */

void DScrollView::getContentSize(void)

{
  long in_x0;
  long *plVar1;
  
  plVar1 = *(long **)(in_x0 + 0x180);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x218))(plVar1);
    return;
  }
  DTransformNode::getContentSize();
  return;
}


/* DScrollView::getContentOffset() */

void DScrollView::getContentOffset(void)

{
  long in_x0;
  TPoint *pTVar1;
  FPoint *in_x8;
  
  pTVar1 = (TPoint *)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1b8))(*(long **)(in_x0 + 0x180));
  Sexy::FPoint::FPoint(in_x8,pTVar1);
  return;
}


/* DScrollView::getZoomScale() */

void __thiscall DScrollView::getZoomScale(DScrollView *this)

{
  (**(code **)(**(long **)(this + 0x180) + 0x1e8))(*(long **)(this + 0x180));
  return;
}


/* DScrollView::setViewSize(DVec2) */

void __thiscall DScrollView::setViewSize(DScrollView *this,DVec2 *param_2)

{
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)param_2;
  DTransformNode::setContentSize((DTransformNode *)this,param_2);
  return;
}


/* DScrollView::getContainer() */

undefined8 __thiscall DScrollView::getContainer(DScrollView *this)

{
  return *(undefined8 *)(this + 0x180);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setContainer(DTouchLayer*) */

void __thiscall DScrollView::setContainer(DScrollView *this,DTouchLayer *param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)this + 0x68))(this,1);
    (**(code **)(*(long *)(param_1 + 0x150) + 0x10))(param_1 + 0x150,0,0);
    lVar1 = *(long *)param_1;
    *(DTouchLayer **)(this + 0x180) = param_1;
    (**(code **)(lVar1 + 0x198))(param_1,0);
    plVar3 = *(long **)(this + 0x180);
    pcVar2 = *(code **)(*plVar3 + 0x128);
    DVec2::DVec2(aDStack_10,0.0,0.0);
    (*pcVar2)(plVar3,aDStack_10);
    (**(code **)(*(long *)this + 0x30))(this,*(undefined8 *)(this + 0x180));
    Sexy::FPoint::FPoint((FPoint *)aDStack_10,(TPoint *)(this + 0x1d0));
    setViewSize(this,aDStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DScrollView::hasVisibleParents() const */

undefined1 __thiscall DScrollView::hasVisibleParents(DScrollView *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x238) != DTransformNode::getParent) {
    this = (DScrollView *)(**(code **)(*(long *)this + 0x238))();
    goto joined_r0x04f89a34;
  }
  do {
    this = (DScrollView *)DTransformNode::getParent((DTransformNode *)this);
joined_r0x04f89a34:
    while( true ) {
      if (this == (DScrollView *)0x0) {
        return 1;
      }
      cVar1 = (**(code **)(*(long *)this + 0xe0))(this);
      if (cVar1 == '\0') {
        return 0;
      }
      if (*(code **)(*(long *)this + 0x238) == DTransformNode::getParent) break;
      this = (DScrollView *)(**(code **)(*(long *)this + 0x238))(this);
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::maxContainerOffset() */

void DScrollView::maxContainerOffset(void)

{
  char cVar1;
  long in_x0;
  TPoint *pTVar2;
  DVec2 *in_x8;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(**(long **)(in_x0 + 0x180) + 0x1a8))(*(long **)(in_x0 + 0x180));
  if (cVar1 == '\0') {
    pTVar2 = (TPoint *)(**(code **)(**(long **)(in_x0 + 0x180) + 0x200))(*(long **)(in_x0 + 0x180));
  }
  else {
    pTVar2 = (TPoint *)&DVec2::ZERO;
  }
  Sexy::FPoint::FPoint((FPoint *)&local_18,pTVar2);
  (**(code **)(**(long **)(in_x0 + 0x180) + 0x218))(&local_10,*(long **)(in_x0 + 0x180));
  fVar3 = (float)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1d0))(*(long **)(in_x0 + 0x180));
  (**(code **)(**(long **)(in_x0 + 0x180) + 0x218))(&local_10,*(long **)(in_x0 + 0x180));
  fVar4 = (float)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1d8))(*(long **)(in_x0 + 0x180));
  DVec2::DVec2(in_x8,local_10 * local_18 * fVar3,local_c * local_14 * fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::minContainerOffset() */

void DScrollView::minContainerOffset(void)

{
  char cVar1;
  long in_x0;
  TPoint *pTVar2;
  DVec2 *in_x8;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(**(long **)(in_x0 + 0x180) + 0x1a8))(*(long **)(in_x0 + 0x180));
  if (cVar1 == '\0') {
    pTVar2 = (TPoint *)(**(code **)(**(long **)(in_x0 + 0x180) + 0x200))(*(long **)(in_x0 + 0x180));
  }
  else {
    pTVar2 = (TPoint *)&DVec2::ZERO;
  }
  Sexy::FPoint::FPoint((FPoint *)&local_18,pTVar2);
  (**(code **)(**(long **)(in_x0 + 0x180) + 0x218))(&local_10,*(long **)(in_x0 + 0x180));
  fVar3 = (float)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1d0))(*(long **)(in_x0 + 0x180));
  (**(code **)(**(long **)(in_x0 + 0x180) + 0x218))(&local_10,*(long **)(in_x0 + 0x180));
  fVar4 = (float)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1d8))(*(long **)(in_x0 + 0x180));
  DVec2::DVec2(in_x8,*(float *)(in_x0 + 0x1d0) + fVar3 * (local_18 + -1.0) * local_10,
               *(float *)(in_x0 + 0x1d4) + fVar4 * (local_14 + -1.0) * local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::updateInset() */

void __thiscall DScrollView::updateInset(DScrollView *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = getContainer(this);
  if (lVar2 != 0) {
    maxContainerOffset();
    *(undefined8 *)(this + 0x18c) = local_10;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(this + 0x18c),*(float *)(this + 0x18c) + *(float *)(this + 0x1d0) * 0.2
               ,*(float *)(this + 400) + *(float *)(this + 0x1d4) * 0.2);
    minContainerOffset();
    *(undefined8 *)(this + 0x194) = local_10;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(this + 0x194),*(float *)(this + 0x194) - *(float *)(this + 0x1d0) * 0.2
               ,*(float *)(this + 0x198) - *(float *)(this + 0x1d4) * 0.2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DScrollView::setContentSize(DVec2 const&) */

DScrollView * __thiscall DScrollView::setContentSize(DScrollView *this,DVec2 *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = getContainer(this);
  if (lVar1 != 0) {
    plVar2 = (long *)getContainer(this);
    (**(code **)(*plVar2 + 0x210))(plVar2,param_1);
    updateInset(this);
  }
  return this;
}


/* DScrollView::onAfterDraw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DScrollView::onAfterDraw(DScrollView *this,DMatrix *param_1,Graphics *param_2)

{
  Sexy::Graphics::ClearClipRect(param_2);
  return;
}


/* DScrollView::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchCancelled(DScrollView *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0xe0))();
  if (cVar1 != '\0') {
    std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::clear
              ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x1b8));
    lVar2 = FUN_04f89748(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
    if (lVar2 == 0) {
      plVar3 = *(long **)(this + 0x180);
      if ((plVar3 != (long *)0x0) && (this[0x1f1] != (DScrollView)0x0)) {
        (**(code **)(*plVar3 + 0x348))(plVar3,param_1);
      }
      this[0x174] = (DScrollView)0x0;
      this[0x188] = (DScrollView)0x0;
      return;
    }
  }
  return;
}


/* non-virtual thunk to DScrollView::onTouchCancelled(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchCancelled(DScrollView *this,Touch *param_1)

{
  onTouchCancelled(this + -0x150,param_1);
  return;
}


/* DScrollView::stoppedAnimatedScroll(DTransformNode*) */

void DScrollView::stoppedAnimatedScroll(DTransformNode *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(param_1 + 0x200));
  (**(code **)(*(long *)param_1 + 0x2a0))(param_1,uVar1);
  return;
}


/* DScrollView::performedAnimatedScroll(float) */

float DScrollView::performedAnimatedScroll(float param_1)

{
  long *in_x0;
  
  if (*(char *)((long)in_x0 + 0x174) != '\0') {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(in_x0 + 0x40));
    param_1 = (float)(**(code **)(*in_x0 + 0x2a0))();
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::getViewRect() */

void DScrollView::getViewRect(void)

{
  long *in_x0;
  Rectangle *in_x8;
  DTransformNode *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0xc0))(&local_10,in_x0,&DVec2::ZERO);
  fVar1 = (float)(**(code **)(*in_x0 + 0x1d0))();
  fVar2 = (float)(**(code **)(*in_x0 + 0x1d8))();
  for (this = (DTransformNode *)in_x0[0x13]; this != (DTransformNode *)0x0;
      this = (DTransformNode *)(**(code **)(*(long *)this + 0x238))()) {
    while( true ) {
      fVar3 = (float)(**(code **)(*(long *)this + 0x1d0))(this);
      fVar1 = fVar1 * fVar3;
      fVar3 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
      fVar2 = fVar2 * fVar3;
      if (*(code **)(*(long *)this + 0x238) != DTransformNode::getParent) break;
      this = (DTransformNode *)DTransformNode::getParent(this);
      if (this == (DTransformNode *)0x0) goto LAB_04f8a08c;
    }
  }
LAB_04f8a08c:
  fVar3 = *(float *)(in_x0 + 0x3a);
  if (fVar1 < 0.0) {
    local_10 = local_10 + fVar3 * fVar1;
    fVar1 = -fVar1;
  }
  fVar6 = *(float *)((long)in_x0 + 0x1d4);
  if (fVar2 < 0.0) {
    local_c = local_c + fVar6 * fVar2;
    fVar2 = -fVar2;
  }
  fVar5 = local_c;
  fVar4 = (float)FUN_04f89838(local_10);
  fVar5 = (float)FUN_04f89838(fVar5);
  fVar1 = (float)FUN_04f89838(fVar3 * fVar1);
  fVar2 = (float)FUN_04f89838(fVar6 * fVar2);
  EA::Text::Rectangle::Rectangle(in_x8,fVar4,fVar5,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::onBeforeDraw(DMatrix const&, Sexy::Graphics*) */

void __thiscall DScrollView::onBeforeDraw(DScrollView *this,DMatrix *param_1,Graphics *param_2)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getViewRect();
  Sexy::Insets::Insets((Insets *)&local_18);
  local_18 = (int)local_28;
  local_14 = (int)local_24;
  local_10 = (int)local_20;
  local_c = (int)local_1c;
  Sexy::Graphics::SetClipRect(param_2,(TRect *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DScrollView::visit(DMatrix const&, Sexy::Graphics*, bool) */

void __thiscall
DScrollView::visit(DScrollView *this,DMatrix *param_1,Graphics *param_2,bool param_3)

{
  onBeforeDraw(this,param_1,param_2);
  DTransformNode::visit((DTransformNode *)this,param_1,param_2,param_3);
  onAfterDraw(this,param_1,param_2);
  return;
}


/* DScrollView::DScrollView() */

void __thiscall DScrollView::DScrollView(DScrollView *this)

{
  DTouchLayer::DTouchLayer((DTouchLayer *)this);
  *(undefined4 *)(this + 0x170) = 2;
  *(undefined ***)this = &PTR__DScrollView_06a23f30;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a242b0;
  *(undefined ***)(this + 0x150) = &PTR__DScrollView_06a242e8;
  this[0x174] = (DScrollView)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x178));
  *(undefined8 *)(this + 0x180) = 0;
  this[0x188] = (DScrollView)0x0;
  this[0x189] = (DScrollView)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x194));
  this[0x19c] = (DScrollView)0x0;
  this[0x19d] = (DScrollView)0x0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d0));
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  this[0x1f0] = (DScrollView)0x0;
  DRefPtr<DSchedule>::DRefPtr((DRefPtr<DSchedule> *)(this + 0x1f8));
  DRefPtr<DSchedule>::DRefPtr((DRefPtr<DSchedule> *)(this + 0x200));
  *(undefined8 *)(this + 0x208) = 0;
  *(DScrollView **)(this + 0x168) = this;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setContentOffsetInDuration(DVec2, float) */

void __thiscall
DScrollView::setContentOffsetInDuration(float param_1,DScrollView *this,undefined8 param_3)

{
  long lVar1;
  DAction *pDVar2;
  undefined8 uVar3;
  DSchedule *this_00;
  Effect_Barrage *this_01;
  long *plVar4;
  DRefPtr<DMove> aDStack_60 [8];
  DScrollView *local_58;
  code *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DMove>::DRefPtr(aDStack_60);
  lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  pDVar2 = (DAction *)(**(code **)(*(long *)(lVar1 + 0x90) + 8))(lVar1 + 0x90,param_3);
  pDVar2 = (DAction *)DAction::setDuration(pDVar2,param_1);
  local_50 = stoppedAnimatedScroll;
  local_48 = 0;
  local_58 = this;
  std::bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
            ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
             (_Placeholder *)&DAT_0576d300);
  std::function<void(DTransformNode*)>::
  function<std::_Bind<std::_Mem_fn<void(DScrollView::*)(DTransformNode*)>(DScrollView*,std::_Placeholder<1>)>,void>
            ((function<void(DTransformNode*)> *)afStack_28,auStack_40);
  DAction::onDone(pDVar2,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  plVar4 = *(long **)(this + 0x180);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_60);
  (**(code **)(*plVar4 + 0x298))(plVar4,uVar3);
  this_00 = (DSchedule *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x200));
  local_48 = 0;
  local_50 = performedAnimatedScroll;
  local_58 = this;
  std::bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
            ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
             (_Placeholder *)&DAT_0576d300);
  std::function<void(float)>::
  function<std::_Bind<std::_Mem_fn<void(DScrollView::*)(float)>(DScrollView*,std::_Placeholder<1>)>,void>
            ((function<void(float)> *)afStack_28,auStack_40);
  this_01 = (Effect_Barrage *)DSchedule::onUpdate(this_00,(function *)afStack_28);
  Effect_Barrage::SetViceBarrage(this_01,(Effect_Barrage *)0x0);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  plVar4 = *(long **)(this + 0x180);
  uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x200));
  (**(code **)(*plVar4 + 0x298))(plVar4,uVar3);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setContentOffset(DVec2, bool) */

void __thiscall DScrollView::setContentOffset(DScrollView *this,TPoint *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    if (this[0x19c] == (DScrollView)0x0) {
      minContainerOffset();
      maxContainerOffset();
      fVar2 = (float)NEON_fminnm(*(undefined4 *)param_2,local_10);
      if (fVar2 <= local_18) {
        fVar2 = local_18;
      }
      fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 4),local_c);
      *(float *)param_2 = fVar2;
      if (fVar1 <= local_14) {
        fVar1 = local_14;
      }
      *(float *)(param_2 + 4) = fVar1;
    }
    (**(code **)(**(long **)(this + 0x180) + 0x108))(*(long **)(this + 0x180),param_2);
  }
  else {
    Sexy::FPoint::FPoint((FPoint *)&local_10,param_2);
    setContentOffsetInDuration((DScrollView *)0x3e19999a,this,(FPoint *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setZoomScale(float) */

void __thiscall DScrollView::setZoomScale(DScrollView *this,float param_1)

{
  DVec2 *this_00;
  float fVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  DVec2 aDStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)(**(code **)(**(long **)(this + 0x180) + 0x1e8))(*(long **)(this + 0x180));
  if (fVar1 != param_1) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_30);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_28);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    if (*(float *)(this + 0x1b0) == 0.0) {
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_20,*(float *)(this + 0x1d0) * 0.5,
                 *(float *)(this + 0x1d4) * 0.5);
      (**(code **)(*(long *)this + 0xc0))(&local_10,this,(ResistenceValueInfo *)&local_20);
      local_20 = local_10;
    }
    else {
      local_20 = *(undefined8 *)(this + 0x1a8);
    }
    (**(code **)(**(long **)(this + 0x180) + 0xb8))
              (&local_10,*(long **)(this + 0x180),(ResistenceValueInfo *)&local_20);
    local_30 = local_10;
    uVar2 = NEON_fminnm(param_1,*(undefined4 *)(this + 0x1dc));
    (**(code **)(**(long **)(this + 0x180) + 0x140))(uVar2,*(long **)(this + 0x180));
    (**(code **)(**(long **)(this + 0x180) + 0xc0))
              (&local_10,*(long **)(this + 0x180),(ResistenceValueInfo *)&local_30);
    local_28 = local_10;
    DVec2::operator-((DVec2 *)&local_20,(DVec2 *)&local_28);
    this_00 = (DVec2 *)(**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    DVec2::operator+(this_00,aDStack_18);
    setContentOffset(this,&local_10,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setZoomScaleInDuration(float, float) */

void __thiscall DScrollView::setZoomScaleInDuration(DScrollView *this,float param_1,float param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  DRefPtr<DScale> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 <= 0.0) {
    setZoomScale(this,param_1);
  }
  else {
    fVar4 = (float)(**(code **)(**(long **)(this + 0x180) + 0x1e8))(*(long **)(this + 0x180));
    if (fVar4 != param_1) {
      DRefPtr<DScale>::DRefPtr(aDStack_10);
      plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      pcVar3 = *(code **)(*plVar1 + 0x68);
      (**(code **)(**(long **)(this + 0x180) + 0x1e8))(*(long **)(this + 0x180));
      (*pcVar3)(plVar1);
      uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      (**(code **)(*(long *)this + 0x298))(this,uVar2);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DScrollView::setZoomScale(float, bool) */

void __thiscall DScrollView::setZoomScale(DScrollView *this,float param_1,bool param_2)

{
  if (!param_2) {
    setZoomScale(this,param_1);
    return;
  }
  setZoomScaleInDuration(this,param_1,0.15);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::relocateContainer(bool) */

void __thiscall DScrollView::relocateContainer(DScrollView *this,bool param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_28)
  ;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_20)
  ;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  minContainerOffset();
  local_20 = local_10;
  maxContainerOffset();
  local_18 = local_10;
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
  uVar3 = *puVar2;
  uVar1 = *(uint *)(this + 0x170) - 1;
  local_28._0_4_ = (float)uVar3;
  local_28._4_4_ = (float)((ulong)uVar3 >> 0x20);
  if ((*(uint *)(this + 0x170) & 0xfffffffd) == 0) {
    fVar5 = (float)local_20;
    if ((float)local_20 <= (float)local_28) {
      fVar5 = (float)local_28;
    }
    fVar4 = (float)NEON_fminnm(fVar5,(undefined4)local_18);
    fVar5 = local_28._4_4_;
    if (uVar1 < 2) {
      fVar5 = (float)NEON_fminnm(local_18._4_4_,local_28._4_4_);
      if (fVar5 <= local_20._4_4_) {
        fVar5 = local_20._4_4_;
      }
      if (local_28._4_4_ != fVar5) goto LAB_04f8abd4;
    }
    if ((float)local_28 == fVar4) goto LAB_04f8abec;
  }
  else if ((1 < uVar1) ||
          (fVar5 = (float)NEON_fminnm(local_18._4_4_,local_28._4_4_), fVar4 = (float)local_28,
          local_28._4_4_ == fVar5)) goto LAB_04f8abec;
LAB_04f8abd4:
  local_28 = uVar3;
  DVec2::DVec2((DVec2 *)&local_10,fVar4,fVar5);
  setContentOffset(this,(DVec2 *)&local_10,param_1);
  uVar3 = local_28;
LAB_04f8abec:
  local_28 = uVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::deaccelerateScrolling(float) */

void DScrollView::deaccelerateScrolling(float param_1)

{
  uint uVar1;
  DScrollView *in_x0;
  DVec2 *this;
  float *pfVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x174] != (DScrollView)0x0) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(in_x0 + 0x1f8));
    (**(code **)(*(long *)in_x0 + 0x2a0))();
    in_x0[0x189] = (DScrollView)0x0;
    goto LAB_04f8add8;
  }
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_20)
  ;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  plVar4 = *(long **)(in_x0 + 0x180);
  pcVar5 = *(code **)(*plVar4 + 0x108);
  this = (DVec2 *)(**(code **)(*plVar4 + 0x1b8))(plVar4);
  DVec2::operator+(this,(DVec2 *)(in_x0 + 0x1a0));
  (*pcVar5)(plVar4,(DVec2 *)&local_10);
  maxContainerOffset();
  local_20 = local_10;
  minContainerOffset();
  local_18 = local_10;
  pfVar2 = (float *)(**(code **)(**(long **)(in_x0 + 0x180) + 0x1b8))(*(long **)(in_x0 + 0x180));
  fVar6 = *pfVar2;
  lVar3 = (**(code **)(**(long **)(in_x0 + 0x180) + 0x1b8))(*(long **)(in_x0 + 0x180));
  fVar7 = *(float *)(lVar3 + 4);
  DVec2::operator*((DVec2 *)(in_x0 + 0x1a0),0.95);
  *(undefined8 *)(in_x0 + 0x1a0) = local_10;
  DVec2::DVec2((DVec2 *)&local_10,fVar6,fVar7);
  setContentOffset();
  if (ABS(*(float *)(in_x0 + 0x1a0)) <= 1.0) {
    if (1.0 < ABS(*(float *)(in_x0 + 0x1a4))) {
      uVar1 = *(uint *)(in_x0 + 0x170);
      goto joined_r0x04f8ae48;
    }
  }
  else {
    uVar1 = *(uint *)(in_x0 + 0x170);
joined_r0x04f8ae48:
    if (((1 < uVar1 - 1) || ((fVar7 < local_20._4_4_ && (local_18._4_4_ < fVar7)))) &&
       (((uVar1 & 0xfffffffd) != 0 || ((fVar6 < (float)local_20 && ((float)local_18 < fVar6))))))
    goto LAB_04f8add8;
  }
  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(in_x0 + 0x1f8));
  (**(code **)(*(long *)in_x0 + 0x2a0))();
  in_x0[0x189] = (DScrollView)0x0;
  relocateContainer(in_x0,true);
LAB_04f8add8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DScrollView::~DScrollView() */

void __thiscall DScrollView::~DScrollView(DScrollView *this)

{
  long lVar1;
  DTouchEventDispatcher *this_00;
  
  *(undefined ***)this = &PTR__DScrollView_06a23f30;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a242b0;
  *(undefined ***)(this + 0x150) = &PTR__DScrollView_06a242e8;
  if (*(long *)(this + 0x208) != 0) {
    lVar1 = BaseDecompressionTask::GetInBuffer((BaseDecompressionTask *)this);
    if (lVar1 != 0) {
      this_00 = (DTouchEventDispatcher *)
                BaseDecompressionTask::GetInBuffer((BaseDecompressionTask *)this);
      DTouchEventDispatcher::removeTouchListener(this_00,*(DTouchListener **)(this + 0x208));
    }
    *(undefined8 *)(this + 0x208) = 0;
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)(this + 0x200));
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)(this + 0x1f8));
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::~vector
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x1b8));
  DTouchLayer::~DTouchLayer((DTouchLayer *)this);
  return;
}


/* non-virtual thunk to DScrollView::~DScrollView() */

void __thiscall DScrollView::~DScrollView(DScrollView *this)

{
  ~DScrollView(this + -0x150);
  return;
}


/* DScrollView::~DScrollView() */

void __thiscall DScrollView::~DScrollView(DScrollView *this)

{
  ~DScrollView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DScrollView::~DScrollView() */

void __thiscall DScrollView::~DScrollView(DScrollView *this)

{
  ~DScrollView(this + -0x150);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::setTouchEnable(bool, int) */

void __thiscall DScrollView::setTouchEnable(DScrollView *this,bool param_1,int param_2)

{
  long lVar1;
  DTouchEventDispatcher *pDVar2;
  DTouchListener *pDVar3;
  undefined8 uVar4;
  DRefPtr<DTouchListener> aDStack_40 [8];
  DScrollView *local_38;
  undefined8 local_30;
  undefined8 local_28;
  _Bind a_Stack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 500) = param_2;
  if (*(long *)(this + 0x208) != 0) {
    lVar1 = (**(code **)(*(long *)this + 0x300))();
    if (lVar1 != 0) {
      pDVar2 = (DTouchEventDispatcher *)(**(code **)(*(long *)this + 0x300))(this);
      DTouchEventDispatcher::removeTouchListener(pDVar2,*(DTouchListener **)(this + 0x208));
    }
    *(undefined8 *)(this + 0x208) = 0;
  }
  if (param_1) {
    DRefPtr<DTouchListener>::DRefPtr(aDStack_40);
    lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
    local_30 = 0x330;
    local_28 = 1;
    local_38 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_30,(DTouchDelegate **)&local_38,
               (_Placeholder *)&DAT_0576d300);
    std::function<bool(Sexy::Touch_const&)>::operator=
              ((function<bool(Sexy::Touch_const&)> *)(lVar1 + 0x10),a_Stack_20);
    lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
    local_30 = 0x338;
    local_28 = 1;
    local_38 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_30,(DTouchDelegate **)&local_38,
               (_Placeholder *)&DAT_0576d300);
    std::function<void(Sexy::Touch_const&)>::operator=
              ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x30),a_Stack_20);
    lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
    local_30 = 0x340;
    local_28 = 1;
    local_38 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_30,(DTouchDelegate **)&local_38,
               (_Placeholder *)&DAT_0576d300);
    std::function<void(Sexy::Touch_const&)>::operator=
              ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x70),a_Stack_20);
    lVar1 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
    local_30 = 0x348;
    local_28 = 1;
    local_38 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_30,(DTouchDelegate **)&local_38,
               (_Placeholder *)&DAT_0576d300);
    std::function<void(Sexy::Touch_const&)>::operator=
              ((function<void(Sexy::Touch_const&)> *)(lVar1 + 0x50),a_Stack_20);
    lVar1 = (**(code **)(*(long *)this + 0x300))(this);
    if (lVar1 != 0) {
      pDVar2 = (DTouchEventDispatcher *)(**(code **)(*(long *)this + 0x300))(this);
      pDVar3 = (DTouchListener *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      DTouchEventDispatcher::addTouchListenerWithFixedPriority(pDVar2,pDVar3,param_2);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_40);
      *(undefined8 *)(this + 0x208) = uVar4;
    }
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_40);
  }
  else {
    this[0x174] = (DScrollView)param_1;
    this[0x188] = (DScrollView)param_1;
    std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::clear
              ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x1b8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DScrollView::setTouchEnable(bool, int) */

void __thiscall DScrollView::setTouchEnable(DScrollView *this,bool param_1,int param_2)

{
  setTouchEnable(this + -0x150,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::onTouchMoved(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchMoved(DScrollView *this,Touch *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  float *pfVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xe0))();
  if (cVar1 == '\0') goto LAB_04f8b9fc;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_40 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                       (uVar3,uVar4,param_1);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_18);
  if (!bVar2) goto LAB_04f8b9fc;
  puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *puVar5 = *(undefined8 *)param_1;
  puVar5[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  puVar5[3] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar5[4] = *(undefined8 *)(param_1 + 0x20);
  puVar5[5] = uVar3;
  *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(this + 0x1b8);
  lVar6 = FUN_04f89748(uVar3,*(undefined8 *)(this + 0x1c0));
  if (lVar6 != 1) {
    if ((lVar6 == 2) && (this[0x174] == (DScrollView)0x0)) {
      plVar8 = *(long **)(this + 0x180);
      uVar3 = FUN_04f89768(uVar3,0);
      (**(code **)(*plVar8 + 0xb0))((DVec2 *)&local_20,plVar8,uVar3);
      plVar8 = *(long **)(this + 0x180);
      uVar3 = FUN_04f89768(*(undefined8 *)(this + 0x1b8),1);
      (**(code **)(*plVar8 + 0xb0))((__normal_iterator *)local_18,plVar8,uVar3);
      fVar9 = (float)DVec2::getDistance((DVec2 *)&local_20,(DVec2 *)local_18);
      fVar10 = (float)getZoomScale(this);
      setZoomScale(this,(fVar10 * fVar9) / *(float *)(this + 0x1b0));
    }
    goto LAB_04f8b9fc;
  }
  if (this[0x174] == (DScrollView)0x0) goto LAB_04f8b9fc;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_38)
  ;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_30)
  ;
  getViewRect();
  uVar3 = FUN_04f89768(*(undefined8 *)(this + 0x1b8),0);
  (**(code **)(*(long *)this + 0xb0))((DVec2 *)&local_20,this,uVar3);
  local_30 = CONCAT44(fStack_1c,local_20);
  DVec2::operator-((DVec2 *)&local_30,(DVec2 *)(this + 0x1a8));
  fVar10 = fStack_1c;
  fVar9 = local_20;
  local_38 = CONCAT44(fStack_1c,local_20);
  if (*(int *)(this + 0x170) == 1) {
    lVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar9 = *(float *)(lVar6 + 4);
    minContainerOffset();
    if ((fVar9 < local_24) || (maxContainerOffset(), fStack_1c < fVar9)) {
      local_38 = CONCAT44(local_38._4_4_ * 0.35,(float)local_38);
    }
  }
  else if (*(int *)(this + 0x170) == 0) {
    pfVar7 = (float *)(**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar11 = *pfVar7;
    minContainerOffset();
    if ((fVar11 < local_28) || (maxContainerOffset(), fVar10 = fVar9, local_20 < fVar11)) {
LAB_04f8bc0c:
      local_38 = CONCAT44(local_38._4_4_,(float)local_38 * 0.35);
      fVar10 = fVar9;
    }
  }
  else {
    fVar9 = SQRT(fStack_1c * fStack_1c + local_20 * local_20);
    lVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar10 = *(float *)(lVar6 + 4);
    minContainerOffset();
    if ((fVar10 < local_24) || (maxContainerOffset(), fStack_1c < fVar10)) {
      local_38 = CONCAT44(local_38._4_4_ * 0.35,(float)local_38);
    }
    pfVar7 = (float *)(**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar11 = *pfVar7;
    minContainerOffset();
    if ((fVar11 < local_28) || (maxContainerOffset(), fVar10 = fVar9, local_20 < fVar11))
    goto LAB_04f8bc0c;
  }
  if (this[0x188] == (DScrollView)0x0) {
    fVar9 = (float)FUN_04f89674(fVar10);
    if (ABS(fVar9) < 0.04375) goto LAB_04f8b9fc;
    DVec2::setZero((DVec2 *)&local_38);
  }
  *(undefined8 *)(this + 0x1a8) = local_30;
  this[0x188] = (DScrollView)0x1;
  if (this[0x174] != (DScrollView)0x0) {
    if (*(int *)(this + 0x170) == 0) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)local_38,0.0);
    }
    else if (*(int *)(this + 0x170) == 1) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,local_38._4_4_);
    }
    pfVar7 = (float *)(**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar9 = (float)local_38 + *pfVar7;
    lVar6 = (**(code **)(**(long **)(this + 0x180) + 0x1b8))(*(long **)(this + 0x180));
    fVar10 = *(float *)(lVar6 + 4);
    *(undefined8 *)(this + 0x1a0) = local_38;
    DVec2::DVec2((DVec2 *)&local_20,fVar9,local_38._4_4_ + fVar10);
    setContentOffset(this,(DVec2 *)&local_20,0);
  }
LAB_04f8b9fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DScrollView::onTouchMoved(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchMoved(DScrollView *this,Touch *param_1)

{
  onTouchMoved(this + -0x150,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::initWithViewSize(DVec2, DTouchLayer*) */

void __thiscall
DScrollView::initWithViewSize(DScrollView *this,TPoint *param_2,DTouchLayer *param_3)

{
  long *plVar1;
  long lVar2;
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setContainer(this,param_3);
  if (*(long *)(this + 0x180) == 0) {
    DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)aFStack_10);
    plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aFStack_10);
    lVar2 = *plVar1;
    *(long **)(this + 0x180) = plVar1;
    (**(code **)(lVar2 + 0x198))(plVar1,0);
    (**(code **)(**(long **)(this + 0x180) + 0x128))(*(long **)(this + 0x180),&DVec2::ZERO);
    (**(code **)(**(long **)(this + 0x180) + 0x110))(0,0,*(long **)(this + 0x180));
    (**(code **)(*(long *)this + 0x30))(this,*(undefined8 *)(this + 0x180));
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aFStack_10);
  }
  Sexy::FPoint::FPoint(aFStack_10,param_2);
  setViewSize(this,aFStack_10);
  (**(code **)(*(long *)this + 0x358))(this,1,0xfffff800);
  std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::reserve
            ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)(this + 0x1b8),0xf);
  this[0x19c] = (DScrollView)0x1;
  this[0x19d] = (DScrollView)0x1;
  *(undefined4 *)(this + 0x170) = 2;
  *(undefined4 *)(this + 0x1dc) = 0x3f800000;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0x3f800000;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::onTouchBegan(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchBegan(DScrollView *this,Touch *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  DScrollView DVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  DVec2 aDStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  TRect<float> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xe0))();
  if ((cVar1 == '\0') || (cVar1 = hasVisibleParents(this), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    getViewRect();
    uVar4 = FUN_04f89748(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
    if ((uVar4 < 3) && (this[0x188] == (DScrollView)0x0)) {
      cVar1 = Sexy::TRect<float>::Contains
                        (aTStack_18,(float)*(int *)(param_1 + 0x10),(float)*(int *)(param_1 + 0x14))
      ;
      if (cVar1 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x1b8);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_28 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                             (uVar5,uVar6,param_1);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_20)
        ;
        if (bVar2) {
          std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::push_back
                    ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)this_00,param_1);
        }
        if (this[0x188] != (DScrollView)0x0) {
          uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x1f8));
          (**(code **)(*(long *)this + 0x2a0))(this,uVar5);
        }
        uVar5 = *(undefined8 *)(this + 0x1b8);
        lVar7 = FUN_04f89748(uVar5,*(undefined8 *)(this + 0x1c0));
        if (lVar7 == 1) {
          if ((this[0x189] == (DScrollView)0x0) &&
             (plVar8 = *(long **)(this + 0x180), plVar8 != (long *)0x0)) {
            DVar3 = (DScrollView)(**(code **)(*plVar8 + 0x330))(plVar8,param_1);
            this[0x1f1] = DVar3;
          }
          (**(code **)(*(long *)this + 0xb0))((__normal_iterator *)&local_20,this,param_1);
          this[0x188] = (DScrollView)0x0;
          *(undefined8 *)(this + 0x1a8) = local_20;
          this[0x174] = (DScrollView)0x1;
          DVec2::setZero((DVec2 *)(this + 0x1a0));
          *(undefined4 *)(this + 0x1b0) = 0;
        }
        else if (lVar7 == 2) {
          uVar5 = FUN_04f89768(uVar5,0);
          (**(code **)(*(long *)this + 0xb0))(aDStack_30,this,uVar5);
          uVar5 = FUN_04f89768(*(undefined8 *)(this + 0x1b8),1);
          (**(code **)(*(long *)this + 0xb0))((__normal_iterator *)&local_28,this,uVar5);
          DVec2::getMidpoint(aDStack_30);
          plVar8 = *(long **)(this + 0x180);
          *(undefined8 *)(this + 0x1a8) = local_20;
          uVar5 = FUN_04f89768(*(undefined8 *)(this + 0x1b8),0);
          (**(code **)(*plVar8 + 0xb0))((__normal_iterator *)&local_28,plVar8,uVar5);
          plVar8 = *(long **)(this + 0x180);
          uVar5 = FUN_04f89768(*(undefined8 *)(this + 0x1b8),1);
          (**(code **)(*plVar8 + 0xb0))((__normal_iterator *)&local_20,plVar8,uVar5);
          uVar9 = DVec2::getDistance((DVec2 *)&local_28,(DVec2 *)&local_20);
          this[0x174] = (DScrollView)0x0;
          *(undefined4 *)(this + 0x1b0) = uVar9;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* non-virtual thunk to DScrollView::onTouchBegan(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchBegan(DScrollView *this,Touch *param_1)

{
  onTouchBegan(this + -0x150,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DScrollView::onTouchEnded(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchEnded(DScrollView *this,Touch *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  DSchedule *this_01;
  Effect_Barrage *this_02;
  undefined8 local_60;
  DScrollView *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xe0))();
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_60 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>,Sexy::Touch>
                         (uVar3,uVar4,param_1);
    local_40[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)local_40);
    if (bVar2) {
      lVar5 = FUN_04f89748(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
      if ((lVar5 == 1) && (this[0x188] != (DScrollView)0x0)) {
        this_01 = (DSchedule *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x1f8));
        local_48 = 0;
        local_50 = deaccelerateScrolling;
        local_58 = this;
        std::
        bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                  ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_58,
                   (_Placeholder *)&DAT_0576d300);
        std::function<void(float)>::
        function<std::_Bind<std::_Mem_fn<void(DScrollView::*)(float)>(DScrollView*,std::_Placeholder<1>)>,void>
                  ((function<void(float)> *)afStack_28,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_40);
        this_02 = (Effect_Barrage *)DSchedule::onUpdate(this_01,(function *)afStack_28);
        Effect_Barrage::SetViceBarrage(this_02,(Effect_Barrage *)0x0);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0x1f8));
        (**(code **)(*(long *)this + 0x298))(this,uVar3);
        this[0x189] = (DScrollView)0x1;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_40,(__normal_iterator *)&local_60);
      std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>::erase
                ((vector<Sexy::Touch,std::allocator<Sexy::Touch>> *)this_00,local_40[0]);
    }
    lVar5 = FUN_04f89748(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
    if (lVar5 == 0) {
      plVar6 = *(long **)(this + 0x180);
      if ((plVar6 != (long *)0x0) && (this[0x1f1] != (DScrollView)0x0)) {
        if (this[0x188] == (DScrollView)0x0) {
          (**(code **)(*plVar6 + 0x340))(plVar6,param_1);
        }
        else {
          (**(code **)(*plVar6 + 0x348))(plVar6,param_1);
        }
      }
      this[0x174] = (DScrollView)0x0;
      this[0x188] = (DScrollView)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DScrollView::onTouchEnded(Sexy::Touch const&) */

void __thiscall DScrollView::onTouchEnded(DScrollView *this,Touch *param_1)

{
  onTouchEnded(this + -0x150,param_1);
  return;
}


/* DScrollView::setBounceable(bool) */

void __thiscall DScrollView::setBounceable(DScrollView *this,bool param_1)

{
  this[0x19c] = (DScrollView)param_1;
  return;
}

