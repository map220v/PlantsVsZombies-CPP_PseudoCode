// Class: LimitLotteryPanel


/* LimitLotteryPanel::CloseBonusEffect() */

void __thiscall LimitLotteryPanel::CloseBonusEffect(LimitLotteryPanel *this)

{
  if (*(long *)(this + 0x100) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x100))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x100));
    *(undefined8 *)(this + 0x100) = 0;
  }
  return;
}


/* LimitLotteryPanel::OnFinishLottery() */

void __thiscall LimitLotteryPanel::OnFinishLottery(LimitLotteryPanel *this)

{
  (**(code **)(**(long **)(this + 0x1c8) + 0x188))(*(long **)(this + 0x1c8),0);
  (**(code **)(**(long **)(this + 0x1d0) + 0x188))(*(long **)(this + 0x1d0),0);
  (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),1);
  (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),1);
  (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),0);
  if (*(long *)(this + 0x200) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x200) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x200) + 0x18))();
    }
    *(undefined8 *)(this + 0x200) = 0;
  }
  return;
}


/* LimitLotteryPanel::GetItemW() */

float __thiscall LimitLotteryPanel::GetItemW(LimitLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0398a1f8(0x14);
  iVar1 = *(int *)(this + 0xec);
  iVar3 = FUN_0398a1f8(10);
  return (((float)iVar1 - (float)iVar2 * 2.0) - (float)(iVar3 << 2)) * 0.2;
}


/* LimitLotteryPanel::UnlockLotteryButton() */

void __thiscall LimitLotteryPanel::UnlockLotteryButton(LimitLotteryPanel *this)

{
  this[0x1f8] = (LimitLotteryPanel)0x0;
  return;
}


/* LimitLotteryPanel::AlmostThere() */

bool __thiscall LimitLotteryPanel::AlmostThere(LimitLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_03989234(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0x160) - *(int *)(this + 0x158) <= iVar1 >> 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::QuickFinished() */

void __thiscall LimitLotteryPanel::QuickFinished(LimitLotteryPanel *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVZ2UIButton *this_00;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,0x1b0,(ButtonListener *)(this + 0xd8),awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0x200) = this_00;
  FUN_05476c50(awStack_20);
  nop();
  plVar5 = *(long **)(this + 0x200);
  uVar1 = FUN_0398a1f8(0xfffffe89);
  uVar2 = FUN_0398a1f8(0xfffffef4);
  (**(code **)(*plVar5 + 0x198))
            (plVar5,uVar1,uVar2,*(int *)(gLawnApp + 0xd4) << 1,*(int *)(gLawnApp + 0xd8) << 1);
  lVar3 = *(long *)(this + 0x200);
  pcVar4 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar3 + 0x59) = 0;
  (*pcVar4)(this,lVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::GetLotteryItemPos(int) */

void __thiscall LimitLotteryPanel::GetLotteryItemPos(LimitLotteryPanel *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TPoint *pTVar4;
  float fVar5;
  float fVar6;
  int local_18;
  int local_14;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar4 = (TPoint *)FUN_03989248(DAT_06abe4b8,(long)param_1);
  Sexy::Point::Point((Point *)&local_18,pTVar4);
  fVar5 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x330))(this);
  iVar1 = FUN_0398a1f8(0x14);
  iVar2 = FUN_0398a1f8(10);
  iVar3 = FUN_0398a1f8(5);
  Sexy::FastCurve::SetOutRange
            (local_10,(float)iVar1 + (float)local_18 * ((float)iVar2 + fVar5),
             (float)iVar1 + (float)local_14 * ((float)iVar3 + fVar6));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::Resize(Sexy::TRect<int> const&) */

