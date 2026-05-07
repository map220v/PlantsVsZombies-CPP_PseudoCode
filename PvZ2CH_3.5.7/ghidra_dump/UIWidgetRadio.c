// Class: UIWidgetRadio


/* UIWidgetRadio::TouchBegan(Sexy::Touch const&) */

void __thiscall UIWidgetRadio::TouchBegan(UIWidgetRadio *this,Touch *param_1)

{
  if (*(long *)(this + 0x1a0) == 0) {
    *(undefined8 *)(this + 0x1a0) = *(undefined8 *)param_1;
    this[0x1a8] = (UIWidgetRadio)0x1;
  }
  return;
}


/* UIWidgetRadio::TouchesCanceled() */

void __thiscall UIWidgetRadio::TouchesCanceled(UIWidgetRadio *this)

{
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x1a8] = (UIWidgetRadio)0x0;
  return;
}


/* UIWidgetRadio::~UIWidgetRadio() */

void __thiscall UIWidgetRadio::~UIWidgetRadio(UIWidgetRadio *this)

{
  *(undefined ***)this = &PTR_GetClass_06970d30;
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* UIWidgetRadio::~UIWidgetRadio() */

void __thiscall UIWidgetRadio::~UIWidgetRadio(UIWidgetRadio *this)

{
  ~UIWidgetRadio(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetRadio::UIWidgetRadio() */

void __thiscall UIWidgetRadio::UIWidgetRadio(UIWidgetRadio *this)

{
  Image *pIVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,0,(ButtonListener *)0x0);
  this[0x198] = (UIWidgetRadio)0x0;
  *(undefined ***)this = &PTR_GetClass_06970d30;
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x1a8] = (UIWidgetRadio)0x0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  pIVar1 = (Image *)PrimeText_PotentialTypeface::Typeface
                              (PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  DSprite9SliceNode::setResource((DSprite9SliceNode *)this,pIVar1);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::Widget::SetColor((Widget *)this,6,aCStack_18);
  Sexy::Color::Color(aCStack_18,5);
  Sexy::Widget::SetColor((Widget *)this,7,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetRadio::IsSelected() const */

UIWidgetRadio __thiscall UIWidgetRadio::IsSelected(UIWidgetRadio *this)

{
  return this[0x198];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetRadio::Draw(Sexy::Graphics*) */

void __thiscall UIWidgetRadio::Draw(UIWidgetRadio *this,Graphics *param_1)

{
  UIWidgetRadio *pUVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Insets *pIVar6;
  long lVar7;
  int iVar8;
  Image *pIVar9;
  undefined8 uVar10;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_48,0,0,0,0);
  Sexy::Insets::Insets((Insets *)&local_38,0,0,0,0);
  cVar2 = IsSelected(this);
  if (cVar2 != '\0') {
    pIVar9 = *(Image **)(this + 0x100);
    if (pIVar9 != (Image *)0x0) goto LAB_04b85e2c;
LAB_04b85f8c:
    pIVar9 = *(Image **)(this + 0xe8);
    if (pIVar9 != (Image *)0x0) goto LAB_04b85e2c;
    uVar10 = 3;
    local_30 = *(int *)(this + 0x50);
    local_2c = *(int *)(this + 0x54);
    switch(*(undefined4 *)(this + 0x1ac)) {
    case 1:
      goto switchD_04b85fcc_caseD_1;
    case 2:
      IsSelected(this);
      break;
    case 3:
      break;
    case 4:
    case 6:
      goto switchD_04b85fe4_caseD_4;
    case 5:
      goto switchD_04b85fe4_caseD_5;
    default:
      goto switchD_04b85fcc_default;
    }
    goto switchD_04b85fe4_caseD_3;
  }
  pIVar9 = *(Image **)(this + 0xe8);
  if (pIVar9 == (Image *)0x0) goto LAB_04b85f8c;
LAB_04b85e2c:
  local_40 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pIVar9);
  local_3c = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar9);
  iVar3 = *(int *)(this + 0x50);
  iVar4 = *(int *)(this + 0x54);
  local_30 = iVar3;
  local_2c = iVar4;
  switch(*(undefined4 *)(this + 0x1ac)) {
  case 1:
    uVar10 = 5;
    iVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pIVar9);
    iVar4 = *(int *)(this + 0x54);
    local_48 = local_48 + (iVar3 - iVar5) / 2;
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar9);
    local_44 = local_44 + (iVar4 - iVar3) / 2;
    iVar5 = local_48;
    iVar3 = local_44;
    iVar8 = local_40;
    break;
  case 2:
    cVar2 = IsSelected(this);
    if ((cVar2 != '\0') && (*(SalesProgressBar **)(this + 0xe8) != (SalesProgressBar *)0x0)) {
      iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
      iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pIVar9);
      local_44 = local_44 + (iVar3 - iVar4);
    }
  case 3:
switchD_04b85fe4_caseD_3:
    uVar10 = 5;
    Sexy::Graphics::ClearClipRect(param_1);
    iVar5 = local_48;
    iVar3 = local_44;
    iVar8 = local_40;
    if (pIVar9 != (Image *)0x0) break;
    goto switchD_04b85fcc_default;
  case 4:
  case 6:
switchD_04b85fe4_caseD_4:
    Sexy::Graphics::ClearClipRect(param_1);
    cVar2 = IsSelected(this);
    if (cVar2 == '\0') {
      if (*(long *)(this + 0xe8) != 0) {
        Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
        goto LAB_04b86058;
      }
    }
    else {
      if (*(long *)(this + 0x100) != 0) {
        Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x100));
      }
      pIVar9 = *(Image **)(this + 0xf0);
      if (pIVar9 != (Image *)0x0) {
        Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(pIVar9 + 0x3c));
      }
    }
