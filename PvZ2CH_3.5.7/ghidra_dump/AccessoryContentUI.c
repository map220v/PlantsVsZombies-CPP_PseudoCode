// Class: AccessoryContentUI


/* AccessoryContentUI::ShowHintBox(int) */

void __thiscall AccessoryContentUI::ShowHintBox(AccessoryContentUI *this,int param_1)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      this[0xf1] = (AccessoryContentUI)0x1;
    }
    return;
  }
  this[0xf0] = (AccessoryContentUI)0x1;
  return;
}


/* AccessoryContentUI::HideHintBox(int) */

void __thiscall AccessoryContentUI::HideHintBox(AccessoryContentUI *this,int param_1)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      this[0xf1] = (AccessoryContentUI)0x0;
    }
    return;
  }
  this[0xf0] = (AccessoryContentUI)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::~AccessoryContentUI() */

void __thiscall AccessoryContentUI::~AccessoryContentUI(AccessoryContentUI *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0697d010;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697cce0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x1a0);
  std::string::~string((string *)(this + 0x198));
  std::string::~string((string *)(this + 400));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryContentUI::~AccessoryContentUI() */

void __thiscall AccessoryContentUI::~AccessoryContentUI(AccessoryContentUI *this)

{
  ~AccessoryContentUI(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryContentUI::ButtonPress(int) */

void __thiscall AccessoryContentUI::ButtonPress(AccessoryContentUI *this,int param_1)

{
  ProfileMgr *this_00;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  switch(param_1) {
  case 0xfa3:
  case 0xfa5:
  case 0xfa7:
    ShowHintBox(this,1);
    HideHintBox(this,2);
    return;
  case 0xfa4:
  case 0xfa6:
  case 0xfa8:
    ShowHintBox(this,2);
    HideHintBox(this,1);
    return;
  default:
    return;
  }
}


/* non-virtual thunk to AccessoryContentUI::ButtonPress(int) */

void __thiscall AccessoryContentUI::ButtonPress(AccessoryContentUI *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* AccessoryContentUI::ButtonDepress(int) */

void __thiscall AccessoryContentUI::ButtonDepress(AccessoryContentUI *this,int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlantSarracenia *this_02;
  NetworkMgr *this_03;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(this + 0xf4);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (PlantSarracenia *)LawnApp::GetAccessoryBonusUI(gLawnApp);
  switch(param_1) {
  case 4000:
    if (this_01 == (PlayerInfo *)0x0) {
      return;
    }
    if (this_02 == (PlantSarracenia *)0x0) {
      return;
    }
    cVar2 = PlantSarracenia::IsInSpecialStatus(this_02);
    if (cVar2 != '\0') {
      return;
    }
    HideHintBox(this,1);
    HideHintBox(this,2);
    iVar3 = *(int *)(this + 0xf4);
    goto LAB_04be7978;
  case 0xfa1:
    if (this_01 == (PlayerInfo *)0x0) {
      return;
    }
    if (this_02 == (PlantSarracenia *)0x0) {
      return;
    }
    cVar2 = PlantSarracenia::IsInSpecialStatus(this_02);
    if (cVar2 != '\0') {
      return;
    }
    HideHintBox(this,1);
    HideHintBox(this,2);
    iVar3 = PlayerInfo::GetNumGems(this_01,true);
    if ((iVar3 < *(int *)(this + 0xec)) ||
       (iVar3 = PlayerInfo::SubtractGems
                          (this_01,*(int *)(this + 0xec),-1,(ICloudRequestCallbackFunctionBase *)0x0
                           ,1,false), iVar3 < 0)) {
      uVar5 = 2;
      uVar6 = 1;
LAB_04be7a50:
      LawnApp::ShowGemStoreConfirm(gLawnApp,uVar5,uVar6);
      return;
    }
    break;
  case 0xfa2:
    if (this_01 == (PlayerInfo *)0x0) {
      return;
    }
    if (this_02 == (PlantSarracenia *)0x0) {
      return;
    }
    cVar2 = PlantSarracenia::IsInSpecialStatus(this_02);
    if (cVar2 != '\0') {
      return;
    }
    HideHintBox(this,1);
    HideHintBox(this,2);
    iVar3 = PlayerInfo::GetNumCoins(this_01,true);
    if ((iVar3 < *(int *)(this + 0xe8)) ||
       (iVar3 = PlayerInfo::SubtractCoins(this_01,*(int *)(this + 0xe8)), iVar3 == -1)) {
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_04be7a50;
    }
    break;
  case 0xfa3:
  case 0xfa4:
  case 0xfa5:
  case 0xfa6:
  case 0xfa7:
  case 0xfa8:
    HideHintBox(this,1);
    HideHintBox(this,2);
    return;
  default:
    goto switchD_04be7908_default;
  }
  iVar3 = *(int *)(this + 0xf4);
LAB_04be7978:
  RichmanTileEventManager::SetMoveTileIndex((RichmanTileEventManager *)this_02,iVar3);
  Sexy::PILayer::SetVisible((PILayer *)this_02,true);
  this_03 = (NetworkMgr *)NetworkMgr::Instance();
  plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
  if (*(code **)(*plVar4 + 0x2a0) != INetworkMsgProcess::ICloudRequestAccessoryStatBuy) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4,uVar1);
  }
switchD_04be7908_default:
  return;
}


/* non-virtual thunk to AccessoryContentUI::ButtonDepress(int) */

void __thiscall AccessoryContentUI::ButtonDepress(AccessoryContentUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::Draw(Sexy::Graphics*) */

void __thiscall AccessoryContentUI::Draw(AccessoryContentUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ResourceInfo *pRVar9;
  undefined8 uVar10;
  Image *pIVar11;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x178));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,*(int *)(this + 0x108),*(int *)(this + 0x10c));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x128));
  uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bde8);
  Draw9SliceImage(param_1,aIStack_18,uVar10);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0e0);
  Sexy::Graphics::DrawImage(param_1,pIVar11,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x180));
  if (bVar4) {
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x180));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,*(int *)(this + 0x138),*(int *)(this + 0x13c))
    ;
  }
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x188));
  if (bVar4) {
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x188));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar9,*(int *)(this + 0x148),*(int *)(this + 0x14c))
    ;
  }
  if (this[0xf0] != (AccessoryContentUI)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x158));
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0b8);
    Draw9SliceImage(param_1,aIStack_18,uVar10);
    iVar5 = FUN_04be7470(10);
    iVar1 = *(int *)(this + 0x158);
    iVar6 = FUN_04be7470(0xf);
    iVar2 = *(int *)(this + 0x15c);
    iVar7 = FUN_04be7470(0x14);
    iVar3 = *(int *)(this + 0x160);
    iVar8 = FUN_04be7470(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar5 + iVar1,iVar6 + iVar2,iVar3 - iVar7,*(int *)(this + 0x164) - iVar8);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1a0,aIStack_28,uVar10,aIStack_18,5,1);
  }
  if (this[0xf1] != (AccessoryContentUI)0x0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x168));
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0b8);
    Draw9SliceImage(param_1,aIStack_18,uVar10);
    iVar5 = FUN_04be7470(10);
    iVar1 = *(int *)(this + 0x168);
    iVar6 = FUN_04be7470(0xf);
    iVar2 = *(int *)(this + 0x16c);
    iVar7 = FUN_04be7470(0x14);
    iVar3 = *(int *)(this + 0x170);
    iVar8 = FUN_04be7470(0x1e);
    Sexy::Insets::Insets
              (aIStack_28,iVar5 + iVar1,iVar6 + iVar2,iVar3 - iVar7,*(int *)(this + 0x174) - iVar8);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1a8,aIStack_28,uVar10,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::InitView() */

