// Class: LevelOfTheDayRewardDialog


/* LevelOfTheDayRewardDialog::onAllPinatasOpened() */

void __thiscall LevelOfTheDayRewardDialog::onAllPinatasOpened(LevelOfTheDayRewardDialog *this)

{
  PinataManager::RevealAllPinataPrizes((PinataManager *)(this + 0x110));
  return;
}


/* LevelOfTheDayRewardDialog::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelOfTheDayRewardDialog::TouchEnded(LevelOfTheDayRewardDialog *this,Touch *param_1)

{
  char cVar1;
  
  cVar1 = PinataManager::IsLocationValid((PinataManager *)(this + 0x110),(Point *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(param_1 + 0x10);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::onNarrationFinished() */

void LevelOfTheDayRewardDialog::onNarrationFinished(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"nar_lod_reward_intro");
  PlayerInfo::CompleteNarrationEvent(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::DrawOverlay(Sexy::Graphics*, int) */

void LevelOfTheDayRewardDialog::DrawOverlay(Graphics *param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x1b8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x1b8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    StandaloneEffect::Draw((StandaloneEffect *)*puVar2,(Graphics *)(ulong)(uint)param_2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::LevelOfTheDayRewardDialog() */

void __thiscall
LevelOfTheDayRewardDialog::LevelOfTheDayRewardDialog(LevelOfTheDayRewardDialog *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06926170;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0xd8),(DummyInit *)0x0);
  PinataManager::PinataManager((PinataManager *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  Sexy::Point::Point((Point *)(this + 0x1d0));
  *(undefined4 *)(this + 0x108) = 0;
  this[0x10c] = (LevelOfTheDayRewardDialog)0x0;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DoRewardDrop);
  Sexy::Delegate0::Delegate0<LevelOfTheDayRewardDialog,void(LevelOfTheDayRewardDialog::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PinataRewardGot,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::displayRewardFooter() */

void __thiscall LevelOfTheDayRewardDialog::displayRewardFooter(LevelOfTheDayRewardDialog *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  LevelOfTheDayMgr *this_00;
  long lVar8;
  char *pcVar9;
  LevelOfTheDayRewardFooter *this_01;
  SalesProgressBar *pSVar10;
  RenaissanceChallengeNewManager *this_02;
  code *pcVar11;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  lVar8 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_00);
  if (lVar8 != 0) {
    FUN_05475d88(asStack_50,lVar8 + 0x30);
    bVar3 = std::operator==(asStack_50,"[CHILDREN_DAY_DZ_FOOT]");
    if (bVar3) {
      this_02 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar7 = RenaissanceChallengeNewManager::GetResourceId(this_02);
      if (0 < (int)uVar7) {
        Sexy::StrFormat("[CHILDREN_DAY_DZ_FOOT_%d]",(string *)aCStack_30,(ulong)uVar7);
        FUN_05474278(asStack_50,(string *)aCStack_30);
        std::string::~string((string *)aCStack_30);
      }
    }
    pcVar9 = (char *)FUN_0547429c((string *)(lVar8 + 0x28));
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar9);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
    this_01 = ::operator_new(0x118);
    LevelOfTheDayRewardFooter::LevelOfTheDayRewardFooter(this_01);
    iVar4 = FUN_049bba88(0x2f9);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    pcVar11 = *(code **)(*(long *)this_01 + 0x198);
    pSVar10 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    pSVar10 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    uVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
    (*pcVar11)(this_01,(iVar1 - iVar4) / 2,iVar2 - iVar5,iVar4,uVar6);
    Sexy::ToWString(asStack_50);
    Sexy::ToWString((string *)(lVar8 + 0x38));
    Sexy::Insets::Insets((Insets *)aCStack_30,0xb8,0x2b,0x43,0xff);
    LevelOfTheDayRewardFooter::Initialize
              (this_01,(string *)(lVar8 + 8),(string *)(lVar8 + 0x28),awStack_40,awStack_38,
               (Color *)aCStack_30);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    LevelOfTheDayRewardFooter::AnimateUp(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::string::~string(asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::Draw(Sexy::Graphics*) */

void __thiscall LevelOfTheDayRewardDialog::Draw(LevelOfTheDayRewardDialog *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  GraphicsAutoState aGStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  PinataManager::GetPinatasToDraw((PinataManager *)(this + 0x110),(vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Pinata::Draw((Pinata *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::Widget::DeferOverlay((Widget *)this,0);
  std::vector<Pinata*,std::allocator<Pinata*>>::~vector
            ((vector<Pinata*,std::allocator<Pinata*>> *)avStack_20);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::Update() */

void __thiscall LevelOfTheDayRewardDialog::Update(LevelOfTheDayRewardDialog *this)

{
  GachaConfig *this_00;
  int iVar1;
  bool bVar2;
  LevelOfTheDayRewardDialog LVar3;
  char cVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  Pinata *this_02;
  undefined8 *puVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (GachaConfig *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  iVar1 = (*(int *)(this + 0x108) + 1) % 3;
  *(int *)(this + 0x108) = iVar1;
  if (iVar1 == 0) {
    PinataManager::DropPinatas((PinataManager *)this_00,1);
  }
  LVar3 = (LevelOfTheDayRewardDialog)0x1;
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)GachaConfig::GetGachaPlantRewardList(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_02 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    fVar7 = (float)PVZ_T();
    fVar8 = (float)PVZ_Dt();
    Pinata::Update(this_02,fVar7,fVar8);
    if (LVar3 != (LevelOfTheDayRewardDialog)0x0) {
      LVar3 = (LevelOfTheDayRewardDialog)Pinata::IsDropped(this_02);
    }
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_18);
  }
  if ((byte)this[0x10c] < (byte)LVar3) {
    this[0x10c] = (LevelOfTheDayRewardDialog)0x1;
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_LOD_Music_PinataParty_Choose_Loop_Start");
  }
  cVar4 = PinataManager::AreAllPrizesRevealed((PinataManager *)this_00);
  if (cVar4 != '\0') {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xd8));
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    StandaloneEffect::Update((StandaloneEffect *)*puVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::displayRewardHeader() */

void __thiscall LevelOfTheDayRewardDialog::displayRewardHeader(LevelOfTheDayRewardDialog *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  LevelOfTheDayMgr *pLVar8;
  long lVar9;
  char *pcVar10;
  LevelOfTheDayRewardBanner *this_00;
  SalesProgressBar *pSVar11;
  RenaissanceChallengeNewManager *this_01;
  code *pcVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar8 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  lVar9 = LevelOfTheDayMgr::GetCurrentTheDayItem(pLVar8);
  if (lVar9 != 0) {
    pcVar10 = (char *)FUN_0547429c((string *)(lVar9 + 0x10));
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)aCStack_30);
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
    this_00 = ::operator_new(0x110);
    LevelOfTheDayRewardBanner::LevelOfTheDayRewardBanner(this_00);
    pcVar12 = *(code **)(*(long *)this_00 + 0x198);
    iVar3 = FUN_049bba88(0x2f9);
    iVar1 = *(int *)(this + 0x50);
    pSVar11 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
    uVar5 = FUN_049bba88(0x2f9);
    pSVar11 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    uVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar12)(this_00,(iVar1 - iVar3) / 2,-iVar4,uVar5,uVar6);
    Sexy::ToWString((string *)(lVar9 + 0x18));
    bVar2 = std::operator==((string *)(lVar9 + 0x18),"[CHILDREN_DAY_WIN_HEADER_TITLE]");
    if (bVar2) {
      this_01 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar7 = RenaissanceChallengeNewManager::GetResourceId(this_01);
      if (0 < (int)uVar7) {
        Sexy::StrFormat("[CHILDREN_DAY_WIN_HEADER_TITLE_%d]",(string *)awStack_38,(ulong)uVar7);
        Sexy::ToWString((string *)awStack_38);
        FUN_054766c8(awStack_40,aCStack_30);
        FUN_05476c50(aCStack_30);
        std::string::~string((string *)awStack_38);
      }
    }
    Sexy::ToWString((string *)(lVar9 + 0x20));
    Sexy::Insets::Insets((Insets *)aCStack_30,0xb8,0x2b,0x43,0xff);
    LevelOfTheDayRewardBanner::Initialize
              (this_00,(string *)(lVar9 + 0x10),awStack_40,awStack_38,(Color *)aCStack_30);
    FUN_05476c50(awStack_38);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    LevelOfTheDayRewardBanner::AnimateDown(this_00);
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_UI_LOD_Banner_Drop");
    pLVar8 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
    LevelOfTheDayMgr::SpawnEffectFromTop(pLVar8,(Widget *)this,-10,0x46);
    FUN_05476c50(awStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::BeginRewardSequence(Sexy::Delegate0) */

void __thiscall
LevelOfTheDayRewardDialog::BeginRewardSequence(LevelOfTheDayRewardDialog *this,Delegate2 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xd8),param_2);
  uVar1 = *(undefined4 *)(this + 0x50);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAllPinatasOpened);
  Sexy::Delegate0::Delegate0<LevelOfTheDayRewardDialog,void(LevelOfTheDayRewardDialog::*)()>
            (aDStack_38,avStack_50);
  PinataManager::SetupPinatas((PinataManager *)(this + 0x110),uVar1,aDStack_38);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)(this + 0x110));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    plVar4 = *(long **)(*(long *)(lVar3 + 0x10) + 0x18);
    pcVar5 = *(code **)(*plVar4 + 0x78);
    std::string::string(asStack_58,"drop");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    (*pcVar5)(plVar4,asStack_58,0,0,avStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
    std::string::~string(asStack_58);
    nop();
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_68);
  }
  displayRewardHeader(this);
  displayRewardFooter(this);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::DoRewardDrop() */

void __thiscall LevelOfTheDayRewardDialog::DoRewardDrop(LevelOfTheDayRewardDialog *this)

{
  int iVar1;
  Pinata *this_00;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  Effect_FloatingText *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Pinata *)
            PinataManager::PopPinata((PinataManager *)(this + 0x110),(Point *)(this + 0x1d0));
  if (this_00 != (Pinata *)0x0) {
    uVar2 = Pinata::GetReward(this_00);
    iVar1 = FUN_049bba88(0xffffffce);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)(iVar1 + *(int *)this_00),(float)*(int *)(this_00 + 4))
    ;
    local_10 = (Effect_FloatingText *)
               LevelOfTheDay_Rewards::CreateFloatingRewardText(local_18,local_14,uVar2);
    std::vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>>::push_back
              ((vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>> *)(this + 0x1b8),
               &local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayRewardDialog::~LevelOfTheDayRewardDialog() */

void __thiscall
LevelOfTheDayRewardDialog::~LevelOfTheDayRewardDialog(LevelOfTheDayRewardDialog *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06926170;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>>::clear
            ((vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>> *)this_00);
  std::vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>>::~vector
            ((vector<Effect_FloatingText*,std::allocator<Effect_FloatingText*>> *)this_00);
  PinataManager::~PinataManager((PinataManager *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayRewardDialog::~LevelOfTheDayRewardDialog() */

void __thiscall
LevelOfTheDayRewardDialog::~LevelOfTheDayRewardDialog(LevelOfTheDayRewardDialog *this)

{
  ~LevelOfTheDayRewardDialog(this);
  AK::FreeHook(this);
  return;
}

