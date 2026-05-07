// Class: UINewPVPDuan


/* UINewPVPDuan::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPVPDuan::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPDuan::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UINewPVPDuan::ScrollTargetReached(UINewPVPDuan *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPVPDuan::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPVPDuan::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPVPDuan::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UINewPVPDuan::ScrollTargetInterrupted(UINewPVPDuan *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::GetLayoutName() */

void __thiscall UINewPVPDuan::GetLayoutName(UINewPVPDuan *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPVPDuan");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPVPDuan::SetRewardsStatus(std::vector<int, std::allocator<int> >) */

void __thiscall UINewPVPDuan::SetRewardsStatus(UINewPVPDuan *this,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(this + 0x140);
  iVar9 = 0;
  lVar1 = FUN_0352d878(uVar13,*(undefined8 *)(this + 0x148));
  uVar11 = *param_2;
  uVar2 = FUN_0352d7e0(uVar11,param_2[1]);
  do {
    for (lVar12 = 0; lVar12 != lVar1; lVar12 = lVar12 + 1) {
      puVar3 = (undefined8 *)FUN_0352d7ec(uVar13,lVar12);
      uVar10 = *puVar3;
      lVar4 = FUN_0352d88c(uVar10,puVar3[1]);
      lVar7 = 0;
      uVar8 = (long)iVar9;
      while( true ) {
        if (lVar7 == lVar4) break;
        if (uVar2 <= uVar8) {
          return;
        }
        lVar5 = FUN_0352d7f8(uVar10,lVar7);
        puVar6 = (undefined4 *)FUN_0352d808(uVar11,uVar8);
        *(undefined4 *)(lVar5 + 0x10) = *puVar6;
        lVar7 = lVar7 + 1;
        uVar8 = uVar8 + 1;
      }
      iVar9 = iVar9 + (int)lVar7;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::SetCurrentDuan(int, int, int) */

void __thiscall UINewPVPDuan::SetCurrentDuan(UINewPVPDuan *this,int param_1,int param_2,int param_3)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,(float)param_1,(float)param_2,(float)param_3);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x170),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::SetMaxDuan(int, int, int) */

void __thiscall UINewPVPDuan::SetMaxDuan(UINewPVPDuan *this,int param_1,int param_2,int param_3)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,(float)param_1,(float)param_2,(float)param_3);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x17c),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPDuan::RefreshRewardsLockState() */

void __thiscall UINewPVPDuan::RefreshRewardsLockState(UINewPVPDuan *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 0x140);
  lVar8 = 0;
  lVar1 = FUN_0352d878(uVar9,*(undefined8 *)(this + 0x148));
  if (lVar1 != 0) {
    do {
      uVar6 = 0;
      puVar2 = (undefined8 *)FUN_0352d7ec(uVar9,lVar8);
      uVar7 = *puVar2;
      uVar3 = FUN_0352d88c(uVar7,puVar2[1]);
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          if (((float)(int)lVar8 < *(float *)(this + 0x17c)) ||
             (((float)(int)lVar8 == *(float *)(this + 0x17c) &&
              ((float)(int)uVar5 <= *(float *)(this + 0x180))))) {
            lVar4 = FUN_0352d7f8(uVar7,uVar6);
            *(undefined4 *)(lVar4 + 0x14) = 1;
          }
          uVar6 = uVar6 + 1;
          uVar5 = uVar6 & 0xffffffff;
        } while (uVar6 != uVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar1);
  }
  return;
}


/* UINewPVPDuan::CalculateSmallDuanNumOfBigDuan(int) */

void __thiscall UINewPVPDuan::CalculateSmallDuanNumOfBigDuan(UINewPVPDuan *this,int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0352d7ec(*(undefined8 *)(this + 0x140),(long)param_1);
  FUN_0352d88c(*puVar1,puVar1[1]);
  return;
}


/* UINewPVPDuan::IsTopBigDuan(int) */

