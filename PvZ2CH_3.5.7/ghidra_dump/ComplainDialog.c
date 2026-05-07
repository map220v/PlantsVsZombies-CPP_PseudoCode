// Class: ComplainDialog


/* ComplainDialog::ButtonDepress(int) */

void __thiscall ComplainDialog::ButtonDepress(ComplainDialog *this,int param_1)

{
  if (param_1 == 0x7b) {
    this[0x6c] = (ComplainDialog)0x0;
  }
  return;
}


/* non-virtual thunk to ComplainDialog::ButtonDepress(int) */

void __thiscall ComplainDialog::ButtonDepress(ComplainDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ComplainDialog::~ComplainDialog() */

void __thiscall ComplainDialog::~ComplainDialog(ComplainDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c0b0;
  *(undefined **)(this + 0xd8) = &DAT_0684c3e0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ComplainDialog::~ComplainDialog() */

void __thiscall ComplainDialog::~ComplainDialog(ComplainDialog *this)

{
  ~ComplainDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComplainDialog::ComplainDialog() */

void __thiscall ComplainDialog::ComplainDialog(ComplainDialog *this)

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
  *(undefined ***)this = &PTR_GetClass_0684c0b0;
  *(undefined **)(this + 0xd8) = &DAT_0684c3e0;
  fVar6 = (float)FUN_0445ae84(0x43eb0000);
  fVar7 = (float)FUN_0445ae84(DAT_06b09388);
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


/* ComplainDialog::ButtonPress(int) */

void __thiscall ComplainDialog::ButtonPress(ComplainDialog *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 != 0x7b) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
  return;
}


/* non-virtual thunk to ComplainDialog::ButtonPress(int) */

void __thiscall ComplainDialog::ButtonPress(ComplainDialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComplainDialog::Draw(Sexy::Graphics*) */

void __thiscall ComplainDialog::Draw(ComplainDialog *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  GraphicsAutoState aGStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090d0);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar10);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar4 = FUN_0445ae70(0xfffffff3);
  iVar5 = FUN_0445ae70(0xfffffff7);
  iVar6 = FUN_0445ae70(0x1a);
  iVar1 = *(int *)(this + 0x50);
  iVar7 = FUN_0445ae70(0x17);
  Sexy::Insets::Insets(aIStack_48,iVar4,iVar5,iVar6 + iVar1,iVar7 + *(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b092d0);
  Draw9SliceImage(param_1,aIStack_18,uVar10);
  iVar4 = FUN_0445ae70(0x32);
  iVar6 = *(int *)(this + 0x50) - iVar4;
  iVar5 = FUN_0445ae70(100);
  iVar1 = *(int *)(this + 0x54);
  iVar7 = FUN_0445ae70(0x14);
  iVar1 = iVar1 - iVar5;
  Sexy::Insets::Insets(aIStack_38,iVar4 / 2,iVar7 + iVar5 / 2,iVar6,iVar1);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09348);
  Draw9SliceImage(param_1,aIStack_18,uVar10);
  iVar4 = *(int *)(this + 0x50);
  iVar5 = *(int *)(this + 0x54);
  TodStringTranslate(L"[COMPLAIN_TITLE]");
  iVar7 = FUN_0445ae70(0);
  iVar8 = FUN_0445ae70(0xf);
  Sexy::Insets::Insets(aIStack_28,iVar7,iVar8,iVar4,iVar5);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar10,aIStack_18,2,1);
  FUN_05476c50(auStack_50);
  LawnApp::GetPlatform(gLawnApp);
  cVar2 = LawnApp::IsServiceAvailable(gLawnApp,0x400000);
  FUN_05476574(auStack_58);
  cVar3 = LawnApp::IsGMInfoExtraType(gLawnApp);
  if (cVar3 == '\0') {
    TodStringTranslate(L"[COMPLAIN_CONTENT]");
    FUN_054766c8(auStack_58,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  else {
    LawnApp::GetGMInfoExtraType();
    Sexy::StringToUpper((Sexy *)aIStack_28,extraout_x1);
    Sexy::UTF8StringToWString((Sexy *)aIStack_18,extraout_x1_00);
    std::string::~string((string *)aIStack_18);
    std::string::~string((string *)aIStack_28);
    uVar10 = FUN_054766ec(auStack_50);
    Sexy::StrFormat(L"[COMPLAIN_CONTENT_%s]",aIStack_28,uVar10);
    TodStringTranslate((wstring *)aIStack_28);
    FUN_054766c8(auStack_58,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(aIStack_28);
    FUN_05476c50(auStack_50);
  }
  if (cVar2 == '\0') {
    TodStringTranslate(L"[COMPLAIN_CONTENT_TIME]");
  }
  else {
    FUN_05477b24(auStack_50,auStack_58);
  }
  iVar7 = FUN_0445ae70(0x14);
  iVar4 = *(int *)(this + 0x50);
  iVar8 = FUN_0445ae70(0x28);
  iVar5 = *(int *)(this + 0x54);
  iVar9 = FUN_0445ae70(10);
  Sexy::Insets::Insets
            (aIStack_28,iVar7 + (iVar4 - iVar6) / 2,iVar8 + (iVar5 - iVar1) / 2,iVar6 - iVar9,
             iVar1 - iVar9);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar10,aIStack_18,0,1);
  FUN_05476c50(auStack_50);
  FUN_05476c50(auStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

