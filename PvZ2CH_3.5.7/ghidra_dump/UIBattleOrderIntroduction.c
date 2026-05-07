// Class: UIBattleOrderIntroduction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderIntroduction::GetLayoutName() */

void __thiscall UIBattleOrderIntroduction::GetLayoutName(UIBattleOrderIntroduction *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBattleOrderIntroduction");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBattleOrderIntroduction::~UIBattleOrderIntroduction() */

void __thiscall
UIBattleOrderIntroduction::~UIBattleOrderIntroduction(UIBattleOrderIntroduction *this)

{
  *(undefined ***)this = &PTR_GetClass_06701a00;
  *(undefined **)(this + 0xd8) = &DAT_06701d50;
  UISingletonDialog<UIBattleOrderIntroduction>::~UISingletonDialog
            ((UISingletonDialog<UIBattleOrderIntroduction> *)this);
  return;
}


/* UIBattleOrderIntroduction::~UIBattleOrderIntroduction() */

void __thiscall
UIBattleOrderIntroduction::~UIBattleOrderIntroduction(UIBattleOrderIntroduction *this)

{
  ~UIBattleOrderIntroduction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderIntroduction::Update() */

void __thiscall UIBattleOrderIntroduction::Update(UIBattleOrderIntroduction *this)

{
  UIWidgetText *pUVar1;
  float fVar2;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)TimeUtil::GetTimeCountdown(3,0x2a63);
  if (fVar2 <= 0.0) {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[FINISHED]");
  }
  else {
    std::string::string(asStack_18,"UIText_Timer");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
    TimeUtil::GetTimeCountdown(3,0x2a63);
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


/* UIBattleOrderIntroduction::ButtonDepress(int) */

void __thiscall
UIBattleOrderIntroduction::ButtonDepress(UIBattleOrderIntroduction *this,int param_1)

{
  if (param_1 == 0x2c) {
    UISingletonDialog<UIBattleOrder>::ShowDialog();
    UISingletonDialog<UIBattleOrderIntroduction>::CloseDialog();
    return;
  }
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIBattleOrderIntroduction>::CloseDialog();
  return;
}


/* non-virtual thunk to UIBattleOrderIntroduction::ButtonDepress(int) */

void __thiscall
UIBattleOrderIntroduction::ButtonDepress(UIBattleOrderIntroduction *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderIntroduction::CheckThemeVersion() */

void __thiscall UIBattleOrderIntroduction::CheckThemeVersion(UIBattleOrderIntroduction *this)

{
  char cVar1;
  int iVar2;
  UIWidgetImage *this_00;
  undefined8 uVar3;
  UIWidgetText *pUVar4;
  string *extraout_x1;
  string asStack_220 [8];
  string asStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  BattleOrderData aBStack_178 [352];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a2bce0(local_1f0);
  if ((cVar1 != '\0') && (local_1e0 != '\0')) {
    BattleOrderData::BattleOrderData(aBStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aBStack_178);
    if (cVar1 != '\0') {
      Sexy::StringToUpper(aSStack_18,extraout_x1);
      std::string::string(asStack_208,"UIImage_Background");
      this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_208);
      uVar3 = FUN_0547429c(asStack_220);
      Sexy::StrFormat("IMAGE_UI_BATTLEORDER_INTRODUCTION_%s",asStack_200,uVar3);
      UIWidgetImage::SetImage(this_00,asStack_200);
      std::string::~string(asStack_200);
      std::string::~string(asStack_208);
      nop();
      std::string::string(asStack_218,"UIText_Title");
      pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_218);
      uVar3 = FUN_0547429c(asStack_220);
      Sexy::StrFormat("[BATTLE_ORDER_%s]",asStack_210,uVar3);
      Sexy::ToWString(asStack_210);
      TodStringTranslate((wstring *)asStack_208);
      PuzzleTip::SetTip(pUVar4,asStack_200);
      FUN_05476c50(asStack_200);
      FUN_05476c50(asStack_208);
      std::string::~string(asStack_210);
      std::string::~string(asStack_218);
      nop();
      std::string::~string(asStack_220);
    }
    BattleOrderData::~BattleOrderData(aBStack_178);
  }
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderIntroduction::OnCreate() */

void __thiscall UIBattleOrderIntroduction::OnCreate(UIBattleOrderIntroduction *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  CheckThemeVersion(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIBattleOrderIntroduction::UIBattleOrderIntroduction() */

void __thiscall
UIBattleOrderIntroduction::UIBattleOrderIntroduction(UIBattleOrderIntroduction *this)

{
  UISingletonDialog<UIBattleOrderIntroduction>::UISingletonDialog
            ((UISingletonDialog<UIBattleOrderIntroduction> *)this);
  *(undefined ***)this = &PTR_GetClass_06701a00;
  *(undefined **)(this + 0xd8) = &DAT_06701d50;
  return;
}