bool __thiscall UINewPVPDuan::IsTopBigDuan(UINewPVPDuan *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0352d878(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  return lVar1 + -1 == (long)param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall UINewPVPDuan::DrawAll(UINewPVPDuan *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SecretGachaMgr *this_01;
  string asStack_40 [8];
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"IMAGE_UI_NEW_PVP_PRE_MATCHING_BG");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,true);
  std::string::~string((string *)&local_18);
  nop();
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar2,iVar3);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_01 = (SecretGachaMgr *)Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
  SecretGachaMgr::GetScreenType(this_01);
  bVar1 = std::operator==(asStack_40,"Full");
  if ((bVar1) || (bVar1 = std::operator==(asStack_40,"Normal"), bVar1)) {
    local_c = (int)((float)local_20 / ((float)local_30 / (float)local_2c));
    local_14 = local_14 + (local_1c - local_c) / 2;
  }
  else {
    local_10 = (int)(((float)local_30 / (float)local_2c) * (float)local_1c);
    local_18 = local_18 + (local_20 - local_10) / 2;
  }
  Sexy::Graphics::DrawImage(param_2,(Image *)this_00,(TRect *)&local_18,(TRect *)aIStack_38);
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::Update() */

void __thiscall UINewPVPDuan::Update(UINewPVPDuan *this)