void __thiscall LimitLotteryPanel::Resize(LimitLotteryPanel *this,TRect *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  iVar2 = *(int *)(this + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xec) = uVar1;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  iVar4 = FUN_0398a1f8(0x14);
  fVar9 = (float)(**(code **)(*(long *)this + 0x328))(this);
  iVar5 = FUN_0398a1f8(0x14);
  iVar3 = *(int *)(this + 0x54);
  iVar2 = iVar2 + (iVar4 + (int)fVar9 + iVar5) * -2;
  fVar9 = (float)(**(code **)(*(long *)this + 0x330))(this);
  iVar4 = FUN_0398a1f8(5);
  iVar3 = (iVar3 + (iVar5 + (int)fVar9) * -2 + iVar4 * -3) / 2;
  iVar4 = FUN_0398a1f8(0x14);
  fVar9 = (float)(**(code **)(*(long *)this + 0x328))(this);
  iVar5 = FUN_0398a1f8(0x14);
  fVar10 = (float)(**(code **)(*(long *)this + 0x330))(this);
  iVar6 = FUN_0398a1f8(5);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + (int)fVar9 + iVar5,iVar5 + (int)fVar10 + iVar6,iVar2,iVar3)
  ;
  *(undefined8 *)(this + 0x1d8) = local_18;
  *(undefined8 *)(this + 0x1e0) = uStack_10;
  iVar4 = FUN_0398a1f8(0x14);
  fVar9 = (float)(**(code **)(*(long *)this + 0x328))(this);
  iVar5 = FUN_0398a1f8(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + (int)fVar9 + iVar5,
             (*(int *)(this + 0x54) - iVar3) - *(int *)(this + 0x1dc),iVar2,iVar3);
  *(undefined8 *)(this + 0x1e8) = local_18;
  *(undefined8 *)(this + 0x1f0) = uStack_10;
  iVar4 = FUN_0398a1f8(0x14);
  fVar9 = (float)(**(code **)(*(long *)this + 0x328))(this);
  iVar5 = FUN_0398a1f8(0x14);
  fVar10 = (float)(**(code **)(*(long *)this + 0x330))(this);
  iVar3 = *(int *)(this + 0x50);
  iVar6 = FUN_0398a1f8(0x14);
  fVar11 = (float)(**(code **)(*(long *)this + 0x328))(this);
  iVar2 = *(int *)(this + 0x54);
  iVar7 = FUN_0398a1f8(0x14);
  fVar12 = (float)(**(code **)(*(long *)this + 0x330))(this);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar4 + (int)fVar9,iVar5 + (int)fVar10,
             iVar3 + (iVar6 + (int)fVar11) * -2,iVar2 + (iVar7 + (int)fVar12) * -2);
  pcVar8 = *(code **)(**(long **)(this + 0x1c8) + 0x1a0);
  *(undefined8 *)(this + 0x210) = local_18;
  *(undefined8 *)(this + 0x218) = uStack_10;
  (*pcVar8)(*(long **)(this + 0x1c8),this + 0x1d8);
  (**(code **)(**(long **)(this + 0x1d0) + 0x1a0))(*(long **)(this + 0x1d0),this + 0x1e8);
  (**(code **)(**(long **)(this + 0x208) + 0x1a0))(*(long **)(this + 0x208),this + 0x210);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::InitLotteryButtons() */

void __thiscall LimitLotteryPanel::InitLotteryButtons(LimitLotteryPanel *this)

{
  LimitLotteryButton *pLVar1;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = ::operator_new(0x348);
  LimitLotteryButton::LimitLotteryButton(pLVar1,0x68,(ButtonListener *)(this + 0xd8));
  *(LimitLotteryButton **)(this + 0x1c8) = pLVar1;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06abe4d0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abe418,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)pLVar1,aPStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1c8) + 0x1a0))(*(long **)(this + 0x1c8),this + 0x1d8);
  LimitLotteryButton::InitView(*(LimitLotteryButton **)(this + 0x1c8));
  pLVar1 = ::operator_new(0x348);
  LimitLotteryButton::LimitLotteryButton(pLVar1,0x69,(ButtonListener *)(this + 0xd8));
  *(LimitLotteryButton **)(this + 0x1d0) = pLVar1;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06abe4d0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abe418,3);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)pLVar1,aPStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1d0) + 0x1a0))(*(long **)(this + 0x1d0),this + 0x1e8);
  LimitLotteryButton::InitView(*(LimitLotteryButton **)(this + 0x1d0));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::OpenCrystalShop(UIMessageBox*, int) */

void __thiscall
LimitLotteryPanel::OpenCrystalShop(LimitLotteryPanel *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  UISingletonDialog<LimitLotteryCrystalBuy>::ShowDialog();
  return;
}


/* LimitLotteryPanel::CanSelectNext() */

bool __thiscall LimitLotteryPanel::CanSelectNext(LimitLotteryPanel *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x168) <= fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::showLackMaterial(std::wstring) */

void __thiscall LimitLotteryPanel::showLackMaterial(LimitLotteryPanel *this,wstring *param_2)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[SUMMERY_LOTTERY_LACK_MATERIAL]");
    TodReplaceString(awStack_60,L"{ITEM}",param_2);
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    TodStringTranslate(L"[GET_CRYSTAL]");
    TodReplaceString(awStack_58,L"{ITEM}",param_2);
    FUN_054766c8(awStack_58,asStack_50);
    FUN_05476c50(asStack_50);
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,awStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OpenCrystalShop);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<LimitLotteryPanel,void(LimitLotteryPanel::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::ButtonDepress(int) */

void __thiscall LimitLotteryPanel::ButtonDepress(LimitLotteryPanel *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  NetworkMgr *pNVar5;
  long *plVar6;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1b0) {
    *(undefined4 *)(this + 0x1a0) = 2;
    goto LAB_0398d528;
  }
  if (this[0x1f8] != (LimitLotteryPanel)0x0) goto LAB_0398d528;
  if (param_1 == 0x68) {
    *(undefined4 *)(this + 0x150) = 0;
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    iVar2 = PlayerInfo::GetMaterialNum(pPVar4,0x59fc);
    if (iVar2 < 0x3c) {
LAB_0398d5b4:
      std::string::string(asStack_18,"[VIOLET_GOLD]");
      StringHelper::ToStringValue(asStack_18);
      showLackMaterial(this,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
      nop();
      goto LAB_0398d528;
    }
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      this[0x1f8] = (LimitLotteryPanel)0x1;
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      (**(code **)(*plVar6 + 0x198))(plVar6,1);
      goto LAB_0398d528;
    }
  }
  else {
    if (param_1 != 0x69) goto LAB_0398d528;
    *(undefined4 *)(this + 0x150) = 1;
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    iVar2 = PlayerInfo::GetMaterialNum(pPVar4,0x59fc);
    if (iVar2 < 0x10e) goto LAB_0398d5b4;
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      this[0x1f8] = (LimitLotteryPanel)0x1;
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      (**(code **)(*plVar6 + 0x198))(plVar6,5);
      goto LAB_0398d528;
    }
  }
  LawnApp::ShowNetworkError(gLawnApp);