void __thiscall AccessoryContentUI::InitView(AccessoryContentUI *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  ButtonListener *pBVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  ActivityConfig *this_04;
  NameMapperBase *pNVar17;
  SalesProgressBar *pSVar18;
  LotteryResultProgressBar *pLVar19;
  undefined8 uVar20;
  PVZ2UIButton *pPVar21;
  Image *pIVar22;
  UIWidgetImage *pUVar23;
  PlantAccessoryMgr *pPVar24;
  wchar_t *pwVar25;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  string *psVar26;
  int iVar27;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  long lVar28;
  code *pcVar29;
  RtWeakPtr *this_05;
  long lVar30;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  wstring awStack_a0 [8];
  wstring awStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  Sexy aSStack_78 [8];
  Sexy aSStack_70 [48];
  undefined8 local_40;
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x180);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x188);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  this[0xf3] = (AccessoryContentUI)0x0;
  this[0xf2] = (AccessoryContentUI)0x0;
  this[0x59] = (AccessoryContentUI)0x0;
  FUN_05476574(auStack_b0);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  this_04 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if ((this_04 == (ActivityConfig *)0x0) || (this_03 == (PlayerInfo *)0x0)) {
    iVar12 = 0;
    iVar16 = 0;
    iVar15 = iVar16;
  }
  else {
    iVar15 = PlayerInfo::GetChristmasAccessoryIndex(this_03,*(int *)(this + 0xf4),0);
    iVar16 = PlayerInfo::GetChristmasAccessoryIndex(this_03,*(int *)(this + 0xf4),1);
    uVar13 = ActivityConfig::GetChristmasAccessoryPrice(this_04,2);
    *(undefined4 *)(this + 0xe8) = uVar13;
    uVar13 = ActivityConfig::GetChristmasAccessoryPrice(this_04,3);
    *(undefined4 *)(this + 0xec) = uVar13;
    ActivityConfig::GetChristmasAccessoryIdByIndex(this_04,*(int *)(this + 0xf4),iVar15);
    *(undefined4 *)(this + 0xe0) = extraout_var;
    ActivityConfig::GetChristmasAccessoryIdByIndex(this_04,*(int *)(this + 0xf4),iVar16);
    iVar15 = *(int *)(this + 0xf4);
    *(undefined4 *)(this + 0xe4) = extraout_var_00;
    if (iVar15 == 2) {
      iVar12 = 0xfa6;
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8be38);
      iVar16 = 0xfa5;
      iVar15 = 0xfa2;
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      TodStringTranslate(L"[CHRISTMAS_ACCESSORY_COIN_BUTTON]");
      iVar11 = *(int *)(this + 0xe8);
      pwVar25 = L"{COINS}";
    }
    else {
      if (iVar15 != 3) {
        if (iVar15 == 1) {
          iVar16 = 0xfa3;
          iVar12 = 0xfa4;
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8c000);
          iVar15 = 4000;
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          TodStringTranslate(L"[CHRISTMAS_ACCESSORY_FREE_BUTTON]");
          FUN_054766c8(auStack_b0,
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
        }
        else {
          iVar12 = 0;
          *(undefined4 *)(this + 0xe0) = 0;
          iVar16 = 0;
          *(undefined4 *)(this + 0xe4) = 0;
          iVar15 = 0;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        goto LAB_04be8330;
      }
      iVar12 = 0xfa8;
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8c058);
      iVar16 = 0xfa7;
      iVar15 = 0xfa1;
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      TodStringTranslate(L"[CHRISTMAS_ACCESSORY_GEM_BUTTON]");
      iVar11 = *(int *)(this + 0xec);
      pwVar25 = L"{GEMS}";
    }
    TodReplaceNumberString((wstring *)aSStack_78,pwVar25,iVar11);
    FUN_054766c8(auStack_b0,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
    FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
    FUN_05476c50(aSStack_78);
  }
