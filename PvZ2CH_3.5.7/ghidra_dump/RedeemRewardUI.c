// Class: RedeemRewardUI


/* RedeemRewardUI::updateRewardList(std::string const&, std::string const&, std::string const&) */

void __thiscall
RedeemRewardUI::updateRewardList
          (RedeemRewardUI *this,string *param_1,string *param_2,string *param_3)

{
  thunk_FUN_05475e00(this + 0x150);
  thunk_FUN_05475e00(this + 0x158,param_2);
  thunk_FUN_05475e00(this + 0x160,param_3);
  return;
}


/* RedeemRewardUI::calStartX(int) */

int __thiscall RedeemRewardUI::calStartX(RedeemRewardUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *pLVar4;
  
  iVar1 = *(int *)(this + 0x138);
  if ((param_1 & 1U) != 0) {
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    iVar3 = FUN_038f5410(0x3c);
    return (int)((float)(iVar1 / 2) - (float)(param_1 / 2) * (float)(iVar2 + iVar3));
  }
  pLVar4 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
  iVar3 = FUN_038f5410(0x3c);
  return (int)((float)(iVar1 / 2) - ((float)(param_1 / 2) + -0.5) * (float)(iVar2 + iVar3));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::RedeemRewardUI(std::string const&, std::string const&, std::string const&) */

void __thiscall
RedeemRewardUI::RedeemRewardUI(RedeemRewardUI *this,string *param_1,string *param_2,string *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *this_00;
  LawnApp *pLVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  PVZ2UIButton *this_01;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066be860;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066beb88;
  FUN_05476574(this + 0xe0);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  FUN_05475d88(this + 0x150,param_1);
  FUN_05475d88(this + 0x158,param_2);
  FUN_05475d88(this + 0x160,param_3);
  *(undefined8 *)(this + 0x168) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_World_Unlock_Pack");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_signReward");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_AwardDialog");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pLVar5 = gLawnApp;
  std::string::string((string *)&local_40,"UI_Universe_Map");
  LawnApp::LoadGroup(pLVar5,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  Sexy::Insets::Insets
            ((Insets *)&local_40,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  FUN_05478178(awStack_78,L"[COMPEN_OBTAIN]",auStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar6 = FUN_038f5410(0x96);
  iVar1 = *(int *)(this + 0x138);
  iVar2 = *(int *)(this + 0x13c);
  iVar3 = *(int *)(this + 0x130);
  iVar4 = *(int *)(this + 0x134);
  iVar7 = FUN_038f5410(0x4b);
  uVar8 = FUN_038f5410(0x3c);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,iVar3 + (iVar1 - iVar6) / 2,(iVar4 + iVar2) - iVar7,iVar6,uVar8);
  pcVar10 = *(code **)(*(long *)this_01 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar10)(this_01,uVar9);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab8868,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ab8978,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_01);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRedeemPlantTrialSuccess);
  Sexy::Delegate0::Delegate0<RedeemRewardUI,void(RedeemRewardUI::*)()>
            (aDStack_a8,(string *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantTrialPaySuccess,aDStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::OnRedeemPlantTrialSuccess() */

void __thiscall RedeemRewardUI::OnRedeemPlantTrialSuccess(RedeemRewardUI *this)

{
  string *psVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar6;
  PlantTrialConfig *pPVar7;
  long lVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar6 = PlayerInfo::GetPurchasedPlantTrialObj(this_01);
    pPVar7 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    FUN_05475d88(asStack_10,uVar6);
    lVar8 = PlantTrialConfig::GetTrialDataByPlantName(pPVar7,asStack_10);
    psVar1 = (string *)(lVar8 + 8);
    std::string::~string(asStack_10);
    puVar2 = gMessageRouter;
    FUN_05475d88(asStack_10,lVar8 + 0x28);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar2,Message::PlantTrialBuy,5,asStack_10);
    std::string::~string(asStack_10);
    iVar4 = PlantTrialViewUI::GetNeedTotalPiece
                      ((PlantTrialViewUI *)this,psVar1,*(int *)(lVar8 + 0x48));
    if (iVar4 != -1) {
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar1);
      if (cVar3 == '\0') {
        PlayerInfo::UnlockPlant(this_01,psVar1,false);
      }
      else {
        PlayerInfo::AddPlantPieceCount((string *)this_01,(int)psVar1,SUB41(iVar4,0));
        iVar5 = PlayerInfo::GetPlantStarLevel(this_01,psVar1,false);
        iVar5 = PlantTrialViewUI::GetNeedTotalPiece((PlantTrialViewUI *)this,psVar1,iVar5);
        PlayerInfo::SubPlantPieceCount(this_01,psVar1,iVar4 - iVar5);
      }
      PlayerInfo::PlantLevelUpCurrentLevel(this_01,psVar1,*(int *)(lVar8 + 0x48),false);
      if (0 < *(int *)(lVar8 + 100)) {
        PlayerInfo::AddCoins(this_01,*(int *)(lVar8 + 100));
      }
      if (0 < *(int *)(lVar8 + 0x60)) {
        PlayerInfo::AddKeys(this_01,(string *)(lVar8 + 0x30),*(int *)(lVar8 + 0x60));
      }
      PlayerInfo::RemovePlantTrialObj(this_01,psVar1);
      PlayerInfo::RemovePurchasedPlantTrialObj(this_01,psVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::~RedeemRewardUI() */

void __thiscall RedeemRewardUI::~RedeemRewardUI(RedeemRewardUI *this)

{
  LawnApp *pLVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066be860;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066beb88;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_World_Unlock_Pack");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_signReward");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)a_Stack_10,"UI_Universe_Map");
  LawnApp::DeleteGroup(pLVar1,(string *)a_Stack_10);
  std::string::~string((string *)a_Stack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::string::~string((string *)(this + 0x160));
  std::string::~string((string *)(this + 0x158));
  std::string::~string((string *)(this + 0x150));
  std::vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>>::~vector
            ((vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>> *)
             (this + 0x118));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xe8));
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedeemRewardUI::~RedeemRewardUI() */

void __thiscall RedeemRewardUI::~RedeemRewardUI(RedeemRewardUI *this)

{
  ~RedeemRewardUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::ButtonDepress(int) */

void __thiscall RedeemRewardUI::ButtonDepress(RedeemRewardUI *this,int param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar5;
  InvitationPlayerInfo *pIVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  string *psVar8;
  PurchaseBroker *pPVar9;
  MagentoProductProps *this_02;
  long lVar10;
  undefined8 uVar11;
  PlantTrialConfig *pPVar12;
  NetworkMgr *pNVar13;
  long *plVar14;
  string *extraout_x1;
  string *psVar15;
  string *extraout_x1_00;
  string *extraout_x1_01;
  code *pcVar16;
  float fVar17;
  undefined1 auVar18 [16];
  RtMixedPtrBase aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  string asStack_38 [8];
  PurchasedBundleInfo aPStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 1) goto LAB_038f62a8;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  psVar8 = (string *)(this + 0x158);
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_30);
  bVar1 = std::operator==(psVar8,"planttrial_special");
  if (bVar1) {
    uVar11 = PlayerInfo::GetPurchasedPlantTrialObj(this_01);
    pPVar12 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    FUN_05475d88((string *)local_50,uVar11);
    lVar10 = PlantTrialConfig::GetTrialDataByPlantName(pPVar12,(string *)local_50);
    std::string::~string((string *)local_50);
    thunk_FUN_05475e00(psVar8,lVar10 + 0x28);
  }
  cVar2 = PlayerInfo::GetBundleInPurchase(this_01,psVar8,aPStack_30,0);
  iVar4 = (int)this_01;
  if (cVar2 == '\0') {
    bVar1 = std::operator==(psVar8,"com.popcap.pvz2android.cukePackage");
    if ((bVar1) || (bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.CucumberBomb01"), bVar1)
       ) {
      PlayerInfo::setHasPurchaseCukePkg(this_01,true);
      lVar10 = LawnApp::GetActivityConfig();
      iVar4 = FUN_038f52d0(*(undefined4 *)(lVar10 + 0xc));
      std::string::string((string *)local_50,"poweruptacticalcuke");
      PlayerInfo::ModifyPowerupUses(this_01,(string *)local_50,iVar4);
      std::string::~string((string *)local_50);
      nop();
    }
    else {
      bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.diamonds.newer.present");
      if (bVar1) {
        std::string::string((string *)local_50,"repeater");
        cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)local_50);
        std::string::~string((string *)local_50);
        nop();
        if (cVar2 == '\0') {
          std::string::string((string *)local_50,"repeater");
          PlayerInfo::UnlockPlant(this_01,(string *)local_50,false);
          std::string::~string((string *)local_50);
          nop();
          std::string::string((string *)local_50,"repeater");
          PlayerInfo::AddPlantStartLevel(this_01,(string *)local_50,0);
          std::string::~string((string *)local_50);
          nop();
        }
        else {
          std::string::string(asStack_68,"iOS PvZ2 Plant Store");
          std::string::string(asStack_60,"Plant Pieces");
          std::string::string((string *)&local_58,"plant");
          std::string::string((string *)local_50,"repeater");
          Magento::FindStoreProduct
                    ((Magento *)asStack_68,asStack_60,(string *)&local_58,(string *)local_50,
                     asStack_60);
          std::string::~string((string *)local_50);
          nop();
          std::string::~string((string *)&local_58);
          nop();
          std::string::~string(asStack_60);
          nop();
          std::string::~string(asStack_68);
          nop();
          cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
          if (cVar2 != '\0') {
            std::string::string((string *)local_50,"repeater");
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
            PlayerInfo::AddPlantPieceCount
                      ((string *)this_01,
                       (int)(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                            local_50,SUB41(*(undefined4 *)(lVar10 + 0x90),0));
            std::string::~string((string *)local_50);
            nop();
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
        }
        PlayerInfo::AddGems(this_01,0x1e,true);
        PlayerInfo::AddCoins(this_01,10000);
      }
      else {
        bVar3 = std::operator==(psVar8,"com.popcap.chs.PVZ2.buy.mower");
        if (bVar3) {
          PlayerInfo::AddGems(this_01,0x1e,bVar1);
        }
        else {
          bVar1 = std::operator==(psVar8,"com.popcap.pvz2.battlez.1");
          if (bVar1) {
            Magento::GetProductPtr((Magento *)psVar8,extraout_x1_00);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_50);
            if (bVar1) {
              pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
              plVar14 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
              pcVar16 = *(code **)(*plVar14 + 0x240);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              (*pcVar16)(plVar14,2,*(undefined4 *)(lVar10 + 0x90),0);
            }
          }
          else {
            bVar1 = std::operator==(psVar8,"com.popcap.pvz2.battlez.6");
            if (!bVar1) {
              bVar3 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Lottery6");
              if (bVar3) {
                PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,bVar1);
                MessageRouter::Post<int,int,int,int>
                          ((MessageRouter *)gMessageRouter,Message::LimitLotteryBuyCoin,6,6000);
                pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
                plVar14 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
                (**(code **)(*plVar14 + 0x1a0))(plVar14,0x3c);
              }
              else {
                bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Lottery25");
                if (bVar1) {
                  PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,bVar3);
                  MessageRouter::Post<int,int,int,int>
                            ((MessageRouter *)gMessageRouter,Message::LimitLotteryBuyCoin,0x19,30000
                            );
                  pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
                  plVar14 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
                  (**(code **)(*plVar14 + 0x1a0))(plVar14,300);
                }
                else {
                  bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Richman1");
                  if (bVar1) {
                    PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,false);
                  }
                  else {
                    bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Richman12");
                    if (bVar1) {
                      PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,false);
                    }
                    else {
                      bVar3 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Richman88");
                      if (bVar3) {
                        PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,bVar1);
                      }
                      else {
                        bVar1 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Richman168");
                        if (bVar1) {
                          PlayerInfo::AddCommonGachaReward(iVar4,0xfad,true,bVar3);
                        }
                        else {
                          bVar3 = std::operator==(psVar8,"com.popcap.ios.chs.PVZ2.Richman248");
                          if (bVar3) {
                            PlayerInfo::AddCommonGachaReward(iVar4,0xfad,false,bVar1);
                          }
                          else {
                            lVar10 = FUN_05474374(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time"
                                                  ,0);
                            if (lVar10 == -1) {
                              std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::
                              vector((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                      *)local_50);
                              PlayerInfo::HandlePurchase(this_01,psVar8,(vector *)local_50);
                              std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::
                              ~vector((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *
                                      )local_50);
                            }
                            else {
                              bVar1 = std::operator==(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time1"
                                                  );
                              if (bVar1) {
                                PlayerInfo::AddGems(this_01,0x14,bVar3);
                              }
                              else {
                                bVar3 = std::operator==(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time2"
                                                  );
                                if (bVar3) {
                                  PlayerInfo::AddGems(this_01,0x28,bVar1);
                                }
                                else {
                                  bVar1 = std::operator==(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time3"
                                                  );
                                  if (bVar1) {
                                    PlayerInfo::AddGems(this_01,0x3c,bVar3);
                                  }
                                  else {
                                    bVar3 = std::operator==(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time4"
                                                  );
                                    if (bVar3) {
                                      PlayerInfo::AddGems(this_01,0x78,bVar1);
                                    }
                                    else {
                                      bVar1 = std::operator==(psVar8,
                                                  "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time5"
                                                  );
                                      if (bVar1) {
                                        PlayerInfo::AddGems(this_01,0xb4,false);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_038f63a0;
            }
            Magento::GetProductPtr((Magento *)psVar8,extraout_x1_01);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_50);
            if (bVar1) {
              pNVar13 = (NetworkMgr *)NetworkMgr::Instance();
              plVar14 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar13);
              pcVar16 = *(code **)(*plVar14 + 0x240);
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              (*pcVar16)(plVar14,2,*(undefined4 *)(lVar10 + 0x90),0);
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
          ;
        }
      }
    }
  }
  else {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar1)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      PlayerInfo::AddCommonGachaReward(iVar4,*piVar5,SUB41(piVar5[1],0),false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    PlayerInfo::RemoveBundleInPurchase(this_01,psVar8,0);
  }
LAB_038f63a0:
  auVar18 = FUN_05474374(psVar8,"com.popcap.ios.chs.PVZ2.worldunlockpack",0);
  psVar15 = auVar18._8_8_;
  if (auVar18._0_8_ != -1) {
    PlayerInfo::RemovePurchasedWorldMapInfo(this_01,psVar8);
    psVar15 = extraout_x1;
  }
  Magento::GetProductPtr((Magento *)psVar8,psVar15);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_58);
  if (bVar1) {
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar9 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var7);
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    fVar17 = (float)MagentoProductProps::GetPriceInUSD(this_02,false);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    FUN_05475d88((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50,
                 lVar10 + 0x10);
    PurchaseBroker::NDREChargeReward
              (pPVar9,(int)fVar17,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50);
    std::string::~string((string *)local_50);
  }
  if (*(long *)(this + 0x168) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x168));
    *(undefined8 *)(this + 0x168) = 0;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xe8));
  std::vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>>::clear
            ((vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>> *)
             (this + 0x118));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  (**(code **)(*(long *)this + 0x158))(this,0);
  pIVar6 = (InvitationPlayerInfo *)LawnApp::GetPaymentResultInfo(gLawnApp);
  InvitationPlayerInfo::InvitationPlayerInfo((InvitationPlayerInfo *)local_50,pIVar6);
  p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar8 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost(p_Var7);
  PurchaseBroker::Consume(psVar8,asStack_38);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_30);
LAB_038f62a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to RedeemRewardUI::ButtonDepress(int) */

void __thiscall RedeemRewardUI::ButtonDepress(RedeemRewardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::showRewardList() */

void __thiscall RedeemRewardUI::showRewardList(RedeemRewardUI *this)

{
  RedeemRewardUI *pRVar1;
  wstring *pwVar2;
  string *psVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined8 *puVar14;
  SalesProgressBar *this_03;
  NameMapperBase *pNVar15;
  undefined8 uVar16;
  PlantTrialConfig *pPVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ResourceInfo *pRVar20;
  PurchaseItemWidget *this_04;
  undefined1 auVar21 [16];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  PurchasedBundleInfo aPStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  pRVar1 = this + 0x150;
  pwVar2 = (wstring *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  lVar11 = FUN_05474374(pRVar1,&DAT_055cff18,0);
  lVar11 = lVar11 + 1;
  FUN_05475ffc(asStack_78,pRVar1,0);
  psVar3 = (string *)(this + 0x158);
  lVar12 = FUN_05474374(pRVar1,&DAT_055cff18,lVar11);
  lVar13 = lVar12 + 1;
  this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xe8);
  FUN_05475ffc(asStack_70,pRVar1,lVar11,lVar12 - lVar11);
  lVar11 = FUN_05474374(pRVar1,&DAT_055b4790,lVar13);
  FUN_05475ffc(asStack_68,pRVar1,lVar13,lVar11 - lVar13);
  lVar13 = FUN_05474184(pRVar1);
  FUN_05475ffc(asStack_60,pRVar1,lVar11 + 1,lVar13 - (lVar11 + 1));
  TodStringTranslate(L"[REDEEM_TIPS]");
  FUN_054766c8(pwVar2,aPStack_30);
  FUN_05476c50(aPStack_30);
  Sexy::ToWString(asStack_78);
  TodReplaceString(pwVar2,L"{YEAR}",(wstring *)&local_40);
  FUN_054766c8(pwVar2,aPStack_30);
  FUN_05476c50(aPStack_30);
  FUN_05476c50((string *)&local_40);
  Sexy::ToWString(asStack_70);
  TodReplaceString(pwVar2,L"{MONTH}",(wstring *)&local_40);
  FUN_054766c8(pwVar2,aPStack_30);
  FUN_05476c50(aPStack_30);
  FUN_05476c50((string *)&local_40);
  Sexy::ToWString(asStack_68);
  TodReplaceString(pwVar2,L"{DAY}",(wstring *)&local_40);
  FUN_054766c8(pwVar2,aPStack_30);
  FUN_05476c50(aPStack_30);
  FUN_05476c50((string *)&local_40);
  Sexy::ToWString(asStack_60);
  TodReplaceString(pwVar2,L"{TIME}",(wstring *)&local_40);
  FUN_054766c8(pwVar2,aPStack_30);
  FUN_05476c50(aPStack_30);
  FUN_05476c50((string *)&local_40);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_30);
  cVar4 = PlayerInfo::GetBundleInPurchase(this_02,psVar3,aPStack_30,0);
  if (cVar4 != '\0') {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar5)
    {
      puVar14 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      local_58 = *puVar14;
      local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                           ((FestivalTab *)&local_58,(ActivityTypeID *)((long)&local_58 + 4));
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
      insert<std::pair<int,int>,void>(this_00,(pair *)&local_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    goto LAB_038f7920;
  }
  bVar5 = std::operator==(psVar3,"com.popcap.pvz2android.cukePackage");
  if ((bVar5) || (bVar5 = std::operator==(psVar3,"com.popcap.ios.chs.PVZ2.CucumberBomb01"), bVar5))
  {
    lVar11 = LawnApp::GetActivityConfig();
    uVar9 = FUN_038f52d0(*(undefined4 *)(lVar11 + 0xc));
    local_50 = CONCAT44(local_50._4_4_,uVar9);
    local_48 = CONCAT44(local_48._4_4_,0x8a1);
    local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                         ((FestivalTab *)&local_48,(ActivityTypeID *)&local_50);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
    insert<std::pair<int,int>,void>(this_00,(pair *)&local_40);
    uVar6 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(this_00)
    ;
    goto joined_r0x038f7a50;
  }
  bVar5 = std::operator==(psVar3,"com.popcap.ios.chs.PVZ2.diamonds.newer.present");
  if (bVar5) {
    pNVar15 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    std::string::string((string *)&local_48,"repeater");
    uVar9 = NameMapperBase::GetIdForName(pNVar15,(string *)&local_48);
    local_58 = CONCAT44(local_58._4_4_,uVar9);
    local_50._0_4_ = 1;
    local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                         ((FestivalTab *)&local_58,(ActivityTypeID *)&local_50);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
    insert<std::pair<int,int>,void>(this_00,(pair *)&local_40);
    std::string::~string((string *)&local_48);
    nop();
    local_50._0_4_ = 0xbc0;
    local_48 = CONCAT44(local_48._4_4_,0x1e);
    local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                         ((FestivalTab *)&local_50,(ActivityTypeID *)&local_48);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
    insert<std::pair<GachaRewardCode,int>,void>(this_00,(pair *)&local_40);
    local_50 = CONCAT44(local_50._4_4_,0xfad);
    uVar9 = 10000;
LAB_038f7b54:
    local_48 = CONCAT44(local_48._4_4_,uVar9);
    local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                         ((FestivalTab *)&local_50,(ActivityTypeID *)&local_48);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
    insert<std::pair<GachaRewardCode,int>,void>(this_00,(pair *)&local_40);
  }
  else {
    bVar5 = std::operator==(psVar3,"com.popcap.chs.PVZ2.buy.mower");
    if (bVar5) {
      local_50 = CONCAT44(local_50._4_4_,0xbc0);
      uVar9 = 0x1e;
      goto LAB_038f7b54;
    }
    lVar11 = FUN_05474374(psVar3,"com.popcap.ios.chs.PVZ2.money.planttrial",0);
    if ((lVar11 != -1) || (bVar5 = std::operator==(psVar3,"planttrial_special"), bVar5)) {
      uVar16 = PlayerInfo::GetPurchasedPlantTrialObj(this_02);
      pPVar17 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
      FUN_05475d88((string *)&local_40,uVar16);
      lVar11 = PlantTrialConfig::GetTrialDataByPlantName(pPVar17,(string *)&local_40);
      psVar3 = (string *)(lVar11 + 8);
      std::string::~string((string *)&local_40);
      iVar7 = PlantTrialViewUI::GetNeedTotalPiece
                        ((PlantTrialViewUI *)this,psVar3,*(int *)(lVar11 + 0x48));
      if (0 < iVar7) {
        cVar4 = PlayerInfo::GetIsPlantUnlocked(this_02,psVar3);
        if (cVar4 == '\0') {
          pNVar15 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
          uVar9 = NameMapperBase::GetIdForName(pNVar15,psVar3);
          local_50 = CONCAT44(local_50._4_4_,uVar9);
          local_48 = CONCAT44(local_48._4_4_,1);
        }
        else {
          iVar10 = PlayerInfo::GetPlantStarLevel(this_02,psVar3,false);
          iVar10 = PlantTrialViewUI::GetNeedTotalPiece((PlantTrialViewUI *)this,psVar3,iVar10);
          pNVar15 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          uVar9 = NameMapperBase::GetIdForName(pNVar15,psVar3);
          local_50 = CONCAT44(local_50._4_4_,uVar9);
          local_48 = CONCAT44(local_48._4_4_,iVar7 - iVar10);
        }
        local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                             ((FestivalTab *)&local_50,(ActivityTypeID *)&local_48);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
        insert<std::pair<int,int>,void>(this_00,(pair *)&local_40);
      }
      if (0 < *(int *)(lVar11 + 100)) {
        local_48 = CONCAT44(local_48._4_4_,0xfad);
        local_40 = std::make_pair<FestivalTab,ActivityTypeID>
                             ((FestivalTab *)&local_48,(ActivityTypeID *)(lVar11 + 100));
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
        insert<std::pair<GachaRewardCode,int>,void>(this_00,(pair *)&local_40);
      }
      if (0 < *(int *)(lVar11 + 0x60)) {
        FUN_05475d88((string *)&local_40,lVar11 + 0x30);
        local_38 = *(undefined4 *)(lVar11 + 0x60);
        std::vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>>::push_back
                  ((vector<RedeemRewardUI::KeyInfo,std::allocator<RedeemRewardUI::KeyInfo>> *)
                   (this + 0x118),(KeyInfo *)&local_40);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_40);
      }
    }
    else {
      lVar11 = FUN_05474374(psVar3,"com.popcap.ios.chs.PVZ2.worldunlockpack",0);
      if (lVar11 == -1) {
        auVar21 = FUN_05474374(psVar3,"com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time",0);
        if (auVar21._0_8_ != -1) {
          bVar5 = std::operator==(psVar3,"com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time1");
          if (bVar5) {
            local_50 = CONCAT44(local_50._4_4_,0xbc0);
            uVar9 = 0x14;
          }
          else {
            bVar5 = std::operator==(psVar3,"com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time2")
            ;
            if (bVar5) {
              local_50 = CONCAT44(local_50._4_4_,0xbc0);
              uVar9 = 0x28;
            }
            else {
              bVar5 = std::operator==(psVar3,
                                      "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time3");
              if (bVar5) {
                local_50 = CONCAT44(local_50._4_4_,0xbc0);
                uVar9 = 0x3c;
              }
              else {
                bVar5 = std::operator==(psVar3,
                                        "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time4");
                if (bVar5) {
                  local_50 = CONCAT44(local_50._4_4_,0xbc0);
                  uVar9 = 0x78;
                }
                else {
                  bVar5 = std::operator==(psVar3,
                                          "com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time5");
                  if (!bVar5) goto LAB_038f7920;
                  local_50 = CONCAT44(local_50._4_4_,0xbc0);
                  uVar9 = 0xb4;
                }
              }
            }
          }
          goto LAB_038f7b54;
        }
        Magento::GetProduct((Magento *)psVar3,auVar21._8_8_);
        bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_40);
        if (bVar5) {
          pRVar20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_40);
          this_04 = ::operator_new(0x118);
          PurchaseItemWidget::PurchaseItemWidget(this_04,(MagentoProductProps *)pRVar20);
          *(PurchaseItemWidget **)(this + 0x168) = this_04;
          (**(code **)(*(long *)this + 0x60))(this,this_04);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      else {
        lVar11 = PlayerInfo::GetPurchasedWorldMapInfo(this_02,psVar3);
        if (lVar11 != 0) {
          bVar5 = std::operator==(psVar3,"com.popcap.ios.chs.PVZ2.worldunlockpack1");
          if (bVar5) {
            uVar16 = FUN_0547429c(lVar11 + 8);
            Sexy::StrFormat("IMAGE_UI_WORLD_UNLOCK_PACK_%s_%d",&local_48,uVar16,2);
            uVar16 = FUN_05474e7c(&local_48);
            uVar18 = FUN_05474eb0(&local_48);
            uVar19 = FUN_05474e7c(&local_48);
            FUN_038f55e0(uVar16,uVar18,uVar19);
LAB_038f7d90:
            LawnApp::GetUIImageFromStringId((string *)gLawnApp);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            std::string::~string((string *)&local_48);
          }
          else {
            bVar5 = std::operator==(psVar3,"com.popcap.ios.chs.PVZ2.worldunlockpack2");
            if (bVar5) {
              uVar16 = FUN_0547429c(lVar11 + 8);
              Sexy::StrFormat("IMAGE_UI_WORLD_UNLOCK_PACK_%s_%d",&local_48,uVar16,2);
              uVar16 = FUN_05474e7c(&local_48);
              uVar18 = FUN_05474eb0(&local_48);
              uVar19 = FUN_05474e7c(&local_48);
              FUN_038f5664(uVar16,uVar18,uVar19);
              goto LAB_038f7d90;
            }
            bVar5 = std::operator==(psVar3,"com.popcap.ios.chs.PVZ2.worldunlockpack3");
            if (bVar5) {
              uVar16 = FUN_0547429c(lVar11 + 8);
              Sexy::StrFormat("IMAGE_UI_WORLD_UNLOCK_PACK_%s_%d",&local_48,uVar16,1);
              uVar16 = FUN_05474e7c(&local_48);
              uVar18 = FUN_05474eb0(&local_48);
              uVar19 = FUN_05474e7c(&local_48);
              FUN_038f56e8(uVar16,uVar18,uVar19);
              goto LAB_038f7d90;
            }
          }
          lVar11 = PlayerInfo::GetPurchasedWorldMapInfo(this_02,psVar3);
          if (lVar11 != 0) {
            std::string::string((string *)&local_40,"redeemWorldUnlockPack");
            std::operator+(psVar3,":");
            std::operator+((string *)&local_50,(string *)(lVar11 + 8));
            Cpp2Lua<std::string>((string *)&local_40,(string *)&local_48);
            std::string::~string((string *)&local_48);
            std::string::~string((string *)&local_50);
            std::string::~string((string *)&local_40);
            nop();
          }
        }
      }
    }
  }
LAB_038f7920:
  uVar6 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(this_00);
joined_r0x038f7a50:
  if ((int)uVar6 < 5) {
    *(uint *)(this + 0x148) = uVar6;
    *(int *)(this + 0x144) = *(int *)(this + 0x13c) / 2;
  }
  else {
    iVar7 = (int)uVar6 >> 1;
    if ((uVar6 & 1) != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar10 = *(int *)(this + 0x13c);
    *(int *)(this + 0x148) = iVar7;
    this_03 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_03);
    iVar8 = FUN_038f5410(0x32);
    *(int *)(this + 0x144) = iVar10 / 2 - (iVar7 + iVar8) / 2;
  }
  (**(code **)(*(long *)this + 0x158))(this,1);
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_30);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall RedeemRewardUI::DrawAll(RedeemRewardUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_00;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab87b0);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab87b0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab87b0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(TRect *)(this + 0x130),(TRect *)aIStack_18);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8af0);
  iVar1 = *(int *)(this + 0x50);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8af0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar3 = FUN_038f5410(0x28);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(iVar1 - iVar2) / 2,iVar3 + *(int *)(this + 0x134));
  pcVar7 = *(code **)(*(long *)this + 0x290);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  iVar2 = FUN_038f5410(0x3c);
  iVar1 = *(int *)(this + 0x134);
  TodStringTranslate(L"[REDEEM_REWARD_TITLE]");
  (*pcVar7)(this,param_2,uVar6,aIStack_18,iVar2 + iVar1,auStack_20);
  FUN_05476c50(auStack_20);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedeemRewardUI::Draw(Sexy::Graphics*) */

void __thiscall RedeemRewardUI::Draw(RedeemRewardUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  PrimeTypeface *pPVar15;
  SalesProgressBar *pSVar16;
  int *piVar17;
  LotteryResultProgressBar *pLVar18;
  NameMapperBase *this_01;
  string *psVar19;
  long lVar20;
  ulong uVar21;
  CachedUIResourcePtr<Sexy::Image> *pCVar22;
  Image *pIVar23;
  SeedPacketUtils *this_02;
  ResourceInfo *pRVar24;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  long *plVar25;
  int iVar26;
  code *pcVar27;
  ulong uVar28;
  float fVar29;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_03;
  undefined1 auVar30 [16];
  uint local_a8;
  RtWeakPtr aRStack_90 [8];
  undefined8 local_88;
  int local_80 [2];
  Insets aIStack_78 [16];
  Color aCStack_68 [16];
  RtMixedPtrBase aRStack_58 [16];
  Insets aIStack_48 [16];
  undefined8 local_38 [5];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_038f5410(0x19);
  iVar11 = *(int *)(this + 0x130);
  iVar5 = FUN_038f5410(0x87);
  psVar19 = (string *)(this + 0x158);
  iVar26 = *(int *)(this + 0x134);
  iVar6 = FUN_038f5410(0x32);
  iVar8 = *(int *)(this + 0x138);
  iVar7 = FUN_038f5410(0x3c);
  Sexy::Insets::Insets(aIStack_78,iVar4 + iVar11,iVar5 + iVar26,iVar8 - iVar6,iVar7);
  Sexy::Color::Color(aCStack_68,0xff,0xd8,0xa6);
  pcVar27 = *(code **)(*(long *)this + 0x2a8);
  uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)local_38,(Insets *)aCStack_68);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  fVar29 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar15);
  (*pcVar27)(this,param_1,uVar14,(Insets *)local_38,aIStack_78,this + 0xe0,(int)fVar29,0);
  bVar1 = std::operator==(psVar19,"com.popcap.chs.PVZ2.buy.mower");
  if (bVar1) {
    iVar4 = FUN_038f5410(0x19);
    iVar11 = *(int *)(this + 0x130);
    iVar5 = FUN_038f5410(200);
    iVar26 = *(int *)(this + 0x134);
    iVar6 = FUN_038f5410(0x32);
    iVar8 = *(int *)(this + 0x138);
    iVar7 = FUN_038f5410(0x3c);
    Sexy::Insets::Insets(aIStack_48,iVar4 + iVar11,iVar5 + iVar26,iVar8 - iVar6,iVar7);
    pcVar27 = *(code **)(*(long *)this + 0x2a8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Insets::Insets((Insets *)local_38,(Insets *)aCStack_68);
    TodStringTranslate(L"[REDEEM_SPECIAL_TIPS1]");
    pPVar15 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    fVar29 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar15);
    (*pcVar27)(this,param_1,uVar14,(Insets *)local_38,aIStack_48,aRStack_58,(int)fVar29,0);
    FUN_05476c50(aRStack_58);
  }
  else {
    auVar30 = FUN_05474374(psVar19,"com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time",0);
    if (auVar30._0_8_ == -1) {
      Magento::GetProduct((Magento *)psVar19,auVar30._8_8_);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
      if (bVar1) {
        iVar4 = FUN_038f5410(0x19);
        iVar11 = *(int *)(this + 0x130);
        iVar5 = FUN_038f5410(200);
        iVar26 = *(int *)(this + 0x134);
        iVar6 = FUN_038f5410(0x32);
        iVar8 = *(int *)(this + 0x138);
        iVar7 = FUN_038f5410(0x3c);
        Sexy::Insets::Insets(aIStack_48,iVar4 + iVar11,iVar5 + iVar26,iVar8 - iVar6,iVar7);
        pcVar27 = *(code **)(*(long *)this + 0x2a8);
        uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Insets::Insets((Insets *)local_38,(Insets *)aCStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString((Sexy *)&local_88,extraout_x1_01);
        TodStringTranslate((wstring *)local_80);
        pPVar15 = (PrimeTypeface *)
                  PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        fVar29 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar15);
        (*pcVar27)(this,param_1,uVar14,(Insets *)local_38,aIStack_48,aRStack_58,(int)fVar29,0);
        FUN_05476c50(aRStack_58);
        FUN_05476c50((wstring *)local_80);
        std::string::~string((string *)&local_88);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    }
    else {
      iVar4 = FUN_038f5410(0x19);
      iVar11 = *(int *)(this + 0x130);
      iVar5 = FUN_038f5410(200);
      iVar26 = *(int *)(this + 0x134);
      iVar6 = FUN_038f5410(0x32);
      iVar8 = *(int *)(this + 0x138);
      iVar7 = FUN_038f5410(0x3c);
      Sexy::Insets::Insets(aIStack_48,iVar4 + iVar11,iVar5 + iVar26,iVar8 - iVar6,iVar7);
      TodStringTranslate(L"[REDEEM_SPECIAL_TIPS2]");
      lVar20 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          (this + 0xe8));
      if (lVar20 != 0) {
        local_80[0] = 0xbc0;
        piVar17 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                     *)(this + 0xe8),local_80);
        TodReplaceNumberString((wstring *)aRStack_58,L"{QUANTITY}",*piVar17);
        FUN_054766c8((wstring *)aRStack_58,(Insets *)local_38);
        FUN_05476c50((Insets *)local_38);
      }
      pcVar27 = *(code **)(*(long *)this + 0x2a8);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Insets::Insets((Insets *)local_38,(Insets *)aCStack_68);
      pPVar15 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      fVar29 = (float)Sexy::PrimeTypeface::GetLineSpacing(pPVar15);
      (*pcVar27)(this,param_1,uVar14,(Insets *)local_38,aIStack_48,(wstring *)aRStack_58,(int)fVar29
                 ,0);
      FUN_05476c50((wstring *)aRStack_58);
    }
  }
  this_03 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xe8);
  iVar11 = 0;
  bVar1 = true;
  iVar8 = calStartX(this,*(int *)(this + 0x148));
  iVar26 = *(int *)(this + 0x144);
  local_88 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       (this_03);
  while( true ) {
    local_38[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_03);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)local_38);
    if (!bVar2) break;
    piVar17 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
    GetGameItemInfo(*piVar17,0x7fffffff,0);
    if ((int)local_38[0] != 0) {
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar4 = iVar8 - iVar4 / 2;
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
      iVar5 = iVar26 - iVar5 / 2;
      if ((int)local_38[0] == 0xbc0) {
        pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets((Insets *)aRStack_58,iVar4,iVar5,iVar6,iVar7);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets(aIStack_48,0,0,iVar5,iVar6);
        Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aRStack_58,(TRect *)aIStack_48);
      }
      else if ((int)local_38[0] == 0xfad) {
        pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8908);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets((Insets *)aRStack_58,iVar4,iVar5,iVar6,iVar7);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8908);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8908);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets(aIStack_48,0,0,iVar5,iVar6);
        Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aRStack_58,(TRect *)aIStack_48);
      }
      else {
        this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        cVar3 = NameMapperBase::ContainsId(this_01,(int)local_38[0]);
        if (cVar3 == '\0') {
          LawnApp::GetUIImageFromStringId(gLawnApp);
          pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_48);
          if (pRVar24 != (ResourceInfo *)0x0) {
            pLVar18 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
            iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
            pSVar16 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
            iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
            Sexy::Insets::Insets((Insets *)aRStack_58,iVar4,iVar5,iVar6,iVar7);
            iVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pRVar24);
            iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pRVar24);
            Sexy::Insets::Insets(aIStack_48,0,0,iVar5,iVar6);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar24,(TRect *)aRStack_58,(TRect *)aIStack_48);
          }
        }
        else {
          psVar19 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar19);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
          if (cVar3 != '\0') {
            this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
            lVar20 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            lVar20 = SeedPacketUtils::GetPlantPiecePacketRenderData(this_02,(string *)(lVar20 + 8));
            iVar6 = *(int *)(lVar20 + 0x10);
            iVar7 = *(int *)(lVar20 + 0x14);
            iVar9 = *(int *)(lVar20 + 0x28);
            iVar10 = *(int *)(lVar20 + 0x2c);
            pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar20 + 0x170))
            ;
            Sexy::Insets::Insets
                      (aIStack_48,iVar4 + *(int *)(lVar20 + 0x30),iVar5 + *(int *)(lVar20 + 0x34),
                       iVar9,iVar10);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar24,(TRect *)aIStack_48,(TRect *)(lVar20 + 0x20));
            pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar20 + 0x170))
            ;
            Sexy::Insets::Insets
                      (aIStack_48,iVar4 + *(int *)(lVar20 + 0x18),iVar5 + *(int *)(lVar20 + 0x1c),
                       iVar6,iVar7);
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar24,(TRect *)aIStack_48,(TRect *)(lVar20 + 8));
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        }
      }
      lVar20 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
      Sexy::StrFormat("X%d",(Sexy *)aRStack_58,(ulong)*(uint *)(lVar20 + 4));
      Sexy::ToSexyString((Sexy *)aRStack_58,extraout_x1);
      std::operator+(awStack_10,(wstring *)aIStack_48);
      FUN_05476c50((wstring *)aIStack_48);
      std::string::~string((string *)aRStack_58);
      uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
      iVar5 = FUN_038f5410(0x14);
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
      iVar7 = FUN_038f5410(10);
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar10 = FUN_038f5410(0x28);
      FUN_05477b24((Sexy *)aRStack_58,local_80);
      Sexy::Color::Color((Color *)aIStack_48,1);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)(iVar4 - iVar5),(float)(iVar26 + iVar6 / 2 + iVar7),
                 (float)(iVar9 + iVar10),uVar14,param_1,(Sexy *)aRStack_58,1,(wstring *)aIStack_48,0
                );
      FUN_05476c50((Sexy *)aRStack_58);
      FUN_05476c50(local_80);
    }
    iVar11 = iVar11 + 1;
    if ((bVar1) && (iVar4 = *(int *)(this + 0x148), iVar4 <= iVar11)) {
      bVar1 = false;
      iVar8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                        (this_03);
      iVar8 = calStartX(this,iVar8 - iVar4);
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar16);
      iVar5 = FUN_038f5410(0x32);
      iVar26 = iVar26 + iVar4 + iVar5;
    }
    else {
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar5 = FUN_038f5410(0x3c);
      iVar8 = iVar8 + iVar4 + iVar5;
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_88);
  }
  uVar28 = 0;
  do {
    uVar21 = FUN_038f52d4(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
    if (uVar21 <= uVar28) {
      this_00 = (RtWeakPtr *)(this + 0x170);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        pLVar18 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar16);
        pRVar24 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        pLVar18 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar24,iVar8 - iVar11 / 2,iVar26 - iVar4 / 2,iVar5 / 2,
                   iVar6 / 2);
      }
      if (*(long *)(this + 0x168) != 0) {
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar16);
        plVar25 = *(long **)(this + 0x168);
        pcVar27 = *(code **)(*plVar25 + 0x198);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        uVar13 = SalesProgressBar::GetCurrentLevel(pSVar16);
        (*pcVar27)(plVar25,iVar8 - iVar11 / 2,iVar26 - iVar4 / 2,uVar12,uVar13);
      }
      nop();
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pLVar18 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
    iVar4 = iVar8 - iVar4 / 2;
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar5 = iVar26 - iVar5 / 2;
    psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
    bVar2 = std::operator==(psVar19,"egypt");
    if (bVar2) {
      pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8760);
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
      Sexy::Insets::Insets(aIStack_48,iVar4,iVar5,iVar6,iVar7);
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
      Sexy::Insets::Insets((Insets *)local_38,0,0,iVar5,iVar6);
      Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aIStack_48,(TRect *)local_38);
    }
    else {
      psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
      bVar2 = std::operator==(psVar19,"pirate");
      local_a8 = (uint)bVar2;
      if (bVar2) {
        pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8938;
LAB_038f8a6c:
        pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar22);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets(aIStack_48,iVar4,iVar5,iVar6,iVar7);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets((Insets *)local_38,0,0,iVar5,iVar6);
        Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aIStack_48,(TRect *)local_38);
      }
      else {
        psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
        bVar2 = std::operator==(psVar19,"cowboy");
        if (bVar2) {
          pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8800;
        }
        else {
          psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
          bVar2 = std::operator==(psVar19,"kongfu");
          if (bVar2) {
            pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8aa0;
            goto LAB_038f8a6c;
          }
          psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
          bVar2 = std::operator==(psVar19,"dark");
          if (bVar2) {
            pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8a48;
            local_a8 = 0;
          }
          else {
            psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
            bVar2 = std::operator==(psVar19,"future");
            if (bVar2) {
              pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89a0;
              goto LAB_038f8a6c;
            }
            psVar19 = (string *)FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
            bVar2 = std::operator==(psVar19,"beach");
            if (!bVar2) goto LAB_038f8874;
            pCVar22 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89c8;
            local_a8 = 0;
          }
        }
        pIVar23 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar22);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets(aIStack_48,iVar4,iVar5,iVar6,iVar7);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        pSVar16 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab89f8);
        iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
        Sexy::Insets::Insets((Insets *)local_38,local_a8,local_a8,iVar5,iVar6);
        Sexy::Graphics::DrawImage(param_1,pIVar23,(TRect *)aIStack_48,(TRect *)local_38);
      }
    }
