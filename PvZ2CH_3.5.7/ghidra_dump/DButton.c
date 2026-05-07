// Class: DButton


/* DButton::isBounce() const */

DButton __thiscall DButton::isBounce(DButton *this)

{
  return this[0x149];
}


/* DButton::isTouchMode() const */

DButton __thiscall DButton::isTouchMode(DButton *this)

{
  return this[0x154];
}


/* DButton::~DButton() */

void __thiscall DButton::~DButton(DButton *this)

{
  *(undefined ***)this = &PTR__DButton_06a24e60;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25280;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x218));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1f8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1d8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1b8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x198));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x178));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x158));
  DTransformNode::~DTransformNode((DTransformNode *)this);
  return;
}


/* DButton::~DButton() */

void __thiscall DButton::~DButton(DButton *this)

{
  ~DButton(this);
  AK::FreeHook(this);
  return;
}


/* DButton::setBounce(bool) */

DButton * __thiscall DButton::setBounce(DButton *this,bool param_1)

{
  char cVar1;
  
  if (this[0x149] != (DButton)param_1) {
    this[0x149] = (DButton)param_1;
    cVar1 = (**(code **)(*(long *)this + 0x288))();
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x2a8))(this);
      return this;
    }
  }
  return this;
}


/* DButton::setTouchMode(bool) */

void __thiscall DButton::setTouchMode(DButton *this,bool param_1)

{
  if (this[0x154] != (DButton)param_1) {
    this[0x154] = (DButton)param_1;
  }
  return;
}


/* DButton::isSelected() const */

DButton __thiscall DButton::isSelected(DButton *this)

{
  return this[0x14a];
}


/* DButton::isEnabled() const */

DButton __thiscall DButton::isEnabled(DButton *this)

{
  return this[0x14b];
}


/* DButton::isEnabledTouch() const */

DButton __thiscall DButton::isEnabledTouch(DButton *this)

{
  return this[0x14c];
}


/* DButton::setEnabledTouch(bool) */

void __thiscall DButton::setEnabledTouch(DButton *this,bool param_1)

{
  if (this[0x14c] != (DButton)param_1) {
    this[0x14c] = (DButton)param_1;
  }
  return;
}


/* DButton::updateVisibility() */

void __thiscall DButton::updateVisibility(DButton *this)

{
  long *plVar1;
  
  if (this[0x14b] == (DButton)0x0) {
    if (*(long *)(this + 0x248) != 0) {
      if (*(long **)(this + 0x238) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x238) + 0xd8))();
      }
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xd8))(plVar1,0);
      }
      plVar1 = *(long **)(this + 0x250);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xd8))(plVar1,0);
      }
      plVar1 = *(long **)(this + 0x248);
      if (plVar1 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0xd8))(plVar1,1);
      return;
    }
    plVar1 = *(long **)(this + 0x238);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,1);
    }
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x250);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x248);
  }
  else {
    plVar1 = *(long **)(this + 0x238);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,1);
    }
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x248);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xd8))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x250);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1,0);
  }
  return;
}


/* DButton::setEnabled(bool) */

void __thiscall DButton::setEnabled(DButton *this,bool param_1)

