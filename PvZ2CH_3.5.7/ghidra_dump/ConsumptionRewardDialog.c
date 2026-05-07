// Class: ConsumptionRewardDialog


/* ConsumptionRewardDialog::onCloseDialog() */

void ConsumptionRewardDialog::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::DrawTips(Sexy::Graphics*) */

void __thiscall ConsumptionRewardDialog::DrawTips(ConsumptionRewardDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  ProfileMgr *this_00;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(this + 0xe8),___stack_chk_guard);
  pwVar8 = (wchar_t *)FUN_054766ec(aCStack_18);
  TodStringTranslate(pwVar8);
  FUN_05476c50(aCStack_18);
  uVar9 = FUN_054766ec(auStack_38);
  FUN_05478178(awStack_30,uVar9,auStack_40);
  iVar2 = FUN_041cb504(0x14);
  iVar7 = *(int *)(this + 0x15c);
  iVar3 = FUN_041cb504(0xffffffec);
  iVar1 = *(int *)(this + 0x160);
  iVar4 = FUN_041cb504(0x2ee);
  iVar5 = FUN_041cb504(0x3c);
  iVar6 = FUN_041cb504(200);
  Sexy::Insets::Insets(aIStack_28,iVar2 + iVar7,iVar3 + iVar1,iVar4 - iVar5,iVar6);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar9,aCStack_18,3,1);
  FUN_05476c50(awStack_30);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar10 = ProfileMgr::GetCurrentProfile(this_00);
  FUN_05476574(awStack_30);
  iVar7 = FUN_041cb374(*(undefined4 *)(lVar10 + 0x1050));
  uVar9 = *(undefined8 *)(this + 0x108);
  uVar11 = FUN_041cb384(uVar9,*(undefined8 *)(this + 0x110));
  if ((ulong)(long)iVar7 < uVar11) {
    lVar12 = FUN_041cb37c(uVar9,(long)iVar7);
    iVar1 = *(int *)(lVar12 + 0x18);
    iVar7 = FUN_041cb378(*(undefined4 *)(lVar10 + 0x1054));
    if (iVar7 < iVar1) {
      TodStringTranslate(L"[CONSUMPTION_TIPS_ING]");
      TodReplaceNumberString((wstring *)aIStack_28,L"{GEM_COST}",iVar7);
      FUN_054766c8(awStack_30,aCStack_18);
      FUN_05476c50(aCStack_18);
      FUN_05476c50(aIStack_28);
      TodReplaceNumberString(awStack_30,L"{GEM_NEED}",iVar1 - iVar7);
      FUN_054766c8(awStack_30,aCStack_18);
      FUN_05476c50(aCStack_18);
      goto LAB_041cbd10;
    }
    TodStringTranslate(L"[CONSUMPTION_TIPS_PLS]");
  }
  else {
    TodStringTranslate(L"[CONSUMPTION_TIPS_OVER]");
    iVar7 = FUN_041cb378(*(undefined4 *)(lVar10 + 0x1054));
  }
  TodReplaceNumberString((wstring *)aIStack_28,L"{GEM_COST}",iVar7);
  FUN_054766c8(awStack_30,aCStack_18);
  FUN_05476c50(aCStack_18);
  FUN_05476c50(aIStack_28);
LAB_041cbd10:
  iVar2 = FUN_041cb504(0x14);
  iVar7 = *(int *)(this + 0x15c);
  iVar3 = FUN_041cb504(5);
  iVar1 = *(int *)(this + 0x160);
  iVar4 = FUN_041cb504(0x2ee);
  iVar5 = FUN_041cb504(0x3c);
  iVar6 = FUN_041cb504(200);
  Sexy::Insets::Insets(aIStack_28,iVar2 + iVar7,iVar3 + iVar1,iVar4 - iVar5,iVar6);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,awStack_30,aIStack_28,uVar9,aCStack_18,3,1);
  FUN_05476c50(awStack_30);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::Update() */

