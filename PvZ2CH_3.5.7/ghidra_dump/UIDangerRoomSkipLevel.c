// Class: UIDangerRoomSkipLevel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::GetLayoutName() */

void __thiscall UIDangerRoomSkipLevel::GetLayoutName(UIDangerRoomSkipLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DangerRoomSkipLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIDangerRoomSkipLevel::~UIDangerRoomSkipLevel() */

void __thiscall UIDangerRoomSkipLevel::~UIDangerRoomSkipLevel(UIDangerRoomSkipLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_0693fdd0;
  *(undefined **)(this + 0xd8) = &DAT_06940120;
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x18))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x148));
  UISingletonDialog<UIDangerRoomSkipLevel>::~UISingletonDialog
            ((UISingletonDialog<UIDangerRoomSkipLevel> *)this);
  return;
}


/* UIDangerRoomSkipLevel::~UIDangerRoomSkipLevel() */

void __thiscall UIDangerRoomSkipLevel::~UIDangerRoomSkipLevel(UIDangerRoomSkipLevel *this)

{
  ~UIDangerRoomSkipLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::GetMowerImage(std::string const&) */

void __thiscall UIDangerRoomSkipLevel::GetMowerImage(UIDangerRoomSkipLevel *this,string *param_1)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)param_1,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_DANGERROOM_DIALOG_MOWER_%s",asStack_10,uVar1);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UIDangerRoomSkipLevel::DrawEffect(Sexy::Graphics*, UIWidgetAnim*) */

void __thiscall
UIDangerRoomSkipLevel::DrawEffect
          (UIDangerRoomSkipLevel *this,Graphics *param_1,UIWidgetAnim *param_2)

{
  if (param_2 != (UIWidgetAnim *)0x0) {
    Sexy::Graphics::PushState(param_1);
    Sexy::Graphics::Translate(param_1,*(int *)(param_2 + 0x48),*(int *)(param_2 + 0x4c));
    (**(code **)(*(long *)param_2 + 0x128))(param_2,param_1);
    Sexy::Graphics::PopState(param_1);
    return;
  }
  return;
}


/* UIDangerRoomSkipLevel::GetZombieImageGap() */

void UIDangerRoomSkipLevel::GetZombieImageGap(void)

{
  FUN_04a8a260(0x8c);
  return;
}


/* UIDangerRoomSkipLevel::InScrollLevel() */

bool __thiscall UIDangerRoomSkipLevel::InScrollLevel(UIDangerRoomSkipLevel *this)

{
  return *(int *)(this + 0x13c) != *(int *)(this + 0x138);
}


/* UIDangerRoomSkipLevel::SkipToLevel(int, int) */

void __thiscall
UIDangerRoomSkipLevel::SkipToLevel(UIDangerRoomSkipLevel *this,int param_1,int param_2)

{
  *(int *)(this + 0x138) = param_1;
  *(int *)(this + 0x13c) = param_2;
  *(undefined4 *)(this + 0x134) = 0;
  return;
}


/* UIDangerRoomSkipLevel::SetSun(int) */

void __thiscall UIDangerRoomSkipLevel::SetSun(UIDangerRoomSkipLevel *this,int param_1)

{
  NumberWidget::SetNumber(*(NumberWidget **)(this + 0x178),param_1,false);
  return;
}


/* UIDangerRoomSkipLevel::GetSkipLevelCount() */

int __thiscall UIDangerRoomSkipLevel::GetSkipLevelCount(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  int iVar2;
  DangerRoomManager *this_00;
  
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = DangerRoomManager::GetNextLevel(this_00);
  *(int *)(this + 0x138) = iVar1;
  iVar2 = 1;
  if (iVar1 % 5 != 0) {
    iVar2 = 6 - iVar1 % 5;
  }
  return iVar2;
}


/* UIDangerRoomSkipLevel::UpdateBeyondPlayer() */

void __thiscall UIDangerRoomSkipLevel::UpdateBeyondPlayer(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = FUN_04a89b2c(*(undefined4 *)(lVar2 + 0x9c));
  NumberWidget::SetNumber(*(NumberWidget **)(this + 0x180),iVar1,false);
  return;
}


/* UIDangerRoomSkipLevel::NeedChoosePlant() */

undefined8 __thiscall UIDangerRoomSkipLevel::NeedChoosePlant(UIDangerRoomSkipLevel *this)