LAB_0398d528:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitLotteryPanel::ButtonDepress(int) */

void __thiscall LimitLotteryPanel::ButtonDepress(LimitLotteryPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::ShowBonus() */

void __thiscall LimitLotteryPanel::ShowBonus(LimitLotteryPanel *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)this + 800);
  local_8 = ___stack_chk_guard;
  this_00 = (EffectAnim_UIAnim *)(this + 0x170);
  this[0xe1] = (LimitLotteryPanel)0x1;
  fVar3 = (float)(*pcVar2)(this,*(undefined4 *)(this + 0xf8));
  fVar4 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar5 = fVar3 + fVar4 * 0.5;
  (**(code **)(*(long *)this + 800))(this,*(undefined4 *)(this + 0xf8));
  fVar4 = (float)(**(code **)(*(long *)this + 0x330))(this);
  std::string::string(asStack_58,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar5,fVar3 + fVar4 * 0.5);
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_50,local_4c,this_00,asStack_58,1);
  std::string::~string(asStack_58);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_58,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowLotteryEffect);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<LimitLotteryPanel,void(LimitLotteryPanel::*)(std::string_const&)>
              (aDStack_38,(FastCurve *)&local_50);
    EffectAnim_UIAnim::PlayOnceThen(this_00,asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::GetLotteryItemByIndex(int) */

void __thiscall LimitLotteryPanel::GetLotteryItemByIndex(LimitLotteryPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  LotteryItem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x108));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x108));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (LotteryItem *)*puVar3;
    iVar2 = LotteryItem::GetIndex(this_00);
    if (iVar2 == param_1) goto LAB_0398d8e8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (LotteryItem *)0x0;
LAB_0398d8e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::LimitLotteryPanel() */

void __thiscall LimitLotteryPanel::LimitLotteryPanel(LimitLotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (LimitLotteryPanel)0x0;
  this[0xe1] = (LimitLotteryPanel)0x0;
  *(undefined ***)this = &PTR_GetClass_066dd8b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ddc00;
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  *(undefined8 *)(this + 0x100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x170));
  *(undefined4 *)(this + 0x1a0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  *(undefined4 *)(this + 0x150) = 0;
  this[0x1f8] = (LimitLotteryPanel)0x0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::InitMidShow() */

void __thiscall LimitLotteryPanel::InitMidShow(LimitLotteryPanel *this)

{
  LimitLotteryMidShow *this_00;
  
  this_00 = ::operator_new(0x110);
  LimitLotteryMidShow::LimitLotteryMidShow(this_00);
  *(LimitLotteryMidShow **)(this + 0x208) = this_00;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,this + 0x210);
  LimitLotteryMidShow::InitView(*(LimitLotteryMidShow **)(this + 0x208));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),0);
  return;
}


/* LimitLotteryPanel::DrawSelectFrame(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
LimitLotteryPanel::DrawSelectFrame(undefined8 param_1_00,Graphics *param_1,int *param_3)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe7f8);
  Sexy::Graphics::DrawImage(param_1,pIVar1,*param_3,param_3[1],param_3[2],param_3[3]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void LimitLotteryPanel::DrawAll(ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  Graphics *in_x2;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)param_1,(ModalFlags *)param_2,in_x2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x120));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x120));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    fVar5 = (float)(**(code **)(*(long *)param_1 + 800))(param_1,*piVar3);
    iVar4 = (int)in_s1;
    fVar6 = (float)(**(code **)(*(long *)param_1 + 0x328))(param_1);
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x330))(param_1);
    Sexy::Insets::Insets(aIStack_28,(int)fVar5,iVar4,(int)fVar6,(int)fVar7);
    if (*piVar3 == *(int *)(param_1 + 0xf8)) {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      DrawSelectFrame((LimitLotteryPanel *)param_1);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_38);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(param_1 + 0x170));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(param_1 + 0x170),in_x2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::Draw(Sexy::Graphics*) */

void __thiscall LimitLotteryPanel::Draw(LimitLotteryPanel *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe4));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abead0);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::InitView() */

