// Class: AdventureBonusUI


/* AdventureBonusUI::SetWorldName(std::string const&) */

void AdventureBonusUI::SetWorldName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1b8);
  return;
}


/* AdventureBonusUI::Update() */

void __thiscall AdventureBonusUI::Update(AdventureBonusUI *this)

{
  long *plVar1;
  code *pcVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x80);
    PVZ_RealT();
    (*pcVar2)(plVar1);
  }
  return;
}


/* AdventureBonusUI::WatchAD() */

void __thiscall AdventureBonusUI::WatchAD(AdventureBonusUI *this)

{
  ADManager *pAVar1;
  
  this[0x1c0] = (AdventureBonusUI)0x1;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x1a);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::onADFinished(int) */

void __thiscall AdventureBonusUI::onADFinished(AdventureBonusUI *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ADManager *pAVar4;
  uint *puVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  PVZ2UIButton *this_00;
  UIRewardFrame *pUVar8;
  wstring awStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == 0x1a) && (this[0x1c0] != (AdventureBonusUI)0x0)) {
    this[0x1c0] = (AdventureBonusUI)0x0;
    this[0x1c1] = (AdventureBonusUI)0x1;
    if (*(PVZ2UIButton **)(this + 0x1a8) != (PVZ2UIButton *)0x0) {
      PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x1a8));
      this_00 = *(PVZ2UIButton **)(this + 0x1a8);
      iVar3 = *(int *)(this_00 + 0x50);
      iVar1 = *(int *)(this_00 + 0x54);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06af7258,2);
      Sexy::Insets::Insets((Insets *)local_50,0,0,iVar3,iVar1);
      PVZ2UIButton::AddImage(this_00,(PVZ2UIImage *)local_40,(TRect *)local_50);
      (**(code **)(**(long **)(this + 0x1a8) + 0x188))(*(long **)(this + 0x1a8),1);
    }
    pAVar4 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    iVar3 = ADManager::GetLeftADWatchCount(pAVar4,0x1a);
    local_50[0] = CONCAT44(local_50[0]._4_4_,iVar3 + -1);
    local_40[0] = 0;
    puVar5 = (uint *)eastl::max_alt<int>((int *)local_50,(int *)local_40);
    Sexy::StrFormat(L"%d",awStack_60,(ulong)*puVar5);
    if (this[0x1c1] == (AdventureBonusUI)0x0) {
      pwVar6 = L"[PLANT_ADVENTURE_BONUS_AD_BEFORE_WATCH]";
    }
    else {
      pwVar6 = L"[PLANT_ADVENTURE_BONUS_AD_AFTER_WATCH]";
    }
    TodStringTranslate(pwVar6);
    std::operator+((wstring *)local_50,awStack_60);
    FUN_054766c8(this + 0x1c8,(string *)local_40);
    FUN_05476c50((string *)local_40);
    FUN_05476c50((Insets *)local_50);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1d0));
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x1d0));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar2)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      pUVar8 = (UIRewardFrame *)*puVar7;
      std::string::string((string *)local_40,"IMAGE_UI_PLANTADVENTURE_AD_REWARD_DOUBLED");
      UIRewardFrame::SetLockString(pUVar8,(string *)local_40);
      std::string::~string((string *)local_40);
      nop();
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdventureBonusUI::SetBought() */

