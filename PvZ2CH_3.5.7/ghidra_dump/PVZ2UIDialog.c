// Class: PVZ2UIDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::~PVZ2UIDialog() */

void __thiscall PVZ2UIDialog::~PVZ2UIDialog(PVZ2UIDialog *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_068376f8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068373b0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::~PVZ2UIDialog() */

void __thiscall PVZ2UIDialog::~PVZ2UIDialog(PVZ2UIDialog *this)

{
  ~PVZ2UIDialog(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIDialog::Update() */

void __thiscall PVZ2UIDialog::Update(PVZ2UIDialog *this)

{
  int iVar1;
  
  iVar1 = FUN_04373ba8(*(undefined8 *)(this + 0x198),*(undefined8 *)(this + 0x1a8));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 400));
  return;
}


/* PVZ2UIDialog::ClearButtons() */

void __thiscall PVZ2UIDialog::ClearButtons(PVZ2UIDialog *this)

{
  Widget_ButtonList::ClearButtons(*(Widget_ButtonList **)(this + 0xe8));
  return;
}


/* PVZ2UIDialog::AddButton(PVZ2UIButton*, std::function<void ()>&&) */

PVZ2UIButton * __thiscall
PVZ2UIDialog::AddButton(PVZ2UIDialog *this,PVZ2UIButton *param_1,function *param_2)

{
  function *extraout_x0;
  
  nop();
  Widget_ButtonList::AddButton
            (*(Widget_ButtonList **)(this + 0xe8),param_1,extraout_x0,
             (ButtonListener *)(this + 0xd8));
  this[0xe0] = (PVZ2UIDialog)0x1;
  return param_1;
}


/* PVZ2UIDialog::SetButtonCallback(PVZ2UIButton*, std::function<void ()>&&) */

void __thiscall
PVZ2UIDialog::SetButtonCallback(PVZ2UIDialog *this,PVZ2UIButton *param_1,function *param_2)

{
  function *extraout_x0;
  
  nop();
  Widget_ButtonList::SetButtonCallback(*(Widget_ButtonList **)(this + 0xe8),param_1,extraout_x0);
  return;
}


/* PVZ2UIDialog::HasButton(int) */

void __thiscall PVZ2UIDialog::HasButton(PVZ2UIDialog *this,int param_1)

{
  Widget_ButtonList::HasButton(*(Widget_ButtonList **)(this + 0xe8),param_1);
  return;
}


/* PVZ2UIDialog::GetButton(int) */

void __thiscall PVZ2UIDialog::GetButton(PVZ2UIDialog *this,int param_1)

{
  Widget_ButtonList::GetButton(*(Widget_ButtonList **)(this + 0xe8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::SetHeaderLabel(std::wstring const&) */

void __thiscall PVZ2UIDialog::SetHeaderLabel(PVZ2UIDialog *this,wstring *param_1)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0xf8,auStack_10);
  FUN_05476c50(auStack_10);
  lVar1 = ___stack_chk_guard;
  this[0xe0] = (PVZ2UIDialog)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::SetFooterLabel(std::wstring const&) */

void __thiscall PVZ2UIDialog::SetFooterLabel(PVZ2UIDialog *this,wstring *param_1)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x100,auStack_10);
  FUN_05476c50(auStack_10);
  lVar1 = ___stack_chk_guard;
  this[0xe0] = (PVZ2UIDialog)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::SetFooterSeparator(bool) */

void __thiscall PVZ2UIDialog::SetFooterSeparator(PVZ2UIDialog *this,bool param_1)

{
  this[0x11c] = (PVZ2UIDialog)param_1;
  return;
}


/* PVZ2UIDialog::SetFooterBottomPadding(int) */

void __thiscall PVZ2UIDialog::SetFooterBottomPadding(PVZ2UIDialog *this,int param_1)

{
  *(int *)(this + 0x154) = param_1;
  return;
}


/* PVZ2UIDialog::SetBackgroundDarken(bool, float) */

void __thiscall PVZ2UIDialog::SetBackgroundDarken(PVZ2UIDialog *this,bool param_1,float param_2)

{
  *(float *)(this + 0x120) = param_2;
  this[0x11d] = (PVZ2UIDialog)param_1;
  return;
}


/* PVZ2UIDialog::SetHeaderFont(Sexy::Font*, Sexy::Color const&) */

void __thiscall PVZ2UIDialog::SetHeaderFont(PVZ2UIDialog *this,Font *param_1,Color *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  DAT_06afd650 = param_1;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  DAT_06afd5e8 = param_1;
  return;
}


/* PVZ2UIDialog::SetHeaderFont(Sexy::PrimeTypeface*, Sexy::Color const&) */

void __thiscall
PVZ2UIDialog::SetHeaderFont(PVZ2UIDialog *this,PrimeTypeface *param_1,Color *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  DAT_06afd640 = param_1;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1d0) = uVar1;
  DAT_06afd5d8 = param_1;
  return;
}


/* PVZ2UIDialog::SetFooterFont(Sexy::Font*, Sexy::Color const&) */

void __thiscall PVZ2UIDialog::SetFooterFont(PVZ2UIDialog *this,Font *param_1,Color *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  DAT_06afd648 = param_1;
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  DAT_06afd5e0 = param_1;
  return;
}


/* PVZ2UIDialog::SetFooterFont(Sexy::PrimeTypeface*, Sexy::Color const&) */

void __thiscall
PVZ2UIDialog::SetFooterFont(PVZ2UIDialog *this,PrimeTypeface *param_1,Color *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  DAT_06afd638 = param_1;
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  DAT_06afd5d0 = param_1;
  return;
}


/* PVZ2UIDialog::SetFooterAlign(DrawStringJustification) */

void __thiscall PVZ2UIDialog::SetFooterAlign(PVZ2UIDialog *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x184) = param_2;
  return;
}