void __thiscall ConsumptionRewardDialog::Update(ConsumptionRewardDialog *this)

{
  bool bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x158) < fVar3) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x140));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((RewardAnimWidget *)*puVar2 != (RewardAnimWidget *)0x0) {
        RewardAnimWidget::SetValid((RewardAnimWidget *)*puVar2,false);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0x158) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::IsAllAnimComplete() */

void __thiscall ConsumptionRewardDialog::IsAllAnimComplete(ConsumptionRewardDialog *this)

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
                      *)(this + 0x140));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x140));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*plVar3 != 0) && (cVar1 = FUN_041cb368(*(undefined1 *)(*plVar3 + 0x110)), cVar1 == '\0')) {
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
/* ConsumptionRewardDialog::AddCloseButton() */

void __thiscall ConsumptionRewardDialog::AddCloseButton(ConsumptionRewardDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_01;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x2af,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar8 = *(code **)(*(long *)this_00 + 0x198);
  iVar2 = FUN_041cb504(0x2ee);
  iVar1 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1d28);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  uVar4 = FUN_041cb504(0x32);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1d28);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1d28);
  uVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar8)(this_00,(iVar2 + (iVar1 - iVar2) / 2) - iVar3,uVar4,uVar5,uVar6);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06af1d28,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06af1978,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumptionRewardDialog::AddBuyTips() */

void __thiscall ConsumptionRewardDialog::AddBuyTips(ConsumptionRewardDialog *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  ulong uVar5;
  TipsWidget *this_01;
  undefined8 uVar6;
  code *pcVar7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_041cb378(*(undefined4 *)(lVar4 + 0x1054));
  iVar3 = FUN_041cb374(*(undefined4 *)(lVar4 + 0x1050));
  uVar6 = *(undefined8 *)(this + 0x108);
  uVar5 = FUN_041cb384(uVar6,*(undefined8 *)(this + 0x110));
  if ((ulong)(long)iVar3 < uVar5) {
    lVar4 = FUN_041cb37c(uVar6,(long)iVar3);
    bVar1 = *(int *)(lVar4 + 0x18) <= iVar2;
    this_01 = ::operator_new(0xf8);
    TipsWidget::TipsWidget(this_01,(ButtonListener *)(this + 0xd8),bVar1);
    iVar2 = *(int *)(this_01 + 0x50);
    lVar4 = *(long *)this_01;
    *(TipsWidget **)(this + 0x138) = this_01;
    pcVar7 = *(code **)(lVar4 + 0x1a8);
    iVar2 = (*(int *)(this + 0x50) - iVar2) / 2;
    if (bVar1) {
      iVar3 = FUN_041cb504(0x15e);
      iVar3 = iVar3 + *(int *)(this + 0x160);
      goto LAB_041cc558;
    }
  }
  else {
    this_01 = ::operator_new(0xf8);
    TipsWidget::TipsWidget(this_01,(ButtonListener *)(this + 0xd8),false);
    iVar2 = *(int *)(this_01 + 0x50);
    lVar4 = *(long *)this_01;
    *(TipsWidget **)(this + 0x138) = this_01;
    pcVar7 = *(code **)(lVar4 + 0x1a8);
    iVar2 = (*(int *)(this + 0x50) - iVar2) / 2;
  }
  iVar3 = FUN_041cb504(0x13e);
  iVar3 = iVar3 + *(int *)(this + 0x160);
LAB_041cc558:
  (*pcVar7)(this_01,iVar2,iVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ConsumptionRewardDialog::DrawAll
          (ConsumptionRewardDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *pLVar7;
  undefined8 uVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_2,0xff,aIStack_18);
  iVar1 = FUN_041cb504(0x19);
  iVar5 = *(int *)(this + 0x15c);
  iVar4 = *(int *)(this + 0x160);
  iVar2 = FUN_041cb504(0x2ee);
  iVar3 = FUN_041cb504(0x1cc);
  Sexy::Insets::Insets((Insets *)&local_48,iVar5 - iVar1,iVar4 - iVar1,iVar2,iVar3);
  iVar4 = FUN_041cb504(10);
  iVar5 = local_40;
  iVar1 = FUN_041cb504(0x14);
  Sexy::Insets::Insets(aIStack_38,local_48 + iVar4,iVar4 + local_44,iVar5 - iVar1,local_3c - iVar1);
  iVar5 = FUN_041cb504(0x32);
  iVar4 = FUN_041cb504(0x8c);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x15c),*(int *)(this + 0x160),local_40 - iVar5,iVar4);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1e00);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1e00);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_041cb504(0x1e);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1dd0);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b50);
  Draw9SliceImage(param_2,aIStack_18,uVar8);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1ac0);
  Draw3SliceImage(param_2,aIStack_18,uVar8);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1cf8);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1cf8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_041cb504(0);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1a70);
  iVar5 = *(int *)(this + 0x50);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1a70);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar1 = FUN_041cb504(0x19);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar5 - iVar4) / 2,iVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::SetTopTileImg(std::string const&) */

