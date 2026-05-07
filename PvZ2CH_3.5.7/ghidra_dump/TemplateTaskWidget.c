// Class: TemplateTaskWidget


/* TemplateTaskWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall TemplateTaskWidget::TouchBegan(TemplateTaskWidget *this,Touch *param_1)

{
  *(int *)(this + 0x160) = (int)*(undefined8 *)param_1;
  return;
}


/* TemplateTaskWidget::ButtonDepress(int) */

void __thiscall TemplateTaskWidget::ButtonDepress(TemplateTaskWidget *this,int param_1)

{
  if (param_1 == 0x56c3) {
    (**(code **)(*(long *)this + 0x348))();
  }
  return;
}


/* non-virtual thunk to TemplateTaskWidget::ButtonDepress(int) */

void __thiscall TemplateTaskWidget::ButtonDepress(TemplateTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* TemplateTaskWidget::~TemplateTaskWidget() */

void __thiscall TemplateTaskWidget::~TemplateTaskWidget(TemplateTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06703f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067042f0;
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TemplateTaskWidget::~TemplateTaskWidget() */

void __thiscall TemplateTaskWidget::~TemplateTaskWidget(TemplateTaskWidget *this)

{
  ~TemplateTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::DrawTaskDescription(Sexy::Graphics*) */

void __thiscall TemplateTaskWidget::DrawTaskDescription(TemplateTaskWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,this + 0xf0,this + 0xf8,uVar1,aCStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::UpdateButtonState() */

void __thiscall TemplateTaskWidget::UpdateButtonState(TemplateTaskWidget *this)

{
  uint uVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(*(long *)(this + 0x158) + 0x14);
  local_8 = ___stack_chk_guard;
  if (uVar1 < 2) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),1);
  }
  else if (uVar1 == 3) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),1);
    this_00 = *(PVZ2UIButton **)(this + 0x150);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  else if (uVar1 == 2) {
    (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TemplateTaskWidget::TemplateTaskWidget() */

void __thiscall TemplateTaskWidget::TemplateTaskWidget(TemplateTaskWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06703f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067042f0;
  FUN_05476574(this + 0xf0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  FUN_05476574(this + 0x118);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::InitTask(GeneralTask*) */

void __thiscall TemplateTaskWidget::InitTask(TemplateTaskWidget *this,GeneralTask *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  PVZ2UIButton *pPVar9;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  *(GeneralTask **)(this + 0x158) = param_1;
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
  lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x20),false);
  *(long *)(this + 0xe0) = lVar5;
  if (lVar5 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_HAPPYVASEBREAKER_TASK_BG");
    uVar6 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xe0) = uVar6;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  Sexy::ToWString((string *)(lVar5 + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(lVar5 + 0x28));
  FUN_054766c8(this + 0xf0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  iVar1 = FUN_03a3bfc8(0x1e);
  iVar2 = FUN_03a3bfc8(0x28);
  iVar4 = *(int *)(this + 0x50);
  iVar3 = FUN_03a3bfc8(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,0,iVar4 - iVar2,iVar3);
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  iVar4 = FUN_03a3bfc8(10);
  iVar1 = FUN_03a3bfc8(0x4b);
  iVar2 = FUN_03a3bfc8(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar2);
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  iVar4 = FUN_03a3bfc8(200);
  iVar1 = FUN_03a3bfc8(0x4b);
  iVar2 = FUN_03a3bfc8(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar2);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar4 = FUN_03a3bfc8(0x168);
  iVar1 = FUN_03a3bfc8(5);
  iVar2 = FUN_03a3bfc8(0x8c);
  iVar3 = FUN_03a3bfc8(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar3);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar4 = FUN_03a3bfc8(0x1a4);
  iVar1 = FUN_03a3bfc8(0x55);
  iVar2 = FUN_03a3bfc8(0x78);
  iVar3 = FUN_03a3bfc8(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar1,iVar2,iVar3);
  pPVar9 = *(PVZ2UIButton **)(this + 0x150);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  if (pPVar9 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar9 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar9,0x56c3,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x150) = pPVar9;
    FUN_05476c50(awStack_78);
    (**(code **)(*(long *)this + 0x340))(this);
    pPVar9 = *(PVZ2UIButton **)(this + 0x150);
    if (pPVar9 == (PVZ2UIButton *)0x0) goto LAB_03a3c814;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac46f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac44e0,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x150) + 0x1a0))(*(long **)(this + 0x150),this + 0x140);
  plVar7 = *(long **)(this + 0x150);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar7,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x150));