/* PVZ2UIDialog::SetHeaderHeight(int) */

void __thiscall PVZ2UIDialog::SetHeaderHeight(PVZ2UIDialog *this,int param_1)

{
  *(float *)(this + 0x10c) = (float)param_1;
  return;
}


/* PVZ2UIDialog::SetFooterHeight(int) */

void __thiscall PVZ2UIDialog::SetFooterHeight(PVZ2UIDialog *this,int param_1)

{
  *(float *)(this + 0x108) = (float)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::SetImage(Sexy::Image*, Sexy::Point) */

void __thiscall PVZ2UIDialog::SetImage(PVZ2UIDialog *this,undefined8 param_1,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(undefined8 *)(this + 0x168) = *param_3;
  *(undefined8 *)(this + 0x160) = param_1;
  local_8 = ___stack_chk_guard;
  this[0x158] = (PVZ2UIDialog)0x1;
  Sexy::Color::Color((Color *)&local_18,1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  *(undefined4 *)(this + 0x180) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::SetImageColor(Sexy::Color) */

void __thiscall PVZ2UIDialog::SetImageColor(PVZ2UIDialog *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x170) = *param_2;
  *(undefined8 *)(this + 0x178) = uVar1;
  return;
}


/* PVZ2UIDialog::SetImageScale(float) */

void __thiscall PVZ2UIDialog::SetImageScale(PVZ2UIDialog *this,float param_1)

{
  *(float *)(this + 0x180) = param_1;
  return;
}


/* PVZ2UIDialog::SetContents(Sexy::Widget*) */

void __thiscall PVZ2UIDialog::SetContents(PVZ2UIDialog *this,Widget *param_1)

{
  (**(code **)(*(long *)this + 0x60))();
  *(Widget **)(this + 0xf0) = param_1;
  this[0xe0] = (PVZ2UIDialog)0x1;
  return;
}


/* PVZ2UIDialog::GetContents() const */

undefined8 __thiscall PVZ2UIDialog::GetContents(PVZ2UIDialog *this)

{
  return *(undefined8 *)(this + 0xf0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::drawFooter(Sexy::Graphics*) */

void __thiscall PVZ2UIDialog::drawFooter(PVZ2UIDialog *this,Graphics *param_1)

{
  PVZ2UIDialog *pPVar1;
  char cVar2;
  long lVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  pPVar1 = this + 0x100;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_054765e8(pPVar1);
  if (cVar2 == '\0') {
    lVar3 = *(long *)(DAT_06afd6c0 + 0x30);
    if (lVar3 == 0) {
      lVar3 = *(long *)(DAT_06afd6c0 + 0x20);
      if (lVar3 != 0) {
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1d8));
        WriteWordInRect(param_1,pPVar1,this + 0x134,lVar3,aIStack_18,*(undefined4 *)(this + 0x184),1
                       );
      }
    }
    else {
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1d8));
      WriteWordInRect(param_1,pPVar1,this + 0x134,lVar3,aIStack_18,*(undefined4 *)(this + 0x184),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::Hide(unsigned int) */

void __thiscall PVZ2UIDialog::Hide(PVZ2UIDialog *this,uint param_1)

{
  *(uint *)(this + 0x114) = param_1;
  return;
}


/* PVZ2UIDialog::DrawButtonsManually(Sexy::Graphics*) */

void __thiscall PVZ2UIDialog::DrawButtonsManually(PVZ2UIDialog *this,Graphics *param_1)

{
  Widget_ButtonList::DrawButtonsManually(*(Widget_ButtonList **)(this + 0xe8),param_1);
  return;
}


/* PVZ2UIDialog::SetButtonsVisible(bool) */

void PVZ2UIDialog::SetButtonsVisible(bool param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0xe8) + 0x158))(*(long **)((ulong)param_1 + 0xe8));
  return;
}


/* PVZ2UIDialog::SetUpdateCallBack(Sexy::Delegate0) */

void __thiscall PVZ2UIDialog::SetUpdateCallBack(PVZ2UIDialog *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 400),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::drawImage(Sexy::Graphics*) */

void __thiscall PVZ2UIDialog::drawImage(PVZ2UIDialog *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
  Sexy::Graphics::SetScale
            (param_1,*(float *)(this + 0x180),*(float *)(this + 0x180),(float)*(int *)(this + 0x168)
             ,(float)*(int *)(this + 0x16c));
  Sexy::Point::Point((Point *)&local_10,(TPoint *)(this + 0x168));
  local_10 = (int)((float)local_10 +
                  (float)*(int *)(*(long *)(this + 0x160) + 0x38) * (1.0 - *(float *)(this + 0x180))
                  * 0.5);
  local_c = (int)((float)local_c +
                 (1.0 - *(float *)(this + 0x180)) * (float)*(int *)(*(long *)(this + 0x160) + 0x3c)
                 * 0.5);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x170));
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x160),local_10,local_c);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::GetButtonRegion() */

