// Class: LimitGroupBuyGridItem


/* LimitGroupBuyGridItem::~LimitGroupBuyGridItem() */

void __thiscall LimitGroupBuyGridItem::~LimitGroupBuyGridItem(LimitGroupBuyGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066ecd20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ed048;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x170));
  FUN_05476c50(this + 0x150);
  FUN_05476c50(this + 0x138);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitGroupBuyGridItem::~LimitGroupBuyGridItem() */

void __thiscall LimitGroupBuyGridItem::~LimitGroupBuyGridItem(LimitGroupBuyGridItem *this)

{
  ~LimitGroupBuyGridItem(this);
  AK::FreeHook(this);
  return;
}


/* LimitGroupBuyGridItem::LimitGroupBuyGridItem() */

void __thiscall LimitGroupBuyGridItem::LimitGroupBuyGridItem(LimitGroupBuyGridItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066ecd20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ed048;
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0xe0));
  FUN_05476574(this + 0xf8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  FUN_05476574(this + 0x138);
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  FUN_05476574(this + 0x150);
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Set8BytesTo0(this + 0x170);
  *(undefined8 *)(this + 0x178) = 0;
  this[0x169] = (LimitGroupBuyGridItem)0x0;
  this[0x168] = (LimitGroupBuyGridItem)0x0;
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  FUN_054772c4(this + 0x138,&DAT_056f11a8);
  FUN_054772c4(this + 0x150,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItem::LevelCornerMark(int) */

void LimitGroupBuyGridItem::LevelCornerMark(int param_1)

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
    this = (CachedUIResourcePtr *)&DAT_06ac07c0;
    break;
  case 2:
    this = (CachedUIResourcePtr *)&DAT_06ac0840;
    break;
  case 3:
    this = (CachedUIResourcePtr *)&DAT_06ac0890;
    break;
  case 4:
    this = (CachedUIResourcePtr *)&DAT_06ac09c8;
    break;
  default:
    this = (CachedUIResourcePtr *)&DAT_06ac0a30;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItem::RareBackgroundImage(int) */

void LimitGroupBuyGridItem::RareBackgroundImage(int param_1)

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
    this = (CachedUIResourcePtr *)&DAT_06ac0cb0;
    break;
  case 2:
    this = (CachedUIResourcePtr *)&DAT_06ac0a00;
    break;
  case 3:
    this = (CachedUIResourcePtr *)&DAT_06ac0c88;
    break;
  case 4:
    this = (CachedUIResourcePtr *)&DAT_06ac0c58;
    break;
  default:
    this = (CachedUIResourcePtr *)&DAT_06ac0a80;
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
/* LimitGroupBuyGridItem::ButtonDepress(int) */

void __thiscall LimitGroupBuyGridItem::ButtonDepress(LimitGroupBuyGridItem *this,int param_1)

{
  undefined *puVar1;
  int iVar2;
  UILimitGroupBuyDiscount *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  UILimitGroupBuyConfirm *pUVar6;
  size_t in_x2;
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  DropGroupNode aDStack_68 [8];
  string asStack_60 [40];
  TGASecretStore aTStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    if (*(int *)(this + 0xe8) == 1) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      iVar2 = PlayerInfo::GetMaterialNum(this_02,0xbc2);
      if (*(int *)(this + 0xec) == 0) {
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[PVZ_WORLDCUP_CANNOT_BUYTICKETS]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar3,awStack_70,awStack_78);
          std::string::string((string *)aTStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar4 = (Image *)StringHelper::ToImage((string *)aTStack_38,false);
          UIMessageBox::SetBackground(pUVar3,pIVar4);
          std::string::~string((string *)aTStack_38);
          nop();
          lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
          thunk_FUN_05477b9c(lVar5 + 0xd8,aDStack_68);
          FUN_05476c50(aDStack_68);
          FUN_05476c50(awStack_70);
          FUN_05476c50(awStack_78);
        }
      }
      else if (iVar2 < *(int *)(this + 0xf0)) {
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[GROUP_BUY_DAVE_TICKET_NOT_ENOUGH]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar3,awStack_70,awStack_78);
          std::string::string((string *)aTStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar4 = (Image *)StringHelper::ToImage((string *)aTStack_38,false);
          UIMessageBox::SetBackground(pUVar3,pIVar4);
          std::string::~string((string *)aTStack_38);
          nop();
          lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
          thunk_FUN_05477b9c(lVar5 + 0xd8,aDStack_68);
          FUN_05476c50(aDStack_68);
          FUN_05476c50(awStack_70);
          FUN_05476c50(awStack_78);
        }
      }
      else {
        GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
        pUVar6 = (UILimitGroupBuyConfirm *)UISingletonDialog<UILimitGroupBuyConfirm>::ShowDialog();
        FUN_05477b24(aDStack_68,auStack_10);
        UILimitGroupBuyConfirm::LoadData(pUVar6,this + 0xe0,aDStack_68);
        FUN_05476c50(aDStack_68);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aTStack_38);
      }
    }
    else {
      UISingletonDialog<UILimitGroupBuyDiscount>::ShowDialog();
      this_00 = (UILimitGroupBuyDiscount *)
                UISingletonDialog<UILimitGroupBuyDiscount>::GetSingletonPtr();
      UILimitGroupBuyDiscount::LoadData(this_00,(LimitGroupBuyItemInfo *)(this + 0xe0));
      DropGroupNode::DropGroupNode(aDStack_68);
      std::string::append((string *)aDStack_68,"2019_ARBOR_DAY",in_x2);
      std::string::append(asStack_60,"LOOK_GROUP_BUYING",in_x2);
      puVar1 = gMessageRouter;
      TGASecretStore::TGASecretStore(aTStack_38,(TGASecretStore *)aDStack_68);
      MessageRouter::Post<int,TrackInfo_const&,bool,int,TrackInfo,bool>
                ((MessageRouter *)puVar1,Message::CommonBuryInterface,0x93a,aTStack_38,0);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
      DropGroupNode::~DropGroupNode(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitGroupBuyGridItem::ButtonDepress(int) */

void __thiscall LimitGroupBuyGridItem::ButtonDepress(LimitGroupBuyGridItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItem::LoadData(LimitGroupBuyItemInfo const&) */

void __thiscall
LimitGroupBuyGridItem::LoadData(LimitGroupBuyGridItem *this,LimitGroupBuyItemInfo *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  long lVar8;
  wchar_t *pwVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  string *extraout_x1;
  long *plVar12;
  LimitGroupBuyGridItemUIButton *this_00;
  code *pcVar13;
  undefined1 auStack_a8 [8];
  string asStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  string asStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  uVar11 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xe8) = uVar11;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = FUN_039c2d44(0xc);
  iVar3 = FUN_039c2d44(0x16);
  iVar4 = FUN_039c2d44(0x3c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2,iVar3,iVar4,iVar4);
  *(ulong *)(this + 0x120) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x128) = uStack_38;
  iVar4 = FUN_039c2d44(8);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = *(int *)(this + 0x54);
  iVar5 = FUN_039c2d44(0x50);
  iVar6 = FUN_039c2d44(0x1e);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2 / 2 - iVar4,iVar3 / 2 - iVar4,iVar5,iVar6);
  iVar3 = *(int *)(this + 0x50);
  iVar4 = *(int *)(this + 0x54);
  *(ulong *)(this + 0x140) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x148) = uStack_38;
  iVar5 = FUN_039c2d44(5);
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  Sexy::Insets::Insets((Insets *)&local_40,iVar2 >> 2,(iVar6 >> 2) - iVar5,iVar3 / 2,iVar4 / 2);
  *(ulong *)(this + 0x108) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar3 = FUN_039c2d44(0xe);
  iVar4 = FUN_039c2d44(0x66);
  iVar5 = FUN_039c2d44(0x1e);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_039c2d44(0x17);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar2 - iVar5,iVar6);
  *(ulong *)(this + 0x158) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x160) = uStack_38;
  if (*(long *)(this + 0x178) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    *(undefined8 *)(this + 0x178) = 0;
  }
  iVar2 = *(int *)(this + 0xe8);
  if (iVar2 == 1) {
    this_00 = ::operator_new(0x340);
    LimitGroupBuyGridItemUIButton::LimitGroupBuyGridItemUIButton
              (this_00,3,(ButtonListener *)(this + 0xd8));
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf0));
    Sexy::ToSexyString((Sexy *)awStack_78,extraout_x1);
    LimitGroupBuyGridItemUIButton::setText((wstring *)this_00);
    FUN_05476c50((Insets *)&local_40);
    std::string::~string((string *)awStack_78);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0b88);
    LimitGroupBuyGridItemUIButton::setImage(this_00,(Insets *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    *(LimitGroupBuyGridItemUIButton **)(this + 0x178) = this_00;
LAB_039c6a28:
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac0aa8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac0d00,3);
    PVZ2UIButton::SetDialogStates
              ((PVZ2UIButton *)this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    plVar12 = *(long **)(this + 0x178);
    pcVar13 = *(code **)(*plVar12 + 800);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    (*pcVar13)(plVar12,uVar11);
    plVar12 = *(long **)(this + 0x178);
    pcVar13 = *(code **)(*plVar12 + 0x1a0);
    iVar3 = FUN_039c2d44(0x1e);
    iVar4 = FUN_039c2d44(0x23);
    iVar2 = *(int *)(this + 0x54);
    iVar5 = FUN_039c2d44(0x3c);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar3,iVar2 - iVar4,*(int *)(this + 0x50) - iVar5,iVar4);
    (*pcVar13)(plVar12,(Insets *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x178));
  }
  else if (iVar2 == 2) {
    pwVar9 = L"[GROUP_BUY_NOW]";
LAB_039c69e4:
    TodStringTranslate(pwVar9);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar10 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar10,3,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x178) = pPVar10;
    FUN_05476c50(awStack_78);
    this_00 = *(LimitGroupBuyGridItemUIButton **)(this + 0x178);
