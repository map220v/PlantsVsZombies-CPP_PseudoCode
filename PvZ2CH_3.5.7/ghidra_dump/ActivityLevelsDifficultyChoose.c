// Class: ActivityLevelsDifficultyChoose


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsDifficultyChoose::GetLayoutName() */

void __thiscall ActivityLevelsDifficultyChoose::GetLayoutName(ActivityLevelsDifficultyChoose *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ActivityLevelsDifficultyChoose");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActivityLevelsDifficultyChoose::~ActivityLevelsDifficultyChoose() */

void __thiscall
ActivityLevelsDifficultyChoose::~ActivityLevelsDifficultyChoose
          (ActivityLevelsDifficultyChoose *this)

{
  *(undefined ***)this = &PTR_GetClass_06976690;
  *(undefined **)(this + 0xd8) = &DAT_069769e0;
  UISingletonDialog<ActivityLevelsDifficultyChoose>::~UISingletonDialog
            ((UISingletonDialog<ActivityLevelsDifficultyChoose> *)this);
  return;
}


/* ActivityLevelsDifficultyChoose::~ActivityLevelsDifficultyChoose() */

void __thiscall
ActivityLevelsDifficultyChoose::~ActivityLevelsDifficultyChoose
          (ActivityLevelsDifficultyChoose *this)

{
  ~ActivityLevelsDifficultyChoose(this);
  AK::FreeHook(this);
  return;
}


/* ActivityLevelsDifficultyChoose::ActivityLevelsDifficultyChoose() */

void __thiscall
ActivityLevelsDifficultyChoose::ActivityLevelsDifficultyChoose(ActivityLevelsDifficultyChoose *this)

{
  UISingletonDialog<ActivityLevelsDifficultyChoose>::UISingletonDialog
            ((UISingletonDialog<ActivityLevelsDifficultyChoose> *)this);
  *(undefined4 *)(this + 0x134) = 1;
  *(undefined ***)this = &PTR_GetClass_06976690;
  *(undefined **)(this + 0xd8) = &DAT_069769e0;
  return;
}


/* ActivityLevelsDifficultyChoose::ButtonDepress(int) */

void __thiscall
ActivityLevelsDifficultyChoose::ButtonDepress(ActivityLevelsDifficultyChoose *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<ActivityLevelsChoose>::ShowDialog();
  UISingletonDialog<ActivityLevelsDifficultyChoose>::CloseDialog();
  return;
}


/* non-virtual thunk to ActivityLevelsDifficultyChoose::ButtonDepress(int) */

void __thiscall
ActivityLevelsDifficultyChoose::ButtonDepress(ActivityLevelsDifficultyChoose *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsDifficultyChoose::OnCreate() */

void __thiscall ActivityLevelsDifficultyChoose::OnCreate(ActivityLevelsDifficultyChoose *this)

{
  char cVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Dialog");
    pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    UI::Dialog::setWindowCenter((Dialog *)this,pWVar2);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Title_Bg");
    pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    UIUtil::SetChildrenIgnoreMouseInput<UIWidgetImage>(pWVar2,true);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsDifficultyChoose::InitData() */

void __thiscall ActivityLevelsDifficultyChoose::InitData(ActivityLevelsDifficultyChoose *this)

{
  ActivityLevelsDifficultyChoose *pAVar1;
  UIWidgetText *pUVar2;
  UIWidgetImage *this_00;
  PVZ2UIButton *pPVar3;
  UIWidgetImage *pUVar4;
  string *psVar5;
  UIWidgetImage *this_01;
  char *pcVar6;
  uint uVar7;
  uint local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  std::string::string(asStack_10,"Title_Label");
  pAVar1 = this + 0x134;
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Choose_Bg");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Choose_Legend");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Lock");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  psVar5 = (string *)
           std::
           map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
           ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                         *)&DAT_06b89848,pAVar1);
  StringHelper::ToStringValue(psVar5);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  do {
    uVar7 = uVar7 + 1;
    local_1c = uVar7;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
    std::operator+("Piece",asStack_18);
    this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::
    map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
    ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                  *)&DAT_06b89570,pAVar1);
    pcVar6 = (char *)FUN_0547429c();
    Sexy::StrFormat(pcVar6,asStack_10,(ulong)uVar7);
    UIWidgetImage::SetImage(this_01,asStack_10);
    std::string::~string(asStack_10);
  } while (uVar7 != 3);
  psVar5 = (string *)
           std::
           map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
           ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                         *)&DAT_06b897f0,pAVar1);
  UIWidgetImage::SetImage(this_00,psVar5);
  (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,1);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityLevelsDifficultyChoose::setChooseMode(FestivalGameMode) */

void __thiscall
ActivityLevelsDifficultyChoose::setChooseMode
          (ActivityLevelsDifficultyChoose *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x134) = param_2;
  InitData(this);
  return;
}