{
  char cVar1;
  int iVar2;
  NewPVPMgr *pNVar3;
  UIWidgetText *pUVar4;
  int extraout_w1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = NewPVPMgr::IsSeasonEnd(pNVar3);
  std::string::string(asStack_10,"UIText_CountDown");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetSeasonEndTime(pNVar3);
  if (cVar1 == '\0') {
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT]");
    StringHelper::ToTimeString((StringHelper *)&DAT_00000004,(float)iVar2,extraout_w1);
    TodReplaceString(awStack_18,L"{TIME}",(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
  else {
    std::string::string(asStack_10,"[NEW_PVP_MAIN_VIEW_COUNTDOWN_TEXT_END]");
    StringHelper::ToStringValue(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  PuzzleTip::SetTip(pUVar4,auStack_20);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::RefreshUI() */

void __thiscall UINewPVPDuan::RefreshUI(UINewPVPDuan *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  undefined8 *puVar4;
  UIWidgetImage *pUVar5;
  Image *pIVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_MaxDuan");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("[NEW_PVP_DUAN_RANK_%d]",aSStack_18,(ulong)(uint)(int)*(float *)(this + 0x17c));
  Sexy::ToSexyString(aSStack_18,extraout_x1);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  puVar4 = (undefined8 *)
           FUN_0352d7ec(*(undefined8 *)(this + 0x140),(long)(int)*(float *)(this + 0x17c));
  iVar2 = FUN_0352d88c(*puVar4,puVar4[1]);
  Sexy::StrFormat("[ROMAN_NUM_%d]",aSStack_18,(ulong)(uint)(iVar2 - (int)*(float *)(this + 0x180)));
  Sexy::ToSexyString(aSStack_18,extraout_x1_00);
  TodStringTranslate((wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string((string *)aSStack_18);
  cVar1 = IsTopBigDuan(this,(int)*(float *)(this + 0x17c));
  if (cVar1 != '\0') {
    FUN_05476574(asStack_10);
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
  }
  FUN_0342e660(asStack_10,auStack_28,auStack_20);
  PuzzleTip::SetTip(pUVar3,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"UIImage_BadgeMaxDuan");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEW_PVP_DUAN_BADGE_%d",asStack_10,
                  (ulong)(uint)(int)*(float *)(this + 0x17c));
  pIVar6 = (Image *)StringHelper::ToImage(asStack_10,true);
  std::string::~string(asStack_10);
  UIWidgetImage::SetImage(pUVar5,pIVar6);
  std::string::string(asStack_10,"UIImage_Trophy");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar2 = CalculateSmallDuanNumOfBigDuan(this,(int)*(float *)(this + 0x170));
  Sexy::StrFormat("IMAGE_UI_NEW_PVP_DUAN_TROPHY_%d_%d",asStack_10,
                  (ulong)(uint)(int)*(float *)(this + 0x170),
                  (ulong)(uint)((iVar2 + -1) - (int)*(float *)(this + 0x174)));
  pIVar6 = (Image *)StringHelper::ToImage(asStack_10,true);
  std::string::~string(asStack_10);
  UIWidgetImage::SetImage(pUVar5,pIVar6);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPDuan::ButtonDepress(int) */

void __thiscall UINewPVPDuan::ButtonDepress(UINewPVPDuan *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UINewPVPDuan>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPVPDuan::ButtonDepress(int) */

void __thiscall UINewPVPDuan::ButtonDepress(UINewPVPDuan *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UINewPVPDuan::UINewPVPDuan() */

void __thiscall UINewPVPDuan::UINewPVPDuan(UINewPVPDuan *this)

{
  UISingletonDialog<UINewPVPDuan>::UISingletonDialog((UISingletonDialog<UINewPVPDuan> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06651be0;
  *(undefined **)(this + 0xd8) = &DAT_06651f40;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPDuan_06651f88;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x170),1.0,1.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)(this + 0x17c),1.0,1.0,0.0);
  *(undefined8 *)(this + 0x188) = 0;
  this[400] = (UINewPVPDuan)0x0;
  *(undefined4 *)(this + 0x194) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::CalculateDuanNumFromStar(int) */

void __thiscall UINewPVPDuan::CalculateDuanNumFromStar(UINewPVPDuan *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *this_00;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  lVar3 = FUN_0352d878(uVar10,*(undefined8 *)(this + 0x148));
  do {
    if (lVar9 == lVar3) {
      puVar4 = (undefined8 *)
               std::
               vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                       *)(this + 0x140));
      lVar3 = FUN_0352d88c(*puVar4,puVar4[1]);
      this_00 = (vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)
                std::
                vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                        *)(this + 0x140));
      lVar7 = std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back(this_00);
      param_1 = *(int *)(lVar7 + 8);
      fVar11 = (float)(lVar9 - 1);
      fVar12 = (float)(lVar3 - 1);
LAB_03530f28:
      EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar11,fVar12,(float)param_1);
      local_18 = local_28;
      uVar10 = local_18;
      local_10 = local_20;
      local_18._0_4_ = (undefined4)local_28;
      uVar1 = (undefined4)local_18;
      local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
      uVar2 = local_18._4_4_;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
      local_18 = uVar10;
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar1,uVar2,local_20);
    }
    puVar4 = (undefined8 *)FUN_0352d7ec(uVar10,lVar9);
    uVar8 = *puVar4;
    lVar5 = FUN_0352d88c(uVar8,puVar4[1]);
    lVar7 = 0;
    while (lVar7 != lVar5) {
      lVar6 = FUN_0352d7f8(uVar8,lVar7);
      if (param_1 <= *(int *)(lVar6 + 8)) {
        fVar12 = (float)(int)lVar7;
        fVar11 = (float)(int)lVar9;
        goto LAB_03530f28;
      }
      param_1 = param_1 - *(int *)(lVar6 + 8);
      lVar7 = lVar7 + 1;
    }
    lVar9 = lVar9 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::SetCurrentTotalStarNum(int) */

void UINewPVPDuan::SetCurrentTotalStarNum(int param_1)

{
  int in_w1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = CalculateDuanNumFromStar((UINewPVPDuan *)(ulong)(uint)param_1,in_w1);
  Sexy::SexyVector3::operator=
            ((SexyVector3 *)((UINewPVPDuan *)(ulong)(uint)param_1 + 0x170),(SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::SetMaxTotalStarNum(int) */

void UINewPVPDuan::SetMaxTotalStarNum(int param_1)

{
  int in_w1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = CalculateDuanNumFromStar((UINewPVPDuan *)(ulong)(uint)param_1,in_w1);
  Sexy::SexyVector3::operator=
            ((SexyVector3 *)((UINewPVPDuan *)(ulong)(uint)param_1 + 0x17c),(SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPDuan::~UINewPVPDuan() */

void __thiscall UINewPVPDuan::~UINewPVPDuan(UINewPVPDuan *this)

{
  *(undefined ***)this = &PTR_GetClass_06651be0;
  *(undefined **)(this + 0xd8) = &DAT_06651f40;
  *(undefined ***)(this + 0x138) = &PTR__UINewPVPDuan_06651f88;
  std::
  vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
  ::~vector((vector<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>,std::allocator<std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>>>
             *)(this + 0x158));
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::~vector((vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
             *)(this + 0x140));
  UISingletonDialog<UINewPVPDuan>::~UISingletonDialog((UISingletonDialog<UINewPVPDuan> *)this);
  return;
}


/* non-virtual thunk to UINewPVPDuan::~UINewPVPDuan() */

void __thiscall UINewPVPDuan::~UINewPVPDuan(UINewPVPDuan *this)

{
  ~UINewPVPDuan(this + -0x138);
  return;
}


/* UINewPVPDuan::~UINewPVPDuan() */

void __thiscall UINewPVPDuan::~UINewPVPDuan(UINewPVPDuan *this)

{
  ~UINewPVPDuan(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPDuan::~UINewPVPDuan() */

void __thiscall UINewPVPDuan::~UINewPVPDuan(UINewPVPDuan *this)

{
  ~UINewPVPDuan(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::SetInfoList(std::vector<Network_NewPVPSmallDuan,
   std::allocator<Network_NewPVPSmallDuan> >) */

void __thiscall UINewPVPDuan::SetInfoList(UINewPVPDuan *this,undefined8 *param_2)

{
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  *this_00;
  char cVar1;
  vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>> *this_01;
  ulong uVar2;
  NewPVPDuanRewardsData *pNVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int local_74;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_70 [24];
  int local_58;
  int local_54 [2];
  undefined4 local_4c;
  vector avStack_48 [24];
  PennyGiftBoxRankPriviewItemData aPStack_30 [40];
  long local_8;
  
  uVar5 = 0;
  this_00 = (vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
             *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::clear(this_00);
  do {
    uVar6 = *param_2;
    uVar9 = uVar5 & 0xffffffff;
    uVar2 = FUN_0352d8ac(uVar6,param_2[1]);
    if (uVar2 <= uVar5) {
      cVar1 = std::
              vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
              ::empty(this_00);
      if (cVar1 != '\0') {
        uVar6 = FUN_0352d8ac(*param_2,param_2[1]);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"UINewPVPDuan::Init m_duanInfos is empty! i_infos.size() = %d",uVar6);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pNVar3 = (NewPVPDuanRewardsData *)FUN_0352d8c0(uVar6,uVar5);
    NewPVPDuanRewardsData::NewPVPDuanRewardsData((NewPVPDuanRewardsData *)&local_58,pNVar3);
    uVar7 = (ulong)local_58;
    uVar2 = FUN_0352d878(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    if (uVar2 < uVar7) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"UINewPVPDuan::SetInfoList error! config of duan list is not correct.");
      lVar8 = (long)local_58;
      lVar4 = FUN_0352d878(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
      if (lVar8 == lVar4) {
LAB_03534e7c:
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_30);
        std::
        vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
        ::push_back(this_00,(vector *)aPStack_30);
        std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>::~vector
                  ((vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>> *)aPStack_30);
      }
    }
    else if (uVar7 == uVar2) goto LAB_03534e7c;
    uVar5 = uVar5 + 1;
    this_01 = (vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>> *)
              std::
              vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
              ::back((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                      *)this_00);
    local_74 = NewPVPUtils::GetStarNumInSmallRank(local_58,local_54[0]);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_70,avStack_48);
    NewPVPDuanRewardsData::NewPVPDuanRewardsData
              ((NewPVPDuanRewardsData *)aPStack_30,uVar9,avStack_70,local_4c,0,0);
    std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>::
    emplace_back<int&,int&,int,NewPVPDuanRewardsData>
              (this_01,&local_58,local_54,&local_74,(NewPVPDuanRewardsData *)aPStack_30);
    PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData(aPStack_30);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_70);
    PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
              ((PennyGiftBoxRankPriviewItemData *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::InitScrollWidget() */

void __thiscall UINewPVPDuan::InitScrollWidget(UINewPVPDuan *this)

{
  undefined4 uVar1;
  long *plVar2;
  PVZ2UIScrollingWidget *this_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x188) == 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x188) + 0x18))();
    }
    *(undefined8 *)(this + 0x188) = 0;
  }
  std::string::string(asStack_20,"Widget_Container");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  *(undefined1 *)((long)plVar2 + 0x59) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)((long)plVar2 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  lVar3 = *plVar2;
  this_00[0x59] = (PVZ2UIScrollingWidget)0x0;
  (**(code **)(lVar3 + 0x60))(plVar2,this_00);
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::vector((vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
            *)asStack_20,(vector *)(this + 0x140));
  uVar4 = *(undefined8 *)(this + 0x170);
  uVar1 = *(undefined4 *)(this + 0x178);
  plVar2 = ::operator_new(0x118);
  local_30._0_4_ = (UINewPVPDuanPlane *)uVar4;
  local_30._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  UINewPVPDuanPlane::UINewPVPDuanPlane
            ((UINewPVPDuanPlane *)local_30,local_30._4_4_,uVar1,plVar2,asStack_20);
  std::
  vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
  ::~vector((vector<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>,std::allocator<std::vector<NewPVPSmallDuan,std::allocator<NewPVPSmallDuan>>>>
             *)asStack_20);
  (**(code **)(*plVar2 + 0x198))(plVar2,0,0,(int)plVar2[10],*(undefined4 *)(this_00 + 0x54));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,plVar2);
  *(long **)(this + 0x188) = plVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPDuan::OnCreate() */

void __thiscall UINewPVPDuan::OnCreate(UINewPVPDuan *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  UIWidgetText *pUVar7;
  SecretGachaMgr *this_00;
  undefined8 uVar8;
  LotteryResultProgressBar *this_01;
  UIWidgetText *pUVar9;
  long *plVar10;
  PVZ2UIButton *pPVar11;
  MapEventItem *pMVar12;
  long lVar13;
  float extraout_s0;
  string asStack_78 [8];
  undefined1 auStack_70 [8];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  Insets aIStack_58 [4];
  int local_54;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  vector<int,std::allocator<int>> avStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::string::string(asStack_20,"UIImage_BgMask");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::string::string(asStack_20,"UIImage_Title");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x1a8))
            (pUVar6,(*(int *)(gLawnApp + 0xd4) - *(int *)(pUVar6 + 0x50)) / 2,
             *(undefined4 *)(pUVar6 + 0x4c));
  std::string::string(asStack_20,"UIText_Tips");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x198))
            (pUVar7,0,*(undefined4 *)(pUVar7 + 0x4c),*(undefined4 *)(gLawnApp + 0xd4),
             *(undefined4 *)(pUVar7 + 0x54));
  std::string::string(asStack_20,"UIImage_Trophy");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  Sexy::Insets::Insets((Insets *)&local_68);
  local_60 = (int)((float)*(int *)(this + 0x50) * 0.1);
  local_5c = (int)((float)*(int *)(this + 0x54) * 0.16800001);
  iVar3 = *(int *)(this + 0x50) - local_60;
  this_00 = (SecretGachaMgr *)FUN_0352e08c(0x40c00000);
  local_68 = (int)(extraout_s0 + (float)(iVar3 / 2));
  SecretGachaMgr::GetScreenType(this_00);
  bVar1 = std::operator==(asStack_78,"Full");
  if (bVar1) {
    local_64 = FUN_0352e078(0xd2);
    local_64 = (*(int *)(this + 0x54) - local_5c) / 2 - local_64;
    uVar2 = FUN_0352e078(0xfffffff6);
    uVar8 = 0x44;
  }
  else {
    bVar1 = std::operator==(asStack_78,"Large");
    if (!bVar1) {
      local_64 = FUN_0352e078(0xaf);
      local_64 = (*(int *)(this + 0x54) - local_5c) / 2 - local_64;
      uVar2 = FUN_0352e078(0xfffffff6);
      iVar3 = FUN_0352e078(0x2b);
      local_3c = FUN_0352e078(0x46);
      goto LAB_03536024;
    }
    local_64 = FUN_0352e078(0x82);
    local_64 = (*(int *)(this + 0x54) - local_5c) / 2 - local_64;
    uVar2 = FUN_0352e078(0xfffffffc);
    uVar8 = 0xb;
  }
  iVar3 = FUN_0352e078(uVar8);
  local_3c = FUN_0352e078(0x3c);
LAB_03536024:
  Sexy::Insets::Insets(aIStack_58,(Insets *)&local_68);
  this_01 = (LotteryResultProgressBar *)
            PlantDisplayFrame::GetPlantDisplayPtr((PlantDisplayFrame *)pUVar6);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
  local_4c = (int)((float)local_60 / ((float)iVar4 / (float)iVar5));
  local_54 = local_54 + (local_5c - local_4c) / 2;
  (**(code **)(*(long *)pUVar6 + 0x1a0))(pUVar6,aIStack_58);
  std::string::string(asStack_20,"UIText_CountDown");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  Sexy::Insets::Insets((Insets *)&local_48);
  local_40 = *(undefined4 *)(this + 0x50);
  local_44 = local_64 + local_5c + iVar3;
  local_48 = uVar2;
  (**(code **)(*(long *)pUVar9 + 0x1a0))(pUVar9,(Insets *)&local_48);
  std::string::string(asStack_20,"Widget_Container");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*plVar10 + 0x198))
            (plVar10,0,*(undefined4 *)((long)plVar10 + 0x4c),*(undefined4 *)(gLawnApp + 0xd4),
             *(undefined4 *)((long)plVar10 + 0x54));
  std::string::string(asStack_20,"UIButton_Back");
  pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)pPVar11 + 0x1a8))
            (pPVar11,*(int *)(this + 0x50) - *(int *)(pPVar11 + 0x50),
             *(undefined4 *)(pPVar11 + 0x4c));
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  std::vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>>::vector
            ((vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>> *)asStack_20,
             (vector *)(lVar13 + 0x170));
  SetInfoList(this,asStack_20);
  std::vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>>::~vector
            ((vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>> *)asStack_20);
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)(lVar13 + 0x188));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)asStack_20,(vector *)avStack_38);
  SetRewardsStatus(this,asStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  SetCurrentDuan(this,*(int *)(lVar13 + 0x1fc),*(int *)(lVar13 + 0x200),*(int *)(lVar13 + 0x204));
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  SetMaxDuan(this,*(int *)(lVar13 + 0x1a0),*(int *)(lVar13 + 0x1a4),*(int *)(lVar13 + 0x1a8));
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  iVar3 = *(int *)(lVar13 + 0x1ac);
  pMVar12 = (MapEventItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar13 = MapEventItem::GetChildren(pMVar12);
  this[400] = (UINewPVPDuan)(iVar3 <= *(int *)(lVar13 + 0x1b0));
  TodStringTranslate(L"[NEW_PVP_DUAN_TIPS]");
  TodReplaceNumberString((wstring *)asStack_20,L"{NUM}",iVar3);
  FUN_05476c50(asStack_20);
  PuzzleTip::SetTip(pUVar7,auStack_70);
  RefreshRewardsLockState(this);
  InitScrollWidget(this);
  RefreshUI(this);
  FUN_05476c50(auStack_70);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