void __thiscall LimitLotteryPanel::InitView(LimitLotteryPanel *this)

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
  (**(code **)(*(long *)this + 0x338))();
  InitMidShow(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLotteryResult);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<LimitLotteryPanel,void(LimitLotteryPanel::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLLimitLotteryResult,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBonusClosed);
  Sexy::Delegate0::Delegate0<LimitLotteryPanel,void(LimitLotteryPanel::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyLimitBonusClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishLottery);
  Sexy::Delegate0::Delegate0<LimitLotteryPanel,void(LimitLotteryPanel::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishLottery,aDStack_38);
  this[0x59] = (LimitLotteryPanel)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::InitSteps() */

void LimitLotteryPanel::InitSteps(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  wchar16 *pwVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(in_x0 + 0x158) = 0;
  pLVar6 = aLStack_18;
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03989234(*(undefined8 *)(in_x0 + 0x120),*(undefined8 *)(in_x0 + 0x128));
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FakeLottery");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)asStack_10,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar2 == '\0') {
    iVar4 = *(int *)(in_x0 + 0xf4);
  }
  else {
    iVar4 = Sexy::Rand(iVar3);
    *(int *)(in_x0 + 0xf4) = iVar4;
  }
  *(undefined4 *)(in_x0 + 0x15c) = 4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0xc / iVar3;
  }
  iVar4 = ((iVar3 * -100 + -0x12) - (0xc - iVar1 * iVar3)) + iVar4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar4 / iVar3;
  }
  iVar4 = iVar4 - iVar1 * iVar3;
  *(int *)(in_x0 + 0x164) = iVar4 + 0x10;
  *(int *)(in_x0 + 0x160) = iVar4 + 0x1e;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::StartLottery(int) */

void __thiscall LimitLotteryPanel::StartLottery(LimitLotteryPanel *this,int param_1)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (*(int *)(this + 0x150) == 0) {
    (**(code **)(**(long **)(this + 0x1c8) + 0x188))(*(long **)(this + 0x1c8),1);
    (**(code **)(**(long **)(this + 0x1d0) + 0x188))(*(long **)(this + 0x1d0),1);
  }
  else if (*(int *)(this + 0x150) == 1) {
    (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),0);
    (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
    (**(code **)(**(long **)(this + 0x208) + 0x158))(*(long **)(this + 0x208),1);
  }
  *(int *)(this + 0xf8) = param_1;
  this[0xe1] = (LimitLotteryPanel)0x0;
  *(undefined4 *)(this + 0x1a0) = 1;
  *(undefined4 *)(this + 0x154) = 0x40400000;
  InitSteps();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::StartNextLoop() */

void __thiscall LimitLotteryPanel::StartNextLoop(LimitLotteryPanel *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03989200(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  if (lVar3 - 1U < (ulong)(long)*(int *)(this + 0x1c0)) {
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xf4);
    if (this[0xe1] == (LimitLotteryPanel)0x0) {
      ShowBonus(this);
    }
  }
  else {
    *(undefined4 *)(this + 0xf4) = 0xffffffff;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x120));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      iVar1 = *(int *)(this + 0x1c0);
      piVar5 = (int *)FUN_03989220(*(undefined8 *)(this + 0x1a8),(long)iVar1);
      if ((puVar4[1] == *piVar5) && (puVar4[2] == piVar5[1])) {
        *(undefined4 *)(this + 0xf4) = *puVar4;
        FUN_039891e0(*(long *)(this + 0x208) + 0xd8,iVar1);
        *(int *)(this + 0x1c0) = *(int *)(this + 0x1c0) + 1;
        uVar6 = FUN_03989234(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
        iVar1 = 0;
        if (uVar6 != 0) {
          iVar1 = (int)((ulong)(long)(*(int *)(this + 0xf4) + 1) / uVar6);
        }
        StartLottery(this,(*(int *)(this + 0xf4) + 1) - iVar1 * (int)uVar6);
        break;
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::OnLotteryResult(bool) */

void __thiscall LimitLotteryPanel::OnLotteryResult(LimitLotteryPanel *this,bool param_1)

{
  if (!param_1) {
    (**(code **)(**(long **)(this + 0x1c8) + 0x188))(*(long **)(this + 0x1c8),0);
    (**(code **)(**(long **)(this + 0x1d0) + 0x188))(*(long **)(this + 0x1d0),param_1);
    LawnApp::ShowNetworkError(gLawnApp);
    return;
  }
  StartLottery(this,0);
  QuickFinished(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::~LimitLotteryPanel() */

void __thiscall LimitLotteryPanel::~LimitLotteryPanel(LimitLotteryPanel *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ddc00;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066dd8b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x1a8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x170));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::~vector
            ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0x120));
  std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::~vector
            ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0x108));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::~LimitLotteryPanel() */

void __thiscall LimitLotteryPanel::~LimitLotteryPanel(LimitLotteryPanel *this)