Insets * PVZ2UIDialog::GetButtonRegion(void)

{
  undefined4 uVar1;
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8);
  uVar1 = *(undefined4 *)(in_x0 + 0x50);
  *(undefined4 *)in_x8 = 0;
  *(undefined4 *)(in_x8 + 8) = uVar1;
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AutoCenter() */

void __thiscall PVZ2UIDialog::AutoCenter(PVZ2UIDialog *this)

{
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(gLawnApp + 0x71c));
  (**(code **)(*(long *)this + 0x198))
            (this,(local_10 - *(int *)(this + 0x50)) / 2,(local_c - *(int *)(this + 0x54)) / 2,
             *(int *)(this + 0x50),*(int *)(this + 0x54));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::drawHeader(Sexy::Graphics*) */

void __thiscall PVZ2UIDialog::drawHeader(PVZ2UIDialog *this,Graphics *param_1)

{
  PVZ2UIDialog *pPVar1;
  char cVar2;
  long lVar3;
  PrimeTypeface *pPVar4;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  pPVar1 = this + 0xf8;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_054765e8(pPVar1);
  if (cVar2 == '\0') {
    lVar3 = *(long *)(DAT_06afd6c0 + 0x38);
    if (lVar3 == 0) {
      pPVar4 = *(PrimeTypeface **)(DAT_06afd6c0 + 0x28);
      if (pPVar4 != (PrimeTypeface *)0x0) {
        Sexy::Insets::Insets(aIStack_28,(Insets *)(this + 0x144));
        FUN_05477b24(auStack_30,pPVar1);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1c8));
        Sexy::PrimeTypeface::DrawString_Paragraph
                  (pPVar4,param_1,aIStack_28,auStack_30,1,1,aIStack_18,0);
        FUN_05476c50(auStack_30);
      }
    }
    else {
      Sexy::Insets::Insets(aIStack_28,(Insets *)(this + 0x144));
      FUN_05477b24(auStack_30,pPVar1);
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1c8));
      Sexy::Font::DrawString_Paragraph(lVar3,param_1,aIStack_28,auStack_30,1,1,aIStack_18,0);
      FUN_05476c50(auStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AddButton(PVZ2UIButton*, Sexy::Delegate0) */

void __thiscall PVZ2UIDialog::AddButton(PVZ2UIDialog *this,PVZ2UIButton *param_1,Delegate0 *param_3)

{
  undefined8 uVar1;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate0::Delegate0(aDStack_38,param_3);
  std::function<void()>::function<Sexy::Delegate0,void>((function<void()> *)afStack_58,aDStack_38);
  uVar1 = AddButton(this,param_1,(function *)afStack_58);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::ReplaceButton(int, PVZ2UIButton*, Sexy::Delegate0) */

void __thiscall
PVZ2UIDialog::ReplaceButton(PVZ2UIDialog *this,int param_1,PVZ2UIButton *param_2,Delegate0 *param_4)

{
  long lVar1;
  function *extraout_x0;
  Widget_ButtonList *this_00;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Widget_ButtonList **)(this + 0xe8);
  Sexy::Delegate0::Delegate0(aDStack_38,param_4);
  std::function<void()>::function<Sexy::Delegate0,void>((function<void()> *)afStack_58,aDStack_38);
  nop();
  Widget_ButtonList::ReplaceButton
            (this_00,param_1,param_2,extraout_x0,(ButtonListener *)(this + 0xd8));
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  lVar1 = ___stack_chk_guard;
  this[0xe0] = (PVZ2UIDialog)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::PVZ2UIDialog() */

void __thiscall PVZ2UIDialog::PVZ2UIDialog(PVZ2UIDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LawnApp *this_00;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  Widget_ButtonList *this_01;
  wchar16 *extraout_x1;
  undefined **ppuVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 *puVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  ppuVar8 = &PTR_GetClass_068373b0;
  *(undefined ***)this = &PTR_GetClass_068373b0;
  *(undefined **)(this + 0xd8) = &DAT_068376f8;
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  Sexy::Insets::Insets((Insets *)(this + 0x124));
  Sexy::Insets::Insets((Insets *)(this + 0x134));
  Sexy::Insets::Insets((Insets *)(this + 0x144));
  Sexy::Point::Point((Point *)(this + 0x168));
  Sexy::Color::Color((Color *)(this + 0x170));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 400),(DummyInit *)0x0);
  Sexy::Color::Color((Color *)(this + 0x1c8));
  Sexy::Color::Color((Color *)(this + 0x1d8));
  if (DAT_06afd6c0 == (undefined4 *)0x0) {
    cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)0x0,extraout_x1,(LineBreakCategory *)ppuVar8,in_x3,in_x4);
    if (cVar4 == '\0') {
      puVar9 = &DAT_06afd5b0;
    }
    else {
      puVar9 = &DAT_06afd618;
    }
    DAT_06afd6c0 = puVar9;
    uVar6 = FUN_04373ce4(*puVar9);
    *puVar9 = uVar6;
    uVar6 = FUN_04373ce4(puVar9[1]);
    puVar9[1] = uVar6;
    uVar6 = FUN_04373ce4(puVar9[2]);
    puVar9[2] = uVar6;
    uVar6 = FUN_04373ce4(puVar9[4]);
    puVar9[4] = uVar6;
    uVar6 = FUN_04373ce4(puVar9[5]);
    puVar9[5] = uVar6;
    uVar6 = FUN_04373ce4(puVar9[6]);
    puVar9[6] = uVar6;
  }
  this_00 = gLawnApp;
  std::string::string((string *)&local_18,"UI_Almanac");
  LawnApp::LoadGroup(this_00,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  DAT_06afd638 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  DAT_06afd5d0 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  DAT_06afd640 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  DAT_06afd5d8 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x1c8) = local_18;
  *(undefined8 *)(this + 0x1d0) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,0x42,0x41,0);
  *(undefined8 *)(this + 0x1d8) = local_18;
  *(undefined8 *)(this + 0x1e0) = uStack_10;
  *(undefined4 *)(this + 0x184) = 5;
  this[0xe0] = (PVZ2UIDialog)0x1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x110) = 1000;
  this[0x11c] = (PVZ2UIDialog)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd708);
  puVar9 = DAT_06afd6c0;
  iVar1 = *(int *)(lVar7 + 0x3c);
  *(undefined4 *)(this + 0x114) = 0;
  this[0x158] = (PVZ2UIDialog)0x0;
  *(int *)(this + 0x118) = (iVar1 << 1) / 3;
  iVar5 = FUN_04373ce4(10);
  iVar1 = puVar9[5];
  iVar2 = puVar9[6];
  iVar3 = puVar9[4];
  this[0x188] = (PVZ2UIDialog)0x0;
  this[0x1c0] = (PVZ2UIDialog)0x0;
  *(int *)(this + 0x154) = iVar3 + iVar5;
  *(float *)(this + 0x10c) = (float)iVar1;
  *(float *)(this + 0x108) = (float)iVar2;
  this_01 = ::operator_new(0xf8);
  Widget_ButtonList::Widget_ButtonList(this_01);
  *(Widget_ButtonList **)(this + 0xe8) = this_01;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AddCancelButton() */