LAB_038f8874:
    iVar11 = iVar11 + 1;
    lVar20 = FUN_038f52e0(*(undefined8 *)(this + 0x118),uVar28);
    Sexy::StrFormat("X%d",(Insets *)local_38,(ulong)*(uint *)(lVar20 + 8));
    Sexy::ToSexyString((Sexy *)local_38,extraout_x1_00);
    std::string::~string((string *)local_38);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    iVar5 = FUN_038f5410(0x14);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar7 = FUN_038f5410(10);
    pLVar18 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
    iVar10 = FUN_038f5410(0x28);
    FUN_05477b24(aIStack_48,aRStack_58);
    Sexy::Color::Color((Color *)local_38,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)(float)(iVar4 - iVar5),(float)(iVar26 + iVar6 / 2 + iVar7),
               (float)(iVar9 + iVar10),uVar14,param_1,aIStack_48,1,(Insets *)local_38,0);
    FUN_05476c50(aIStack_48);
    if ((bVar1) && (iVar4 = *(int *)(this + 0x148), iVar4 <= iVar11)) {
      bVar1 = false;
      iVar8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                        (this_03);
      iVar8 = calStartX(this,iVar8 - iVar4);
      pSVar16 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar16);
      iVar5 = FUN_038f5410(0x32);
      iVar26 = iVar26 + iVar4 + iVar5;
    }
    else {
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8890);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar5 = FUN_038f5410(0x3c);
      iVar8 = iVar8 + iVar4 + iVar5;
    }
    uVar28 = uVar28 + 1;
    FUN_05476c50(aRStack_58);
  } while( true );
}

