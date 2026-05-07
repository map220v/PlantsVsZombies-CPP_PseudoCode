// Class: PVZ2UIBuyGiftDialog


/* PVZ2UIBuyGiftDialog::onPopRewardPressed() */

void PVZ2UIBuyGiftDialog::onPopRewardPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PVZ2UIBuyGiftDialog::~PVZ2UIBuyGiftDialog() */

void __thiscall PVZ2UIBuyGiftDialog::~PVZ2UIBuyGiftDialog(PVZ2UIBuyGiftDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0683c870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683cb98;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIBuyGiftDialog::~PVZ2UIBuyGiftDialog() */

void __thiscall PVZ2UIBuyGiftDialog::~PVZ2UIBuyGiftDialog(PVZ2UIBuyGiftDialog *this)

{
  ~PVZ2UIBuyGiftDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyGiftDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyGiftDialog::ButtonDepress(PVZ2UIBuyGiftDialog *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar7;
  long lVar8;
  StoreGiftConfig *this_02;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    if (param_1 == 1) {
      LawnApp::KillBuyGiftDialog(gLawnApp);
    }
    goto LAB_0438b31c;
  }
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  if (*(int *)(this + 400) == 0) {
    iVar5 = PlayerInfo::GetNumCoins(this_01,true);
    if ((iVar5 < *(int *)(this + 0xf0)) ||
       (iVar5 = PlayerInfo::SubtractCoins(this_01,*(int *)(this + 0xf0)), puVar1 = gMessageRouter,
       iVar5 < 0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,0,this[0xe8]);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(this + 0xe0));
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::RtWeakPtr<MagentoProductProps>>
                ((MessageRouter *)puVar1,Message::ItemCoinPurchase,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      pLVar2 = gLawnApp;
      iVar5 = FUN_0438b1fc(0x23c);
      iVar6 = FUN_0438b1fc(0x175);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar5,(float)iVar6,(PVZ2UIDialog *)0x0);
      if (pPVar7 == (PVZ2UIDialog *)0x0) goto LAB_0438b31c;
      FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPopRewardPressed);
      Sexy::Delegate0::Delegate0<PVZ2UIBuyGiftDialog,void(PVZ2UIBuyGiftDialog::*)()>
                (aDStack_38,aRStack_50);
      PVZ2UIDialog::AddButton(pPVar7,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
      PVZ2UIDialog::SetBackgroundDarken(pPVar7,true,0.5);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      bVar3 = std::operator==((string *)(lVar8 + 0x10),"com.popcap.ios.chs.PVZ2.laborday_one.gift");
      if (bVar3) {
        std::string::string((string *)aRStack_50,"wintermelon");
        PlayerInfo::UnlockPlant(this_01,(string *)aRStack_50,true);
        std::string::~string((string *)aRStack_50);
        nop();
        std::string::string((string *)aRStack_50,"tallnut");
        PlayerInfo::UnlockPlant(this_01,(string *)aRStack_50,true);
        std::string::~string((string *)aRStack_50);
        nop();
        std::string::string((string *)aRStack_50,"wintermelon");
        PlayerInfo::AddPlantStartLevel(this_01,(string *)aRStack_50,0);
        std::string::~string((string *)aRStack_50);
        nop();
        std::string::string((string *)aRStack_50,"tallnut");
        PlayerInfo::AddPlantStartLevel(this_01,(string *)aRStack_50,0);
        std::string::~string((string *)aRStack_50);
        nop();
        MessageRouter::Post((_func_void *)gMessageRouter);
        TodStringTranslate(L"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
        PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)aRStack_50);
        FUN_05476c50(aRStack_50);
        TodStringTranslate(L"[STORE_GIFT_LABORDAY_ONE_GIFT_BUY_FINISH]");
        PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)aRStack_50);
        FUN_05476c50(aRStack_50);
        FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onPopRewardPressed);
        Sexy::Delegate0::Delegate0<PVZ2UIBuyGiftDialog,void(PVZ2UIBuyGiftDialog::*)()>
                  (aDStack_38,aRStack_50);
        PVZ2UIDialog::AddButton(pPVar7,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(pPVar7,true,0.5);
      }
    }
  }
  else {
    iVar5 = PlayerInfo::GetNumGems(this_01,true);
    if (*(int *)(this + 0xf0) <= iVar5) {
      iVar5 = PlayerInfo::SubtractGems
                        (this_01,*(int *)(this + 0xf0),-1,(ICloudRequestCallbackFunctionBase *)0x0,1
                         ,false);
      puVar1 = gMessageRouter;
      if (-1 < iVar5) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                  ((MessageRouter *)puVar1,Message::ItemPurchase,aRStack_50,iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        puVar1 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)this_00);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                  ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_50,
                   "Map|PvE_Worldunlock",iVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        iVar5 = FUN_0438b1fc(0x23c);
        pLVar2 = gLawnApp;
        iVar6 = FUN_0438b1fc(0x175);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar5,(float)iVar6,(PVZ2UIDialog *)0x0);
        if (pPVar7 == (PVZ2UIDialog *)0x0) goto LAB_0438b31c;
        FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onPopRewardPressed);
        Sexy::Delegate0::Delegate0<PVZ2UIBuyGiftDialog,void(PVZ2UIBuyGiftDialog::*)()>
                  (aDStack_38,aRStack_50);
        PVZ2UIDialog::AddButton(pPVar7,auStack_58,aDStack_38,0);
        FUN_05476c50(auStack_58);
        nop();
        PVZ2UIDialog::SetBackgroundDarken(pPVar7,true,0.5);
        TodStringTranslate(L"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
        PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)aRStack_50);
        FUN_05476c50(aRStack_50);
        lVar8 = LawnApp::GetStoreGiftConfig();
        if (lVar8 != 0) {
          this_02 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          cVar4 = StoreGiftConfig::ActiveGift(this_02,(string *)(lVar8 + 0x10));
          if (cVar4 != '\0') {
            MessageRouter::Post((_func_void *)gMessageRouter);
            TodStringTranslate(L"[STORE_GIFT_LABORDAY_TWO_GIFT_BUY_FINISH]");
            PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)aRStack_50);
            FUN_05476c50(aRStack_50);
          }
        }
        goto LAB_0438b874;
      }
    }
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,this[0xe8]);
  }
