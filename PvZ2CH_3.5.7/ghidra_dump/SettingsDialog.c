// Class: SettingsDialog


/* SettingsDialog::SetDisplayID(std::string const&) */

void SettingsDialog::SetDisplayID(string *param_1)

{
  thunk_FUN_05475e00(&s_displayID,param_1);
  return;
}


/* SettingsDialog::SetDisplayUUID(std::string const&) */

void SettingsDialog::SetDisplayUUID(string *param_1)

{
  thunk_FUN_05475e00(&s_displayUUID,param_1);
  return;
}


/* SettingsDialog::SetIsACheatProfile(bool) */

void SettingsDialog::SetIsACheatProfile(bool param_1)

{
  s_isACheatProfile = param_1;
  return;
}


/* SettingsDialog::SetHaveSendV202(bool) */

void SettingsDialog::SetHaveSendV202(bool param_1)

{
  s_haveSendV202 = param_1;
  return;
}


/* SettingsDialog::SetEncryptIndex(int) */

void SettingsDialog::SetEncryptIndex(int param_1)

{
  s_encryptIndex = param_1;
  return;
}


/* SettingsDialog::GetEncryptIndex() */

undefined4 SettingsDialog::GetEncryptIndex(void)

{
  return s_encryptIndex;
}


/* SettingsDialog::GetDisplayUUID() */

undefined8 * SettingsDialog::GetDisplayUUID(void)

{
  return &s_displayUUID;
}


/* SettingsDialog::GetIsACheatProfile() */

undefined1 SettingsDialog::GetIsACheatProfile(void)

{
  return s_isACheatProfile;
}


/* SettingsDialog::GetHaveSendV202() */

undefined1 SettingsDialog::GetHaveSendV202(void)

{
  return s_haveSendV202;
}


/* SettingsDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void SettingsDialog::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SettingsDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall SettingsDialog::ScrollTargetReached(SettingsDialog *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* SettingsDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SettingsDialog::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SettingsDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall SettingsDialog::ScrollTargetInterrupted(SettingsDialog *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* SettingsDialog::GetDisplayID() */

undefined8 * SettingsDialog::GetDisplayID(void)

{
  return &s_displayID;
}


/* SettingsDialog::setupCredits() */

void __thiscall SettingsDialog::setupCredits(SettingsDialog *this)

{
  PVZ2UICreditsScreen *this_00;
  
  if ((*(int *)(this + 0x140) == 0) && (*(long *)(this + 0x118) == 0)) {
    this_00 = ::operator_new(0x108);
    PVZ2UICreditsScreen::PVZ2UICreditsScreen(this_00);
    *(PVZ2UICreditsScreen **)(this + 0x118) = this_00;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x118));
  }
  return;
}


/* SettingsDialog::SliderVal(int, double) */

double SettingsDialog::SliderVal(int param_1,double param_2)

{
  SettingsWidgetList *this;
  int in_w1;
  double dVar1;
  
  if (in_w1 == 2) {
    dVar1 = (double)(**(code **)(*gLawnApp + 0x1f8))(gLawnApp);
    this = *(SettingsWidgetList **)((ulong)(uint)param_1 + 0x110);
  }
  else {
    if (in_w1 != 3) {
      return param_2;
    }
    dVar1 = (double)(**(code **)(*gLawnApp + 0x200))(gLawnApp);
    this = *(SettingsWidgetList **)((ulong)(uint)param_1 + 0x110);
  }
  if (this == (SettingsWidgetList *)0x0) {
    return dVar1;
  }
  dVar1 = (double)SettingsWidgetList::CancelScrollingWidgetDrag(this);
  return dVar1;
}


/* non-virtual thunk to SettingsDialog::SliderVal(int, double) */

void __thiscall SettingsDialog::SliderVal(SettingsDialog *this,int param_1,double param_2)

{
  SliderVal((int)this + -0xe8,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::createButtonWidget(int, std::wstring const&, Sexy::Image*) */

void SettingsDialog::createButtonWidget(int param_1,wstring *param_2,Image *param_3)

{
  char cVar1;
  SettingsWidget *this;
  PVZ2UIImageWidget *this_00;
  PVZ2UIButton *this_01;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  Insets aIStack_38 [12];
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,(wchar16 *)param_2,(LineBreakCategory *)param_3,in_x3,in_x4)
  ;
  if (cVar1 == '\0') {
    uVar4 = 0x42820000;
  }
  else {
    uVar4 = 0x42300000;
  }
  fVar2 = (float)FUN_0445ae84(0x43cc0000);
  fVar3 = (float)FUN_0445ae84(uVar4);
  Sexy::Insets::Insets(aIStack_38,0,0,(int)fVar2,(int)fVar3);
  this = ::operator_new(0xe0);
  SettingsWidget::SettingsWidget(this,(wstring *)param_3);
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_38);
  this_00 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_00);
  LevelEditorWaveEventPortalPanel::SetBgImage
            ((LevelEditorWaveEventPortalPanel *)this_00,(Image *)in_x3);
  fVar2 = (float)FUN_0445ae84(0x43aa0000);
  Sexy::Insets::Insets
            (aIStack_28,(int)fVar2,(local_2c - *(int *)(in_x3 + 0x3c)) / 2,*(int *)(in_x3 + 0x38),
             *(int *)(in_x3 + 0x3c));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(awStack_40,&DAT_056f11a8,auStack_48);
  Sexy::Color::Color(aCStack_18,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,(int)param_2,(ButtonListener *)((ulong)(uint)param_1 + 0xe0),awStack_40,
             aCStack_18);
  FUN_05476c50(awStack_40);
  nop();
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_38);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall SettingsDialog::DrawAll(SettingsDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_2);
  Sexy::Graphics::ClearClipRect(param_2);
  iVar1 = FUN_0445ae70(0);
  iVar2 = FUN_0445ae70(0x10);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,iVar2,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b092d0);
  Draw9SliceImage(param_2,aIStack_18,uVar3);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::createCheckboxWidget(int, std::wstring const&, bool) */

void SettingsDialog::createCheckboxWidget(int param_1,wstring *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  SettingsWidget *this;
  PVZ2UICheckBox *this_00;
  Image *pIVar4;
  Image *pIVar5;
  long lVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  Insets aIStack_28 [12];
  int local_1c;
  Insets aIStack_18 [16];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,(wchar16 *)param_2,(LineBreakCategory *)(ulong)param_3,in_x3
                     ,in_x4);
  if (cVar3 == '\0') {
    uVar9 = 0x42820000;
  }
  else {
    uVar9 = 0x42300000;
  }
  fVar7 = (float)FUN_0445ae84(0x43cc0000);
  fVar8 = (float)FUN_0445ae84(uVar9);
  Sexy::Insets::Insets(aIStack_28,0,0,(int)fVar7,(int)fVar8);
  this = ::operator_new(0xe0);
  SettingsWidget::SettingsWidget(this,(wstring *)(ulong)param_3);
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_28);
  this_00 = ::operator_new(0x1b0);
  PVZ2UICheckBox::PVZ2UICheckBox
            (this_00,(int)param_2,(ButtonListener *)((ulong)(uint)param_1 + 0xe0),
             (CheckboxListener *)((ulong)(uint)param_1 + 0xf0));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093b8);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09128);
  PVZ2UICheckBox::SetCheckboxStates(this_00,pIVar4,pIVar5,SUB81(in_x3,0),0,0);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093b8);
  iVar1 = *(int *)(lVar6 + 0x3c);
  fVar7 = (float)FUN_0445ae84(0x43aa0000);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093b8);
  iVar2 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093b8);
  Sexy::Insets::Insets
            (aIStack_18,0,(local_1c - iVar1) / 2,(int)(fVar7 + (float)iVar2),*(int *)(lVar6 + 0x3c))
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  PVZ2UICheckBox::SetRightAligned(this_00,true);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::createSliderWidget(int, std::wstring const&, float) */

void SettingsDialog::createSliderWidget(int param_1,wstring *param_2,float param_3)