{
  if (this[0x14b] != (DButton)param_1) {
    this[0x14b] = (DButton)param_1;
    updateVisibility(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::setNormalNode(DTransformNode*) */

void __thiscall DButton::setNormalNode(DButton *this,DTransformNode *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  DTransformNode *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  DVec2 aDStack_10 [8];
  long local_8;
  
  pDVar3 = *(DTransformNode **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  if (pDVar3 != param_1) {
    if (param_1 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x30))();
      pcVar4 = *(code **)(*(long *)param_1 + 0x128);
      DVec2::DVec2(aDStack_10,0.0,0.0);
      (*pcVar4)(param_1,aDStack_10);
      pDVar3 = *(DTransformNode **)(this + 0x238);
    }
    if (pDVar3 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x70))(this,pDVar3,1);
    }
    lVar2 = *(long *)param_1;
    *(DTransformNode **)(this + 0x238) = param_1;
    puVar1 = (undefined4 *)(**(code **)(lVar2 + 0x1f8))(param_1);
    uVar10 = *puVar1;
    uVar7 = puVar1[1];
    pcVar4 = *(code **)(*(long *)this + 0x138);
    fVar9 = (float)puVar1[2];
    fVar5 = (float)(**(code **)(**(long **)(this + 0x238) + 0x1d0))(*(long **)(this + 0x238));
    fVar5 = (float)Sexy::SexyMath::Fabs(fVar5);
    fVar8 = (float)puVar1[3];
    fVar6 = (float)(**(code **)(**(long **)(this + 0x238) + 0x1d8))(*(long **)(this + 0x238));
    fVar6 = (float)Sexy::SexyMath::Fabs(fVar6);
    (*pcVar4)(uVar10,uVar7,fVar5 * fVar9,fVar6 * fVar8,this);
    updateVisibility(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::setSelectNode(DTransformNode*) */

void __thiscall DButton::setSelectNode(DButton *this,DTransformNode *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  DTransformNode *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  DVec2 aDStack_10 [8];
  long local_8;
  
  pDVar3 = *(DTransformNode **)(this + 0x240);
  local_8 = ___stack_chk_guard;
  if (pDVar3 != param_1) {
    if (param_1 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x30))();
      pcVar4 = *(code **)(*(long *)param_1 + 0x128);
      DVec2::DVec2(aDStack_10,0.0,0.0);
      (*pcVar4)(param_1,aDStack_10);
      pDVar3 = *(DTransformNode **)(this + 0x240);
    }
    if (pDVar3 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x70))(this,pDVar3,1);
    }
    lVar2 = *(long *)param_1;
    *(DTransformNode **)(this + 0x240) = param_1;
    puVar1 = (undefined4 *)(**(code **)(lVar2 + 0x1f8))(param_1);
    uVar10 = *puVar1;
    uVar7 = puVar1[1];
    pcVar4 = *(code **)(*(long *)this + 0x138);
    fVar9 = (float)puVar1[2];
    fVar5 = (float)(**(code **)(**(long **)(this + 0x240) + 0x1d0))(*(long **)(this + 0x240));
    fVar5 = (float)Sexy::SexyMath::Fabs(fVar5);
    fVar8 = (float)puVar1[3];
    fVar6 = (float)(**(code **)(**(long **)(this + 0x240) + 0x1d8))(*(long **)(this + 0x240));
    fVar6 = (float)Sexy::SexyMath::Fabs(fVar6);
    (*pcVar4)(uVar10,uVar7,fVar5 * fVar9,fVar6 * fVar8,this);
    updateVisibility(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::setTouchMoveNode(DTransformNode*) */

void __thiscall DButton::setTouchMoveNode(DButton *this,DTransformNode *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  DTransformNode *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  DVec2 aDStack_10 [8];
  long local_8;
  
  pDVar3 = *(DTransformNode **)(this + 0x250);
  local_8 = ___stack_chk_guard;
  if (pDVar3 != param_1) {
    if (param_1 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x30))();
      pcVar4 = *(code **)(*(long *)param_1 + 0x128);
      DVec2::DVec2(aDStack_10,0.0,0.0);
      (*pcVar4)(param_1,aDStack_10);
      pDVar3 = *(DTransformNode **)(this + 0x250);
    }
    if (pDVar3 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x70))(this,pDVar3,1);
    }
    lVar2 = *(long *)param_1;
    *(DTransformNode **)(this + 0x250) = param_1;
    puVar1 = (undefined4 *)(**(code **)(lVar2 + 0x1f8))(param_1);
    uVar10 = *puVar1;
    uVar7 = puVar1[1];
    pcVar4 = *(code **)(*(long *)this + 0x138);
    fVar9 = (float)puVar1[2];
    fVar5 = (float)(**(code **)(**(long **)(this + 0x250) + 0x1d0))(*(long **)(this + 0x250));
    fVar5 = (float)Sexy::SexyMath::Fabs(fVar5);
    fVar8 = (float)puVar1[3];
    fVar6 = (float)(**(code **)(**(long **)(this + 0x250) + 0x1d8))(*(long **)(this + 0x250));
    fVar6 = (float)Sexy::SexyMath::Fabs(fVar6);
    (*pcVar4)(uVar10,uVar7,fVar5 * fVar9,fVar6 * fVar8,this);
    updateVisibility(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::setDisableNode(DTransformNode*) */

void __thiscall DButton::setDisableNode(DButton *this,DTransformNode *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  DTransformNode *pDVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  DVec2 aDStack_10 [8];
  long local_8;
  
  pDVar3 = *(DTransformNode **)(this + 0x248);
  local_8 = ___stack_chk_guard;
  if (pDVar3 != param_1) {
    if (param_1 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x30))();
      pcVar4 = *(code **)(*(long *)param_1 + 0x128);
      DVec2::DVec2(aDStack_10,0.0,0.0);
      (*pcVar4)(param_1,aDStack_10);
      pDVar3 = *(DTransformNode **)(this + 0x248);
    }
    if (pDVar3 != (DTransformNode *)0x0) {
      (**(code **)(*(long *)this + 0x70))(this,pDVar3,1);
    }
    lVar2 = *(long *)param_1;
    *(DTransformNode **)(this + 0x248) = param_1;
    puVar1 = (undefined4 *)(**(code **)(lVar2 + 0x1f8))(param_1);
    uVar10 = *puVar1;
    uVar7 = puVar1[1];
    pcVar4 = *(code **)(*(long *)this + 0x138);
    fVar9 = (float)puVar1[2];
    fVar5 = (float)(**(code **)(**(long **)(this + 0x248) + 0x1d0))(*(long **)(this + 0x248));
    fVar5 = (float)Sexy::SexyMath::Fabs(fVar5);
    fVar8 = (float)puVar1[3];
    fVar6 = (float)(**(code **)(**(long **)(this + 0x248) + 0x1d8))(*(long **)(this + 0x248));
    fVar6 = (float)Sexy::SexyMath::Fabs(fVar6);
    (*pcVar4)(uVar10,uVar7,fVar5 * fVar9,fVar6 * fVar8,this);
    updateVisibility(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::DButton() */

void __thiscall DButton::DButton(DButton *this)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DTransformNode::DTransformNode((DTransformNode *)this);
  this[0x149] = (DButton)0x0;
  this[0x14a] = (DButton)0x0;
  *(undefined ***)this = &PTR__DButton_06a24e60;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a25280;
  this[0x14b] = (DButton)0x1;
  this[0x14c] = (DButton)0x1;
  this[0x154] = (DButton)0x0;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x158));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x178));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x198));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1b8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1d8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1f8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x218));
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 600));
  DVec2::DVec2(aDStack_10,0.5,0.5);
  DTransformNode::setAnchorPoint((DTransformNode *)this,aDStack_10);
  DTransformNode::setCascadeColorEnabled((DTransformNode *)this,true);
  DTransformNode::setCascadeOpacityEnabled((DTransformNode *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::selected() */

void __thiscall DButton::selected(DButton *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  DAction *this_00;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  DRefPtr<DScale> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    plVar3 = *(long **)(this + 0x238);
    this[0x14a] = (DButton)0x1;
    if (plVar3 != (long *)0x0) {
      plVar5 = *(long **)(this + 0x248);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0xd8))(plVar5,0);
        plVar3 = *(long **)(this + 0x238);
      }
      if (*(long *)(this + 0x240) == 0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,1);
      }
      else {
        (**(code **)(*plVar3 + 0xd8))(plVar3,0);
        (**(code **)(**(long **)(this + 0x240) + 0xd8))(*(long **)(this + 0x240),1);
        plVar3 = *(long **)(this + 0x250);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0xd8))(plVar3,0);
        }
      }
    }
    if (this[0x149] != (DButton)0x0) {
      cVar2 = (**(code **)(*(long *)this + 0x288))(this);
      if (cVar2 == '\0') {
        uVar6 = (**(code **)(*(long *)this + 0x1e8))(this);
        *(undefined4 *)(this + 0x150) = uVar6;
      }
      else {
        (**(code **)(*(long *)this + 0x2a8))(this);
      }
      DRefPtr<DScale>::DRefPtr(aDStack_10);
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      this_00 = (DAction *)(**(code **)(*plVar3 + 0x68))(*(float *)(this + 0x150) * 1.2);
      DAction::setDuration(this_00,0.1);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      (**(code **)(*(long *)this + 0x298))(this,uVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
    }
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x198));
    if (bVar1) {
      std::function<void(DRef*)>::operator()((function<void(DRef*)> *)(this + 0x198),(DRef *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::unselected() */

void __thiscall DButton::unselected(DButton *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  DAction *this_00;
  undefined8 uVar4;
  DRefPtr<DScale> aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    plVar3 = *(long **)(this + 0x238);
    this[0x14a] = (DButton)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0xd8))(plVar3,1);
      plVar3 = *(long **)(this + 0x240);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,0);
      }
      plVar3 = *(long **)(this + 0x248);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,0);
      }
      plVar3 = *(long **)(this + 0x250);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0xd8))(plVar3,0);
      }
    }
    if (this[0x149] != (DButton)0x0) {
      cVar2 = (**(code **)(*(long *)this + 0x288))(this);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this + 0x2a8))(this);
      }
      DRefPtr<DScale>::DRefPtr(aDStack_10);
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      this_00 = (DAction *)(**(code **)(*plVar3 + 0x68))(*(undefined4 *)(this + 0x150));
      DAction::setDuration(this_00,_FUN_04f932c0);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_10);
      (**(code **)(*(long *)this + 0x298))(this,uVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_10);
    }
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x1b8));
    if (bVar1) {
      std::function<void(DRef*)>::operator()((function<void(DRef*)> *)(this + 0x1b8),(DRef *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButton::active() */

void __thiscall DButton::active(DButton *this)

{
  bool bVar1;
  
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    (**(code **)(*(long *)this + 0x2a8))();
    (**(code **)(*(long *)this + 0x140))(*(undefined4 *)(this + 0x150),this);
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x158));
    if (bVar1) {
      std::function<void(DRef*)>::operator()((function<void(DRef*)> *)(this + 0x158),(DRef *)this);
      return;
    }
  }
  return;
}


