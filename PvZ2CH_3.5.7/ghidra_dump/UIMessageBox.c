// Class: UIMessageBox


/* UIMessageBox::SetCallback(Sexy::Delegate2<UIMessageBox*, int>) */

void __thiscall UIMessageBox::SetCallback(UIMessageBox *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x148),param_2);
  return;
}


/* UIMessageBox::SetCancelCallback(Sexy::Delegate2<UIMessageBox*, int>) */

void __thiscall UIMessageBox::SetCancelCallback(UIMessageBox *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x178),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetLayoutName() */

void __thiscall UIMessageBox::GetLayoutName(UIMessageBox *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"uimessagebox");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIMessageBox::OnClose() */

void __thiscall UIMessageBox::OnClose(UIMessageBox *this)

{
  Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
  UI::Dialog::OnClose((Dialog *)this);
  return;
}


/* UIMessageBox::Draw(Sexy::Graphics*) */

void __thiscall UIMessageBox::Draw(UIMessageBox *this,Graphics *param_1)

{
  if (this[0x131] != (UIMessageBox)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,*(float *)(this + 0x134));
  }
  UI::Dialog::Draw((Dialog *)this,param_1);
  return;
}


/* UIMessageBox::~UIMessageBox() */

void __thiscall UIMessageBox::~UIMessageBox(UIMessageBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06972100;
  *(undefined **)(this + 0xd8) = &DAT_06972450;
  UISingletonDialog<UIMessageBox>::~UISingletonDialog((UISingletonDialog<UIMessageBox> *)this);
  return;
}


/* UIMessageBox::~UIMessageBox() */

void __thiscall UIMessageBox::~UIMessageBox(UIMessageBox *this)

{
  ~UIMessageBox(this);
  AK::FreeHook(this);
  return;
}


/* UIMessageBox::SetBackground(std::string const&) */

void __thiscall UIMessageBox::SetBackground(UIMessageBox *this,string *param_1)

{
  if (*(UIWidgetImage **)(this + 0x140) != (UIWidgetImage *)0x0) {
    UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x140),param_1);
    return;
  }
  return;
}


/* UIMessageBox::SetBackground(Sexy::Image*) */

void __thiscall UIMessageBox::SetBackground(UIMessageBox *this,Image *param_1)

{
  if (*(UIWidgetImage **)(this + 0x140) != (UIWidgetImage *)0x0) {
    UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x140),param_1);
    return;
  }
  return;
}


/* UIMessageBox::SetBackgroundDarken(bool, float) */

void __thiscall UIMessageBox::SetBackgroundDarken(UIMessageBox *this,bool param_1,float param_2)

{
  *(float *)(this + 0x134) = param_2;
  this[0x131] = (UIMessageBox)param_1;
  return;
}


/* UIMessageBox::SetTextFont(int) */

void __thiscall UIMessageBox::SetTextFont(UIMessageBox *this,int param_1)

{
  if (*(UIWidgetText **)(this + 0x138) != (UIWidgetText *)0x0) {
    UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x138),param_1);
    return;
  }
  return;
}


/* UIMessageBox::SetTextColor(Sexy::Color) */

void __thiscall UIMessageBox::SetTextColor(UIMessageBox *this,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x138);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,0,param_2);
  }
  return;
}


/* UIMessageBox::UIMessageBox() */

void __thiscall UIMessageBox::UIMessageBox(UIMessageBox *this)