LAB_0438b874:
  LawnApp::KillBuyGiftDialog(gLawnApp);
LAB_0438b31c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ2UIBuyGiftDialog::ButtonDepress(int) */

void __thiscall PVZ2UIBuyGiftDialog::ButtonDepress(PVZ2UIBuyGiftDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyGiftDialog::Resize(int, int, int, int) */

void __thiscall
PVZ2UIBuyGiftDialog::Resize
          (PVZ2UIBuyGiftDialog *this,int param_1,int param_2,int param_3,int param_4)

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
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff340);
  iVar2 = FUN_0438b1fc(0x3c);
  iVar2 = iVar2 + *(int *)(lVar9 + 0x38);
  iVar3 = FUN_0438b1fc(0x82);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_0438b1fc(0x5a);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             (iVar1 - iVar3) - iVar4);
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar5 = FUN_0438b1fc(10);
  iVar1 = *(int *)(this + 0x120);
  iVar3 = *(int *)(this + 0x124);
  iVar6 = FUN_0438b1fc(0x14);
  iVar4 = *(int *)(this + 0x128);
  iVar7 = FUN_0438b1fc(0x10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + iVar1,iVar5 + iVar3,iVar4 - iVar6,
             *(int *)(this + 300) - iVar7);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  iVar4 = FUN_0438b1fc(10);
  iVar1 = *(int *)(this + 0x134);
  iVar3 = FUN_0438b1fc(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,*(int *)(this + 0x130),iVar4 + iVar1,*(int *)(this + 0x138),iVar3);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  iVar5 = FUN_0438b1fc(10);
  iVar3 = *(int *)(this + 0x140);
  iVar1 = iVar4 + iVar1 + iVar5 + *(int *)(this + 0x14c);
  iVar6 = FUN_0438b1fc(0x14);
  iVar4 = *(int *)(this + 0x148);
  iVar7 = FUN_0438b1fc(0x50);
  Sexy::Insets::Insets((Insets *)&local_18,iVar5 + iVar3,iVar1,iVar4 - iVar6,iVar7);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  iVar6 = FUN_0438b1fc(10);
  iVar3 = *(int *)(this + 0x15c);
  iVar7 = FUN_0438b1fc(0x28);
  iVar4 = *(int *)(this + 0x138);
  iVar5 = *(int *)(this + 0x130);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff340);
  iVar8 = FUN_0438b1fc(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + (iVar4 - (iVar2 - iVar7)) / 2,iVar1 + iVar6 + iVar3,
             iVar2 - iVar7,iVar8 + *(int *)(lVar9 + 0x3c));
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  iVar4 = FUN_0438b1fc(10);
  iVar2 = *(int *)(this + 0x160);
  iVar5 = FUN_0438b1fc(0x19);
  iVar1 = *(int *)(this + 0x164);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff340);
  iVar3 = *(int *)(lVar9 + 0x38);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff340);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar5 + iVar1,iVar3,*(int *)(lVar9 + 0x3c))
  ;
  plVar10 = *(long **)(this + 0x100);
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  iVar5 = FUN_0438b1fc(0x6e);
  iVar2 = *(int *)(this + 0x138);
  iVar1 = *(int *)(this + 0x130);
  iVar3 = *(int *)(this + 0x13c);
  iVar4 = *(int *)(this + 0x134);
  iVar6 = FUN_0438b1fc(0x32);
  (**(code **)(*plVar10 + 0x198))
            (plVar10,iVar1 + (iVar2 / 2 - iVar5) / 2,(iVar4 + iVar3) - iVar6 / 2,iVar5);
  plVar10 = *(long **)(this + 0xf8);
  iVar2 = *(int *)(this + 0x138);
  iVar1 = *(int *)(this + 0x130);
  iVar5 = FUN_0438b1fc(0x6e);
  iVar3 = *(int *)(this + 0x134);
  iVar4 = *(int *)(this + 0x13c);
  iVar6 = FUN_0438b1fc(0x32);
  (**(code **)(*plVar10 + 0x198))
            (plVar10,iVar2 / 2 + iVar1 + (iVar2 / 2 - iVar5) / 2,(iVar3 + iVar4) - iVar6 / 2,iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyGiftDialog::PVZ2UIBuyGiftDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
PVZ2UIBuyGiftDialog::PVZ2UIBuyGiftDialog
          (PVZ2UIBuyGiftDialog *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,
          PVZ2UIBuyGiftDialog param_3)

{
  ButtonListener *this_00;
  PVZ2UIBuyGiftDialog *pPVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  PlayerInfo *pPVar6;
  MagentoProductProps *pMVar7;
  long lVar8;
  StoreGiftConfig *pSVar9;
  ulong uVar10;
  ulong uVar11;
  string *psVar12;
  string *psVar13;
  ActivityConfig *this_01;
  PVZ2UIButton *pPVar14;
  undefined *puVar15;
  undefined8 uVar16;
  float fVar17;
  string asStack_b0 [8];
  string asStack_a8 [8];
  vector *local_a0;
  vector *local_98;
  vector *local_90;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  this_00 = (ButtonListener *)(this + 0xd8);
  pPVar1 = this + 0x110;
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  *(undefined ***)this = &PTR_GetClass_0683c870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683cb98;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  FUN_05476574(this + 0x108);
  FUN_05476574(pPVar1);
  FUN_05476574(this + 0x118);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)param_2);
  this[0xe8] = param_3;
  pPVar6 = (PlayerInfo *)ProfileUtils::Profile();
  *(undefined4 *)(this + 400) = 1;
  pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar17 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,true);
  *(int *)(this + 0xf0) = (int)fVar17;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar2 = std::operator==((string *)(lVar8 + 0x88),"coin");
  if (bVar2) {
    *(undefined4 *)(this + 400) = 0;
  }
  lVar8 = LawnApp::GetStoreGiftConfig();
  if (lVar8 != 0) {
    pSVar9 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    iVar4 = StoreGiftConfig::GetGiftCoin(pSVar9,(string *)(lVar8 + 0x10));
    if (0 < iVar4) {
      pSVar9 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar10 = StoreGiftConfig::GetGiftCoin(pSVar9,(string *)(lVar8 + 0x10));
      Sexy::StrFormat("%d",asStack_80,uVar10 & 0xffffffff);
      Sexy::ToWString(asStack_80);
      thunk_FUN_05477668(pPVar1,asStack_40);
      FUN_05476c50(asStack_40);
      std::string::string(asStack_40,"+");
      Sexy::ToWString(asStack_40);
      thunk_FUN_05477668(pPVar1,asStack_78);
      FUN_05476c50(asStack_78);
      std::string::~string(asStack_40);
      nop();
      std::string::~string(asStack_80);
    }
    local_a0 = (vector *)0x0;
    pSVar9 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar3 = StoreGiftConfig::GetGiftPlantArray(pSVar9,(string *)(lVar8 + 0x10),&local_a0);
    if (cVar3 != '\0') {
      uVar10 = 0;
      while( true ) {
        uVar16 = *(undefined8 *)local_a0;
        uVar11 = FUN_0438b140(uVar16,*(undefined8 *)(local_a0 + 8));
        if (uVar11 <= uVar10) break;
        lVar8 = FUN_0438b154(uVar16,uVar10);
        Sexy::ToWString((string *)(lVar8 + 8));
        TodStringTranslate((wstring *)asStack_80);
        thunk_FUN_05477668(pPVar1,asStack_40);
        FUN_05476c50(asStack_40);
        std::string::string(asStack_40,"+");
        Sexy::ToWString(asStack_40);
        thunk_FUN_05477668(pPVar1,asStack_78);
        FUN_05476c50(asStack_78);
        std::string::~string(asStack_40);
        nop();
        FUN_05476c50((wstring *)asStack_80);
        uVar10 = uVar10 + 1;
      }
    }
    local_98 = (vector *)0x0;
    pSVar9 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar3 = StoreGiftConfig::GetGiftAvatarPlantPieceArray(pSVar9,(string *)(lVar8 + 0x10),&local_98)
    ;
    if (cVar3 != '\0') {
      for (uVar10 = 0; uVar11 = FUN_0438b160(*(undefined8 *)local_98,*(undefined8 *)(local_98 + 8)),
          uVar10 < uVar11; uVar10 = uVar10 + 1) {
        psVar13 = asStack_a8;
        std::string::string(asStack_80,"iOS PvZ2 Avatar Store");
        std::string::string(asStack_78,"Avatars");
        std::string::string(asStack_40,"avatar");
        psVar12 = (string *)FUN_0438b174(*(undefined8 *)local_98,uVar10);
        Magento::FindStoreProduct((Magento *)asStack_80,asStack_78,asStack_40,psVar12,psVar13);
        std::string::~string(asStack_40);
        nop();
        std::string::~string(asStack_78);
        nop();
        std::string::~string(asStack_80);
        nop();
        uVar16 = FUN_0438b174(*(undefined8 *)local_98,uVar10);
        cVar3 = PlayerInfo::IsPlantAvatarPiecesFull(pPVar6,uVar16,0,0);
        if ((cVar3 == '\0') &&
           (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88), cVar3 != '\0')) {
          pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          fVar17 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          iVar4 = *(int *)(lVar8 + 0x90);
          uVar16 = FUN_0438b174(*(undefined8 *)local_98,uVar10);
          iVar5 = PlayerInfo::GetAvatarPiecesCount(pPVar6,uVar16,0,0);
          *(int *)(this + 0xf0) = *(int *)(this + 0xf0) - iVar5 * (int)(fVar17 / (float)iVar4);
        }
        lVar8 = FUN_0438b174(*(undefined8 *)local_98,uVar10);
        Sexy::ToWString((string *)(lVar8 + 8));
        TodStringTranslate((wstring *)asStack_80);
        thunk_FUN_05477668(pPVar1,asStack_40);
        FUN_05476c50(asStack_40);
        std::string::string(asStack_40,"+");
        Sexy::ToWString(asStack_40);
        thunk_FUN_05477668(pPVar1,asStack_78);
        FUN_05476c50(asStack_78);
        std::string::~string(asStack_40);
        nop();
        FUN_05476c50((wstring *)asStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      }
      if (*(int *)(this + 0xf0) < 1) {
        *(undefined4 *)(this + 0xf0) = 0;
      }
    }
    local_90 = (vector *)0x0;
    pSVar9 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar3 = StoreGiftConfig::GetGiftUnlockAvatarPlantArray
                      (pSVar9,(string *)(lVar8 + 0x10),&local_90);
    if (cVar3 != '\0') {
      for (uVar10 = 0; uVar11 = FUN_0438b180(*(undefined8 *)local_90,*(undefined8 *)(local_90 + 8)),
          uVar10 < uVar11; uVar10 = uVar10 + 1) {
        psVar13 = asStack_b0;
        std::string::string(asStack_80,"iOS PvZ2 Avatar Store");
        std::string::string(asStack_78,"Avatars");
        std::string::string(asStack_40,"avatar");
        psVar12 = (string *)FUN_0438b18c(*(undefined8 *)local_90,uVar10);
        Magento::FindStoreProduct((Magento *)asStack_80,asStack_78,asStack_40,psVar12,psVar13);
        std::string::~string(asStack_40);
        nop();
        std::string::~string(asStack_78);
        nop();
        std::string::~string(asStack_80);
        nop();
        uVar16 = FUN_0438b18c(*(undefined8 *)local_90,uVar10);
        cVar3 = PlayerInfo::IsPlantAvatarUnLocked(pPVar6,uVar16,0,0);
        if (cVar3 != '\0') {
          pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
          fVar17 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
          *(int *)(this + 0xf0) = (int)((float)*(int *)(this + 0xf0) - fVar17);
        }
        psVar13 = (string *)FUN_0438b18c(*(undefined8 *)local_90,uVar10);
        Sexy::ToWString(psVar13);
        TodStringTranslate((wstring *)asStack_80);
        thunk_FUN_05477668(pPVar1,asStack_40);
        FUN_05476c50(asStack_40);
        std::string::string(asStack_40,"+");
        Sexy::ToWString(asStack_40);
        thunk_FUN_05477668(pPVar1,asStack_78);
        FUN_05476c50(asStack_78);
        std::string::~string(asStack_40);
        nop();
        FUN_05476c50((wstring *)asStack_80);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      }
      if (*(int *)(this + 0xf0) < 1) {
        *(undefined4 *)(this + 0xf0) = 0;
      }
    }
  }
  lVar8 = LawnApp::GetActivityConfig();
  if (lVar8 != 0) {
    iVar4 = *(int *)(this + 0xf0);
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    fVar17 = (float)ActivityConfig::GetGeneralSaleDiscountOnDay(this_01,(string *)(lVar8 + 0x10));
    *(int *)(this + 0xf0) = (int)(fVar17 * (float)iVar4);
  }
  TodStringTranslate(L"[STORE_GIFT_DIALOG_TITLE_BUY_IT]");
  FUN_054766c8(this + 0x108,(PVZ2UIImage *)asStack_40);
  FUN_05476c50((PVZ2UIImage *)asStack_40);
  FUN_05478178((wstring *)asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,0,this_00,(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar14;
  FUN_05476c50((wstring *)asStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06aff2b0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06aff198,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  FUN_05478178((wstring *)asStack_78,L"[BUTTON_CANCEL]",asStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,1,this_00,(wstring *)asStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar14;
  FUN_05476c50((wstring *)asStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06aff140,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06aff1c0,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  if (*(int *)(this + 400) == 1) {
    puVar15 = &DAT_06aff0f0;
  }
  else {
    puVar15 = &DAT_06aff118;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,puVar15,1);
  PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)asStack_40,0);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  Sexy::StrFormat(L"%d",(PVZ2UIImage *)asStack_40,(ulong)*(uint *)(this + 0xf0));
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  PVZ2UIButton::AddText(pPVar14,(PVZ2UIImage *)asStack_40,uVar16,0);
  FUN_05476c50((PVZ2UIImage *)asStack_40);
  pPVar14 = *(PVZ2UIButton **)(this + 0xf8);
  TodStringTranslate(L"[BUY_PLANT_BUY]");
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  PVZ2UIButton::AddText(pPVar14,(PVZ2UIImage *)asStack_40,uVar16,0);
  FUN_05476c50((PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  Resize(this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),*(int *)(gLawnApp + 0x724),
         *(int *)(gLawnApp + 0x728));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIBuyGiftDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIBuyGiftDialog::DrawAll(PVZ2UIBuyGiftDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Image *pIVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff368);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x120));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff220);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  WriteWordInRect(param_2,this + 0x108,this + 0x140,uVar1,aIStack_18,5,1);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0x110,this + 0x150,uVar1,aIStack_18,5,1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x160));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff398);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aff340);
  Sexy::Graphics::DrawImage
            (param_2,pIVar2,*(int *)(this + 0x170),*(int *)(this + 0x174),*(int *)(this + 0x178),
             *(int *)(this + 0x17c));
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