{
  char cVar1;
  int iVar2;
  SettingsWidget *this;
  Image *pIVar3;
  Image *pIVar4;
  Slider *this_00;
  long lVar5;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  Point aPStack_20 [8];
  Insets aIStack_18 [12];
  int local_c;
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,(wchar16 *)param_2,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    uVar8 = 0x42820000;
  }
  else {
    uVar8 = 0x42300000;
  }
  fVar6 = (float)FUN_0445ae84(0x43cc0000);
  fVar7 = (float)FUN_0445ae84(uVar8);
  Sexy::Insets::Insets(aIStack_18,0,0,(int)fVar6,(int)fVar7);
  this = ::operator_new(0xe0);
  SettingsWidget::SettingsWidget(this,(wstring *)in_x2);
  (**(code **)(*(long *)this + 0x1a0))(this,aIStack_18);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09000);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093e8);
  this_00 = ::operator_new(0x188);
  Sexy::Slider::Slider
            (this_00,pIVar3,pIVar4,(int)param_2,(SliderListener *)((ulong)(uint)param_1 + 0xe8));
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09150);
  iVar2 = FUN_0445ae70(3);
  Sexy::Slider::SetFillImage(this_00,pIVar3,iVar2);
  (**(code **)(*(long *)this_00 + 0x310))((double)param_3,this_00);
  uVar8 = FUN_0445ae70(4);
  FUN_0445ae48(this_00 + 0x184,uVar8);
  Sexy::Slider::SetKnobInside(this_00,1);
  Sexy::Slider::SetKnobRotationRate(this_00,-8.0);
  Sexy::Slider::SetDrawKnobShadow(this_00,true);
  iVar2 = FUN_0445ae70(2);
  Sexy::Point::Point(aPStack_20,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(this_00,aPStack_20);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b093e8);
  iVar2 = *(int *)(lVar5 + 0x3c);
  fVar6 = (float)FUN_0445ae84(0x43250000);
  fVar7 = (float)FUN_0445ae84(0x436b0000);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(int)fVar6,(int)(((float)local_c - (float)iVar2) * 0.5),(int)fVar7,
             (int)(float)iVar2);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupHelpPane() */

void __thiscall SettingsDialog::setupHelpPane(SettingsDialog *this)

{
  int iVar1;
  int iVar2;
  PrimeText *this_00;
  undefined8 *puVar3;
  SalesProgressBar *this_01;
  PVZ2UIImageWidget *this_02;
  Image *pIVar4;
  SettingsDialogPane *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_28;
  int local_24;
  int local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar5 = (SettingsDialogPane *)*puVar3;
  FUN_05478178(aIStack_18,L"[SETTINGS_HELP_TITLE]",(Insets *)&local_28);
  SettingsDialogPane::SetTitle(pSVar5,aIStack_18);
  FUN_05476c50(aIStack_18);
  nop();
  fVar6 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar7 = (float)FUN_0445ae84(0x42a00000);
  fVar8 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar9 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_28,(int)((float)iVar1 + fVar6),(int)fVar7,(int)(fVar8 - (float)iVar2),
             (int)fVar9);
  iVar1 = FUN_0445ae70(8);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b094d0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20 - iVar1,iVar2);
  this_02 = ::operator_new(0xe8);
  PVZ2UIImageWidget::PVZ2UIImageWidget(this_02);
  LotteryPanel::SetInited((LotteryPanel *)this_02,true);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b094d0);
  LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this_02,pIVar4);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_18);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar3,(Widget *)this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupDownloadPrefsPane() */

void __thiscall SettingsDialog::setupDownloadPrefsPane(SettingsDialog *this)

{
  undefined8 *puVar1;
  SettingsWidgetList *this_00;
  SettingsDialogPane *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar2 = (SettingsDialogPane *)*puVar1;
  FUN_05478178((Insets *)&local_18,L"[SETTINGS_DOWNLOADPREFS_TITLE]",auStack_20);
  SettingsDialogPane::SetTitle(pSVar2,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  nop();
  fVar3 = (float)FUN_0445ae84(0x41c80000);
  fVar4 = (float)FUN_0445ae84(0x42a00000);
  fVar5 = (float)FUN_0445ae84(0x43cc0000);
  fVar6 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets((Insets *)&local_18,(int)fVar3,(int)fVar4,(int)fVar5,(int)fVar6);
  this_00 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_00);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_18,local_14,local_10,local_c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_18,local_14,local_10,local_c);
  puVar1 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar1,(Widget *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsDialog::~SettingsDialog() */

void __thiscall SettingsDialog::~SettingsDialog(SettingsDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0684b2d0;
  *(undefined ***)(this + 0xd8) = &PTR__SettingsDialog_0684b628;
  *(undefined **)(this + 0xe0) = &DAT_0684b670;
  *(undefined ***)(this + 0xe8) = &PTR_SliderVal_0684b6b8;
  *(undefined **)(this + 0xf0) = &DAT_0684b6d8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x120));
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::~vector
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to SettingsDialog::~SettingsDialog() */

void __thiscall SettingsDialog::~SettingsDialog(SettingsDialog *this)

{
  ~SettingsDialog(this + -0xd8);
  return;
}


/* SettingsDialog::~SettingsDialog() */

void __thiscall SettingsDialog::~SettingsDialog(SettingsDialog *this)

{
  ~SettingsDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SettingsDialog::~SettingsDialog() */

void __thiscall SettingsDialog::~SettingsDialog(SettingsDialog *this)

{
  ~SettingsDialog(this + -0xd8);
  return;
}


/* SettingsDialog::ButtonPress(int) */

void __thiscall SettingsDialog::ButtonPress(SettingsDialog *this,int param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
    return;
  case 1:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Settings_Tab_Back_Press");
    return;
  default:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Settings_Tab_Press");
    return;
  case 0x11:
  case 0x12:
  case 0x13:
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Main_Credits_Press");
    return;
  }
}


/* non-virtual thunk to SettingsDialog::ButtonPress(int) */

void __thiscall SettingsDialog::ButtonPress(SettingsDialog *this,int param_1)

{
  ButtonPress(this + -0xe0,param_1);
  return;
}


/* SettingsDialog::CheckboxChecked(int, bool) */

void __thiscall SettingsDialog::CheckboxChecked(SettingsDialog *this,int param_1,bool param_2)

{
  char *pcVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  switch(param_1) {
  case 5:
    if (param_2) {
      (**(code **)(*(long *)gLawnApp + 0x350))(gLawnApp,1);
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      if (pPVar3 != (PlayerInfo *)0x0) {
        PlayerInfo::SetIsHighFPS(pPVar3,true);
      }
    }
    goto LAB_0445cabc;
  case 6:
    if (param_2) {
      (**(code **)(*(long *)gLawnApp + 0x350))(gLawnApp,0);
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      if (pPVar3 != (PlayerInfo *)0x0) {
        PlayerInfo::SetIsHighFPS(pPVar3,false);
      }
    }
LAB_0445cabc:
    this[0x145] = (SettingsDialog)0x1;
    return;
  default:
    goto switchD_0445ca68_caseD_7;
  case 0xf:
    if (param_2) {
      LawnApp::SetUserHasDisabledUsageSharing(gLawnApp,false);
    }
    break;
  case 0x10:
    if (param_2) {
      LawnApp::SetUserHasDisabledUsageSharing(gLawnApp,true);
    }
  }
  this[0x144] = (SettingsDialog)0x1;
switchD_0445ca68_caseD_7:
  return;
}


/* non-virtual thunk to SettingsDialog::CheckboxChecked(int, bool) */

void __thiscall SettingsDialog::CheckboxChecked(SettingsDialog *this,int param_1,bool param_2)

{
  CheckboxChecked(this + -0xf0,param_1,param_2);
  return;
}


/* SettingsDialog::SliderReleased(int, double) */

void SettingsDialog::SliderReleased(int param_1,double param_2)

{
  char *pcVar1;
  int in_w1;
  
  if (in_w1 == 2) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    param_2 = (double)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Music_Volume_Confirm");
  }
  else if (in_w1 == 3) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    param_2 = (double)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_SFX_Volume_Confirm");
  }
  (**(code **)(*gLawnApp + 0xa8))(param_2,gLawnApp);
  return;
}


/* non-virtual thunk to SettingsDialog::SliderReleased(int, double) */

void __thiscall SettingsDialog::SliderReleased(SettingsDialog *this,int param_1,double param_2)

