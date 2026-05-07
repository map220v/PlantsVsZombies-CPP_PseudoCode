// Class: UIFestivalGoldenEgg


/* UIFestivalGoldenEgg::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIFestivalGoldenEgg::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFestivalGoldenEgg::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIFestivalGoldenEgg::ScrollTargetReached(UIFestivalGoldenEgg *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIFestivalGoldenEgg::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIFestivalGoldenEgg::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFestivalGoldenEgg::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIFestivalGoldenEgg::ScrollTargetInterrupted(UIFestivalGoldenEgg *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* UIFestivalGoldenEgg::TabSelectionChanged(int) */

int UIFestivalGoldenEgg::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIFestivalGoldenEgg::TabSelectionChanged(int) */

void __thiscall UIFestivalGoldenEgg::TabSelectionChanged(UIFestivalGoldenEgg *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::GetLayoutName() */

void __thiscall UIFestivalGoldenEgg::GetLayoutName(UIFestivalGoldenEgg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGoldenEgg");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFestivalGoldenEgg::GetHammerRequire() */

undefined4 __thiscall UIFestivalGoldenEgg::GetHammerRequire(UIFestivalGoldenEgg *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar7 = *(undefined8 *)(this + 0x2a8);
  iVar8 = 0;
  lVar2 = FUN_03a17b38(uVar7,*(undefined8 *)(this + 0x2b0));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_03a17b44(uVar7,uVar6);
      cVar1 = GoldenEggAnimWidget::IsBroken((GoldenEggAnimWidget *)*puVar3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)FUN_03a17b44(*(undefined8 *)(this + 0x2a8),uVar6);
        cVar1 = GoldenEggAnimWidget::IsBreaking((GoldenEggAnimWidget *)*puVar3);
        if (cVar1 != '\0') {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        iVar8 = iVar8 + 1;
      }
      uVar7 = *(undefined8 *)(this + 0x2a8);
      uVar6 = uVar6 + 1;
      uVar4 = FUN_03a17b38(uVar7,*(undefined8 *)(this + 0x2b0));
    } while (uVar6 < uVar4);
  }
  uVar7 = *(undefined8 *)(this + 0x238);
  uVar6 = FUN_03a17a94(uVar7,*(undefined8 *)(this + 0x240));
  if (uVar6 <= (ulong)(long)iVar8) {
    return 999999;
  }
  puVar5 = (undefined4 *)FUN_03a17aa0(uVar7,(long)iVar8);
  return *puVar5;
}


/* UIFestivalGoldenEgg::GetCurrentHammer() */

undefined4 __thiscall UIFestivalGoldenEgg::GetCurrentHammer(UIFestivalGoldenEgg *this)

