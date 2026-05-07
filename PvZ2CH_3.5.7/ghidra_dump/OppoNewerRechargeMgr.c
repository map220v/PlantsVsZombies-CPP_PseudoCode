// Class: OppoNewerRechargeMgr


/* OppoNewerRechargeMgr::~OppoNewerRechargeMgr() */

void __thiscall OppoNewerRechargeMgr::~OppoNewerRechargeMgr(OppoNewerRechargeMgr *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__OppoNewerRechargeMgr_066c8c30;
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 != 0x59) && (iVar1 = LawnApp::GetPlatform(gLawnApp), iVar1 != 0x25)) {
    Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton
              ((LazySingleton<OppoNewerRechargeMgr> *)this);
    return;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<OppoNewerRechargeMgr>::~LazySingleton
            ((LazySingleton<OppoNewerRechargeMgr> *)this);
  return;
}


/* OppoNewerRechargeMgr::~OppoNewerRechargeMgr() */

void __thiscall OppoNewerRechargeMgr::~OppoNewerRechargeMgr(OppoNewerRechargeMgr *this)

{
  ~OppoNewerRechargeMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerRechargeMgr::OppoNewerRechargeMgr() */

void __thiscall OppoNewerRechargeMgr::OppoNewerRechargeMgr(OppoNewerRechargeMgr *this)

{
  undefined *this_00;
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<OppoNewerRechargeMgr>::LazySingleton
            ((LazySingleton<OppoNewerRechargeMgr> *)this);
  *(undefined ***)this = &PTR__OppoNewerRechargeMgr_066c8c30;
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 == 0x59) || (iVar1 = LawnApp::GetPlatform(gLawnApp), iVar1 == 0x25)) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    uVar2 = PlayerInfo::GetNumTodayRechargeCurrency(this_02);
    *(undefined4 *)(this + 8) = uVar2;
    this_00 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNotifyOppoRechargeReward);
    Sexy::Delegate0::Delegate0<OppoNewerRechargeMgr,void(OppoNewerRechargeMgr::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)this_00,Message::GetOppoRechargeReward,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerRechargeMgr::onNotifyOppoRechargeReward() */

void __thiscall OppoNewerRechargeMgr::onNotifyOppoRechargeReward(OppoNewerRechargeMgr *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  OfferBundleConfig *pOVar8;
  long lVar9;
  NameMapperBase *pNVar10;
  string *psVar11;
  int *piVar12;
  ChristmasChargeReward *this_02;
  string asStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = PlayerInfo::GetNumTodayRechargeCurrency(this_01);
  pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  iVar4 = OfferBundleConfig::GetRechargeLevel(pOVar8,*(int *)(this + 8));
  pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  iVar5 = OfferBundleConfig::GetRechargeLevel(pOVar8,iVar3);
  *(int *)(this + 8) = iVar3;
  Set8BytesTo0(asStack_40);
  pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  lVar9 = FUN_03924b80(*(undefined8 *)(this_01 + 0x13d8));
  iVar3 = OfferBundleConfig::GetPlantIDByCreatedTime(pOVar8,lVar9);
  pNVar10 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar10,iVar3);
  if (cVar1 != '\0') {
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    FUN_05474278(asStack_40,(string *)&local_20);
    std::string::~string((string *)&local_20);
  }
  cVar1 = FUN_0547419c(asStack_40);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    pNVar10 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    uVar6 = NameMapperBase::GetIdForName(pNVar10,asStack_40);
    psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if ((cVar1 != '\0') && (iVar4 < iVar5)) {
      do {
        while( true ) {
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_30);
          local_30 = CONCAT44(local_30._4_4_,uVar6);
          pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          uVar7 = OfferBundleConfig::GetPlantPiecesRewardCount(pOVar8,*(int *)(lVar9 + 0xd0),iVar4);
          local_30 = CONCAT44(uVar7,(undefined4)local_30);
          std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::push_back
                    ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)&local_20,
                     (S2C_WechatReward *)&local_30);
          pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
          cVar1 = OfferBundleConfig::ShouldGetAvatarPieces(pOVar8,iVar4);
          if (cVar1 == '\0') break;
          iVar4 = iVar4 + 1;
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_28);
          pNVar10 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          uVar7 = NameMapperBase::GetIdForName(pNVar10,asStack_40);
          local_28 = CONCAT44(local_28._4_4_,uVar7);
          pOVar8 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
          uVar7 = OfferBundleConfig::GetAvatarPiecesRewardCount(pOVar8);
          local_28 = CONCAT44(uVar7,(undefined4)local_28);
          std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::push_back
                    ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)&local_20,
                     (S2C_WechatReward *)&local_28);
          if (iVar4 == iVar5) goto LAB_0392bc24;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar5);
    }
LAB_0392bc24:
    lVar9 = FUN_03924bb8(local_20,local_18);
    if (lVar9 != 0) {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        PlayerInfo::AddCommonGachaReward((int)this_01,*piVar12,SUB41(piVar12[1],0),false);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      this_02 = (ChristmasChargeReward *)
                UISingletonDialog<OppoNewerRechargeChargeReward>::ShowDialog();
      ChristmasChargeReward::loadData(this_02,(vector *)&local_20);
      ChristmasChargeReward::initView(this_02);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
              ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)&local_20);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