LAB_04be8330:
  this_05 = (RtWeakPtr *)(this + 0x178);
  pNVar17 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar17,*(int *)(this + 0xe0));
  if (cVar2 != '\0') {
    iVar11 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar11);
    FUN_05474278((string *)(this + 400),
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
    std::string::~string((string *)&local_40);
    psVar26 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::operator+((string *)(this + 400),"_piece");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar26);
    std::string::~string((string *)&local_40);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_78);
    if (cVar2 != '\0') {
      lVar28 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78)
      ;
      lVar28 = StringHelper::ToImage((string *)(lVar28 + 0x60),false);
      if (lVar28 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)this_00,(RtId *)&local_40);
        Sexy::RtId::~RtId((RtId *)&local_40);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
  }
  pNVar17 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar17,*(int *)(this + 0xe4));
  if (cVar2 != '\0') {
    iVar11 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar11);
    FUN_05474278((string *)(this + 0x198),
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
    std::string::~string((string *)&local_40);
    psVar26 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::operator+((string *)(this + 0x198),"_piece");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar26);
    std::string::~string((string *)&local_40);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_78);
    if (cVar2 != '\0') {
      lVar28 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78)
      ;
      lVar28 = StringHelper::ToImage((string *)(lVar28 + 0x60),false);
      if (lVar28 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_40);
        Sexy::RtId::~RtId((RtId *)&local_40);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
  }
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_05);
  if (bVar3) {
    iVar4 = FUN_04be7470(0x14);
    iVar11 = *(int *)(this + 0x104);
    pSVar18 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_05);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar18);
    pLVar19 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_05);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
    pSVar18 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_05);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar18);
    Sexy::Insets::Insets((Insets *)&local_40,iVar4,(iVar11 - iVar5) / 2,iVar6,iVar7);
    *(undefined8 *)(this + 0x108) = local_40;
    *(undefined8 *)(this + 0x110) = local_38[0];
  }
  iVar11 = *(int *)(this + 0x110);
  iVar4 = *(int *)(this + 0x108);
  iVar7 = FUN_04be7470(3);
  iVar5 = *(int *)(this + 0x10c);
  iVar6 = *(int *)(this + 0x114);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0e0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar18);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0e0);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0e0);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar18);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + iVar11 + iVar7,((iVar5 + iVar6) - iVar8) / 2,iVar9,iVar10);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = local_38[0];
  iVar11 = FUN_04be7470(4);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x118) + *(int *)(this + 0x120),iVar11,
             *(int *)(this + 0x100) - (*(int *)(this + 0x118) + *(int *)(this + 0x120)),
             *(int *)(this + 0x104) + iVar11 * -2);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = local_38[0];
  iVar6 = FUN_04be7470(0xf);
  iVar11 = *(int *)(this + 300);
  iVar4 = *(int *)(this + 0x128);
  iVar5 = *(int *)(this + 0x134);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar18);
  iVar8 = FUN_04be7470(4);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar18);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar4,(iVar11 + (iVar5 - iVar7) / 2) - iVar8 / 2,iVar9,
             iVar10);
  *(undefined8 *)(this + 0x140) = local_38[0];
  iVar11 = *(int *)(this + 0x140);
  *(undefined8 *)(this + 0x138) = local_40;
  iVar27 = (int)local_40;
  iVar6 = FUN_04be7470(0xf);
  iVar4 = *(int *)(this + 0x134);
  iVar5 = *(int *)(this + 300);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar18);
  iVar8 = FUN_04be7470(4);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c108);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar18);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar11 + iVar27 + iVar6,(iVar5 + (iVar4 - iVar7) / 2) - iVar8 / 2,
             iVar9,iVar10);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = local_38[0];
  this[0xf0] = (AccessoryContentUI)0x0;
  this[0xf1] = (AccessoryContentUI)0x0;
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c0b8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar4 = iVar5 * 3;
  iVar11 = *(int *)(this + 0x104);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x138) - (iVar4 - *(int *)(this + 0x140)) / 2,
             *(int *)(this + 0x13c),iVar4,iVar11);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = local_38[0];
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x148) + iVar5 * -3,*(int *)(this + 0x14c),iVar4,
             iVar11);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = local_38[0];
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be10);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar8 = FUN_04be7470(8);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8be10);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar18);
  iVar11 = *(int *)(this + 0x148);
  iVar4 = *(int *)(this + 0x150);
  iVar10 = FUN_04be7470(0xf);
  iVar5 = *(int *)(this + 0x134);
  iVar6 = *(int *)(this + 300);
  uVar20 = FUN_054766ec(auStack_b0);
  FUN_05478178(aSStack_78,uVar20,awStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar21 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar21,iVar15,pBVar1,(wstring *)aSStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1b0) = pPVar21;
  FUN_05476c50(aSStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x1b0) + 0x198))
            (*(long **)(this + 0x1b0),iVar11 + iVar4 + iVar10,iVar6 + (iVar5 - iVar9) / 2,
             iVar8 + (iVar7 * 3) / 2,iVar9);
  pPVar21 = *(PVZ2UIButton **)(this + 0x1b0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06b8be10,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8bfb0,2);
  PVZ2UIButton::SetDialogStates(pPVar21,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),0);
  lVar28 = *(long *)(this + 0x1b0);
  pcVar29 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar28 + 0x59) = 0;
  (*pcVar29)(this,lVar28);
  FUN_05478178(aSStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar21 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar21,iVar16,pBVar1,(wstring *)aSStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1b8) = pPVar21;
  FUN_05476c50(aSStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x1b8) + 0x1a0))(*(long **)(this + 0x1b8),this + 0x138);
  (**(code **)(**(long **)(this + 0x1b8) + 0x188))(*(long **)(this + 0x1b8),0);
  lVar28 = *(long *)(this + 0x1b8);
  pcVar29 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar28 + 0x59) = 0;
  (*pcVar29)(this,lVar28);
  FUN_05478178(aSStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar21 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar21,iVar12,pBVar1,(wstring *)aSStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x1c0) = pPVar21;
  FUN_05476c50(aSStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x1c0) + 0x1a0))(*(long **)(this + 0x1c0),this + 0x148);
  (**(code **)(**(long **)(this + 0x1c0) + 0x188))(*(long **)(this + 0x1c0),0);
  lVar28 = *(long *)(this + 0x1c0);
  pcVar29 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar28 + 0x59) = 0;
  (*pcVar29)(this,lVar28);
  pIVar22 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8beb0);
  pUVar23 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar23,pIVar22);
  lVar30 = *(long *)(this + 0x1b0);
  lVar28 = *(long *)pUVar23;
  *(UIWidgetImage **)(this + 0x1d0) = pUVar23;
  pcVar29 = *(code **)(lVar28 + 0x198);
  iVar12 = FUN_04be7470(5);
  iVar15 = *(int *)(lVar30 + 0x48);
  iVar11 = FUN_04be7470(0x14);
  iVar16 = *(int *)(lVar30 + 0x4c);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8beb0);
  uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8beb0);
  uVar14 = SalesProgressBar::GetCurrentLevel(pSVar18);
  (*pcVar29)(pUVar23,iVar12 + iVar15,iVar11 + iVar16,uVar13,uVar14);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1d0));
  (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
  pIVar22 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c090);
  pUVar23 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar23,pIVar22);
  lVar30 = *(long *)(this + 0x1b0);
  lVar28 = *(long *)pUVar23;
  *(UIWidgetImage **)(this + 0x1c8) = pUVar23;
  pcVar29 = *(code **)(lVar28 + 0x198);
  iVar12 = FUN_04be7470(0x16);
  iVar15 = *(int *)(lVar30 + 0x48);
  iVar11 = FUN_04be7470(0x14);
  iVar16 = *(int *)(lVar30 + 0x4c);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c090);
  uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c090);
  uVar14 = SalesProgressBar::GetCurrentLevel(pSVar18);
  (*pcVar29)(pUVar23,iVar12 + iVar15,iVar11 + iVar16,uVar13,uVar14);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c8));
  (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),0);
  pPVar24 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(pPVar24,(string *)(this + 400));
  Sexy::UTF8StringToWString(aSStack_78,extraout_x1);
  pwVar25 = (wchar_t *)FUN_054766ec(awStack_a0);
  TodStringTranslate(pwVar25);
  std::operator+(awStack_98,L"\n");
  Sexy::UTF8StringToWString(aSStack_70,extraout_x1_00);
  pwVar25 = (wchar_t *)FUN_054766ec(awStack_88);
  TodStringTranslate(pwVar25);
  std::operator+(awStack_90,awStack_80);
  FUN_054766c8(this + 0x1a0,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  FUN_05476c50(awStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  pPVar24 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(pPVar24,(string *)(this + 0x198));
  Sexy::UTF8StringToWString((Sexy *)&local_40,extraout_x1_01);
  pwVar25 = (wchar_t *)FUN_054766ec(auStack_a8);
  TodStringTranslate(pwVar25);
  std::operator+(awStack_a0,L"\n");
  Sexy::UTF8StringToWString((Sexy *)local_38,extraout_x1_02);
  pwVar25 = (wchar_t *)FUN_054766ec(awStack_90);
  TodStringTranslate(pwVar25);
  std::operator+(awStack_98,awStack_88);
  FUN_054766c8(this + 0x1a8,awStack_80);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  FUN_05476c50(awStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  FUN_05476c50(auStack_a8);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aSStack_78);
  FUN_05476c50(auStack_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::AccessoryContentUI(Sexy::TRect<int>, ACUI_Type) */

void __thiscall
AccessoryContentUI::AccessoryContentUI(AccessoryContentUI *this,TRect *param_2,undefined4 param_3)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0697cce0;
  *(undefined **)(this + 0xd8) = &DAT_0697d010;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  Set8BytesTo0(this + 400);
  Set8BytesTo0(this + 0x198);
  FUN_05476574(this + 0x1a0);
  FUN_05476574(this + 0x1a8);
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_Christmas");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(param_2 + 8),*(int *)(param_2 + 0xc));
  *(undefined8 *)(this + 0xf8) = local_18;
  *(undefined8 *)(this + 0x100) = uStack_10;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_2);
  *(undefined4 *)(this + 0xf4) = param_3;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::RefreshContent() */

void __thiscall AccessoryContentUI::RefreshContent(AccessoryContentUI *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  ActivityConfig *this_04;
  NameMapperBase *pNVar5;
  PlantAccessoryMgr *pPVar6;
  wchar_t *pwVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  string *psVar8;
  long lVar9;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  undefined1 auStack_a8 [8];
  wstring awStack_a0 [8];
  wstring awStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  Sexy aSStack_78 [16];
  Sexy aSStack_68 [40];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [16];
  Sexy aSStack_30 [40];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x180);
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x188);
  local_8 = ___stack_chk_guard;
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  this_04 = (ActivityConfig *)LawnApp::GetActivityConfig();
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  if ((this_04 == (ActivityConfig *)0x0) || (this_03 == (PlayerInfo *)0x0)) {
    pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,*(int *)(this + 0xe0));
  }
  else {
    iVar4 = PlayerInfo::GetChristmasAccessoryIndex(this_03,*(int *)(this + 0xf4),0);
    iVar2 = PlayerInfo::GetChristmasAccessoryIndex(this_03,*(int *)(this + 0xf4),1);
    uVar3 = ActivityConfig::GetChristmasAccessoryPrice(this_04,2);
    *(undefined4 *)(this + 0xe8) = uVar3;
    uVar3 = ActivityConfig::GetChristmasAccessoryPrice(this_04,3);
    *(undefined4 *)(this + 0xec) = uVar3;
    ActivityConfig::GetChristmasAccessoryIdByIndex(this_04,*(int *)(this + 0xf4),iVar4);
    *(undefined4 *)(this + 0xe0) = extraout_var;
    ActivityConfig::GetChristmasAccessoryIdByIndex(this_04,*(int *)(this + 0xf4),iVar2);
    *(undefined4 *)(this + 0xe4) = extraout_var_00;
    pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,*(int *)(this + 0xe0));
  }
  if (cVar1 == '\0') {
    pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,*(int *)(this + 0xe4));
  }
  else {
    iVar4 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    FUN_05474278((string *)(this + 400),a_Stack_40);
    std::string::~string((string *)a_Stack_40);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::operator+((string *)(this + 400),"_piece");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
    std::string::~string((string *)a_Stack_40);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_78);
    if (cVar1 != '\0') {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
      lVar9 = StringHelper::ToImage((string *)(lVar9 + 0x60),false);
      if (lVar9 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)this_00,(RtId *)a_Stack_40);
        Sexy::RtId::~RtId((RtId *)a_Stack_40);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
    pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,*(int *)(this + 0xe4));
  }
  if (cVar1 != '\0') {
    iVar4 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar4);
    FUN_05474278((string *)(this + 0x198),a_Stack_40);
    std::string::~string((string *)a_Stack_40);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    std::operator+((string *)(this + 0x198),"_piece");
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
    std::string::~string((string *)a_Stack_40);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aSStack_78);
    if (cVar1 != '\0') {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
      lVar9 = StringHelper::ToImage((string *)(lVar9 + 0x60),false);
      if (lVar9 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)a_Stack_40);
        Sexy::RtId::~RtId((RtId *)a_Stack_40);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
  }
  pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(pPVar6,(string *)(this + 400));
  Sexy::UTF8StringToWString(aSStack_78,extraout_x1);
  pwVar7 = (wchar_t *)FUN_054766ec(awStack_a0);
  TodStringTranslate(pwVar7);
  std::operator+(awStack_98,L"\n");
  Sexy::UTF8StringToWString(aSStack_68,extraout_x1_00);
  pwVar7 = (wchar_t *)FUN_054766ec(awStack_88);
  TodStringTranslate(pwVar7);
  std::operator+(awStack_90,awStack_80);
  FUN_054766c8(this + 0x1a0,a_Stack_40);
  FUN_05476c50(a_Stack_40);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  FUN_05476c50(awStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  pPVar6 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(pPVar6,(string *)(this + 0x198));
  Sexy::UTF8StringToWString((Sexy *)a_Stack_40,extraout_x1_01);
  pwVar7 = (wchar_t *)FUN_054766ec(auStack_a8);
  TodStringTranslate(pwVar7);
  std::operator+(awStack_a0,L"\n");
  Sexy::UTF8StringToWString(aSStack_30,extraout_x1_02);
  pwVar7 = (wchar_t *)FUN_054766ec(awStack_90);
  TodStringTranslate(pwVar7);
  std::operator+(awStack_98,awStack_88);
  FUN_054766c8(this + 0x1a8,awStack_80);
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  FUN_05476c50(awStack_90);
  FUN_05476c50(awStack_98);
  FUN_05476c50(awStack_a0);
  FUN_05476c50(auStack_a8);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)a_Stack_40);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aSStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryContentUI::Update() */