/* DButton::longPress(Sexy::Touch const&) */

void __thiscall DButton::longPress(DButton *this,Touch *param_1)

{
  bool bVar1;
  
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x218));
    if (bVar1) {
      std::function<void(DRef*,Sexy::Touch_const&)>::operator()
                ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x218),(DRef *)this,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::selected(Sexy::Touch const&) */

void __thiscall DButton::selected(DButton *this,Touch *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  DAction *this_00;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    plVar3 = *(long **)(this + 0x238);
    this[0x14a] = (DButton)0x1;
    if (plVar3 != (long *)0x0) {
      plVar5 = *(long **)(this + 0x248);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0xd8))(plVar5,0);
        plVar3 = *(long **)(this + 0x238);
      }
      if (*(long *)(this + 0x240) == 0) {
        if (*(long *)(this + 0x250) == 0) {
          (**(code **)(*plVar3 + 0xd8))(plVar3,1);
        }
        else {
          (**(code **)(*plVar3 + 0xd8))(plVar3,0);
          (**(code **)(**(long **)(this + 0x250) + 0xd8))(*(long **)(this + 0x250),0);
        }
      }
      else {
        (**(code **)(*plVar3 + 0xd8))(plVar3,0);
        (**(code **)(**(long **)(this + 0x240) + 0xd8))(*(long **)(this + 0x240),1);
        plVar3 = *(long **)(this + 0x250);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0xd8))(plVar3,0);
        }
      }
    }
    if (this[0x149] != (DButton)0x0) {
      cVar2 = (**(code **)(*(long *)this + 0x288))(this);
      if (cVar2 == '\0') {
        uVar9 = (**(code **)(*(long *)this + 0x1e8))(this);
        *(undefined4 *)(this + 0x150) = uVar9;
      }
      else {
        (**(code **)(*(long *)this + 0x2a8))(this);
      }
      DRefPtr<DScale>::DRefPtr((DRefPtr<DScale> *)&local_10);
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
      this_00 = (DAction *)(**(code **)(*plVar3 + 0x68))(*(float *)(this + 0x150) * 1.2);
      DAction::setDuration(this_00,0.1);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10);
      (**(code **)(*(long *)this + 0x298))(this,uVar4);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_10);
    }
    if (this[0x154] == (DButton)0x0) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x198));
      if (bVar1) {
        std::function<void(DRef*)>::operator()((function<void(DRef*)> *)(this + 0x198),(DRef *)this)
        ;
      }
    }
    else {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x1d8));
      if (bVar1) {
        std::function<void(DRef*,Sexy::Touch_const&)>::operator()
                  ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x1d8),(DRef *)this,param_1);
      }
      fVar7 = (float)FUN_04f92738((float)*(int *)(param_1 + 0x10));
      fVar8 = (float)FUN_04f92738((float)*(int *)(param_1 + 0x14));
      DVec2::DVec2((DVec2 *)&local_10,fVar7,fVar8);
      pcVar6 = *(code **)(*(long *)this + 0xd0);
      *(ulong *)(this + 600) = CONCAT44(fStack_c,local_10);
      (*pcVar6)((DVec2 *)&local_10,0x3f000000,0x3f000000,this);
      (**(code **)(*(long *)this + 0x110))
                (*(float *)(this + 600) - local_10,*(float *)(this + 0x25c) - fStack_c,this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::selectedMove(Sexy::Touch const&) */

void __thiscall DButton::selectedMove(DButton *this,Touch *param_1)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x154] != (DButton)0x0) && (this[0x14b] != (DButton)0x0)) &&
     (this[0x14c] != (DButton)0x0)) {
    if ((*(long **)(this + 0x240) != (long *)0x0) &&
       (cVar1 = (**(code **)(**(long **)(this + 0x240) + 0xe0))(), cVar1 != '\0')) {
      (**(code **)(**(long **)(this + 0x240) + 0xd8))(*(long **)(this + 0x240),0);
    }
    if ((*(long **)(this + 0x238) != (long *)0x0) &&
       (cVar1 = (**(code **)(**(long **)(this + 0x238) + 0xe0))(), cVar1 != '\0')) {
      (**(code **)(**(long **)(this + 0x238) + 0xd8))(*(long **)(this + 0x238),0);
    }
    if ((*(long **)(this + 0x250) != (long *)0x0) &&
       (cVar1 = (**(code **)(**(long **)(this + 0x250) + 0xe0))(), cVar1 == '\0')) {
      (**(code **)(**(long **)(this + 0x250) + 0xd8))(*(long **)(this + 0x250),1);
    }
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1f8));
    if (bVar2) {
      std::function<void(DRef*,Sexy::Touch_const&)>::operator()
                ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x1f8),(DRef *)this,param_1);
    }
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    fVar6 = (float)FUN_04f92738((float)*(int *)(param_1 + 0x10));
    fVar7 = (float)FUN_04f92738((float)*(int *)(param_1 + 0x14));
    DVec2::DVec2((DVec2 *)&local_10,fVar6,fVar7);
    local_18 = local_10;
    DVec2::operator-((DVec2 *)&local_18,(DVec2 *)(this + 600));
    local_20 = local_10;
    pcVar5 = *(code **)(*(long *)this + 0x1b8);
    *(undefined8 *)(this + 600) = local_18;
    pfVar3 = (float *)(*pcVar5)(this);
    fVar6 = (float)local_20 + *pfVar3;
    lVar4 = (**(code **)(*(long *)this + 0x1b8))(this);
    (**(code **)(*(long *)this + 0x110))(fVar6,local_20._4_4_ + *(float *)(lVar4 + 4),this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButton::active(Sexy::Touch const&) */

void __thiscall DButton::active(DButton *this,Touch *param_1)

{
  bool bVar1;
  
  if ((this[0x14b] != (DButton)0x0) && (this[0x14c] != (DButton)0x0)) {
    (**(code **)(*(long *)this + 0x2a8))();
    if ((this[0x154] == (DButton)0x0) &&
       ((**(code **)(*(long *)this + 0x140))(*(undefined4 *)(this + 0x150),this),
       this[0x154] == (DButton)0x0)) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x158));
      if (bVar1) {
        std::function<void(DRef*)>::operator()((function<void(DRef*)> *)(this + 0x158),(DRef *)this)
        ;
        return;
      }
    }
    else {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x178));
      if (bVar1) {
        std::function<void(DRef*,Sexy::Touch_const&)>::operator()
                  ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x178),(DRef *)this,param_1);
        return;
      }
    }
  }
  return;
}


