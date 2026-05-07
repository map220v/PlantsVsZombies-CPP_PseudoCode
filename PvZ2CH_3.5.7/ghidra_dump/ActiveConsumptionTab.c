// Class: ActiveConsumptionTab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::SetSelect(bool) */

void __thiscall ActiveConsumptionTab::SetSelect(ActiveConsumptionTab *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  Image *pIVar4;
  PVZ2UIButton *pPVar5;
  Dialog *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  pPVar5 = *(PVZ2UIButton **)(this + 0x18);
  lStack_8 = ___stack_chk_guard;
  if ((pPVar5 != (PVZ2UIButton *)0x0) && (*(long *)(this + 0x10) != 0)) {
    cVar1 = FUN_04b9048c(pPVar5[0x1a8]);
    if ((param_1 == (bool)cVar1) || (!param_1)) {
      plVar2 = *(long **)(this + 0x20);
      cVar1 = *(char *)((long)plVar2 + 0x6c);
    }
    else {
      PVZ2UIButton::SetRadioButtonSelected(pPVar5);
      plVar2 = *(long **)(this + 0x20);
      cVar1 = *(char *)((long)plVar2 + 0x6c);
    }
    if ((bool)cVar1 != param_1) {
      (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    }
    if (param_1) {
      this_00 = *(Dialog **)(this + 0x10);
      std::string::string(asStack_10,"Btn_Goto");
      pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar5 != (PVZ2UIButton *)0x0) {
        (**(code **)(*(long *)this + 0x38))(asStack_10,this);
        FUN_054766c8(pPVar5 + 0xd8,asStack_10);
        FUN_05476c50(asStack_10);
      }
      (**(code **)(*(long *)this + 0x30))(asStack_10,this);
      lVar3 = FUN_05474184(asStack_10);
      if (lVar3 == 0) {
        UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x20),(Image *)0x0);
      }
      else {
        pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x20),pIVar4);
      }
      std::string::~string(asStack_10);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveConsumptionTab::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActiveConsumptionTab::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActiveConsumptionTab::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ActiveConsumptionTab::ScrollTargetReached(ActiveConsumptionTab *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x30));
  return;
}


/* ActiveConsumptionTab::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActiveConsumptionTab::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActiveConsumptionTab::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ActiveConsumptionTab::ScrollTargetInterrupted(ActiveConsumptionTab *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x30));
  return;
}


/* ActiveConsumptionTab::CloseDialog() */

void ActiveConsumptionTab::CloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* ActiveConsumptionTab::AddBuyTips() */

void __thiscall ActiveConsumptionTab::AddBuyTips(ActiveConsumptionTab *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  ulong uVar5;
  TipsWidget *this_01;
  bool bVar6;
  undefined8 uVar7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  bVar6 = false;
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_049cc7c4(*(undefined4 *)(lVar4 + 0x1054));
  iVar2 = FUN_049cc7c0(*(undefined4 *)(lVar4 + 0x1050));
  uVar7 = *(undefined8 *)(this + 0x60);
  uVar5 = FUN_049cc7e4(uVar7,*(undefined8 *)(this + 0x68));
  if ((ulong)(long)iVar2 < uVar5) {
    lVar4 = FUN_049cc7c8(uVar7,(long)iVar2);
    bVar6 = *(int *)(lVar4 + 0x18) <= iVar1;
  }
  this_01 = ::operator_new(0xf8);
  TipsWidget::TipsWidget(this_01,(ButtonListener *)(this + 0x28),bVar6);
  *(TipsWidget **)(this + 0x78) = this_01;
  uVar3 = FUN_049cc8d0(400);
  (**(code **)(*(long *)this_01 + 0x1a8))
            (this_01,(*(int *)(*(long *)(this + 0x20) + 0x50) - *(int *)(this_01 + 0x50)) / 2,uVar3)
  ;
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x78));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::DrawTips(Sexy::Graphics*) */