{
  ~LimitLotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::SelectNext() */

void __thiscall LimitLotteryPanel::SelectNext(LimitLotteryPanel *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03989234(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0xf8) + 1) / uVar3);
  }
  *(int *)(this + 0xf8) = (*(int *)(this + 0xf8) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_039939b4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar6 = *(float *)(this + 0x154);
  fVar5 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(int *)(this + 0x158) = *(int *)(this + 0x158) + 1;
  *(float *)(this + 0x168) = fVar5 + 1.0 / fVar6;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::TryToSelectNext() */

char __thiscall LimitLotteryPanel::TryToSelectNext(LimitLotteryPanel *this)

{
  char cVar1;
  
  cVar1 = CanSelectNext(this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* LimitLotteryPanel::UpdateSelectFrame() */

void __thiscall LimitLotteryPanel::UpdateSelectFrame(LimitLotteryPanel *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x1a0);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0xf8) == *(int *)(this + 0xf4))) {
      *(undefined4 *)(this + 0x1a0) = 2;
      return;
    }
    cVar2 = TryToSelectNext(this);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x158);
      if (*(int *)(this + 0x15c) < iVar1) {
        if (iVar1 <= *(int *)(this + 0x164)) {
          *(undefined4 *)(this + 0x154) = 0x41f00000;
          return;
        }
        fVar3 = *(float *)(this + 0x154);
        if (iVar1 < *(int *)(this + 0x160)) {
          fVar3 = fVar3 - 2.0;
          *(float *)(this + 0x154) = fVar3;
        }
      }
      else {
        fVar3 = *(float *)(this + 0x154) + 6.0;
        *(float *)(this + 0x154) = fVar3;
      }
      if (fVar3 <= 30.0) {
        if (fVar3 < 1.0) {
          *(undefined4 *)(this + 0x154) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(this + 0x154) = 0x41f00000;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xf8) = 0xffffffff;
      return;
    }
    if (iVar1 == 2) {
      StartNextLoop(this);
      return;
    }
  }
  return;
}


/* LimitLotteryPanel::Update() */

void __thiscall LimitLotteryPanel::Update(LimitLotteryPanel *this)

{
  char cVar1;
  
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x170));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x170));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::SetBonusList(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&,
   std::vector<int, std::allocator<int> > const&) */

void __thiscall
LimitLotteryPanel::SetBonusList(LimitLotteryPanel *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x138));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_2);
  std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::clear
            ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0x120));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  iVar3 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    local_14 = *puVar2;
    local_10 = puVar2[1];
    local_18 = iVar3;
    std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::push_back
              ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0x120),
               (LimitLotteryItemInfo *)&local_18);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_28);
    iVar3 = iVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::InitLotteryItems() */

void LimitLotteryPanel::InitLotteryItems(void)

{
  int iVar1;
  bool bVar2;
  long *in_x0;
  LimitLotteryItemInfo *pLVar3;
  LimitLotteryItem *this;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_30;
  undefined8 local_28;
  LimitLotteryItem *local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::clear
            ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(in_x0 + 0x21));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x24));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x24));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    pLVar3 = (LimitLotteryItemInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *(int *)pLVar3;
    fVar5 = (float)(**(code **)(*in_x0 + 800))();
    (**(code **)(*in_x0 + 800))();
    iVar4 = (int)in_s1;
    fVar6 = (float)(**(code **)(*in_x0 + 0x328))();
    fVar7 = (float)(**(code **)(*in_x0 + 0x330))();
    Sexy::Insets::Insets(aIStack_18,(int)fVar5,iVar4,(int)fVar6,(int)fVar7);
    this = ::operator_new(0x368);
    LimitLotteryItem::LimitLotteryItem(this,iVar1 + 0x78);
    local_20 = this;
    (**(code **)(*(long *)this + 0x1a0))(this,aIStack_18);
    LimitLotteryItem::SetlotteryInfo(local_20,pLVar3,(vector *)(in_x0 + 0x27));
    std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::push_back
              ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(in_x0 + 0x21),
               &local_20);
    (**(code **)(*in_x0 + 0x60))();
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryPanel::ShowLotteryEffect(std::string const&) */