/* DButton::getRect() */

void DButton::getRect(void)

{
  long in_x0;
  Rectangle *in_x8;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Sexy::SexyMath::Fabs(*(float *)(in_x0 + 0xf0));
  fVar2 = (float)Sexy::SexyMath::Fabs(*(float *)(in_x0 + 0xf4));
  EA::Text::Rectangle::Rectangle
            (in_x8,*(float *)(in_x0 + 0xe8) -
                   fVar1 * *(float *)(in_x0 + 0xe0) * *(float *)(in_x0 + 0xc0),
             *(float *)(in_x0 + 0xec) - fVar2 * *(float *)(in_x0 + 0xe4) * *(float *)(in_x0 + 0xc4),
             fVar1 * *(float *)(in_x0 + 0xe0),fVar2 * *(float *)(in_x0 + 0xe4));
  return;
}


/* DButton::setCallback(std::function<void (DRef*)> const&) */

DButton * __thiscall DButton::setCallback(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x158),param_1);
  return this;
}


/* DButton::setSelectCallback(std::function<void (DRef*)> const&) */

DButton * __thiscall DButton::setSelectCallback(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x198),param_1);
  return this;
}


/* DButton::setUnSelectCallback(std::function<void (DRef*)> const&) */

DButton * __thiscall DButton::setUnSelectCallback(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x1b8),param_1);
  return this;
}


