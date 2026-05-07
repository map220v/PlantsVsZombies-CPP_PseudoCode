// Class: PlantDefenceGameWidget


/* PlantDefenceGameWidget::~PlantDefenceGameWidget() */

void __thiscall PlantDefenceGameWidget::~PlantDefenceGameWidget(PlantDefenceGameWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06725780;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantDefenceGameWidget::~PlantDefenceGameWidget() */

void __thiscall PlantDefenceGameWidget::~PlantDefenceGameWidget(PlantDefenceGameWidget *this)

{
  ~PlantDefenceGameWidget(this);
  AK::FreeHook(this);
  return;
}


/* PlantDefenceGameWidget::Resize(int, int, int, int) */

void __thiscall
PlantDefenceGameWidget::Resize
          (PlantDefenceGameWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  long *plVar2;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar2 = *(long **)(this + 0xd8);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_03af4110(0);
    (**(code **)(*plVar2 + 0x198))(plVar2,uVar1,uVar1,param_3,param_4);
  }
  uVar1 = FUN_03af4110(0xf);
  *(undefined4 *)(this + 0xe8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefenceGameWidget::PlantDefenceGameWidget(FestivalGameLevel, int, Sexy::ButtonListener*) */

void __thiscall
PlantDefenceGameWidget::PlantDefenceGameWidget
          (PlantDefenceGameWidget *this,undefined4 param_2,int param_3,ButtonListener *param_4)

{
  int iVar1;
  undefined4 uVar2;
  PVZ2UIButton *pPVar3;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xe0) = param_2;
  this[0xe4] = (PlantDefenceGameWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06725780;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar3 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar3,param_3,param_4,(wstring *)aPStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xd8) = pPVar3;
  FUN_05476c50(aPStack_78);
  nop();
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 1) {
    pPVar3 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aca180,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aca278,1);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    uVar2 = FUN_03af4110(0x4b);
    *(undefined4 *)(this + 0xf0) = uVar2;
  }
  else if (iVar1 == 0) {
    pPVar3 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aca228,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac9da8,1);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    uVar2 = FUN_03af4110(0x44);
    *(undefined4 *)(this + 0xf0) = uVar2;
  }
  else if (iVar1 == 2) {
    pPVar3 = *(PVZ2UIButton **)(this + 0xd8);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac9ca8,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aca250,1);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    uVar2 = FUN_03af4110(0x4d);
    *(undefined4 *)(this + 0xf0) = uVar2;
  }
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefenceGameWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantDefenceGameWidget::DrawAll(PlantDefenceGameWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar8;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar6 = *(int *)(this + 0xe0);
  iVar2 = *(int *)(this + 0xe8);
  if (iVar6 == 0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca3b0);
LAB_03af5284:
    if (pIVar7 == (Image *)0x0) {
      iVar6 = *(int *)(this + 0xe0);
    }
    else {
      Sexy::Graphics::DrawImage(param_2,pIVar7,iVar2,*(int *)(this + 0xf0));
      iVar5 = *(int *)(pIVar7 + 0x38);
      iVar6 = FUN_03af4110(2);
      iVar6 = iVar2 + iVar5 + iVar6;
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9ec0);
      iVar2 = FUN_03af4110(9);
      Sexy::Graphics::DrawImage(param_2,pIVar7,iVar6,iVar2 + *(int *)(this + 0xf0));
      lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9ec0);
      iVar5 = *(int *)(lVar8 + 0x38);
      iVar2 = FUN_03af4110(2);
      iVar2 = iVar6 + iVar5 + iVar2;
      iVar6 = *(int *)(this + 0xe0);
    }
  }
  else {
    if (iVar6 == 1) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca1b0);
      goto LAB_03af5284;
    }
    if (iVar6 == 2) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9b58);
      goto LAB_03af5284;
    }
  }
  if (iVar6 == 0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca358);
LAB_03af5334:
    if (pIVar7 != (Image *)0x0) {
      Sexy::Graphics::DrawImage(param_2,pIVar7,iVar2,*(int *)(this + 0xf0));
    }
    iVar6 = *(int *)(this + 0xe0);
  }
  else {
    if (iVar6 == 1) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca3d8);
      goto LAB_03af5334;
    }
    if (iVar6 == 2) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca300);
      goto LAB_03af5334;
    }
  }
  if (iVar6 == 0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9af8);
    iVar2 = *(int *)(this + 0x50);
    iVar6 = *(int *)(pIVar7 + 0x38);
    iVar3 = FUN_03af4110(0xf);
    iVar5 = *(int *)(this + 0x54);
    iVar1 = *(int *)(pIVar7 + 0x3c);
    iVar4 = FUN_03af4110(0x16);
    Sexy::Graphics::DrawImage(param_2,pIVar7,(iVar2 - iVar6) - iVar3,(iVar5 - iVar1) - iVar4);
  }
  else {
    if (iVar6 == 1) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9d00;
    }
    else {
      if (iVar6 != 2) goto LAB_03af5174;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9df8;
    }
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar2 = *(int *)(this + 0x50);
    iVar6 = *(int *)(pIVar7 + 0x38);
    iVar5 = FUN_03af4110(0xe);
    Sexy::Graphics::DrawImage
              (param_2,pIVar7,(iVar2 - iVar6) - iVar5,
               (*(int *)(this + 0x54) - *(int *)(pIVar7 + 0x3c)) - iVar5);
  }
LAB_03af5174:
  if (this[0xe4] == (PlantDefenceGameWidget)0x0) {
    return;
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aca088);
  iVar2 = FUN_03af4110(0);
  Sexy::Graphics::DrawImage(param_2,pIVar7,iVar2,iVar2);
  return;
}

