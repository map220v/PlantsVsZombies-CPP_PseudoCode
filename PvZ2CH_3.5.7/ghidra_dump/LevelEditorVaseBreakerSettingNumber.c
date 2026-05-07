// Class: LevelEditorVaseBreakerSettingNumber


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSettingNumber::GetLayoutName() */

void __thiscall
LevelEditorVaseBreakerSettingNumber::GetLayoutName(LevelEditorVaseBreakerSettingNumber *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelVaseBreakerSettingNumber");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditorVaseBreakerSettingNumber::~LevelEditorVaseBreakerSettingNumber() */

void __thiscall
LevelEditorVaseBreakerSettingNumber::~LevelEditorVaseBreakerSettingNumber
          (LevelEditorVaseBreakerSettingNumber *this)

{
  *(undefined ***)this = &PTR_GetClass_0696ba40;
  *(undefined **)(this + 0xd8) = &DAT_0696bd90;
  UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *)this);
  return;
}


/* LevelEditorVaseBreakerSettingNumber::~LevelEditorVaseBreakerSettingNumber() */

void __thiscall
LevelEditorVaseBreakerSettingNumber::~LevelEditorVaseBreakerSettingNumber
          (LevelEditorVaseBreakerSettingNumber *this)

{
  ~LevelEditorVaseBreakerSettingNumber(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseBreakerSettingNumber::LevelEditorVaseBreakerSettingNumber() */

void __thiscall
LevelEditorVaseBreakerSettingNumber::LevelEditorVaseBreakerSettingNumber
          (LevelEditorVaseBreakerSettingNumber *this)

{
  UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::UISingletonDialog
            ((UISingletonDialog<LevelEditorVaseBreakerSettingNumber> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_0696ba40;
  *(undefined **)(this + 0xd8) = &DAT_0696bd90;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSettingNumber::InitNumber(int) */

void __thiscall
LevelEditorVaseBreakerSettingNumber::InitNumber
          (LevelEditorVaseBreakerSettingNumber *this,int param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  pUVar1 = *(UIWidgetText **)(this + 0x138);
  local_8 = ___stack_chk_guard;
  if (pUVar1 == (UIWidgetText *)0x0) {
    std::string::string(asStack_10,"vase_number");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    *(UIWidgetText **)(this + 0x138) = pUVar1;
    std::string::~string(asStack_10);
    nop();
    pUVar1 = *(UIWidgetText **)(this + 0x138);
    if (pUVar1 == (UIWidgetText *)0x0) goto LAB_04b6747c;
  }
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_1);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
LAB_04b6747c:
  *(int *)(this + 0x140) = param_1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditorVaseBreakerSettingNumber::ButtonDepress(int) */

void __thiscall
LevelEditorVaseBreakerSettingNumber::ButtonDepress
          (LevelEditorVaseBreakerSettingNumber *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3e9) {
    if (5 < *(int *)(this + 0x140)) {
      iVar1 = *(int *)(this + 0x140) + -5;
LAB_04b6a040:
      InitNumber(this,iVar1);
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SetVaseNumber,iVar1);
      return;
    }
  }
  else if (param_1 == 0x3ea) {
    if (*(int *)(this + 0x140) < 0x1e) {
      iVar1 = *(int *)(this + 0x140) + 5;
      goto LAB_04b6a040;
    }
  }
  else if (param_1 == 1000) {
    UISingletonDialog<LevelEditorVaseBreakerSettingNumber>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to LevelEditorVaseBreakerSettingNumber::ButtonDepress(int) */

void __thiscall
LevelEditorVaseBreakerSettingNumber::ButtonDepress
          (LevelEditorVaseBreakerSettingNumber *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

