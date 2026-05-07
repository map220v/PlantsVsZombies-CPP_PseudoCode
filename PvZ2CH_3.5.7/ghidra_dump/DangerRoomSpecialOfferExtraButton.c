// Class: DangerRoomSpecialOfferExtraButton


/* DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton() */

void __thiscall
DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton
          (DangerRoomSpecialOfferExtraButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c0a40;
  *(undefined ***)(this + 0x198) = &PTR__DangerRoomSpecialOfferExtraButton_069c0da0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c0dc8;
  FUN_05476c50(this + 0x330);
  FUN_05476c50(this + 0x318);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton() */

void __thiscall
DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton
          (DangerRoomSpecialOfferExtraButton *this)

{
  ~DangerRoomSpecialOfferExtraButton(this + -0x198);
  return;
}


/* DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton() */

void __thiscall
DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton
          (DangerRoomSpecialOfferExtraButton *this)

{
  ~DangerRoomSpecialOfferExtraButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton() */

void __thiscall
DangerRoomSpecialOfferExtraButton::~DangerRoomSpecialOfferExtraButton
          (DangerRoomSpecialOfferExtraButton *this)

{
  ~DangerRoomSpecialOfferExtraButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraButton::DangerRoomSpecialOfferExtraButton(int) */

void __thiscall
DangerRoomSpecialOfferExtraButton::DangerRoomSpecialOfferExtraButton
          (DangerRoomSpecialOfferExtraButton *this,int param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_069c0a40;
  *(undefined ***)(this + 0x198) = &PTR__DangerRoomSpecialOfferExtraButton_069c0da0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069c0dc8;
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  FUN_05476574(this + 0x318);
  Sexy::Insets::Insets((Insets *)(this + 800));
  FUN_05476574(this + 0x330);
  Sexy::Insets::Insets((Insets *)(this + 0x338));
  Sexy::Insets::Insets((Insets *)(this + 0x350));
  FUN_054772c4(this + 0x318,&DAT_056f11a8);
  FUN_054772c4(this + 0x330,&DAT_056f11a8);
  *(undefined8 *)(this + 0x348) = 0;
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x360) = param_1;
  *(undefined4 *)(this + 0x364) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraButton::InitView(int) */

void __thiscall
DangerRoomSpecialOfferExtraButton::InitView(DangerRoomSpecialOfferExtraButton *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int iVar8;
  long lVar9;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar9 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x364) = param_1;
  this[0x59] = (DangerRoomSpecialOfferExtraButton)0x0;
  std::string::string(asStack_20,"[DANGERROOM_SPECIAL_PURCHASE_BTN_NORMAL_PRICE]");
  iVar8 = (int)lVar9;
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_20,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)(uint)(&DAT_05755b60)[param_1],iVar8);
  FUN_054766c8(this + 0x318,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"[DANGERROOM_SPECIAL_PURCHASE_BTN_DISCOUNT_PRICE]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_20,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)(uint)(&DAT_05755b20)[param_1],iVar8);
  FUN_054766c8(this + 0x330,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_20);
  nop();
  Sexy::StrFormat("IMAGE_UI_GENERIC_DISCOUNT_DISCOUNT_%d",(string *)&local_18,
                  (ulong)(uint)(&DAT_05755ae0)[param_1]);
  uVar7 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x348) = uVar7;
  std::string::~string((string *)&local_18);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a040);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a040);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar6 = *(int *)(this + 0x54);
  iVar4 = FUN_04db7dbc(3);
  iVar8 = iVar6 + iVar4 * -2;
  iVar5 = ((*(int *)(this + 0x50) - iVar2) + iVar4 * -2) / 2;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar4,iVar5,iVar8);
  *(undefined8 *)(this + 0x308) = local_18;
  *(undefined8 *)(this + 0x310) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar5 + iVar2,iVar4,iVar5,iVar8);
  *(undefined8 *)(this + 800) = local_18;
  *(undefined8 *)(this + 0x328) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar5,(iVar6 - iVar3) / 2,iVar2,iVar3);
  *(undefined8 *)(this + 0x338) = local_18;
  *(undefined8 *)(this + 0x340) = uStack_10;
  iVar5 = FUN_04db7dbc(0x14);
  iVar8 = *(int *)(this + 0x50);
  iVar6 = FUN_04db7dbc(0xffffffe2);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x348));
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x348));
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar8 - iVar5,iVar6,(int)((float)iVar2 * 0.7),
             (int)((float)iVar3 * 0.7));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x350) = local_18;
  *(undefined8 *)(this + 0x358) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraButton::Draw(Sexy::Graphics*) */

