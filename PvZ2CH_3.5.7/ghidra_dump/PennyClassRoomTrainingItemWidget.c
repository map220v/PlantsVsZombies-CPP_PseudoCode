// Class: PennyClassRoomTrainingItemWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::GetTrainingTitle(int) */

void PennyClassRoomTrainingItemWidget::GetTrainingTitle(int param_1)

{
  int in_w1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w1 == 0) {
    __s = "[PENNY_CLASSROOM_BEGINNER_LEVEL]";
  }
  else if (in_w1 == 1) {
    __s = "[PENNY_CLASSROOM_EASY_LEVEL]";
  }
  else if (in_w1 == 2) {
    __s = "[PENNY_CLASSROOM_NORMAL_LEVEL]";
  }
  else {
    if (in_w1 != 3) {
      FUN_05478178();
      nop();
      goto LAB_04de8fa4;
    }
    __s = "[PENNY_CLASSROOM_HARD_LEVEL]";
  }
  std::string::string(asStack_10,__s);
  StringHelper::ToStringValue(asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04de8fa4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::SetProgress(int) */

void __thiscall
PennyClassRoomTrainingItemWidget::SetProgress(PennyClassRoomTrainingItemWidget *this,int param_1)

{
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  this[0xdc] = (PennyClassRoomTrainingItemWidget)(param_1 < 5);
  FUN_05478178(awStack_18,L"[PENNY_CLASSROOM_PROGRESS_DESC]",auStack_20);
  TodReplaceNumberString(awStack_18,L"{NUMS}",*(int *)(this + 0xd8));
  FUN_054766c8(this + 0xf0,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::GetLockDesc(int) */

void PennyClassRoomTrainingItemWidget::GetLockDesc(int param_1)

{
  int in_w1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w1 == 0) {
LAB_04de9148:
    FUN_05478178();
    nop();
  }
  else {
    if (in_w1 == 1) {
      __s = "[PENNY_CLASSROOM_EASY_LEVEL_LOCK_DESC]";
    }
    else if (in_w1 == 2) {
      __s = "[PENNY_CLASSROOM_NORMAL_LEVEL_LOCK_DESC]";
    }
    else {
      if (in_w1 != 3) goto LAB_04de9148;
      __s = "[PENNY_CLASSROOM_HARD_LEVEL_LOCK_DESC]";
    }
    std::string::string(asStack_10,__s);
    StringHelper::ToStringValue(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::GetMainBg(int) */

void PennyClassRoomTrainingItemWidget::GetMainBg(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"IMAGE_UI_PENNY_CLASSROOM_MAIN_TEST");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PennyClassRoomTrainingItemWidget::PennyClassRoomTrainingItemWidget() */

void __thiscall
PennyClassRoomTrainingItemWidget::PennyClassRoomTrainingItemWidget
          (PennyClassRoomTrainingItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069ccfa0;
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x118));
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  this[0xdc] = (PennyClassRoomTrainingItemWidget)0x0;
  std::vector<PennyClassroomBonusWidget*,std::allocator<PennyClassroomBonusWidget*>>::clear
            ((vector<PennyClassroomBonusWidget*,std::allocator<PennyClassroomBonusWidget*>> *)
             (this + 0x100));
  *(undefined8 *)(this + 0xf8) = 0;
  FUN_054772c4(this + 0xe0,&DAT_056f11a8);
  FUN_054772c4(this + 0xe8,&DAT_056f11a8);
  FUN_054772c4(this + 0xf0,&DAT_056f11a8);
  return;
}


/* PennyClassRoomTrainingItemWidget::~PennyClassRoomTrainingItemWidget() */

void __thiscall
PennyClassRoomTrainingItemWidget::~PennyClassRoomTrainingItemWidget
          (PennyClassRoomTrainingItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069ccfa0;
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x118))
  ;
  std::vector<PennyClassroomBonusWidget*,std::allocator<PennyClassroomBonusWidget*>>::~vector
            ((vector<PennyClassroomBonusWidget*,std::allocator<PennyClassroomBonusWidget*>> *)
             (this + 0x100));
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyClassRoomTrainingItemWidget::~PennyClassRoomTrainingItemWidget() */

void __thiscall
PennyClassRoomTrainingItemWidget::~PennyClassRoomTrainingItemWidget
          (PennyClassRoomTrainingItemWidget *this)

{
  ~PennyClassRoomTrainingItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::CalcFinishCount(int) */

void __thiscall
PennyClassRoomTrainingItemWidget::CalcFinishCount
          (PennyClassRoomTrainingItemWidget *this,int param_1)

{
  long lVar1;
  vector *pvVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  if (*(int *)(this + 0xd4) != 0) {
    std::
    vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
    ::vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
              *)local_38,(vector *)(this + 0x168));
    iVar5 = 0;
    pvVar2 = (vector *)FUN_04de7eec(local_38[0],(long)(param_1 + -1));
    std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::vector
              ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20,
               pvVar2);
    lVar3 = FUN_04de7ef8(local_20,local_18);
    lVar6 = 0;
    while (lVar6 != lVar3) {
      lVar1 = lVar6 + 1;
      piVar4 = (int *)FUN_04de7f20(local_20,lVar6);
      lVar6 = lVar1;
      if (*piVar4 == 2) {
        iVar5 = iVar5 + 1;
      }
    }
    std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::~vector
              ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20);
    std::
    vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
    ::~vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
               *)local_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