LAB_039c6a24:
    if (this_00 != (LimitGroupBuyGridItemUIButton *)0x0) goto LAB_039c6a28;
  }
  else {
    if (iVar2 == 3) {
      TodStringTranslate(L"[GROUP_BUY_BEEN]");
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar10 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar10,3,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
      *(PVZ2UIButton **)(this + 0x178) = pPVar10;
      FUN_05476c50(awStack_78);
      this_00 = *(LimitGroupBuyGridItemUIButton **)(this + 0x178);
      goto LAB_039c6a24;
    }
    if (iVar2 == 4) {
      pwVar9 = L"[VOTE]";
      goto LAB_039c69e4;
    }
  }
  if (*(int *)(this + 0xe0) == 0xfad) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0748);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0cd8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    TodStringTranslate(L"[COIN_STORE]");
    FUN_054766c8(this + 0xf8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::StrFormat(L"x%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0xe4));
    FUN_054766c8(this + 0x138,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    if (*(int *)(this + 0xec) < 0) {
      TodStringTranslate(L"[GROUP_BUY_CAN_EXCHANGE_UNLIMITED]");
      FUN_054766c8(this + 0x150,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
    }
    else {
      FUN_05478178(awStack_78,L"[GROUP_BUY_CAN_EXCHANGE]",awStack_80);
      TodReplaceNumberString(awStack_78,L"{NUMBER}",*(int *)(this + 0xec));
      FUN_054766c8(this + 0x150,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      FUN_05476c50(awStack_78);
      nop();
    }
    goto LAB_039c6650;
  }
  GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
  if (local_40 == 0) {
LAB_039c66e0:
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
    goto LAB_039c6650;
  }
  iVar2 = (int)this;
  if (iStack_3c == 4) {
    iVar3 = AvatarNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    }
    RareBackgroundImage(iVar2);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
    lVar8 = StringHelper::ToImage(asStack_20,false);
    if (lVar8 == 0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x118),(RtId *)awStack_78);
      Sexy::RtId::~RtId((RtId *)awStack_78);
    }
    thunk_FUN_05477b9c(this + 0xf8,auStack_18);
    if (*(int *)(this + 0xe8) != 1) goto LAB_039c6910;
LAB_039c67d0:
    if (*(int *)(this + 0xec) < 0) {
      TodStringTranslate(L"[GROUP_BUY_CAN_EXCHANGE_UNLIMITED]");
      FUN_054766c8(this + 0x150,awStack_78);
      FUN_05476c50(awStack_78);
    }
    else {
      FUN_05478178(awStack_80,L"[GROUP_BUY_CAN_EXCHANGE]",awStack_88);
      TodReplaceNumberString(awStack_80,L"{NUMBER}",*(int *)(this + 0xec));
      FUN_054766c8(this + 0x150,awStack_78);
      FUN_05476c50(awStack_78);
      FUN_05476c50(awStack_80);
      nop();
    }
  }
  else {
    if (4 < iStack_3c) {
      if (iStack_3c == 0x1000) {
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0a80);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78)
        ;
        thunk_FUN_05477b9c(this + 0xf8,auStack_18);
        lVar8 = NewAvatar::GetAvatarTinyImage(*(int *)(this + 0xe0));
        if (lVar8 != 0) goto LAB_039c6cbc;
LAB_039c6e7c:
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
      }
      else {
        if (iStack_3c != 0x2000) {
          if (iStack_3c != 8) goto LAB_039c66bc;
          iVar2 = AvatarChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar2);
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0a80);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
          thunk_FUN_05477b9c(this + 0xf8,auStack_18);
          lVar8 = StringHelper::ToImage(asStack_20,false);
          if (lVar8 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x118),(RtId *)awStack_78);
            Sexy::RtId::~RtId((RtId *)awStack_78);
          }
          if (1 < *(int *)(this + 0xe4)) {
            Sexy::StrFormat(L"x%d",(RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
            FUN_054766c8(this + 0x138,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
            FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
          }
          iVar2 = *(int *)(this + 0xe8);
          goto joined_r0x039c6bcc;
        }
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0a80);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78)
        ;
        thunk_FUN_05477b9c(this + 0xf8,auStack_18);
        lVar8 = NewAvatar::GetNewAvatarPieceImage(*(int *)(this + 0xe0));
        if (lVar8 == 0) goto LAB_039c6e7c;
