// Class: UINewPVPBattlePassIntroduction


/* UINewPVPBattlePassIntroduction::~UINewPVPBattlePassIntroduction() */

void __thiscall
UINewPVPBattlePassIntroduction::~UINewPVPBattlePassIntroduction
          (UINewPVPBattlePassIntroduction *this)

{
  *(undefined ***)this = &PTR_GetClass_06654190;
  *(undefined **)(this + 0xd8) = &DAT_066544e0;
  UISingletonDialog<UINewPVPBattlePassIntroduction>::~UISingletonDialog
            ((UISingletonDialog<UINewPVPBattlePassIntroduction> *)this);
  return;
}


/* UINewPVPBattlePassIntroduction::~UINewPVPBattlePassIntroduction() */

void __thiscall
UINewPVPBattlePassIntroduction::~UINewPVPBattlePassIntroduction
          (UINewPVPBattlePassIntroduction *this)

{
  ~UINewPVPBattlePassIntroduction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPBattlePassIntroduction::Update() */

void __thiscall UINewPVPBattlePassIntroduction::Update(UINewPVPBattlePassIntroduction *this)

{
  UIWidgetText *pUVar1;
  float fVar2;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)TimeUtil::GetTimeCountdown(3,0x2a6d);
  if (fVar2 <= 0.0) {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[FINISHED]");
  }
  else {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TimeUtil::GetTimeCountdown(3,0x2a6d);
    TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  }
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPBattlePassIntroduction::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassIntroduction::ButtonDepress(UINewPVPBattlePassIntroduction *this,int param_1)

{
  if (param_1 == 0x2c) {
    UISingletonDialog<UINewPVPBattlePass>::ShowDialog();
    UISingletonDialog<UINewPVPBattlePassIntroduction>::CloseDialog();
    return;
  }
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINewPVPBattlePassIntroduction>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPVPBattlePassIntroduction::ButtonDepress(int) */

void __thiscall
UINewPVPBattlePassIntroduction::ButtonDepress(UINewPVPBattlePassIntroduction *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