PennyClassRoomTrainingItemWidget::Draw(PennyClassRoomTrainingItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar6;
  int iVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0xf8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xdc] != (PennyClassRoomTrainingItemWidget)0x0) {
    iVar1 = *(int *)(this + 0x54);
    iVar2 = FUN_04de8b64(0x78);
    iVar3 = iVar1 / 3;
    Sexy::Insets::Insets(aIStack_28,0,iVar3 * 2,iVar2,iVar1 + iVar3 * -2);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar5,aIStack_18,5,1);
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c570);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c638);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c638);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(this + 0x50);
    iVar7 = (int)((float)iVar3 * 0.85);
    iVar4 = FUN_04de8b64(10);
    iVar3 = iVar4 * 2;
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c638);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,(iVar1 - (int)((float)iVar2 * 0.85)) / 2,iVar3,
               (int)((float)iVar2 * 0.85),iVar7);
    Sexy::Insets::Insets(aIStack_28,0,iVar3,*(int *)(this + 0x50),iVar7);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,2);
    WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar5,aIStack_18,5,1);
    Sexy::Insets::Insets
              (aIStack_28,0,iVar7 + iVar3,*(int *)(this + 0x50),
               (*(int *)(this + 0x54) + iVar4 * -2) - iVar7);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar5,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidget::InitView(int, NetworkPennyClassroomData) */

