// Class: CodeRewardErrorDialog


/* CodeRewardErrorDialog::ButtonDepress(int) */

void CodeRewardErrorDialog::ButtonDepress(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x158))((long *)(ulong)(uint)param_1,0);
  return;
}


/* non-virtual thunk to CodeRewardErrorDialog::ButtonDepress(int) */

void __thiscall CodeRewardErrorDialog::ButtonDepress(CodeRewardErrorDialog *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* CodeRewardErrorDialog::~CodeRewardErrorDialog() */

void __thiscall CodeRewardErrorDialog::~CodeRewardErrorDialog(CodeRewardErrorDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06981260;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06981588;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CodeRewardErrorDialog::~CodeRewardErrorDialog() */

void __thiscall CodeRewardErrorDialog::~CodeRewardErrorDialog(CodeRewardErrorDialog *this)

{
  ~CodeRewardErrorDialog(this);
  AK::FreeHook(this);
  return;
}


/* CodeRewardErrorDialog::showError(bool, std::wstring const&) */

void __thiscall
CodeRewardErrorDialog::showError(CodeRewardErrorDialog *this,bool param_1,wstring *param_2)

{
  this[0x100] = (CodeRewardErrorDialog)param_1;
  thunk_FUN_05477b9c(this + 0xf8,param_2);
  (**(code **)(*(long *)this + 0x158))(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardErrorDialog::CodeRewardErrorDialog() */

void __thiscall CodeRewardErrorDialog::CodeRewardErrorDialog(CodeRewardErrorDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIButton *this_00;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06981260;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06981588;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar2 = FUN_04c02ee8(500);
  iVar3 = FUN_04c02ee8(300);
  iVar4 = FUN_04c02ee8(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar2) / 2,
             iVar4 + (*(int *)(this + 0x54) - iVar3) / 2,iVar2,iVar3);
  *(undefined8 *)(this + 0xe0) = local_40;
  *(undefined8 *)(this + 0xe8) = uStack_38;
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar5 = FUN_04c02ee8(0x96);
  iVar2 = *(int *)(this + 0xe8);
  iVar3 = *(int *)(this + 0xec);
  iVar4 = *(int *)(this + 0xe0);
  iVar1 = *(int *)(this + 0xe4);
  iVar6 = FUN_04c02ee8(0x4b);
  uVar7 = FUN_04c02ee8(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,iVar4 + (iVar2 - iVar5) / 2,(iVar1 + iVar3) - iVar6,iVar5,uVar7);
  pcVar9 = *(code **)(*(long *)this_00 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar9)(this_00,uVar8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8d980,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8da68,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  this[0x100] = (CodeRewardErrorDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardErrorDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
CodeRewardErrorDialog::DrawAll(CodeRewardErrorDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8db98);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeRewardErrorDialog::Draw(Sexy::Graphics*) */

void __thiscall CodeRewardErrorDialog::Draw(CodeRewardErrorDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  PrimeTypeface *this_00;
  code *pcVar9;
  float fVar10;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar9 = *(code **)(*(long *)this + 0x290);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  iVar2 = FUN_04c02ee8(0x14);
  iVar3 = *(int *)(this + 0xe4);
  TodStringTranslate(L"[SUMMARY_NOTICE]");
  (*pcVar9)(this,param_1,uVar8,aCStack_18,iVar2 + iVar3,aIStack_28);
  FUN_05476c50(aIStack_28);
  if (this[0x100] == (CodeRewardErrorDialog)0x0) {
    pcVar9 = *(code **)(*(long *)this + 0x290);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,2);
    iVar3 = FUN_04c02ee8(100);
    (*pcVar9)(this,param_1,uVar8,aCStack_18,iVar3 + *(int *)(this + 0xe4),this + 0xf8);
  }
  else {
    pcVar9 = *(code **)(*(long *)this + 0x290);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,2);
    iVar2 = FUN_04c02ee8(0x50);
    iVar3 = *(int *)(this + 0xe4);
    TodStringTranslate(L"[CODE_IS_ERROR]");
    (*pcVar9)(this,param_1,uVar8,aCStack_18,iVar2 + iVar3,aIStack_28);
    FUN_05476c50(aIStack_28);
    iVar4 = FUN_04c02ee8(0x19);
    iVar3 = *(int *)(this + 0xe0);
    iVar5 = FUN_04c02ee8(0x78);
    iVar2 = *(int *)(this + 0xe4);
    iVar6 = FUN_04c02ee8(0x32);
    iVar1 = *(int *)(this + 0xe8);
    iVar7 = FUN_04c02ee8(0xa0);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar3,iVar5 + iVar2,iVar1 - iVar6,iVar7);
    pcVar9 = *(code **)(*(long *)this + 0x2a8);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,2);
    this_00 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    fVar10 = (float)Sexy::PrimeTypeface::GetLineSpacing(this_00);
    (*pcVar9)(this,param_1,uVar8,aCStack_18,aIStack_28,this + 0xf8,(int)fVar10,0xffffffff);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

