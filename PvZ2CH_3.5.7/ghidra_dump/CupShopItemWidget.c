// Class: CupShopItemWidget


/* CupShopItemWidget::~CupShopItemWidget() */

void __thiscall CupShopItemWidget::~CupShopItemWidget(CupShopItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066dfc20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CupShopItemWidget::~CupShopItemWidget() */

void __thiscall CupShopItemWidget::~CupShopItemWidget(CupShopItemWidget *this)

{
  ~CupShopItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall CupShopItemWidget::TouchEnded(CupShopItemWidget *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x108] == (CupShopItemWidget)0x0) &&
     (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = PlayerInfo::GetMaterialNum(this_01,0x59fd);
    if (iVar2 < *(int *)(this + 0xe0)) {
      pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar3 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar3,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[EXCHANGE_FAILED_TEXT2]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar3,awStack_60,(wstring *)asStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar3,pIVar4);
        std::string::~string(asStack_50);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
        thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_58);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50((wstring *)asStack_68);
      }
    }
    else {
      pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      std::string::string(asStack_50,"[MAT_COLLECT_COIN_D]");
      StringHelper::ToStringValue(asStack_50);
      std::string::~string(asStack_50);
      nop();
      if (pUVar3 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar3,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        FUN_05476574(awStack_70);
        if (*(int *)(this + 0x10c) == 1) {
          TodStringTranslate(L"[CONFIRM_TO_EXCHANGE1]");
          FUN_054766c8(awStack_70,asStack_50);
          FUN_05476c50(asStack_50);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
          Sexy::ToSexyString((Sexy *)awStack_60,extraout_x1_00);
          TodReplaceString(awStack_70,L"{NUMBER}",awStack_58);
          FUN_054766c8(awStack_70,asStack_50);
          FUN_05476c50(asStack_50);
          FUN_05476c50(awStack_58);
          std::string::~string((string *)awStack_60);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xdc));
          Sexy::ToSexyString((Sexy *)awStack_60,extraout_x1_01);
          TodReplaceString(awStack_70,L"{NUM}",awStack_58);
          FUN_054766c8(awStack_70,asStack_50);
          FUN_05476c50(asStack_50);
          FUN_05476c50(awStack_58);
          std::string::~string((string *)awStack_60);
          TodReplaceString(awStack_70,L"{ITEM}",(wstring *)(this + 0xf8));
          FUN_054766c8(awStack_70,asStack_50);
          FUN_05476c50(asStack_50);
        }
        else {
          iVar2 = AvatarNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar2);
          cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this_01,asStack_68,0,0);
          if (cVar1 == '\0') {
            TodStringTranslate(L"[CONFIRM_TO_EXCHANGE2]");
            FUN_054766c8(awStack_70,asStack_50);
            FUN_05476c50(asStack_50);
            local_84 = 1;
            std::to_string<ActivityTypeID>((ActivityTypeID *)&local_84);
            Sexy::ToSexyString((Sexy *)awStack_60,extraout_x1);
            TodReplaceString(awStack_70,L"{NUMBER}",awStack_58);
            FUN_054766c8(awStack_70,asStack_50);
            FUN_05476c50(asStack_50);
            FUN_05476c50(awStack_58);
            std::string::~string((string *)awStack_60);
            TodReplaceString(awStack_70,L"{ITEM}",(wstring *)(this + 0xf8));
          }
          else {
            TodStringTranslate(L"[EXCHANGE_AVATAR_TIPS]");
          }
          FUN_054766c8(awStack_70,asStack_50);
          FUN_05476c50(asStack_50);
          std::string::~string(asStack_68);
        }
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar3,awStack_70,awStack_78);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar3,pIVar4);
        std::string::~string(asStack_50);
        nop();
        lVar5 = UIMessageBox::GetButtonOK(pUVar3);
        thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_58);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ConfirmBuy);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<CupShopItemWidget,void(CupShopItemWidget::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar3,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_70);
        FUN_05476c50(awStack_78);
      }
      FUN_05476c50(auStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::RareFrameImage(int) */

void CupShopItemWidget::RareFrameImage(int param_1)

{
  CachedUIResourcePtr *this;
  undefined4 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  switch(in_w1) {
  case 1:
    this = (CachedUIResourcePtr *)&DAT_06abe570;
    break;
  case 2:
    this = (CachedUIResourcePtr *)&DAT_06abe3a0;
    break;
  case 3:
    this = (CachedUIResourcePtr *)&DAT_06abeaf8;
    break;
  case 4:
    this = (CachedUIResourcePtr *)&DAT_06abe5a0;
    break;
  default:
    this = (CachedUIResourcePtr *)&DAT_06abe318;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::Draw(Sexy::Graphics*) */

void __thiscall CupShopItemWidget::Draw(CupShopItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  ResourceInfo *pRVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  double dVar9;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe848);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf0));
  iVar6 = *(int *)(this + 0x54);
  iVar2 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar8,*(int *)(this + 0x50) / 2 - (iVar2 >> 2),iVar2 >> 2,iVar6 / 2,
             iVar6 / 2);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe8));
  iVar6 = *(int *)(this + 0x54);
  iVar2 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  dVar9 = (double)(iVar6 / 2);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar8,
             (int)((double)(*(int *)(this + 0x50) / 2) - (double)(iVar2 >> 2) * 0.7),
             (int)(dVar9 - (double)(iVar2 >> 2) * 0.8),(int)(dVar9 * 0.7),(int)(dVar9 * 0.8));
  iVar2 = FUN_0398a1f8(6);
  Sexy::Insets::Insets(aIStack_28,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) / 3);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar1,aCStack_18,2,1);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abeaa8);
  iVar3 = FUN_0398a1f8(0xd);
  iVar6 = *(int *)(this + 0x50);
  iVar2 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  iVar4 = FUN_0398a1f8(0x22);
  iVar6 = *(int *)(this + 0x54);
  iVar5 = FUN_0398a1f8(0x1a);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3 + (iVar2 >> 2),iVar6 - iVar4,iVar5,iVar5);
  Sexy::StrFormat(L"%d",auStack_30,1);
  iVar2 = FUN_0398a1f8(0x21);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x50) / 2,*(int *)(this + 0x54) - iVar2,iVar2,iVar2);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aCStack_18,2,1);
  FUN_05476c50(auStack_30);
  if (*(int *)(this + 0x10c) == 1) {
    if (*(int *)(this + 0xdc) == 2) {
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abeb58;
    }
    else {
      if (*(int *)(this + 0xdc) != 3) goto LAB_0399133c;
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe708;
    }
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    iVar6 = *(int *)(this + 0x54);
    iVar3 = *(int *)(this + 0x50);
    iVar2 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar2 = iVar6;
    }
    this_00 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3 / 2 - (iVar2 >> 2),iVar2 >> 2,iVar6,iVar4);
  }