{
  SliderReleased((int)this + -0xe8,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::SettingsDialog() */

void __thiscall SettingsDialog::SettingsDialog(SettingsDialog *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  ButtonListener *this_01;
  uint uVar1;
  LawnApp *pLVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PrimeText *this_02;
  SettingsDialogPane *pSVar8;
  SettingsWidgetList *this_03;
  float *pfVar9;
  Widget *pWVar10;
  PVZ2UIButton *pPVar11;
  long lVar12;
  Util *this_04;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  PrimeTextWidget *this_05;
  PrimeText_PotentialText *pPVar16;
  LineBreakCategory *pLVar17;
  LineBreakCategory *pLVar18;
  LineBreakCategory *pLVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  SettingsDialogPane *local_a8;
  string asStack_a0 [8];
  float local_98 [2];
  undefined8 local_90;
  undefined4 local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  Insets aIStack_40 [56];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8);
  this_01 = (ButtonListener *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener(this_01);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0xe8));
  Sexy::CheckboxListener::CheckboxListener((CheckboxListener *)(this + 0xf0));
  *(undefined ***)this = &PTR_GetClass_0684b2d0;
  *(undefined ***)(this + 0xd8) = &PTR__SettingsDialog_0684b628;
  *(undefined **)(this + 0xe0) = &DAT_0684b670;
  *(undefined ***)(this + 0xe8) = &PTR_SliderVal_0684b6b8;
  *(undefined **)(this + 0xf0) = &DAT_0684b6d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x120));
  this_02 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_02);
  this[0x144] = (SettingsDialog)0x0;
  this[0x145] = (SettingsDialog)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  fVar20 = (float)FUN_0445ae84(0x43eb0000);
  fVar21 = (float)FUN_0445ae84(DAT_06b09388);
  pLVar2 = gLawnApp;
  iVar6 = *(int *)(gLawnApp + 0xd4);
  iVar5 = FUN_0445ae70(5);
  Sexy::Widget::Resize
            ((Widget *)this,(int)((float)iVar5 + ((float)iVar6 - fVar20) * 0.5),
             (int)(((float)*(int *)(pLVar2 + 0xd8) - fVar21) * 0.5 - (float)iVar5),(int)fVar20,
             (int)fVar21);
  FUN_05478178(aIStack_40,L"[SETTINGS_TITLE]",(Insets *)&local_78);
  pSVar8 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar8,aIStack_40);
  local_a8 = pSVar8;
  FUN_05476c50(aIStack_40);
  nop();
  (**(code **)(*(long *)local_a8 + 0x198))
            (local_a8,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_a8);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)this_00,&local_a8);
  *(undefined8 *)(this + 0x110) = 0;
  this_03 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_03);
  *(SettingsWidgetList **)(this + 0x110) = this_03;
  fVar20 = (float)FUN_0445ae84(0x41c80000);
  fVar21 = (float)FUN_0445ae84(0x42a00000);
  fVar22 = (float)FUN_0445ae84(0x43cc0000);
  fVar23 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets((Insets *)&local_78,(int)fVar20,(int)fVar21,(int)fVar22,(int)fVar23);
  pLVar17 = (LineBreakCategory *)(ulong)local_74;
  pLVar19 = (LineBreakCategory *)(ulong)local_6c;
  pLVar18 = (LineBreakCategory *)(ulong)local_70;
  (**(code **)(**(long **)(this + 0x110) + 0x198))(*(long **)(this + 0x110),local_78);
  auVar26 = LawnApp::GetPlatform(gLawnApp);
  uVar1 = auVar26._0_4_;
  cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar26._0_8_,auVar26._8_8_,pLVar17,pLVar18,pLVar19);
  uVar3 = local_70;
  if (cVar4 == '\0') {
    uVar24 = 0x42820000;
  }
  else {
    uVar24 = 0x42300000;
  }
  fVar20 = (float)FUN_0445ae84(uVar24);
  Sexy::Insets::Insets(aIStack_40,0,0,uVar3,(int)fVar20);
  dVar25 = (double)(**(code **)(*(long *)gLawnApp + 0x1d8))(gLawnApp);
  local_98[0] = (float)dVar25;
  local_88[0] = 0x3f800000;
  local_90._0_4_ = 0;
  pfVar9 = eastl::min_alt<float>((float *)local_88,local_98);
  pfVar9 = eastl::max_alt<float>((float *)&local_90,pfVar9);
  fVar20 = *pfVar9;
  FUN_05478178((Insets *)local_88,L"[OPTIONS_MUSIC_LABEL]",(string *)&local_90);
  iVar6 = (int)this;
  pWVar10 = (Widget *)createSliderWidget(iVar6,(wstring *)0x2,fVar20);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  dVar25 = (double)(**(code **)(*(long *)gLawnApp + 0x1e0))(gLawnApp);
  local_98[0] = (float)dVar25;
  local_90 = (SettingsDialogPane *)((ulong)local_90._4_4_ << 0x20);
  local_88[0] = 0x3f800000;
  pfVar9 = eastl::min_alt<float>((float *)local_88,local_98);
  pfVar9 = eastl::max_alt<float>((float *)&local_90,pfVar9);
  fVar20 = *pfVar9;
  FUN_05478178((Insets *)local_88,L"[OPTIONS_SOUNDFX]",(string *)&local_90);
  pWVar10 = (Widget *)createSliderWidget(iVar6,(wstring *)0x3,fVar20);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_FPS_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)&DAT_00000004,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_HELP_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x7,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  if ((1 < uVar1 - 0xc) && (uVar1 != 0x59)) {
    FUN_05478178((Insets *)local_88,L"[SETTINGS_EULA_TITLE]",(string *)&local_90);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
    pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x8,(Image *)local_88);
    FUN_05476c50((Insets *)local_88);
    nop();
    SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  }
  FUN_05478178((Insets *)local_88,L"[SETTINGS_PRIVACY_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x9,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_TERMS_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0xa,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_PERSONAL_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0xb,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_INVENTORY_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0xc,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  if ((((uVar1 == 1) || ((uVar1 & 0xfffffffd) == 4)) || (uVar1 == 0xa5)) ||
     ((uVar1 - 0x3c < 5 || (uVar1 - 0xb5 < 0xe)))) {
    FUN_05478178((Insets *)local_88,L"[SETTINGS_MOREGAMES_TITLE]",(string *)&local_90);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09178);
    pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0xd,(Image *)local_88);
    FUN_05476c50((Insets *)local_88);
    nop();
    SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  }
  FUN_05478178((Insets *)local_88,L"[SETTINGS_DATASHARING_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0xe,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_GAMECREDITS_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x11,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_ABOUT_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x14,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  FUN_05478178((Insets *)local_88,L"[SETTINGS_DEFINEID_TITLE]",(string *)&local_90);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
  pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x16,(Image *)local_88);
  FUN_05476c50((Insets *)local_88);
  nop();
  SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  cVar4 = LawnApp::IsServiceAvailable(gLawnApp,0x200000);
  if (cVar4 != '\0') {
    FUN_05478178((Insets *)local_88,L"[SETTING_LOGOUT_TITLE]",(string *)&local_90);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09050);
    pWVar10 = (Widget *)createButtonWidget(iVar6,(wstring *)0x17,(Image *)local_88);
    FUN_05476c50((Insets *)local_88);
    nop();
    SettingsWidgetList::AddSettingsWidget(*(SettingsWidgetList **)(this + 0x110),pWVar10);
  }
  SettingsDialogPane::SetContentsWidget(local_a8,*(Widget **)(this + 0x110));
  (**(code **)(**(long **)(this + 0x110) + 0x198))
            (*(long **)(this + 0x110),local_78,local_74,local_70,local_6c);
  FUN_05478178((Insets *)&local_78,&DAT_056f11a8,(Insets *)local_88);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0,this_01,(wstring *)&local_78,(Color *)aIStack_40);
  FUN_05476c50((Insets *)&local_78);
  nop();
  iVar6 = *(int *)(this + 0x50);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  iVar5 = *(int *)(lVar12 + 0x38);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  iVar7 = *(int *)(lVar12 + 0x38);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b090a0);
  Sexy::Insets::Insets((Insets *)local_88,iVar6 - iVar5,0,iVar7,*(int *)(lVar12 + 0x3c));
  (**(code **)(*(long *)pPVar11 + 0x1a0))(pPVar11,(Insets *)local_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b090a0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b09450,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)aIStack_40);
  this_04 = (Util *)(**(code **)(*(long *)local_a8 + 0x60))(local_a8,pPVar11);
  Android::Util::GetPackageName(this_04);
  lVar12 = FUN_05474184(asStack_a0);
  FUN_05475ffc((string *)local_98,asStack_a0,0xf,lVar12 + -0xf);
  uVar13 = FUN_0547429c((string *)local_98);
  uVar14 = FUN_0547429c(Sexy::gSexyAppBase + 0x3d0);
  Sexy::StrFormat("Ver:%s_%s",(string *)&local_90,uVar13,uVar14);
  uVar13 = FUN_0547429c((string *)local_98);
  uVar14 = FUN_0547429c(Sexy::gSexyAppBase + 0x3d0);
  uVar15 = Android::Info::SysGetProductVersionCode();
  Sexy::StrFormat("Ver:%s_%s.%d",aIStack_40,uVar13,uVar14,uVar15 & 0xffffffff);
  FUN_05474278((string *)&local_90,aIStack_40);
  std::string::~string((string *)aIStack_40);
  fVar20 = (float)FUN_0445ae84(0x41c80000);
  fVar21 = (float)FUN_0445ae84(DAT_06b090fc + 90.0);
  fVar22 = (float)FUN_0445ae84(0x43cc0000);
  iVar6 = FUN_0445ae70(0x20);
  Sexy::Insets::Insets((Insets *)&local_78,(int)fVar20,(int)fVar21,(int)fVar22,iVar6);
  this_05 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_05);
  (**(code **)(*(long *)this_05 + 0x1a0))(this_05,(Insets *)&local_78);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::ToWString((string *)&local_90);
  Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar16 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Line
                      (0,0,(float)(int)local_70,uVar13,(Insets *)local_88,1,aIStack_40);
  Sexy::PrimeTextWidget::SetPotentialText(this_05,pPVar16);
  FUN_05476c50((Insets *)local_88);
  (**(code **)(*(long *)local_a8 + 0x60))(local_a8,this_05);
  std::string::~string((string *)&local_90);
  std::string::~string((string *)local_98);
  std::string::~string(asStack_a0);
  FUN_05478178(aIStack_40,&DAT_056f11a8,(Insets *)&local_78);
  pSVar8 = ::operator_new(0xe8);
  SettingsDialogPane::SettingsDialogPane(pSVar8,aIStack_40);
  local_90 = pSVar8;
  FUN_05476c50(aIStack_40);
  nop();
  (**(code **)(*(long *)local_90 + 0x198))
            (local_90,*(undefined4 *)(this + 0x50),0,*(undefined4 *)(this + 0x50),
             *(undefined4 *)(this + 0x54));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_90);
  std::vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>>::push_back
            ((vector<SettingsDialogPane*,std::allocator<SettingsDialogPane*>> *)this_00,
             (SettingsDialogPane **)&local_90);
  FUN_05478178((Insets *)&local_78,&DAT_056f11a8,(Insets *)local_88);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,1,this_01,(wstring *)&local_78,(Color *)aIStack_40);
  FUN_05476c50((Insets *)&local_78);
  nop();
  fVar20 = (float)FUN_0445ae84(0x41c80000);
  fVar21 = (float)FUN_0445ae84(0x42a00000);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09520);
  iVar6 = *(int *)(lVar12 + 0x3c);
  iVar7 = FUN_0445ae70(9);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09520);
  iVar5 = *(int *)(lVar12 + 0x38);
  lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09520);
  Sexy::Insets::Insets
            ((Insets *)local_88,(int)fVar20,(int)((float)iVar7 + (fVar21 - (float)iVar6) * 0.5),
             iVar5,*(int *)(lVar12 + 0x3c));
  (**(code **)(*(long *)pPVar11 + 0x1a0))(pPVar11,(Insets *)local_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b09520,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b09078,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)aIStack_40);
  (**(code **)(*(long *)local_90 + 0x60))(local_90,pPVar11);
  *(undefined4 *)(this + 0x140) = 0;
  TimeLineTrack<float>::Initialize((TimeLineTrack<float> *)(this + 0x120),0.0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupTextBoxPane(std::wstring const&, std::wstring const&, Sexy::PrimeTypeface*,
   Sexy::Color const&, bool) */

void __thiscall
SettingsDialog::setupTextBoxPane
          (SettingsDialog *this,wstring *param_1,wstring *param_2,PrimeTypeface *param_3,
          Color *param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  SettingsWidgetList *this_00;
  PrimeTextWidget *this_01;
  PrimeGlyphMesh *pPVar4;
  SettingsDialogPane *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar5 = (SettingsDialogPane *)*puVar3;
  FUN_05477b24(aIStack_18,param_1);
  SettingsDialogPane::SetTitle(pSVar5,aIStack_18);
  FUN_05476c50(aIStack_18);
  fVar6 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar7 = (float)FUN_0445ae84(0x42a00000);
  fVar8 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar9 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(int)((float)iVar1 + fVar6),(int)fVar7,(int)(fVar8 - (float)iVar2),
             (int)fVar9);
  this_00 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_00);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_38,local_34,local_30,local_2c);
  iVar1 = FUN_0445ae70(8);
  iVar2 = FUN_0445ae70(2);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,local_30 - iVar1,0);
  TodStringTranslate(param_2);
  FUN_05477b24(aIStack_18,auStack_48);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,param_3,aIStack_18,auStack_4c,&local_1c)
  ;
  FUN_05476c50(aIStack_18);
  iVar1 = FUN_0445ae70(10);
  local_1c = local_1c + iVar1;
  this_01 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_01);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar1 = FUN_0445ae70(8);
  fVar6 = (float)local_1c;
  FUN_05477b24(auStack_40,auStack_48);
  Sexy::Insets::Insets(aIStack_18,(Insets *)param_4);
  pPVar4 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     ((float)iVar1,0,(float)local_20,fVar6,param_3,auStack_40,0,0,aIStack_18);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_01,pPVar4);
  FUN_05476c50(auStack_40);
  SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)this_01);
  SettingsWidgetList::SetAutoScroll(this_00,param_5);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_38,local_34,local_30,local_2c);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar3,(Widget *)this_00);
  FUN_05476c50(auStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupLogoutPane() */

void __thiscall SettingsDialog::setupLogoutPane(SettingsDialog *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PrimeText *this_00;
  undefined8 *puVar4;
  SettingsWidgetList *this_01;
  undefined8 uVar5;
  PrimeTextWidget *this_02;
  PrimeGlyphMesh *pPVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  SettingsDialogPane *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  Sexy aSStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  puVar4 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar7 = (SettingsDialogPane *)*puVar4;
  FUN_05478178(aIStack_18,L"[SETTING_LOGOUT_TITLE]",aIStack_28);
  SettingsDialogPane::SetTitle(pSVar7,aIStack_18);
  FUN_05476c50(aIStack_18);
  nop();
  fVar8 = (float)FUN_0445ae84(0x41c80000);
  iVar2 = FUN_0445ae70(4);
  fVar9 = (float)FUN_0445ae84(0x42a00000);
  fVar10 = (float)FUN_0445ae84(0x43cc0000);
  iVar3 = FUN_0445ae70(8);
  fVar11 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(int)((float)iVar2 + fVar8),(int)fVar9,(int)(fVar10 - (float)iVar3)
             ,(int)fVar11);
  this_01 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  iVar2 = FUN_0445ae70(8);
  iVar3 = FUN_0445ae70(2);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,local_30 - iVar2,0);
  FUN_05476574(auStack_50);
  cVar1 = LawnApp::IsGMInfoExtraType(gLawnApp);
  if (cVar1 == '\0') {
    TodStringTranslate(L"[SETTING_LOGOUT_TEXT]");
    FUN_054766c8(auStack_50,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  else {
    LawnApp::GetGMInfoExtraType();
    Sexy::StringToUpper(aSStack_40,extraout_x1);
    Sexy::UTF8StringToWString((Sexy *)aIStack_18,extraout_x1_00);
    std::string::~string((string *)aIStack_18);
    std::string::~string((string *)aSStack_40);
    uVar5 = FUN_054766ec(auStack_48);
    Sexy::StrFormat(L"[SETTING_LOGOUT_TEXT_%s]",aSStack_40,uVar5);
    TodStringTranslate((wstring *)aSStack_40);
    FUN_054766c8(auStack_50,aIStack_18);
    FUN_05476c50(aIStack_18);
    FUN_05476c50(aSStack_40);
    FUN_05476c50(auStack_48);
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(aIStack_18,auStack_50);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar5,aIStack_18,auStack_48,&local_1c);
  FUN_05476c50(aIStack_18);
  iVar2 = FUN_0445ae70(10);
  local_1c = local_1c + iVar2;
  this_02 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_28);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar2 = FUN_0445ae70(8);
  fVar8 = (float)local_30;
  fVar9 = (float)local_2c;
  FUN_05477b24(aSStack_40,auStack_50);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar6 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     ((float)iVar2,0,fVar8,fVar9,uVar5,aSStack_40,0,0,aIStack_18);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_02,pPVar6);
  FUN_05476c50(aSStack_40);
  SettingsWidgetList::AddSettingsWidget(this_01,(Widget *)this_02);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  puVar4 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar4,(Widget *)this_01);
  FUN_05476c50(auStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupAboutPane() */

void __thiscall SettingsDialog::setupAboutPane(SettingsDialog *this)

{
  int iVar1;
  int iVar2;
  PrimeText *this_00;
  undefined8 *puVar3;
  SettingsWidgetList *this_01;
  Info *this_02;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  PrimeTextWidget *this_04;
  PrimeGlyphMesh *pPVar5;
  SettingsDialogPane *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar6 = (SettingsDialogPane *)*puVar3;
  FUN_05478178(asStack_18,L"[SETTINGS_ABOUT_TITLE]",aIStack_28);
  SettingsDialogPane::SetTitle(pSVar6,asStack_18);
  FUN_05476c50(asStack_18);
  nop();
  fVar7 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar8 = (float)FUN_0445ae84(0x42a00000);
  fVar9 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar10 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(int)((float)iVar1 + fVar7),(int)fVar8,(int)(fVar9 - (float)iVar2),
             (int)fVar10);
  this_01 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  iVar1 = FUN_0445ae70(8);
  iVar2 = FUN_0445ae70(2);
  this_02 = (Info *)Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,local_30 - iVar1,0);
  Android::Info::SysGetProductVersion(this_02);
  uVar4 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("Ver:%s",asStack_60,uVar4);
  std::string::~string(asStack_18);
  FUN_05476574(auStack_58);
  LawnApp::GetAboutContentStringId(gLawnApp);
  TodStringTranslate(awStack_50);
  Sexy::ToWString(asStack_60);
  TodReplaceString(awStack_48,L"{VersionName}",awStack_40);
  FUN_054766c8(auStack_58,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_48);
  FUN_05476c50(awStack_50);
  FUN_05477888(auStack_58,&DAT_0570a740);
  this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this_03);
  PurchaseBroker::GetAboutContentStringId();
  thunk_FUN_05477668(auStack_58,asStack_18);
  FUN_05476c50(asStack_18);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(asStack_18,auStack_58);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar4,asStack_18,awStack_48,&local_1c);
  FUN_05476c50(asStack_18);
  iVar1 = FUN_0445ae70(10);
  local_1c = local_1c + iVar1;
  this_04 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_04);
  (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_28);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar1 = FUN_0445ae70(8);
  fVar7 = (float)local_1c;
  FUN_05477b24(awStack_40,auStack_58);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar5 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     ((float)iVar1,0,(float)local_20,fVar7,uVar4,awStack_40,0,0,asStack_18);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_04,pPVar5);
  FUN_05476c50(awStack_40);
  SettingsWidgetList::AddSettingsWidget(this_01,(Widget *)this_04);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar3,(Widget *)this_01);
  FUN_05476c50(auStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupSharingUsagePane() */

void __thiscall SettingsDialog::setupSharingUsagePane(SettingsDialog *this)

{
  int iVar1;
  int iVar2;
  PrimeText *this_00;
  undefined8 *puVar3;
  SettingsWidgetList *this_01;
  undefined8 uVar4;
  PrimeTextWidget *this_02;
  PrimeGlyphMesh *pPVar5;
  Widget *pWVar6;
  bool bVar7;
  SettingsDialogPane *pSVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar8 = (SettingsDialogPane *)*puVar3;
  FUN_05478178(aIStack_18,L"[SETTINGS_DATASHARING_TITLE]",aIStack_28);
  SettingsDialogPane::SetTitle(pSVar8,aIStack_18);
  FUN_05476c50(aIStack_18);
  nop();
  fVar9 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar10 = (float)FUN_0445ae84(0x42a00000);
  fVar11 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar12 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_38,(int)((float)iVar1 + fVar9),(int)fVar10,
             (int)(fVar11 - (float)iVar2),(int)fVar12);
  this_01 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  iVar1 = FUN_0445ae70(8);
  iVar2 = FUN_0445ae70(2);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,local_30 - iVar1,0);
  TodStringTranslate(L"[SETTINGS_DATASHARING_PROMPT]");
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(aIStack_18,auStack_48);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_20,uVar4,aIStack_18,auStack_4c,&local_1c);
  FUN_05476c50(aIStack_18);
  iVar1 = FUN_0445ae70(10);
  local_1c = local_1c + iVar1;
  this_02 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_28);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar1 = FUN_0445ae70(8);
  fVar9 = (float)local_1c;
  FUN_05477b24(auStack_40,auStack_48);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar5 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     ((float)iVar1,0,(float)local_20,fVar9,uVar4,auStack_40,0,0,aIStack_18);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_02,pPVar5);
  FUN_05476c50(auStack_40);
  SettingsWidgetList::AddSettingsWidget(this_01,(Widget *)this_02);
  LawnApp::UserHasDisabledUsageSharing(gLawnApp);
  FUN_05478178(aIStack_18,L"[SETTINGS_DATASHARING_ENABLE]",auStack_40);
  bVar7 = SUB81(aIStack_18,0);
  pWVar6 = (Widget *)createCheckboxWidget((int)this,(wstring *)0xf,bVar7);
  FUN_05476c50(aIStack_18);
  nop();
  SettingsWidgetList::AddSettingsWidget(this_01,pWVar6);
  FUN_05478178(aIStack_18,L"[SETTINGS_DATASHARING_DISABLE]",auStack_40);
  pWVar6 = (Widget *)createCheckboxWidget((int)this,(wstring *)&DAT_00000010,bVar7);
  FUN_05476c50(aIStack_18);
  nop();
  SettingsWidgetList::AddSettingsWidget(this_01,pWVar6);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38,local_34,local_30,local_2c);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar3,(Widget *)this_01);
  FUN_05476c50(auStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupFPSPane() */

void __thiscall SettingsDialog::setupFPSPane(SettingsDialog *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  SettingsWidgetList *this_00;
  Widget *pWVar4;
  bool bVar5;
  SettingsDialogPane *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar6 = (SettingsDialogPane *)*puVar3;
  FUN_05478178((Insets *)&local_18,L"[SETTINGS_FPS_TITLE]",auStack_20);
  SettingsDialogPane::SetTitle(pSVar6,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  nop();
  fVar7 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar8 = (float)FUN_0445ae84(0x42a00000);
  fVar9 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar10 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)((float)iVar1 + fVar7),(int)fVar8,(int)(fVar9 - (float)iVar2),
             (int)fVar10);
  this_00 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_00);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_18,local_14,local_10,local_c);
  (**(code **)(*gLawnApp + 0x358))(gLawnApp);
  FUN_05478178(auStack_20,L"[SETTINGS_FPS_DISABLE]",auStack_28);
  bVar5 = SUB81(auStack_20,0);
  pWVar4 = (Widget *)createCheckboxWidget((int)this,(wstring *)&DAT_00000006,bVar5);
  FUN_05476c50(auStack_20);
  nop();
  SettingsWidgetList::AddSettingsWidget(this_00,pWVar4);
  FUN_05478178(auStack_20,L"[SETTINGS_FPS_ENABLE]",auStack_28);
  pWVar4 = (Widget *)createCheckboxWidget((int)this,(wstring *)0x5,bVar5);
  FUN_05476c50(auStack_20);
  nop();
  SettingsWidgetList::AddSettingsWidget(this_00,pWVar4);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_18,local_14,local_10,local_c);
  puVar3 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar3,(Widget *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsDialog::Update() */

void __thiscall SettingsDialog::Update(SettingsDialog *this)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  
  fVar8 = (float)PVZ_RealT();
  uVar5 = 0;
  fVar8 = (float)TimeLineTrack<float>::GetValueAt((TimeLineTrack<float> *)(this + 0x120),fVar8);
  do {
    uVar7 = *(undefined8 *)(this + 0xf8);
    uVar3 = FUN_0445ae5c(uVar7,*(undefined8 *)(this + 0x100));
    uVar6 = uVar5;
    do {
      if (uVar3 <= uVar6) {
        if (this[0x144] != (SettingsDialog)0x0) {
          setupSharingUsagePane(this);
          this[0x144] = (SettingsDialog)0x0;
        }
        if (this[0x145] != (SettingsDialog)0x0) {
          setupFPSPane(this);
          this[0x145] = (SettingsDialog)0x0;
        }
        if ((*(PVZ2UICreditsScreen **)(this + 0x118) != (PVZ2UICreditsScreen *)0x0) &&
           (cVar1 = PVZ2UICreditsScreen::IsDone(*(PVZ2UICreditsScreen **)(this + 0x118)),
           cVar1 != '\0')) {
          (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))
                    (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x118));
          if (*(long **)(this + 0x118) != (long *)0x0) {
            (**(code **)(**(long **)(this + 0x118) + 0x18))();
            *(undefined8 *)(this + 0x118) = 0;
          }
        }
        return;
      }
      uVar5 = uVar6 + 1;
      iVar4 = (int)((float)(*(int *)(this + 0x50) * (int)uVar6) +
                   (float)*(int *)(this + 0x50) * fVar8);
      plVar2 = (long *)FUN_0445ae68(uVar7,uVar6);
      plVar2 = (long *)*plVar2;
      uVar6 = uVar5;
    } while (iVar4 == (int)plVar2[9]);
    (**(code **)(*plVar2 + 0x1a8))(plVar2,iVar4,0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupUUIDPane() */

void __thiscall SettingsDialog::setupUUIDPane(SettingsDialog *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PrimeText *this_00;
  undefined8 *puVar4;
  SettingsWidgetList *this_01;
  undefined8 uVar5;
  PrimeTextWidget *this_02;
  PrimeGlyphMesh *pPVar6;
  PVZ2UIButton *this_03;
  SalesProgressBar *this_04;
  code *pcVar7;
  SettingsDialogPane *pSVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  int local_88 [2];
  int local_80;
  int local_7c;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  puVar4 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar8 = (SettingsDialogPane *)*puVar4;
  FUN_05478178(aIStack_40,L"[SETTINGS_UUID_BIND_TITLE]",awStack_78);
  SettingsDialogPane::SetTitle(pSVar8,aIStack_40);
  FUN_05476c50(aIStack_40);
  nop();
  fVar9 = (float)FUN_0445ae84(0x41c80000);
  iVar1 = FUN_0445ae70(4);
  fVar10 = (float)FUN_0445ae84(0x42a00000);
  fVar11 = (float)FUN_0445ae84(0x43cc0000);
  iVar2 = FUN_0445ae70(8);
  fVar12 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_98,(int)((float)iVar1 + fVar9),(int)fVar10,
             (int)(fVar11 - (float)iVar2),(int)fVar12);
  this_01 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_01);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,local_98,local_94,local_90,local_8c);
  iVar1 = FUN_0445ae70(8);
  iVar2 = FUN_0445ae70(2);
  Sexy::Insets::Insets((Insets *)local_88,iVar1,iVar2,local_90 - iVar1,0);
  FUN_05476574(auStack_a0);
  TodStringTranslate(L"[UUID_BIND_SETTING_CONTENT]");
  FUN_054766c8(auStack_a0,aIStack_40);
  FUN_05476c50(aIStack_40);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(aIStack_40,auStack_a0);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_80,uVar5,aIStack_40,auStack_a4,&local_7c);
  FUN_05476c50(aIStack_40);
  iVar1 = FUN_0445ae70(10);
  local_7c = local_7c + iVar1;
  this_02 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(this_02);
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(Insets *)local_88);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar1 = FUN_0445ae70(8);
  fVar9 = (float)local_80;
  fVar10 = (float)local_7c;
  FUN_05477b24(awStack_78,auStack_a0);
  Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar6 = (PrimeGlyphMesh *)
           Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                     ((float)iVar1,0,fVar9,fVar10,uVar5,awStack_78,0,0,aIStack_40);
  Sexy::PrimeTextWidget::SetGlyphMesh(this_02,pPVar6);
  FUN_05476c50(awStack_78);
  SettingsWidgetList::AddSettingsWidget(this_01,(Widget *)this_02);
  FUN_05478178(awStack_78,L"[UUID_BIND_TIP_OK]",auStack_a8);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_03 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_03,0x2b5c,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b09390,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b09100,3);
  PVZ2UIButton::SetDialogStates(this_03,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  iVar2 = FUN_0445ae70(0xa6);
  pcVar7 = *(code **)(*(long *)this_03 + 0x198);
  iVar1 = FUN_0445ae70(8);
  iVar1 = iVar1 + local_88[0] + local_7c;
  this_04 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09390);
  uVar3 = SalesProgressBar::GetCurrentLevel(this_04);
  (*pcVar7)(this_03,(local_80 - iVar2) / 2,iVar1,iVar2,uVar3);
  SettingsWidgetList::AddSettingsCustomWidget(this_01,(Widget *)this_03);
  puVar4 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar4,(Widget *)this_01);
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::setupDefineIDPane() */