void __thiscall
ConsumptionRewardDialog::SetTopTileImg(ConsumptionRewardDialog *this,string *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)FUN_0547429c(param_1);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar2);
  bVar1 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)aCStack_30);
  if (bVar1) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
    *(undefined8 *)(this + 0x168) = uVar3;
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::SetSubTileImg(std::string const&) */

void __thiscall
ConsumptionRewardDialog::SetSubTileImg(ConsumptionRewardDialog *this,string *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)FUN_0547429c(param_1);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar2);
  bVar1 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)aCStack_30);
  if (bVar1) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
    *(undefined8 *)(this + 0x170) = uVar3;
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumptionRewardDialog::SetTipsImg(std::string const&) */

void __thiscall ConsumptionRewardDialog::SetTipsImg(ConsumptionRewardDialog *this,string *param_1)

{
  TipsWidget::SetTipsImg(*(TipsWidget **)(this + 0x138),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::CanPress() */

void __thiscall ConsumptionRewardDialog::CanPress(ConsumptionRewardDialog *this)

{
  vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *this_00;
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x140);
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
      if ((*plVar4 != 0) && (cVar2 = FUN_041cb364(*(undefined1 *)(*plVar4 + 0x111)), cVar2 != '\0'))
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
/* ConsumptionRewardDialog::RecvReward(int) */

void __thiscall ConsumptionRewardDialog::RecvReward(ConsumptionRewardDialog *this,int param_1)

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
  lVar6 = FUN_041cb37c(*(undefined8 *)(this + 0x108),(long)param_1);
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
LAB_041cd358:
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
        if (cVar2 != '\0') goto LAB_041cd358;
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
          goto LAB_041cd36c;
        }
        FUN_05475ffc(asStack_10,asStack_20,0x10,0xffffffffffffffff);
        PlayerInfo::AddAccessoryPieceCount
                  ((PlayerInfo *)this_01,asStack_10,*(int *)(lVar6 + 0x10),true);
      }
    }
  }
  std::string::~string(asStack_10);
LAB_041cd36c:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumptionRewardDialog::~ConsumptionRewardDialog() */

