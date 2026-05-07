// Class: PVZ2UIBuyPlantDialog


/* PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog() */

void __thiscall PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog(PVZ2UIBuyPlantDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0683c4d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683c7f8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog() */

void __thiscall PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog(PVZ2UIBuyPlantDialog *this)

{
  ~PVZ2UIBuyPlantDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyPlantDialog::onUseGemFinish(bool const&) */

void __thiscall PVZ2UIBuyPlantDialog::onUseGemFinish(PVZ2UIBuyPlantDialog *this,bool *param_1)

{
  int iVar1;
  undefined *puVar2;
  NewPVPMgr *this_00;
  int *piVar3;
  long lVar4;
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)ProfileUtils::Profile();
  local_20[0] = NewPVPMgr::GetSeasonEndTime(this_00);
  piVar3 = eastl::min_alt<int>((int *)(this + 0xf0),(int *)local_20);
  puVar2 = gMessageRouter;
  iVar1 = *piVar3;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)(this + 0xe0));
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar2,Message::PlantUnlockFragment,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
    ;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    PlayerInfo::HandlePurchase((PlayerInfo *)this_00,(string *)(lVar4 + 0x10),(vector *)local_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyPlantDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyPlantDialog::ButtonDepress(PVZ2UIBuyPlantDialog *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  PlayerInfo *this_01;
  long lVar7;
  PVZ2UIBuyPlantDialog *pPVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    if (param_1 == 1) {
      LawnApp::KillBuyPlantDialog(gLawnApp);
    }
    goto LAB_0438a1ec;
  }
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar4 = std::operator==((string *)(lVar7 + 0x88),"gem");
  if (bVar4) {
    iVar5 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar5 < *(int *)(this + 0xf0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
    }
    else {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar6 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar7 + 0x80),false);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar5 = *(int *)(lVar7 + 0x90);
      iVar2 = *(int *)(this + 0xf4);
      pPVar8 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<PVZ2UIBuyPlantDialog,bool>::ICloudRequestCallbackFunction
                (pPVar8,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems
                (this_01,iVar5 - iVar6,iVar2,(ICloudRequestCallbackFunctionBase *)pPVar8,1,false);
    }
  }
  else {
    iVar5 = PlayerInfo::GetNumCoins(this_01,true);
    if (*(int *)(this + 0xf0) <= iVar5) {
      iVar5 = PlayerInfo::SubtractCoins(this_01,*(int *)(this + 0xf0));
      puVar3 = gMessageRouter;
      if (-1 < iVar5) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                  ((MessageRouter *)puVar3,Message::PlantUnlockFragment,aRStack_20,iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        puVar3 = gMessageRouter;
        uVar1 = *(undefined4 *)(this + 0xf0);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        FUN_05475d88(aRStack_20,lVar7 + 0x80);
        MessageRouter::Post<int,std::string_const&,int,std::string>
                  ((MessageRouter *)puVar3,Message::CoinUse,uVar1,aRStack_20);
        std::string::~string((string *)aRStack_20);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
        PlayerInfo::HandlePurchase(this_01,(string *)(lVar7 + 0x10),(vector *)aRStack_20);
        std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
                  ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)aRStack_20);
        goto LAB_0438a330;
      }
    }
    LawnApp::ShowGemStoreConfirm(gLawnApp,0,this[0xe8]);
  }
LAB_0438a330:
  LawnApp::KillBuyPlantDialog(gLawnApp);