void LimitLotteryPanel::ShowLotteryEffect(string *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  LimitLotteryBonusUI *this;
  
  if (*(long *)(param_1 + 0x100) == 0) {
    this = ::operator_new(0x200);
    LimitLotteryBonusUI::LimitLotteryBonusUI(this);
    *(LimitLotteryBonusUI **)(param_1 + 0x100) = this;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x100));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(param_1 + 0x100));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0x100));
  if (*(long *)(param_1 + 0x100) != 0) {
    GetLotteryItemByIndex((LimitLotteryPanel *)param_1,*(int *)(param_1 + 0xf4));
    LimitLotteryBonusUI::InitBonus
              (*(LimitLotteryBonusUI **)(param_1 + 0x100),(vector *)(param_1 + 0x1a8));
    uVar2 = operator|(0x10,0x20);
    uVar2 = operator|(uVar2,0x1000);
    uVar1 = operator|(uVar2,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(param_1 + 0x100),uVar1);
    (**(code **)(**(long **)(param_1 + 0x100) + 0x310))(*(long **)(param_1 + 0x100));
  }
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_PlantLevelUp");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::SetBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall LimitLotteryPanel::SetBonus(LimitLotteryPanel *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  LotteryBonus *pLVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::clear
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x1a8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    pLVar3 = (LotteryBonus *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x1a8),pLVar3);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  uVar4 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x1c0) = 0;
  uVar5 = FUN_03989200(uVar4,uVar8);
  if (1 < uVar5) {
    LimitLotteryMidShow::SetBonus(*(LimitLotteryMidShow **)(this + 0x208),param_1);
  }
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x120));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x120));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03995a58:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar1 = *(int *)(this + 0x1c0);
    piVar7 = (int *)FUN_03989220(*(undefined8 *)(this + 0x1a8),(long)iVar1);
    if ((puVar6[1] == *piVar7) && (puVar6[2] == piVar7[1])) {
      *(undefined4 *)(this + 0xf4) = *puVar6;
      *(int *)(this + 0x1c0) = iVar1 + 1;
      goto LAB_03995a58;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryPanel::GiveRewards() */

void __thiscall LimitLotteryPanel::GiveRewards(LimitLotteryPanel *this)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  TGALogMgr *pTVar14;
  NameMapperBase *pNVar15;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar16;
  undefined8 *puVar17;
  PlayerInfo *this_02;
  vector *pvVar18;
  long lVar19;
  string *__n;
  size_t __n_00;
  GAME_ITEM_INFO *pGVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  string asStack_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1a0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_188 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_170 [24];
  string asStack_158 [24];
  DString aDStack_140 [24];
  TGAAnniversaryTreasureData aTStack_128 [16];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [16];
  string asStack_f0 [8];
  string asStack_e8 [8];
  undefined1 auStack_e0 [8];
  int local_d8;
  int iStack_d4;
  undefined8 local_c0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_188);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_170);
  lVar10 = FUN_03989200(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
  if (lVar10 == 1) {
    local_d8 = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_1a0,&local_d8);
    local_d8 = 0x32;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_1a0,&local_d8);
  }
  else {
    local_d8 = 10;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_1a0,&local_d8);
    local_d8 = 400;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_1a0,&local_d8);
  }
  lVar10 = UISingletonDialog<UILimitLottery>::GetSingletonPtr();
  if (lVar10 == 0) {
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
    iVar8 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar8);
    cVar4 = FUN_039891e8(local_80);
    iVar8 = 0;
    if ((cVar4 != '\0') && (local_70 != '\0')) {
      BossChallengeMedalLotteryServerData::BossChallengeMedalLotteryServerData
                ((BossChallengeMedalLotteryServerData *)&local_d8);
      cVar4 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_d8);
      if (cVar4 != '\0') {
        lVar10 = FUN_0398922c(local_c0,0);
        iVar8 = *(int *)(lVar10 + 0x14);
      }
      BossChallengeMedalLotteryServerData::~BossChallengeMedalLotteryServerData
                ((BossChallengeMedalLotteryServerData *)&local_d8);
    }
    bVar3 = true;
    std::string::append((string *)aTStack_128,"2",1);
    iVar9 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __n_00 = 0;
    TGALogMgr::GetSegForId(iVar9,0x273a);
    FUN_05474278(auStack_118,(GAME_ITEM_INFO *)&local_d8);
    std::string::~string((string *)&local_d8);
    iVar9 = FUN_03989200(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
    DString::DString((DString *)&local_d8,iVar9);
    pcVar13 = (char *)DString::c_str((DString *)&local_d8);
    std::string::append(asStack_100,pcVar13,__n_00);
    DString::~DString((DString *)&local_d8);
    lVar10 = FUN_03989200(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
    iVar9 = 0x32;
    if (lVar10 != 1) {
      iVar9 = 400;
    }
    DString::DString((DString *)&local_d8,iVar9);
    pcVar13 = (char *)DString::c_str((DString *)&local_d8);
    std::string::append(asStack_f0,pcVar13,__n_00);
    DString::~DString((DString *)&local_d8);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    iVar8 = 0;
    bVar3 = false;
    TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
  }
  uVar21 = 0;
  bVar1 = false;
  iVar9 = 0;
  std::string::string(asStack_1c8,"");
  nop();
  do {
    uVar22 = *(undefined8 *)(this + 0x1a8);
    uVar11 = FUN_03989200(uVar22,*(undefined8 *)(this + 0x1b0));
    puVar2 = gMessageRouter;
    if (uVar11 <= uVar21) {
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)asStack_158,(vector *)avStack_1a0);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)aDStack_140,(vector *)avStack_188);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)&local_d8,(vector *)avStack_170);
      __n = asStack_158;
      pGVar20 = (GAME_ITEM_INFO *)&local_d8;
      MessageRouter::
      Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>>
                ((MessageRouter *)puVar2,Message::DoubleFestivalLotteryDraw,asStack_158,aDStack_140)
      ;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_d8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aDStack_140);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_158);
      if (bVar3) {
        if (bVar1) {
          iVar6 = PlantChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar6);
          cVar4 = FUN_0547419c(asStack_158);
          if (cVar4 == '\0') {
            FUN_05475d88(aDStack_140,asStack_158);
            FUN_05474278(auStack_110,aDStack_140);
            std::string::~string((string *)aDStack_140);
          }
          else {
            __n = asStack_1a8;
            DString::DString((DString *)&local_d8,iVar8);
            pcVar13 = (char *)DString::c_str((DString *)&local_d8);
            std::string::string((string *)aDStack_140,pcVar13);
            FUN_05474278(auStack_110,aDStack_140);
            std::string::~string((string *)aDStack_140);
            nop();
            DString::~DString((DString *)&local_d8);
          }
          DString::DString((DString *)&local_d8,iVar9);
          pcVar13 = (char *)DString::c_str((DString *)&local_d8);
          std::string::append(asStack_108,pcVar13,(size_t)__n);
          DString::~DString((DString *)&local_d8);
          std::string::~string(asStack_158);
          pcVar13 = "1";
        }
        else {
          pcVar13 = "0";
        }
        std::string::append(asStack_e8,pcVar13,(size_t)__n);
        thunk_FUN_05475e00(auStack_e0,asStack_1c8);
        pTVar14 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                  ((TGAAnniversaryTreasureData *)&local_d8,aTStack_128);
        TGALogMgr::LogMinorLottery(pTVar14,(GAME_ITEM_INFO *)&local_d8);
        TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                  ((TGAAnniversaryTreasureData *)&local_d8);
        pTVar14 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::clearSegments(pTVar14,0x273a);
      }
      local_1c0 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x1a8));
      local_1b8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x1a8));
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b8)
      ;
      if (bVar3) {
        do {
          piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1c0);
          pNVar15 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
          cVar4 = NameMapperBase::ContainsId(pNVar15,*piVar12);
          if (cVar4 == '\0') {
            pNVar15 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
            cVar4 = NameMapperBase::ContainsId(pNVar15,*piVar12);
            if (cVar4 == '\0') {
              pGVar20 = (GAME_ITEM_INFO *)0x1;
              PlayerInfo::AddCommonGachaReward((int)this_01,*piVar12,SUB41(piVar12[1],0),false);
            }
            else {
              iVar8 = AvatarNameMapperServerID::GetInstance();
              NameMapperBase::GetNameForId(iVar8);
              cVar4 = PlayerInfo::IsPlantAvatarUnLocked(this_01,asStack_1b0,0,0);
              if (cVar4 == '\0') {
                PlayerInfo::UnlockPlantAvatar(this_01,asStack_1b0,0);
                PlayerInfo::SetPlantAvatar(this_01,asStack_1b0,0);
              }
              else {
                std::string::string(asStack_158,"iOS PvZ2 Avatar Store");
                std::string::string((string *)aDStack_140,"Avatars");
                std::string::string((string *)&local_d8,"avatar");
                Magento::FindStoreProduct
                          ((Magento *)asStack_158,(string *)aDStack_140,(string *)&local_d8,
                           asStack_1b0,(string *)pGVar20);
                std::string::~string((string *)&local_d8);
                nop();
                std::string::~string((string *)aDStack_140);
                nop();
                std::string::~string(asStack_158);
                nop();
                bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_1a8);
                if (bVar3) {
                  PlayerInfo::AddPlantPieceCount
                            ((string *)this_01,(int)asStack_1b0,SUB41(piVar12[1],0));
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_1a8);
              }
              std::string::~string(asStack_1b0);
            }
          }
          else {
            uVar22 = *(undefined8 *)(this + 0x120);
            uVar11 = 0;
            uVar21 = FUN_03989234(uVar22,*(undefined8 *)(this + 0x128));
            if (uVar21 != 0) {
              do {
                lVar10 = FUN_03989250(uVar22,uVar11);
                if (*(int *)(lVar10 + 4) == *piVar12) {
                  puVar17 = (undefined8 *)FUN_0398925c(*(undefined8 *)(this + 0x108),uVar11);
                  LimitLotteryItem::SetAlreadyGet((LimitLotteryItem *)*puVar17,true);
                  uVar22 = *(undefined8 *)(this + 0x120);
                  uVar21 = FUN_03989234(uVar22,*(undefined8 *)(this + 0x128));
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar21);
            }
            iVar8 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar8);
            bVar5 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_158);
            if (bVar5 == 0) {
              PlayerInfo::UnlockPlant(this_01,asStack_158,true);
              PlayerInfo::AddPlantStartLevel(this_01,asStack_158,piVar12[1]);
            }
            else {
              Magento::GetPlantLevelUp((Magento *)(ulong)bVar5);
              uVar21 = 0;
              do {
                uVar11 = uVar21;
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_140);
                uVar21 = FUN_03989264(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68))
                ;
                if (uVar21 <= uVar11) goto LAB_039985d8;
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_140);
                pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                          FUN_03989270(*(undefined8 *)(lVar10 + 0x60),uVar11);
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
                cVar4 = std::operator==((string *)(lVar10 + 0x80),asStack_158);
                uVar21 = uVar11 + 1;
              } while (cVar4 == '\0');
              iVar8 = (int)asStack_158;
              if (piVar12[1] < 1) {
                PlayerInfo::AddPlantPieceCount((string *)this_01,iVar8,false);
              }
              else {
                iVar9 = 1;
                iVar6 = 0;
                lVar10 = -1;
                do {
                  while (1 < iVar9) {
                    lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_140);
                    iVar9 = iVar9 + 1;
                    pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                              FUN_03989270(*(undefined8 *)(lVar19 + 0x60),uVar11);
                    this_02 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
                    pvVar18 = (vector *)PlayerInfo::GetPlantAvatarInfo(this_02);
                    std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::vector
                              ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)
                               &local_d8,pvVar18);
                    lVar19 = FUN_03989278(CONCAT44(iStack_d4,local_d8),lVar10);
                    iVar6 = iVar6 + *(int *)(lVar19 + 4);
                    uVar23 = (undefined1)iVar6;
                    std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::~vector
                              ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)
                               &local_d8);
                    lVar10 = lVar10 + 1;
                    if (piVar12[1] < iVar9) goto LAB_03998890;
                  }
                  lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_140);
                  iVar9 = iVar9 + 1;
                  pRVar16 = (RtWeakPtr<Sexy::ResourceInfo> *)
                            FUN_03989270(*(undefined8 *)(lVar19 + 0x60),uVar11);
                  lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar16);
                  iVar6 = iVar6 + *(int *)(lVar19 + 0x90);
                  uVar23 = (undefined1)iVar6;
                  lVar10 = lVar10 + 1;
                } while (iVar9 <= piVar12[1]);