{
  UISingletonDialog<UIMessageBox>::UISingletonDialog((UISingletonDialog<UIMessageBox> *)this);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06972100;
  *(undefined **)(this + 0xd8) = &DAT_06972450;
  Sexy::Delegate2<UIMessageBox*,int>::Delegate2((DummyInit *)(this + 0x148));
  Sexy::Delegate2<UIMessageBox*,int>::Delegate2((DummyInit *)(this + 0x178));
  Sexy::Delegate2<UIMessageBox*,int>::Delegate2((DummyInit *)(this + 0x1a8));
  Sexy::Delegate2<UIMessageBox*,int>::Delegate2((DummyInit *)(this + 0x1d8));
  *(undefined4 *)(this + 0x208) = 0;
  this[0x131] = (UIMessageBox)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetADMessage(std::wstring const&) */

void __thiscall UIMessageBox::SetADMessage(UIMessageBox *this,wstring *param_1)

{
  char cVar1;
  UIWidgetText *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_054765e8(param_1);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"UIText_ADLeft");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar2,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetMessage(std::string const&, std::string const&) */

void __thiscall UIMessageBox::SetMessage(UIMessageBox *this,string *param_1,string *param_2)

{
  char cVar1;
  UIWidgetText *pUVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  StringHelper::ToStringValue(param_1);
  PuzzleTip::SetTip(uVar3,asStack_10);
  FUN_05476c50(asStack_10);
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"UIText_0");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetText *)0x0) {
      StringHelper::ToStringValue(param_2);
      PuzzleTip::SetTip(pUVar2,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetMessage(std::wstring const&, std::wstring const&) */

void __thiscall UIMessageBox::SetMessage(UIMessageBox *this,wstring *param_1,wstring *param_2)

{
  char cVar1;
  UIWidgetText *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x138));
  cVar1 = FUN_054765e8(param_2);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"UIText_0");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar2,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetTitleFont(int) */

void __thiscall UIMessageBox::SetTitleFont(UIMessageBox *this,int param_1)

{
  UIWidgetText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_0");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidgetText *)0x0) {
    UIWidgetText::SetFontIndex(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::ButtonDepress(int) */

void __thiscall UIMessageBox::ButtonDepress(UIMessageBox *this,int param_1)

{
  int iVar1;
  uint uVar2;
  LuaFunctionCallback *pLVar3;
  uint uVar4;
  bool local_29;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x318))();
    goto LAB_04b897a8;
  }
  iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x1e0),*(undefined8 *)(this + 0x1f0));
  if ((iVar1 != 0) && (param_1 == 2)) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x1d8),(char *)this);
    goto LAB_04b897a8;
  }
  if (param_1 == 3) {
    iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x160));
    if (iVar1 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x148),(char *)this);
    }
    goto LAB_04b897a8;
  }
  if (param_1 == 4) {
    iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 400));
    if (iVar1 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x178),(char *)this);
    }
    goto LAB_04b897a8;
  }
  if (param_1 == 5) {
    iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1c0));
    if (iVar1 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x1a8),(char *)this);
    }
    goto LAB_04b897a8;
  }
  local_29 = false;
  iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x160));
  if (iVar1 != 0) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x148),(char *)this);
    local_29 = true;
  }
  iVar1 = FUN_04b89180(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 400));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x208) != 0) goto LAB_04b8970c;
  }
  else {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x178),(char *)this);
    local_29 = true;
    if (*(int *)(this + 0x208) == 0) goto LAB_04b897a8;
LAB_04b8970c:
    uVar2 = FUN_04b89198(*(undefined1 *)(gLuaEngine + 0xe51));
    if ((uVar2 & 0xff) == 0) {
      local_28 = 0;
      local_20 = 0;
      uVar4 = uVar2 & 0xff;
      local_18 = uVar2 & 0xff;
      local_14 = uVar4;
      local_10 = uVar4;
      pLVar3 = (LuaFunctionCallback *)
               Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
      pLVar3 = (LuaFunctionCallback *)
               Lua::LuaFunctionCallback::PushParamUserTypePtr(pLVar3,this,"UIMessageBox");
      pLVar3 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamInt(pLVar3,(long)param_1);
      pLVar3 = (LuaFunctionCallback *)
               Lua::LuaFunctionCallback::Execute(pLVar3,*(int *)(this + 0x208),uVar4,&local_29);
      Lua::LuaFunctionCallback::End(pLVar3);
      Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
    }
  }
  if (local_29 == false) {
    (**(code **)(*(long *)this + 0x318))(this);
  }
LAB_04b897a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIMessageBox::ButtonDepress(int) */