LAB_0438a1ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ2UIBuyPlantDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyPlantDialog::ButtonDepress(PVZ2UIBuyPlantDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyPlantDialog::Resize(int, int, int, int) */

void __thiscall
PVZ2UIBuyPlantDialog::Resize
          (PVZ2UIBuyPlantDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff038);
  iVar2 = FUN_04389fb4(0x3c);
  iVar2 = iVar2 + *(int *)(lVar9 + 0x38);
  iVar3 = FUN_04389fb4(0x82);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04389fb4(0x5a);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             (iVar1 - iVar3) - iVar4);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  iVar5 = FUN_04389fb4(10);
  iVar1 = *(int *)(this + 0x130);
  iVar3 = *(int *)(this + 0x134);
  iVar6 = FUN_04389fb4(0x14);
  iVar4 = *(int *)(this + 0x138);
  iVar7 = FUN_04389fb4(0x10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + iVar1,iVar5 + iVar3,iVar4 - iVar6,
             *(int *)(this + 0x13c) - iVar7);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  iVar4 = FUN_04389fb4(10);
  iVar1 = *(int *)(this + 0x144);
  iVar3 = FUN_04389fb4(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x140),iVar4 + iVar1,*(int *)(this + 0x148),iVar3);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  iVar5 = FUN_04389fb4(10);
  iVar3 = *(int *)(this + 0x150);
  iVar1 = iVar4 + iVar1 + iVar5 + *(int *)(this + 0x15c);
  iVar6 = FUN_04389fb4(0x14);
  iVar4 = *(int *)(this + 0x158);
  iVar7 = FUN_04389fb4(0x46);
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar3,iVar1,iVar4 - iVar6,iVar7);
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  iVar6 = FUN_04389fb4(10);
  iVar3 = *(int *)(this + 0x16c);
  iVar7 = FUN_04389fb4(0x28);
  iVar4 = *(int *)(this + 0x148);
  iVar5 = *(int *)(this + 0x140);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff038);
  iVar8 = FUN_04389fb4(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + (iVar4 - (iVar2 - iVar7)) / 2,iVar1 + iVar6 + iVar3,
             iVar2 - iVar7,iVar8 + *(int *)(lVar9 + 0x3c));
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  iVar4 = FUN_04389fb4(10);
  iVar2 = *(int *)(this + 0x170);
  iVar5 = FUN_04389fb4(0x19);
  iVar1 = *(int *)(this + 0x174);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff038);
  iVar3 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff038);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar5 + iVar1,iVar3,*(int *)(lVar9 + 0x3c))
  ;
  *(undefined8 *)(this + 0x180) = local_18;
  *(undefined8 *)(this + 0x188) = uStack_10;
  if (*(SalesProgressBar **)(this + 0x108) == (SalesProgressBar *)0x0) {
    lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afef68);
    iVar2 = *(int *)(lVar9 + 0x3c);
  }
  else {
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
  }
  iVar6 = FUN_04389fb4(0xac);
  iVar1 = *(int *)(this + 0x188);
  iVar3 = *(int *)(this + 0x184);
  iVar4 = *(int *)(this + 0x18c);
  iVar5 = *(int *)(this + 0x180);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afef68);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + (iVar1 - iVar6) / 2,(iVar3 + iVar4) - iVar2,iVar6,
             *(int *)(lVar9 + 0x3c));
  plVar10 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 400) = local_18;
  *(undefined8 *)(this + 0x198) = uStack_10;
  iVar5 = FUN_04389fb4(0x6e);
  iVar2 = *(int *)(this + 0x148);
  iVar1 = *(int *)(this + 0x140);
  iVar3 = *(int *)(this + 0x14c);
  iVar4 = *(int *)(this + 0x144);
  iVar6 = FUN_04389fb4(0x32);
  (**(code **)(*plVar10 + 0x198))
            (plVar10,iVar1 + (iVar2 / 2 - iVar5) / 2,(iVar4 + iVar3) - iVar6 / 2,iVar5);
  plVar10 = *(long **)(this + 0xf8);
  iVar2 = *(int *)(this + 0x148);
  iVar1 = *(int *)(this + 0x140);
  iVar5 = FUN_04389fb4(0x6e);
  iVar3 = *(int *)(this + 0x144);
  iVar4 = *(int *)(this + 0x14c);
  iVar6 = FUN_04389fb4(0x32);
  (**(code **)(*plVar10 + 0x198))
            (plVar10,iVar2 / 2 + iVar1 + (iVar2 / 2 - iVar5) / 2,(iVar3 + iVar4) - iVar6 / 2,iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog
          (PVZ2UIBuyPlantDialog *this,RtWeakPtr *param_2,PVZ2UIBuyPlantDialog param_3)

{
  wstring *pwVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  ButtonListener *this_01;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  PlayerInfo *this_02;
  long lVar8;
  ActivityConfig *pAVar9;
  MagentoProductProps *pMVar10;
  PVZ2UIButton *pPVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  pwVar1 = (wstring *)(this + 0x120);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  this_01 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_01);
  *(undefined ***)this = &PTR_GetClass_0683c4d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683c7f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  FUN_05476574(this + 0x118);
  FUN_05476574(pwVar1);
  FUN_05476574(this + 0x128);
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
  this[0xe8] = param_3;
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afef68);
  *(undefined8 *)(this + 0x108) = uVar7;
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff038);
  *(undefined8 *)(this + 0x110) = uVar7;
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar4 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar8 + 0x80),false);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar12 = (float)NEON_fminnm((float)(int)uVar4 / (float)*(int *)(lVar8 + 0x90),0x3f800000);
  *(float *)(this + 0xec) = fVar12;
  uVar2 = uVar4;
  if (1.0 <= fVar12) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar2 = *(uint *)(lVar8 + 0x90);
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::StrFormat(L"%d/%d",aPStack_40,(ulong)uVar2,(ulong)*(uint *)(lVar8 + 0x90));
  FUN_054766c8(this + 0x128,aPStack_40);
  FUN_05476c50(aPStack_40);
  lVar8 = LawnApp::GetActivityConfig();
  if (lVar8 == 0) {
    fVar13 = *(float *)(this + 0xec);
    pMVar10 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar12 = (float)MagentoProductProps::GetPriceInUSD(pMVar10,false);
    *(int *)(this + 0xf0) = (int)(fVar12 * (1.0 - fVar13));
  }
  else {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = std::operator==((string *)(lVar8 + 0x88),"gem");
    if (bVar3) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar5 = *(int *)(lVar8 + 0x90);
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pMVar10 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar12 = (float)MagentoProductProps::GetPriceInUSD(pMVar10,false);
      iVar6 = ActivityConfig::GetActivityPrice(pAVar9,(string *)(lVar8 + 0x80),false,(int)fVar12);
      *(uint *)(this + 0xf0) = (iVar5 - uVar4) * iVar6;
    }
    else {
      fVar13 = *(float *)(this + 0xec);
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pMVar10 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar12 = (float)MagentoProductProps::GetPriceInUSD(pMVar10,false);
      iVar5 = ActivityConfig::GetActivityPrice(pAVar9,(string *)(lVar8 + 0x80),false,(int)fVar12);
      *(int *)(this + 0xf0) = (int)((float)iVar5 * (1.0 - fVar13));
    }
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(lVar8 + 0x18);
  TodStringTranslate(L"[BUY_PLANT_TITLE]");
  FUN_054766c8(this + 0x118,aPStack_40);
  FUN_05476c50(aPStack_40);
  TodStringTranslate(L"[BUY_PLANT_DESC]");
  FUN_054766c8(pwVar1,aPStack_40);
  FUN_05476c50(aPStack_40);
  if (1.0 <= *(float *)(this + 0xec)) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = *(uint *)(lVar8 + 0x90);
  }
  TodReplaceNumberString(pwVar1,L"{NEED_COUNT}",uVar4);
  FUN_054766c8(pwVar1,aPStack_40);
  FUN_05476c50(aPStack_40);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  TodReplaceNumberString(pwVar1,L"{MAX_COUNT}",*(int *)(lVar8 + 0x90));
  FUN_054766c8(pwVar1,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0,this_01,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06afefa8,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06afee68,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,aPStack_40);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06afefe8,1);
  PVZ2UIButton::AddImage(pPVar11,aPStack_40,0);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
  Sexy::StrFormat(L"%d",aPStack_40,(ulong)*(uint *)(this + 0xf0));
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar11,aPStack_40,uVar7,0);
  FUN_05476c50(aPStack_40);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
  TodStringTranslate(L"[BUY_PLANT_BUY]");
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar11,aPStack_40,uVar7,0);
  FUN_05476c50(aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,1,this_01,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06afee10,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06afee90,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  Resize(this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),*(int *)(gLawnApp + 0x724),
         *(int *)(gLawnApp + 0x728));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyPlantDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIBuyPlantDialog::DrawAll(PVZ2UIBuyPlantDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Image *pIVar5;
  float fVar6;
  float fVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x140));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff060);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afeef0);
  Draw9SliceImage(param_2,aIStack_18,uVar3);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  WriteWordInRect(param_2,this + 0x118,this + 0x150,uVar3,aIStack_18,5,1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0x120,this + 0x160,uVar3,aIStack_18,5,1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x170));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff090);
  Draw9SliceImage(param_2,aIStack_18,uVar3);
  if (*(Image **)(this + 0x110) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x110),*(int *)(this + 0x180),*(int *)(this + 0x184),
               *(int *)(this + 0x188),*(int *)(this + 0x18c));
  }
  fVar6 = *(float *)(this + 0xec);
  if (0.0 < fVar6) {
    if (*(LotteryResultProgressBar **)(this + 0x108) == (LotteryResultProgressBar *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x108));
      fVar6 = *(float *)(this + 0xec);
    }
    Sexy::Insets::Insets
              (aIStack_28,iVar2 + *(int *)(this + 400),*(int *)(this + 0x194),
               (int)((float)(*(int *)(this + 0x198) - iVar2) * fVar6),*(int *)(this + 0x19c));
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff0b8);
    iVar2 = *(int *)(lVar4 + 0x38);
    fVar6 = *(float *)(this + 0xec);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff0b8);
    iVar1 = *(int *)(lVar4 + 0x38);
    fVar7 = *(float *)(this + 0xec);
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff0b8);
    Sexy::Insets::Insets
              (aIStack_18,(int)((1.0 - fVar6) * (float)iVar2),0,(int)((float)iVar1 * fVar7),
               *(int *)(lVar4 + 0x3c));
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff0b8);
    Sexy::Graphics::DrawImage(param_2,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (*(Image **)(this + 0x108) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0x108),*(int *)(this + 400),*(int *)(this + 0x194));
  }
  iVar2 = FUN_04389fb4(2);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 400),iVar2 + *(int *)(this + 0x194),*(int *)(this + 0x198),
             iVar2 + *(int *)(this + 0x19c));
  uVar3 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0x128,aIStack_28,uVar3,aIStack_18,5,1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog() */

void __thiscall PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog(PVZ2UIBuyPlantDialog *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683c4d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683c7f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  return;
}