void __thiscall AdventureBonusUI::SetBought(AdventureBonusUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  
  (**(code **)(**(long **)(this + 0x1a0) + 0x158))(*(long **)(this + 0x1a0),0);
  this[0x109] = (AdventureBonusUI)0x1;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = (iVar5 * 3) / 2;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar1 = *(int *)(this + 0x110);
  iVar2 = *(int *)(this + 0x114);
  iVar3 = *(int *)(this + 0x118);
  iVar4 = *(int *)(this + 0x10c);
  iVar7 = FUN_042d2d60(10);
  (**(code **)(**(long **)(this + 0x198) + 0x198))
            (*(long **)(this + 0x198),iVar4 + (iVar2 - iVar5) / 2,
             (((iVar1 + iVar3) - iVar6 / 2) + iVar7 / 2) - iVar7,iVar5,iVar6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::Draw(Sexy::Graphics*) */

void __thiscall AdventureBonusUI::Draw(AdventureBonusUI *this,Graphics *param_1)

{
  int iVar1;
  AdventureBonusUI AVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  Image *pIVar8;
  long lVar9;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x15c));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6e48);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar3 = FUN_042d2d60(5);
  iVar1 = *(int *)(this + 0x150);
  iVar4 = FUN_042d2d60(0x32);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4)
  ;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x170,aIStack_28,uVar6,aIStack_18,5,1);
  iVar3 = FUN_042d2d60(0x32);
  iVar1 = *(int *)(this + 0x150);
  iVar4 = FUN_042d2d60(0x5a);
  Sexy::Insets::Insets(aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4)
  ;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x178,aIStack_28,uVar6,aIStack_18,5,1);
  if ((*(long *)(this + 0x1a8) == 0) || (*(char *)(*(long *)(this + 0x1a8) + 0x6c) == '\0')) {
    iVar3 = FUN_042d2d60(0xdc);
    iVar1 = *(int *)(this + 0x150);
    iVar4 = FUN_042d2d60(0x32);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4);
  }
  else {
    iVar3 = FUN_042d2d60(0xdc);
    iVar1 = *(int *)(this + 0x150);
    iVar4 = FUN_042d2d60(0x3c);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Insets::Insets(aIStack_18,0xec,0x6a,0,0xff);
    WriteWordInRect(param_1,this + 0x1c8,aIStack_28,uVar6,aIStack_18,5,1);
    iVar3 = FUN_042d2d60(0x10e);
    iVar1 = *(int *)(this + 0x150);
    iVar4 = FUN_042d2d60(0x32);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4);
  }
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x180,aIStack_28,uVar6,aIStack_18,5,1);
  if (this[400] == (AdventureBonusUI)0x0) {
    AVar2 = this[0x109];
  }
  else {
    iVar3 = FUN_042d2d60(0xf5);
    iVar1 = *(int *)(this + 0x150);
    iVar4 = FUN_042d2d60(0x32);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0x14c),iVar3 + iVar1,*(int *)(this + 0x154),iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Insets::Insets(aIStack_18,0x66,0x37,0,0xff);
    WriteWordInRect(param_1,this + 0x188,aIStack_28,uVar6,aIStack_18,5,1);
    AVar2 = this[0x109];
  }
  if (AVar2 == (AdventureBonusUI)0x0) {
    lVar9 = *(long *)(this + 0x1a0);
    iVar4 = FUN_042d2d60(0x2d);
    iVar1 = *(int *)(lVar9 + 0x48);
    iVar5 = FUN_042d2d60(0x14);
    iVar3 = *(int *)(lVar9 + 0x4c);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6e80);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 - iVar4,iVar3 - iVar5);
  }
  plVar7 = *(long **)(this + 0xe0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x98))(plVar7,param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::~AdventureBonusUI() */

void __thiscall AdventureBonusUI::~AdventureBonusUI(AdventureBonusUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  PrimeText *this_01;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682f5d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f8f8;
  if (*(long *)(this + 0xe0) != 0) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar2 != '\0') {
      ToolPacketData::GetProps();
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      (**(code **)(*plVar5 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    *(undefined8 *)(this + 0xe0) = 0;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1d0);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *puVar4 = 0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<UIRewardFrame*,std::allocator<UIRewardFrame*>>::~vector
            ((vector<UIRewardFrame*,std::allocator<UIRewardFrame*>> *)this_00);
  FUN_05476c50(this + 0x1c8);
  std::string::~string((string *)(this + 0x1b8));
  std::string::~string((string *)(this + 0x1b0));
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x170);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdventureBonusUI::~AdventureBonusUI() */

void __thiscall AdventureBonusUI::~AdventureBonusUI(AdventureBonusUI *this)

{
  ~AdventureBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::OnGotExploreReward(bool) */

void __thiscall AdventureBonusUI::OnGotExploreReward(AdventureBonusUI *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  ReceivedDataCallback *pRVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    MessageRouter::Post<int,bool,bool,int,bool,bool>
              ((MessageRouter *)gMessageRouter,Message::AdventureFinished,*(int *)(this + 0xe8),true
               ,true);
    LawnApp::KillAdventureBonusUI(gLawnApp);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BACK_TO_MAP]",auStack_60);
    pRVar2 = (ReceivedDataCallback *)LawnApp::GetPlantAdventureUI(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (pRVar2,PlantAdventureUI::OnBackToMap);
    Sexy::Delegate0::Delegate0<PlantAdventureUI,void(PlantAdventureUI::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::ButtonDepress(int) */

void __thiscall AdventureBonusUI::ButtonDepress(AdventureBonusUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  WorldDataManager *pWVar4;
  long *plVar5;
  NetworkItemMgr *this_03;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"[PlantAdventure] ButtonDepress called");
  if (param_1 == 2) {
    Sexy::OutputDebugStrF((wchar_t *)"[PlantAdventure] AdventureBonus_Finished");
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    pWVar4 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    if (pWVar4 == (WorldDataManager *)0x0) {
      iVar2 = 0;
    }
    else {
      FUN_05475d88((string *)awStack_50,this + 0x1b8);
      iVar2 = WorldDataManager::GetWorldIdByName(pWVar4,(string *)awStack_50);
      std::string::~string((string *)awStack_50);
    }
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::FinishPlantAdventure,iVar2);
    if ((this_02 == (PlayerInfo *)0x0) ||
       (iVar2 = FUN_042d2594(*(undefined4 *)(this_02 + 0x40)), iVar2 != 0x27)) {
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (cVar1 == '\0') {
        MessageRouter::Post<int,bool,bool,int,bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::AdventureFinished,*(int *)(this + 0xe8),
                   true,false);
      }
      else {
        plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined4 *)(this + 0xe8),this[0x1c1]);
      }
    }
    else {
      PlayerInfo::AddCoins(this_02,*(int *)(this + 0xf0));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_50);
      NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)awStack_58,0x452,*(int *)(this + 0xec));
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)awStack_50,
                 (NetworkItemInfo *)awStack_58);
      this_03 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      NetworkItemMgr::NetworkAddPlantPieceCount(this_03,(vector *)awStack_50);
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotExploreReward,true)
      ;
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)awStack_50);
    }
  }
  else if (param_1 == 5) {
    WatchAD(this);
  }
  else if (param_1 == 1) {
    Sexy::OutputDebugStrF((wchar_t *)"[PlantAdventure] AdventureBonus_Surprise");
    cVar1 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      (**(code **)(*(long *)this + 0x158))(this,0);
      LawnApp::ShowAdventureSurpriseUI(gLawnApp,*(int *)(this + 0xe8));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdventureBonusUI::ButtonDepress(int) */

void __thiscall AdventureBonusUI::ButtonDepress(AdventureBonusUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::Init(int, std::wstring) */

void __thiscall AdventureBonusUI::Init(AdventureBonusUI *this,int param_1,wstring *param_3)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined *puVar3;
  LawnApp *pLVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  PrimeText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *pNVar18;
  char *__s;
  TGALogMgr *pTVar19;
  LotteryResultProgressBar *pLVar20;
  SalesProgressBar *pSVar21;
  PVZ2UIButton *pPVar22;
  ADManager *pAVar23;
  ulong uVar24;
  undefined4 *puVar25;
  UIRewardFrame *pUVar26;
  wchar_t *pwVar27;
  RiftShopMgr *this_03;
  XMLParser *this_04;
  uint *puVar28;
  BouncingArrow *this_05;
  PlantAdventureConfig *pPVar29;
  string *psVar30;
  TGANFSLinkageData *__n;
  long lVar31;
  undefined8 uVar32;
  code *pcVar33;
  ulong uVar34;
  long lVar35;
  undefined8 local_150 [2];
  undefined8 local_140;
  UIRewardFrame *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_110;
  uint local_10c;
  wstring awStack_108 [8];
  undefined4 local_100;
  undefined4 local_f8 [2];
  int local_f0;
  undefined4 local_ec;
  S2C_Explore_Team local_e0;
  AdventureBonusUI AStack_df;
  undefined2 uStack_de;
  int iStack_dc;
  undefined4 local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  vector<int,std::allocator<int>> avStack_b0 [24];
  UIRewardFrame *local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  string asStack_78 [40];
  undefined8 local_50;
  undefined4 uStack_48;
  uint local_44;
  undefined8 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1c1] = (AdventureBonusUI)0x0;
  this[0x1c0] = (AdventureBonusUI)0x0;
  this[400] = (AdventureBonusUI)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar4,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar4,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar4,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_50,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar4,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar4 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar4,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  *(int *)(this + 0xe8) = param_1;
  this[0x109] = (AdventureBonusUI)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    iVar7 = FUN_042d2594(*(undefined4 *)(this_02 + 0x40));
    if (iVar7 == 0x27) {
      *(undefined4 *)(this + 0xf0) = 2000;
      this[0x108] = (AdventureBonusUI)0x0;
      *(undefined4 *)(this + 0xf4) = 0;
      *(undefined4 *)(this + 0xf8) = 0;
      *(undefined4 *)(this + 0xec) = 1;
      iVar7 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar7);
      bVar5 = std::operator!=("",(string *)&local_e0);
      if (bVar5) {
        psVar30 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        FUN_031f5e7c((string *)&local_50,"plant_piece_",(string *)&local_e0);
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar30);
        std::string::~string((string *)&local_50);
        cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_98);
        if (cVar6 != '\0') {
          thunk_FUN_05475e00(this + 0x1b0,(string *)&local_e0);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      }
      std::string::~string((string *)&local_e0);
    }
    else {
      PlayerInfo::GetPlantAdventureInfo((int)this_02);
      pNVar18 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      uVar8 = NameMapperBase::ContainsId(pNVar18,iStack_d4);
      if ((uVar8 & 0xff) == 0) {
        pPVar29 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
        PlantAdventureConfig::PlantAdventureConfig((PlantAdventureConfig *)&local_98,pPVar29);
        PlantAdventureConfig::GetDungeonBonus((int)(TGANFSLinkageData *)&local_98);
        PlantAdventureConfig::GetDungeonSurpriseBonus();
        local_e0 = (S2C_Explore_Team)0x1;
        AStack_df = (AdventureBonusUI)(0 < local_f0);
        iStack_dc = param_1;
        local_d8 = PlantAdventureConfig::GetDungeonBonusCoins
                             ((PlantAdventureConfig *)&local_98,param_1);
        pNVar18 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iStack_d4 = NameMapperBase::GetIdForName(pNVar18,(string *)awStack_108);
        local_d0 = local_100;
        local_cc = local_f8[0];
        local_c8 = local_ec;
        local_c4 = local_f0;
        local_b8 = uVar8 & 0xff;
        local_bc = uVar8 & 0xff;
        std::vector<int,std::allocator<int>>::clear(avStack_b0);
        PlantAdventureInfo::PlantAdventureInfo
                  ((PlantAdventureInfo *)&local_50,(PlantAdventureInfo *)&local_e0);
        PlayerInfo::AddPlantAdventureInfo(this_02,(string *)&local_50);
        S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_50);
        PlayerInfo::SetPlantAdventureState(this_02,param_1,3,-1,true,1);
        GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                  ((GridItemCardGameZombieActionData *)local_f8);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)awStack_108);
        PlantAdventureConfig::~PlantAdventureConfig((PlantAdventureConfig *)&local_98);
      }
      iVar7 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar7);
      bVar5 = std::operator!=("",(string *)local_f8);
      if (bVar5) {
        psVar30 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        FUN_031f5e7c((string *)&local_50,"plant_piece_",(string *)local_f8);
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar30);
        std::string::~string((string *)&local_50);
        cVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_98);
        if (cVar6 != '\0') {
          thunk_FUN_05475e00(this + 0x1b0,(string *)local_f8);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      }
      *(undefined4 *)(this + 0xf0) = local_d8;
      *(int *)(this + 0xf8) = local_c0;
      if (local_c0 < 1) {
        *(undefined4 *)(this + 0xf4) = 0xffffffff;
      }
      else {
        pNVar18 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        __n = (TGANFSLinkageData *)&local_98;
        std::string::string((string *)&local_50,"mat_mystery_crystal");
        uVar9 = NameMapperBase::GetIdForName(pNVar18,(string *)&local_50);
        *(undefined4 *)(this + 0xf4) = uVar9;
        std::string::~string((string *)&local_50);
        nop();
        TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_98);
        std::string::append((string *)&local_98,"2",(size_t)__n);
        std::string::append((string *)local_88,"2",(size_t)__n);
        DString::DString((DString *)&local_50,*(int *)(this + 0xf8));
        __s = (char *)DString::c_str((DString *)&local_50);
        std::string::append(asStack_78,__s,(size_t)__n);
        DString::~DString((DString *)&local_50);
        pTVar19 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGAArtifactPresentData::TGAArtifactPresentData
                  ((TGAArtifactPresentData *)&local_50,(TGAArtifactPresentData *)&local_98);
        TGALogMgr::LogMysteryStore(pTVar19,(string *)&local_50);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_50);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_98);
      }
      *(undefined4 *)(this + 0xec) = local_d0;
      this[0x108] = AStack_df;
      std::string::~string((string *)local_f8);
      S2C_Explore_Team::~S2C_Explore_Team(&local_e0);
    }
  }
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar10 = FUN_042d2d60(0x285);
  iVar11 = FUN_042d2d60(0x17c);
  iVar7 = *(int *)(this + 0x50);
  iVar12 = FUN_042d2d60(0x1e);
  iVar16 = *(int *)(this + 0x54);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_TITLE]");
  FUN_054766c8(this + 0x170,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(iVar7 - iVar10) / 2,iVar12 + (iVar16 - iVar11) / 2,iVar10,iVar11);
  *(undefined8 *)(this + 0x10c) = local_50;
  *(ulong *)(this + 0x114) = CONCAT44(local_44,uStack_48);
  iVar7 = FUN_042d2d60(10);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + *(int *)(this + 0x10c),iVar7 + *(int *)(this + 0x110),
             iVar7 * -2 + *(int *)(this + 0x114),iVar7 * -2 + *(int *)(this + 0x118));
  *(undefined8 *)(this + 0x14c) = local_50;
  *(ulong *)(this + 0x154) = CONCAT44(local_44,uStack_48);
  iVar7 = FUN_042d2d60(0);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + *(int *)(this + 0x10c),iVar7 + *(int *)(this + 0x110),
             iVar7 * -2 + *(int *)(this + 0x114),iVar7 * -2 + *(int *)(this + 0x118));
  *(undefined8 *)(this + 0x15c) = local_50;
  *(ulong *)(this + 0x164) = CONCAT44(local_44,uStack_48);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_HINT]");
  TodReplaceString((wstring *)&local_98,L"{DUNGEON}",param_3);
  FUN_054766c8(this + 0x178,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  pLVar20 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar20);
  iVar16 = (iVar7 * 3) / 2;
  pSVar21 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar21);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_BUTTON_SURPRISE]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar22 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar22,1,pBVar1,(wstring *)&local_98,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x1a0) = pPVar22;
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  iVar7 = *(int *)(this + 0x114);
  iVar13 = FUN_042d2d60(100);
  iVar10 = *(int *)(this + 0x118);
  iVar11 = *(int *)(this + 0x110);
  iVar7 = *(int *)(this + 0x10c) + ((iVar7 + iVar16 * -2) - iVar13) / 2;
  iVar13 = FUN_042d2d60(10);
  iVar14 = FUN_042d2d60(0x2d);
  (**(code **)(**(long **)(this + 0x1a0) + 0x198))
            (*(long **)(this + 0x1a0),iVar7,(iVar11 + iVar10 + -(iVar12 / 2) + iVar13 / 2) - iVar14,
             iVar16,iVar12);
  pPVar22 = *(PVZ2UIButton **)(this + 0x1a0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_98,&DAT_06af7190,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7690,5);
  PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)&local_98,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x1a0) + 0x188))(*(long **)(this + 0x1a0),0);
  lVar31 = *(long *)(this + 0x1a0);
  pcVar33 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar31 + 0x59) = 0;
  (*pcVar33)(this,lVar31);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_BUTTON_FINISHED]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar22 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar22,2,pBVar1,(wstring *)&local_98,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x198) = pPVar22;
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  iVar13 = FUN_042d2d60(100);
  iVar10 = *(int *)(this + 0x110);
  iVar11 = *(int *)(this + 0x118);
  iVar14 = FUN_042d2d60(10);
  iVar15 = FUN_042d2d60(0x2d);
  (**(code **)(**(long **)(this + 0x198) + 0x198))
            (*(long **)(this + 0x198),iVar7 + iVar16 + iVar13,
             (-(iVar12 / 2) + iVar10 + iVar11 + iVar14 / 2) - iVar15,iVar16,iVar12);
  pPVar22 = *(PVZ2UIButton **)(this + 0x198);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_98,&DAT_06af7028,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af72e0,5);
  PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)&local_98,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x198) + 0x188))(*(long **)(this + 0x198),0);
  lVar31 = *(long *)(this + 0x198);
  pcVar33 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar31 + 0x59) = 0;
  (*pcVar33)(this,lVar31);
  pLVar20 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af76e0);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar20);
  iVar7 = *(int *)(this + 0x10c);
  iVar16 = *(int *)(this + 0x114);
  iVar12 = (int)((double)iVar10 * 3.2);
  iVar10 = FUN_042d2d60(10);
  iVar11 = FUN_042d2d60(0xdc);
  Sexy::Insets::Insets
            ((Insets *)&local_50,((iVar7 + iVar16 / 2) - iVar12) - iVar10,
             iVar11 + *(int *)(this + 0x150),iVar12,iVar12);
  iVar7 = *(int *)(this + 0x10c);
  iVar16 = *(int *)(this + 0x114);
  *(undefined8 *)(this + 0x11c) = local_50;
  *(ulong *)(this + 0x124) = CONCAT44(local_44,uStack_48);
  iVar10 = FUN_042d2d60(10);
  iVar11 = FUN_042d2d60(0xdc);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + iVar16 / 2 + iVar12 + iVar10,
             iVar11 + *(int *)(this + 0x150),iVar12,iVar12);
  *(undefined8 *)(this + 0x13c) = local_50;
  *(ulong *)(this + 0x144) = CONCAT44(local_44,uStack_48);
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x100));
  if (((bVar5) || (cVar6 = FUN_0547419c(this + 0x1b0), cVar6 == '\0')) &&
     (0 < *(int *)(this + 0xec))) {
    iVar16 = *(int *)(this + 0x11c);
    iVar7 = FUN_042d2d60(0x14);
    iVar7 = iVar12 + iVar16 + iVar7;
    iVar16 = *(int *)(this + 0x120);
  }
  else {
    iVar16 = *(int *)(this + 0x120);
    iVar7 = *(int *)(this + 0x10c) + (*(int *)(this + 0x114) - iVar12) / 2;
  }
  Sexy::Insets::Insets((Insets *)&local_50,iVar7,iVar16,iVar12,iVar12);
  *(undefined8 *)(this + 300) = local_50;
  *(ulong *)(this + 0x134) = CONCAT44(local_44,uStack_48);
  uVar32 = local_50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
  iVar7 = (int)uVar32;
  if (0 < *(int *)(this + 0xec)) {
    iVar16 = FUN_042d2594(*(undefined4 *)(this_02 + 0x40));
    if (iVar16 == 0x27) {
      SecretStoreUtils::GetAwardInfoByActId((SecretStoreUtils *)0x452,1,iVar7);
      std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
                ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)&local_e0,
                 (SecretAwardInfo *)&local_50);
      PakRecord::~PakRecord((PakRecord *)&local_50);
    }
    else {
      PlayerInfo::GetPlantAdventureInfo((int)this_02);
      SecretStoreUtils::GetAwardInfoByActId
                ((SecretStoreUtils *)(ulong)local_44,*(int *)(this + 0xec),iVar7);
      std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
                ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)&local_e0,
                 (SecretAwardInfo *)&local_98);
      PakRecord::~PakRecord((PakRecord *)&local_98);
      S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_50);
    }
  }
  if (0 < *(int *)(this + 0xf0)) {
    SecretStoreUtils::GetAwardInfoByActId((SecretStoreUtils *)0xfad,*(int *)(this + 0xf0),iVar7);
    std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
              ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)&local_e0,
               (SecretAwardInfo *)&local_50);
    PakRecord::~PakRecord((PakRecord *)&local_50);
  }
  if (0 < *(int *)(this + 0xf8)) {
    SecretStoreUtils::GetAwardInfoByActId
              ((SecretStoreUtils *)(ulong)*(uint *)(this + 0xf4),*(int *)(this + 0xf8),iVar7);
    std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
              ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)&local_e0,
               (SecretAwardInfo *)&local_50);
    PakRecord::~PakRecord((PakRecord *)&local_50);
  }
  pAVar23 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  cVar6 = ADManager::CanWatchAD(pAVar23,0x1a);
  uVar32 = CONCAT44(iStack_dc,CONCAT22(uStack_de,CONCAT11(AStack_df,local_e0)));
  if (cVar6 == '\0') {
    uVar24 = FUN_042d25a8(uVar32,CONCAT44(iStack_d4,local_d8));
    iVar7 = (int)uVar24;
  }
  else {
    uVar24 = FUN_042d25a8(uVar32,CONCAT44(iStack_d4,local_d8));
    iVar7 = (int)uVar24 + 1;
  }
  iVar11 = FUN_042d2d60(0x5a);
  iVar12 = FUN_042d2d60(0x1e);
  iVar16 = FUN_042d2d60(0xf);
  iVar16 = iVar16 + (*(int *)(this + 0x54) - iVar11) / 2;
  iVar10 = 0;
  iVar7 = (((1 - iVar7) * iVar12 - iVar7 * iVar11) + *(int *)(this + 0x50)) / 2;
  for (uVar34 = 0; uVar34 < uVar24; uVar34 = uVar34 + 1) {
    puVar25 = (undefined4 *)FUN_042d25bc(uVar32,uVar34);
    uVar9 = *puVar25;
    uVar2 = puVar25[4];
    pUVar26 = ::operator_new(0x148);
    UIRewardFrame::UIRewardFrame(pUVar26,uVar9,puVar25 + 2,uVar2,1);
    local_98 = pUVar26;
    (**(code **)(*(long *)pUVar26 + 0x198))(pUVar26,iVar7,iVar16,iVar11,iVar11);
    pUVar26 = local_98;
    if (cVar6 != '\0') {
      std::string::string((string *)&local_50,"IMAGE_UI_PLANTADVENTURE_AD_REWARD_DOUBLE");
      UIRewardFrame::SetLockString(pUVar26,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
    }
    (**(code **)(*(long *)this + 0x60))(this,local_98);
    std::vector<UIRewardFrame*,std::allocator<UIRewardFrame*>>::push_back
              ((vector<UIRewardFrame*,std::allocator<UIRewardFrame*>> *)(this + 0x1d0),&local_98);
    uVar32 = CONCAT44(iStack_dc,CONCAT22(uStack_de,CONCAT11(AStack_df,local_e0)));
    uVar24 = FUN_042d25a8(uVar32,CONCAT44(iStack_d4,local_d8));
    iVar10 = iVar7;
    iVar7 = iVar7 + iVar11 + iVar12;
  }
  FUN_05478178((TGANFSLinkageData *)&local_98,&DAT_056f11a8,(wstring *)local_f8);
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar22 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar22,5,pBVar1,(wstring *)&local_98,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x1a8) = pPVar22;
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  nop();
  (**(code **)(**(long **)(this + 0x1a8) + 0x198))
            (*(long **)(this + 0x1a8),iVar11 + iVar10 + iVar12,iVar16,iVar11,iVar11);
  pPVar22 = *(PVZ2UIButton **)(this + 0x1a8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_98,&DAT_06af7488,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7488,2);
  PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)&local_98,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x1a8) + 0x188))(*(long **)(this + 0x1a8),0);
  *(undefined1 *)(*(long *)(this + 0x1a8) + 0x59) = 0;
  pLVar20 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af73e0);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar20);
  pSVar21 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af73e0);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar21);
  pPVar22 = *(PVZ2UIButton **)(this + 0x1a8);
  iVar7 = FUN_042d2d60(0xf);
  iVar16 = *(int *)(pPVar22 + 0x50);
  iVar7 = iVar7 + *(int *)(pPVar22 + 0x54) / 2;
  iVar11 = (int)((float)iVar7 * ((float)iVar10 / (float)iVar11));
  iVar10 = FUN_042d2d60(0xfffffffb);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af73e0,2);
  Sexy::Insets::Insets((Insets *)&local_98,iVar16 - iVar11 / 2,iVar10,iVar11,iVar7);
  PVZ2UIButton::AddImage(pPVar22,(PVZ2UIImage *)&local_50,(TRect *)&local_98);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1a8));
  (**(code **)(**(long **)(this + 0x1a8) + 0x158))(*(long **)(this + 0x1a8),cVar6);
  pAVar23 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  uVar24 = ADManager::GetLeftADWatchCount(pAVar23,0x1a);
  Sexy::StrFormat(L"%d",awStack_108,uVar24 & 0xffffffff);
  if (this[0x1c1] == (AdventureBonusUI)0x0) {
    pwVar27 = L"[PLANT_ADVENTURE_BONUS_AD_BEFORE_WATCH]";
  }
  else {
    pwVar27 = L"[PLANT_ADVENTURE_BONUS_AD_AFTER_WATCH]";
  }
  TodStringTranslate(pwVar27);
  std::operator+((wstring *)&local_98,awStack_108);
  FUN_054766c8(this + 0x1c8,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  this_03 = (RiftShopMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
  uVar17 = RiftShopMgr::getRefreshShopTimes(this_03);
  local_110 = uVar17;
  this_04 = (XMLParser *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
  local_10c = Sexy::XMLParser::GetCurrentLineNum(this_04);
  puVar28 = (uint *)eastl::min_alt<int>((int *)&local_10c,(int *)&local_110);
  uVar8 = *puVar28;
  local_10c = uVar8;
  Sexy::StrFormat(L"%d/%d",(wstring *)local_f8,(ulong)uVar8,(ulong)uVar17);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_CRYSTAL_TEXT]");
  std::operator+((wstring *)&local_98,(wstring *)local_f8);
  FUN_054766c8(this + 0x180,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  FUN_05476c50((TGANFSLinkageData *)&local_98);
  TodStringTranslate(L"[PLANT_ADVENTURE_BONUS_CRYSTAL_LIMIT_TEXT]");
  FUN_054766c8(this + 0x188,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  this[400] = (AdventureBonusUI)((int)uVar17 <= (int)uVar8);
  if (this[0x108] == (AdventureBonusUI)0x0) {
    SetBought(this);
  }
  if (((this_02 != (PlayerInfo *)0x0) &&
      (iVar7 = FUN_042d2594(*(undefined4 *)(this_02 + 0x40)), iVar7 == 0x27)) &&
     (*(long *)(this + 0xe0) == 0)) {
    this_05 = GameObject::Create<BouncingArrow>();
    *(BouncingArrow **)(this + 0xe0) = this_05;
    AnimationController::SetDuration((AnimationController *)this_05,10000.0);
    lVar31 = *(long *)(this + 0x198);
    lVar35 = *(long *)(this + 0xe0);
    iVar7 = *(int *)(lVar31 + 0x50);
    iVar16 = *(int *)(lVar31 + 0x48);
    *(undefined4 *)(lVar35 + 0x3c) = 0;
    iVar10 = FUN_042d2d60(0x1e);
    Sexy::Point::Point((Point *)&local_50,iVar16 + iVar7 / 2,*(int *)(lVar31 + 0x4c) - iVar10);
    *(undefined8 *)(lVar35 + 0x30) = local_50;
  }
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotExploreReward);
  local_120 = local_88[0];
  local_130 = local_98;
  uStack_128 = uStack_90;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<AdventureBonusUI,void(AdventureBonusUI::*)(bool)>>
            ((MessageRouter *)puVar3,Message::GotExploreReward,&local_130);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_150[0] = local_50;
  local_140 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdventureBonusUI,void(AdventureBonusUI::*)(int)>>
            ((MessageRouter *)puVar3,Message::NotifyADWatchFinish,local_150);
  FUN_05476c50((wstring *)local_f8);
  FUN_05476c50(awStack_108);
  std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::~vector
            ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)&local_e0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::AdventureBonusUI(int, std::wstring) */

void __thiscall
AdventureBonusUI::AdventureBonusUI(AdventureBonusUI *this,undefined4 param_1,undefined8 param_3)

{
  PrimeText *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0682f5d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f8f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  Sexy::Insets::Insets((Insets *)(this + 0x11c));
  Sexy::Insets::Insets((Insets *)(this + 300));
  Sexy::Insets::Insets((Insets *)(this + 0x13c));
  Sexy::Insets::Insets((Insets *)(this + 0x14c));
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  FUN_05476574(this + 0x170);
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  Set8BytesTo0(this + 0x1b0);
  Set8BytesTo0(this + 0x1b8);
  FUN_05476574(this + 0x1c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_05477b24(auStack_10,param_3);
  Init(this,param_1,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureBonusUI::AdventureBonusUI() */

void __thiscall AdventureBonusUI::AdventureBonusUI(AdventureBonusUI *this)

{
  PrimeText *this_00;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0682f5d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682f8f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  Sexy::Insets::Insets((Insets *)(this + 0x11c));
  Sexy::Insets::Insets((Insets *)(this + 300));
  Sexy::Insets::Insets((Insets *)(this + 0x13c));
  Sexy::Insets::Insets((Insets *)(this + 0x14c));
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  FUN_05476574(this + 0x170);
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  Set8BytesTo0(this + 0x1b0);
  Set8BytesTo0(this + 0x1b8);
  FUN_05476574(this + 0x1c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_05478178(auStack_10,&DAT_056f11a8,auStack_18);
  Init(this,0,auStack_10);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