void __thiscall ActiveConsumptionTab::DrawTips(ActiveConsumptionTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  long lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  string *extraout_x1;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_00);
  FUN_05476574(awStack_38);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x40),extraout_x1);
  pwVar7 = (wchar_t *)FUN_054766ec(aCStack_18);
  TodStringTranslate(pwVar7);
  FUN_05476c50(aCStack_18);
  iVar1 = FUN_049cc8d0(0x14);
  iVar2 = FUN_049cc8d0(0xffffffec);
  iVar3 = FUN_049cc8d0(0x2ee);
  iVar4 = FUN_049cc8d0(0x3c);
  iVar5 = FUN_049cc8d0(200);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3 - iVar4,iVar5);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aCStack_18,3,1);
  iVar1 = FUN_049cc7c0(*(undefined4 *)(lVar6 + 0x1050));
  uVar8 = *(undefined8 *)(this + 0x60);
  uVar9 = FUN_049cc7e4(uVar8,*(undefined8 *)(this + 0x68));
  if ((ulong)(long)iVar1 < uVar9) {
    lVar10 = FUN_049cc7c8(uVar8,(long)iVar1);
    iVar2 = *(int *)(lVar10 + 0x18);
    iVar1 = FUN_049cc7c4(*(undefined4 *)(lVar6 + 0x1054));
    if (iVar1 < iVar2) {
      TodStringTranslate(L"[CONSUMPTION_TIPS_ING]");
      TodReplaceNumberString((wstring *)aIStack_28,L"{GEM_COST}",iVar1);
      FUN_054766c8(awStack_38,aCStack_18);
      FUN_05476c50(aCStack_18);
      FUN_05476c50(aIStack_28);
      TodReplaceNumberString(awStack_38,L"{GEM_NEED}",iVar2 - iVar1);
      FUN_054766c8(awStack_38,aCStack_18);
      FUN_05476c50(aCStack_18);
      goto LAB_049ccbf4;
    }
    TodStringTranslate(L"[CONSUMPTION_TIPS_PLS]");
  }
  else {
    TodStringTranslate(L"[CONSUMPTION_TIPS_OVER]");
    iVar1 = FUN_049cc7c4(*(undefined4 *)(lVar6 + 0x1054));
  }
  TodReplaceNumberString((wstring *)aIStack_28,L"{GEM_COST}",iVar1);
  FUN_054766c8(awStack_38,aCStack_18);
  FUN_05476c50(aCStack_18);
  FUN_05476c50(aIStack_28);
LAB_049ccbf4:
  iVar1 = FUN_049cc8d0(0x14);
  iVar2 = FUN_049cc8d0(0xf);
  iVar3 = FUN_049cc8d0(0x2ee);
  iVar4 = FUN_049cc8d0(400);
  iVar5 = FUN_049cc8d0(200);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3 - iVar4,iVar5);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,awStack_38,aIStack_28,uVar8,aCStack_18,3,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::Update() */

void __thiscall ActiveConsumptionTab::Update(ActiveConsumptionTab *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0xb8] != (ActiveConsumptionTab)0x0) &&
      (cVar1 = FUN_049cc7ac(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 != '\0')) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x98) < fVar4)) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x80));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x80));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((RewardAnimWidget *)*puVar3 != (RewardAnimWidget *)0x0) {
        RewardAnimWidget::SetValid((RewardAnimWidget *)*puVar3,false);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x98) = uVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::IsAllAnimComplete() */