LAB_0399133c:
  if (this[0x108] != (CupShopItemWidget)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe640);
    Sexy::Graphics::DrawImage(param_1,pIVar7,0,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CupShopItemWidget::CupShopItemWidget() */

void __thiscall CupShopItemWidget::CupShopItemWidget(CupShopItemWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066dfc20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  this[0x108] = (CupShopItemWidget)0x0;
  this[0x109] = (CupShopItemWidget)0x0;
  *(undefined4 *)(this + 0x10c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyShopItemBuyFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_S2C_LimitLotteryCupShop_const*,Sexy::CBMemberTranslatorX<CupShopItemWidget,void(CupShopItemWidget::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyLimitLotteryBuyCupShopFinish,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::ConfirmBuy(UIMessageBox*, int) */

void __thiscall
CupShopItemWidget::ConfirmBuy(CupShopItemWidget *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  long lVar8;
  ulong uVar9;
  NetworkMgr *pNVar10;
  long *plVar11;
  vector *pvVar12;
  long lVar13;
  NameMapperBase *this_01;
  ulong uVar14;
  int iVar15;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    if (*(int *)(this + 0x10c) == 1) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar4 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      bVar2 = PlayerInfo::GetIsPlantUnlocked(pPVar6,asStack_30);
      if (bVar2 == 0) {
        pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
        plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
        (**(code **)(*plVar11 + 0x1a8))
                  (plVar11,*(undefined4 *)(this + 0xd8),*(undefined4 *)(this + 0xdc));
      }
      else {
        Magento::GetPlantLevelUp((Magento *)(ulong)bVar2);
        uVar9 = 0;
        do {
          uVar14 = uVar9;
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          uVar9 = FUN_03989264(*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68));
          if (uVar9 <= uVar14) goto LAB_03993de8;
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_03989270(*(undefined8 *)(lVar8 + 0x60),uVar14);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          cVar3 = std::operator==((string *)(lVar8 + 0x80),asStack_30);
          uVar9 = uVar14 + 1;
        } while (cVar3 == '\0');
        if (*(int *)(this + 0xdc) < 1) {
          iVar4 = 0;
        }
        else {
          lVar8 = -1;
          iVar15 = 1;
          iVar4 = 0;
          do {
            if (iVar15 < 2) {
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03989270(*(undefined8 *)(lVar13 + 0x60),uVar14);
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
              iVar1 = *(int *)(lVar13 + 0x90);
            }
            else {
              lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_03989270(*(undefined8 *)(lVar13 + 0x60),uVar14);
              pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
              pvVar12 = (vector *)PlayerInfo::GetPlantAvatarInfo(pPVar6);
              std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::vector
                        ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_20,
                         pvVar12);
              lVar13 = FUN_03989278(local_20[0],lVar8);
              iVar1 = *(int *)(lVar13 + 4);
              std::vector<LevelUpPriceData,std::allocator<LevelUpPriceData>>::~vector
                        ((vector<LevelUpPriceData,std::allocator<LevelUpPriceData>> *)local_20);
            }
            iVar4 = iVar4 + iVar1;
            iVar15 = iVar15 + 1;
            lVar8 = lVar8 + 1;
          } while (iVar15 <= *(int *)(this + 0xdc));
        }
        this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        uVar5 = NameMapperBase::GetIdForName(this_01,asStack_30);
        pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
        plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
        (**(code **)(*plVar11 + 0x1a8))(plVar11,uVar5,iVar4);
LAB_03993de8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      std::string::~string(asStack_30);
    }
    else if (*(int *)(this + 0x10c) == 3) {
      pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
      plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
      (**(code **)(*plVar11 + 0x1a8))
                (plVar11,*(undefined4 *)(this + 0xd8),*(undefined4 *)(this + 0xdc));
    }
    this[0x109] = (CupShopItemWidget)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::SetShopData(CupShopItemData const&) */

void __thiscall CupShopItemWidget::SetShopData(CupShopItemWidget *this,CupShopItemData *param_1)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  RtMixedPtrBase aRStack_48 [8];
  RtId aRStack_40 [8];
  int local_38;
  int local_34;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 8);
  GetGameItemInfo(iVar2,0x7fffffff,0);
  if (local_38 != 0) {
    if (local_34 == 1) {
      *(undefined4 *)(this + 0x10c) = 1;
      iVar2 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      FUN_05475ffc(asStack_50,lVar4 + 0x20,0xe,0xffffffffffffffff);
      uVar5 = FUN_0547429c(asStack_50);
      Sexy::StrFormat("%s%s",(string *)aRStack_48,"IMAGE_UI_HEADSHOT_BIGPLANT_",uVar5);
      lVar4 = StringHelper::ToImage((string *)aRStack_48,false);
      if (lVar4 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xe8));
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xe8),aRStack_40);
        Sexy::RtId::~RtId(aRStack_40);
      }
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        RareFrameImage((int)this);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      std::string::~string((string *)aRStack_48);
      std::string::~string(asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      std::string::~string(asStack_60);
    }
    else {
      if (local_34 == 4) {
        *(undefined4 *)(this + 0x10c) = 3;
        iVar2 = AvatarNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          RareFrameImage((int)this);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        }
        lVar4 = StringHelper::ToImage(asStack_18,false);
        if (lVar4 == 0) {
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xe8));
        }
        else {
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                    ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xe8),aRStack_40);
          Sexy::RtId::~RtId(aRStack_40);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
        std::string::~string(asStack_50);
        thunk_FUN_05477b9c(this + 0xf8,auStack_10);
        goto LAB_039947f4;
      }
      Sexy::OutputDebugStrF((wchar_t *)"LimitLottery Shop: invalid bonus");
    }
    thunk_FUN_05477b9c(this + 0xf8,auStack_10);
  }