void __thiscall ConsumptionRewardDialog::~ConsumptionRewardDialog(ConsumptionRewardDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06801740;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06801a70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::~vector
            ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x140));
  std::vector<ItemButton*,std::allocator<ItemButton*>>::~vector
            ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0x120));
  TopicItem::~TopicItem((TopicItem *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ConsumptionRewardDialog::~ConsumptionRewardDialog() */

void __thiscall ConsumptionRewardDialog::~ConsumptionRewardDialog(ConsumptionRewardDialog *this)

{
  ~ConsumptionRewardDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::ButtonPress(int) */

void __thiscall ConsumptionRewardDialog::ButtonPress(ConsumptionRewardDialog *this,int param_1)

{
  int iVar1;
  int iVar2;
  LawnApp *pLVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = CanPress(this);
  if (cVar4 != '\0') {
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_UI_Button_Click_Press");
    if ((uint)param_1 < 5) {
      auVar10 = FUN_041cb37c(*(undefined8 *)(this + 0x108),(long)param_1);
      Sexy::UTF8StringToWString((Sexy *)(auVar10._0_8_ + 8),auVar10._8_8_);
      TodStringTranslate(awStack_30);
      FUN_05476c50(awStack_30);
      pLVar3 = gLawnApp;
      plVar8 = (long *)FUN_041cb390(*(undefined8 *)(this + 0x120),(long)param_1);
      lVar9 = *plVar8;
      iVar5 = FUN_041cb504(0x14);
      iVar1 = *(int *)(lVar9 + 0x48);
      iVar6 = FUN_041cb504(100);
      iVar2 = *(int *)(lVar9 + 0x4c);
      std::function<void(Sexy::Graphics*)>::function(afStack_28);
      LawnApp::ShowPlantSkillTipsUI(pLVar3,auStack_38,iVar1 - iVar5,iVar2 - iVar6,3,afStack_28,0);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      FUN_05476c50(auStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ConsumptionRewardDialog::ButtonPress(int) */

void __thiscall ConsumptionRewardDialog::ButtonPress(ConsumptionRewardDialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::AddItem() */

void __thiscall ConsumptionRewardDialog::AddItem(ConsumptionRewardDialog *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  long lVar9;
  RewardItem *pRVar10;
  ItemButton *this_01;
  LotteryResultProgressBar *this_02;
  int iVar11;
  long lVar12;
  code *pcVar13;
  float fVar14;
  ItemButton *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar12 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar9 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_041cb374(*(undefined4 *)(lVar9 + 0x1050));
  do {
    iVar11 = (int)lVar12;
    bVar1 = iVar11 == 4;
    if (iVar11 < iVar2) {
      pRVar10 = (RewardItem *)FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar12);
      this_01 = ::operator_new(0x328);
      ItemButton::ItemButton
                (this_01,iVar11,(ButtonListener *)(this + 0xd8),pRVar10,true,false,bVar1);
      if (bVar1) {
LAB_041cf6d4:
        fVar14 = 0.0;
        local_10 = this_01;
        iVar8 = FUN_041cb504(2);
      }
      else {
        fVar14 = 0.0;
        iVar8 = 0;
        local_10 = this_01;
      }
    }
    else {
      iVar7 = FUN_041cb378(*(undefined4 *)(lVar9 + 0x1054));
      pRVar10 = (RewardItem *)FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar12);
      iVar8 = *(int *)(pRVar10 + 0x18);
      this_01 = ::operator_new(0x328);
      ItemButton::ItemButton
                (this_01,iVar11,(ButtonListener *)(this + 0xd8),pRVar10,false,iVar8 <= iVar7,bVar1);
      if (bVar1) goto LAB_041cf6d4;
      local_10 = this_01;
      if (iVar8 <= iVar7) {
        iVar8 = FUN_041cb504(0xfffffff1);
        fVar14 = (float)iVar8;
      }
      else {
        fVar14 = 0.0;
        iVar8 = 0;
      }
    }
    iVar7 = *(int *)(this + 0x50);
    lVar12 = lVar12 + 1;
    pcVar13 = *(code **)(*(long *)this_01 + 0x1a8);
    this_02 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b78);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar4 = FUN_041cb504(5);
    iVar5 = FUN_041cb504(0x8a);
    iVar6 = FUN_041cb504(0xaa);
    (*pcVar13)(this_01,(int)((float)iVar4 + fVar14 + (float)(iVar5 * iVar11) +
                            ((float)iVar7 - (float)iVar3) * 0.5),
               iVar6 + *(int *)(this + 0x160) + iVar8);
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<ItemButton*,std::allocator<ItemButton*>>::push_back
              ((vector<ItemButton*,std::allocator<ItemButton*>> *)(this + 0x120),&local_10);
    if (lVar12 == 5) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* ConsumptionRewardDialog::InitView() */

void __thiscall ConsumptionRewardDialog::InitView(ConsumptionRewardDialog *this)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar1 = FUN_041cb504(0x2ee);
  iVar2 = FUN_041cb504(0x19);
  *(int *)(this + 0x15c) = iVar2 + (*(int *)(this + 0x50) - iVar1) / 2;
  iVar1 = FUN_041cb504(0x5f);
  iVar2 = FUN_041cb504(0x19);
  *(int *)(this + 0x160) = iVar1 + iVar2;
  AddItem(this);
  AddBuyTips(this);
  AddCloseButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::ConsumptionRewardDialog() */

void __thiscall ConsumptionRewardDialog::ConsumptionRewardDialog(ConsumptionRewardDialog *this)

{
  undefined4 uVar1;
  TopicItem aTStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06801740;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06801a70;
  TopicItem::TopicItem((TopicItem *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x158) = uVar1;
  LawnApp::GetConsumptionRewardInfo(gLawnApp);
  ConsumptionRewardInfo::GetCurrentTopicItem();
  TopicItem::operator=((TopicItem *)(this + 0xe0),aTStack_48);
  TopicItem::~TopicItem(aTStack_48);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::ButtonDepress(int) */

void __thiscall ConsumptionRewardDialog::ButtonDepress(ConsumptionRewardDialog *this,int param_1)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar6;
  long *plVar7;
  RewardItem *pRVar8;
  RewardAnimWidget *this_03;
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
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (param_1 == 0x222) {
      iVar2 = FUN_041cb374(*(undefined4 *)(this_02 + 0x1050));
      iVar3 = FUN_041cb378(*(undefined4 *)(this_02 + 0x1054));
      iVar4 = FUN_041cb398(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
      if (iVar2 < iVar4) {
        lVar10 = 0;
        iVar11 = 0;
        if (0 < iVar4) {
          do {
            lVar6 = FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar10);
            iVar9 = (int)lVar10;
            if ((iVar2 <= iVar9) && (*(int *)(lVar6 + 0x18) <= iVar3)) {
              RecvReward(this,iVar9);
              PlayerInfo::AddConsumptionRewardCount(this_02,1);
              plVar7 = (long *)FUN_041cb390(*(undefined8 *)(this + 0x120),lVar10);
              FUN_041cbadc(*plVar7 + 0x2fa,*plVar7 + 800);
              pRVar8 = (RewardItem *)FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar10);
              this_03 = ::operator_new(0x120);
              fVar12 = (float)iVar11;
              iVar11 = iVar11 + 1;
              RewardAnimWidget::RewardAnimWidget(this_03,pRVar8,fVar12 * 1.5);
              local_10 = this_03;
              plVar7 = (long *)FUN_041cb390(*(undefined8 *)(this + 0x120),lVar10);
              (**(code **)(*(long *)this_03 + 0x1a8))
                        (this_03,*(undefined4 *)(*plVar7 + 0x48),*(undefined4 *)(*plVar7 + 0x4c));
              (**(code **)(*(long *)this + 0x60))(this,local_10);
              std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::push_back
                        ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)
                         (this + 0x140),&local_10);
            }
            lVar10 = lVar10 + 1;
          } while (iVar9 + 1 < iVar4);
          if (iVar11 != 0) {
            fVar12 = (float)PVZ_T();
            *(float *)(this + 0x158) = (float)iVar11 * 1.5 + 2.0 + fVar12;
          }
        }
      }
      TipsWidget::RefreshTips(*(TipsWidget **)(this + 0x138));
      this_00 = gMessageRouter;
      iVar2 = FUN_041cb374(*(undefined4 *)(this_02 + 0x1050));
      MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::GemsCostReward,iVar2);
    }
    else if (param_1 == 0x2af) {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ConsumptionRewardDialog::ButtonDepress(int) */

void __thiscall ConsumptionRewardDialog::ButtonDepress(ConsumptionRewardDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardDialog::OnGotConsumptionReward(bool) */

void __thiscall
ConsumptionRewardDialog::OnGotConsumptionReward(ConsumptionRewardDialog *this,bool param_1)

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
  PVZ2UIDialog *pPVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  float fVar11;
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
    iVar1 = FUN_041cb374(*(undefined4 *)(this_02 + 0x1050));
    iVar2 = FUN_041cb378(*(undefined4 *)(this_02 + 0x1054));
    iVar3 = FUN_041cb398(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
    if (iVar1 < iVar3) {
      lVar9 = 0;
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          lVar4 = FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar9);
          iVar8 = (int)lVar9;
          if ((iVar1 <= iVar8) && (*(int *)(lVar4 + 0x18) <= iVar2)) {
            PlayerInfo::AddConsumptionRewardCount(this_02,1);
            plVar5 = (long *)FUN_041cb390(*(undefined8 *)(this + 0x120),lVar9);
            FUN_041cbadc(*plVar5 + 0x2fa,*plVar5 + 800);
            pRVar6 = (RewardItem *)FUN_041cb37c(*(undefined8 *)(this + 0x108),lVar9);
            this_03 = ::operator_new(0x120);
            fVar11 = (float)iVar10;
            iVar10 = iVar10 + 1;
            RewardAnimWidget::RewardAnimWidget(this_03,pRVar6,fVar11 * 1.5);
            local_50[0] = this_03;
            plVar5 = (long *)FUN_041cb390(*(undefined8 *)(this + 0x120),lVar9);
            (**(code **)(*(long *)this_03 + 0x1a8))
                      (this_03,*(undefined4 *)(*plVar5 + 0x48),*(undefined4 *)(*plVar5 + 0x4c));
            (**(code **)(*(long *)this + 0x60))(this,local_50[0]);
            std::vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>>::push_back
                      ((vector<RewardAnimWidget*,std::allocator<RewardAnimWidget*>> *)(this + 0x140)
                       ,local_50);
          }
          lVar9 = lVar9 + 1;
        } while (iVar8 + 1 < iVar3);
        if (iVar10 != 0) {
          fVar11 = (float)PVZ_T();
          *(float *)(this + 0x158) = (float)iVar10 * 1.5 + 2.0 + fVar11;
        }
      }
    }
    TipsWidget::RefreshTips(*(TipsWidget **)(this + 0x138));
  }
  else {
    FUN_05478178(awStack_58,L"[CONSUMPTION_REWARD_FAILED]",auStack_68);
    FUN_05478178((wstring *)local_50,L"[CONSUMPTION_DIALOG_SHOWFAILED]",auStack_60);
    pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialog);
    Sexy::Delegate0::Delegate0<ConsumptionRewardDialog,void(ConsumptionRewardDialog::*)()>
              (aDStack_38,(wstring *)local_50);
    PVZ2UIDialog::AddButton(pPVar7,awStack_58,aDStack_38,1);
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
/* ConsumptionRewardDialog::Draw(Sexy::Graphics*) */

void __thiscall ConsumptionRewardDialog::Draw(ConsumptionRewardDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  char *pcVar9;
  SalesProgressBar *this_00;
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c58);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1c58);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_041cb504(0x2b);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar1 - iVar2) / 2,iVar3);
  pcVar9 = (char *)FUN_0547429c(this + 0xf8);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar9);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_041cb504(0x82);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar1 - iVar2) / 2,iVar3);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b78);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b78);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar4 = FUN_041cb504(0xa0);
  iVar2 = *(int *)(this + 0x160);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b78);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b78);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,(int)(((float)iVar1 - (float)iVar3) * 0.5),iVar4 + iVar2,
             (int)(float)iVar5,(int)(float)iVar6);
  DrawTips(this,param_1);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