void __thiscall ActiveConsumptionTab::IsAllAnimComplete(ActiveConsumptionTab *this)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar4 = 1;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x80));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x80));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*plVar3 != 0) && (cVar1 = FUN_049cc7b4(*(undefined1 *)(*plVar3 + 0x110)), cVar1 == '\0')) {
      uVar4 = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::CanPress() */

void __thiscall ActiveConsumptionTab::CanPress(ActiveConsumptionTab *this)

{
  vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *this_00;
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x80);
  local_8 = ___stack_chk_guard;
  bVar1 = std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::empty(this_00);
  if (bVar1 == 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    bVar1 = 0;
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((*plVar4 != 0) && (cVar2 = FUN_049cc7b0(*(undefined1 *)(*plVar4 + 0x111)), cVar2 != '\0'))
      {
        bVar1 = 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    bVar1 = bVar1 ^ 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::ButtonDepress(int) */

void __thiscall ActiveConsumptionTab::ButtonDepress(ActiveConsumptionTab *this,int param_1)

{
  int iVar1;
  int iVar2;
  LawnApp *pLVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = CanPress(this);
  if ((cVar4 != '\0') && ((uint)param_1 < 5)) {
    auVar9 = FUN_049cc7c8(*(undefined8 *)(this + 0x60),(long)param_1);
    Sexy::UTF8StringToWString((Sexy *)(auVar9._0_8_ + 8),auVar9._8_8_);
    TodStringTranslate(awStack_30);
    FUN_05476c50(awStack_30);
    pLVar3 = gLawnApp;
    plVar7 = (long *)FUN_049cc7dc(*(undefined8 *)(this + 0xa0),(long)param_1);
    lVar8 = *plVar7;
    iVar5 = FUN_049cc8d0(0x14);
    iVar1 = *(int *)(lVar8 + 0x48);
    iVar6 = FUN_049cc8d0(100);
    iVar2 = *(int *)(lVar8 + 0x4c);
    std::function<void(Sexy::Graphics*)>::function(afStack_28);
    LawnApp::ShowPlantSkillTipsUI(pLVar3,auStack_38,iVar1 - iVar5,iVar2 - iVar6,3,afStack_28,0);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActiveConsumptionTab::ButtonDepress(int) */

void __thiscall ActiveConsumptionTab::ButtonDepress(ActiveConsumptionTab *this,int param_1)

{
  ButtonDepress(this + -0x28,param_1);
  return;
}


/* ActiveConsumptionTab::AddScrollBg() */

void __thiscall ActiveConsumptionTab::AddScrollBg(ActiveConsumptionTab *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  Image *pIVar7;
  UIWidgetImage *this_00;
  long lVar8;
  code *pcVar9;
  
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar7);
  pcVar9 = *(code **)(*(long *)this_00 + 0x198);
  iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  iVar2 = *(int *)(lVar8 + 0x38);
  iVar3 = *(int *)(*(long *)(this + 0x20) + 0x54);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  iVar4 = *(int *)(lVar8 + 0x3c);
  iVar6 = FUN_049cc8d0(0x1e);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  uVar5 = *(undefined4 *)(lVar8 + 0x38);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  (*pcVar9)(this_00,(iVar1 - iVar2) / 2,(iVar3 - iVar4) - iVar6,uVar5,*(undefined4 *)(lVar8 + 0x3c))
  ;
  (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),this_00);
  return;
}


/* ActiveConsumptionTab::DrawConsumptionBanner(Sexy::Graphics*) */

void __thiscall
ActiveConsumptionTab::DrawConsumptionBanner(ActiveConsumptionTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  long lVar5;
  
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75a58);
  iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75a58);
  iVar2 = *(int *)(lVar5 + 0x38);
  iVar3 = FUN_049cc8d0(0x46);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1 - iVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::RecvReward(int) */

void __thiscall ActiveConsumptionTab::RecvReward(ActiveConsumptionTab *this,int param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  string *this_01;
  long lVar6;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  lVar6 = FUN_049cc7c8(*(undefined8 *)(this + 0x60),(long)param_1);
  FUN_05475d88(asStack_20,lVar6);
  FUN_05475ffc(asStack_10,asStack_20,0,0xc);
  bVar1 = std::operator==(asStack_10,"plant_piece_");
  std::string::~string(asStack_10);
  iVar5 = (int)asStack_10;
  if (bVar1) {
    FUN_05475ffc(asStack_10,asStack_20,0xc,0xffffffffffffffff);
    cVar2 = PlayerInfo::IsPlantPiecesFull(this_01,SUB81(asStack_10,0));
    if (cVar2 == '\0') {
      PlayerInfo::AddPlantPieceCount(this_01,iVar5,SUB41(*(undefined4 *)(lVar6 + 0x10),0));
    }
    else {
LAB_049cd364:
      PlayerInfo::AddCoins((PlayerInfo *)this_01,*(int *)(lVar6 + 0x1c));
    }
  }
  else {
    FUN_05475ffc(asStack_10,asStack_20,0,6);
    bVar3 = std::operator==(asStack_10,"plant_");
    std::string::~string(asStack_10);
    if (bVar3) {
      FUN_05475ffc(asStack_10,asStack_20,6,0xffffffffffffffff);
      cVar2 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_10);
      if (cVar2 == '\0') {
        PlayerInfo::UnlockPlant((PlayerInfo *)this_01,asStack_10,false);
      }
      else {
        iVar4 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_01,asStack_10,bVar1);
        if (*(int *)(lVar6 + 0x14) <= iVar4) {
          PlayerInfo::AddPlantPieceCount(this_01,iVar5,SUB41(*(undefined4 *)(lVar6 + 0x1c),0));
        }
      }
      iVar5 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_01,asStack_10,false);
      if (iVar5 < *(int *)(lVar6 + 0x14)) {
        PlayerInfo::PlantLevelUpCurrentLevel
                  ((PlayerInfo *)this_01,asStack_10,*(int *)(lVar6 + 0x14),false);
      }
    }
    else {
      FUN_05475ffc(asStack_10,asStack_20,0,0xd);
      bVar1 = std::operator==(asStack_10,"avatar_piece_");
      std::string::~string(asStack_10);
      if (bVar1) {
        FUN_05475ffc(asStack_10,asStack_20,0xd,0xffffffffffffffff);
        cVar2 = PlayerInfo::IsPlantAvatarPiecesFull(this_01,asStack_10,0,bVar3);
        if (cVar2 != '\0') goto LAB_049cd364;
        PlayerInfo::AddAvatarPiecesCount
                  ((PlayerInfo *)this_01,asStack_10,0,*(undefined4 *)(lVar6 + 0x10),1);
      }
      else {
        FUN_05475ffc(asStack_10,asStack_20,0,0x10);
        bVar1 = std::operator==(asStack_10,"accessory_piece_");
        std::string::~string(asStack_10);
        if (!bVar1) {
          FUN_05475ffc(asStack_10,asStack_20,0,10);
          bVar1 = std::operator==(asStack_10,"accessory_");
          std::string::~string(asStack_10);
          if (bVar1) {
            FUN_05475ffc(asStack_18,asStack_20,10,0xffffffffffffffff);
            Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            cVar2 = PlantAccessoryMgr::CanExchangeAccessory();
            if (cVar2 == '\0') {
              PlayerInfo::AddAccessoryPieceCount((PlayerInfo *)this_01,asStack_18,10,true);
            }
            else {
              FUN_05475d88(asStack_10,asStack_18);
              PlayerInfo::AddPlantAccessoryInfos((PlayerInfo *)this_01,asStack_10,0,1);
              std::string::~string(asStack_10);
            }
            std::string::~string(asStack_18);
          }
          else {
            bVar1 = std::operator==(asStack_20,"gem");
            if (bVar1) {
              PlayerInfo::AddGems((PlayerInfo *)this_01,*(int *)(lVar6 + 0x10),true);
            }
            else {
              bVar1 = std::operator==(asStack_20,"coin");
              if (bVar1) {
                PlayerInfo::AddCoins((PlayerInfo *)this_01,*(int *)(lVar6 + 0x10));
              }
            }
          }
          goto LAB_049cd378;
        }
        FUN_05475ffc(asStack_10,asStack_20,0x10,0xffffffffffffffff);
        PlayerInfo::AddAccessoryPieceCount
                  ((PlayerInfo *)this_01,asStack_10,*(int *)(lVar6 + 0x10),true);
      }
    }
  }
  std::string::~string(asStack_10);