LAB_039947f4:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CupShopItemWidget::OnNotifyShopItemBuyFinish(bool, S2C_S2C_LimitLotteryCupShop const*) */

void __thiscall
CupShopItemWidget::OnNotifyShopItemBuyFinish
          (CupShopItemWidget *this,bool param_1,S2C_S2C_LimitLotteryCupShop *param_2)

{
  undefined *puVar1;
  char *__s;
  TGALogMgr *pTVar2;
  vector<int,std::allocator<int>> *__n;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  TGALuckyChestData aTStack_78 [48];
  string asStack_48 [8];
  int local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x109] != (CupShopItemWidget)0x0)) {
    this[0x108] = (CupShopItemWidget)0x1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_90,(int *)(this + 0xd8));
    local_40[0] = 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_90,local_40);
    local_40[0] = *(int *)(param_2 + 0x14) + 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_90,local_40);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_90,(int *)(param_2 + 0x14));
    puVar1 = gMessageRouter;
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_40,(vector *)avStack_90);
    __n = (vector<int,std::allocator<int>> *)local_40;
    MessageRouter::
    Post<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>>
              ((MessageRouter *)puVar1,Message::LimitLotteryExchange);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_40);
    TGALuckyChestData::TGALuckyChestData(aTStack_78);
    std::string::append((string *)aTStack_78,"4",(size_t)__n);
    DString::DString((DString *)local_40,*(int *)(this + 0xd8));
    __s = (char *)DString::c_str((DString *)local_40);
    std::string::append(asStack_48,__s,(size_t)__n);
    DString::~DString((DString *)local_40);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)local_40,(TGAPlantSpecialOfferData *)aTStack_78);
    TGALogMgr::LogLimitedLottery(pTVar2,(vector<int,std::allocator<int>> *)local_40);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)local_40);
    TGALuckyChestData::~TGALuckyChestData(aTStack_78);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_90);
  }
  this[0x109] = (CupShopItemWidget)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