void __thiscall PVZ2UIDialog::AddCancelButton(PVZ2UIDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0x188] = (PVZ2UIDialog)0x1;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar1 = *(int *)(this + 0x50);
  pcVar9 = *(code **)(*(long *)this_00 + 0x198);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar9)(this_00,(iVar1 - iVar2) - iVar3 / 2,0,uVar4,uVar5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06afd7c8,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06afd7c8,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  iVar1 = *(int *)(this + 0x4c);
  uVar4 = *(undefined4 *)(this + 0x48);
  pcVar9 = *(code **)(*(long *)this + 0x198);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  uVar5 = *(undefined4 *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar9)(this,uVar4,iVar1 - iVar3,uVar5,iVar2 + iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::BuildButton(PVZ2UIDialog::DialogButtonType, std::wstring const&) */

void __thiscall PVZ2UIDialog::BuildButton(undefined8 param_1,int param_2,wstring *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  Widget_Button_Stats aWStack_a0 [40];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  uVar1 = DAT_06afd6c0[1];
  local_8 = ___stack_chk_guard;
  uVar2 = *DAT_06afd6c0;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd5f0);
  iVar3 = *(int *)(lVar6 + 0x3c);
  uVar4 = DAT_06afd6c0[2];
  uVar5 = DAT_06afd6c0[3];
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  TodStringTranslate(param_3);
  Widget_Button_Stats::Widget_Button_Stats
            (aWStack_a0,uVar2,uVar1,(iVar3 << 1) / 3,uVar4,uVar5,0,uVar7,aPStack_40);
  FUN_05476c50(aPStack_40);
  if (param_2 == 0) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06afd708,3);
    puVar8 = &DAT_06afd588;
  }
  else {
    if (param_2 != 1) {
      uVar7 = 0;
      goto LAB_04375440;
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06afd5f0,3);
    puVar8 = &DAT_06afd680;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar8,3);
  uVar7 = Widget_ButtonList::Build_WidgetList_Button(aWStack_a0,aPStack_78,aPStack_40);