void __thiscall UIMessageBox::ButtonDepress(UIMessageBox *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonOK() */

void __thiscall UIMessageBox::GetButtonOK(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_0");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonCancel() */

void __thiscall UIMessageBox::GetButtonCancel(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_1");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonCloseOld() */

void __thiscall UIMessageBox::GetButtonCloseOld(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_2");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonLeft() */

void __thiscall UIMessageBox::GetButtonLeft(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Left");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonRight() */

void __thiscall UIMessageBox::GetButtonRight(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Right");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonExtra() */

void __thiscall UIMessageBox::GetButtonExtra(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Extra");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::OnCreate() */

void __thiscall UIMessageBox::OnCreate(UIMessageBox *this)

{
  char cVar1;
  UIWidgetText *pUVar2;
  UIWidgetImage *pUVar3;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UIText_1");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    *(UIWidgetText **)(this + 0x138) = pUVar2;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_0");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    *(UIWidgetImage **)(this + 0x140) = pUVar3;
    std::string::~string(asStack_10);
    nop();
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
    UI::Dialog::SetCenter((Dialog *)this,*(Widget **)(this + 0x140),true);
    plVar4 = (long *)GetButtonLeft(this);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
    plVar4 = (long *)GetButtonRight(this);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
    plVar4 = (long *)GetButtonExtra(this);
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
    std::string::string(asStack_10,"UIText_ADLeft");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetText *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::GetButtonCloseNew() */

void __thiscall UIMessageBox::GetButtonCloseNew(UIMessageBox *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetNewBackground(int, int, UIMessageBox::BtnMode) */

void __thiscall
UIMessageBox::SetNewBackground(UIMessageBox *this,int param_1,int param_2,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UIWidgetText *pUVar9;
  long *plVar10;
  long lVar11;
  UIWidgetText *pUVar12;
  Widget *pWVar13;
  code *pcVar14;
  int iVar15;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ADLeft");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
  plVar10 = (long *)GetButtonOK(this);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  plVar10 = (long *)GetButtonCancel(this);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  plVar10 = (long *)GetButtonCloseOld(this);
  (**(code **)(*plVar10 + 0x158))(plVar10,0);
  plVar10 = *(long **)(this + 0x140);
  pWVar13 = (Widget *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x198))
              (plVar10,(int)plVar10[9],*(undefined4 *)((long)plVar10 + 0x4c),
               param_1 + (int)plVar10[10],param_2 + *(int *)((long)plVar10 + 0x54));
    pWVar13 = *(Widget **)(this + 0x140);
  }
  UI::Dialog::SetCenter((Dialog *)this,pWVar13,true);
  lVar11 = GetButtonLeft(this);
  iVar2 = *(int *)(lVar11 + 0x50);
  bVar4 = param_4 == 0;
  bVar5 = param_4 == 4;
  bVar1 = param_4 - 3U < 2;
  if ((bVar1) || (bVar4)) {
    iVar15 = 0;
    lVar11 = GetButtonRight(this);
    iVar6 = *(int *)(lVar11 + 0x50);
    if (bVar1) {
      lVar11 = GetButtonExtra(this);
      iVar15 = *(int *)(lVar11 + 0x50);
    }
  }
  else {
    iVar6 = 0;
    iVar15 = 0;
  }
  if ((param_4 == 3) || (bVar4)) {
    iVar7 = FUN_04b89244(0x28);
    iVar8 = iVar7 << 1;
    if (!bVar5) {
      iVar8 = iVar7;
    }
  }
  else if (bVar5) {
    iVar7 = FUN_04b89244(0x14);
    iVar8 = iVar7 << 1;
  }
  else {
    iVar7 = 0;
    iVar8 = 0;
  }
  iVar15 = (*(int *)(*(long *)(this + 0x140) + 0x50) - (iVar15 + iVar6 + iVar2 + iVar8)) / 2;
  plVar10 = (long *)GetButtonLeft(this);
  pcVar14 = *(code **)(*plVar10 + 0x1a8);
  lVar11 = GetButtonLeft(this);
  (*pcVar14)(plVar10,iVar15,*(undefined4 *)(lVar11 + 0x4c));
  if (bVar4) {
    plVar10 = (long *)GetButtonRight(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonRight(this);
    (*pcVar14)(plVar10,iVar7 + iVar15 + iVar2,*(undefined4 *)(lVar11 + 0x4c));
    plVar10 = (long *)GetButtonRight(this);
    (**(code **)(*plVar10 + 0x158))(plVar10,1);
    plVar10 = (long *)GetButtonLeft(this);
    (**(code **)(*plVar10 + 0x158))(plVar10,1);
    plVar10 = (long *)GetButtonExtra(this);
    lVar11 = *plVar10;
  }
  else {
    if (param_4 == 3) {
      plVar10 = (long *)GetButtonExtra(this);
      pcVar14 = *(code **)(*plVar10 + 0x1a8);
      lVar11 = GetButtonExtra(this);
      (*pcVar14)(plVar10,iVar7 + iVar15 + iVar2,*(undefined4 *)(lVar11 + 0x4c));
      plVar10 = (long *)GetButtonExtra(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      plVar10 = (long *)GetButtonLeft(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      plVar10 = (long *)GetButtonRight(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
      (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
      goto LAB_04b8a030;
    }
    if (bVar5) {
      plVar10 = (long *)GetButtonRight(this);
      iVar2 = iVar7 + iVar15 + iVar2;
      pcVar14 = *(code **)(*plVar10 + 0x1a8);
      lVar11 = GetButtonRight(this);
      (*pcVar14)(plVar10,iVar2,*(undefined4 *)(lVar11 + 0x4c));
      plVar10 = (long *)GetButtonRight(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      plVar10 = (long *)GetButtonLeft(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,1);
      plVar10 = (long *)GetButtonExtra(this);
      pcVar14 = *(code **)(*plVar10 + 0x1a8);
      lVar11 = GetButtonExtra(this);
      (*pcVar14)(plVar10,iVar7 + iVar6 + iVar2,*(undefined4 *)(lVar11 + 0x4c));
      plVar10 = (long *)GetButtonExtra(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      goto LAB_04b8a030;
    }
    if (param_4 != 2) {
      plVar10 = (long *)GetButtonLeft(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,1);
      plVar10 = (long *)GetButtonExtra(this);
      (**(code **)(*plVar10 + 0x158))(plVar10,0);
      goto LAB_04b8a030;
    }
    plVar10 = (long *)GetButtonRight(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonLeft(this);
    uVar3 = *(undefined4 *)(lVar11 + 0x48);
    lVar11 = GetButtonLeft(this);
    (*pcVar14)(plVar10,uVar3,*(undefined4 *)(lVar11 + 0x4c));
    plVar10 = (long *)GetButtonRight(this);
    (**(code **)(*plVar10 + 0x158))(plVar10,1);
    plVar10 = (long *)GetButtonLeft(this);
    (**(code **)(*plVar10 + 0x158))(plVar10,0);
    plVar10 = (long *)GetButtonExtra(this);
    lVar11 = *plVar10;
  }
  (**(code **)(lVar11 + 0x158))(plVar10,0);
  (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,1);
LAB_04b8a030:
  plVar10 = (long *)GetButtonCloseNew(this);
  (**(code **)(*plVar10 + 0x158))(plVar10,1);
  if (0 < param_1) {
    std::string::string(asStack_20,"UIText_0");
    plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
    iVar2 = *(int *)(*(long *)(this + 0x140) + 0x50);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    std::string::string(asStack_18,"UIText_0");
    lVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_18);
    iVar6 = *(int *)(lVar11 + 0x50);
    std::string::string(asStack_10,"UIText_0");
    lVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (*pcVar14)(plVar10,(iVar2 - iVar6) / 2,*(undefined4 *)(lVar11 + 0x4c));
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_10,"UIText_0");
    pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    FUN_04b8919c(pUVar12 + 0xe0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_20,"UIText_1");
    plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
    iVar2 = *(int *)(*(long *)(this + 0x140) + 0x50);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    std::string::string(asStack_18,"UIText_1");
    lVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_18);
    iVar6 = *(int *)(lVar11 + 0x50);
    std::string::string(asStack_10,"UIText_1");
    lVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (*pcVar14)(plVar10,(iVar2 - iVar6) / 2,*(undefined4 *)(lVar11 + 0x4c));
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    iVar6 = FUN_04b89244(0xfffffff6);
    plVar10 = (long *)GetButtonCloseNew(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonCloseNew(this);
    iVar2 = *(int *)(lVar11 + 0x48);
    lVar11 = GetButtonCloseNew(this);
    (*pcVar14)(plVar10,param_1 + iVar2,*(undefined4 *)(lVar11 + 0x4c));
    plVar10 = (long *)GetButtonLeft(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonLeft(this);
    uVar3 = *(undefined4 *)(lVar11 + 0x48);
    lVar11 = GetButtonLeft(this);
    param_2 = param_2 / 2;
    (*pcVar14)(plVar10,uVar3,param_2 + *(int *)(lVar11 + 0x4c) + iVar6);
    plVar10 = (long *)GetButtonRight(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonRight(this);
    uVar3 = *(undefined4 *)(lVar11 + 0x48);
    lVar11 = GetButtonRight(this);
    (*pcVar14)(plVar10,uVar3,param_2 + *(int *)(lVar11 + 0x4c) + iVar6);
    plVar10 = (long *)GetButtonExtra(this);
    pcVar14 = *(code **)(*plVar10 + 0x1a8);
    lVar11 = GetButtonExtra(this);
    uVar3 = *(undefined4 *)(lVar11 + 0x48);
    lVar11 = GetButtonExtra(this);
    (*pcVar14)(plVar10,uVar3,param_2 + *(int *)(lVar11 + 0x4c) + iVar6);
  }
  pcVar14 = *(code **)(*(long *)pUVar9 + 0x1a8);
  lVar11 = GetButtonRight(this);
  iVar7 = FUN_04b89244(0xf);
  iVar2 = *(int *)(lVar11 + 0x48);
  lVar11 = GetButtonRight(this);
  iVar6 = *(int *)(lVar11 + 0x4c);
  lVar11 = GetButtonRight(this);
  iVar15 = *(int *)(lVar11 + 0x54);
  iVar8 = FUN_04b89244(5);
  (*pcVar14)(pUVar9,iVar7 + iVar2,iVar6 + iVar15 + iVar8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMessageBox::SetShowType(int) */

void __thiscall UIMessageBox::SetShowType(UIMessageBox *this,int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  PVZ2UIButton *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::string::string((string *)&local_28,"UIButton_2");
  local_38 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  if (local_38 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)local_38 + 0x158))(local_38,param_1 & 1);
  }
  local_38 = (PVZ2UIButton *)GetButtonOK(this);
  if ((local_38 != (PVZ2UIButton *)0x0) &&
     ((**(code **)(*(long *)local_38 + 0x158))(local_38,(uint)param_1 >> 1 & 1),
     local_38[0x6c] != (PVZ2UIButton)0x0)) {
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_20,&local_38);
  }
  local_38 = (PVZ2UIButton *)GetButtonCancel(this);
  if ((local_38 == (PVZ2UIButton *)0x0) ||
     ((**(code **)(*(long *)local_38 + 0x158))(local_38,(uint)param_1 >> 2 & 1),
     local_38[0x6c] == (PVZ2UIButton)0x0)) {
    cVar2 = std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::empty
                      ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_20);
  }
  else {
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_20,&local_38);
    cVar2 = std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::empty
                      ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_20);
  }
  if (cVar2 == '\0') {
    iVar7 = 0;
    iVar4 = FUN_04b89244(10);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      iVar7 = iVar7 + iVar4 + *(int *)(*plVar5 + 0x50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    iVar1 = iVar7 - iVar4;
    if (iVar7 < 1) {
      iVar1 = iVar7;
    }
    iVar7 = *(int *)(*(long *)(this + 0x140) + 0x50);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    iVar7 = (iVar7 - iVar1) / 2;
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar3)
    {
      plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      lVar6 = *plVar5;
      *(int *)(lVar6 + 0x48) = iVar7;
      iVar7 = iVar7 + iVar4 + *(int *)(lVar6 + 0x50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMessageBox::SetExtraCallback(Sexy::Delegate2<UIMessageBox*, int>) */

void __thiscall UIMessageBox::SetExtraCallback(UIMessageBox *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1a8),param_2);
  return;
}