void __thiscall
PennyClassRoomTrainingItemWidget::InitView
          (PennyClassRoomTrainingItemWidget *this,undefined4 param_1,
          NetworkPennyClassroomData *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  HeadshotIconWidget *this_00;
  wchar16 *pwVar12;
  vector *pvVar13;
  PennyClassroomBonusWidget *this_01;
  undefined4 *puVar14;
  PennyClassRoomTrainingItemWidgetComponent *this_02;
  vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *pvVar15;
  LineBreakCategory *pLVar16;
  LineBreakCategory *pLVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100 [3];
  undefined8 local_e8 [3];
  Insets aIStack_d0 [200];
  long local_8;
  
  *(undefined4 *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x118),param_3);
  iVar5 = (int)this;
  GetTrainingTitle(iVar5);
  FUN_054766c8(this + 0xe0,aIStack_d0);
  FUN_05476c50(aIStack_d0);
  GetLockDesc(iVar5);
  FUN_054766c8(this + 0xe8,aIStack_d0);
  FUN_05476c50(aIStack_d0);
  uVar10 = GetMainBg(iVar5);
  *(undefined8 *)(this + 0xf8) = uVar10;
  iVar6 = FUN_04de8b64(2);
  iVar5 = *(int *)(this + 0x54);
  iVar2 = (iVar5 / 3) * 2;
  uVar3 = iVar2 + iVar6 * -2;
  piVar11 = (int *)FUN_04de7f28(*(undefined8 *)(this + 0x150),(long)*(int *)(this + 0xd4));
  iVar7 = *piVar11;
  this_00 = ::operator_new(0xf0);
  HeadshotIconWidget::HeadshotIconWidget(this_00,iVar7);
  pLVar16 = (LineBreakCategory *)(ulong)uVar3;
  pLVar17 = (LineBreakCategory *)(ulong)uVar3;
  pcVar18 = *(code **)(*(long *)this_00 + 0x1a0);
  Sexy::Insets::Insets(aIStack_d0,iVar6,iVar6,uVar3,uVar3);
  (*pcVar18)(this_00,aIStack_d0);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  pwVar12 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pvVar15 = (vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)local_e8;
  std::string::string((string *)aIStack_d0,"PennyClassroomCheat");
  cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar12,(wchar16 *)aIStack_d0,(LineBreakCategory *)pvVar15,pLVar16,pLVar17);
  std::string::~string((string *)aIStack_d0);
  nop();
  if (cVar4 == '\0') {
    if (*(int *)(this + 0xd4) == 0) {
      SetProgress(this,5);
    }
    else {
      iVar7 = CalcFinishCount(this,*(int *)(this + 0xd4));
      SetProgress(this,iVar7);
      if (iVar7 < 5) goto LAB_04df35c0;
    }
  }
  iVar7 = FUN_04de8b64(0x32);
  iVar6 = FUN_04de8b64(0xf);
  iVar8 = FUN_04de8b64(5);
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)&local_118,
             (vector *)(this + 0x138));
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
            *)local_100,(vector *)(this + 0x168));
  pvVar13 = (vector *)FUN_04de7eec(local_100[0],(long)*(int *)(this + 0xd4));
  std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::vector
            ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)local_e8,
             pvVar13);
  uVar10 = local_118;
  iVar9 = FUN_04de7f30(local_118,local_110);
  if (0 < iVar9) {
    uVar19 = 0;
    iVar6 = uVar3 + iVar6;
    while( true ) {
      piVar11 = (int *)FUN_04de7f60(uVar10,uVar19);
      this_01 = (PennyClassroomBonusWidget *)
                PennyClassroomBonusWidget::CreateUIRewardFrame(*piVar11,0,true);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar6,(iVar2 - iVar7) / 2,iVar7,iVar7);
      puVar14 = (undefined4 *)FUN_04de7f20(local_e8[0],uVar19);
      FUN_04de7940(this_01 + 0x150,*puVar14);
      puVar14 = (undefined4 *)FUN_04de7f60(local_118,uVar19);
      FUN_04de7948(this_01 + 0x160,*puVar14);
      FUN_04de7950(this_01 + 0x164,*(undefined4 *)(this + 0xd4));
      FUN_04de7958(this_01 + 0x168,uVar19 & 0xffffffff);
      PennyClassroomBonusWidget::InitView(this_01);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      if (uVar19 == iVar9 - 1) break;
      uVar19 = uVar19 + 1;
      uVar10 = local_118;
      iVar6 = iVar6 + iVar7 + iVar8;
    }
  }
  this_02 = ::operator_new(0x1d0);
  PennyClassRoomTrainingItemWidgetComponent::PennyClassRoomTrainingItemWidgetComponent(this_02);
  pcVar18 = *(code **)(*(long *)this_02 + 0x1a0);
  Sexy::Insets::Insets
            (aIStack_d0,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) + (iVar5 / 3) * -2);
  (*pcVar18)(this_02,aIStack_d0);
  uVar1 = *(undefined4 *)(this + 0xd4);
  NetworkPennyClassroomData::NetworkPennyClassroomData
            ((NetworkPennyClassroomData *)aIStack_d0,(NetworkPennyClassroomData *)(this + 0x118));
  PennyClassRoomTrainingItemWidgetComponent::InitView(this_02,uVar1,aIStack_d0);
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)aIStack_d0);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::~vector
            ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)local_e8);
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::~vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
             *)local_100);
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::~vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)&local_118);
LAB_04df35c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