void __thiscall SettingsDialog::setupDefineIDPane(SettingsDialog *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  SettingsWidgetList *this_00;
  undefined8 uVar9;
  PrimeTextWidget *pPVar10;
  PrimeGlyphMesh *pPVar11;
  long lVar12;
  string *psVar13;
  DefineIDMgr *this_01;
  char *__s1;
  PVZ2UIButton *this_02;
  SalesProgressBar *this_03;
  size_t __n;
  code *pcVar14;
  SettingsDialogPane *pSVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint local_dc;
  uint local_d8;
  undefined1 auStack_d4 [4];
  wstring awStack_d0 [8];
  wstring awStack_c8 [8];
  wstring awStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  int local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  Insets aIStack_88 [8];
  int local_80;
  int local_7c;
  Insets aIStack_78 [8];
  int local_70;
  int local_6c [11];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar8 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  pSVar15 = (SettingsDialogPane *)*puVar8;
  FUN_05478178(aIStack_40,L"[SETTINGS_DEFINEID_TITLE]",aIStack_78);
  SettingsDialogPane::SetTitle(pSVar15,aIStack_40);
  FUN_05476c50(aIStack_40);
  nop();
  fVar16 = (float)FUN_0445ae84(0x41c80000);
  iVar2 = FUN_0445ae70(4);
  fVar17 = (float)FUN_0445ae84(0x42a00000);
  fVar18 = (float)FUN_0445ae84(0x43cc0000);
  iVar3 = FUN_0445ae70(8);
  fVar19 = (float)FUN_0445ae84(DAT_06b090fc);
  Sexy::Insets::Insets
            ((Insets *)&local_98,(int)((float)iVar2 + fVar16),(int)fVar17,
             (int)(fVar18 - (float)iVar3),(int)fVar19);
  this_00 = ::operator_new(0x110);
  SettingsWidgetList::SettingsWidgetList(this_00);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_98,local_94,local_90,local_8c);
  iVar3 = FUN_0445ae70(8);
  iVar4 = FUN_0445ae70(2);
  iVar2 = local_90;
  iVar5 = FUN_0445ae70(0x19);
  Sexy::Insets::Insets(aIStack_78,iVar3,iVar4,iVar2 - iVar5,0);
  TodStringTranslate(L"[SETTINGS_USERID_PROMPT]");
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(aIStack_40,asStack_a0);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_70,uVar9,aIStack_40,asStack_a8,local_6c);
  FUN_05476c50(aIStack_40);
  iVar2 = FUN_0445ae70(10);
  local_6c[0] = local_6c[0] + iVar2;
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10);
  (**(code **)(*(long *)pPVar10 + 0x1a0))(pPVar10,aIStack_78);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar2 = FUN_0445ae70(8);
  fVar16 = (float)local_70;
  fVar17 = (float)local_6c[0];
  FUN_05477b24(aIStack_88,asStack_a0);
  Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar11 = (PrimeGlyphMesh *)
            Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                      ((float)iVar2,0,fVar16,fVar17,uVar9,aIStack_88,0,0,aIStack_40);
  Sexy::PrimeTextWidget::SetGlyphMesh(pPVar10,pPVar11);
  FUN_05476c50(aIStack_88);
  SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)pPVar10);
  FUN_05476c50(asStack_a0);
  FUN_05476574(awStack_d0);
  iVar3 = FUN_0445ae70(8);
  iVar4 = FUN_0445ae70(0x66);
  iVar2 = local_90;
  iVar5 = FUN_0445ae70(0x19);
  Sexy::Insets::Insets(aIStack_78,iVar3,iVar4,iVar2 - iVar5,0);
  uVar9 = LawnApp::GetProfileCreatedTime(gLawnApp);
  FUN_05475d88(asStack_a8,uVar9);
  lVar12 = FUN_05474184(asStack_a8);
  if (lVar12 != 0) {
    uVar9 = FUN_0547429c(asStack_a8);
    Sexy::StrFormat("Registration Date: \n%s",aIStack_40,uVar9);
    Sexy::ToWString((string *)aIStack_40);
    std::string::~string((string *)aIStack_40);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    FUN_05477b24(aIStack_40,asStack_a0);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)local_70,uVar9,aIStack_40,asStack_b0,local_6c);
    FUN_05476c50(aIStack_40);
    iVar2 = FUN_0445ae70(10);
    local_6c[0] = local_6c[0] + iVar2;
    pPVar10 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10);
    (**(code **)(*(long *)pPVar10 + 0x1a0))(pPVar10,aIStack_78);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    iVar2 = FUN_0445ae70(8);
    fVar16 = (float)local_70;
    fVar17 = (float)local_6c[0];
    FUN_05477b24(aIStack_88,asStack_a0);
    Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
    pPVar11 = (PrimeGlyphMesh *)
              Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                        ((float)iVar2,0,fVar16,fVar17,uVar9,aIStack_88,0,0,aIStack_40);
    Sexy::PrimeTextWidget::SetGlyphMesh(pPVar10,pPVar11);
    FUN_05476c50(aIStack_88);
    SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)pPVar10);
    FUN_05476c50(asStack_a0);
  }
  std::string::~string(asStack_a8);
  psVar13 = (string *)GetDisplayID();
  Sexy::ToWString(psVar13);
  iVar3 = FUN_0445ae70(8);
  iVar4 = FUN_0445ae70(0x34);
  iVar2 = local_90;
  iVar5 = FUN_0445ae70(0x19);
  Sexy::Insets::Insets(aIStack_78,iVar3,iVar4,iVar2 - iVar5,0);
  this_01 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetNewUserDefineID(this_01);
  lVar12 = FUN_05474184(asStack_b0);
  if (lVar12 != 0) {
    bVar1 = std::operator==(awStack_c8,L"unknow");
    if (bVar1) {
      FUN_05475d88(asStack_a8,asStack_b0);
      GetEncryptIDString(asStack_a0,asStack_a8,s_encryptIndex);
      uVar9 = FUN_0547429c(asStack_a0);
      Sexy::StrFormat("DeviceID: %s",aIStack_88,uVar9);
      Sexy::ToWString((string *)aIStack_88);
      FUN_054766c8(awStack_c8,aIStack_40);
      FUN_05476c50(aIStack_40);
      std::string::~string((string *)aIStack_88);
      std::string::~string(asStack_a0);
      std::string::~string(asStack_a8);
    }
    else {
      thunk_FUN_05477b9c(awStack_c8,awStack_c8);
    }
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    FUN_05477b24(aIStack_40,awStack_c8);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)local_70,uVar9,aIStack_40,asStack_a0,local_6c);
    FUN_05476c50(aIStack_40);
    iVar2 = FUN_0445ae70(10);
    local_6c[0] = local_6c[0] + iVar2;
    pPVar10 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10);
    (**(code **)(*(long *)pPVar10 + 0x1a0))(pPVar10,aIStack_78);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    iVar2 = FUN_0445ae70(8);
    fVar16 = (float)local_70;
    fVar17 = (float)local_6c[0];
    FUN_05477b24(aIStack_88,awStack_c8);
    Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
    pPVar11 = (PrimeGlyphMesh *)
              Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                        ((float)iVar2,0,fVar16,fVar17,uVar9,aIStack_88,0,0,aIStack_40);
    Sexy::PrimeTextWidget::SetGlyphMesh(pPVar10,pPVar11);
    FUN_05476c50(aIStack_88);
    SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)pPVar10);
    Sexy::ToString(awStack_c8);
    uVar9 = FUN_0547429c(aIStack_40);
    Sexy::OutputDebugStrF((wchar_t *)"Description",uVar9);
    thunk_FUN_05477668(awStack_d0,awStack_c8);
    FUN_05477888(awStack_d0,&DAT_0570a740);
    std::string::~string((string *)aIStack_40);
  }
  std::string::~string(asStack_b0);
  psVar13 = (string *)GetDisplayUUID();
  Sexy::ToWString(psVar13);
  iVar3 = FUN_0445ae70(8);
  iVar4 = FUN_0445ae70(0x66);
  iVar2 = local_90;
  iVar5 = FUN_0445ae70(0x19);
  Sexy::Insets::Insets(aIStack_78,iVar3,iVar4,iVar2 - iVar5,0);
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  Sexy::IAsyncNetworkTask::GetName();
  lVar12 = FUN_05474184(asStack_b0);
  if (lVar12 != 0) {
    bVar1 = std::operator==(awStack_c0,L"unknow");
    if (bVar1) {
      FUN_05475d88(asStack_a8,asStack_b0);
      GetEncryptIDString(asStack_a0,asStack_a8,s_encryptIndex);
      uVar9 = FUN_0547429c(asStack_a0);
      Sexy::StrFormat("UUID: %s",aIStack_88,uVar9);
      Sexy::ToWString((string *)aIStack_88);
      FUN_054766c8(awStack_c0,aIStack_40);
      FUN_05476c50(aIStack_40);
      std::string::~string((string *)aIStack_88);
      std::string::~string(asStack_a0);
      std::string::~string(asStack_a8);
    }
    else {
      thunk_FUN_05477b9c(awStack_c0,awStack_c0);
    }
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    FUN_05477b24(aIStack_40,awStack_c0);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)local_70,uVar9,aIStack_40,asStack_a0,local_6c);
    FUN_05476c50(aIStack_40);
    iVar2 = FUN_0445ae70(10);
    local_6c[0] = local_6c[0] + iVar2;
    pPVar10 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10);
    (**(code **)(*(long *)pPVar10 + 0x1a0))(pPVar10,aIStack_78);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    iVar2 = FUN_0445ae70(8);
    fVar16 = (float)local_6c[0];
    FUN_05477b24(aIStack_88,awStack_c0);
    Sexy::Insets::Insets(aIStack_40,(Insets *)&PrimeText_Game::Color_Description_Brown);
    pPVar11 = (PrimeGlyphMesh *)
              Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                        ((float)iVar2,0,(float)local_70,fVar16,uVar9,aIStack_88,0,0,aIStack_40);
    Sexy::PrimeTextWidget::SetGlyphMesh(pPVar10,pPVar11);
    FUN_05476c50(aIStack_88);
    SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)pPVar10);
    Sexy::ToString(awStack_c0);
    uVar9 = FUN_0547429c(aIStack_40);
    Sexy::OutputDebugStrF((wchar_t *)"DescriptionUUID",uVar9);
    thunk_FUN_05477668(awStack_d0,awStack_c0);
    FUN_05477888(awStack_d0,&DAT_0570a740);
    std::string::~string((string *)aIStack_40);
  }
  std::string::~string(asStack_b0);
  iVar3 = FUN_0445ae70(8);
  uVar6 = FUN_0445ae70(0x66);
  iVar2 = local_90;
  __n = (size_t)uVar6;
  iVar4 = FUN_0445ae70(0x19);
  Sexy::Insets::Insets(aIStack_88,iVar3,uVar6,iVar2 - iVar4,0);
  _NetworkEventConfig::_NetworkEventConfig((_NetworkEventConfig *)aIStack_40);
  FUN_05475d88(asStack_b8,aIStack_40);
  Set8BytesTo0(asStack_b0);
  __s1 = (char *)FUN_0547429c(asStack_b8);
  iVar2 = strcmp(__s1,"http://192.168.10.142:8085/index.php?");
  if (iVar2 == 0) {
    std::string::append(asStack_b0,"Android_DEV",__n);
  }
  else {
    iVar2 = strcmp(__s1,"http://192.168.140.131/pvz2single/index.php");
    if (iVar2 == 0) {
      std::string::append(asStack_b0,"Android_QA",__n);
    }
    else {
      iVar2 = strcmp(__s1,"http://cloudpvz2android.ditwan.cn/index.php");
      if (iVar2 == 0) {
        std::string::append(asStack_b0,"Android_PD",__n);
      }
      else {
        iVar2 = strcmp(__s1,"http://192.168.2.228/pvz2ios/index.php?");
        if (iVar2 == 0) {
          std::string::append(asStack_b0,"IOS_DEV",__n);
        }
        else {
          iVar2 = strcmp(__s1,"http://192.168.140.130:8083/index.php?");
          if (iVar2 == 0) {
            std::string::append(asStack_b0,"IOS_QA",__n);
          }
          else {
            iVar2 = strcmp(__s1,"https://cloud.pvz2ios.popcap.com.cn");
            if (iVar2 == 0) {
              std::string::append(asStack_b0,"IOS_PD",__n);
            }
            else {
              thunk_FUN_05475e00(asStack_b0,asStack_b8);
            }
          }
        }
      }
    }
  }
  local_dc = 0;
  local_d8 = 0;
  Android::Graphics::GetScreenSizeInPixels
            (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),(int *)&local_dc,(int *)&local_d8);
  uVar9 = FUN_0547429c(asStack_b0);
  Sexy::StrFormat("Server: %s; ScreenSize: %dx%d",aIStack_78,uVar9,(ulong)local_dc,(ulong)local_d8);
  Sexy::ToWString((string *)aIStack_78);
  std::string::~string((string *)aIStack_78);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  FUN_05477b24(aIStack_78,asStack_a8);
  Sexy::PrimeTypeface::SizeString_Paragraph((float)local_80,uVar9,aIStack_78,auStack_d4,&local_7c);
  FUN_05476c50(aIStack_78);
  iVar2 = FUN_0445ae70(10);
  local_7c = local_7c + iVar2;
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10);
  (**(code **)(*(long *)pPVar10 + 0x1a0))(pPVar10,aIStack_88);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  iVar2 = FUN_0445ae70(8);
  fVar16 = (float)local_7c;
  FUN_05477b24(asStack_a0,asStack_a8);
  Sexy::Insets::Insets(aIStack_78,(Insets *)&PrimeText_Game::Color_Description_Brown);
  pPVar11 = (PrimeGlyphMesh *)
            Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                      ((float)iVar2,0,(float)local_80,fVar16,uVar9,asStack_a0,0,0,aIStack_78);
  Sexy::PrimeTextWidget::SetGlyphMesh(pPVar10,pPVar11);
  FUN_05476c50(asStack_a0);
  SettingsWidgetList::AddSettingsWidget(this_00,(Widget *)pPVar10);
  FUN_05476c50(asStack_a8);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_40);
  FUN_05478178(aIStack_78,L"[PVZ_COPY_INFO]",aIStack_88);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,0x2b5d,(ButtonListener *)(this + 0xe0),(wstring *)aIStack_78,
             (Color *)aIStack_40);
  FUN_05476c50(aIStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b09390,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b09100,3);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)aIStack_40);
  iVar4 = FUN_0445ae70(0xa6);
  iVar3 = local_90 - iVar4;
  pcVar14 = *(code **)(*(long *)this_02 + 0x198);
  iVar2 = FUN_0445ae70(0x14);
  iVar2 = iVar2 + local_98 + local_8c;
  this_03 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09390);
  uVar7 = SalesProgressBar::GetCurrentLevel(this_03);
  (*pcVar14)(this_02,iVar3 / 2,iVar2,iVar4,uVar7);
  SettingsWidgetList::AddSettingsCustomWidget(this_00,(Widget *)this_02);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,local_98,local_94,local_90,local_8c);
  puVar8 = (undefined8 *)FUN_0445ae68(*(undefined8 *)(this + 0xf8),1);
  SettingsDialogPane::SetContentsWidget((SettingsDialogPane *)*puVar8,(Widget *)this_00);
  psVar13 = (string *)gLawnApp;
  Sexy::ToString(awStack_d0);
  Sexy::SexyAppBase::CopyToClipboard(psVar13);
  std::string::~string((string *)aIStack_40);
  FUN_05476c50(awStack_c0);
  FUN_05476c50(awStack_c8);
  FUN_05476c50(awStack_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::scrollRight() */

void __thiscall SettingsDialog::scrollRight(SettingsDialog *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x140) == 0) {
    this_00 = (TimeLineTrack<float> *)(this + 0x120);
    SettingsWidgetList::SetAllEnabled(*(SettingsWidgetList **)(this + 0x110),false);
    *(int *)(this + 0x140) = *(int *)(this + 0x140) + 1;
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = -1.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::scrollLeft() */

void __thiscall SettingsDialog::scrollLeft(SettingsDialog *this)

{
  TimeLineTrack<float> *this_00;
  float fVar1;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x140) == 1) {
    this_00 = (TimeLineTrack<float> *)(this + 0x120);
    SettingsWidgetList::SetAllEnabled(*(SettingsWidgetList **)(this + 0x110),true);
    *(int *)(this + 0x140) = *(int *)(this + 0x140) + -1;
    fVar1 = (float)PVZ_RealT();
    local_10[0] = (float)TimeLineTrack<float>::GetValueAt(this_00,fVar1);
    TimeLineTrack<float>::Initialize(this_00,local_10[0]);
    PVZ_RealT();
    TimeLineTrack<float>::AddKeyFrame(this_00,local_10,4);
    fVar1 = (float)PVZ_RealT();
    local_10[1] = 0.0;
    TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)(fVar1 + 0.2),this_00,local_10 + 1,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialog::ButtonDepress(int) */

