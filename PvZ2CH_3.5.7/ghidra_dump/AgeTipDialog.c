// Class: AgeTipDialog


/* AgeTipDialog::ButtonDepress(int) */

void __thiscall AgeTipDialog::ButtonDepress(AgeTipDialog *this,int param_1)

{
  if (param_1 == 0x7b) {
    this[0x6c] = (AgeTipDialog)0x0;
  }
  return;
}


/* non-virtual thunk to AgeTipDialog::ButtonDepress(int) */

void __thiscall AgeTipDialog::ButtonDepress(AgeTipDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AgeTipDialog::~AgeTipDialog() */

void __thiscall AgeTipDialog::~AgeTipDialog(AgeTipDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c430;
  *(undefined **)(this + 0xd8) = &DAT_0684c760;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AgeTipDialog::~AgeTipDialog() */

void __thiscall AgeTipDialog::~AgeTipDialog(AgeTipDialog *this)

{
  ~AgeTipDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgeTipDialog::AgeTipDialog() */

void __thiscall AgeTipDialog::AgeTipDialog(AgeTipDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *this_01;
  long lVar5;
  float fVar6;
  float fVar7;
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0684c430;
  *(undefined **)(this + 0xd8) = &DAT_0684c760;
  fVar6 = (float)FUN_0445ae84(0x44480000);
  fVar7 = (float)FUN_0445ae84(0x43f58000);
  Sexy::Widget::Resize
            ((Widget *)this,(int)(((float)*(int *)(gLawnApp + 0xd4) - fVar6) * 0.5),
             (int)(((float)*(int *)(gLawnApp + 0xd8) - fVar7) * 0.5),(int)fVar6,(int)fVar7);
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x7b,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar1 = *(int *)(this + 0x50);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_0445ae70(10);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  iVar2 = *(int *)(lVar5 + 0x38);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  Sexy::Insets::Insets(aIStack_88,(iVar1 - iVar3) - iVar4,iVar4,iVar2,*(int *)(lVar5 + 0x3c));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b090a0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b09450,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgeTipDialog::ButtonPress(int) */

void __thiscall AgeTipDialog::ButtonPress(AgeTipDialog *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != 0x7b) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
  return;
}


/* non-virtual thunk to AgeTipDialog::ButtonPress(int) */

void __thiscall AgeTipDialog::ButtonPress(AgeTipDialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgeTipDialog::Draw(Sexy::Graphics*) */

void __thiscall AgeTipDialog::Draw(AgeTipDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090d0);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar9);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar2 = FUN_0445ae70(0xfffffff3);
  iVar3 = FUN_0445ae70(0xfffffff7);
  iVar4 = FUN_0445ae70(0x1a);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_0445ae70(0x17);
  Sexy::Insets::Insets(aIStack_48,iVar2,iVar3,iVar4 + iVar1,iVar5 + *(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b092d0);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  iVar2 = FUN_0445ae70(0x32);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_0445ae70(100);
  iVar4 = *(int *)(this + 0x54) - iVar3;
  iVar1 = iVar1 - iVar2;
  iVar5 = FUN_0445ae70(0x14);
  Sexy::Insets::Insets(aIStack_38,iVar2 / 2,iVar5 + iVar3 / 2,iVar1,iVar4);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09348);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = *(int *)(this + 0x54);
  TodStringTranslate(L"[AGE_TIP]");
  iVar5 = FUN_0445ae70(0);
  iVar6 = FUN_0445ae70(0xf);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar6,iVar2,iVar3);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LabelName);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,2,1);
  FUN_05476c50(auStack_50);
  LawnApp::GetPlatform(gLawnApp);
  LawnApp::IsServiceAvailable(gLawnApp,0x400000);
  TodStringTranslate(L"[AGE_TIP_CONTENT]");
  iVar5 = FUN_0445ae70(0x14);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_0445ae70(0x28);
  iVar3 = *(int *)(this + 0x54);
  iVar7 = FUN_0445ae70(0x1e);
  iVar8 = FUN_0445ae70(10);
  Sexy::Insets::Insets
            (aIStack_28,iVar5 + (iVar2 - iVar1) / 2,iVar6 + (iVar3 - iVar4) / 2,iVar1 - iVar7,
             iVar4 - iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,0,1);
  FUN_05476c50(auStack_50);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

