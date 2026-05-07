// Class: Sexy::RtInvokeVariant


/* Sexy::RtInvokeVariant::RtInvokeVariant(int) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  *(undefined4 *)this = 1;
  return;
}


/* S2C_ACLog& Sexy::RtInvokeVariant::Get<S2C_ACLog&>() const */

S2C_ACLog * __thiscall Sexy::RtInvokeVariant::Get<S2C_ACLog&>(RtInvokeVariant *this)

{
  S2C_ACLog *pSVar1;
  
  pSVar1 = (S2C_ACLog *)FUN_031db9d4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* UIMessageBox* Sexy::RtInvokeVariant::Get<UIMessageBox*>() const */

UIMessageBox * __thiscall Sexy::RtInvokeVariant::Get<UIMessageBox*>(RtInvokeVariant *this)

{
  UIMessageBox *pUVar1;
  
  pUVar1 = (UIMessageBox *)FUN_031db9d8(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* int Sexy::RtInvokeVariant::Get<int>() const */

int __thiscall Sexy::RtInvokeVariant::Get<int>(RtInvokeVariant *this)

{
  int iVar1;
  
  iVar1 = FUN_031db278(*(undefined4 *)(this + 8));
  return iVar1;
}


/* bool Sexy::RtInvokeVariant::Get<bool>() const */

bool __thiscall Sexy::RtInvokeVariant::Get<bool>(RtInvokeVariant *this)

{
  undefined1 uVar1;
  
  uVar1 = FUN_03250e10(*(undefined4 *)(this + 8));
  return (bool)uVar1;
}


/* std::string const& Sexy::RtInvokeVariant::Get<std::string const&>() const */

string * __thiscall Sexy::RtInvokeVariant::Get<std::string_const&>(RtInvokeVariant *this)

{
  string *psVar1;
  
  psVar1 = (string *)FUN_0325e61c(*(undefined8 *)(this + 8));
  return psVar1;
}


/* GameState Sexy::RtInvokeVariant::Get<GameState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<GameState>(RtInvokeVariant *this)

{
  FUN_0325d708(*(undefined4 *)(this + 8));
  return;
}


/* EASquaredAdFinishedReason::EASquaredAdFinishedReason
   Sexy::RtInvokeVariant::Get<EASquaredAdFinishedReason::EASquaredAdFinishedReason>() const */

void __thiscall
Sexy::RtInvokeVariant::Get<EASquaredAdFinishedReason::EASquaredAdFinishedReason>
          (RtInvokeVariant *this)

{
  FUN_0325d704(*(undefined4 *)(this + 8));
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(unsigned char) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,uchar param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)(this + 8) = (uint)param_1;
  return;
}


/* Plant* Sexy::RtInvokeVariant::Get<Plant*>() const */

Plant * __thiscall Sexy::RtInvokeVariant::Get<Plant*>(RtInvokeVariant *this)

{
  Plant *pPVar1;
  
  pPVar1 = (Plant *)FUN_0329dfe8(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* Sexy::Point const& Sexy::RtInvokeVariant::Get<Sexy::Point const&>() const */

Point * __thiscall Sexy::RtInvokeVariant::Get<Sexy::Point_const&>(RtInvokeVariant *this)

{
  Point *pPVar1;
  
  pPVar1 = (Point *)FUN_0329dfec(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PlantType const* Sexy::RtInvokeVariant::Get<PlantType const*>() const */

PlantType * __thiscall Sexy::RtInvokeVariant::Get<PlantType_const*>(RtInvokeVariant *this)

{
  PlantType *pPVar1;
  
  pPVar1 = (PlantType *)FUN_0329dff0(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* std::vector<PlantingReason, std::allocator<PlantingReason> >*
   Sexy::RtInvokeVariant::Get<std::vector<PlantingReason, std::allocator<PlantingReason> >*>() const
    */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<PlantingReason,std::allocator<PlantingReason>>*>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_0329dff4(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* WaveType::WaveType Sexy::RtInvokeVariant::Get<WaveType::WaveType>() const */

void __thiscall Sexy::RtInvokeVariant::Get<WaveType::WaveType>(RtInvokeVariant *this)

{
  FUN_0329b4e0(*(undefined4 *)(this + 8));
  return;
}


/* Challenge* Sexy::RtInvokeVariant::Get<Challenge*>() const */

Challenge * __thiscall Sexy::RtInvokeVariant::Get<Challenge*>(RtInvokeVariant *this)

{
  Challenge *pCVar1;
  
  pCVar1 = (Challenge *)FUN_0329dff8(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* Collectable* Sexy::RtInvokeVariant::Get<Collectable*>() const */

Collectable * __thiscall Sexy::RtInvokeVariant::Get<Collectable*>(RtInvokeVariant *this)

{
  Collectable *pCVar1;
  
  pCVar1 = (Collectable *)FUN_0329dffc(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* Zombie* Sexy::RtInvokeVariant::Get<Zombie*>() const */

Zombie * __thiscall Sexy::RtInvokeVariant::Get<Zombie*>(RtInvokeVariant *this)

{
  Zombie *pZVar1;
  
  pZVar1 = (Zombie *)FUN_0329e000(*(undefined8 *)(this + 8));
  return pZVar1;
}


/* DamageInfo const* Sexy::RtInvokeVariant::Get<DamageInfo const*>() const */

DamageInfo * __thiscall Sexy::RtInvokeVariant::Get<DamageInfo_const*>(RtInvokeVariant *this)

{
  DamageInfo *pDVar1;
  
  pDVar1 = (DamageInfo *)FUN_0329e004(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* float Sexy::RtInvokeVariant::Get<float>() const */

float __thiscall Sexy::RtInvokeVariant::Get<float>(RtInvokeVariant *this)

{
  float fVar1;
  
  fVar1 = (float)FUN_0329b2d4(*(undefined4 *)(this + 8));
  return fVar1;
}


/* Sexy::Graphics* Sexy::RtInvokeVariant::Get<Sexy::Graphics*>() const */

Graphics * __thiscall Sexy::RtInvokeVariant::Get<Sexy::Graphics*>(RtInvokeVariant *this)

{
  Graphics *pGVar1;
  
  pGVar1 = (Graphics *)FUN_0329e008(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* IntroState Sexy::RtInvokeVariant::Get<IntroState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<IntroState>(RtInvokeVariant *this)

{
  FUN_0329b55c(*(undefined4 *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtInvokeVariant Sexy::RtInvokeVariant::ConvertReturnValueToVariant<bool>(bool) */

void Sexy::RtInvokeVariant::ConvertReturnValueToVariant<bool>(bool param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtInvokeVariant((RtInvokeVariant *)&local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* RenderQueue* Sexy::RtInvokeVariant::Get<RenderQueue*>() const */

RenderQueue * __thiscall Sexy::RtInvokeVariant::Get<RenderQueue*>(RtInvokeVariant *this)

{
  RenderQueue *pRVar1;
  
  pRVar1 = (RenderQueue *)FUN_0329e00c(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* Sexy::Touch const& Sexy::RtInvokeVariant::Get<Sexy::Touch const&>() const */

Touch * __thiscall Sexy::RtInvokeVariant::Get<Sexy::Touch_const&>(RtInvokeVariant *this)

{
  Touch *pTVar1;
  
  pTVar1 = (Touch *)FUN_0329e010(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* std::set<int, std::less<int>, std::allocator<int> > const&
   Sexy::RtInvokeVariant::Get<std::set<int, std::less<int>, std::allocator<int> > const&>() const */

set * __thiscall
Sexy::RtInvokeVariant::Get<std::set<int,std::less<int>,std::allocator<int>>const&>
          (RtInvokeVariant *this)

{
  set *psVar1;
  
  psVar1 = (set *)FUN_03395874(*(undefined8 *)(this + 8));
  return psVar1;
}


/* PlantPackage* Sexy::RtInvokeVariant::Get<PlantPackage*>() const */

PlantPackage * __thiscall Sexy::RtInvokeVariant::Get<PlantPackage*>(RtInvokeVariant *this)

{
  PlantPackage *pPVar1;
  
  pPVar1 = (PlantPackage *)FUN_03395878(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* S2C_GachaInfo* Sexy::RtInvokeVariant::Get<S2C_GachaInfo*>() const */

S2C_GachaInfo * __thiscall Sexy::RtInvokeVariant::Get<S2C_GachaInfo*>(RtInvokeVariant *this)

{
  S2C_GachaInfo *pSVar1;
  
  pSVar1 = (S2C_GachaInfo *)FUN_0339587c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* MagentoProductProps* Sexy::RtInvokeVariant::Get<MagentoProductProps*>() const */

MagentoProductProps * __thiscall
Sexy::RtInvokeVariant::Get<MagentoProductProps*>(RtInvokeVariant *this)

{
  MagentoProductProps *pMVar1;
  
  pMVar1 = (MagentoProductProps *)FUN_03395880(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* HotUIWidget* Sexy::RtInvokeVariant::Get<HotUIWidget*>() const */

HotUIWidget * __thiscall Sexy::RtInvokeVariant::Get<HotUIWidget*>(RtInvokeVariant *this)

{
  HotUIWidget *pHVar1;
  
  pHVar1 = (HotUIWidget *)FUN_033bd918(*(undefined8 *)(this + 8));
  return pHVar1;
}


/* ZombieState Sexy::RtInvokeVariant::Get<ZombieState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<ZombieState>(RtInvokeVariant *this)

{
  FUN_033d38b8(*(undefined4 *)(this + 8));
  return;
}


/* RunningPlayer* Sexy::RtInvokeVariant::Get<RunningPlayer*>() const */

RunningPlayer * __thiscall Sexy::RtInvokeVariant::Get<RunningPlayer*>(RtInvokeVariant *this)

{
  RunningPlayer *pRVar1;
  
  pRVar1 = (RunningPlayer *)FUN_033e9844(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* Sexy::RtSerialCommand* Sexy::RtInvokeVariant::Get<Sexy::RtSerialCommand*>() const */

RtSerialCommand * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::RtSerialCommand*>(RtInvokeVariant *this)

{
  RtSerialCommand *pRVar1;
  
  pRVar1 = (RtSerialCommand *)FUN_033e9848(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* RunningPlayerState Sexy::RtInvokeVariant::Get<RunningPlayerState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RunningPlayerState>(RtInvokeVariant *this)

{
  FUN_033e94e4(*(undefined4 *)(this + 8));
  return;
}


/* S2C_ShopItemPurchaseInfo const* Sexy::RtInvokeVariant::Get<S2C_ShopItemPurchaseInfo const*>()
   const */

S2C_ShopItemPurchaseInfo * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ShopItemPurchaseInfo_const*>(RtInvokeVariant *this)

{
  S2C_ShopItemPurchaseInfo *pSVar1;
  
  pSVar1 = (S2C_ShopItemPurchaseInfo *)FUN_03429fc0(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* StandaloneEffect* Sexy::RtInvokeVariant::Get<StandaloneEffect*>() const */

StandaloneEffect * __thiscall Sexy::RtInvokeVariant::Get<StandaloneEffect*>(RtInvokeVariant *this)

{
  StandaloneEffect *pSVar1;
  
  pSVar1 = (StandaloneEffect *)FUN_03462164(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* NewPVPMatchingScreenState Sexy::RtInvokeVariant::Get<NewPVPMatchingScreenState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<NewPVPMatchingScreenState>(RtInvokeVariant *this)

{
  FUN_034ad880(*(undefined4 *)(this + 8));
  return;
}


/* StateAction Sexy::RtInvokeVariant::Get<StateAction>() const */

void __thiscall Sexy::RtInvokeVariant::Get<StateAction>(RtInvokeVariant *this)

{
  FUN_034ad7ec(*(undefined4 *)(this + 8));
  return;
}


/* Effect_PopAnim* Sexy::RtInvokeVariant::Get<Effect_PopAnim*>() const */

Effect_PopAnim * __thiscall Sexy::RtInvokeVariant::Get<Effect_PopAnim*>(RtInvokeVariant *this)

{
  Effect_PopAnim *pEVar1;
  
  pEVar1 = (Effect_PopAnim *)FUN_03516e00(*(undefined8 *)(this + 8));
  return pEVar1;
}


/* GridItemAnimation* Sexy::RtInvokeVariant::Get<GridItemAnimation*>() const */

GridItemAnimation * __thiscall Sexy::RtInvokeVariant::Get<GridItemAnimation*>(RtInvokeVariant *this)

{
  GridItemAnimation *pGVar1;
  
  pGVar1 = (GridItemAnimation *)FUN_03516e04(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* Projectile* Sexy::RtInvokeVariant::Get<Projectile*>() const */

Projectile * __thiscall Sexy::RtInvokeVariant::Get<Projectile*>(RtInvokeVariant *this)

{
  Projectile *pPVar1;
  
  pPVar1 = (Projectile *)FUN_03516e08(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* BaseCursor* Sexy::RtInvokeVariant::Get<BaseCursor*>() const */

BaseCursor * __thiscall Sexy::RtInvokeVariant::Get<BaseCursor*>(RtInvokeVariant *this)

{
  BaseCursor *pBVar1;
  
  pBVar1 = (BaseCursor *)FUN_0351d994(*(undefined8 *)(this + 8));
  return pBVar1;
}


/* std::vector<ZombieCacheData, std::allocator<ZombieCacheData> > const&
   Sexy::RtInvokeVariant::Get<std::vector<ZombieCacheData, std::allocator<ZombieCacheData> >
   const&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_0351d998(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* WidgetState Sexy::RtInvokeVariant::Get<WidgetState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<WidgetState>(RtInvokeVariant *this)

{
  FUN_0351d4a4(*(undefined4 *)(this + 8));
  return;
}


/* std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&
   Sexy::RtInvokeVariant::Get<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&>()
   const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_0353a2fc(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&
   Sexy::RtInvokeVariant::Get<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&>() const
    */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_035507f8(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* CommonRewardItemData const& Sexy::RtInvokeVariant::Get<CommonRewardItemData const&>() const */

CommonRewardItemData * __thiscall
Sexy::RtInvokeVariant::Get<CommonRewardItemData_const&>(RtInvokeVariant *this)

{
  CommonRewardItemData *pCVar1;
  
  pCVar1 = (CommonRewardItemData *)FUN_035507fc(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* New_S2C_BuyCardGameReward const* Sexy::RtInvokeVariant::Get<New_S2C_BuyCardGameReward const*>()
   const */

New_S2C_BuyCardGameReward * __thiscall
Sexy::RtInvokeVariant::Get<New_S2C_BuyCardGameReward_const*>(RtInvokeVariant *this)

{
  New_S2C_BuyCardGameReward *pNVar1;
  
  pNVar1 = (New_S2C_BuyCardGameReward *)FUN_0355deec(*(undefined8 *)(this + 8));
  return pNVar1;
}


/* CustomNetworkPreviewData const& Sexy::RtInvokeVariant::Get<CustomNetworkPreviewData const&>()
   const */

CustomNetworkPreviewData * __thiscall
Sexy::RtInvokeVariant::Get<CustomNetworkPreviewData_const&>(RtInvokeVariant *this)

{
  CustomNetworkPreviewData *pCVar1;
  
  pCVar1 = (CustomNetworkPreviewData *)FUN_035e63e8(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* int const& Sexy::RtInvokeVariant::Get<int const&>() const */

int * __thiscall Sexy::RtInvokeVariant::Get<int_const&>(RtInvokeVariant *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_035e63ec(*(undefined8 *)(this + 8));
  return piVar1;
}


/* PVZ1IState Sexy::RtInvokeVariant::Get<PVZ1IState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PVZ1IState>(RtInvokeVariant *this)

{
  FUN_03615c24(*(undefined4 *)(this + 8));
  return;
}


/* PVZ1DashboardLoadingSubState Sexy::RtInvokeVariant::Get<PVZ1DashboardLoadingSubState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PVZ1DashboardLoadingSubState>(RtInvokeVariant *this)

{
  FUN_03618b58(*(undefined4 *)(this + 8));
  return;
}


/* BoardEntity* Sexy::RtInvokeVariant::Get<BoardEntity*>() const */

BoardEntity * __thiscall Sexy::RtInvokeVariant::Get<BoardEntity*>(RtInvokeVariant *this)

{
  BoardEntity *pBVar1;
  
  pBVar1 = (BoardEntity *)FUN_03636144(*(undefined8 *)(this + 8));
  return pBVar1;
}


/* DynamicSizeData* Sexy::RtInvokeVariant::Get<DynamicSizeData*>() const */

DynamicSizeData * __thiscall Sexy::RtInvokeVariant::Get<DynamicSizeData*>(RtInvokeVariant *this)

{
  DynamicSizeData *pDVar1;
  
  pDVar1 = (DynamicSizeData *)FUN_03655178(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* RiftTournamentResultsScreenState Sexy::RtInvokeVariant::Get<RiftTournamentResultsScreenState>()
   const */

void __thiscall Sexy::RtInvokeVariant::Get<RiftTournamentResultsScreenState>(RtInvokeVariant *this)

{
  FUN_03676f18(*(undefined4 *)(this + 8));
  return;
}


/* Sexy::RtWeakPtr<LevelDefinition>& Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<LevelDefinition>&>()
   const */

RtWeakPtr * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<LevelDefinition>&>(RtInvokeVariant *this)

{
  RtWeakPtr *pRVar1;
  
  pRVar1 = (RtWeakPtr *)FUN_0369ef2c(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* RiftDashboardLoadingSubState Sexy::RtInvokeVariant::Get<RiftDashboardLoadingSubState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RiftDashboardLoadingSubState>(RtInvokeVariant *this)

{
  FUN_036ad144(*(undefined4 *)(this + 8));
  return;
}


/* std::string& Sexy::RtInvokeVariant::Get<std::string&>() const */

string * __thiscall Sexy::RtInvokeVariant::Get<std::string&>(RtInvokeVariant *this)

{
  string *psVar1;
  
  psVar1 = (string *)FUN_036da2b4(*(undefined8 *)(this + 8));
  return psVar1;
}


/* Sexy::Point& Sexy::RtInvokeVariant::Get<Sexy::Point&>() const */

Point * __thiscall Sexy::RtInvokeVariant::Get<Sexy::Point&>(RtInvokeVariant *this)

{
  Point *pPVar1;
  
  pPVar1 = (Point *)FUN_036da2b8(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PennyPerk* Sexy::RtInvokeVariant::Get<PennyPerk*>() const */

PennyPerk * __thiscall Sexy::RtInvokeVariant::Get<PennyPerk*>(RtInvokeVariant *this)

{
  PennyPerk *pPVar1;
  
  pPVar1 = (PennyPerk *)FUN_036e36c0(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* ProfileUtils::ChallengeStatusHolder*
   Sexy::RtInvokeVariant::Get<ProfileUtils::ChallengeStatusHolder*>() const */

ChallengeStatusHolder * __thiscall
Sexy::RtInvokeVariant::Get<ProfileUtils::ChallengeStatusHolder*>(RtInvokeVariant *this)

{
  ChallengeStatusHolder *pCVar1;
  
  pCVar1 = (ChallengeStatusHolder *)FUN_036e5980(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* SecurityGourdState Sexy::RtInvokeVariant::Get<SecurityGourdState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SecurityGourdState>(RtInvokeVariant *this)

{
  FUN_036e9378(*(undefined4 *)(this + 8));
  return;
}


/* WaveManagerProperties* Sexy::RtInvokeVariant::Get<WaveManagerProperties*>() const */

WaveManagerProperties * __thiscall
Sexy::RtInvokeVariant::Get<WaveManagerProperties*>(RtInvokeVariant *this)

{
  WaveManagerProperties *pWVar1;
  
  pWVar1 = (WaveManagerProperties *)FUN_036eb2f8(*(undefined8 *)(this + 8));
  return pWVar1;
}


/* DamageInfo const& Sexy::RtInvokeVariant::Get<DamageInfo const&>() const */

DamageInfo * __thiscall Sexy::RtInvokeVariant::Get<DamageInfo_const&>(RtInvokeVariant *this)

{
  DamageInfo *pDVar1;
  
  pDVar1 = (DamageInfo *)FUN_036f7680(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* int* Sexy::RtInvokeVariant::Get<int*>() const */

int * __thiscall Sexy::RtInvokeVariant::Get<int*>(RtInvokeVariant *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_036f7684(*(undefined8 *)(this + 8));
  return piVar1;
}


/* float* Sexy::RtInvokeVariant::Get<float*>() const */

float * __thiscall Sexy::RtInvokeVariant::Get<float*>(RtInvokeVariant *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_036f7688(*(undefined8 *)(this + 8));
  return pfVar1;
}


/* GridItemGravestoneCoinOnDestruction*
   Sexy::RtInvokeVariant::Get<GridItemGravestoneCoinOnDestruction*>() const */

GridItemGravestoneCoinOnDestruction * __thiscall
Sexy::RtInvokeVariant::Get<GridItemGravestoneCoinOnDestruction*>(RtInvokeVariant *this)

{
  GridItemGravestoneCoinOnDestruction *pGVar1;
  
  pGVar1 = (GridItemGravestoneCoinOnDestruction *)FUN_036f768c(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* PlantGroup* Sexy::RtInvokeVariant::Get<PlantGroup*>() const */

PlantGroup * __thiscall Sexy::RtInvokeVariant::Get<PlantGroup*>(RtInvokeVariant *this)

{
  PlantGroup *pPVar1;
  
  pPVar1 = (PlantGroup *)FUN_03719ef0(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* RealObject* Sexy::RtInvokeVariant::Get<RealObject*>() const */

RealObject * __thiscall Sexy::RtInvokeVariant::Get<RealObject*>(RtInvokeVariant *this)

{
  RealObject *pRVar1;
  
  pRVar1 = (RealObject *)FUN_037269d4(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* GridItemGravestone* Sexy::RtInvokeVariant::Get<GridItemGravestone*>() const */

GridItemGravestone * __thiscall
Sexy::RtInvokeVariant::Get<GridItemGravestone*>(RtInvokeVariant *this)

{
  GridItemGravestone *pGVar1;
  
  pGVar1 = (GridItemGravestone *)FUN_0384df68(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* DamageInfo& Sexy::RtInvokeVariant::Get<DamageInfo&>() const */

DamageInfo * __thiscall Sexy::RtInvokeVariant::Get<DamageInfo&>(RtInvokeVariant *this)

{
  DamageInfo *pDVar1;
  
  pDVar1 = (DamageInfo *)FUN_0384df6c(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* long Sexy::RtInvokeVariant::Get<long>() const */

long __thiscall Sexy::RtInvokeVariant::Get<long>(RtInvokeVariant *this)

{
  long lVar1;
  
  lVar1 = FUN_0384dcf4(*(undefined8 *)(this + 8));
  return lVar1;
}


/* PVZGameStateLoadingState Sexy::RtInvokeVariant::Get<PVZGameStateLoadingState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PVZGameStateLoadingState>(RtInvokeVariant *this)

{
  FUN_03856248(*(undefined4 *)(this + 8));
  return;
}


/* MatchLoadingScreenState Sexy::RtInvokeVariant::Get<MatchLoadingScreenState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MatchLoadingScreenState>(RtInvokeVariant *this)

{
  FUN_03862f94(*(undefined4 *)(this + 8));
  return;
}


/* MatchmakingScreenState Sexy::RtInvokeVariant::Get<MatchmakingScreenState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MatchmakingScreenState>(RtInvokeVariant *this)

{
  FUN_0386427c(*(undefined4 *)(this + 8));
  return;
}


/* TournamentResultsScreenState Sexy::RtInvokeVariant::Get<TournamentResultsScreenState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<TournamentResultsScreenState>(RtInvokeVariant *this)

{
  FUN_038716c8(*(undefined4 *)(this + 8));
  return;
}


/* WinstreakEntryState Sexy::RtInvokeVariant::Get<WinstreakEntryState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<WinstreakEntryState>(RtInvokeVariant *this)

{
  FUN_038762d4(*(undefined4 *)(this + 8));
  return;
}


/* TideModule const* Sexy::RtInvokeVariant::Get<TideModule const*>() const */

TideModule * __thiscall Sexy::RtInvokeVariant::Get<TideModule_const*>(RtInvokeVariant *this)

{
  TideModule *pTVar1;
  
  pTVar1 = (TideModule *)FUN_038a8d5c(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* MiniGameCollectionEndLevelUI* Sexy::RtInvokeVariant::Get<MiniGameCollectionEndLevelUI*>() const
    */

MiniGameCollectionEndLevelUI * __thiscall
Sexy::RtInvokeVariant::Get<MiniGameCollectionEndLevelUI*>(RtInvokeVariant *this)

{
  MiniGameCollectionEndLevelUI *pMVar1;
  
  pMVar1 = (MiniGameCollectionEndLevelUI *)FUN_038b4230(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* CollectableState Sexy::RtInvokeVariant::Get<CollectableState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CollectableState>(RtInvokeVariant *this)

{
  FUN_038e4ad8(*(undefined4 *)(this + 8));
  return;
}


/* PlantFlattenedshroom* Sexy::RtInvokeVariant::Get<PlantFlattenedshroom*>() const */

PlantFlattenedshroom * __thiscall
Sexy::RtInvokeVariant::Get<PlantFlattenedshroom*>(RtInvokeVariant *this)

{
  PlantFlattenedshroom *pPVar1;
  
  pPVar1 = (PlantFlattenedshroom *)FUN_038ebf58(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* GridItemSmokeManhole* Sexy::RtInvokeVariant::Get<GridItemSmokeManhole*>() const */

GridItemSmokeManhole * __thiscall
Sexy::RtInvokeVariant::Get<GridItemSmokeManhole*>(RtInvokeVariant *this)

{
  GridItemSmokeManhole *pGVar1;
  
  pGVar1 = (GridItemSmokeManhole *)FUN_038ee6bc(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* PlantLotusshooter* Sexy::RtInvokeVariant::Get<PlantLotusshooter*>() const */

PlantLotusshooter * __thiscall Sexy::RtInvokeVariant::Get<PlantLotusshooter*>(RtInvokeVariant *this)

{
  PlantLotusshooter *pPVar1;
  
  pPVar1 = (PlantLotusshooter *)FUN_038f1b68(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* S2C_StoneLotteryReward const& Sexy::RtInvokeVariant::Get<S2C_StoneLotteryReward const&>() const
    */

S2C_StoneLotteryReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_StoneLotteryReward_const&>(RtInvokeVariant *this)

{
  S2C_StoneLotteryReward *pSVar1;
  
  pSVar1 = (S2C_StoneLotteryReward *)FUN_039155cc(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* UINameAuthentication* Sexy::RtInvokeVariant::Get<UINameAuthentication*>() const */

UINameAuthentication * __thiscall
Sexy::RtInvokeVariant::Get<UINameAuthentication*>(RtInvokeVariant *this)

{
  UINameAuthentication *pUVar1;
  
  pUVar1 = (UINameAuthentication *)FUN_0391f508(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* S2C_7DaysLoginReward const* Sexy::RtInvokeVariant::Get<S2C_7DaysLoginReward const*>() const */

S2C_7DaysLoginReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_7DaysLoginReward_const*>(RtInvokeVariant *this)

{
  S2C_7DaysLoginReward *pSVar1;
  
  pSVar1 = (S2C_7DaysLoginReward *)FUN_039255b4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_MiniGameResult const* Sexy::RtInvokeVariant::Get<S2C_MiniGameResult const*>() const */

S2C_MiniGameResult * __thiscall
Sexy::RtInvokeVariant::Get<S2C_MiniGameResult_const*>(RtInvokeVariant *this)

{
  S2C_MiniGameResult *pSVar1;
  
  pSVar1 = (S2C_MiniGameResult *)FUN_039312dc(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* TimeChallengeEndLevelUI* Sexy::RtInvokeVariant::Get<TimeChallengeEndLevelUI*>() const */

TimeChallengeEndLevelUI * __thiscall
Sexy::RtInvokeVariant::Get<TimeChallengeEndLevelUI*>(RtInvokeVariant *this)

{
  TimeChallengeEndLevelUI *pTVar1;
  
  pTVar1 = (TimeChallengeEndLevelUI *)FUN_039312e0(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtInvokeVariant Sexy::RtInvokeVariant::ConvertReturnValueToVariant<int>(int) */

void Sexy::RtInvokeVariant::ConvertReturnValueToVariant<int>(int param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtInvokeVariant((RtInvokeVariant *)&local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* S2C_7DaysLoginSpringReward const* Sexy::RtInvokeVariant::Get<S2C_7DaysLoginSpringReward const*>()
   const */

S2C_7DaysLoginSpringReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_7DaysLoginSpringReward_const*>(RtInvokeVariant *this)

{
  S2C_7DaysLoginSpringReward *pSVar1;
  
  pSVar1 = (S2C_7DaysLoginSpringReward *)FUN_03943b08(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_S2C_LimitLotteryCupShop const* Sexy::RtInvokeVariant::Get<S2C_S2C_LimitLotteryCupShop
   const*>() const */

S2C_S2C_LimitLotteryCupShop * __thiscall
Sexy::RtInvokeVariant::Get<S2C_S2C_LimitLotteryCupShop_const*>(RtInvokeVariant *this)

{
  S2C_S2C_LimitLotteryCupShop *pSVar1;
  
  pSVar1 = (S2C_S2C_LimitLotteryCupShop *)FUN_03989680(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_SummeryLotteryData2018 const& Sexy::RtInvokeVariant::Get<S2C_SummeryLotteryData2018 const&>()
   const */

S2C_SummeryLotteryData2018 * __thiscall
Sexy::RtInvokeVariant::Get<S2C_SummeryLotteryData2018_const&>(RtInvokeVariant *this)

{
  S2C_SummeryLotteryData2018 *pSVar1;
  
  pSVar1 = (S2C_SummeryLotteryData2018 *)FUN_03989684(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_LimitLotteryCrystalBuy const* Sexy::RtInvokeVariant::Get<S2C_LimitLotteryCrystalBuy const*>()
   const */

S2C_LimitLotteryCrystalBuy * __thiscall
Sexy::RtInvokeVariant::Get<S2C_LimitLotteryCrystalBuy_const*>(RtInvokeVariant *this)

{
  S2C_LimitLotteryCrystalBuy *pSVar1;
  
  pSVar1 = (S2C_LimitLotteryCrystalBuy *)FUN_03989688(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_LimitLotteryReward const* Sexy::RtInvokeVariant::Get<S2C_LimitLotteryReward const*>() const
    */

S2C_LimitLotteryReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_LimitLotteryReward_const*>(RtInvokeVariant *this)

{
  S2C_LimitLotteryReward *pSVar1;
  
  pSVar1 = (S2C_LimitLotteryReward *)FUN_0398968c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* TravelLogRewardData* Sexy::RtInvokeVariant::Get<TravelLogRewardData*>() const */

TravelLogRewardData * __thiscall
Sexy::RtInvokeVariant::Get<TravelLogRewardData*>(RtInvokeVariant *this)

{
  TravelLogRewardData *pTVar1;
  
  pTVar1 = (TravelLogRewardData *)FUN_039dcc50(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* LevelDefinitionForTask* Sexy::RtInvokeVariant::Get<LevelDefinitionForTask*>() const */

LevelDefinitionForTask * __thiscall
Sexy::RtInvokeVariant::Get<LevelDefinitionForTask*>(RtInvokeVariant *this)

{
  LevelDefinitionForTask *pLVar1;
  
  pLVar1 = (LevelDefinitionForTask *)FUN_039e816c(*(undefined8 *)(this + 8));
  return pLVar1;
}


/* S2C_BillingReward const* Sexy::RtInvokeVariant::Get<S2C_BillingReward const*>() const */

S2C_BillingReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_BillingReward_const*>(RtInvokeVariant *this)

{
  S2C_BillingReward *pSVar1;
  
  pSVar1 = (S2C_BillingReward *)FUN_039f0540(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* CollectableSun* Sexy::RtInvokeVariant::Get<CollectableSun*>() const */

CollectableSun * __thiscall Sexy::RtInvokeVariant::Get<CollectableSun*>(RtInvokeVariant *this)

{
  CollectableSun *pCVar1;
  
  pCVar1 = (CollectableSun *)FUN_03a0436c(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* NewPVPAddZombieMessageData* Sexy::RtInvokeVariant::Get<NewPVPAddZombieMessageData*>() const */

NewPVPAddZombieMessageData * __thiscall
Sexy::RtInvokeVariant::Get<NewPVPAddZombieMessageData*>(RtInvokeVariant *this)

{
  NewPVPAddZombieMessageData *pNVar1;
  
  pNVar1 = (NewPVPAddZombieMessageData *)FUN_03a79ea4(*(undefined8 *)(this + 8));
  return pNVar1;
}


/* MapEventItem const* Sexy::RtInvokeVariant::Get<MapEventItem const*>() const */

MapEventItem * __thiscall Sexy::RtInvokeVariant::Get<MapEventItem_const*>(RtInvokeVariant *this)

{
  MapEventItem *pMVar1;
  
  pMVar1 = (MapEventItem *)FUN_03a79ea8(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* S2C_PiggyBankReward const* Sexy::RtInvokeVariant::Get<S2C_PiggyBankReward const*>() const */

S2C_PiggyBankReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_PiggyBankReward_const*>(RtInvokeVariant *this)

{
  S2C_PiggyBankReward *pSVar1;
  
  pSVar1 = (S2C_PiggyBankReward *)FUN_03ac26ec(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* MoleState Sexy::RtInvokeVariant::Get<MoleState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MoleState>(RtInvokeVariant *this)

{
  FUN_03b50660(*(undefined4 *)(this + 8));
  return;
}


/* BasePowerup* Sexy::RtInvokeVariant::Get<BasePowerup*>() const */

BasePowerup * __thiscall Sexy::RtInvokeVariant::Get<BasePowerup*>(RtInvokeVariant *this)

{
  BasePowerup *pBVar1;
  
  pBVar1 = (BasePowerup *)FUN_03b753c0(*(undefined8 *)(this + 8));
  return pBVar1;
}


/* PowerupState Sexy::RtInvokeVariant::Get<PowerupState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PowerupState>(RtInvokeVariant *this)

{
  FUN_03b75314(*(undefined4 *)(this + 8));
  return;
}


/* Bomb* Sexy::RtInvokeVariant::Get<Bomb*>() const */

Bomb * __thiscall Sexy::RtInvokeVariant::Get<Bomb*>(RtInvokeVariant *this)

{
  Bomb *pBVar1;
  
  pBVar1 = (Bomb *)FUN_03b9d604(*(undefined8 *)(this + 8));
  return pBVar1;
}


/* BombState Sexy::RtInvokeVariant::Get<BombState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<BombState>(RtInvokeVariant *this)

{
  FUN_03b9d558(*(undefined4 *)(this + 8));
  return;
}


/* ModernNewspaperZombieState Sexy::RtInvokeVariant::Get<ModernNewspaperZombieState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<ModernNewspaperZombieState>(RtInvokeVariant *this)

{
  FUN_03bc2ff4(*(undefined4 *)(this + 8));
  return;
}


/* PlantStatefulFramework* Sexy::RtInvokeVariant::Get<PlantStatefulFramework*>() const */

PlantStatefulFramework * __thiscall
Sexy::RtInvokeVariant::Get<PlantStatefulFramework*>(RtInvokeVariant *this)

{
  PlantStatefulFramework *pPVar1;
  
  pPVar1 = (PlantStatefulFramework *)FUN_03bde7e0(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PlantState Sexy::RtInvokeVariant::Get<PlantState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PlantState>(RtInvokeVariant *this)

{
  FUN_03bde6c0(*(undefined4 *)(this + 8));
  return;
}


/* ParsnipUltraProjectile* Sexy::RtInvokeVariant::Get<ParsnipUltraProjectile*>() const */

ParsnipUltraProjectile * __thiscall
Sexy::RtInvokeVariant::Get<ParsnipUltraProjectile*>(RtInvokeVariant *this)

{
  ParsnipUltraProjectile *pPVar1;
  
  pPVar1 = (ParsnipUltraProjectile *)FUN_03becabc(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* GridItemMechanismPlank* Sexy::RtInvokeVariant::Get<GridItemMechanismPlank*>() const */

GridItemMechanismPlank * __thiscall
Sexy::RtInvokeVariant::Get<GridItemMechanismPlank*>(RtInvokeVariant *this)

{
  GridItemMechanismPlank *pGVar1;
  
  pGVar1 = (GridItemMechanismPlank *)FUN_03c18310(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* GridItemRailcart* Sexy::RtInvokeVariant::Get<GridItemRailcart*>() const */

GridItemRailcart * __thiscall Sexy::RtInvokeVariant::Get<GridItemRailcart*>(RtInvokeVariant *this)

{
  GridItemRailcart *pGVar1;
  
  pGVar1 = (GridItemRailcart *)FUN_03c18314(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* GameObject* Sexy::RtInvokeVariant::Get<GameObject*>() const */

GameObject * __thiscall Sexy::RtInvokeVariant::Get<GameObject*>(RtInvokeVariant *this)

{
  GameObject *pGVar1;
  
  pGVar1 = (GameObject *)FUN_03c3ef38(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* std::vector<std::string, std::allocator<std::string > > const&
   Sexy::RtInvokeVariant::Get<std::vector<std::string, std::allocator<std::string > > const&>()
   const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<std::string,std::allocator<std::string>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03c75118(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* ConveyorRemoveSeedInstruction const& Sexy::RtInvokeVariant::Get<ConveyorRemoveSeedInstruction
   const&>() const */

ConveyorRemoveSeedInstruction * __thiscall
Sexy::RtInvokeVariant::Get<ConveyorRemoveSeedInstruction_const&>(RtInvokeVariant *this)

{
  ConveyorRemoveSeedInstruction *pCVar1;
  
  pCVar1 = (ConveyorRemoveSeedInstruction *)FUN_03c7511c(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* ConveyorAddSeedInstruction const& Sexy::RtInvokeVariant::Get<ConveyorAddSeedInstruction const&>()
   const */

ConveyorAddSeedInstruction * __thiscall
Sexy::RtInvokeVariant::Get<ConveyorAddSeedInstruction_const&>(RtInvokeVariant *this)

{
  ConveyorAddSeedInstruction *pCVar1;
  
  pCVar1 = (ConveyorAddSeedInstruction *)FUN_03c75120(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* SeedPacket* Sexy::RtInvokeVariant::Get<SeedPacket*>() const */

SeedPacket * __thiscall Sexy::RtInvokeVariant::Get<SeedPacket*>(RtInvokeVariant *this)

{
  SeedPacket *pSVar1;
  
  pSVar1 = (SeedPacket *)FUN_03c75124(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* WaveDefinition const* Sexy::RtInvokeVariant::Get<WaveDefinition const*>() const */

WaveDefinition * __thiscall Sexy::RtInvokeVariant::Get<WaveDefinition_const*>(RtInvokeVariant *this)

{
  WaveDefinition *pWVar1;
  
  pWVar1 = (WaveDefinition *)FUN_03c75128(*(undefined8 *)(this + 8));
  return pWVar1;
}


/* CrazyNPCState Sexy::RtInvokeVariant::Get<CrazyNPCState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CrazyNPCState>(RtInvokeVariant *this)

{
  FUN_03c7f858(*(undefined4 *)(this + 8));
  return;
}


/* CrazyNPC* Sexy::RtInvokeVariant::Get<CrazyNPC*>() const */

CrazyNPC * __thiscall Sexy::RtInvokeVariant::Get<CrazyNPC*>(RtInvokeVariant *this)

{
  CrazyNPC *pCVar1;
  
  pCVar1 = (CrazyNPC *)FUN_03c84174(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* CrazyNPCManagerState Sexy::RtInvokeVariant::Get<CrazyNPCManagerState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CrazyNPCManagerState>(RtInvokeVariant *this)

{
  FUN_03c84000(*(undefined4 *)(this + 8));
  return;
}


/* S2C_DangerRoomEndLevel const* Sexy::RtInvokeVariant::Get<S2C_DangerRoomEndLevel const*>() const
    */

S2C_DangerRoomEndLevel * __thiscall
Sexy::RtInvokeVariant::Get<S2C_DangerRoomEndLevel_const*>(RtInvokeVariant *this)

{
  S2C_DangerRoomEndLevel *pSVar1;
  
  pSVar1 = (S2C_DangerRoomEndLevel *)FUN_03c941d8(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* LawnMower* Sexy::RtInvokeVariant::Get<LawnMower*>() const */

LawnMower * __thiscall Sexy::RtInvokeVariant::Get<LawnMower*>(RtInvokeVariant *this)

{
  LawnMower *pLVar1;
  
  pLVar1 = (LawnMower *)FUN_03c941dc(*(undefined8 *)(this + 8));
  return pLVar1;
}


/* DangerRoomState Sexy::RtInvokeVariant::Get<DangerRoomState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<DangerRoomState>(RtInvokeVariant *this)

{
  FUN_03c93308(*(undefined4 *)(this + 8));
  return;
}


/* WorldData* Sexy::RtInvokeVariant::Get<WorldData*>() const */

WorldData * __thiscall Sexy::RtInvokeVariant::Get<WorldData*>(RtInvokeVariant *this)

{
  WorldData *pWVar1;
  
  pWVar1 = (WorldData *)FUN_03cc3590(*(undefined8 *)(this + 8));
  return pWVar1;
}


/* PlantFireGourd* Sexy::RtInvokeVariant::Get<PlantFireGourd*>() const */

PlantFireGourd * __thiscall Sexy::RtInvokeVariant::Get<PlantFireGourd*>(RtInvokeVariant *this)

{
  PlantFireGourd *pPVar1;
  
  pPVar1 = (PlantFireGourd *)FUN_03ce30b8(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* FiregourdTutorialIntro* Sexy::RtInvokeVariant::Get<FiregourdTutorialIntro*>() const */

FiregourdTutorialIntro * __thiscall
Sexy::RtInvokeVariant::Get<FiregourdTutorialIntro*>(RtInvokeVariant *this)

{
  FiregourdTutorialIntro *pFVar1;
  
  pFVar1 = (FiregourdTutorialIntro *)FUN_03ce30bc(*(undefined8 *)(this + 8));
  return pFVar1;
}


/* FTIState Sexy::RtInvokeVariant::Get<FTIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<FTIState>(RtInvokeVariant *this)

{
  FUN_03ce2f04(*(undefined4 *)(this + 8));
  return;
}


/* Fuse* Sexy::RtInvokeVariant::Get<Fuse*>() const */

Fuse * __thiscall Sexy::RtInvokeVariant::Get<Fuse*>(RtInvokeVariant *this)

{
  Fuse *pFVar1;
  
  pFVar1 = (Fuse *)FUN_03ce6b64(*(undefined8 *)(this + 8));
  return pFVar1;
}


/* FuseState Sexy::RtInvokeVariant::Get<FuseState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<FuseState>(RtInvokeVariant *this)

{
  FUN_03ce6aa0(*(undefined4 *)(this + 8));
  return;
}


/* GridItemRenaiRoller* Sexy::RtInvokeVariant::Get<GridItemRenaiRoller*>() const */

GridItemRenaiRoller * __thiscall
Sexy::RtInvokeVariant::Get<GridItemRenaiRoller*>(RtInvokeVariant *this)

{
  GridItemRenaiRoller *pGVar1;
  
  pGVar1 = (GridItemRenaiRoller *)FUN_03d06590(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* GridItemMazeStatue* Sexy::RtInvokeVariant::Get<GridItemMazeStatue*>() const */

GridItemMazeStatue * __thiscall
Sexy::RtInvokeVariant::Get<GridItemMazeStatue*>(RtInvokeVariant *this)

{
  GridItemMazeStatue *pGVar1;
  
  pGVar1 = (GridItemMazeStatue *)FUN_03d138a0(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* HeianSmokeBomb* Sexy::RtInvokeVariant::Get<HeianSmokeBomb*>() const */

HeianSmokeBomb * __thiscall Sexy::RtInvokeVariant::Get<HeianSmokeBomb*>(RtInvokeVariant *this)

{
  HeianSmokeBomb *pHVar1;
  
  pHVar1 = (HeianSmokeBomb *)FUN_03d24f7c(*(undefined8 *)(this + 8));
  return pHVar1;
}


/* GameTransitionState Sexy::RtInvokeVariant::Get<GameTransitionState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<GameTransitionState>(RtInvokeVariant *this)

{
  FUN_03d4f8ac(*(undefined4 *)(this + 8));
  return;
}


/* GridItem* Sexy::RtInvokeVariant::Get<GridItem*>() const */

GridItem * __thiscall Sexy::RtInvokeVariant::Get<GridItem*>(RtInvokeVariant *this)

{
  GridItem *pGVar1;
  
  pGVar1 = (GridItem *)FUN_03d5291c(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* CardGameGridItemStaff* Sexy::RtInvokeVariant::Get<CardGameGridItemStaff*>() const */

CardGameGridItemStaff * __thiscall
Sexy::RtInvokeVariant::Get<CardGameGridItemStaff*>(RtInvokeVariant *this)

{
  CardGameGridItemStaff *pCVar1;
  
  pCVar1 = (CardGameGridItemStaff *)FUN_03d5dc74(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* New_S2C_BuySecretAreaReward const* Sexy::RtInvokeVariant::Get<New_S2C_BuySecretAreaReward
   const*>() const */

New_S2C_BuySecretAreaReward * __thiscall
Sexy::RtInvokeVariant::Get<New_S2C_BuySecretAreaReward_const*>(RtInvokeVariant *this)

{
  New_S2C_BuySecretAreaReward *pNVar1;
  
  pNVar1 = (New_S2C_BuySecretAreaReward *)FUN_03dcba98(*(undefined8 *)(this + 8));
  return pNVar1;
}


/* BoardRegion* Sexy::RtInvokeVariant::Get<BoardRegion*>() const */

BoardRegion * __thiscall Sexy::RtInvokeVariant::Get<BoardRegion*>(RtInvokeVariant *this)

{
  BoardRegion *pBVar1;
  
  pBVar1 = (BoardRegion *)FUN_03e0c11c(*(undefined8 *)(this + 8));
  return pBVar1;
}


/* CollectablePlantUpgrade* Sexy::RtInvokeVariant::Get<CollectablePlantUpgrade*>() const */

CollectablePlantUpgrade * __thiscall
Sexy::RtInvokeVariant::Get<CollectablePlantUpgrade*>(RtInvokeVariant *this)

{
  CollectablePlantUpgrade *pCVar1;
  
  pCVar1 = (CollectablePlantUpgrade *)FUN_03e46ee8(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* OTIState Sexy::RtInvokeVariant::Get<OTIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<OTIState>(RtInvokeVariant *this)

{
  FUN_03e49578(*(undefined4 *)(this + 8));
  return;
}


/* TowerDefendIntro* Sexy::RtInvokeVariant::Get<TowerDefendIntro*>() const */

TowerDefendIntro * __thiscall Sexy::RtInvokeVariant::Get<TowerDefendIntro*>(RtInvokeVariant *this)

{
  TowerDefendIntro *pTVar1;
  
  pTVar1 = (TowerDefendIntro *)FUN_03e4c1b8(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* TDIState Sexy::RtInvokeVariant::Get<TDIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<TDIState>(RtInvokeVariant *this)

{
  FUN_03e4c088(*(undefined4 *)(this + 8));
  return;
}


/* SKIState Sexy::RtInvokeVariant::Get<SKIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SKIState>(RtInvokeVariant *this)

{
  FUN_03e4e5b0(*(undefined4 *)(this + 8));
  return;
}


/* SeedRainIntro* Sexy::RtInvokeVariant::Get<SeedRainIntro*>() const */

SeedRainIntro * __thiscall Sexy::RtInvokeVariant::Get<SeedRainIntro*>(RtInvokeVariant *this)

{
  SeedRainIntro *pSVar1;
  
  pSVar1 = (SeedRainIntro *)FUN_03e50ec4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SDIState Sexy::RtInvokeVariant::Get<SDIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SDIState>(RtInvokeVariant *this)

{
  FUN_03e50df8(*(undefined4 *)(this + 8));
  return;
}


/* ELIIState Sexy::RtInvokeVariant::Get<ELIIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<ELIIState>(RtInvokeVariant *this)

{
  FUN_03e53f90(*(undefined4 *)(this + 8));
  return;
}


/* SkyCityIntro* Sexy::RtInvokeVariant::Get<SkyCityIntro*>() const */

SkyCityIntro * __thiscall Sexy::RtInvokeVariant::Get<SkyCityIntro*>(RtInvokeVariant *this)

{
  SkyCityIntro *pSVar1;
  
  pSVar1 = (SkyCityIntro *)FUN_03e56310(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SCIState Sexy::RtInvokeVariant::Get<SCIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SCIState>(RtInvokeVariant *this)

{
  FUN_03e5624c(*(undefined4 *)(this + 8));
  return;
}


/* ChristmasProtectIntro* Sexy::RtInvokeVariant::Get<ChristmasProtectIntro*>() const */

ChristmasProtectIntro * __thiscall
Sexy::RtInvokeVariant::Get<ChristmasProtectIntro*>(RtInvokeVariant *this)

{
  ChristmasProtectIntro *pCVar1;
  
  pCVar1 = (ChristmasProtectIntro *)FUN_03e59620(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* CMPState Sexy::RtInvokeVariant::Get<CMPState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CMPState>(RtInvokeVariant *this)

{
  FUN_03e594ac(*(undefined4 *)(this + 8));
  return;
}


/* ThunderIntro* Sexy::RtInvokeVariant::Get<ThunderIntro*>() const */

ThunderIntro * __thiscall Sexy::RtInvokeVariant::Get<ThunderIntro*>(RtInvokeVariant *this)

{
  ThunderIntro *pTVar1;
  
  pTVar1 = (ThunderIntro *)FUN_03e5c78c(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* TIState Sexy::RtInvokeVariant::Get<TIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<TIState>(RtInvokeVariant *this)

{
  FUN_03e5c6c0(*(undefined4 *)(this + 8));
  return;
}


/* GridItemBrain* Sexy::RtInvokeVariant::Get<GridItemBrain*>() const */

GridItemBrain * __thiscall Sexy::RtInvokeVariant::Get<GridItemBrain*>(RtInvokeVariant *this)

{
  GridItemBrain *pGVar1;
  
  pGVar1 = (GridItemBrain *)FUN_03e6aa58(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* Sexy::RtWeakPtr<PlayerInfo> const& Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<PlayerInfo>
   const&>() const */

RtWeakPtr * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<PlayerInfo>const&>(RtInvokeVariant *this)

{
  RtWeakPtr *pRVar1;
  
  pRVar1 = (RtWeakPtr *)FUN_03e98214(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* PlayerInfo const* Sexy::RtInvokeVariant::Get<PlayerInfo const*>() const */

PlayerInfo * __thiscall Sexy::RtInvokeVariant::Get<PlayerInfo_const*>(RtInvokeVariant *this)

{
  PlayerInfo *pPVar1;
  
  pPVar1 = (PlayerInfo *)FUN_03e98218(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* Sexy::MemoryImage* Sexy::RtInvokeVariant::Get<Sexy::MemoryImage*>() const */

MemoryImage * __thiscall Sexy::RtInvokeVariant::Get<Sexy::MemoryImage*>(RtInvokeVariant *this)

{
  MemoryImage *pMVar1;
  
  pMVar1 = (MemoryImage *)FUN_03e9821c(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* Sexy::StructuredData const* Sexy::RtInvokeVariant::Get<Sexy::StructuredData const*>() const */

StructuredData * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::StructuredData_const*>(RtInvokeVariant *this)

{
  StructuredData *pSVar1;
  
  pSVar1 = (StructuredData *)FUN_03ea8b40(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* TrackInfo const& Sexy::RtInvokeVariant::Get<TrackInfo const&>() const */

TrackInfo * __thiscall Sexy::RtInvokeVariant::Get<TrackInfo_const&>(RtInvokeVariant *this)

{
  TrackInfo *pTVar1;
  
  pTVar1 = (TrackInfo *)FUN_03eab574(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* std::vector<int, std::allocator<int> > const& Sexy::RtInvokeVariant::Get<std::vector<int,
   std::allocator<int> > const&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab578(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* std::vector<int, std::allocator<int> >& Sexy::RtInvokeVariant::Get<std::vector<int,
   std::allocator<int> >&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<int,std::allocator<int>>&>(RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab57c(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&
   Sexy::RtInvokeVariant::Get<std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > > const&>() const */

map * __thiscall
Sexy::RtInvokeVariant::
Get<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
          (RtInvokeVariant *this)

{
  map *pmVar1;
  
  pmVar1 = (map *)FUN_03eab580(*(undefined8 *)(this + 8));
  return pmVar1;
}


/* std::vector<S2C_CodeRewardPlantNum, std::allocator<S2C_CodeRewardPlantNum> > const&
   Sexy::RtInvokeVariant::Get<std::vector<S2C_CodeRewardPlantNum,
   std::allocator<S2C_CodeRewardPlantNum> > const&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::
Get<std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab584(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* PlantAdventureLogInfo const& Sexy::RtInvokeVariant::Get<PlantAdventureLogInfo const&>() const */

PlantAdventureLogInfo * __thiscall
Sexy::RtInvokeVariant::Get<PlantAdventureLogInfo_const&>(RtInvokeVariant *this)

{
  PlantAdventureLogInfo *pPVar1;
  
  pPVar1 = (PlantAdventureLogInfo *)FUN_03eab588(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* Sexy::RtWeakPtr<MagentoProductProps> const&
   Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps> const&>() const */

RtWeakPtr * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps>const&>(RtInvokeVariant *this)

{
  RtWeakPtr *pRVar1;
  
  pRVar1 = (RtWeakPtr *)FUN_03eab58c(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* std::vector<LogCacheInfo, std::allocator<LogCacheInfo> >&
   Sexy::RtInvokeVariant::Get<std::vector<LogCacheInfo, std::allocator<LogCacheInfo> >&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<LogCacheInfo,std::allocator<LogCacheInfo>>&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab590(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* std::vector<PlantInfo, std::allocator<PlantInfo> >&
   Sexy::RtInvokeVariant::Get<std::vector<PlantInfo, std::allocator<PlantInfo> >&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<PlantInfo,std::allocator<PlantInfo>>&>(RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab594(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* TreasurePool const* Sexy::RtInvokeVariant::Get<TreasurePool const*>() const */

TreasurePool * __thiscall Sexy::RtInvokeVariant::Get<TreasurePool_const*>(RtInvokeVariant *this)

{
  TreasurePool *pTVar1;
  
  pTVar1 = (TreasurePool *)FUN_03eab598(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* std::vector<TreasureReward const*, std::allocator<TreasureReward const*> >&
   Sexy::RtInvokeVariant::Get<std::vector<TreasureReward const*, std::allocator<TreasureReward
   const*> >&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::
Get<std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_03eab59c(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* EventMetrics* Sexy::RtInvokeVariant::Get<EventMetrics*>() const */

EventMetrics * __thiscall Sexy::RtInvokeVariant::Get<EventMetrics*>(RtInvokeVariant *this)

{
  EventMetrics *pEVar1;
  
  pEVar1 = (EventMetrics *)FUN_03eab5a0(*(undefined8 *)(this + 8));
  return pEVar1;
}


/* PlantSalesUiReward const& Sexy::RtInvokeVariant::Get<PlantSalesUiReward const&>() const */

PlantSalesUiReward * __thiscall
Sexy::RtInvokeVariant::Get<PlantSalesUiReward_const&>(RtInvokeVariant *this)

{
  PlantSalesUiReward *pPVar1;
  
  pPVar1 = (PlantSalesUiReward *)FUN_03eab5a4(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* CollectableCoin* Sexy::RtInvokeVariant::Get<CollectableCoin*>() const */

CollectableCoin * __thiscall Sexy::RtInvokeVariant::Get<CollectableCoin*>(RtInvokeVariant *this)

{
  CollectableCoin *pCVar1;
  
  pCVar1 = (CollectableCoin *)FUN_03eab5a8(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* CollectablePlantfood* Sexy::RtInvokeVariant::Get<CollectablePlantfood*>() const */

CollectablePlantfood * __thiscall
Sexy::RtInvokeVariant::Get<CollectablePlantfood*>(RtInvokeVariant *this)

{
  CollectablePlantfood *pCVar1;
  
  pCVar1 = (CollectablePlantfood *)FUN_03eab5ac(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* bool* Sexy::RtInvokeVariant::Get<bool*>() const */

bool * __thiscall Sexy::RtInvokeVariant::Get<bool*>(RtInvokeVariant *this)

{
  bool *pbVar1;
  
  pbVar1 = (bool *)FUN_03f71200(*(undefined8 *)(this + 8));
  return pbVar1;
}


/* PowerupCukeTutorialState Sexy::RtInvokeVariant::Get<PowerupCukeTutorialState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PowerupCukeTutorialState>(RtInvokeVariant *this)

{
  FUN_03f711c8(*(undefined4 *)(this + 8));
  return;
}


/* CarGridItem* Sexy::RtInvokeVariant::Get<CarGridItem*>() const */

CarGridItem * __thiscall Sexy::RtInvokeVariant::Get<CarGridItem*>(RtInvokeVariant *this)

{
  CarGridItem *pCVar1;
  
  pCVar1 = (CarGridItem *)FUN_03fd27d4(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* PlantIceburg* Sexy::RtInvokeVariant::Get<PlantIceburg*>() const */

PlantIceburg * __thiscall Sexy::RtInvokeVariant::Get<PlantIceburg*>(RtInvokeVariant *this)

{
  PlantIceburg *pPVar1;
  
  pPVar1 = (PlantIceburg *)FUN_04034aa4(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* LaunchState Sexy::RtInvokeVariant::Get<LaunchState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<LaunchState>(RtInvokeVariant *this)

{
  FUN_040349ac(*(undefined4 *)(this + 8));
  return;
}


/* CarrotMissile* Sexy::RtInvokeVariant::Get<CarrotMissile*>() const */

CarrotMissile * __thiscall Sexy::RtInvokeVariant::Get<CarrotMissile*>(RtInvokeVariant *this)

{
  CarrotMissile *pCVar1;
  
  pCVar1 = (CarrotMissile *)FUN_0408c018(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* AcornProjectile* Sexy::RtInvokeVariant::Get<AcornProjectile*>() const */

AcornProjectile * __thiscall Sexy::RtInvokeVariant::Get<AcornProjectile*>(RtInvokeVariant *this)

{
  AcornProjectile *pAVar1;
  
  pAVar1 = (AcornProjectile *)FUN_040c0488(*(undefined8 *)(this + 8));
  return pAVar1;
}


/* PlantMagicShroom* Sexy::RtInvokeVariant::Get<PlantMagicShroom*>() const */

PlantMagicShroom * __thiscall Sexy::RtInvokeVariant::Get<PlantMagicShroom*>(RtInvokeVariant *this)

{
  PlantMagicShroom *pPVar1;
  
  pPVar1 = (PlantMagicShroom *)FUN_040d040c(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* MagicCard* Sexy::RtInvokeVariant::Get<MagicCard*>() const */

MagicCard * __thiscall Sexy::RtInvokeVariant::Get<MagicCard*>(RtInvokeVariant *this)

{
  MagicCard *pMVar1;
  
  pMVar1 = (MagicCard *)FUN_040d0410(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* MSState Sexy::RtInvokeVariant::Get<MSState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MSState>(RtInvokeVariant *this)

{
  FUN_040d0190(*(undefined4 *)(this + 8));
  return;
}


/* MSCState Sexy::RtInvokeVariant::Get<MSCState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MSCState>(RtInvokeVariant *this)

{
  FUN_040d0194(*(undefined4 *)(this + 8));
  return;
}


/* Sexy::SexyVector3& Sexy::RtInvokeVariant::Get<Sexy::SexyVector3&>() const */

SexyVector3 * __thiscall Sexy::RtInvokeVariant::Get<Sexy::SexyVector3&>(RtInvokeVariant *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)FUN_04115b54(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PlantLauncherProps const* Sexy::RtInvokeVariant::Get<PlantLauncherProps const*>() const */

PlantLauncherProps * __thiscall
Sexy::RtInvokeVariant::Get<PlantLauncherProps_const*>(RtInvokeVariant *this)

{
  PlantLauncherProps *pPVar1;
  
  pPVar1 = (PlantLauncherProps *)FUN_04115b58(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* Projectile& Sexy::RtInvokeVariant::Get<Projectile&>() const */

Projectile * __thiscall Sexy::RtInvokeVariant::Get<Projectile&>(RtInvokeVariant *this)

{
  Projectile *pPVar1;
  
  pPVar1 = (Projectile *)FUN_04115b5c(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* SunGunState Sexy::RtInvokeVariant::Get<SunGunState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SunGunState>(RtInvokeVariant *this)

{
  FUN_0411e6e0(*(undefined4 *)(this + 8));
  return;
}


/* S2C_LanternRiddlesResult const& Sexy::RtInvokeVariant::Get<S2C_LanternRiddlesResult const&>()
   const */

S2C_LanternRiddlesResult * __thiscall
Sexy::RtInvokeVariant::Get<S2C_LanternRiddlesResult_const&>(RtInvokeVariant *this)

{
  S2C_LanternRiddlesResult *pSVar1;
  
  pSVar1 = (S2C_LanternRiddlesResult *)FUN_041b3ba4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_ICloud_RedPackLeaderBoard const* Sexy::RtInvokeVariant::Get<S2C_ICloud_RedPackLeaderBoard
   const*>() const */

S2C_ICloud_RedPackLeaderBoard * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ICloud_RedPackLeaderBoard_const*>(RtInvokeVariant *this)

{
  S2C_ICloud_RedPackLeaderBoard *pSVar1;
  
  pSVar1 = (S2C_ICloud_RedPackLeaderBoard *)FUN_041bc2b8(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* MagnetShroomState Sexy::RtInvokeVariant::Get<MagnetShroomState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MagnetShroomState>(RtInvokeVariant *this)

{
  FUN_042032d8(*(undefined4 *)(this + 8));
  return;
}


/* PlantHorsebean* Sexy::RtInvokeVariant::Get<PlantHorsebean*>() const */

PlantHorsebean * __thiscall Sexy::RtInvokeVariant::Get<PlantHorsebean*>(RtInvokeVariant *this)

{
  PlantHorsebean *pPVar1;
  
  pPVar1 = (PlantHorsebean *)FUN_04223128(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PHBState Sexy::RtInvokeVariant::Get<PHBState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PHBState>(RtInvokeVariant *this)

{
  FUN_04222ff4(*(undefined4 *)(this + 8));
  return;
}


/* HorsebeanPlane* Sexy::RtInvokeVariant::Get<HorsebeanPlane*>() const */

HorsebeanPlane * __thiscall Sexy::RtInvokeVariant::Get<HorsebeanPlane*>(RtInvokeVariant *this)

{
  HorsebeanPlane *pHVar1;
  
  pHVar1 = (HorsebeanPlane *)FUN_04227148(*(undefined8 *)(this + 8));
  return pHVar1;
}


/* HBPState Sexy::RtInvokeVariant::Get<HBPState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<HBPState>(RtInvokeVariant *this)

{
  FUN_0422709c(*(undefined4 *)(this + 8));
  return;
}


/* GridItemOliveOil* Sexy::RtInvokeVariant::Get<GridItemOliveOil*>() const */

GridItemOliveOil * __thiscall Sexy::RtInvokeVariant::Get<GridItemOliveOil*>(RtInvokeVariant *this)

{
  GridItemOliveOil *pGVar1;
  
  pGVar1 = (GridItemOliveOil *)FUN_0425c664(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* MsgResultInfo* Sexy::RtInvokeVariant::Get<MsgResultInfo*>() const */

MsgResultInfo * __thiscall Sexy::RtInvokeVariant::Get<MsgResultInfo*>(RtInvokeVariant *this)

{
  MsgResultInfo *pMVar1;
  
  pMVar1 = (MsgResultInfo *)FUN_04307460(*(undefined8 *)(this + 8));
  return pMVar1;
}


/* S2C_ICloud_GetConsumeGemInfo const* Sexy::RtInvokeVariant::Get<S2C_ICloud_GetConsumeGemInfo
   const*>() const */

S2C_ICloud_GetConsumeGemInfo * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ICloud_GetConsumeGemInfo_const*>(RtInvokeVariant *this)

{
  S2C_ICloud_GetConsumeGemInfo *pSVar1;
  
  pSVar1 = (S2C_ICloud_GetConsumeGemInfo *)FUN_04307464(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_PlayerInfo const* Sexy::RtInvokeVariant::Get<S2C_PlayerInfo const*>() const */

S2C_PlayerInfo * __thiscall Sexy::RtInvokeVariant::Get<S2C_PlayerInfo_const*>(RtInvokeVariant *this)

{
  S2C_PlayerInfo *pSVar1;
  
  pSVar1 = (S2C_PlayerInfo *)FUN_04307468(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PowerupCukeTutorialIntro* Sexy::RtInvokeVariant::Get<PowerupCukeTutorialIntro*>() const */

PowerupCukeTutorialIntro * __thiscall
Sexy::RtInvokeVariant::Get<PowerupCukeTutorialIntro*>(RtInvokeVariant *this)

{
  PowerupCukeTutorialIntro *pPVar1;
  
  pPVar1 = (PowerupCukeTutorialIntro *)FUN_04310bb4(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PowerupRecord* Sexy::RtInvokeVariant::Get<PowerupRecord*>() const */

PowerupRecord * __thiscall Sexy::RtInvokeVariant::Get<PowerupRecord*>(RtInvokeVariant *this)

{
  PowerupRecord *pPVar1;
  
  pPVar1 = (PowerupRecord *)FUN_0431906c(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* S2C_Purchase_LostPurchaseOrder const& Sexy::RtInvokeVariant::Get<S2C_Purchase_LostPurchaseOrder
   const&>() const */

S2C_Purchase_LostPurchaseOrder * __thiscall
Sexy::RtInvokeVariant::Get<S2C_Purchase_LostPurchaseOrder_const&>(RtInvokeVariant *this)

{
  S2C_Purchase_LostPurchaseOrder *pSVar1;
  
  pSVar1 = (S2C_Purchase_LostPurchaseOrder *)FUN_04343584(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PlantAvatarPackageItem* Sexy::RtInvokeVariant::Get<PlantAvatarPackageItem*>() const */

PlantAvatarPackageItem * __thiscall
Sexy::RtInvokeVariant::Get<PlantAvatarPackageItem*>(RtInvokeVariant *this)

{
  PlantAvatarPackageItem *pPVar1;
  
  pPVar1 = (PlantAvatarPackageItem *)FUN_043a143c(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* S2C_ChristmasRebate* Sexy::RtInvokeVariant::Get<S2C_ChristmasRebate*>() const */

S2C_ChristmasRebate * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ChristmasRebate*>(RtInvokeVariant *this)

{
  S2C_ChristmasRebate *pSVar1;
  
  pSVar1 = (S2C_ChristmasRebate *)FUN_043b2e88(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PVZGameInfo* Sexy::RtInvokeVariant::Get<PVZGameInfo*>() const */

PVZGameInfo * __thiscall Sexy::RtInvokeVariant::Get<PVZGameInfo*>(RtInvokeVariant *this)

{
  PVZGameInfo *pPVar1;
  
  pPVar1 = (PVZGameInfo *)FUN_043ed734(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PVZRemoteControl* Sexy::RtInvokeVariant::Get<PVZRemoteControl*>() const */

PVZRemoteControl * __thiscall Sexy::RtInvokeVariant::Get<PVZRemoteControl*>(RtInvokeVariant *this)

{
  PVZRemoteControl *pPVar1;
  
  pPVar1 = (PVZRemoteControl *)FUN_044030e4(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* ToolPacketData* Sexy::RtInvokeVariant::Get<ToolPacketData*>() const */

ToolPacketData * __thiscall Sexy::RtInvokeVariant::Get<ToolPacketData*>(RtInvokeVariant *this)

{
  ToolPacketData *pTVar1;
  
  pTVar1 = (ToolPacketData *)FUN_0443e484(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* GridItemFlowerPot* Sexy::RtInvokeVariant::Get<GridItemFlowerPot*>() const */

GridItemFlowerPot * __thiscall Sexy::RtInvokeVariant::Get<GridItemFlowerPot*>(RtInvokeVariant *this)

{
  GridItemFlowerPot *pGVar1;
  
  pGVar1 = (GridItemFlowerPot *)FUN_04478564(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* GridItemLilyPad* Sexy::RtInvokeVariant::Get<GridItemLilyPad*>() const */

GridItemLilyPad * __thiscall Sexy::RtInvokeVariant::Get<GridItemLilyPad*>(RtInvokeVariant *this)

{
  GridItemLilyPad *pGVar1;
  
  pGVar1 = (GridItemLilyPad *)FUN_04478568(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* Sexy::SexyVector3 const& Sexy::RtInvokeVariant::Get<Sexy::SexyVector3 const&>() const */

SexyVector3 * __thiscall Sexy::RtInvokeVariant::Get<Sexy::SexyVector3_const&>(RtInvokeVariant *this)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)FUN_044a0150(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* UITutorialSkipDialog* Sexy::RtInvokeVariant::Get<UITutorialSkipDialog*>() const */

UITutorialSkipDialog * __thiscall
Sexy::RtInvokeVariant::Get<UITutorialSkipDialog*>(RtInvokeVariant *this)

{
  UITutorialSkipDialog *pUVar1;
  
  pUVar1 = (UITutorialSkipDialog *)FUN_044b9cd4(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* UIWidget* Sexy::RtInvokeVariant::Get<UIWidget*>() const */

UIWidget * __thiscall Sexy::RtInvokeVariant::Get<UIWidget*>(RtInvokeVariant *this)

{
  UIWidget *pUVar1;
  
  pUVar1 = (UIWidget *)FUN_044ce504(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* MapAnimState Sexy::RtInvokeVariant::Get<MapAnimState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<MapAnimState>(RtInvokeVariant *this)

{
  FUN_044d5510(*(undefined4 *)(this + 8));
  return;
}


/* UniverseMapState Sexy::RtInvokeVariant::Get<UniverseMapState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<UniverseMapState>(RtInvokeVariant *this)

{
  FUN_044d550c(*(undefined4 *)(this + 8));
  return;
}


/* unsigned char Sexy::RtInvokeVariant::Get<unsigned char>() const */

uchar __thiscall Sexy::RtInvokeVariant::Get<unsigned_char>(RtInvokeVariant *this)

{
  uchar uVar1;
  
  uVar1 = FUN_04508fbc(*(undefined4 *)(this + 8));
  return uVar1;
}


/* WorldMapState Sexy::RtInvokeVariant::Get<WorldMapState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<WorldMapState>(RtInvokeVariant *this)

{
  FUN_04528bc0(*(undefined4 *)(this + 8));
  return;
}


/* S2C_ChristmasCheckRebate* Sexy::RtInvokeVariant::Get<S2C_ChristmasCheckRebate*>() const */

S2C_ChristmasCheckRebate * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ChristmasCheckRebate*>(RtInvokeVariant *this)

{
  S2C_ChristmasCheckRebate *pSVar1;
  
  pSVar1 = (S2C_ChristmasCheckRebate *)FUN_0454b34c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_NoticeInfoList const* Sexy::RtInvokeVariant::Get<S2C_NoticeInfoList const*>() const */

S2C_NoticeInfoList * __thiscall
Sexy::RtInvokeVariant::Get<S2C_NoticeInfoList_const*>(RtInvokeVariant *this)

{
  S2C_NoticeInfoList *pSVar1;
  
  pSVar1 = (S2C_NoticeInfoList *)FUN_0454b350(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_StaticConfig const* Sexy::RtInvokeVariant::Get<S2C_StaticConfig const*>() const */

S2C_StaticConfig * __thiscall
Sexy::RtInvokeVariant::Get<S2C_StaticConfig_const*>(RtInvokeVariant *this)

{
  S2C_StaticConfig *pSVar1;
  
  pSVar1 = (S2C_StaticConfig *)FUN_045805f8(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PlantFramework* Sexy::RtInvokeVariant::Get<PlantFramework*>() const */

PlantFramework * __thiscall Sexy::RtInvokeVariant::Get<PlantFramework*>(RtInvokeVariant *this)

{
  PlantFramework *pPVar1;
  
  pPVar1 = (PlantFramework *)FUN_045b44e0(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtInvokeVariant Sexy::RtInvokeVariant::ConvertReturnValueToVariant<float>(float) */

void Sexy::RtInvokeVariant::ConvertReturnValueToVariant<float>(float param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LeaderboardEntry::FieldData::FieldData((FieldData *)&local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* ZombossBattleState Sexy::RtInvokeVariant::Get<ZombossBattleState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<ZombossBattleState>(RtInvokeVariant *this)

{
  FUN_0474fe30(*(undefined4 *)(this + 8));
  return;
}


/* GridItemWalrusStatue* Sexy::RtInvokeVariant::Get<GridItemWalrusStatue*>() const */

GridItemWalrusStatue * __thiscall
Sexy::RtInvokeVariant::Get<GridItemWalrusStatue*>(RtInvokeVariant *this)

{
  GridItemWalrusStatue *pGVar1;
  
  pGVar1 = (GridItemWalrusStatue *)FUN_04777600(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* WalrusStatueState Sexy::RtInvokeVariant::Get<WalrusStatueState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<WalrusStatueState>(RtInvokeVariant *this)

{
  FUN_04777558(*(undefined4 *)(this + 8));
  return;
}


/* PIState Sexy::RtInvokeVariant::Get<PIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<PIState>(RtInvokeVariant *this)

{
  FUN_04784aa8(*(undefined4 *)(this + 8));
  return;
}


/* BIState Sexy::RtInvokeVariant::Get<BIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<BIState>(RtInvokeVariant *this)

{
  FUN_04790a48(*(undefined4 *)(this + 8));
  return;
}


/* FIState Sexy::RtInvokeVariant::Get<FIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<FIState>(RtInvokeVariant *this)

{
  FUN_047c7830(*(undefined4 *)(this + 8));
  return;
}


/* SteamCoalCartZombieState Sexy::RtInvokeVariant::Get<SteamCoalCartZombieState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SteamCoalCartZombieState>(RtInvokeVariant *this)

{
  FUN_04809f18(*(undefined4 *)(this + 8));
  return;
}


/* GridItemRenaiStatue* Sexy::RtInvokeVariant::Get<GridItemRenaiStatue*>() const */

GridItemRenaiStatue * __thiscall
Sexy::RtInvokeVariant::Get<GridItemRenaiStatue*>(RtInvokeVariant *this)

{
  GridItemRenaiStatue *pGVar1;
  
  pGVar1 = (GridItemRenaiStatue *)FUN_0480c3d4(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* Creature* Sexy::RtInvokeVariant::Get<Creature*>() const */

Creature * __thiscall Sexy::RtInvokeVariant::Get<Creature*>(RtInvokeVariant *this)

{
  Creature *pCVar1;
  
  pCVar1 = (Creature *)FUN_0480fd78(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* CreatureState Sexy::RtInvokeVariant::Get<CreatureState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CreatureState>(RtInvokeVariant *this)

{
  FUN_0480fbe8(*(undefined4 *)(this + 8));
  return;
}


/* AnkyloState Sexy::RtInvokeVariant::Get<AnkyloState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<AnkyloState>(RtInvokeVariant *this)

{
  FUN_0481ead8(*(undefined4 *)(this + 8));
  return;
}


/* StegoState Sexy::RtInvokeVariant::Get<StegoState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<StegoState>(RtInvokeVariant *this)

{
  FUN_04825098(*(undefined4 *)(this + 8));
  return;
}


/* TyrannoState Sexy::RtInvokeVariant::Get<TyrannoState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<TyrannoState>(RtInvokeVariant *this)

{
  FUN_0482a658(*(undefined4 *)(this + 8));
  return;
}


/* DinoYoungerState Sexy::RtInvokeVariant::Get<DinoYoungerState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<DinoYoungerState>(RtInvokeVariant *this)

{
  FUN_0482e7d4(*(undefined4 *)(this + 8));
  return;
}


/* DinoRunnerState Sexy::RtInvokeVariant::Get<DinoRunnerState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<DinoRunnerState>(RtInvokeVariant *this)

{
  FUN_04832f68(*(undefined4 *)(this + 8));
  return;
}


/* SharkMinion* Sexy::RtInvokeVariant::Get<SharkMinion*>() const */

SharkMinion * __thiscall Sexy::RtInvokeVariant::Get<SharkMinion*>(RtInvokeVariant *this)

{
  SharkMinion *pSVar1;
  
  pSVar1 = (SharkMinion *)FUN_0483b6a4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SharkMinionState Sexy::RtInvokeVariant::Get<SharkMinionState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SharkMinionState>(RtInvokeVariant *this)

{
  FUN_0483b360(*(undefined4 *)(this + 8));
  return;
}


/* GridItemJammable* Sexy::RtInvokeVariant::Get<GridItemJammable*>() const */

GridItemJammable * __thiscall Sexy::RtInvokeVariant::Get<GridItemJammable*>(RtInvokeVariant *this)

{
  GridItemJammable *pGVar1;
  
  pGVar1 = (GridItemJammable *)FUN_0484f8a4(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* AccessoryContent* Sexy::RtInvokeVariant::Get<AccessoryContent*>() const */

AccessoryContent * __thiscall Sexy::RtInvokeVariant::Get<AccessoryContent*>(RtInvokeVariant *this)

{
  AccessoryContent *pAVar1;
  
  pAVar1 = (AccessoryContent *)FUN_0494fe14(*(undefined8 *)(this + 8));
  return pAVar1;
}


/* GridItemVase* Sexy::RtInvokeVariant::Get<GridItemVase*>() const */

GridItemVase * __thiscall Sexy::RtInvokeVariant::Get<GridItemVase*>(RtInvokeVariant *this)

{
  GridItemVase *pGVar1;
  
  pGVar1 = (GridItemVase *)FUN_04972d38(*(undefined8 *)(this + 8));
  return pGVar1;
}


/* VaseBreakerTutorialState Sexy::RtInvokeVariant::Get<VaseBreakerTutorialState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<VaseBreakerTutorialState>(RtInvokeVariant *this)

{
  FUN_04978f90(*(undefined4 *)(this + 8));
  return;
}


/* SnakeNode* Sexy::RtInvokeVariant::Get<SnakeNode*>() const */

SnakeNode * __thiscall Sexy::RtInvokeVariant::Get<SnakeNode*>(RtInvokeVariant *this)

{
  SnakeNode *pSVar1;
  
  pSVar1 = (SnakeNode *)FUN_049d240c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SnakeState Sexy::RtInvokeVariant::Get<SnakeState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SnakeState>(RtInvokeVariant *this)

{
  FUN_049d2214(*(undefined4 *)(this + 8));
  return;
}


/* S2C_ICloud_GetChargeRewardInfo const* Sexy::RtInvokeVariant::Get<S2C_ICloud_GetChargeRewardInfo
   const*>() const */

S2C_ICloud_GetChargeRewardInfo * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ICloud_GetChargeRewardInfo_const*>(RtInvokeVariant *this)

{
  S2C_ICloud_GetChargeRewardInfo *pSVar1;
  
  pSVar1 = (S2C_ICloud_GetChargeRewardInfo *)FUN_049e34a4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* CollectableSeedRain* Sexy::RtInvokeVariant::Get<CollectableSeedRain*>() const */

CollectableSeedRain * __thiscall
Sexy::RtInvokeVariant::Get<CollectableSeedRain*>(RtInvokeVariant *this)

{
  CollectableSeedRain *pCVar1;
  
  pCVar1 = (CollectableSeedRain *)FUN_04a08dbc(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* RiverEntitiesManager* Sexy::RtInvokeVariant::Get<RiverEntitiesManager*>() const */

RiverEntitiesManager * __thiscall
Sexy::RtInvokeVariant::Get<RiverEntitiesManager*>(RtInvokeVariant *this)

{
  RiverEntitiesManager *pRVar1;
  
  pRVar1 = (RiverEntitiesManager *)FUN_04a11930(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* RiverEntitiesManagerState Sexy::RtInvokeVariant::Get<RiverEntitiesManagerState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RiverEntitiesManagerState>(RtInvokeVariant *this)

{
  FUN_04a113ac(*(undefined4 *)(this + 8));
  return;
}


/* StarvingChomper* Sexy::RtInvokeVariant::Get<StarvingChomper*>() const */

StarvingChomper * __thiscall Sexy::RtInvokeVariant::Get<StarvingChomper*>(RtInvokeVariant *this)

{
  StarvingChomper *pSVar1;
  
  pSVar1 = (StarvingChomper *)FUN_04a18638(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* StarvingChomperState Sexy::RtInvokeVariant::Get<StarvingChomperState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<StarvingChomperState>(RtInvokeVariant *this)

{
  FUN_04a18580(*(undefined4 *)(this + 8));
  return;
}


/* RCIState Sexy::RtInvokeVariant::Get<RCIState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RCIState>(RtInvokeVariant *this)

{
  FUN_04a1b1b0(*(undefined4 *)(this + 8));
  return;
}


/* RiverCrossingDodoRider* Sexy::RtInvokeVariant::Get<RiverCrossingDodoRider*>() const */

RiverCrossingDodoRider * __thiscall
Sexy::RtInvokeVariant::Get<RiverCrossingDodoRider*>(RtInvokeVariant *this)

{
  RiverCrossingDodoRider *pRVar1;
  
  pRVar1 = (RiverCrossingDodoRider *)FUN_04a1e2b8(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* RiverCrossingDodoRiderState Sexy::RtInvokeVariant::Get<RiverCrossingDodoRiderState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RiverCrossingDodoRiderState>(RtInvokeVariant *this)

{
  FUN_04a1e20c(*(undefined4 *)(this + 8));
  return;
}


/* RiverEntity* Sexy::RtInvokeVariant::Get<RiverEntity*>() const */

RiverEntity * __thiscall Sexy::RtInvokeVariant::Get<RiverEntity*>(RtInvokeVariant *this)

{
  RiverEntity *pRVar1;
  
  pRVar1 = (RiverEntity *)FUN_04a22390(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* S2C_ICloud_DailySignInfo const* Sexy::RtInvokeVariant::Get<S2C_ICloud_DailySignInfo const*>()
   const */

S2C_ICloud_DailySignInfo * __thiscall
Sexy::RtInvokeVariant::Get<S2C_ICloud_DailySignInfo_const*>(RtInvokeVariant *this)

{
  S2C_ICloud_DailySignInfo *pSVar1;
  
  pSVar1 = (S2C_ICloud_DailySignInfo *)FUN_04a3adb8(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_DailySignWithTW const* Sexy::RtInvokeVariant::Get<S2C_DailySignWithTW const*>() const */

S2C_DailySignWithTW * __thiscall
Sexy::RtInvokeVariant::Get<S2C_DailySignWithTW_const*>(RtInvokeVariant *this)

{
  S2C_DailySignWithTW *pSVar1;
  
  pSVar1 = (S2C_DailySignWithTW *)FUN_04a451f0(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_NoticeInfoGet const* Sexy::RtInvokeVariant::Get<S2C_NoticeInfoGet const*>() const */

S2C_NoticeInfoGet * __thiscall
Sexy::RtInvokeVariant::Get<S2C_NoticeInfoGet_const*>(RtInvokeVariant *this)

{
  S2C_NoticeInfoGet *pSVar1;
  
  pSVar1 = (S2C_NoticeInfoGet *)FUN_04a4f2c4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SalesButton* Sexy::RtInvokeVariant::Get<SalesButton*>() const */

SalesButton * __thiscall Sexy::RtInvokeVariant::Get<SalesButton*>(RtInvokeVariant *this)

{
  SalesButton *pSVar1;
  
  pSVar1 = (SalesButton *)FUN_04a57edc(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* SalesButtonState Sexy::RtInvokeVariant::Get<SalesButtonState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<SalesButtonState>(RtInvokeVariant *this)

{
  FUN_04a5796c(*(undefined4 *)(this + 8));
  return;
}


/* std::vector<ChildrenDayItem, std::allocator<ChildrenDayItem> > const&
   Sexy::RtInvokeVariant::Get<std::vector<ChildrenDayItem, std::allocator<ChildrenDayItem> >
   const&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_04a7ab98(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* std::map<std::string, std::string, std::less<std::string >, std::allocator<std::pair<std::string
   const, std::string > > >* Sexy::RtInvokeVariant::Get<std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > >*>() const
    */

map * __thiscall
Sexy::RtInvokeVariant::
Get<std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
          (RtInvokeVariant *this)

{
  map *pmVar1;
  
  pmVar1 = (map *)FUN_04a7ab9c(*(undefined8 *)(this + 8));
  return pmVar1;
}


/* ChildrenDayStates const* Sexy::RtInvokeVariant::Get<ChildrenDayStates const*>() const */

ChildrenDayStates * __thiscall
Sexy::RtInvokeVariant::Get<ChildrenDayStates_const*>(RtInvokeVariant *this)

{
  ChildrenDayStates *pCVar1;
  
  pCVar1 = (ChildrenDayStates *)FUN_04a7aba0(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* RewardAniState Sexy::RtInvokeVariant::Get<RewardAniState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<RewardAniState>(RtInvokeVariant *this)

{
  FUN_04a7e24c(*(undefined4 *)(this + 8));
  return;
}


/* S2C_DangerRoomSkipLevel const* Sexy::RtInvokeVariant::Get<S2C_DangerRoomSkipLevel const*>() const
    */

S2C_DangerRoomSkipLevel * __thiscall
Sexy::RtInvokeVariant::Get<S2C_DangerRoomSkipLevel_const*>(RtInvokeVariant *this)

{
  S2C_DangerRoomSkipLevel *pSVar1;
  
  pSVar1 = (S2C_DangerRoomSkipLevel *)FUN_04a80740(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* PVPSkillBombRocket* Sexy::RtInvokeVariant::Get<PVPSkillBombRocket*>() const */

PVPSkillBombRocket * __thiscall
Sexy::RtInvokeVariant::Get<PVPSkillBombRocket*>(RtInvokeVariant *this)

{
  PVPSkillBombRocket *pPVar1;
  
  pPVar1 = (PVPSkillBombRocket *)FUN_04a949ac(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* TrainingItemWidget* Sexy::RtInvokeVariant::Get<TrainingItemWidget*>() const */

TrainingItemWidget * __thiscall
Sexy::RtInvokeVariant::Get<TrainingItemWidget*>(RtInvokeVariant *this)

{
  TrainingItemWidget *pTVar1;
  
  pTVar1 = (TrainingItemWidget *)FUN_04adfaa8(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* std::vector<unsigned long, std::allocator<unsigned long> > const&
   Sexy::RtInvokeVariant::Get<std::vector<unsigned long, std::allocator<unsigned long> > const&>()
   const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<unsigned_long,std::allocator<unsigned_long>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_04ae44c0(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* unsigned long Sexy::RtInvokeVariant::Get<unsigned long>() const */

ulong __thiscall Sexy::RtInvokeVariant::Get<unsigned_long>(RtInvokeVariant *this)

{
  ulong uVar1;
  
  uVar1 = FUN_04ae44a8(*(undefined8 *)(this + 8));
  return uVar1;
}


/* S2C_PVPCompleteUpgradeData* Sexy::RtInvokeVariant::Get<S2C_PVPCompleteUpgradeData*>() const */

S2C_PVPCompleteUpgradeData * __thiscall
Sexy::RtInvokeVariant::Get<S2C_PVPCompleteUpgradeData*>(RtInvokeVariant *this)

{
  S2C_PVPCompleteUpgradeData *pSVar1;
  
  pSVar1 = (S2C_PVPCompleteUpgradeData *)FUN_04af6560(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* UIProperty* Sexy::RtInvokeVariant::Get<UIProperty*>() const */

UIProperty * __thiscall Sexy::RtInvokeVariant::Get<UIProperty*>(RtInvokeVariant *this)

{
  UIProperty *pUVar1;
  
  pUVar1 = (UIProperty *)FUN_04b6aeb8(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* UIInputDialog* Sexy::RtInvokeVariant::Get<UIInputDialog*>() const */

UIInputDialog * __thiscall Sexy::RtInvokeVariant::Get<UIInputDialog*>(RtInvokeVariant *this)

{
  UIInputDialog *pUVar1;
  
  pUVar1 = (UIInputDialog *)FUN_04b76344(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* S2C_SummeryLotteryData const& Sexy::RtInvokeVariant::Get<S2C_SummeryLotteryData const&>() const
    */

S2C_SummeryLotteryData * __thiscall
Sexy::RtInvokeVariant::Get<S2C_SummeryLotteryData_const&>(RtInvokeVariant *this)

{
  S2C_SummeryLotteryData *pSVar1;
  
  pSVar1 = (S2C_SummeryLotteryData *)FUN_04b921ec(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* LotterySelectFrame* Sexy::RtInvokeVariant::Get<LotterySelectFrame*>() const */

LotterySelectFrame * __thiscall
Sexy::RtInvokeVariant::Get<LotterySelectFrame*>(RtInvokeVariant *this)

{
  LotterySelectFrame *pLVar1;
  
  pLVar1 = (LotterySelectFrame *)FUN_04b921f0(*(undefined8 *)(this + 8));
  return pLVar1;
}


/* AnimationMgr* Sexy::RtInvokeVariant::Get<AnimationMgr*>() const */

AnimationMgr * __thiscall Sexy::RtInvokeVariant::Get<AnimationMgr*>(RtInvokeVariant *this)

{
  AnimationMgr *pAVar1;
  
  pAVar1 = (AnimationMgr *)FUN_04ba3fa0(*(undefined8 *)(this + 8));
  return pAVar1;
}


/* S2C_VacationLevelEndData* Sexy::RtInvokeVariant::Get<S2C_VacationLevelEndData*>() const */

S2C_VacationLevelEndData * __thiscall
Sexy::RtInvokeVariant::Get<S2C_VacationLevelEndData*>(RtInvokeVariant *this)

{
  S2C_VacationLevelEndData *pSVar1;
  
  pSVar1 = (S2C_VacationLevelEndData *)FUN_04ba3fa4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_BossChallengeLevelEndData const* Sexy::RtInvokeVariant::Get<S2C_BossChallengeLevelEndData
   const*>() const */

S2C_BossChallengeLevelEndData * __thiscall
Sexy::RtInvokeVariant::Get<S2C_BossChallengeLevelEndData_const*>(RtInvokeVariant *this)

{
  S2C_BossChallengeLevelEndData *pSVar1;
  
  pSVar1 = (S2C_BossChallengeLevelEndData *)FUN_04badd48(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_BossChallengteReward const* Sexy::RtInvokeVariant::Get<S2C_BossChallengteReward const*>()
   const */

S2C_BossChallengteReward * __thiscall
Sexy::RtInvokeVariant::Get<S2C_BossChallengteReward_const*>(RtInvokeVariant *this)

{
  S2C_BossChallengteReward *pSVar1;
  
  pSVar1 = (S2C_BossChallengteReward *)FUN_04bb84b4(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_ADSReward const& Sexy::RtInvokeVariant::Get<S2C_ADSReward const&>() const */

S2C_ADSReward * __thiscall Sexy::RtInvokeVariant::Get<S2C_ADSReward_const&>(RtInvokeVariant *this)

{
  S2C_ADSReward *pSVar1;
  
  pSVar1 = (S2C_ADSReward *)FUN_04bf878c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_CodeRewardResult const* Sexy::RtInvokeVariant::Get<S2C_CodeRewardResult const*>() const */

S2C_CodeRewardResult * __thiscall
Sexy::RtInvokeVariant::Get<S2C_CodeRewardResult_const*>(RtInvokeVariant *this)

{
  S2C_CodeRewardResult *pSVar1;
  
  pSVar1 = (S2C_CodeRewardResult *)FUN_04c02e5c(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* S2C_WechatShareResult const* Sexy::RtInvokeVariant::Get<S2C_WechatShareResult const*>() const */

S2C_WechatShareResult * __thiscall
Sexy::RtInvokeVariant::Get<S2C_WechatShareResult_const*>(RtInvokeVariant *this)

{
  S2C_WechatShareResult *pSVar1;
  
  pSVar1 = (S2C_WechatShareResult *)FUN_04c1dbbc(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&
   Sexy::RtInvokeVariant::Get<std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&>() const */

vector * __thiscall
Sexy::RtInvokeVariant::Get<std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>
          (RtInvokeVariant *this)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)FUN_04c2a0d0(*(undefined8 *)(this + 8));
  return pvVar1;
}


/* S2C_PlatformGiftData const* Sexy::RtInvokeVariant::Get<S2C_PlatformGiftData const*>() const */

S2C_PlatformGiftData * __thiscall
Sexy::RtInvokeVariant::Get<S2C_PlatformGiftData_const*>(RtInvokeVariant *this)

{
  S2C_PlatformGiftData *pSVar1;
  
  pSVar1 = (S2C_PlatformGiftData *)FUN_04c408a0(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* ArtifactBeeEntity* Sexy::RtInvokeVariant::Get<ArtifactBeeEntity*>() const */

ArtifactBeeEntity * __thiscall Sexy::RtInvokeVariant::Get<ArtifactBeeEntity*>(RtInvokeVariant *this)

{
  ArtifactBeeEntity *pAVar1;
  
  pAVar1 = (ArtifactBeeEntity *)FUN_04cab1fc(*(undefined8 *)(this + 8));
  return pAVar1;
}


/* ABEState Sexy::RtInvokeVariant::Get<ABEState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<ABEState>(RtInvokeVariant *this)

{
  FUN_04caac00(*(undefined4 *)(this + 8));
  return;
}


/* DevilsParasiteEntity* Sexy::RtInvokeVariant::Get<DevilsParasiteEntity*>() const */

DevilsParasiteEntity * __thiscall
Sexy::RtInvokeVariant::Get<DevilsParasiteEntity*>(RtInvokeVariant *this)

{
  DevilsParasiteEntity *pDVar1;
  
  pDVar1 = (DevilsParasiteEntity *)FUN_04d61a00(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* DPEState Sexy::RtInvokeVariant::Get<DPEState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<DPEState>(RtInvokeVariant *this)

{
  FUN_04d61730(*(undefined4 *)(this + 8));
  return;
}


/* PlantWarsEndLevelUI* Sexy::RtInvokeVariant::Get<PlantWarsEndLevelUI*>() const */

PlantWarsEndLevelUI * __thiscall
Sexy::RtInvokeVariant::Get<PlantWarsEndLevelUI*>(RtInvokeVariant *this)

{
  PlantWarsEndLevelUI *pPVar1;
  
  pPVar1 = (PlantWarsEndLevelUI *)FUN_04d8cde8(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* PlantWarsSeedCard* Sexy::RtInvokeVariant::Get<PlantWarsSeedCard*>() const */

PlantWarsSeedCard * __thiscall Sexy::RtInvokeVariant::Get<PlantWarsSeedCard*>(RtInvokeVariant *this)

{
  PlantWarsSeedCard *pPVar1;
  
  pPVar1 = (PlantWarsSeedCard *)FUN_04d9eb5c(*(undefined8 *)(this + 8));
  return pPVar1;
}


/* UIBagItemBox* Sexy::RtInvokeVariant::Get<UIBagItemBox*>() const */

UIBagItemBox * __thiscall Sexy::RtInvokeVariant::Get<UIBagItemBox*>(RtInvokeVariant *this)

{
  UIBagItemBox *pUVar1;
  
  pUVar1 = (UIBagItemBox *)FUN_04dbc5b4(*(undefined8 *)(this + 8));
  return pUVar1;
}


/* CardGameState Sexy::RtInvokeVariant::Get<CardGameState>() const */

void __thiscall Sexy::RtInvokeVariant::Get<CardGameState>(RtInvokeVariant *this)

{
  FUN_04e01270(*(undefined4 *)(this + 8));
  return;
}


/* Sexy::TRect<int>& Sexy::RtInvokeVariant::Get<Sexy::TRect<int>&>() const */

TRect * __thiscall Sexy::RtInvokeVariant::Get<Sexy::TRect<int>&>(RtInvokeVariant *this)

{
  TRect *pTVar1;
  
  pTVar1 = (TRect *)FUN_04f12ec8(*(undefined8 *)(this + 8));
  return pTVar1;
}


/* DangerRoomInfo const& Sexy::RtInvokeVariant::Get<DangerRoomInfo const&>() const */

DangerRoomInfo * __thiscall Sexy::RtInvokeVariant::Get<DangerRoomInfo_const&>(RtInvokeVariant *this)

{
  DangerRoomInfo *pDVar1;
  
  pDVar1 = (DangerRoomInfo *)FUN_04fddefc(*(undefined8 *)(this + 8));
  return pDVar1;
}


/* ZombieGargantuar* Sexy::RtInvokeVariant::Get<ZombieGargantuar*>() const */

ZombieGargantuar * __thiscall Sexy::RtInvokeVariant::Get<ZombieGargantuar*>(RtInvokeVariant *this)

{
  ZombieGargantuar *pZVar1;
  
  pZVar1 = (ZombieGargantuar *)FUN_04fddf00(*(undefined8 *)(this + 8));
  return pZVar1;
}


/* CollectableCoinFake* Sexy::RtInvokeVariant::Get<CollectableCoinFake*>() const */

CollectableCoinFake * __thiscall
Sexy::RtInvokeVariant::Get<CollectableCoinFake*>(RtInvokeVariant *this)

{
  CollectableCoinFake *pCVar1;
  
  pCVar1 = (CollectableCoinFake *)FUN_04fddf04(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* CollectableGemFake* Sexy::RtInvokeVariant::Get<CollectableGemFake*>() const */

CollectableGemFake * __thiscall
Sexy::RtInvokeVariant::Get<CollectableGemFake*>(RtInvokeVariant *this)

{
  CollectableGemFake *pCVar1;
  
  pCVar1 = (CollectableGemFake *)FUN_04fddf08(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* Sexy::Image* Sexy::RtInvokeVariant::Get<Sexy::Image*>() const */

Image * __thiscall Sexy::RtInvokeVariant::Get<Sexy::Image*>(RtInvokeVariant *this)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)FUN_05156370(*(undefined8 *)(this + 8));
  return pIVar1;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant() */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(wchar_t const*) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,wchar_t *param_1)

{
  *(wchar_t **)(this + 8) = param_1;
  *(undefined4 *)this = 6;
  return;
}


/* Sexy::CurvedVal* Sexy::RtInvokeVariant::Get<Sexy::CurvedVal*>() const */

CurvedVal * __thiscall Sexy::RtInvokeVariant::Get<Sexy::CurvedVal*>(RtInvokeVariant *this)

{
  CurvedVal *pCVar1;
  
  pCVar1 = (CurvedVal *)FUN_0517f554(*(undefined8 *)(this + 8));
  return pCVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtInvokeVariant Sexy::RtInvokeVariant::ConvertReturnValueToVariant<Sexy::RtId>(Sexy::RtId)
    */

void Sexy::RtInvokeVariant::ConvertReturnValueToVariant<Sexy::RtId>(CompiledMap *param_1)

{
  uchar uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CompiledMap::Initialized(param_1);
  RtInvokeVariant((RtInvokeVariant *)&local_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* Sexy::RtObject* Sexy::RtInvokeVariant::Get<Sexy::RtObject*>() const */

RtObject * __thiscall Sexy::RtInvokeVariant::Get<Sexy::RtObject*>(RtInvokeVariant *this)

{
  RtObject *pRVar1;
  
  pRVar1 = (RtObject *)FUN_0517f558(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* Sexy::RtId const& Sexy::RtInvokeVariant::Get<Sexy::RtId const&>() const */

RtId * __thiscall Sexy::RtInvokeVariant::Get<Sexy::RtId_const&>(RtInvokeVariant *this)

{
  RtId *pRVar1;
  
  pRVar1 = (RtId *)FUN_05194d60(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* Sexy::RtDbTable const& Sexy::RtInvokeVariant::Get<Sexy::RtDbTable const&>() const */

RtDbTable * __thiscall Sexy::RtInvokeVariant::Get<Sexy::RtDbTable_const&>(RtInvokeVariant *this)

{
  RtDbTable *pRVar1;
  
  pRVar1 = (RtDbTable *)FUN_051b591c(*(undefined8 *)(this + 8));
  return pRVar1;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(signed char) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,char param_2)

{
  *(int *)(this + 8) = (int)param_2;
  *(undefined4 *)this = 1;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(short) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,short param_1)

{
  *(int *)(this + 8) = (int)param_1;
  *(undefined4 *)this = 1;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(unsigned short) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,ushort param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)(this + 8) = (uint)param_1;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(unsigned long) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,ulong param_1)

{
  *(ulong *)(this + 8) = param_1;
  *(undefined4 *)this = 3;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(long) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,long param_1)

{
  *(long *)(this + 8) = param_1;
  *(undefined4 *)this = 4;
  return;
}


/* Sexy::RtInvokeVariant::RtInvokeVariant(double) */

void __thiscall Sexy::RtInvokeVariant::RtInvokeVariant(RtInvokeVariant *this,double param_1)

{
  *(undefined4 *)this = 5;
  *(double *)(this + 8) = param_1;
  return;
}


/* char const* Sexy::RtInvokeVariant::Get<char const*>() const */

char * __thiscall Sexy::RtInvokeVariant::Get<char_const*>(RtInvokeVariant *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_051d465c(*(undefined8 *)(this + 8));
  return pcVar1;
}


/* SexyURL const& Sexy::RtInvokeVariant::Get<SexyURL const&>() const */

SexyURL * __thiscall Sexy::RtInvokeVariant::Get<SexyURL_const&>(RtInvokeVariant *this)

{
  SexyURL *pSVar1;
  
  pSVar1 = (SexyURL *)FUN_052ccad8(*(undefined8 *)(this + 8));
  return pSVar1;
}


/* Sexy::IPurchaseDriver* Sexy::RtInvokeVariant::Get<Sexy::IPurchaseDriver*>() const */

IPurchaseDriver * __thiscall
Sexy::RtInvokeVariant::Get<Sexy::IPurchaseDriver*>(RtInvokeVariant *this)

{
  IPurchaseDriver *pIVar1;
  
  pIVar1 = (IPurchaseDriver *)FUN_052f96dc(*(undefined8 *)(this + 8));
  return pIVar1;
}