{
  return *(undefined4 *)(this + 0x150);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::Update() */

void __thiscall UIFestivalGoldenEgg::Update(UIFestivalGoldenEgg *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Main_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a59);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Bundle_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(1,-1);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::Lock() */

void __thiscall UIFestivalGoldenEgg::Lock(UIFestivalGoldenEgg *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  this[0x148] = (UIFestivalGoldenEgg)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::Unlock() */

void __thiscall UIFestivalGoldenEgg::Unlock(UIFestivalGoldenEgg *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  this[0x148] = (UIFestivalGoldenEgg)0x0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Close");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::SetCurrentHammer(int) */

void __thiscall UIFestivalGoldenEgg::SetCurrentHammer(UIFestivalGoldenEgg *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_festival_golden_egg_hammer");
  PlayerInfo::SetMaterialNum(this_01,asStack_10,*(int *)(this + 0x150));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIText_Hammer");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x150));
  std::operator+("X",asStack_18);
  UIWidgetText::SetString(this_02,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::RewardGot(int, int) */

void __thiscall UIFestivalGoldenEgg::RewardGot(UIFestivalGoldenEgg *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  TGALogMgr *this_00;
  ActivityTypeID *pAVar6;
  char *__s;
  size_t __n;
  ulong uVar7;
  undefined8 uVar8;
  int local_78;
  int local_74;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  TGATourismOctoberData aTStack_50 [8];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  uVar7 = 0;
  uVar8 = *(undefined8 *)(this + 0x2c0);
  local_8 = ___stack_chk_guard;
  local_78 = param_2;
  local_74 = param_1;
  lVar3 = FUN_03a17b4c(uVar8,*(undefined8 *)(this + 0x2c8));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03a17b58(uVar8,uVar7);
      iVar2 = HappyVaseDisplayItem::GetItemID((HappyVaseDisplayItem *)*puVar4);
      if (iVar2 == local_74) {
        puVar4 = (undefined8 *)FUN_03a17b58(*(undefined8 *)(this + 0x2c0),uVar7);
        Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen((PrimeTextWidget *)*puVar4,true);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0x2c0);
      uVar5 = FUN_03a17b4c(uVar8,*(undefined8 *)(this + 0x2c8));
    } while (uVar7 < uVar5);
  }
  uVar7 = 0;
  iVar2 = 0;
  TGATourismOctoberData::TGATourismOctoberData(aTStack_50);
  std::string::append((string *)aTStack_50,"3",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
  FUN_05474278(auStack_48,asStack_58);
  std::string::~string(asStack_58);
  uVar8 = *(undefined8 *)(this + 0x2a8);
  lVar3 = FUN_03a17b38(uVar8,*(undefined8 *)(this + 0x2b0));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03a17b44(uVar8,uVar7);
      cVar1 = GoldenEggAnimWidget::IsBroken((GoldenEggAnimWidget *)*puVar4);
      if (cVar1 == '\0') {
        puVar4 = (undefined8 *)FUN_03a17b44(*(undefined8 *)(this + 0x2a8),uVar7);
        cVar1 = GoldenEggAnimWidget::IsBreaking((GoldenEggAnimWidget *)*puVar4);
        if (cVar1 != '\0') {
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iVar2 = iVar2 + 1;
      }
      uVar8 = *(undefined8 *)(this + 0x2a8);
      uVar7 = uVar7 + 1;
      uVar5 = FUN_03a17b38(uVar8,*(undefined8 *)(this + 0x2b0));
    } while (uVar7 < uVar5);
  }
  if (iVar2 != 0) {
    uVar8 = *(undefined8 *)(this + 0x238);
    uVar7 = FUN_03a17a94(uVar8,*(undefined8 *)(this + 0x240));
    if ((ulong)(long)(iVar2 + -1) < uVar7) {
      pAVar6 = (ActivityTypeID *)FUN_03a17aa0(uVar8,(long)(iVar2 + -1));
      std::to_string<ActivityTypeID>(pAVar6);
      FUN_05474278(auStack_30,asStack_58);
      std::string::~string(asStack_58);
    }
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_74);
  std::operator+(asStack_70,",");
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_78);
  std::operator+(asStack_68,asStack_60);
  FUN_05474278(auStack_18,asStack_58);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  if (*(int *)(this + 0x280) == local_74) {
    __s = "1";
  }
  else {
    __s = "0";
  }
  std::string::append(asStack_10,__s,__n);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogGoldenEgg(this_00,(TGAGoldenEgg *)aTStack_50);
  TGATourismOctoberData::~TGATourismOctoberData(aTStack_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIFestivalGoldenEgg::ButtonDepress(int) */

void __thiscall UIFestivalGoldenEgg::ButtonDepress(UIFestivalGoldenEgg *this,int param_1)

{
  FestivalGoldenEggManager *this_00;
  
  if (param_1 == 0x58) {
    UISingletonDialog<UIFestivalGoldenEgg>::CloseDialog();
    return;
  }
  if (param_1 == 0x6f) {
    this_00 = (FestivalGoldenEggManager *)
              Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstance();
    FestivalGoldenEggManager::showDescriptionWidget(this_00);
    return;
  }
  return;
}


/* non-virtual thunk to UIFestivalGoldenEgg::ButtonDepress(int) */

void __thiscall UIFestivalGoldenEgg::ButtonDepress(UIFestivalGoldenEgg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::InitBundle() */

void __thiscall UIFestivalGoldenEgg::InitBundle(UIFestivalGoldenEgg *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar7;
  GoldenEggBundleWidget *this_02;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_BundleBG");
  uVar14 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a18de0(0x14);
  iVar3 = FUN_03a18de0(0x28);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,local_10,local_c);
  iVar2 = FUN_03a18de0(0);
  uVar1 = *(undefined4 *)(this_00 + 0x54);
  iVar3 = (int)((float)*(int *)(this_00 + 0x50) * 0.3030303);
  lVar7 = FUN_03a17a94(*(undefined8 *)(this + 0x200),*(undefined8 *)(this + 0x208));
  uVar10 = 0;
  if (lVar7 != 0) {
    do {
      lVar12 = 0;
      iVar5 = 0;
      iVar15 = 0;
      this_02 = ::operator_new(0xf8);
      GoldenEggBundleWidget::GoldenEggBundleWidget(this_02);
      iVar4 = FUN_03a18de0(5);
      (**(code **)(*(long *)this_02 + 0x198))
                (this_02,iVar2 + (iVar4 + iVar3) * (int)uVar14,iVar2,iVar3,uVar1);
      piVar8 = (int *)FUN_03a17aa0(*(undefined8 *)(this + 0x200),uVar14);
      GoldenEggBundleWidget::Init(this_02,(int)uVar14,*piVar8);
      puVar9 = (undefined8 *)FUN_03a17aa8(*(undefined8 *)(this + 0x1e8),uVar14);
      uVar13 = *puVar9;
      lVar7 = FUN_03a17ab4(uVar13,puVar9[1]);
      if (lVar7 != 0) {
        do {
          piVar8 = (int *)FUN_03a17ac8(uVar13,lVar12);
          if (*piVar8 == 0xbc0) {
            iVar15 = piVar8[1];
          }
          else {
            iVar5 = piVar8[1];
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar7);
      }
      uVar14 = uVar14 + 1;
      TemplateBundleWidget::SetReward((TemplateBundleWidget *)this_02,iVar15,iVar5);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      uVar10 = FUN_03a17a94(*(undefined8 *)(this + 0x200),*(undefined8 *)(this + 0x208));
    } while (uVar14 < uVar10);
  }
  iVar5 = FUN_03a18de0(5);
  pcVar11 = *(code **)(*(long *)pUVar6 + 0x60);
  *(int *)(this_01 + 0x50) = iVar2 + (iVar5 + iVar3) * (int)uVar10;
  (*pcVar11)(pUVar6,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIFestivalGoldenEgg::UIFestivalGoldenEgg() */

void __thiscall UIFestivalGoldenEgg::UIFestivalGoldenEgg(UIFestivalGoldenEgg *this)

{
  UISingletonDialog<UIFestivalGoldenEgg>::UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEgg> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  this[0x148] = (UIFestivalGoldenEgg)0x0;
  *(undefined ***)this = &PTR_GetClass_066fe000;
  *(undefined **)(this + 0xd8) = &DAT_066fe368;
  *(undefined **)(this + 0x138) = &DAT_066fe3b0;
  *(undefined ***)(this + 0x140) = &PTR__UIFestivalGoldenEgg_066fe3c8;
  FestivalGoldenEggData::FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x158));
  FestivalGoldenEggPrimaryData::FestivalGoldenEggPrimaryData
            ((FestivalGoldenEggPrimaryData *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::OnCreate() */

void __thiscall UIFestivalGoldenEgg::OnCreate(UIFestivalGoldenEgg *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  lVar2 = Sexy::LazySingleton<GoldenEggTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::InitTask() */

void __thiscall UIFestivalGoldenEgg::InitTask(UIFestivalGoldenEgg *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar6;
  long lVar7;
  long *extraout_x0;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  int iVar12;
  Insets aIStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIImage_TaskBG");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a18de0(0x14);
  iVar3 = FUN_03a18de0(0x28);
  Sexy::Insets::Insets
            (aIStack_48,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_48);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,local_40,local_3c);
  iVar3 = FUN_03a18de0(0);
  iVar2 = *(int *)(this_00 + 0x50);
  iVar12 = (int)((float)(*(int *)(this_00 + 0x54) + iVar3 * -2) * 0.4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  iVar4 = Sexy::LazySingleton<GoldenEggTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4 + 8,true);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::operator=
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38,(vector *)asStack_20);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)asStack_20);
  uVar11 = 0;
  while( true ) {
    uVar1 = local_38;
    uVar9 = FUN_03a17b24(local_38,local_30);
    if (uVar9 <= uVar11) break;
    plVar6 = (long *)FUN_03a17b30(uVar1,uVar11);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
    lVar7 = (**(code **)(*plVar6 + 0x58))();
    FUN_03a17a28(*(undefined8 *)(lVar7 + 0x18));
    nop();
    iVar4 = FUN_03a18de0(5);
    Sexy::Insets::Insets
              ((Insets *)asStack_20,iVar3,iVar3 + (iVar4 + iVar12) * (int)uVar11,iVar2,iVar12);
    (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,asStack_20);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
    puVar8 = (undefined8 *)FUN_03a17b30(local_38,uVar11);
    (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar8);
    uVar11 = uVar11 + 1;
  }
  iVar2 = FUN_03a18de0(5);
  pcVar10 = *(code **)(*(long *)pUVar5 + 0x60);
  *(int *)(this_01 + 0x54) = iVar3 + (iVar2 + iVar12) * (int)uVar9;
  (*pcVar10)(pUVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIFestivalGoldenEgg::~UIFestivalGoldenEgg() */

void __thiscall UIFestivalGoldenEgg::~UIFestivalGoldenEgg(UIFestivalGoldenEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_066fe000;
  *(undefined ***)(this + 0x140) = &PTR__UIFestivalGoldenEgg_066fe3c8;
  *(undefined **)(this + 0xd8) = &DAT_066fe368;
  *(undefined **)(this + 0x138) = &DAT_066fe3b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::~vector
            ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x2c0));
  std::vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>>::~vector
            ((vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>> *)(this + 0x2a8));
  FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData
            ((FestivalGoldenEggPrimaryData *)(this + 0x220));
  FestivalGoldenEggData::~FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x158));
  UISingletonDialog<UIFestivalGoldenEgg>::~UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEgg> *)this);
  return;
}


/* non-virtual thunk to UIFestivalGoldenEgg::~UIFestivalGoldenEgg() */

void __thiscall UIFestivalGoldenEgg::~UIFestivalGoldenEgg(UIFestivalGoldenEgg *this)

{
  ~UIFestivalGoldenEgg(this + -0x140);
  return;
}


/* UIFestivalGoldenEgg::~UIFestivalGoldenEgg() */

void __thiscall UIFestivalGoldenEgg::~UIFestivalGoldenEgg(UIFestivalGoldenEgg *this)

{
  ~UIFestivalGoldenEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIFestivalGoldenEgg::~UIFestivalGoldenEgg() */

void __thiscall UIFestivalGoldenEgg::~UIFestivalGoldenEgg(UIFestivalGoldenEgg *this)

{
  ~UIFestivalGoldenEgg(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::Init(int) */

void __thiscall UIFestivalGoldenEgg::Init(UIFestivalGoldenEgg *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2528];
  string asStack_308 [768];
  long local_8;
  
  *(int *)(this + 0x14c) = param_1;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a18d28(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_308,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEgg::InitEgg() */

void __thiscall UIFestivalGoldenEgg::InitEgg(UIFestivalGoldenEgg *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetImage *pUVar8;
  GoldenEggAnimWidget *pGVar9;
  ulong uVar10;
  long lVar11;
  HappyVaseDisplayItem *this_00;
  int *piVar12;
  ulong uVar13;
  GoldenEggAnimWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"UIImage_MainBG");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*(long *)pUVar8 + 0x80))(pUVar8,1,1);
  std::vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>>::clear
            ((vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>> *)(this + 0x2a8));
  uVar13 = 0;
  while( true ) {
    iVar5 = (int)uVar13;
    uVar10 = FUN_03a17a94(*(undefined8 *)(this + 0x250),*(undefined8 *)(this + 600));
    if (uVar10 <= uVar13) break;
    pGVar9 = ::operator_new(0x130);
    GoldenEggAnimWidget::GoldenEggAnimWidget(pGVar9);
    local_10 = pGVar9;
    iVar6 = FUN_03a18de0(0x7d);
    iVar7 = FUN_03a18de0(0x96);
    iVar1 = FUN_03a18de0(0x1e);
    iVar2 = FUN_03a18de0(0x6e);
    uVar3 = FUN_03a18de0(0x5a);
    uVar4 = FUN_03a18de0(100);
    (**(code **)(*(long *)pGVar9 + 0x198))
              (pGVar9,iVar6 + (iVar5 % 3) * iVar7,iVar1 + (iVar5 / 3) * iVar2,uVar3,uVar4);
    pGVar9 = local_10;
    piVar12 = (int *)FUN_03a17aa0(*(undefined8 *)(this + 0x250),uVar13);
    GoldenEggAnimWidget::Init(pGVar9,*(int *)(this + 0x14c),iVar5,*piVar12 == 1);
    (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,local_10);
    std::vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>>::push_back
              ((vector<GoldenEggAnimWidget*,std::allocator<GoldenEggAnimWidget*>> *)(this + 0x2a8),
               &local_10);
    uVar13 = uVar13 + 1;
  }
  SetCurrentHammer(this,*(int *)(this + 0x234));
  std::string::string((string *)&local_10,"UIImage_Priview_Right");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  iVar5 = FUN_03a18de0(0x1e);
  iVar6 = FUN_03a18de0(0x46);
  iVar7 = FUN_03a18de0(0x10);
  std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::clear
            ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x2c0));
  for (uVar13 = 0;
      lVar11 = FUN_03a17ae8(*(undefined8 *)(this + 0x268),*(undefined8 *)(this + 0x270)),
      uVar13 < lVar11 + 1U; uVar13 = uVar13 + 1) {
    this_00 = ::operator_new(0x108);
    HappyVaseDisplayItem::HappyVaseDisplayItem(this_00);
    local_10 = (GoldenEggAnimWidget *)this_00;
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,iVar5,(*(int *)(pUVar8 + 0x54) - iVar6) / 2,iVar6,iVar6);
    pGVar9 = local_10;
    if (uVar13 == 0) {
      HappyVaseDisplayItem::Init
                ((HappyVaseDisplayItem *)local_10,*(int *)(this + 0x280),*(int *)(this + 0x284));
      Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen
                ((PrimeTextWidget *)local_10,*(int *)(this + 0x288) == 1);
    }
    else {
      piVar12 = (int *)FUN_03a17b18(*(undefined8 *)(this + 0x268),uVar13 - 1);
      HappyVaseDisplayItem::Init((HappyVaseDisplayItem *)pGVar9,*piVar12,piVar12[1]);
      pGVar9 = local_10;
      lVar11 = FUN_03a17b18(*(undefined8 *)(this + 0x268),uVar13 - 1);
      Sexy::PrimeTextWidget::SetDontDrawWhenOffscreen
                ((PrimeTextWidget *)pGVar9,*(int *)(lVar11 + 8) == 1);
    }
    iVar5 = iVar5 + iVar6 + iVar7;
    (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,local_10);
    std::vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>>::push_back
              ((vector<HappyVaseDisplayItem*,std::allocator<HappyVaseDisplayItem*>> *)(this + 0x2c0)
               ,(HappyVaseDisplayItem **)&local_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

