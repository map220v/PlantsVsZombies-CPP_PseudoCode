// Class: DaveTreasureDisplayWidget


/* DaveTreasureDisplayWidget::~DaveTreasureDisplayWidget() */

void __thiscall
DaveTreasureDisplayWidget::~DaveTreasureDisplayWidget(DaveTreasureDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f7920;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f7c48;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveTreasureDisplayWidget::~DaveTreasureDisplayWidget() */

void __thiscall
DaveTreasureDisplayWidget::~DaveTreasureDisplayWidget(DaveTreasureDisplayWidget *this)

{
  ~DaveTreasureDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::ObatinPennyPrivilege() */

void __thiscall DaveTreasureDisplayWidget::ObatinPennyPrivilege(DaveTreasureDisplayWidget *this)

{
  long *plVar1;
  PVZ2UIButton *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xe0] != (DaveTreasureDisplayWidget)0x0) &&
     (plVar1 = *(long **)(this + 0xf8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    this_00 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[DAVE_TREASURE_BOUGHT]");
    PVZ2UIButton::SetLabelText(this_00,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::DaveTreasureDisplayWidget() */

void __thiscall
DaveTreasureDisplayWidget::DaveTreasureDisplayWidget(DaveTreasureDisplayWidget *this)

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
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (DaveTreasureDisplayWidget)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_066f7920;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f7c48;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBillingReward);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,S2C_BillingReward_const*,Sexy::CBMemberTranslatorX<DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)(bool,S2C_BillingReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBillingReward,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ObatinPennyPrivilege);
  Sexy::Delegate0::Delegate0<DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ObatinPennyPrivilege,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::InitView(int, bool) */

void __thiscall
DaveTreasureDisplayWidget::InitView(DaveTreasureDisplayWidget *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  string *extraout_x1;
  Insets *__n;
  long *plVar8;
  code *pcVar9;
  PVZ2UIButton *pPVar10;
  string asStack_198 [8];
  wstring awStack_190 [8];
  Insets aIStack_188 [4];
  int local_184;
  PVZ2UIImage aPStack_178 [56];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_1;
  this[0xe0] = (DaveTreasureDisplayWidget)param_2;
  if (!param_2) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_039f0224(local_138);
    if ((cVar1 != '\0') && (local_128 != '\0')) {
      DaveTreasureData::DaveTreasureData((DaveTreasureData *)&local_c0);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)&local_c0);
      if (cVar1 != '\0') {
        iVar2 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        if (*(int *)(this + 0xe4) == 2) {
          Sexy::StringToUpper((Sexy *)awStack_190,extraout_x1);
          pcVar7 = "IMAGE_UI_HEADSHOT_BIGPLANT_";
LAB_039f7dec:
          std::operator+(pcVar7,(string *)aIStack_188);
          uVar6 = StringHelper::ToImage((string *)aPStack_178,param_2);
          *(undefined8 *)(this + 0x100) = uVar6;
          std::string::~string((string *)aPStack_178);
          std::string::~string((string *)aIStack_188);
        }
        else if (*(int *)(this + 0xe4) == 3) {
          Sexy::StringToUpper((Sexy *)awStack_190,extraout_x1);
          pcVar7 = "IMAGE_UI_HEADSHOT_BIGAVATAR_";
          goto LAB_039f7dec;
        }
        std::string::~string((string *)awStack_190);
      }
      DaveTreasureData::~DaveTreasureData((DaveTreasureData *)&local_c0);
    }
    ActiveItem::~ActiveItem(aAStack_140);
  }
  iVar2 = FUN_039f135c(0x1d6);
  iVar3 = FUN_039f135c(0x14);
  iVar4 = FUN_039f135c(0xb1);
  iVar5 = FUN_039f135c(0x8c);
  Sexy::Insets::Insets((Insets *)&local_c0,iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0xe8) = local_c0;
  *(undefined8 *)(this + 0xf0) = uStack_b8;
  iVar2 = FUN_039f135c(0x1e0);
  iVar3 = FUN_039f135c(0x96);
  iVar4 = FUN_039f135c(0x32);
  Sexy::Insets::Insets(aIStack_188,iVar2,iVar3,iVar3,iVar4);
  if (this[0xe0] != (DaveTreasureDisplayWidget)0x0) {
    iVar2 = FUN_039f135c(10);
    *(int *)(this + 0xe8) = *(int *)(this + 0xe8) - iVar2;
    iVar2 = FUN_039f135c(10);
    *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + iVar2;
    iVar2 = FUN_039f135c(0x14);
    *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + iVar2;
    iVar2 = FUN_039f135c(0x17);
    local_184 = local_184 + iVar2;
  }
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  if (pPVar10 == (PVZ2UIButton *)0x0) {
    __n = (Insets *)&local_c0;
    std::string::string(asStack_198,"[DAVE_TREASURE_BUY_1]");
    nop();
    if (param_1 == 2) {
      std::string::append(asStack_198,"[DAVE_TREASURE_BUY_2]",(size_t)__n);
    }
    else if (param_1 == 3) {
      std::string::append(asStack_198,"[DAVE_TREASURE_BUY_3]",(size_t)__n);
    }
    if (this[0xe0] != (DaveTreasureDisplayWidget)0x0) {
      std::string::append(asStack_198,"[PENNY_ADVANCED_GUIDE_BUY]",(size_t)__n);
    }
    Sexy::ToWString(asStack_198);
    TodStringTranslate(awStack_190);
    Sexy::Color::Color((Color *)&local_c0,1);
    pPVar10 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar10,0x5a,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_178,
               (Color *)&local_c0);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
    FUN_05476c50(aPStack_178);
    FUN_05476c50(awStack_190);
    if (this[0xe0] == (DaveTreasureDisplayWidget)0x0) {
      Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
      cVar1 = DaveTreasureDataManager::HasPrivilege();
    }
    else {
      Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
      cVar1 = DaveTreasureDataManager::HasPennyPrivilege();
    }
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
      pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
      TodStringTranslate(L"[DAVE_TREASURE_BOUGHT]");
      PVZ2UIButton::SetLabelText(pPVar10,(wstring *)&local_c0);
      FUN_05476c50((Insets *)&local_c0);
    }
    std::string::~string(asStack_198);
    pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
    if (pPVar10 == (PVZ2UIButton *)0x0) goto LAB_039f7b98;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_178,&DAT_06ac2528,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c0,&DAT_06ac22e8,3);
  PVZ2UIButton::SetDialogStates(pPVar10,aPStack_178,(PVZ2UIImage *)&local_c0);
  (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(*(long **)(this + 0xf8),aIStack_188);
  plVar8 = *(long **)(this + 0xf8);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar8,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
LAB_039f7b98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall DaveTreasureDisplayWidget::Draw(DaveTreasureDisplayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0xe0] == (DaveTreasureDisplayWidget)0x0) {
    iVar1 = *(int *)(this + 0xe4);
    if ((iVar1 != 4) && (iVar1 != 1)) {
      if (iVar1 == 2) {
        pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac22c0);
        Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        if (*(long *)(this + 0x100) != 0) {
          iVar1 = FUN_039f135c(0xb4);
          iVar2 = FUN_039f135c(0x3c);
          iVar3 = FUN_039f135c(0x5a);
          Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
          DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x100));
        }
        pwVar5 = L"[DAVE_DISPLAY_BANNER_2]";
      }
      else {
        if (iVar1 != 3) goto LAB_039f96d8;
        pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1fc0);
        Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        if (*(long *)(this + 0x100) != 0) {
          iVar1 = FUN_039f135c(0xb4);
          iVar2 = FUN_039f135c(0x3c);
          iVar3 = FUN_039f135c(0x5a);
          Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
          DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x100));
        }
        pwVar5 = L"[DAVE_DISPLAY_BANNER_3]";
      }
      TodStringTranslate(pwVar5);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_20,this + 0xe8,uVar6,(Color *)aIStack_18,3,1);
      FUN_05476c50(auStack_20);
      goto LAB_039f96d8;
    }
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1f48);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    pwVar5 = L"[DAVE_DISPLAY_BANNER_1]";
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2460);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    pwVar5 = L"[PENNY_ADVANCED_GUIDE_DES]";
  }
  TodStringTranslate(pwVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_20,this + 0xe8,uVar6,(Color *)aIStack_18,3,1);
  FUN_05476c50(auStack_20);