LAB_03a3c814:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall TemplateTaskWidget::DrawTaskBackground(TemplateTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  iVar1 = FUN_03a3bfc8(2);
  iVar2 = FUN_03a3bfc8(4);
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4558);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::DrawProgress(Sexy::Graphics*) */

void __thiscall TemplateTaskWidget::DrawProgress(TemplateTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&local_28,this + 0x120,uVar8,aIStack_18,0,1);
  FUN_05476c50((Insets *)&local_28);
  iVar1 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x120);
  iVar3 = *(int *)(this + 0x128);
  iVar4 = *(int *)(this + 0x124);
  iVar6 = FUN_03a3bfc8(100);
  iVar7 = FUN_03a3bfc8(0x12);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2 + iVar3,(iVar1 << 1) / 3 + iVar4,iVar6,iVar7);
  iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  iVar2 = *(int *)(lVar9 + 0x28);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4718);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  if (*(int *)(*(long *)(this + 0x158) + 0x10) == 0) {
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar9 + 0x28) < 0) {
LAB_03a3cc38:
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
      uVar5 = *(uint *)(lVar9 + 0x28);
      lVar9 = *(long *)(this + 0x158);
      goto LAB_03a3cb18;
    }
  }
  else {
    fVar10 = (float)NEON_fminnm((float)iVar1 / (float)iVar2,0x3f800000);
    Sexy::Insets::Insets(aIStack_18,local_28,local_24,(int)(fVar10 * (float)local_20),local_1c);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4618);
    Draw3SliceImage(param_1,aIStack_18,uVar8);
    iVar1 = *(int *)(*(long *)(this + 0x158) + 0x10);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    if (*(int *)(lVar9 + 0x28) < iVar1) goto LAB_03a3cc38;
  }
  lVar9 = *(long *)(this + 0x158);
  uVar5 = *(uint *)(lVar9 + 0x10);
LAB_03a3cb18:
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x20));
  Sexy::StrFormat("%d / %d",aIStack_18,(ulong)uVar5,(ulong)*(uint *)(lVar9 + 0x28));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar8,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateTaskWidget::DrawRewards(Sexy::Graphics*) */

void __thiscall TemplateTaskWidget::DrawRewards(TemplateTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Image *pIVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  iVar2 = FUN_03a3bfc8(8);
  iVar7 = *(int *)(this + 0x110);
  iVar1 = *(int *)(this + 0x108);
  iVar3 = FUN_03a3bfc8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_38,iVar7 + iVar1,*(int *)(this + 0x10c),iVar7 + iVar3,
             iVar3 + *(int *)(this + 0x114));
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_48,this + 0x108,uVar8,aIStack_18,0,1);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4690);
  iVar1 = local_30;
  iVar7 = local_30 + local_38;
  iVar3 = FUN_03a3bfc8(5);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar7 + iVar3,iVar2 + local_34,iVar1,local_2c);
  iVar1 = local_30;
  iVar7 = local_38;
  if (*(long *)(this + 0xe8) != 0) {
    iVar4 = FUN_03a3bfc8(5);
    iVar5 = FUN_03a3bfc8(2);
    iVar3 = iVar5 + local_34;
    iVar6 = FUN_03a3bfc8(4);
    Sexy::Insets::Insets
              (aIStack_18,iVar7 + iVar1 + iVar4 + iVar5,iVar3 + iVar2,iVar1 - iVar6,local_2c - iVar6
              );
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  iVar7 = FUN_03a3bfc8(5);
  Sexy::Insets::Insets
            (aIStack_28,local_38 + local_30 + iVar7,(local_2c << 1) / 3 + local_34 + iVar2,local_30,
             local_2c / 2);
  Sexy::StrFormat("X %d",aIStack_18,(ulong)*(uint *)(this + 0x164));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar8,aIStack_18,2,1);
  FUN_05476c50(auStack_40);
  FUN_05476c50(auStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TemplateTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall TemplateTaskWidget::Draw(TemplateTaskWidget *this,Graphics *param_1)

{
  nop();
  (**(code **)(*(long *)this + 800))(this,param_1);
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))(this,param_1);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  return;
}