LAB_04375440:
  Widget_Button_Stats::~Widget_Button_Stats(aWStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AddButton(int, std::wstring const&, Sexy::ButtonListener*,
   PVZ2UIDialog::DialogButtonType) */

void __thiscall
PVZ2UIDialog::AddButton
          (PVZ2UIDialog *this,int param_1,undefined8 param_3_00,ButtonListener *param_3,
          undefined4 param_5)

{
  PVZ2UIButton *pPVar1;
  Widget_ButtonList *this_00;
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZ2UIButton *)BuildButton(this,param_5);
  TenYearRecordInfoPage::SetPageIndex(*(TenYearRecordInfoPage **)(this + 0xe8),param_1);
  this_00 = *(Widget_ButtonList **)(this + 0xe8);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  Widget_ButtonList::AddButton(this_00,pPVar1,(function *)afStack_28,param_3);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AddButton(int, std::wstring const&, Sexy::Delegate0,
   PVZ2UIDialog::DialogButtonType) */

void __thiscall
PVZ2UIDialog::AddButton
          (PVZ2UIDialog *this,int param_1,undefined8 param_3,Delegate0 *param_4,undefined4 param_5)

{
  PVZ2UIButton *pPVar1;
  undefined8 uVar2;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZ2UIButton *)BuildButton(this,param_5);
  TenYearRecordInfoPage::SetPageIndex(*(TenYearRecordInfoPage **)(this + 0xe8),param_1);
  Sexy::Delegate0::Delegate0(aDStack_38,param_4);
  std::function<void()>::function<Sexy::Delegate0,void>((function<void()> *)afStack_58,aDStack_38);
  uVar2 = AddButton(this,pPVar1,(function *)afStack_58);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVZ2UIDialog::AddButton(std::wstring const&, std::function<void ()>&&,
   PVZ2UIDialog::DialogButtonType) */

PVZ2UIButton * __thiscall
PVZ2UIDialog::AddButton(PVZ2UIDialog *this,undefined8 param_1,undefined8 param_3,undefined4 param_4)

{
  PVZ2UIButton *pPVar1;
  function *extraout_x0;
  
  pPVar1 = (PVZ2UIButton *)BuildButton(this,param_4,param_1);
  nop();
  Widget_ButtonList::AddButton
            (*(Widget_ButtonList **)(this + 0xe8),pPVar1,extraout_x0,(ButtonListener *)(this + 0xd8)
            );
  return pPVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AddButton(std::wstring const&, Sexy::Delegate0, PVZ2UIDialog::DialogButtonType) */

void __thiscall
PVZ2UIDialog::AddButton(PVZ2UIDialog *this,undefined8 param_1,Delegate0 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate0::Delegate0(aDStack_38,param_3);
  std::function<void()>::function<Sexy::Delegate0,void>((function<void()> *)afStack_58,aDStack_38);
  uVar1 = AddButton(this,param_1,afStack_58,param_4);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::AutoHeight() */

void __thiscall PVZ2UIDialog::AutoHeight(PVZ2UIDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_1c = 0;
  local_8 = ___stack_chk_guard;
  lVar6 = *(long *)(DAT_06afd6c0 + 0x38);
  local_18 = 0;
  if (lVar6 == 0) {
    lVar7 = *(long *)(DAT_06afd6c0 + 0x28);
    lVar6 = DAT_06afd6c0;
    if (lVar7 != 0) {
      FUN_05477b24(auStack_10,this + 0xf8);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar7,
                 auStack_10,&local_1c,&local_18);
      goto LAB_04375afc;
    }
  }
  else {
    FUN_05477b24(auStack_10,this + 0xf8);
    Sexy::Font::SizeString_Paragraph
              ((Font *)(float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar6,
               auStack_10,&local_1c,&local_18);
LAB_04375afc:
    FUN_05476c50(auStack_10);
    lVar6 = DAT_06afd6c0;
    *(float *)(this + 0x10c) = (float)local_18;
  }
  lVar7 = *(long *)(lVar6 + 0x30);
  local_14 = 0;
  if (lVar7 == 0) {
    lVar7 = *(long *)(lVar6 + 0x20);
    if (lVar7 == 0) goto LAB_04375b70;
    FUN_05477b24(auStack_10,this + 0x100);
    Sexy::PrimeTypeface::SizeString_Paragraph
              ((float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar7,auStack_10,
               &local_1c,&local_14);
  }
  else {
    FUN_05477b24(auStack_10,this + 0x100);
    Sexy::Font::SizeString_Paragraph
              ((Font *)(float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar7,
               auStack_10,&local_1c,&local_14);
  }
  FUN_05476c50(auStack_10);
  lVar6 = DAT_06afd6c0;
  *(float *)(this + 0x108) = (float)local_14;
LAB_04375b70:
  iVar1 = local_14;
  iVar5 = FUN_04373ce4(0x28);
  iVar2 = *(int *)(this + 0x154);
  iVar3 = *(int *)(lVar6 + 0x10);
  iVar4 = *(int *)(lVar6 + 8);
  iVar1 = iVar1 + local_18;
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
  *(int *)(this + 0x54) = iVar1 + iVar3 * 2 + iVar4 + *(int *)(lVar6 + 0x3c) + iVar5 + iVar2;
  AutoCenter(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::LayoutElements() */

void __thiscall PVZ2UIDialog::LayoutElements(PVZ2UIDialog *this)

{
  PVZ2UIDialog *pPVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  SalesProgressBar *pSVar14;
  long *plVar15;
  code *pcVar16;
  long lVar17;
  float fVar18;
  uint local_30;
  uint local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28);
  iVar6 = FUN_04373ce4(10);
  if (this[0x188] == (PVZ2UIDialog)0x0) {
    iVar6 = *(int *)(DAT_06afd6c0 + 0x10) - iVar6;
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar6,iVar6,iVar6 * -2 + *(int *)(this + 0x50),
               (iVar6 * -2 + *(int *)(this + 0x54)) - *(int *)(this + 0x118));
  }
  else {
    iVar9 = *(int *)(DAT_06afd6c0 + 0x10);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    iVar12 = *(int *)(this + 0x118);
    iVar4 = *(int *)(DAT_06afd6c0 + 0x10) - iVar6;
    iVar13 = iVar4 * -2;
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar4,(iVar9 - iVar6) + iVar7,iVar13 + iVar3,
               ((iVar13 + iVar2) - iVar12) - iVar8);
  }
  local_28 = local_18;
  iStack_24 = iStack_14;
  local_20 = local_10;
  local_1c = iStack_c;
  cVar5 = FUN_054765e8(this + 0xf8);
  if (cVar5 == '\0') {
    fVar18 = *(float *)(this + 0x10c);
    iStack_24 = (int)((float)iStack_24 + fVar18);
    local_1c = (int)((float)local_1c - fVar18);
    if (this[0x188] == (PVZ2UIDialog)0x0) {
      iVar6 = *(int *)(DAT_06afd6c0 + 0x10);
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar6,iVar6 / 2,*(int *)(this + 0x50) + iVar6 * -2,(int)fVar18)
      ;
      *(ulong *)(this + 0x144) = CONCAT44(iStack_14,local_18);
      *(ulong *)(this + 0x14c) = CONCAT44(iStack_c,local_10);
    }
    else {
      iVar6 = *(int *)(DAT_06afd6c0 + 0x10);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
      iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
      Sexy::Insets::Insets
                ((Insets *)&local_18,*(int *)(DAT_06afd6c0 + 0x10),iVar6 / 2 + iVar9,
                 *(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2,
                 (int)*(float *)(this + 0x10c));
      *(ulong *)(this + 0x144) = CONCAT44(iStack_14,local_18);
      *(ulong *)(this + 0x14c) = CONCAT44(iStack_c,local_10);
    }
  }
  pPVar1 = this + 0x100;
  uVar10 = FUN_054765e8(pPVar1);
  uVar11 = uVar10 & 0xff;
  if (uVar11 == 0) {
    local_2c = uVar10 & 0xff;
    lVar17 = *(long *)(DAT_06afd6c0 + 0x30);
    local_30 = uVar11;
    if (lVar17 == 0) {
      lVar17 = *(long *)(DAT_06afd6c0 + 0x20);
      if (lVar17 == 0) {
        local_2c = 0;
      }
      else {
        FUN_05477b24((Insets *)&local_18,pPVar1);
        Sexy::PrimeTypeface::SizeString_Paragraph
                  ((float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar17,
                   (Insets *)&local_18,&local_30,&local_2c);
        FUN_05476c50((Insets *)&local_18);
      }
    }
    else {
      FUN_05477b24((Insets *)&local_18,pPVar1);
      Sexy::Font::SizeString_Paragraph
                ((Font *)(float)(*(int *)(this + 0x50) + *(int *)(DAT_06afd6c0 + 0x10) * -2),lVar17,
                 (Insets *)&local_18,&local_30,&local_2c);
      FUN_05476c50((Insets *)&local_18);
    }
    iVar6 = *(int *)(this + 0x154);
    iVar9 = *(int *)(DAT_06afd6c0 + 0x10);
    iVar2 = *(int *)(this + 0x54);
    local_2c = iVar9 + local_2c;
    iVar3 = *(int *)(this + 0x118);
    fVar18 = (float)(int)local_2c;
    *(float *)(this + 0x108) = fVar18;
    local_1c = (int)(((float)local_1c - (float)iVar6) - fVar18);
    iVar12 = FUN_04373ce4(0x1a);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar9,
               (int)(((float)((iVar2 - iVar3) - iVar6) - fVar18) - (float)iVar12),
               *(int *)(this + 0x50) + iVar9 * -2,(int)fVar18);
    *(ulong *)(this + 0x134) = CONCAT44(iStack_14,local_18);
    *(ulong *)(this + 0x13c) = CONCAT44(iStack_c,local_10);
  }
  if (this[0x11c] != (PVZ2UIDialog)0x0) {
    iVar13 = FUN_04373ce4(0xf);
    iVar9 = *(int *)(this + 0x148);
    iVar2 = *(int *)(this + 0x150);
    iVar3 = *(int *)(this + 0x138);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
    iVar12 = *(int *)(lVar17 + 0x3c);
    iVar6 = iVar13 + local_28;
    iVar13 = local_20 + iVar13 * -2;
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar6,
               (iVar9 + iVar2 + (iVar3 - (iVar9 + iVar2)) / 2) - iVar12 / 2,iVar13,
               *(int *)(lVar17 + 0x3c));
    *(ulong *)(this + 0x124) = CONCAT44(iStack_14,local_18);
    *(ulong *)(this + 300) = CONCAT44(iStack_c,local_10);
  }
  plVar15 = *(long **)(this + 0xf0);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x198))(plVar15,local_28,iStack_24,local_20,local_1c);
  }
  fVar18 = (float)*(int *)(this + 0x54) - (float)*(int *)(this + 0x118) * 1.35;
  *(float *)(this + 0x1c4) = fVar18;
  iVar6 = FUN_04373ce4(0x14);
  pcVar16 = *(code **)(*(long *)this + 0x328);
  *(float *)(this + 0x1c4) = (float)iVar6 + fVar18;
  (*pcVar16)((Insets *)&local_18,this);
  Widget_ButtonList::DoLayout
            (*(Widget_ButtonList **)(this + 0xe8),local_18,(int)*(float *)(this + 0x1c4),local_10,
             *(int *)(this + 0x118),0);
  this[0xe0] = (PVZ2UIDialog)0x0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
PVZ2UIDialog::drawShadedBox(undefined8 param_1_00,undefined8 param_1,Insets *param_3)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_3);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd770);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIDialog::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIDialog::Draw(PVZ2UIDialog *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  long lVar7;
  SalesProgressBar *pSVar8;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe0] != (PVZ2UIDialog)0x0) {
    (**(code **)(*(long *)this + 0x310))();
  }
  if (this[0x11d] != (PVZ2UIDialog)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,*(float *)(this + 0x120));
  }
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  if (this[0x188] == (PVZ2UIDialog)0x0) {
    uVar1 = *(uint *)(this + 0x114) & 1;
    if ((*(uint *)(this + 0x114) & 1) != 0) goto LAB_043761e0;
    Sexy::Insets::Insets
              (aIStack_28,uVar1,uVar1,*(int *)(this + 0x50),
               (int)(float)(*(int *)(this + 0x54) - *(int *)(this + 0x118) / 2));
  }
  else {
    iVar2 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x118);
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
    uVar1 = *(uint *)(this + 0x114);
    if ((uVar1 & 1) != 0) goto LAB_043761e0;
    pSVar8 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd7c8);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
    Sexy::Insets::Insets
              (aIStack_28,uVar1 & 1,iVar5,*(int *)(this + 0x50),
               (int)(float)((iVar2 - iVar3 / 2) - iVar4));
  }
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  drawShadedBox(this,param_1,aIStack_18);
LAB_043761e0:
  if (this[0x158] != (PVZ2UIDialog)0x0) {
    (**(code **)(*(long *)this + 0x330))(this,param_1);
  }
  if ((*(uint *)(this + 0x114) >> 1 & 1) == 0) {
    drawHeader(this,param_1);
  }
  if (this[0x11c] != (PVZ2UIDialog)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
    iVar2 = *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afd738);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,*(int *)(lVar7 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar6,(TRect *)(this + 0x124),(TRect *)aIStack_18);
  }
  drawFooter(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIDialog::ButtonPress(int) */

void PVZ2UIDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_General_Press");
  return;
}


/* non-virtual thunk to PVZ2UIDialog::ButtonPress(int) */

void __thiscall PVZ2UIDialog::ButtonPress(PVZ2UIDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PVZ2UIDialog::ButtonDepress(int) */

void __thiscall PVZ2UIDialog::ButtonDepress(PVZ2UIDialog *this,int param_1)

{
  char *pcVar1;
  
  Widget_ButtonList::ButtonDepress(*(Widget_ButtonList **)(this + 0xe8),param_1);
  if (param_1 == 0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_General_Release");
  return;
}


/* non-virtual thunk to PVZ2UIDialog::ButtonDepress(int) */

void __thiscall PVZ2UIDialog::ButtonDepress(PVZ2UIDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

