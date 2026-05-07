// Class: PVZ2UIBuyAvatarDialog


/* PVZ2UIBuyAvatarDialog::~PVZ2UIBuyAvatarDialog() */

void __thiscall PVZ2UIBuyAvatarDialog::~PVZ2UIBuyAvatarDialog(PVZ2UIBuyAvatarDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0690dd60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0690e088;
  PVZ2UIBuyPlantDialog::~PVZ2UIBuyPlantDialog((PVZ2UIBuyPlantDialog *)this);
  return;
}


/* PVZ2UIBuyAvatarDialog::~PVZ2UIBuyAvatarDialog() */

void __thiscall PVZ2UIBuyAvatarDialog::~PVZ2UIBuyAvatarDialog(PVZ2UIBuyAvatarDialog *this)

{
  ~PVZ2UIBuyAvatarDialog(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIBuyAvatarDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyAvatarDialog::ButtonDepress(PVZ2UIBuyAvatarDialog *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PlayerInfo *this_00;
  long lVar4;
  PVZ2UIBuyAvatarDialog *pPVar5;
  
  if (param_1 == 0) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    iVar2 = PlayerInfo::GetNumGems(this_00,true);
    if (iVar2 < *(int *)(this + 0xf0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      iVar3 = PlayerInfo::GetAvatarPiecesCount(this_00,lVar4 + 0x80,0,0);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      iVar2 = *(int *)(lVar4 + 0x90);
      iVar1 = *(int *)(this + 0xf4);
      pPVar5 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<PVZ2UIBuyAvatarDialog,bool>::ICloudRequestCallbackFunction
                (pPVar5,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems
                (this_00,iVar2 - iVar3,iVar1,(ICloudRequestCallbackFunctionBase *)pPVar5,1,false);
    }
    LawnApp::KillBuyAvatarDialog(gLawnApp);
    return;
  }
  if (param_1 == 1) {
    LawnApp::KillBuyAvatarDialog(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UIBuyAvatarDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyAvatarDialog::ButtonDepress(PVZ2UIBuyAvatarDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyAvatarDialog::PVZ2UIBuyAvatarDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
PVZ2UIBuyAvatarDialog::PVZ2UIBuyAvatarDialog
          (PVZ2UIBuyAvatarDialog *this,RtWeakPtr *param_2,PVZ2UIBuyAvatarDialog param_3)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  wstring *pwVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  PlayerInfo *pPVar7;
  long lVar8;
  ActivityConfig *this_01;
  MagentoProductProps *pMVar9;
  PVZ2UIButton *pPVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe0);
  PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog((PVZ2UIBuyPlantDialog *)this);
  *(undefined ***)this = &PTR_GetClass_0690dd60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0690e088;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  this[0xe8] = param_3;
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6ee08);
  *(undefined8 *)(this + 0x108) = uVar6;
  pPVar7 = (PlayerInfo *)ProfileUtils::Profile();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar4 = PlayerInfo::GetAvatarPiecesCount(pPVar7,lVar8 + 0x80,0,0);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar11 = (float)NEON_fminnm((float)(int)uVar4 / (float)*(int *)(lVar8 + 0x90),0x3f800000);
  *(float *)(this + 0xec) = fVar11;
  uVar2 = uVar4;
  if (1.0 <= fVar11) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar2 = *(uint *)(lVar8 + 0x90);
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::StrFormat(L"%d/%d",aPStack_40,(ulong)uVar2,(ulong)*(uint *)(lVar8 + 0x90));
  FUN_054766c8(this + 0x128,aPStack_40);
  FUN_05476c50(aPStack_40);
  lVar8 = LawnApp::GetActivityConfig();
  if (lVar8 == 0) {
    fVar12 = *(float *)(this + 0xec);
    pMVar9 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar11 = (float)MagentoProductProps::GetPriceInUSD(pMVar9,false);
    *(int *)(this + 0xf0) = (int)(fVar11 * (1.0 - fVar12));
  }
  else {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = *(int *)(lVar8 + 0x90);
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pMVar9 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar11 = (float)MagentoProductProps::GetPriceInUSD(pMVar9,false);
    iVar5 = ActivityConfig::GetActivityPrice(this_01,(string *)(lVar8 + 0x80),true,(int)fVar11);
    *(uint *)(this + 0xf0) = (iVar3 - uVar4) * iVar5;
  }
  pwVar1 = (wstring *)(this + 0x120);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(lVar8 + 0x18);
  TodStringTranslate(L"[BUY_AVATAR_TITLE]");
  FUN_054766c8(this + 0x118,aPStack_40);
  FUN_05476c50(aPStack_40);
  TodStringTranslate(L"[BUY_AVATAR_DESC]");
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
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b6eda0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b6ec88,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b6ec08,1);
  PVZ2UIButton::AddImage(pPVar10,aPStack_40,0);
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  Sexy::StrFormat(L"%d",aPStack_40,(ulong)*(uint *)(this + 0xf0));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar10,aPStack_40,uVar6,0);
  FUN_05476c50(aPStack_40);
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  TodStringTranslate(L"[BUY_PLANT_BUY]");
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar10,aPStack_40,uVar6,0);
  FUN_05476c50(aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  FUN_05478178(awStack_78,L"[BUTTON_CANCEL]",auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b6ec30,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b6ecb0,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  PVZ2UIBuyPlantDialog::Resize
            ((PVZ2UIBuyPlantDialog *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyAvatarDialog::onUseGemFinish(bool const&) */

void __thiscall PVZ2UIBuyAvatarDialog::onUseGemFinish(PVZ2UIBuyAvatarDialog *this,bool *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined *puVar2;
  NewPVPMgr *this_01;
  int *piVar3;
  long lVar4;
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (NewPVPMgr *)ProfileUtils::Profile();
  local_20[0] = NewPVPMgr::GetSeasonEndTime(this_01);
  piVar3 = eastl::min_alt<int>((int *)(this + 0xf0),(int *)local_20);
  puVar2 = gMessageRouter;
  iVar1 = *piVar3;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
  }
  else {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar2,Message::AvatarPiecesAdd,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,"Store|PvE_Store",iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    PlayerInfo::HandlePurchase((PlayerInfo *)this_01,(string *)(lVar4 + 0x10),(vector *)local_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