switchD_04b85fcc_caseD_1:
    goto LAB_04b86058;
  case 5:
switchD_04b85fe4_caseD_5:
    Sexy::Graphics::ClearClipRect(param_1);
    cVar2 = IsSelected(this);
    if (cVar2 == '\0') {
      if (*(long *)(this + 0xe8) != 0) {
        Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
      }
    }
    else {
      if (*(long *)(this + 0x100) != 0) {
        Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x100));
      }
      pIVar9 = *(Image **)(this + 0xf0);
      if (pIVar9 != (Image *)0x0) {
        Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(pIVar9 + 0x3c));
      }
    }
    iVar3 = FUN_04b85cc4();
    local_34 = local_34 + iVar3;
LAB_04b86058:
    uVar10 = 5;
    cVar2 = IsSelected(this);
    lVar7 = *(long *)this;
    goto joined_r0x04b86068;
  default:
    uVar10 = 3;
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
    iVar8 = local_40;
    iVar5 = local_48;
    iVar3 = local_44 + (iVar4 - iVar3) / 2;
    iVar4 = local_48 + local_40;
    local_44 = iVar3;
    local_38 = FUN_04b85cc4();
    local_38 = iVar4 + local_38;
    local_30 = local_30 - local_38;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5,iVar3,iVar8,local_3c);
switchD_04b85fcc_default:
  cVar2 = IsSelected(this);
  lVar7 = *(long *)this;
joined_r0x04b86068:
  if (cVar2 == '\0') {
    pIVar6 = (Insets *)(**(code **)(lVar7 + 0x178))(this,6);
  }
  else {
    pIVar6 = (Insets *)(**(code **)(lVar7 + 0x178))(this,7);
  }
  pUVar1 = this + 0xd8;
  Sexy::Insets::Insets(aIStack_28,pIVar6);
  cVar2 = FUN_054765e8(pUVar1);
  if (cVar2 == '\0') {
    lVar7 = *(long *)(this + 0x158);
    if (lVar7 == 0) {
      lVar7 = *(long *)(this + 0x150);
      if (lVar7 != 0) {
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        WriteWordInRect(param_1,pUVar1,(Insets *)&local_38,lVar7,aIStack_18,uVar10,1);
      }
    }
    else {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      WriteWordInRect(param_1,pUVar1,(Insets *)&local_38,lVar7,aIStack_18,uVar10,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetRadio::TouchMoved(Sexy::Touch const&) */

void __thiscall UIWidgetRadio::TouchMoved(UIWidgetRadio *this,Touch *param_1)

{
  UIWidgetRadio UVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a0) == *(long *)param_1) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    UVar1 = (UIWidgetRadio)
            Sexy::TRect<int>::Contains
                      ((TRect<int> *)aIStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    this[0x1a8] = UVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetRadio::SetSelected(bool) */

void __thiscall UIWidgetRadio::SetSelected(UIWidgetRadio *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  UIWidgetRadio *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x198] != (UIWidgetRadio)param_1) {
    this[0x198] = (UIWidgetRadio)param_1;
    if (param_1) {
      cVar1 = FUN_0547419c((string *)(this + 200));
      if (cVar1 == '\0') {
        lVar4 = *(long *)(this + 0x20);
        local_18 = FUN_04b862fc(*(TaskResource **)(lVar4 + 8));
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(lVar4 + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
              bVar2) {
          puVar3 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          this_00 = (UIWidgetRadio *)*puVar3;
          if ((this != this_00) &&
             (cVar1 = std::operator==((string *)(this_00 + 200),(string *)(this + 200)),
             cVar1 != '\0')) {
            SetSelected(this_00,false);
          }
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
      }
    }
    puVar3 = *(undefined8 **)(this + 0x1b0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetRadio::TouchEnded(Sexy::Touch const&) */

void __thiscall UIWidgetRadio::TouchEnded(UIWidgetRadio *this,Touch *param_1)

{
  if (*(long *)(this + 0x1a0) != *(long *)param_1) {
    return;
  }
  if (this[0x1a8] != (UIWidgetRadio)0x0) {
    SetSelected(this,true);
  }
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x1a8] = (UIWidgetRadio)0x0;
  return;
}

