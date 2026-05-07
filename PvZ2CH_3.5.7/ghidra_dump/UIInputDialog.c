// Class: UIInputDialog


/* UIInputDialog::SetCallback(Sexy::Delegate2<UIInputDialog*, int>) */

void __thiscall UIInputDialog::SetCallback(UIInputDialog *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x150),param_2);
  return;
}


/* UIInputDialog::~UIInputDialog() */

void __thiscall UIInputDialog::~UIInputDialog(UIInputDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06970960;
  *(undefined **)(this + 0xd8) = &DAT_06970cb0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06970cf8;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* UIInputDialog::~UIInputDialog() */

void __thiscall UIInputDialog::~UIInputDialog(UIInputDialog *this)

{
  ~UIInputDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInputDialog::GetLayoutName() */

void __thiscall UIInputDialog::GetLayoutName(UIInputDialog *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"uiinput");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInputDialog::SetMessage(std::string const&, std::string const&) */

void __thiscall UIInputDialog::SetMessage(UIInputDialog *this,string *param_1,string *param_2)

{
  string *psVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_10 [8];
  string *local_8;
  
  uVar3 = *(undefined8 *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  Sexy::ToSexyString((Sexy *)param_1,___stack_chk_guard);
  PuzzleTip::SetTip(uVar3,auStack_10);
  FUN_05476c50(auStack_10);
  puVar2 = *(undefined8 **)(this + 0x140);
  psVar1 = (string *)*puVar2;
  pcVar4 = *(code **)(psVar1 + 0x340);
  Sexy::ToSexyString((Sexy *)param_2,psVar1);
  (*pcVar4)(puVar2,auStack_10,1);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIInputDialog::GetInputText() */

void UIInputDialog::GetInputText(void)

{
  long in_x0;
  bool *in_x2;
  
  Sexy::WStringToString((Sexy *)(*(long *)(in_x0 + 0x140) + 0xe8),(wstring *)0x0,in_x2);
  return;
}


/* UIInputDialog::UIInputDialog() */

void __thiscall UIInputDialog::UIInputDialog(UIInputDialog *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06970960;
  *(undefined **)(this + 0xd8) = &DAT_06970cb0;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_06970cf8;
  Sexy::Delegate2<UIInputDialog*,int>::Delegate2((DummyInit *)(this + 0x150));
  this[0x180] = (UIInputDialog)0x0;
  return;
}


/* UIInputDialog::Create(bool) */

UIInputDialog * UIInputDialog::Create(bool param_1)

{
  char cVar1;
  UIInputDialog *this;
  
  this = ::operator_new(0x188);
  UIInputDialog(this);
  this[0x180] = (UIInputDialog)param_1;
  cVar1 = (**(code **)(*(long *)this + 0x310))(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x18))(this);
    this = (UIInputDialog *)0x0;
  }
  return this;
}


/* UIInputDialog::ButtonDepress(int) */

void UIInputDialog::ButtonDepress(int param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  iVar1 = FUN_04b85868(plVar2[0x2b],plVar2[0x2d]);
  if (iVar1 == 0) {
    (**(code **)(*plVar2 + 0x318))(plVar2);
    return;
  }
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(plVar2 + 0x2a),(char *)plVar2);
  return;
}


/* non-virtual thunk to UIInputDialog::ButtonDepress(int) */

void __thiscall UIInputDialog::ButtonDepress(UIInputDialog *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInputDialog::OnCreate() */

void __thiscall UIInputDialog::OnCreate(UIInputDialog *this)

{
  int iVar1;
  int iVar2;
  UIInputDialog UVar3;
  UIInputDialog UVar4;
  int iVar5;
  undefined4 uVar6;
  UIWidgetText *pUVar7;
  EditWidget *this_00;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UVar4 = (UIInputDialog)UI::Dialog::OnCreate((Dialog *)this);
  if (UVar4 != (UIInputDialog)0x0) {
    std::string::string(asStack_10,"UIText_0");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    *(UIWidgetText **)(this + 0x148) = pUVar7;
    std::string::~string(asStack_10);
    nop();
    this_00 = ::operator_new(0x180);
    Sexy::EditWidget::EditWidget(this_00,0,(EditListener *)(this + 0x138));
    *(EditWidget **)(this + 0x140) = this_00;
    pcVar9 = *(code **)(*(long *)this_00 + 0x330);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    (*pcVar9)(this_00,uVar8,0);
    (**(code **)(**(long **)(*(long *)(this + 0x148) + 0x20) + 0x60))
              (*(long **)(*(long *)(this + 0x148) + 0x20),*(undefined8 *)(this + 0x140));
    lVar10 = *(long *)(this + 0x148);
    plVar11 = *(long **)(this + 0x140);
    iVar1 = *(int *)(lVar10 + 0x54);
    iVar2 = *(int *)(lVar10 + 0x4c);
    iVar5 = FUN_04b85880(10);
    uVar6 = FUN_04b85880(0x32);
    (**(code **)(*plVar11 + 0x198))
              (plVar11,*(undefined4 *)(lVar10 + 0x48),iVar2 + iVar1 + iVar5,
               *(undefined4 *)(lVar10 + 0x50),uVar6);
    UVar3 = this[0x180];
    if (UVar3 != (UIInputDialog)0x0) {
      Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
      UVar4 = UVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(UVar4);
}


/* UIInputDialog::OnClose() */

void __thiscall UIInputDialog::OnClose(UIInputDialog *this)

{
  if (this[0x180] != (UIInputDialog)0x0) {
    Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)this);
  }
  UI::Dialog::OnClose((Dialog *)this);
  return;
}