LAB_03998890:
                PlayerInfo::AddPlantPieceCount((string *)this_01,iVar8,(bool)uVar23);
              }
LAB_039985d8:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_140);
            }
            std::string::~string(asStack_158);
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_1c0);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1c0,(__normal_iterator *)&local_1b8);
        } while (bVar3);
      }
      std::string::~string(asStack_1c8);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_128);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_170);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_188);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_1a0);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    piVar12 = (int *)FUN_03989220(uVar22,uVar21);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_188,piVar12);
    piVar12 = (int *)FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
    GetGameItemInfo(*piVar12,0x7fffffff,0);
    if (local_d8 != 0) {
      piVar12 = (int *)FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
      if (iVar8 == *piVar12) {
        iVar9 = piVar12[1];
        bVar1 = true;
        if (iStack_d4 != 2) goto LAB_0399822c;
LAB_039982d4:
        iVar6 = PlantChipNameMapperServerID::GetInstance();
        FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
        NameMapperBase::GetNameForId(iVar6);
        uVar7 = PlayerInfo::GetPlantPieceCount(this_01,(string *)&local_1b8,false);
      }
      else {
        if (iStack_d4 == 2) goto LAB_039982d4;
LAB_0399822c:
        if (iStack_d4 == 8) {
          iVar6 = AvatarChipNameMapperServerID::GetInstance();
          FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
          NameMapperBase::GetNameForId(iVar6);
          uVar7 = PlayerInfo::GetAvatarPiecesCount(this_01,(string *)&local_1b8,0,0);
        }
        else {
          if (iStack_d4 != 0x20) goto LAB_0399823c;
          iVar6 = PlantAccessoryPieceMapper::GetInstance();
          FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
          NameMapperBase::GetNameForId(iVar6);
          uVar7 = PlayerInfo::GetAccessoryPieceCount(this_01,(string *)&local_1b8,false);
        }
      }
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar7);
      piVar12 = (int *)FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_170,piVar12);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_170,(int *)&local_1c0);
      std::operator+((string *)&local_1b8,",");
      lVar10 = FUN_03989220(*(undefined8 *)(this + 0x1a8),uVar21);
      DString::DString(aDStack_140,*(int *)(lVar10 + 4));
      pcVar13 = (char *)DString::c_str(aDStack_140);
      std::operator+(asStack_1b0,pcVar13);
      std::operator+(asStack_1a8,";");
      thunk_FUN_054757c0(asStack_1c8,asStack_158);
      std::string::~string(asStack_158);
      std::string::~string(asStack_1a8);
      DString::~DString(aDStack_140);
      std::string::~string(asStack_1b0);
      std::string::~string((string *)&local_1b8);
    }
LAB_0399823c:
    uVar21 = uVar21 + 1;
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_d8);
  } while( true );
}


/* LimitLotteryPanel::OnNotifyBonusClosed() */

void __thiscall LimitLotteryPanel::OnNotifyBonusClosed(LimitLotteryPanel *this)

{
  (**(code **)(**(long **)(this + 0x1c8) + 0x188))(*(long **)(this + 0x1c8),0);
  (**(code **)(**(long **)(this + 0x1d0) + 0x188))(*(long **)(this + 0x1d0),0);
  *(undefined4 *)(this + 0x1a0) = 0;
  GiveRewards(this);
  UnlockLotteryButton(this);
  return;
}

