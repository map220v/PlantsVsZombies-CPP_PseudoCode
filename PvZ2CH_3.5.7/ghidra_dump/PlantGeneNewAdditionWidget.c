// Class: PlantGeneNewAdditionWidget


/* PlantGeneNewAdditionWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void PlantGeneNewAdditionWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneNewAdditionWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneNewAdditionWidget::ScrollTargetReached
          (PlantGeneNewAdditionWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneNewAdditionWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PlantGeneNewAdditionWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PlantGeneNewAdditionWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PlantGeneNewAdditionWidget::ScrollTargetInterrupted
          (PlantGeneNewAdditionWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget() */

void __thiscall
PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget(PlantGeneNewAdditionWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066a0e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a1138;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneNewAdditionWidget_066a1180;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget() */

void __thiscall
PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget(PlantGeneNewAdditionWidget *this)

{
  ~PlantGeneNewAdditionWidget(this + -0xe0);
  return;
}


/* PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget() */

void __thiscall
PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget(PlantGeneNewAdditionWidget *this)

{
  ~PlantGeneNewAdditionWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget() */

void __thiscall
PlantGeneNewAdditionWidget::~PlantGeneNewAdditionWidget(PlantGeneNewAdditionWidget *this)

{
  ~PlantGeneNewAdditionWidget(this + -0xe0);
  return;
}


/* PlantGeneNewAdditionWidget::PlantGeneNewAdditionWidget() */

void __thiscall
PlantGeneNewAdditionWidget::PlantGeneNewAdditionWidget(PlantGeneNewAdditionWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066a0e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a1138;
  *(undefined ***)(this + 0xe0) = &PTR__PlantGeneNewAdditionWidget_066a1180;
  return;
}


/* PlantGeneNewAdditionWidget::ButtonDepress(int) */

void __thiscall
PlantGeneNewAdditionWidget::ButtonDepress(PlantGeneNewAdditionWidget *this,int param_1)

{
  PlantAccessoryUI *this_00;
  
  if (param_1 != 0x58) {
    return;
  }
  this_00 = (PlantAccessoryUI *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  PlantAccessoryUI::CloseAccessorySuperPacket(this_00);
  return;
}


/* non-virtual thunk to PlantGeneNewAdditionWidget::ButtonDepress(int) */

void __thiscall
PlantGeneNewAdditionWidget::ButtonDepress(PlantGeneNewAdditionWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneNewAdditionWidget::InitView() */

void __thiscall PlantGeneNewAdditionWidget::InitView(PlantGeneNewAdditionWidget *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UIWidgetImage *this_00;
  UIWidgetText *pUVar8;
  PVZ2UIButton *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  GeneEnhancement *this_04;
  long lVar9;
  int *piVar10;
  long *plVar11;
  uint *puVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (PlantGeneNewAdditionWidget)0x0;
  iVar2 = FUN_03800484(0x226);
  iVar3 = FUN_03800484(400);
  lVar9 = gLawnApp;
  iVar4 = FUN_03800484(0x1e);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar9 + 0xd4) - iVar2) / 2,(*(int *)(lVar9 + 0xd8) - iVar3) / 2 - iVar4,
             iVar2,iVar3);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ab2888,5);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)&local_40);
  uVar5 = FUN_03800484(0);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar5,uVar5,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  TodStringTranslate(L"[NEW_ADDITION_GENE]");
  pUVar8 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar8,(wstring *)&local_40);
  FUN_05476c50((wstring *)&local_40);
  FUN_037fe590(pUVar8 + 0xe0,5);
  UIWidgetText::SetFontIndex(pUVar8,6);
  pcVar14 = *(code **)(*(long *)pUVar8 + 0x170);
  Sexy::Color::Color((Color *)&local_40,1);
  (*pcVar14)(pUVar8,0,(wstring *)&local_40);
  uVar5 = FUN_03800484(0x46);
  (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,0,0,*(undefined4 *)(this + 0x50),uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pUVar8);
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x58,(ButtonListener *)(this + 0xd8),(wstring *)aRStack_78,(Color *)&local_40);
  FUN_05476c50(aRStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06ab29c0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ab2b68,2);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)&local_40);
  uVar5 = FUN_03800484(0x203);
  iVar2 = FUN_03800484(0xc);
  uVar6 = FUN_03800484(0x36);
  uVar7 = FUN_03800484(0x39);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar5,-iVar2,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xe0));
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  iVar3 = FUN_03800484(0x1e);
  uVar5 = FUN_03800484(0x4b);
  iVar2 = *(int *)(this + 0x50);
  uVar6 = FUN_03800484(300);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar3,uVar5,iVar2 + iVar3 * -2,uVar6);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  this_04 = (GeneEnhancement *)
            (**(code **)(*(long *)this_03 + 0x198))
                      (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  GeneEnhancement::GetGeneConfig(this_04);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_40,(vector *)(lVar9 + 0x90));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  uVar15 = 0;
  while( true ) {
    uVar1 = local_40;
    uVar13 = FUN_037fe598(local_40,local_38);
    if (uVar13 <= uVar15) break;
    iVar3 = FUN_03800484(0x14);
    iVar2 = FUN_03800484(0x50);
    iVar4 = FUN_03800484(10);
    iVar2 = (iVar2 + iVar4) * (int)uVar15;
    piVar10 = (int *)FUN_037fe9b8(uVar1,uVar15);
    plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,0,false);
    uVar5 = FUN_03800484(0x50);
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar3,iVar2,uVar5,uVar5);
    lVar9 = *(long *)this_03;
    *(undefined1 *)((long)plVar11 + 0x59) = 0;
    pcVar14 = *(code **)(lVar9 + 0x60);
    (*pcVar14)(this_03,plVar11);
    iVar4 = (int)pcVar14;
    puVar12 = (uint *)FUN_037fe9b8(local_40,uVar15);
    GeneEnhancement::GetGeneBoostDescription((GeneEnhancement *)(ulong)*puVar12,10,iVar4);
    pUVar8 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar8,(wstring *)aRStack_78);
    FUN_05476c50(aRStack_78);
    FUN_037fe590(pUVar8 + 0xe0,5);
    UIWidgetText::SetFontIndex(pUVar8,5);
    pcVar14 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)aRStack_78,0x69,0x25,0);
    (*pcVar14)(pUVar8,0,aRStack_78);
    iVar4 = FUN_03800484(0x6e);
    uVar5 = FUN_03800484(0x168);
    uVar6 = FUN_03800484(0x50);
    (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,iVar4 + iVar3,iVar2,uVar5,uVar6);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,pUVar8);
    uVar15 = uVar15 + 1;
  }
  iVar2 = FUN_03800484(0x14);
  iVar3 = FUN_03800484(0x50);
  iVar4 = FUN_03800484(10);
  pcVar14 = *(code **)(*(long *)this + 0x60);
  *(int *)(this_03 + 0x54) = iVar2 * 2 + (iVar3 + iVar4) * (int)uVar13;
  (*pcVar14)(this,this_02);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