LAB_049cd378:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveConsumptionTab::~ActiveConsumptionTab() */

void __thiscall ActiveConsumptionTab::~ActiveConsumptionTab(ActiveConsumptionTab *this)

{
  *(undefined ***)(this + 0x30) = &PTR__ActiveConsumptionTab_06927820;
  *(undefined ***)this = &PTR__ActiveConsumptionTab_06927760;
  *(undefined **)(this + 0x28) = &DAT_069277d8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ItemButton*,std::allocator<ItemButton*>>::~vector
            ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0xa0));
  std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::~vector
            ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x80));
  TopicItem::~TopicItem((TopicItem *)(this + 0x38));
  nop();
  return;
}


/* non-virtual thunk to ActiveConsumptionTab::~ActiveConsumptionTab() */

void __thiscall ActiveConsumptionTab::~ActiveConsumptionTab(ActiveConsumptionTab *this)

{
  ~ActiveConsumptionTab(this + -0x30);
  return;
}


/* ActiveConsumptionTab::~ActiveConsumptionTab() */

void __thiscall ActiveConsumptionTab::~ActiveConsumptionTab(ActiveConsumptionTab *this)

{
  ~ActiveConsumptionTab(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActiveConsumptionTab::~ActiveConsumptionTab() */

void __thiscall ActiveConsumptionTab::~ActiveConsumptionTab(ActiveConsumptionTab *this)

{
  ~ActiveConsumptionTab(this + -0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::ButtonPress(int) */

void __thiscall ActiveConsumptionTab::ButtonPress(ActiveConsumptionTab *this,int param_1)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar5;
  long *plVar6;
  RewardItem *pRVar7;
  RewardAnimWidget *this_03;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  RewardAnimWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CanPress(this);
  if (cVar1 != '\0') {
    LawnApp::KillPlantSkillTipsUI(gLawnApp);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (param_1 == 0x222) {
      iVar2 = FUN_049cc7c0(*(undefined4 *)(this_02 + 0x1050));
      iVar3 = FUN_049cc7c4(*(undefined4 *)(this_02 + 0x1054));
      iVar4 = FUN_049cc7d0(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8));
      if (iVar2 < iVar4) {
        lVar10 = 0;
        iVar11 = 0;
        if (0 < iVar4) {
          do {
            lVar5 = FUN_049cc7c8(*(undefined8 *)(this + 0x60),lVar10);
            iVar9 = (int)lVar10;
            if ((iVar2 <= iVar9) && (*(int *)(lVar5 + 0x18) <= iVar3)) {
              RecvReward(this,iVar9);
              PlayerInfo::AddConsumptionRewardCount(this_02,1);
              plVar6 = (long *)FUN_049cc7dc(*(undefined8 *)(this + 0xa0),lVar10);
              FUN_049cc910(*plVar6 + 0x2fa,*plVar6 + 800);
              pRVar7 = (RewardItem *)FUN_049cc7c8(*(undefined8 *)(this + 0x60),lVar10);
              this_03 = ::operator_new(0x120);
              fVar12 = (float)iVar11;
              iVar11 = iVar11 + 1;
              RewardAnimWidget::RewardAnimWidget(this_03,pRVar7,fVar12 * 1.5);
              local_10 = this_03;
              (**(code **)(*(long *)this_03 + 0x1a8))(this_03,0,0);
              puVar8 = (undefined8 *)FUN_049cc7dc(*(undefined8 *)(this + 0xa0),lVar10);
              (**(code **)(*(long *)*puVar8 + 0x60))((long *)*puVar8,local_10);
              std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::push_back
                        ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)
                         (this + 0x80),&local_10);
            }
            lVar10 = lVar10 + 1;
          } while (iVar9 + 1 < iVar4);
          if (iVar11 != 0) {
            fVar12 = (float)PVZ_T();
            *(float *)(this + 0x98) = (float)iVar11 * 1.5 + 2.0 + fVar12;
          }
        }
      }
      TipsWidget::RefreshTips(*(TipsWidget **)(this + 0x78));
      this_00 = gMessageRouter;
      iVar2 = FUN_049cc7c0(*(undefined4 *)(this_02 + 0x1050));
      MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::GemsCostReward,iVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActiveConsumptionTab::ButtonPress(int) */

void __thiscall ActiveConsumptionTab::ButtonPress(ActiveConsumptionTab *this,int param_1)

{
  ButtonPress(this + -0x28,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::OnGotConsumptionReward(bool) */

void __thiscall
ActiveConsumptionTab::OnGotConsumptionReward(ActiveConsumptionTab *this,bool param_1)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  long *plVar5;
  RewardItem *pRVar6;
  RewardAnimWidget *this_03;
  undefined8 *puVar7;
  PVZ2UIDialog *pPVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  RewardAnimWidget *local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar1 = FUN_049cc7c0(*(undefined4 *)(this_02 + 0x1050));
    iVar2 = FUN_049cc7c4(*(undefined4 *)(this_02 + 0x1054));
    iVar3 = FUN_049cc7d0(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8));
    if (iVar1 < iVar3) {
      lVar10 = 0;
      iVar11 = 0;
      if (0 < iVar3) {
        do {
          lVar4 = FUN_049cc7c8(*(undefined8 *)(this + 0x60),lVar10);
          iVar9 = (int)lVar10;
          if ((iVar1 <= iVar9) && (*(int *)(lVar4 + 0x18) <= iVar2)) {
            PlayerInfo::AddConsumptionRewardCount(this_02,1);
            plVar5 = (long *)FUN_049cc7dc(*(undefined8 *)(this + 0xa0),lVar10);
            FUN_049cc910(*plVar5 + 0x2fa,*plVar5 + 800);
            pRVar6 = (RewardItem *)FUN_049cc7c8(*(undefined8 *)(this + 0x60),lVar10);
            this_03 = ::operator_new(0x120);
            fVar12 = (float)iVar11;
            iVar11 = iVar11 + 1;
            RewardAnimWidget::RewardAnimWidget(this_03,pRVar6,fVar12 * 1.5);
            local_50[0] = this_03;
            (**(code **)(*(long *)this_03 + 0x1a8))(this_03,0,0);
            puVar7 = (undefined8 *)FUN_049cc7dc(*(undefined8 *)(this + 0xa0),lVar10);
            (**(code **)(*(long *)*puVar7 + 0x60))((long *)*puVar7,local_50[0]);
            std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::push_back
                      ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x80),
                       local_50);
          }
          lVar10 = lVar10 + 1;
        } while (iVar9 + 1 < iVar3);
        if (iVar11 != 0) {
          fVar12 = (float)PVZ_T();
          *(float *)(this + 0x98) = (float)iVar11 * 1.5 + 2.0 + fVar12;
        }
      }
    }
    TipsWidget::RefreshTips(*(TipsWidget **)(this + 0x78));
  }
  else {
    FUN_05478178(awStack_58,L"[CONSUMPTION_REWARD_FAILED]",auStack_68);
    FUN_05478178((wstring *)local_50,L"[CONSUMPTION_DIALOG_SHOWFAILED]",auStack_60);
    pPVar8 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseDialog);
    Sexy::Delegate0::Delegate0<ActiveConsumptionTab,void(ActiveConsumptionTab::*)()>
              (aDStack_38,(wstring *)local_50);
    PVZ2UIDialog::AddButton(pPVar8,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::AddScrollWidght() */

void __thiscall ActiveConsumptionTab::AddScrollWidght(ActiveConsumptionTab *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PVZ2UIScrollingWidget *this_00;
  ConsumptionScrollPanel *this_01;
  vector *pvVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_049cc8d0(0x14);
  iVar2 = FUN_049cc8d0(200);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  iVar3 = FUN_049cc8d0(0x1e);
  iVar4 = *(int *)(lVar5 + 0x38);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75940);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1,iVar2,iVar4 - iVar3,*(int *)(lVar5 + 0x3c));
  iVar4 = FUN_049cc8d0(0x14);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c + iVar4);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x30));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0x138);
  ConsumptionScrollPanel::ConsumptionScrollPanel
            (this_01,(TRect *)aIStack_18,(TopicItem *)(this + 0x38));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  pvVar6 = (vector *)UIWidgetAnim::GetScale((UIWidgetAnim *)this_01);
  std::vector<ItemButton*,std::allocator<ItemButton*>>::operator=
            ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0xa0),pvVar6);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
  (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::ActiveConsumptionTab(int, UI::Dialog*) */

void __thiscall
ActiveConsumptionTab::ActiveConsumptionTab(ActiveConsumptionTab *this,int param_1,Dialog *param_2)

{
  int iVar1;
  ActiveConsumptionTab AVar2;
  int iVar3;
  UIWidgetImage *this_00;
  long *plVar4;
  undefined4 uVar5;
  TopicItem aTStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x28));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x30));
  *(undefined ***)this = &PTR__ActiveConsumptionTab_06927760;
  *(undefined **)(this + 0x28) = &DAT_069277d8;
  *(undefined ***)(this + 0x30) = &PTR__ActiveConsumptionTab_06927820;
  TopicItem::TopicItem((TopicItem *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x98) = uVar5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  LawnApp::GetActivityConfig();
  AVar2 = (ActiveConsumptionTab)ActivityConfig::IsAnyConsumptionTopicValid();
  this[0xb8] = AVar2;
  LawnApp::GetConsumptionRewardInfo(gLawnApp);
  ConsumptionRewardInfo::GetCurrentTopicItem();
  TopicItem::operator=((TopicItem *)(this + 0x38),aTStack_48);
  TopicItem::~TopicItem(aTStack_48);
  if (this[0xb8] == (ActiveConsumptionTab)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x158))(*(long **)(this + 0x18));
  }
  else {
    this[0xb9] = (ActiveConsumptionTab)0x0;
    uVar5 = *(undefined4 *)(*(long *)(this + 0x20) + 0x50);
    iVar1 = *(int *)(*(long *)(this + 0x20) + 0x54);
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00);
    *(UIWidgetImage **)(this + 0x20) = this_00;
    plVar4 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined8 *)(this + 0x20));
    plVar4 = *(long **)(this + 0x20);
    iVar3 = FUN_049cc8d0(0x14);
    (**(code **)(*plVar4 + 0x198))(plVar4,0,0,uVar5,iVar3 + iVar1);
    this[0xba] = (ActiveConsumptionTab)0x0;
    this[0xbb] = (ActiveConsumptionTab)0x0;
    this[0xbc] = (ActiveConsumptionTab)0x0;
    AddScrollBg(this);
    AddScrollWidght(this);
    AddBuyTips(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::OngetConsumptionRewardStat(bool) */

void __thiscall
ActiveConsumptionTab::OngetConsumptionRewardStat(ActiveConsumptionTab *this,bool param_1)

{
  LawnApp *this_00;
  ProfileMgr *this_01;
  long lVar1;
  undefined8 uVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  Delegate0 aDStack_78 [48];
  TopicItem aTStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    LawnApp::GetConsumptionRewardInfo(gLawnApp);
    ConsumptionRewardInfo::GetCurrentTopicItem();
    TopicItem::operator=((TopicItem *)(this + 0x38),aTStack_48);
    TopicItem::~TopicItem(aTStack_48);
    this_00 = gLawnApp;
    FUN_05478178((wstring *)asStack_80,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_90);
    FUN_05478178(aTStack_48,L"[NETWORK_NOT_CONNECTED_TEXT_INCUNSUMPTION_TAB]",asStack_88);
    pPVar3 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this_00,(wstring *)asStack_80,(wstring *)aTStack_48);
    FUN_05476c50(aTStack_48);
    nop();
    FUN_05476c50((wstring *)asStack_80);
    nop();
    FUN_05478178((wstring *)asStack_80,L"[BUTTON_OK]",asStack_88);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseDialog);
    Sexy::Delegate0::Delegate0<ActiveConsumptionTab,void(ActiveConsumptionTab::*)()>
              (aDStack_78,aTStack_48);
    PVZ2UIDialog::AddButton(pPVar3,(wstring *)asStack_80,aDStack_78,1);
    FUN_05476c50((wstring *)asStack_80);
    nop();
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar1 != 0) {
    PlayerInfo::GetSpecialAvatarBonus();
    uVar2 = LawnApp::GetConsumptionRewardInfo(gLawnApp);
    FUN_05475d88(asStack_80,asStack_88);
    ConsumptionRewardInfo::SetCurrentTopicItemFromServer(aTStack_48,uVar2,asStack_80);
    TopicItem::operator=((TopicItem *)(this + 0x38),aTStack_48);
    TopicItem::~TopicItem(aTStack_48);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
  }
  this[0xb9] = (ActiveConsumptionTab)0x1;
  AddScrollBg(this);
  AddScrollWidght(this);
  AddBuyTips(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveConsumptionTab::DrawForeground(Sexy::Graphics*) */

void __thiscall ActiveConsumptionTab::DrawForeground(ActiveConsumptionTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  GraphicsAutoState aGStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  cVar4 = FUN_049cc7ac(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8));
  if (cVar4 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_10,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_10,local_c);
    if (this[0xb8] == (ActiveConsumptionTab)0x0) {
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
    }
    else {
      DrawConsumptionBanner(this,param_1);
      DrawTips(this,param_1);
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75970);
      iVar1 = *(int *)(*(long *)(this + 0x20) + 0x50);
      iVar2 = *(int *)(*(long *)(this + 0x20) + 0x48);
      iVar5 = FUN_049cc8d0(0x19);
      iVar6 = FUN_049cc8d0(0x13b);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75970);
      iVar7 = FUN_049cc8d0(10);
      iVar3 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b75970);
      iVar8 = FUN_049cc8d0(10);
      Sexy::Graphics::DrawImage
                (param_1,pIVar9,(iVar2 + iVar1) - iVar5,iVar6,iVar3 - iVar7,
                 *(int *)(lVar10 + 0x3c) - iVar8);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