void __thiscall
DangerRoomSpecialOfferExtraButton::Draw(DangerRoomSpecialOfferExtraButton *this,Graphics *param_1)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = (TRect *)(this + 0x308);
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x318,pTVar1,uVar4,aIStack_18,5,1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x330,this + 800,uVar4,aIStack_18,5,1);
  if (this[0x6e] == (DangerRoomSpecialOfferExtraButton)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99f60);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99f60);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99f60);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar5,pTVar1,(TRect *)aIStack_18);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a040);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a040);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a040);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)(this + 0x338),(TRect *)aIStack_18);
  }
  else {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99fc8);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99fc8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99fc8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar5,pTVar1,(TRect *)aIStack_18);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99ef8);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99ef8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99ef8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)(this + 0x338),(TRect *)aIStack_18);
  }
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x348));
  pSVar7 = *(SalesProgressBar **)(this + 0x348);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar7,(TRect *)(this + 0x350),(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraButton::ButtonDepress(int) */

void __thiscall
DangerRoomSpecialOfferExtraButton::ButtonDepress
          (DangerRoomSpecialOfferExtraButton *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  char *pcVar1;
  DangerRoomSpecialOfferExtraManager *this_02;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  uint *puVar5;
  TGALogMgr *pTVar6;
  size_t sVar7;
  undefined8 uVar8;
  string asStack_50 [8];
  TGAAccumulatedLoginData aTStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  DString aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x360) == param_1) {
    FUN_05475d88(asStack_50,&DAT_06b99e88 + (long)*(int *)(this + 0x364) * 8);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    sVar7 = 0;
    PurchaseBroker::RequestPayment(this_01,asStack_50,0);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
    DString::DString(aDStack_28,2);
    pcVar1 = (char *)DString::c_str(aDStack_28);
    std::string::append((string *)aTStack_48,pcVar1,sVar7);
    DString::~DString(aDStack_28);
    thunk_FUN_05475e00(auStack_40,asStack_50);
    this_02 = (DangerRoomSpecialOfferExtraManager *)
              Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr();
    puVar2 = (undefined8 *)
             DangerRoomSpecialOfferExtraManager::GetItemData(this_02,*(int *)(this + 0x364));
    uVar8 = *puVar2;
    uVar3 = FUN_04db7b54(uVar8,puVar2[1]);
    if (1 < uVar3) {
      puVar4 = (uint *)FUN_04db7b68(uVar8,0);
      puVar5 = (uint *)FUN_04db7b68(uVar8,1);
      Sexy::StrFormat("%d,%d;%d,%d",aDStack_28,(ulong)*puVar4,(ulong)puVar4[1],(ulong)*puVar5,
                      (ulong)puVar5[1]);
      FUN_05474278(auStack_38,aDStack_28);
      std::string::~string((string *)aDStack_28);
    }
    sVar7 = (size_t)*(int *)(this + 0x364);
    DString::DString(aDStack_28,(&DAT_05755b20)[sVar7]);
    pcVar1 = (char *)DString::c_str(aDStack_28);
    std::string::append(asStack_30,pcVar1,sVar7);
    DString::~DString(aDStack_28);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo
              ((InvitationPlayerInfo *)aDStack_28,(InvitationPlayerInfo *)aTStack_48);
    TGALogMgr::LogDangerRoomSpecialOffer(pTVar6,aDStack_28);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aDStack_28);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
    std::string::~string(asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraButton::ButtonDepress(int) */

void __thiscall
DangerRoomSpecialOfferExtraButton::ButtonDepress
          (DangerRoomSpecialOfferExtraButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