{
  DangerRoomManager *this_00;
  undefined8 uVar1;
  
  if (*(int *)(this + 0x138) != 1) {
    return 0;
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar1 = DangerRoomManager::PlayerReachRequiredPlantNum(this_00);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdateSkipLevelNextBossButton() */

void __thiscall UIDangerRoomSkipLevel::UpdateSkipLevelNextBossButton(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  PVZ2UIButton *pPVar2;
  UIWidgetText *pUVar3;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Btn_Skip_Level_Next_Boss");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar2 != (PVZ2UIButton *)0x0) {
    iVar1 = GetSkipLevelCount(this);
    FUN_05478178(asStack_10,L"[DANGERROOM_SKIP_LEVEL_NEXT_BOSS_MSG]",auStack_20);
    TodReplaceNumberString((wstring *)asStack_10,L"{NUMS}",iVar1);
    FUN_05476c50(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_SkipLevel_NextBoss");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    PuzzleTip::SetTip(pUVar3,auStack_18);
    (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,0x46 < iVar1 + *(int *)(this + 0x138));
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdateCurrentScore() */

void UIDangerRoomSkipLevel::UpdateCurrentScore(void)

{
  Dialog *in_x0;
  DangerRoomManager *this;
  ulong uVar1;
  UIWidgetText *pUVar2;
  int in_w3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar1 = DangerRoomManager::GetDayScore(this);
  std::string::string(asStack_10,"[CURRENT_SCORE]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_10,(string *)&DAT_056fda40,(wchar_t *)(uVar1 & 0xffffffff),
             in_w3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Score");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar2,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdateScorePredict() */

void __thiscall UIDangerRoomSkipLevel::UpdateScorePredict(UIDangerRoomSkipLevel *this)

{
  long lVar1;
  ulong uVar2;
  UIWidgetText *pUVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = FUN_04a89b30(*(undefined4 *)(lVar1 + 0xa0));
  Sexy::StrFormat(L"+%d",auStack_18,uVar2 & 0xffffffff);
  std::string::string(asStack_10,"UIText_AddScore");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar3,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::InitSunWidget() */

void __thiscall UIDangerRoomSkipLevel::InitSunWidget(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  DangerRoomManager *this_00;
  UIWidgetText *pUVar2;
  NumberWidget *this_01;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = DangerRoomManager::GetSunNum(this_00);
  std::string::string(asStack_18,"UIText_SunCount");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  this_01 = ::operator_new(0x120);
  memset(this_01,0,0x120);
  NumberWidget::NumberWidget(this_01);
  *(NumberWidget **)(this + 0x178) = this_01;
  uVar3 = FUN_04a89b44(*(undefined8 *)(pUVar2 + 0xe8));
  Sexy::Color::Color((Color *)asStack_18,1);
  NumberWidget::SetFontMode(this_01,uVar3,asStack_18);
  plVar4 = *(long **)(this + 0x178);
  pcVar5 = *(code **)(*plVar4 + 0x1a0);
  (**(code **)(*(long *)pUVar2 + 0x48))(asStack_18,pUVar2);
  (*pcVar5)(plVar4,asStack_18);
  (**(code **)(**(long **)(pUVar2 + 0x20) + 0x60))
            (*(long **)(pUVar2 + 0x20),*(undefined8 *)(this + 0x178));
  NumberWidget::SetNumber(*(NumberWidget **)(this + 0x178),iVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::InitBeyondPlayer() */

void __thiscall UIDangerRoomSkipLevel::InitBeyondPlayer(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  NumberWidget *this_00;
  string *psVar5;
  code *pcVar6;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = FUN_04a89b2c(*(undefined4 *)(lVar3 + 0x9c));
  std::string::string(asStack_18,"UIText_PlayerHolder");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  this_00 = ::operator_new(0x120);
  memset(this_00,0,0x120);
  NumberWidget::NumberWidget(this_00);
  lVar3 = *(long *)pUVar4;
  *(NumberWidget **)(this + 0x180) = this_00;
  pcVar6 = *(code **)(*(long *)this_00 + 0x1a0);
  (**(code **)(lVar3 + 0x48))(asStack_18,pUVar4);
  (*pcVar6)(this_00,asStack_18);
  iVar2 = FUN_04a89b48(*(undefined4 *)(pUVar4 + 0xe0));
  LevelEditorTowerDefendStartingPlantfood::SetValue
            (*(LevelEditorTowerDefendStartingPlantfood **)(this + 0x180),iVar2);
  psVar5 = *(string **)(this + 0x180);
  std::string::string(asStack_18,"IMAGE_UI_DANGERROOM_DIALOG_N");
  ZombieItemWidget::SetType(psVar5);
  std::string::~string(asStack_18);
  nop();
  NumberWidget::SetNumber(*(NumberWidget **)(this + 0x180),iVar1,false);
  (**(code **)(**(long **)(pUVar4 + 0x20) + 0x60))
            (*(long **)(pUVar4 + 0x20),*(undefined8 *)(this + 0x180));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdateLevel() */

void UIDangerRoomSkipLevel::UpdateLevel(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  Dialog *in_x0;
  ImageFont *this;
  UIWidgetText *pUVar4;
  PVZ2UIButton *pPVar5;
  long lVar6;
  ulong uVar7;
  UIWidgetText *pUVar8;
  long *plVar9;
  int in_w3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ImageFont *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = Sexy::ImageFont::GetPointSize(this);
  std::string::string(asStack_10,"[CHALLENGE_LEVEL]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_10,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)*(uint *)(in_x0 + 0x138),in_w3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Title");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar4,auStack_30);
  std::string::string(asStack_10,"Btn_Skip");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar5[0x6e] = (PVZ2UIButton)((int)uVar2 <= *(int *)(in_x0 + 0x138));
  FUN_05476574(auStack_28);
  if ((int)uVar2 < 1) {
    TodStringTranslate(L"[UNABLE_TO_SKIP_LEVEL]");
    FUN_054766c8(auStack_28,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    std::string::string(asStack_18,"[MAX_LEVEL_TO_SKIP]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar2,in_w3);
    FUN_054766c8(auStack_28,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  std::string::string(asStack_10,"UIText_MaxSkip");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar4,auStack_28);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,(byte)in_x0[0x198] ^ 1);
  lVar6 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar3 = FUN_04a89b28(*(undefined4 *)(lVar6 + 0x98));
  *(undefined4 *)(in_x0 + 0x140) = uVar3;
  lVar6 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar7 = FUN_04a89b24(*(undefined4 *)(lVar6 + 0x94));
  Sexy::StrFormat(L"%d",auStack_20,uVar7 & 0xffffffff);
  std::string::string(asStack_10,"UIText_GemCost");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar4,auStack_20);
  std::string::string(asStack_18,"[SKIP_LEVEL]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_18,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)*(uint *)(in_x0 + 0x140),in_w3);
  FUN_054766c8(auStack_28,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_10,"UIText_SkipLevel");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar8,auStack_28);
  std::string::string(asStack_10,"UIImage_Gem");
  plVar9 = (long *)UI::Dialog::GetWidget(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = (byte)pPVar5[0x6e] ^ 1;
  (**(code **)(*plVar9 + 0x158))(plVar9,bVar1);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,bVar1);
  (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,bVar1);
  if (bVar1 == 0) {
    TodStringTranslate(L"[UNABLE_TO_SKIP_LEVEL]");
  }
  else {
    FUN_05478178(asStack_10,&DAT_056f11a8,asStack_18);
    nop();
  }
  thunk_FUN_05477b9c(pPVar5 + 0xd8,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdateMower() */

void __thiscall UIDangerRoomSkipLevel::UpdateMower(UIDangerRoomSkipLevel *this)

{
  UIWidgetImage *this_00;
  Image *pIVar1;
  DangerRoomManager *this_01;
  ulong uVar2;
  UIWidgetText *pUVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Mower");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pIVar1 = (Image *)GetMowerImage(this,(string *)(this + 0x148));
  UIWidgetImage::SetImage(this_00,pIVar1);
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetMowerNum(this_01);
  Sexy::StrFormat(L"%d",auStack_18,uVar2 & 0xffffffff);
  std::string::string(asStack_10,"UIText_MowerCount");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar3,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::CreateSelectEffect() */

void __thiscall UIDangerRoomSkipLevel::CreateSelectEffect(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ResourceInfo *pRVar4;
  RtClass *pRVar5;
  TimeChallengeEndLevelUI *this_00;
  UIWidgetAnim *this_01;
  RtWeakPtr aRStack_68 [8];
  FastCurve aFStack_60 [8];
  int local_58;
  int local_54;
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"POPANIM_EFFECTS_DANGERROOM_SELECT_LEVEL");
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  pRVar5 = (RtClass *)PopAnimRig::StaticGetClass();
  this_00 = (TimeChallengeEndLevelUI *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar4,pRVar5);
  Sexy::FastCurve::SetOutRange(aFStack_60,0.55,0.55);
  iVar1 = FUN_04a8a260(0);
  iVar2 = FUN_04a8a260(0xffffffea);
  Sexy::Point::Point((Point *)&local_58,iVar1,iVar2);
  this_01 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_01);
  UIWidgetAnim::SetAnimRig(this_01,(PopAnimRig *)this_00);
  FUN_04a89b50(this_01 + 0xe0,aFStack_60);
  iVar1 = *(int *)(this + 0x150);
  iVar2 = *(int *)(this + 0x154);
  uVar3 = FUN_04a8a260(100);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar1 + local_58,iVar2 + local_54,uVar3,uVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  this_01[0x59] = (UIWidgetAnim)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UIDangerRoomSkipLevel() */

void __thiscall UIDangerRoomSkipLevel::UIDangerRoomSkipLevel(UIDangerRoomSkipLevel *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIDangerRoomSkipLevel>::UISingletonDialog
            ((UISingletonDialog<UIDangerRoomSkipLevel> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0693fdd0;
  *(undefined **)(this + 0xd8) = &DAT_06940120;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  Set8BytesTo0(this + 0x148);
  Sexy::Point::Point((Point *)(this + 0x150));
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 400) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSkipDangerRoom);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(int,S2C_DangerRoomSkipLevel_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifySkipDangerRoom,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectScreenClosed);
  Sexy::Delegate0::Delegate0<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DangerRoomSelectScreenClosed,aDStack_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::CalcCenterZombiePos() */

void UIDangerRoomSkipLevel::CalcCenterZombiePos(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Dialog *in_x0;
  long lVar8;
  long lVar9;
  Point *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Background");
  lVar8 = UI::Dialog::GetWidget(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar6 = FUN_04a8a260(10);
  iVar1 = *(int *)(lVar8 + 0x50);
  iVar2 = *(int *)(lVar8 + 0x48);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec08);
  iVar3 = *(int *)(lVar9 + 0x38);
  iVar4 = *(int *)(lVar8 + 0x4c);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec08);
  iVar5 = *(int *)(lVar8 + 0x3c);
  iVar7 = FUN_04a8a260(0x1e);
  Sexy::Point::Point(in_x8,iVar2 + (iVar1 - iVar3) / 2 + iVar6,(iVar4 - iVar5) - iVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSkipLevel::ButtonPress(int) */

void UIDangerRoomSkipLevel::ButtonPress(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = InScrollLevel((UIDangerRoomSkipLevel *)(ulong)(uint)param_1);
  if (cVar1 != '\0') {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to UIDangerRoomSkipLevel::ButtonPress(int) */

void __thiscall UIDangerRoomSkipLevel::ButtonPress(UIDangerRoomSkipLevel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::PlaySelectEffect() */

void __thiscall UIDangerRoomSkipLevel::PlaySelectEffect(UIDangerRoomSkipLevel *this)

{
  PopAnimRig *pPVar1;
  char *pcVar2;
  long lVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  lVar3 = *(long *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    lVar3 = CreateSelectEffect(this);
    *(long *)(this + 0x160) = lVar3;
  }
  pPVar1 = (PopAnimRig *)FUN_04a89b4c(*(undefined8 *)(lVar3 + 0xd8));
  std::string::string(asStack_58,"effects1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<UIDangerRoomSkipLevel,void(UIDangerRoomSkipLevel::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar3 = *(long *)(this + 0x168);
  if (lVar3 == 0) {
    lVar3 = CreateSelectEffect(this);
    *(long *)(this + 0x168) = lVar3;
  }
  pPVar1 = (PopAnimRig *)FUN_04a89b4c(*(undefined8 *)(lVar3 + 0xd8));
  std::string::string(asStack_50,"effects2");
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  nop();
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Lottery_Normal");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::Update() */

void __thiscall UIDangerRoomSkipLevel::Update(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar3 = InScrollLevel(this);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(this + 0x138);
    iVar2 = *(int *)(this + 0x13c);
    iVar4 = GetZombieImageGap();
    iVar4 = (iVar1 - iVar2) * iVar4;
    local_c = iVar4;
    if (iVar4 != *(int *)(this + 0x134)) {
      fVar6 = (float)PVZ_Dt();
      *(int *)(this + 0x134) = (int)((float)*(int *)(this + 0x134) + (float)iVar4 * fVar6);
      piVar5 = eastl::max_alt<int>((int *)(this + 0x134),&local_c);
      iVar1 = *piVar5;
      *(int *)(this + 0x134) = iVar1;
      if (iVar4 == iVar1) {
        PlaySelectEffect(this);
      }
    }
  }
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x108))();
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x108))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::PlaySunAddEffect() */

void __thiscall UIDangerRoomSkipLevel::PlaySunAddEffect(UIDangerRoomSkipLevel *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PopAnimRig *pPVar4;
  DangerRoomManager *this_00;
  char *pcVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  UIWidgetAnim *this_01;
  long lVar8;
  long lVar9;
  long *plVar10;
  RtWeakPtr aRStack_58 [8];
  FastCurve aFStack_50 [8];
  int local_48;
  int local_44;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar9 = *(long *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  if (lVar9 == 0) {
    std::string::string(asStack_40,"POPANIM_EFFECTS_DANGERROOM_ADD_SUN");
    GetPAMByName(asStack_40);
    std::string::~string(asStack_40);
    nop();
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
    pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
    pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar6,pRVar7);
    Sexy::FastCurve::SetOutRange(aFStack_50,0.55,0.55);
    iVar2 = FUN_04a8a260(0xffffffce);
    Sexy::Point::Point((Point *)&local_48,iVar2,iVar2);
    std::string::string(asStack_40,"UIImage_Sun");
    lVar9 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    this_01 = ::operator_new(0x118);
    UIWidgetAnim::UIWidgetAnim(this_01);
    *(UIWidgetAnim **)(this + 0x170) = this_01;
    UIWidgetAnim::SetAnimRig(this_01,pPVar4);
    FUN_04a89b50(*(long *)(this + 0x170) + 0xe0,aFStack_50);
    plVar10 = *(long **)(this + 0x170);
    iVar2 = *(int *)(lVar9 + 0x48);
    iVar1 = *(int *)(lVar9 + 0x4c);
    uVar3 = FUN_04a8a260(100);
    (**(code **)(*plVar10 + 0x198))(plVar10,iVar2 + local_48,iVar1 + local_44,uVar3,uVar3);
    plVar10 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(this + 0x170);
    lVar8 = *plVar10;
    *(undefined1 *)(lVar9 + 0x59) = 0;
    (**(code **)(lVar8 + 0x60))(plVar10,lVar9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    lVar9 = *(long *)(this + 0x170);
  }
  pPVar4 = (PopAnimRig *)FUN_04a89b4c(*(undefined8 *)(lVar9 + 0xd8));
  std::string::string(asStack_40,"idle");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar4,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar2 = DangerRoomManager::GetSunNum(this_00);
  NumberWidget::SetNumber(*(NumberWidget **)(this + 0x178),iVar2,true);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Endless_Plant_Inc");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSkipLevel::OnAnimStopped(std::string const&) */

void __thiscall UIDangerRoomSkipLevel::OnAnimStopped(UIDangerRoomSkipLevel *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"effects1");
  if (!bVar1) {
    return;
  }
  PlaySunAddEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::UpdatePlantCount() */

void __thiscall UIDangerRoomSkipLevel::UpdatePlantCount(UIDangerRoomSkipLevel *this)

{
  DangerRoomManager *this_00;
  DangerRoomInfo *pDVar1;
  undefined8 uVar2;
  UIWidgetText *pUVar3;
  undefined1 auStack_c0 [8];
  string asStack_b8 [8];
  DangerRoomInfo aDStack_b0 [144];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar1 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(this_00,false);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar1);
  uVar2 = FUN_04a89b60(local_20,local_18);
  Sexy::StrFormat(L"%d",auStack_c0,uVar2);
  std::string::string(asStack_b8,"UIText_PlantCount");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  PuzzleTip::SetTip(pUVar3,auStack_c0);
  FUN_05476c50(auStack_c0);
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::OnCreate() */

void __thiscall UIDangerRoomSkipLevel::OnCreate(UIDangerRoomSkipLevel *this)

{
  bool bVar1;
  undefined4 uVar2;
  Widget *pWVar3;
  undefined8 uVar4;
  DangerRoomManager *this_00;
  long *plVar5;
  long *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this[0x59] = (UIDangerRoomSkipLevel)0x0;
  std::string::string((string *)&local_10,"UIImage_Background");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,true);
  UI::Dialog::SetDarkBgAlpha((Dialog *)this,0.7);
  CalcCenterZombiePos();
  *(undefined8 *)(this + 0x150) = local_10;
  uVar4 = DangerRoomModule::GetDangerRoomPropertySheet();
  *(undefined8 *)(this + 0x188) = uVar4;
  Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  Sexy::IAsyncNetworkTask::GetName();
  FUN_05474278(this + 0x148,(string *)&local_10);
  std::string::~string((string *)&local_10);
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetNextLevel(this_00);
  this[0x198] = (UIDangerRoomSkipLevel)0x0;
  *(undefined4 *)(this + 0x138) = uVar2;
  *(undefined4 *)(this + 0x13c) = uVar2;
  InitSunWidget(this);
  UpdateCurrentScore();
  UpdateScorePredict(this);
  InitBeyondPlayer(this);
  UpdateLevel();
  UpdatePlantCount(this);
  UpdateMower(this);
  std::string::string((string *)&local_10,"Btn_Skip");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = FUN_04a8b7e0((TaskResource *)plVar5[1]);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(plVar5 + 1));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar6 = (long *)*plVar6;
    if (plVar6 != plVar5) {
      *(uint *)(plVar6 + 0xc) = *(uint *)(plVar6 + 0xc) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  (**(code **)(*plVar5 + 0x158))(plVar5,(byte)this[0x198] ^ 1);
  std::string::string((string *)&local_10,"Btn_Skip_Level_Next_Boss");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (plVar5 != (long *)0x0) {
    local_18 = FUN_04a8b7e0((TaskResource *)plVar5[1]);
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(plVar5 + 1));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      plVar6 = (long *)*plVar6;
      if (plVar6 != plVar5) {
        *(uint *)(plVar6 + 0xc) = *(uint *)(plVar6 + 0xc) | 0x10;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    (**(code **)(*plVar5 + 0x158))(plVar5,this[0x198]);
    if (this[0x198] != (UIDangerRoomSkipLevel)0x0) {
      UpdateSkipLevelNextBossButton(this);
    }
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 400) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::OnSelectScreenClosed() */

void UIDangerRoomSkipLevel::OnSelectScreenClosed(void)

{
  int iVar1;
  int iVar2;
  UIDangerRoomSkipLevel *in_x0;
  DangerRoomManager *pDVar3;
  DangerRoomInfo *pDVar4;
  NetworkMgr *pNVar5;
  INetworkMsgProcess *pIVar6;
  undefined1 in_w2;
  DangerRoomInfo aDStack_b0 [8];
  undefined4 local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x194) == 0) {
    UISingletonDialog<UIDangerRoomSkipLevel>::CloseDialog();
    DangerRoomModule::StartDangerRoomLevel
              ((DangerRoomModule *)(in_x0 + 0x148),(string *)0x0,(bool)in_w2);
  }
  else if (*(int *)(in_x0 + 0x194) == 2) {
    iVar1 = *(int *)(in_x0 + 0x138);
    iVar2 = GetSkipLevelCount(in_x0);
    pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    pDVar4 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar3,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar4);
    local_a8 = 0xffffffff;
    pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetDangerRoomInfo(pDVar3,aDStack_b0,false);
    pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar6 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
    INetworkMsgProcess::RequestSkipDangerRoom(pIVar6,iVar1 + iVar2 + -1,1);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  else {
    iVar1 = *(int *)(in_x0 + 0x138);
    iVar2 = *(int *)(in_x0 + 0x140);
    pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    pDVar4 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar3,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar4);
    local_a8 = 0xffffffff;
    pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetDangerRoomInfo(pDVar3,aDStack_b0,false);
    pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar6 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
    INetworkMsgProcess::RequestSkipDangerRoom(pIVar6,iVar1 + iVar2 + -1,0);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::ButtonDepress(int) */

void __thiscall UIDangerRoomSkipLevel::ButtonDepress(UIDangerRoomSkipLevel *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  UIMessageBox *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = InScrollLevel(this);
  if (cVar2 != '\0') goto switchD_04a8d27c_default;
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 1:
    *(undefined4 *)(this + 0x194) = 1;
    cVar2 = NeedChoosePlant(this);
    goto joined_r0x04a8d3a0;
  case 2:
    iVar1 = *(int *)(this + 0x138);
    lVar5 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar3 = FUN_04a89b34(*(undefined4 *)(lVar5 + 0xe0));
    if (iVar3 <= iVar1) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        std::string::string(asStack_18,"[REACH_DANGER_ROOM_LIMIT]");
        std::string::string(asStack_10,"[REVIVE_TIP]");
        UIMessageBox::SetMessage(this_00,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        UIMessageBox::SetShowType(this_00,2);
        UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
      }
      break;
    }
    *(undefined4 *)(this + 0x194) = 0;
    cVar2 = NeedChoosePlant(this);
joined_r0x04a8d3a0:
    if (cVar2 == '\0') {
      OnSelectScreenClosed();
    }
    else {
      UIDangerRoomSelectScreen::create(true);
    }
    break;
  case 3:
    lVar5 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    FUN_04a89b70(lVar5 + 0x100);
  case 0:
    UISingletonDialog<UIDangerRoomSkipLevel>::CloseDialog();
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    break;
  case 4:
    *(undefined4 *)(this + 0x194) = 2;
    OnSelectScreenClosed();
  default:
    break;
  }
switchD_04a8d27c_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIDangerRoomSkipLevel::ButtonDepress(int) */

void __thiscall UIDangerRoomSkipLevel::ButtonDepress(UIDangerRoomSkipLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::DrawMower(Sexy::Graphics*, int, int, Sexy::Image*, bool) */

void __thiscall
UIDangerRoomSkipLevel::DrawMower
          (UIDangerRoomSkipLevel *this,Graphics *param_1,int param_2,int param_3,Image *param_4,
          bool param_5)

{
  int iVar1;
  int iVar2;
  RenderEffectDefinition *pRVar3;
  RenderEffect *pRVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  code *pcVar6;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5) {
    pRVar3 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b7ed10);
    pRVar4 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar3);
    pcVar6 = *(code **)(*(long *)pRVar4 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar6)(pRVar4,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar4,1);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_4);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_4);
    Sexy::Graphics::DrawImage(param_1,param_4,param_2,param_3,iVar1,iVar2);
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7edd8);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7edd8);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7edd8);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar5,param_2,param_3,iVar1,iVar2);
  }
  else {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_4);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_4);
    Sexy::Graphics::DrawImage(param_1,param_4,param_2,param_3,iVar1,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::DrawZombie(Sexy::Graphics*, int) */

void __thiscall
UIDangerRoomSkipLevel::DrawZombie(UIDangerRoomSkipLevel *this,Graphics *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  RenderEffectDefinition *pRVar10;
  RenderEffect *pRVar11;
  Image *pIVar12;
  SalesProgressBar *this_00;
  code *pcVar13;
  LotteryResultProgressBar *this_01;
  undefined1 auStack_48 [8];
  Insets aIStack_40 [16];
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) goto LAB_04a8ded4;
  iVar4 = GetZombieImageGap();
  iVar5 = *(int *)(this + 0x138);
  bVar3 = false;
  iVar1 = *(int *)(this + 0x154);
  iVar4 = *(int *)(this + 0x134) + *(int *)(this + 0x150) + (param_2 - iVar5) * iVar4;
  if (param_2 == iVar5) {
    bVar3 = param_2 == *(int *)(this + 0x13c);
    iVar6 = *(int *)(*(long *)(this + 0x188) + 0x1a8);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = param_2 / iVar6;
    }
    if (param_2 != iVar7 * iVar6) goto LAB_04a8dc78;
LAB_04a8df08:
    if (param_2 == 1) {
LAB_04a8e0f8:
      this_01 = (LotteryResultProgressBar *)0x0;
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec58);
      if (bVar3) {
        this_01 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec98);
      }
    }
    else {
      this_01 = (LotteryResultProgressBar *)0x0;
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ee08);
      if (bVar3) {
        this_01 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ee58);
      }
    }
  }
  else {
    iVar6 = *(int *)(*(long *)(this + 0x188) + 0x1a8);
    iVar7 = 0;
    if (iVar6 != 0) {
      iVar7 = param_2 / iVar6;
    }
    if (param_2 == iVar7 * iVar6) goto LAB_04a8df08;
LAB_04a8dc78:
    if (param_2 == 1) goto LAB_04a8e0f8;
    this_01 = (LotteryResultProgressBar *)0x0;
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec08);
    if (bVar3) {
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec30);
    }
  }
  if (param_2 < iVar5) {
    pRVar10 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b7ed10);
    pRVar11 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar10);
    pcVar13 = *(code **)(*(long *)pRVar11 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar13)(pRVar11,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar11,1);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar9,iVar4,iVar1,(int)((float)iVar5 * 0.9),
               (int)((float)iVar6 * 0.9));
    iVar5 = FUN_04a8a260(0xc);
    iVar6 = FUN_04a8a260(8);
    iVar7 = FUN_04a8a260(100);
    iVar8 = FUN_04a8a260(0x32);
    Sexy::Insets::Insets(aIStack_40,iVar5 + iVar4,iVar6 + iVar1,iVar7,iVar8);
    std::string::string(asStack_30,"[LEVEL_INDEX]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_2,
               iVar7);
    std::string::~string(asStack_30);
    nop();
    uVar2 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
    Sexy::Color::Color((Color *)asStack_30,1);
    WriteWordInRect(param_1,auStack_48,aIStack_40,uVar2,asStack_30,0,1);
    FUN_05476c50(auStack_48);
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ece8);
    iVar5 = FUN_04a8a260(0x32);
    iVar6 = FUN_04a8a260(0x1e);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ece8);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ece8);
    iVar8 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar12,iVar5 + iVar4,iVar6 + iVar1,iVar7,iVar8);
  }
  else {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar9,iVar4,iVar1,(int)((float)iVar5 * 0.9),
               (int)((float)iVar6 * 0.9));
    if (this_01 != (LotteryResultProgressBar *)0x0) {
      iVar5 = FUN_04a8a260(10);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)this_01,iVar4 - iVar5,iVar1 - iVar5,(int)((float)iVar6 * 0.9),
                 (int)((float)iVar7 * 0.9));
    }
    iVar5 = FUN_04a8a260(0xc);
    iVar6 = FUN_04a8a260(8);
    iVar7 = FUN_04a8a260(100);
    iVar8 = FUN_04a8a260(0x32);
    Sexy::Insets::Insets((Insets *)asStack_30,iVar5 + iVar4,iVar6 + iVar1,iVar7,iVar8);
    std::string::string(asStack_20,"[LEVEL_INDEX]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_20,(string *)L"{NUMBER}",(wchar_t *)(ulong)(uint)param_2,
               iVar7);
    std::string::~string(asStack_20);
    nop();
    uVar2 = PrimeText_Game::Typeface_FZShaoEr_26_Outline;
    Sexy::Color::Color((Color *)asStack_20,1);
    WriteWordInRect(param_1,aIStack_40,(Insets *)asStack_30,uVar2,asStack_20,0,1);
    FUN_05476c50(aIStack_40);
  }