void __thiscall SettingsDialog::ButtonDepress(SettingsDialog *this,int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  AccountRemoveMgr *this_00;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  IdentifierMgr *this_02;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0:
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_X_Close_Release");
    this[0x6c] = (SettingsDialog)0x0;
    goto LAB_04460288;
  case 1:
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Settings_Tab_Back_Release");
    break;
  default:
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Settings_Tab_Release");
    if (param_1 == 0xd) {
      LawnApp::LaunchMoreGamesWebpage();
      goto LAB_04460288;
    }
    if (0xd < param_1) {
      if (param_1 == 0x14) {
        if (*(long *)(this + 0x118) == 0) {
          setupAboutPane(this);
          scrollRight(this);
        }
        goto LAB_04460288;
      }
      if (0x14 < param_1) {
        if (param_1 == 0x17) {
          if (*(long *)(this + 0x118) == 0) {
            this_00 = (AccountRemoveMgr *)Sexy::LazySingleton<AccountRemoveMgr>::GetInstance();
            AccountRemoveMgr::TryCheckAccount(this_00,true);
          }
        }
        else if (param_1 < 0x18) {
          if (param_1 == 0x15) {
            if (*(long *)(this + 0x118) == 0) {
              setupUUIDPane(this);
              scrollRight(this);
            }
          }
          else if ((param_1 == 0x16) && (*(long *)(this + 0x118) == 0)) {
            setupDefineIDPane(this);
            scrollRight(this);
          }
        }
        else if (param_1 == 0x2b5c) {
          if (*(long *)(this + 0x118) == 0) {
            this_02 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
            IdentifierMgr::TryBind(this_02);
          }
        }
        else if ((param_1 == 0x2b5d) && (*(long *)(this + 0x118) == 0)) {
          iVar1 = FUN_0445ae70(300);
          iVar2 = FUN_0445ae70(0xdc);
          this_01 = (PVZ2UIDialog *)
                    LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
          FUN_05478178(awStack_50,L"[HINT_DEFAULT_TITLE]",auStack_58);
          PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
          FUN_05476c50(awStack_50);
          nop();
          FUN_05478178(awStack_50,L"[PVZ_COPY_COMPLETE]",auStack_58);
          PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
          FUN_05476c50(awStack_50);
          nop();
          pPVar4 = (PrimeTypeface *)
                   PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZShaoEr_28_Outline);
          PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
          pPVar4 = (PrimeTypeface *)
                   PrimeText_PotentialTypeface::Typeface
                             (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
          Sexy::Color::Color((Color *)awStack_50,1);
          PVZ2UIDialog::SetFooterFont(this_01,pPVar4,(Color *)awStack_50);
          PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
          FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
          PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
          FUN_05476c50(auStack_58);
          nop();
        }
        goto LAB_04460288;
      }
      if (param_1 == 0x11) goto LAB_044602c0;
      if (param_1 < 0x12) {
        if ((param_1 == 0xe) && (*(long *)(this + 0x118) == 0)) {
          setupSharingUsagePane(this);
          scrollRight(this);
        }
        goto LAB_04460288;
      }
      if (param_1 == 0x12) goto LAB_044602e0;
      if (param_1 != 0x13) goto LAB_04460288;
      goto LAB_04460310;
    }
    if (param_1 == 8) {
      LawnApp::LaunchEULAWebpage(gLawnApp);
      goto LAB_04460288;
    }
    if (8 < param_1) {
      if (param_1 == 10) {
        LawnApp::LaunchTermsOfServiceWebpage(gLawnApp);
      }
      else if (param_1 < 10) {
        LawnApp::LaunchPrivacyWebpage(gLawnApp);
      }
      else if (param_1 == 0xb) {
        LawnApp::LaunchPersonalWebpage(gLawnApp);
      }
      else if (param_1 == 0xc) {
        LawnApp::LaunchInventoryWebpage(gLawnApp);
      }
      goto LAB_04460288;
    }
    if (param_1 != 1) {
      if (param_1 < 2) {
        if (param_1 == 0) {
          this[0x6c] = (SettingsDialog)0x0;
        }
      }
      else if (param_1 == 4) {
        if (*(long *)(this + 0x118) == 0) {
          setupFPSPane(this);
          scrollRight(this);
        }
      }
      else if ((param_1 == 7) && (*(long *)(this + 0x118) == 0)) {
        setupHelpPane(this);
        scrollRight(this);
      }
      goto LAB_04460288;
    }
    break;
  case 0x11:
    if (*(int *)(this + 0x140) == 0) {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Main_Credits_Release");
    }
LAB_044602c0:
    setupCredits(this);
    goto LAB_04460288;
  case 0x12:
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Settings_Tab_Back_Release");
LAB_044602e0:
    if (*(long *)(this + 0x118) == 0) {
      nop();
      scrollRight(this);
    }
    goto LAB_04460288;
  case 0x13:
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Settings_Tab_Back_Release");
LAB_04460310:
    if (*(long *)(this + 0x118) == 0) {
      nop();
      scrollRight(this);
    }
    goto LAB_04460288;
  }
  scrollLeft(this);
LAB_04460288:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SettingsDialog::ButtonDepress(int) */

void __thiscall SettingsDialog::ButtonDepress(SettingsDialog *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}