LAB_039f96d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::ButtonDepress(int) */

void __thiscall
DaveTreasureDisplayWidget::ButtonDepress(DaveTreasureDisplayWidget *this,int param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  TGALogMgr *pTVar4;
  MagentoProductProps *pMVar5;
  char *__s;
  string *extraout_x1;
  size_t __n;
  float fVar6;
  RtWeakPtr aRStack_90 [8];
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [56];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x5a) {
    if (this[0xe0] == (DaveTreasureDisplayWidget)0x0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_48,"com.popcap.ios.chs.PVZ2.SecretTreasure");
      __n = 0;
      PurchaseBroker::RequestPayment(pPVar3,asStack_48,0);
      std::string::~string(asStack_48);
      nop();
      TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
      std::string::append((string *)aTStack_88,"com.popcap.ios.chs.PVZ2.SecretTreasure",__n);
      Magento::GetProductPtr((Magento *)aTStack_88,extraout_x1);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
      if (bVar1) {
        pMVar5 = (MagentoProductProps *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        fVar6 = (float)MagentoProductProps::GetPriceInUSD(pMVar5,false);
        DString::DString((DString *)asStack_48,fVar6);
        __s = (char *)DString::c_str((DString *)asStack_48);
        std::string::append(asStack_80,__s,__n);
        DString::~DString((DString *)asStack_48);
        pMVar5 = (MagentoProductProps *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        fVar6 = (float)MagentoProductProps::GetPriceInUSD(pMVar5,false);
        *(int *)(this + 0x108) = (int)fVar6;
      }
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogPurchaseData::TGALogPurchaseData
                ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
      TGALogMgr::LogDaveTreasure(pTVar4,2,asStack_48);
      TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
    }
    else {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_48,"com.popcap.ios.chs.PVZ2.Pennyshandbook");
      PurchaseBroker::RequestPayment(pPVar3,asStack_48,0);
      std::string::~string(asStack_48);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DaveTreasureDisplayWidget::ButtonDepress(int) */

void __thiscall
DaveTreasureDisplayWidget::ButtonDepress(DaveTreasureDisplayWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureDisplayWidget::OnNotifyBillingReward(bool, S2C_BillingReward const*) */

void DaveTreasureDisplayWidget::OnNotifyBillingReward(bool param_1,S2C_BillingReward *param_2)

{
  ulong uVar1;
  long *plVar2;
  char *__s;
  TGALogMgr *pTVar3;
  code *in_x2;
  PVZ2UIButton *this;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [56];
  wstring awStack_48 [64];
  long local_8;
  
  uVar1 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (*(char *)(uVar1 + 0xe0) == '\0') {
    plVar2 = *(long **)(uVar1 + 0xf8);
    if (plVar2 != (long *)0x0) {
      in_x2 = *(code **)(*plVar2 + 0x188);
      (*in_x2)(plVar2,1);
      this = *(PVZ2UIButton **)(uVar1 + 0xf8);
      TodStringTranslate(L"[DAVE_TREASURE_BOUGHT]");
      PVZ2UIButton::SetLabelText(this,awStack_48);
      FUN_05476c50(awStack_48);
    }
    if (0 < *(int *)(uVar1 + 0x108)) {
      TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
      std::string::append((string *)aTStack_88,"com.popcap.ios.chs.PVZ2.SecretTreasure",
                          (size_t)in_x2);
      DString::DString((DString *)awStack_48,*(int *)(uVar1 + 0x108));
      __s = (char *)DString::c_str((DString *)awStack_48);
      std::string::append(asStack_80,__s,(size_t)in_x2);
      DString::~DString((DString *)awStack_48);
      pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogPurchaseData::TGALogPurchaseData
                ((TGALogPurchaseData *)awStack_48,(TGALogPurchaseData *)aTStack_88);
      TGALogMgr::LogDaveTreasure(pTVar3,3,(DString *)awStack_48);
      TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)awStack_48);
      TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