LAB_04a8ded4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::Draw(Sexy::Graphics*) */

void __thiscall UIDangerRoomSkipLevel::Draw(UIDangerRoomSkipLevel *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,aIStack_18);
  DrawEffect(this,param_1,*(UIWidgetAnim **)(this + 0x168));
  iVar3 = *(int *)(this + 0x138) + -3;
  do {
    iVar4 = iVar3 + 1;
    DrawZombie(this,param_1,iVar3);
    iVar3 = iVar4;
  } while (iVar4 < *(int *)(this + 0x138));
  cVar2 = InScrollLevel(this);
  if (cVar2 == '\0') {
    iVar4 = *(int *)(this + 0x138);
    iVar3 = 4;
  }
  else {
    iVar4 = *(int *)(this + 0x138);
    iVar3 = (*(int *)(this + 0x13c) - iVar4) + 4;
  }
  if (iVar4 < iVar3 + iVar4) {
    do {
      iVar1 = iVar4 + 1;
      DrawZombie(this,param_1,iVar4);
      iVar4 = iVar1;
    } while (iVar1 < iVar3 + *(int *)(this + 0x138));
  }
  DrawEffect(this,param_1,*(UIWidgetAnim **)(this + 0x160));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::ShowEndlessBoost() */

void UIDangerRoomSkipLevel::ShowEndlessBoost(void)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Endless_Boost_Check");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"EndlessBoost/active");
  bVar1 = GetLuaSharedData<bool>(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (bVar1) {
    std::string::string(asStack_10,"Endless_Boost_Pop");
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSkipLevel::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void UIDangerRoomSkipLevel::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"change_level");
  if (!bVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x13c);
  UpdateLevel();
  UpdateCurrentScore();
  UpdateScorePredict((UIDangerRoomSkipLevel *)param_1);
  UpdateBeyondPlayer((UIDangerRoomSkipLevel *)param_1);
  if (param_1[0x198] == (string)0x0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  else {
    UpdateSkipLevelNextBossButton((UIDangerRoomSkipLevel *)param_1);
    ShowEndlessBoost();
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSkipLevel::OnSkipDangerRoom(int, S2C_DangerRoomSkipLevel const*, S2C_PlayerInfo
   const*) */

void __thiscall
UIDangerRoomSkipLevel::OnSkipDangerRoom
          (UIDangerRoomSkipLevel *this,int param_1,S2C_DangerRoomSkipLevel *param_2,
          S2C_PlayerInfo *param_3)

{
  undefined4 uVar1;
  DangerRoomManager *this_00;
  char *pcVar2;
  vector *pvVar3;
  TGALogMgr *pTVar4;
  string *extraout_x1;
  string *__n;
  size_t sVar5;
  DangerRoomModule aDStack_120 [8];
  MetricsCollectorNameSpace aMStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  LogGameItemData aLStack_100 [4];
  int local_fc;
  int local_f4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f0 [24];
  string asStack_d8 [24];
  string asStack_c0 [8];
  string asStack_b8 [16];
  undefined1 auStack_a8 [56];
  DString aDStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar1 = DangerRoomManager::GetNextLevel(this_00);
    *(undefined4 *)(this + 0x134) = 0;
    *(undefined4 *)(this + 0x13c) = uVar1;
    Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    Sexy::IAsyncNetworkTask::GetName();
    DangerRoomModule::GetLevelName
              (aDStack_120,(string *)(ulong)*(uint *)(this + 0x13c),(int)param_2);
    MetricsCollectorNameSpace::GetMissionName(aMStack_118,extraout_x1);
    pcVar2 = (char *)DString::c_str(aDStack_70);
    std::string::append((string *)aMStack_118,pcVar2,(size_t)param_2);
    DString::~DString(aDStack_70);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f0);
    if (param_3 == (S2C_PlayerInfo *)0x0) {
      LogGameItemData::LogGameItemData(aLStack_100,0xbc0,0);
      local_f4 = 0;
    }
    else {
      LogGameItemData::LogGameItemData(aLStack_100,0xbc0,*(int *)(param_3 + 0x34));
      local_f4 = *(int *)(param_3 + 0x40);
    }
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_f0,aLStack_100);
    pvVar3 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar3);
    std::string::string(asStack_108,"Skip_Stage");
    std::string::string(asStack_d8,"");
    std::string::string((string *)aDStack_70,"");
    __n = asStack_d8;
    BehaviorLog::itemPurchaseEx
              (asStack_108,(string *)aMStack_118,asStack_d8,(string *)aDStack_70,asStack_110);
    std::string::~string((string *)aDStack_70);
    nop();
    std::string::~string(asStack_d8);
    nop();
    std::string::~string(asStack_108);
    nop();
    TGALogEndlessData::TGALogEndlessData((TGALogEndlessData *)asStack_d8);
    std::string::append(asStack_d8,"9",(size_t)__n);
    sVar5 = (long)local_f4 ^ (long)local_f4 >> 0x3f;
    DString::DString(aDStack_70,(int)sVar5 - (local_f4 >> 0x1f));
    pcVar2 = (char *)DString::c_str(aDStack_70);
    std::string::append(asStack_c0,pcVar2,sVar5);
    DString::~DString(aDStack_70);
    if (local_f4 == 0) {
      sVar5 = (long)local_fc ^ (long)local_fc >> 0x3f;
      DString::DString(aDStack_70,(int)sVar5 - (local_fc >> 0x1f));
      pcVar2 = (char *)DString::c_str(aDStack_70);
      std::string::append(asStack_b8,pcVar2,sVar5);
      DString::~DString(aDStack_70);
    }
    else {
      std::string::append(asStack_b8,"0",sVar5);
    }
    thunk_FUN_05475e00(auStack_a8,aMStack_118);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogEndlessData::TGALogEndlessData
              ((TGALogEndlessData *)aDStack_70,(TGALogEndlessData *)asStack_d8);
    TGALogMgr::LogEndless(pTVar4,aDStack_70);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)aDStack_70);
    TGALogEndlessData::~TGALogEndlessData((TGALogEndlessData *)asStack_d8);
    std::string::~string(asStack_110);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_f0);
    std::string::~string((string *)aMStack_118);
    std::string::~string((string *)aDStack_120);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