void __thiscall AccessoryContentUI::Update(AccessoryContentUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0xf2] == (AccessoryContentUI)0x0) {
    if (this[0xf3] == (AccessoryContentUI)0x0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if (this_01 == (PlayerInfo *)0x0) goto LAB_04bea47c;
      FUN_05476574(auStack_20);
      iVar1 = PlayerInfo::GetChristmasAccessoryChances(this_01,*(int *)(this + 0xf4));
      if (iVar1 < 1) {
        TodStringTranslate(L"[CHRISTMAS_ACCESSORY_SOLD_OUT_BUTTON]");
        FUN_054766c8(auStack_20,auStack_10);
        FUN_05476c50(auStack_10);
        (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
        (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),0);
        (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),1);
      }
      else {
        iVar1 = *(int *)(this + 0xf4);
        if (iVar1 == 2) {
          TodStringTranslate(L"[CHRISTMAS_ACCESSORY_COIN_BUTTON]");
          TodReplaceNumberString(awStack_18,L"{COINS}",*(int *)(this + 0xe8));
          FUN_054766c8(auStack_20,auStack_10);
          FUN_05476c50(auStack_10);
          FUN_05476c50(awStack_18);
          plVar4 = *(long **)(this + 0x1d0);
          uVar3 = 1;
LAB_04bea3a8:
          (**(code **)(*plVar4 + 0x158))(plVar4,uVar3);
          (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),0);
        }
        else {
          if (iVar1 != 3) {
            if (iVar1 == 1) {
              TodStringTranslate(L"[CHRISTMAS_ACCESSORY_FREE_BUTTON]");
              FUN_054766c8(auStack_20,auStack_10);
              FUN_05476c50(auStack_10);
            }
            plVar4 = *(long **)(this + 0x1d0);
            uVar3 = 0;
            goto LAB_04bea3a8;
          }
          TodStringTranslate(L"[CHRISTMAS_ACCESSORY_GEM_BUTTON]");
          TodReplaceNumberString(awStack_18,L"{GEMS}",*(int *)(this + 0xec));
          FUN_054766c8(auStack_20,auStack_10);
          FUN_05476c50(auStack_10);
          FUN_05476c50(awStack_18);
          (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
          (**(code **)(**(long **)(this + 0x1c8) + 0x158))(*(long **)(this + 0x1c8),1);
        }
        (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),0);
      }
      thunk_FUN_05477b9c(*(long *)(this + 0x1b0) + 0xd8,auStack_20);
      FUN_05476c50(auStack_20);
      goto LAB_04bea47c;
    }
    lVar2 = *(long *)(this + 0x1b0);
    TodStringTranslate(L"[ACTIVITY_CLOSED]");
    FUN_054766c8(lVar2 + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
    plVar4 = *(long **)(this + 0x1c8);
  }
  else {
    lVar2 = *(long *)(this + 0x1b0);
    TodStringTranslate(L"[NOT_CONNECTED]");
    FUN_054766c8(lVar2 + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    (**(code **)(**(long **)(this + 0x1d0) + 0x158))(*(long **)(this + 0x1d0),0);
    plVar4 = *(long **)(this + 0x1c8);
  }
  (**(code **)(*plVar4 + 0x158))(plVar4,0);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),1);
LAB_04bea47c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