LAB_039c6cbc:
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x118),(RtId *)awStack_78);
        Sexy::RtId::~RtId((RtId *)awStack_78);
      }
      if (1 < *(int *)(this + 0xe4)) {
        Sexy::StrFormat(L"x%d",awStack_78);
        FUN_054766c8(this + 0x138,awStack_78);
        FUN_05476c50(awStack_78);
      }
      if (*(int *)(this + 0xe8) == 1) {
        if (*(int *)(this + 0xec) < 0) {
          TodStringTranslate(L"[GROUP_BUY_CAN_EXCHANGE_UNLIMITED]");
          FUN_054766c8(this + 0x150,awStack_78);
          FUN_05476c50(awStack_78);
        }
        else {
          FUN_05478178(awStack_80,L"[GROUP_BUY_CAN_EXCHANGE]",awStack_88);
          TodReplaceNumberString(awStack_80,L"{NUMBER}",*(int *)(this + 0xec));
          FUN_054766c8(this + 0x150,awStack_78);
          FUN_05476c50(awStack_78);
          FUN_05476c50(awStack_80);
          nop();
        }
      }
      else {
        FUN_05478178(awStack_90,L"[GROUP_BUY_DESCRIPTION]",aRStack_98);
        TodReplaceNumberString(awStack_90,L"{NUMBER1}",*(int *)(this + 0xf0));
        TodReplaceNumberString
                  (awStack_88,L"{NUMBER2}",(*(int *)(this + 0xf0) * *(int *)(this + 0xec)) / 10);
        TodReplaceNumberString(awStack_80,L"{NUMBER3}",*(int *)(this + 0xec));
        FUN_054766c8(this + 0x150,awStack_78);
        FUN_05476c50(awStack_78);
        FUN_05476c50(awStack_80);
        FUN_05476c50(awStack_88);
        FUN_05476c50(awStack_90);
        nop();
      }
      goto LAB_039c66e0;
    }
    if (iStack_3c == 1) {
      iVar3 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_98);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      }
      RareBackgroundImage(iVar2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
      lVar8 = StringHelper::ToImage(asStack_20,false);
      if (lVar8 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x118));
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x118),(RtId *)awStack_78);
        Sexy::RtId::~RtId((RtId *)awStack_78);
      }
      thunk_FUN_05477b9c(this + 0xf8,auStack_18);
      LevelCornerMark(iVar2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
      iVar2 = *(int *)(this + 0xe8);
    }
    else {
      if (iStack_3c != 2) {
LAB_039c66bc:
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)awStack_78);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)awStack_78);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78)
        ;
        goto LAB_039c66e0;
      }
      this[0x169] = (LimitGroupBuyGridItem)0x1;
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ac0a80);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
      thunk_FUN_05477b9c(this + 0xf8,auStack_18);
      if (1 < *(int *)(this + 0xe4)) {
        Sexy::StrFormat(L"x%d",(RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
        FUN_054766c8(this + 0x138,(RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
        FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
      }
      thunk_FUN_05475e00(this + 0x170,auStack_30);
      iVar2 = *(int *)(this + 0xe8);
    }
joined_r0x039c6bcc:
    if (iVar2 == 1) goto LAB_039c67d0;
LAB_039c6910:
    FUN_05478178(awStack_90,L"[GROUP_BUY_DESCRIPTION]",auStack_a8);
    TodReplaceNumberString(awStack_90,L"{NUMBER1}",*(int *)(this + 0xf0));
    TodReplaceNumberString
              (awStack_88,L"{NUMBER2}",(*(int *)(this + 0xf0) * *(int *)(this + 0xec)) / 10);
    TodReplaceNumberString(awStack_80,L"{NUMBER3}",*(int *)(this + 0xec));
    FUN_054766c8(this + 0x150,awStack_78);
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_80);
    FUN_05476c50(awStack_88);
    FUN_05476c50(awStack_90);
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  std::string::~string(asStack_a0);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
LAB_039c6650:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitGroupBuyGridItem::Draw(Sexy::Graphics*) */

void __thiscall LimitGroupBuyGridItem::Draw(LimitGroupBuyGridItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar5;
  Image *pIVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x100));
  if (bVar2) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x100));
    iVar3 = FUN_039c2d44(5);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar3);
  }
  iVar3 = FUN_039c2d44(3);
  iVar4 = FUN_039c2d44(0x1a);
  Sexy::Insets::Insets(aIStack_28,0,iVar3,*(int *)(this + 0x50),iVar4);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Color::Color((Color *)aRStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar1,aRStack_18,2,1);
  if (this[0x169] == (LimitGroupBuyGridItem)0x0) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
    if (pRVar5 != (ResourceInfo *)0x0) {
      Sexy::Insets::Insets
                ((Insets *)aRStack_18,*(int *)(this + 0x108),*(int *)(this + 0x10c),
                 *(int *)(this + 0x110),*(int *)(this + 0x114));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
      DrawAdaptiveImage(param_1,aRStack_18,pRVar5);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x130));
      goto joined_r0x039c95d4;
    }
  }
  else {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x170));
    fVar9 = ((float)*(int *)(this + 0x110) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar8 = ((float)*(int *)(this + 0x114) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&iStack_30,aRStack_18);
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_30,&iStack_2c,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,
               (int)((float)*(int *)(this + 0x108) + (float)*(int *)(this_01 + 0x30) * fVar9),
               (int)((float)*(int *)(this + 0x10c) + (float)*(int *)(this_01 + 0x34) * fVar8),
               (int)(fVar9 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar8 * (float)*(int *)(this_01 + 0x2c)));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar5,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              ((Insets *)aRStack_18,
               (int)((float)*(int *)(this + 0x108) + (float)*(int *)(this_01 + 0x18) * fVar9),
               (int)((float)*(int *)(this + 0x10c) + (float)*(int *)(this_01 + 0x1c) * fVar8),
               (int)(fVar9 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar8 * (float)*(int *)(this_01 + 0x14)));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar5,(TRect *)aRStack_18,(TRect *)(this_01 + 8));
    }
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x130));
joined_r0x039c95d4:
  if (bVar2) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x130));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(this + 0x120),*(int *)(this + 0x124),
               *(int *)(this + 0x128),*(int *)(this + 300));
  }
  bVar2 = std::operator!=((wstring *)(this + 0x150),L"");
  if ((bVar2) && (this[0x168] == (LimitGroupBuyGridItem)0x0)) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0bc0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,*(int *)(this + 0x158),*(int *)(this + 0x15c),*(int *)(this + 0x160),
               *(int *)(this + 0x164));
    uVar1 = PrimeText_Game::Typeface_FZCuYuan_12_Outline;
    Sexy::Color::Color((Color *)aRStack_18,1);
    WriteWordInRect(param_1,(wstring *)(this + 0x150),this + 0x158,uVar1,aRStack_18,5,1);
  }
  bVar2 = std::operator!=((wstring *)(this + 0x138),L"");
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  if (bVar2) {
    Sexy::Color::Color((Color *)aRStack_18,0xff,0xff,0);
    WriteWordInRect(param_1,(wstring *)(this + 0x138),this + 0x140,uVar1,aRStack_18,5,1);
  }
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