/* DButton::setCallbackWithTouch(std::function<void (DRef*, Sexy::Touch const&)> const&) */

DButton * __thiscall DButton::setCallbackWithTouch(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x178),param_1);
  return this;
}


/* DButton::setSelectCallbackWithTouch(std::function<void (DRef*, Sexy::Touch const&)> const&) */

DButton * __thiscall DButton::setSelectCallbackWithTouch(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x1d8),param_1);
  return this;
}


/* DButton::setSelectMoveCallbackWithTouch(std::function<void (DRef*, Sexy::Touch const&)> const&)
    */

DButton * __thiscall DButton::setSelectMoveCallbackWithTouch(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x1f8),param_1);
  return this;
}


/* DButton::setLongPressCallbackWithTouch(std::function<void (DRef*, Sexy::Touch const&)> const&) */

DButton * __thiscall DButton::setLongPressCallbackWithTouch(DButton *this,function *param_1)

{
  std::function<void(DRef*,Sexy::Touch_const&)>::operator=
            ((function<void(DRef*,Sexy::Touch_const&)> *)(this + 0x218),param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButton::removeAllChildren(bool) */

void __thiscall DButton::removeAllChildren(DButton *this,bool param_1)

{
  vector *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  if (param_1) {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      plVar2 = (long *)*puVar3;
      if ((((plVar2 != (long *)0x0) && (*(long **)(this + 0x238) != plVar2)) &&
          (*(long **)(this + 0x240) != plVar2)) &&
         ((*(long **)(this + 0x250) != plVar2 && (*(long **)(this + 0x248) != plVar2)))) {
        (**(code **)(*plVar2 + 0x240))(plVar2,0);
        (**(code **)(*plVar2 + 0x2f0))(plVar2);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      plVar2 = (long *)*plVar2;
      if (((plVar2 != (long *)0x0) && (*(long **)(this + 0x238) != plVar2)) &&
         ((*(long **)(this + 0x240) != plVar2 &&
          ((*(long **)(this + 0x250) != plVar2 && (*(long **)(this + 0x248) != plVar2)))))) {
        (**(code **)(*plVar2 + 0x240))(plVar2,0);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  DArray<DTransformNode*>::clear((DArray<DTransformNode*> *)this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

