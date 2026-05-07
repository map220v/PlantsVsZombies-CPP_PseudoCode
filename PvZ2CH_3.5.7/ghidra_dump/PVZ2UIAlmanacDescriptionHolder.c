// Class: PVZ2UIAlmanacDescriptionHolder


/* PVZ2UIAlmanacDescriptionHolder::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ2UIAlmanacDescriptionHolder::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UIAlmanacDescriptionHolder::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::ScrollTargetReached
          (PVZ2UIAlmanacDescriptionHolder *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PVZ2UIAlmanacDescriptionHolder::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ2UIAlmanacDescriptionHolder::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ2UIAlmanacDescriptionHolder::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::ScrollTargetInterrupted
          (PVZ2UIAlmanacDescriptionHolder *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PVZ2UIAlmanacDescriptionHolder::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::Resize
          (PVZ2UIAlmanacDescriptionHolder *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar2 = *(long **)(this + 0xe0);
  iVar1 = FUN_043772fc(0xf);
  (**(code **)(*plVar2 + 0x198))(plVar2,0,0,param_3 - iVar1,param_4);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))(*(long **)(this + 0xe8),0,0,param_3,param_4);
  return;
}


/* PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder() */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder
          (PVZ2UIAlmanacDescriptionHolder *this)

{
  *(undefined ***)this = &PTR_GetClass_0683ae90;
  *(undefined ***)(this + 0xd8) = &PTR__PVZ2UIAlmanacDescriptionHolder_0683b1c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder() */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder
          (PVZ2UIAlmanacDescriptionHolder *this)

{
  ~PVZ2UIAlmanacDescriptionHolder(this + -0xd8);
  return;
}


/* PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder() */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder
          (PVZ2UIAlmanacDescriptionHolder *this)

{
  ~PVZ2UIAlmanacDescriptionHolder(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder() */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::~PVZ2UIAlmanacDescriptionHolder
          (PVZ2UIAlmanacDescriptionHolder *this)

{
  ~PVZ2UIAlmanacDescriptionHolder(this + -0xd8);
  return;
}


/* PVZ2UIAlmanacDescriptionHolder::PVZ2UIAlmanacDescriptionHolder(std::wstring const&, std::wstring
   const&) */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::PVZ2UIAlmanacDescriptionHolder
          (PVZ2UIAlmanacDescriptionHolder *this,wstring *param_1,wstring *param_2)

{
  PVZ2UIScrollingWidget *this_00;
  PVZ2UIAlmanacDescription *this_01;
  Image *pIVar1;
  Image *pIVar2;
  ScrollWidget *this_02;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683ae90;
  *(undefined ***)(this + 0xd8) = &PTR__PVZ2UIAlmanacDescriptionHolder_0683b1c0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_00;
  this_01 = ::operator_new(0x100);
  PVZ2UIAlmanacDescription::PVZ2UIAlmanacDescription(this_01,param_1,param_2);
  *(PVZ2UIAlmanacDescription **)(this + 0xe0) = this_01;
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_01);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),2);
  this_02 = *(ScrollWidget **)(this + 0xe8);
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)
                               ObjectCardSettings::IMAGE_UI_CARDS_SCROLLBAR);
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)
                               ObjectCardSettings::IMAGE_UI_CARDS_SCROLLBAR_BKGD);
  Sexy::ScrollWidget::EnableIndicators(this_02,pIVar1,pIVar2);
  Sexy::ScrollWidget::SetPermanentIndicators(*(ScrollWidget **)(this + 0xe8),true);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacDescriptionHolder::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIAlmanacDescriptionHolder::DrawAll
          (PVZ2UIAlmanacDescriptionHolder *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  Image *pIVar7;
  float fVar8;
  float local_3c;
  float local_34;
  float local_2c;
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  Sexy::ScrollWidget::GetScrollOffset();
  Sexy::ScrollWidget::GetScrollMin();
  Sexy::ScrollWidget::GetScrollMax();
  if (local_3c < local_2c) {
    local_28[0] = (float)FUN_04377390(0x41200000);
    local_28[0] = ABS(local_2c - local_3c) / local_28[0];
    local_18[0] = 0x3f800000;
    pfVar5 = eastl::min_alt<float>(local_28,(float *)local_18);
    fVar8 = *pfVar5;
    iVar4 = FUN_043772fc(0xf);
    iVar1 = *(int *)(this + 0x50);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_TOP);
    Sexy::Insets::Insets((Insets *)local_28,0,0,iVar1 - iVar4,*(int *)(lVar6 + 0x3c));
    Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar8 * 255.0));
    Sexy::Graphics::SetColor(param_2,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_2,true);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)
                                 AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_TOP);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_TOP);
    iVar1 = *(int *)(lVar6 + 0x38);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_TOP);
    Sexy::Insets::Insets((Insets *)local_18,0,0,iVar1,*(int *)(lVar6 + 0x3c));
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)local_28,(TRect *)local_18);
    Sexy::Graphics::SetColorizeImages(param_2,false);
  }
  if (local_34 < local_3c) {
    local_28[0] = (float)FUN_04377390(0x41200000);
    local_28[0] = ABS(local_3c - local_34) / local_28[0];
    local_18[0] = 0x3f800000;
    pfVar5 = eastl::min_alt<float>(local_28,(float *)local_18);
    fVar8 = *pfVar5;
    iVar1 = *(int *)(this + 0x54);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_BOTTOM);
    iVar4 = *(int *)(lVar6 + 0x3c);
    iVar3 = FUN_043772fc(0xf);
    iVar2 = *(int *)(this + 0x50);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_BOTTOM);
    Sexy::Insets::Insets((Insets *)local_28,0,iVar1 - iVar4,iVar2 - iVar3,*(int *)(lVar6 + 0x3c));
    Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar8 * 255.0));
    Sexy::Graphics::SetColor(param_2,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_2,true);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)
                                 AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_BOTTOM);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_BOTTOM);
    iVar1 = *(int *)(lVar6 + 0x38);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       AlmanacSettings::IMAGE_UI_ALMANAC_GRADIENT_BOTTOM);
    Sexy::Insets::Insets((Insets *)local_18,0,0,iVar1,*(int *)(lVar6 + 0x3c));
    Sexy::Graphics::DrawImage(param_2,pIVar7,(TRect *)local_28,(TRect *)local_18);
    Sexy::Graphics::SetColorizeImages(param_2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

