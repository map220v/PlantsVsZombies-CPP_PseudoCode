// Class: PowerupManager


/* PowerupManager::GetSelectedPowerup() const */

void __thiscall PowerupManager::GetSelectedPowerup(PowerupManager *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::StaticClassInit() */

void PowerupManager::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PowerupManager");
    (*pcVar2)(plVar1,asStack_10,FUN_04308b08,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::StaticGetClass() */

long * PowerupManager::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupManager::GetClass() const */

long * PowerupManager::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupManager::IsBlock() */

bool __thiscall PowerupManager::IsBlock(PowerupManager *this)

{
  return 1 < *(int *)(this + 0x14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::ShowWidgets() */

void PowerupManager::ShowWidgets(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPowerupHolder");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::IsMiniGamePerkPowerUp(std::string const&) */

bool __thiscall PowerupManager::IsMiniGamePerkPowerUp(PowerupManager *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"powerup_item_kill_all_zombies");
  if ((((!bVar1) && (bVar1 = std::operator==(param_1,"powerup_special_item_x_ray"), !bVar1)) &&
      (bVar1 = std::operator==(param_1,"powerup_special_item_bowling"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"powerup_special_item_refresh_card"), !bVar1)) {
    bVar1 = std::operator==(param_1,"powerup_special_item_time_back");
    return bVar1;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::LoadPropsFromMagento(PowerupType*) */

void __thiscall PowerupManager::LoadPropsFromMagento(PowerupManager *this,PowerupType *param_1)

{
  undefined4 uVar1;
  MagentoProductProps *pMVar2;
  long lVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Magento::GetGesturePtr((Magento *)(param_1 + 8),___stack_chk_guard);
  pMVar2 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar4 = (float)MagentoProductProps::GetPriceInUSD(pMVar2,false);
  *(int *)(param_1 + 0x40) = (int)fVar4;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar3 + 0x18);
  pMVar2 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = MagentoProductProps::GetPurchaseType(pMVar2);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::SetMaxPurchasesAllowed(signed char) */

void __thiscall PowerupManager::SetMaxPurchasesAllowed(PowerupManager *this,char param_2)

{
  char cVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x18);
  lVar2 = FUN_043073dc(uVar6,*(undefined8 *)(this + 0x20));
  if (lVar2 != 0) {
    do {
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar6,uVar5);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      cVar1 = FUN_043073c4(*(undefined4 *)(lVar2 + 0x20));
      if (cVar1 == -1) {
        pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar5);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
        FUN_043073b8(lVar2 + 0x20,(int)param_2);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x18);
      uVar4 = FUN_043073dc(uVar6,*(undefined8 *)(this + 0x20));
    } while (uVar5 < uVar4);
  }
  return;
}


/* PowerupManager::Update() */

void __thiscall PowerupManager::Update(PowerupManager *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BasePowerup *this_01;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x18);
    uVar1 = FUN_043073dc(uVar3,*(undefined8 *)(this + 0x20));
    if (uVar1 <= uVar2) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar3,uVar2);
    this_01 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    BasePowerup::Update(this_01);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* PowerupManager::onDrawActivePowerup(Sexy::Graphics*) */

void __thiscall PowerupManager::onDrawActivePowerup(PowerupManager *this,Graphics *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  if (*(code **)(*plVar1 + 0x78) != BasePowerup::Draw) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::onNetworkError(int, std::string const&) */

void __thiscall PowerupManager::onNetworkError(PowerupManager *this,int param_1,string *param_2)

{
  char cVar1;
  PlantCthulhuActinia *this_00;
  WorldMapCamera *this_01;
  BasePowerup *this_02;
  _PacketId a_Stack_ce8 [544];
  string asStack_ac8 [2752];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_ac8);
  if (cVar1 != '\0') {
    this_00 = (PlantCthulhuActinia *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    cVar1 = PlantCthulhuActinia::GetEyeballStatus(this_00);
    if (cVar1 != '\0') {
      this_01 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      WorldMapCamera::SetUseClipViewport(this_01,false);
      this_02 = (BasePowerup *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      BasePowerup::Deactivate(this_02);
    }
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::OnLevelLoadComplete() */

void __thiscall PowerupManager::OnLevelLoadComplete(PowerupManager *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BasePowerup *this_01;
  PowerupType *pPVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_043073dc(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar4,uVar3);
    this_01 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pPVar1 = (PowerupType *)BasePowerup::GetType(this_01);
    LoadPropsFromMagento(this,pPVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::OnBuyItemFinish(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*,
   S2C_PlayerInfo const*) */

void PowerupManager::OnBuyItemFinish
               (MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,S2C_PlayerInfo *param_3
               )

{
  int iVar1;
  long lVar2;
  char cVar3;
  BasePowerup *this;
  long lVar4;
  
  lVar2 = ___stack_chk_guard;
  if ((param_2 != (S2C_ICloud_GetConsumeGemInfo *)0x0) && (param_3 != (S2C_PlayerInfo *)0x0)) {
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x38));
    if (cVar3 != '\0') {
      iVar1 = *(int *)(param_3 + 0x6c);
      this = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
      lVar4 = BasePowerup::GetType(this);
      if (iVar1 == *(int *)(lVar4 + 100)) {
        nop();
      }
    }
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::GetBasePowerup(PowerupType const*) */

ResourceInfo * __thiscall PowerupManager::GetBasePowerup(PowerupManager *this,PowerupType *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BasePowerup *this_01;
  PowerupType *pPVar1;
  ulong uVar2;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    uVar5 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_043073dc(uVar5,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar4) {
      return (ResourceInfo *)0x0;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar5,uVar4);
    this_01 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pPVar1 = (PowerupType *)BasePowerup::GetType(this_01);
    uVar2 = uVar4 + 1;
  } while (param_1 != pPVar1);
  this_02 = (RtWeakPtr *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar4);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
  return pRVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::AddToRenderQueue(RenderQueue*) */

void __thiscall PowerupManager::AddToRenderQueue(PowerupManager *this,RenderQueue *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  BasePowerup *pBVar3;
  long lVar4;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pBVar3 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar4 = BasePowerup::GetType(pBVar3);
    bVar1 = std::operator!=((string *)(lVar4 + 0x10),"PowerupTacticalCuke");
    if (bVar1) {
      pBVar3 = (BasePowerup *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar4 = BasePowerup::GetType(pBVar3);
      cVar2 = IsMiniGamePerkPowerUp(this,(string *)(lVar4 + 8));
      if (cVar2 == '\0') {
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onDrawSelectionOnBoard);
        Sexy::Delegate1<Sexy::Graphics*>::
        Delegate1<PowerupManager,void(PowerupManager::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
        RenderQueue::Add(param_1,399999,aDStack_38);
      }
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDrawActivePowerup);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<PowerupManager,void(PowerupManager::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,1000000,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::PowerupManager() */

void __thiscall PowerupManager::PowerupManager(PowerupManager *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_068320c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  this[0x40] = (PowerupManager)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelLoadComplete);
  Sexy::Delegate0::Delegate0<PowerupManager,void(PowerupManager::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyItemFinish);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<PowerupManager,void(PowerupManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::BuyItemFinish,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<PowerupManager,void(PowerupManager::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_b0);
  *(undefined4 *)(this + 0x14) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::StaticNew() */

PowerupManager * PowerupManager::StaticNew(void)

{
  PowerupManager *this;
  
  this = ::operator_new(0x48);
  PowerupManager(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::onDrawSelectionOnBoard(Sexy::Graphics*) */

void __thiscall PowerupManager::onDrawSelectionOnBoard(PowerupManager *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BasePowerup *pBVar8;
  long lVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float *pfVar20;
  float fVar21;
  GraphicsAutoState aGStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  float local_28 [3];
  int local_1c;
  int local_18;
  int iStack_14;
  undefined8 uStack_10;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  Board::GetGridBoundingRect();
  iVar1 = FUN_04307644(local_38 & 0xffffffff);
  iVar2 = FUN_04307644(local_38._4_4_);
  iVar3 = FUN_04307644(local_30 & 0xffffffff);
  iVar4 = FUN_04307644(local_30._4_4_);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  local_38._0_4_ = local_18;
  local_38._4_4_ = iStack_14;
  local_30 = uStack_10;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pBVar8 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar9 = BasePowerup::GetType(pBVar8);
  Sexy::Insets::Insets((Insets *)local_28,(Insets *)(lVar9 + 0x28));
  if (0 < local_1c) {
    local_1c = 0xff;
  }
  Sexy::Graphics::SetColor(param_1,(Color *)local_28);
  iVar1 = (int)local_38;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af88a0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar2 = local_38._4_4_;
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af89b0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  uVar12 = local_30;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af88a0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar3 = local_30._4_4_;
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af89b0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar1 - iVar4,iVar2 - iVar5,(int)uVar12 + iVar6 * 2,
             iVar3 + iVar7 * 2);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8870);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af89b0);
  uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8a00);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af88a0);
  uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af88d0);
  uVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8848);
  uVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8a38);
  uVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af8910);
  Draw9Slice(param_1,(Insets *)&local_18,uVar12,uVar13,uVar14,uVar15,0,uVar16,uVar17,uVar18,uVar19);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar21 = (float)FUN_043073b4(*(undefined4 *)(lVar9 + 0x1c));
  pBVar8 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar9 = BasePowerup::GetType(pBVar8);
  local_28[0] = fVar21 / *(float *)(lVar9 + 0x68);
  local_18 = 0;
  pfVar20 = eastl::max_alt<float>(local_28,(float *)&local_18);
  fVar21 = *pfVar20;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_38);
  iVar3 = (int)local_30;
  iVar1 = (int)local_30 / 2;
  iVar2 = local_30._4_4_ / 2;
  Sexy::Insets::Insets((Insets *)local_28,0,0,0,0);
  pBVar8 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar9 = BasePowerup::GetType(pBVar8);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(lVar9 + 0x28));
  DrawRadialCooldown(fVar21,(float)((int)local_38 + iVar1),(float)(local_38._4_4_ + iVar2),
                     (float)iVar3,param_1,(Insets *)local_28,(Insets *)&local_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::GetPowerAdditionCost(BasePowerup*) */

undefined4 __thiscall
PowerupManager::GetPowerAdditionCost(PowerupManager *this,BasePowerup *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  
  lVar3 = BasePowerup::GetType(param_1);
  cVar2 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(lVar3 + 0x48));
  if (cVar2 != '\0') {
    return 0;
  }
  iVar1 = *(int *)(this + 0x44);
  lVar3 = BasePowerup::GetType(param_1);
  uVar4 = FUN_043073c8(*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50));
  if ((ulong)(long)iVar1 < uVar4) {
    lVar3 = BasePowerup::GetType(param_1);
    puVar5 = (undefined4 *)FUN_043073f0(*(undefined8 *)(lVar3 + 0x48),(long)*(int *)(this + 0x44));
    return *puVar5;
  }
  lVar3 = BasePowerup::GetType(param_1);
  lVar6 = BasePowerup::GetType(param_1);
  lVar6 = FUN_043073c8(*(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x50));
  puVar5 = (undefined4 *)FUN_043073f0(*(undefined8 *)(lVar3 + 0x48),lVar6 + -1);
  return *puVar5;
}


/* PowerupManager::GetCurrentPowerCost(BasePowerup*) */

int __thiscall PowerupManager::GetCurrentPowerCost(PowerupManager *this,BasePowerup *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = BasePowerup::GetType(param_1);
  iVar1 = *(int *)(lVar3 + 0x40);
  iVar2 = GetPowerAdditionCost(this,param_1);
  return iVar1 + iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::SelectPowerup(PowerupType const*, bool) */

void __thiscall
PowerupManager::SelectPowerup(PowerupManager *this,PowerupType *param_1,bool param_2)

{
  RtWeakPtr *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  BasePowerup *pBVar7;
  PowerupType *pPVar8;
  ulong uVar9;
  long lVar10;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RtWeakPtr *pRVar11;
  ResourceInfo *pRVar12;
  ulong uVar13;
  undefined8 uVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    pBVar7 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    BasePowerup::Deselect(pBVar7);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    pPVar8 = (PowerupType *)BasePowerup::GetType((BasePowerup *)pRVar12);
    if (param_1 == pPVar8) {
      MessageRouter::Post<BasePowerup*,BasePowerup*>
                ((MessageRouter *)gMessageRouter,Message::PowerupDeselected,(BasePowerup *)pRVar12);
      goto LAB_043090c8;
    }
  }
  uVar9 = 0;
  do {
    uVar13 = uVar9;
    uVar14 = *(undefined8 *)(this + 0x18);
    uVar9 = FUN_043073dc(uVar14,*(undefined8 *)(this + 0x20));
    if (uVar9 <= uVar13) goto LAB_043090c8;
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar14,uVar13);
    pBVar7 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    pPVar8 = (PowerupType *)BasePowerup::GetType(pBVar7);
    uVar9 = uVar13 + 1;
  } while (param_1 != pPVar8);
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  cVar3 = FUN_043073c4(*(undefined4 *)(lVar10 + 0x20));
  if (cVar3 == '\0') goto LAB_043090c8;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (param_2) {
LAB_04309190:
    param_2 = true;
    pRVar11 = (RtWeakPtr *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar11);
    GetCurrentPowerCost(this,(BasePowerup *)pRVar12);
  }
  else {
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    cVar3 = FUN_043073b0(*(undefined1 *)(lVar10 + 0x1a));
    if (cVar3 != '\0') goto LAB_04309190;
    pRVar11 = (RtWeakPtr *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
    pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar11);
    iVar4 = GetCurrentPowerCost(this,(BasePowerup *)pRVar12);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
    pBVar7 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    lVar10 = BasePowerup::GetType(pBVar7);
    if (*(int *)(lVar10 + 0x70) == 0) {
      if ((iVar4 < 1) || (iVar5 = PlayerInfo::GetNumGems(this_02,true), iVar5 < iVar4)) {
        uVar14 = 2;
LAB_043092b0:
        LawnApp::ShowGemStoreConfirm(gLawnApp,uVar14,1);
        goto LAB_043090c8;
      }
LAB_043092a4:
      param_2 = false;
    }
    else if (*(int *)(lVar10 + 0x70) == 2) {
      iVar5 = PlayerInfo::GetNumCoins(this_02,true);
      if (iVar5 < iVar4) {
        uVar14 = 0;
        goto LAB_043092b0;
      }
      goto LAB_043092a4;
    }
  }
  this[0x40] = (PowerupManager)param_2;
  Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
  pRVar11 = (RtWeakPtr *)FUN_043073e8(*(undefined8 *)(this + 0x18),uVar13);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,pRVar11);
  pBVar7 = (BasePowerup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BasePowerup::Select(pBVar7);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)this_00);
  MessageRouter::Post<BasePowerup*,Sexy::RtWeakPtr<BasePowerup>>
            ((MessageRouter *)puVar1,Message::PowerupSelected,
             (RtWeakPtr<Sexy::SoundResource> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
LAB_043090c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::DeactivatePowerup() */

void __thiscall PowerupManager::DeactivatePowerup(PowerupManager *this)

{
  undefined *puVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x38));
  MessageRouter::Post<BasePowerup*,Sexy::RtWeakPtr<BasePowerup>>
            ((MessageRouter *)puVar1,Message::PowerupDeactivated,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x38));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::CancelActivePowerup() */

void __thiscall PowerupManager::CancelActivePowerup(PowerupManager *this)

{
  RtWeakPtr *pRVar1;
  undefined *puVar2;
  bool bVar3;
  BasePowerup *pBVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pRVar1 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar3) {
    pBVar4 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    BasePowerup::Deactivate(pBVar4);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
  }
  else {
    pRVar1 = (RtWeakPtr *)(this + 0x30);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar3) {
      pBVar4 = (BasePowerup *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      BasePowerup::Deselect(pBVar4);
      puVar2 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)pRVar1);
      MessageRouter::Post<BasePowerup*,Sexy::RtWeakPtr<BasePowerup>>
                ((MessageRouter *)puVar2,Message::PowerupDeselected,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupManager::onUseGemFinished(bool) */

void __thiscall PowerupManager::onUseGemFinished(PowerupManager *this,bool param_1)

{
  if (param_1) {
    return;
  }
  CancelActivePowerup(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::onUseGemCallback(bool const&) */

void __thiscall PowerupManager::onUseGemCallback(PowerupManager *this,bool *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    CancelActivePowerup(this);
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
    local_14 = GetCurrentPowerCost(this,(BasePowerup *)pRVar4);
    if (this[0x40] != (PowerupManager)0x0) {
      local_14 = 0;
    }
    uVar2 = local_14;
    *(uint *)(this + 0x10) = local_14;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
    local_10[0] = NewPVPMgr::GetSeasonEndTime(this_01);
    piVar5 = eastl::min_alt<int>((int *)&local_14,(int *)local_10);
    puVar1 = gMessageRouter;
    iVar3 = *piVar5;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x38));
    MessageRouter::Post<BasePowerup*,int,int,Sexy::RtWeakPtr<BasePowerup>,int,int>
              ((MessageRouter *)puVar1,Message::PowerupActivated,
               (RtWeakPtr<Sexy::SoundResource> *)local_10,uVar2,iVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    iVar3 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    if (-1 < iVar3) {
      uVar7 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd38);
      uVar6 = FUN_043073c8(uVar7,*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd40));
      if ((ulong)(long)iVar3 < uVar6) {
        piVar5 = (int *)FUN_043073f0(uVar7,(long)iVar3);
        *piVar5 = *piVar5 + 1;
      }
    }
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::GetCurrentPowerAdditionDamage(BasePowerup*) */

void __thiscall
PowerupManager::GetCurrentPowerAdditionDamage(PowerupManager *this,BasePowerup *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  lVar5 = BasePowerup::GetType(param_1);
  cVar2 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(lVar5 + 0x48));
  if (cVar2 == '\0') {
    lVar5 = BasePowerup::GetType(param_1);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar5 + 0x48));
    lVar5 = BasePowerup::GetType(param_1);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar5 + 0x48));
    iVar1 = *(int *)(this + 0x10);
    lVar5 = BasePowerup::GetType(param_1);
    local_10 = CONCAT44(local_10._4_4_,iVar1 - *(int *)(lVar5 + 0x40));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar6,uVar7,(__normal_iterator *)&local_10);
    lVar5 = BasePowerup::GetType(param_1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar5 + 0x48));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar3) {
      lVar5 = BasePowerup::GetType(param_1);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar5 + 0x48));
      iVar4 = __gnu_cxx::operator-((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      lVar5 = BasePowerup::GetType(param_1);
      iVar4 = *(int *)(lVar5 + 0x60) * iVar4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* PowerupManager::~PowerupManager() */

void __thiscall PowerupManager::~PowerupManager(PowerupManager *this)

{
  char cVar1;
  PlantCthulhuActinia *this_00;
  WorldMapCamera *this_01;
  
  *(undefined ***)this = &PTR_GetClass_068320c0;
  this_00 = (PlantCthulhuActinia *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  cVar1 = PlantCthulhuActinia::GetEyeballStatus(this_00);
  if (cVar1 != '\0') {
    this_01 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    WorldMapCamera::SetUseClipViewport(this_01,false);
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>>::~vector
            ((vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>> *)
             (this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PowerupManager::~PowerupManager() */

void __thiscall PowerupManager::~PowerupManager(PowerupManager *this)

{
  ~PowerupManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::RemovePowerup(std::string const&) */

void PowerupManager::RemovePowerup(string *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  ResourceInfo *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  BasePowerup *pBVar6;
  ResourceInfo *pRVar7;
  ulong uVar8;
  UIWidget *this_00;
  UIEasyButtonWidget *this_01;
  RtWeakPtrBase *this_02;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  RtWeakPtrBase *this_03;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar8 = 0;
  do {
    uVar10 = uVar8;
    uVar8 = FUN_043073dc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if (uVar8 <= uVar10) goto LAB_04309d20;
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(*(undefined8 *)(param_1 + 0x18),uVar10);
    pBVar6 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    pRVar7 = (ResourceInfo *)BasePowerup::GetType(pBVar6);
    uVar8 = uVar10 + 1;
  } while (pRVar5 != pRVar7);
  iVar11 = 0;
  std::string::string((string *)&local_10,"UIPowerupHolder");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    for (; iVar3 = UIWidget::GetChildCount(this_00), iVar11 < iVar3; iVar11 = iVar11 + 1) {
      UIWidget::GetChildId((int)this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_10);
      Sexy::RtId::~RtId((RtId *)&local_10);
      this_01 = (UIEasyButtonWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
      ;
      pRVar5 = (ResourceInfo *)UIEasyButtonWidget::GetImageNormal(this_01);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      if (pRVar5 == pRVar7) {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        (**(code **)(*plVar9 + 0x48))();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        break;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
  }
  this_03 = (RtWeakPtrBase *)(param_1 + 0x38);
  this_02 = (RtWeakPtrBase *)FUN_043073e8(*(undefined8 *)(param_1 + 0x18),uVar10);
  cVar2 = Sexy::RtWeakPtrBase::operator==(this_03,this_02);
  if (cVar2 == '\0') {
    this_03 = (RtWeakPtrBase *)(param_1 + 0x30);
    cVar2 = Sexy::RtWeakPtrBase::operator==(this_03,this_02);
    if (cVar2 == '\0') goto LAB_04309e38;
    pBVar6 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    BasePowerup::Deselect(pBVar6);
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,this_03);
    MessageRouter::Post<BasePowerup*,Sexy::RtWeakPtr<BasePowerup>>
              ((MessageRouter *)puVar1,Message::PowerupDeselected,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  else {
    pBVar6 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    BasePowerup::Deactivate(pBVar6);
  }
  Sexy::RtWeakPtrBase::ClearId(this_03);
  this_02 = (RtWeakPtrBase *)FUN_043073e8(*(undefined8 *)(param_1 + 0x18),uVar10);
LAB_04309e38:
  plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  (**(code **)(*plVar9 + 0x48))();
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x18));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)(int)uVar10);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>>::erase
            ((vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>> *)
             (param_1 + 0x18),local_10);
LAB_04309d20:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PowerupManager::RemoveAllPowerups() */

void __thiscall PowerupManager::RemoveAllPowerups(PowerupManager *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BasePowerup *this_01;
  long lVar1;
  undefined8 uVar2;
  
  while( true ) {
    uVar2 = *(undefined8 *)(this + 0x18);
    lVar1 = FUN_043073dc(uVar2,*(undefined8 *)(this + 0x20));
    if (lVar1 == 0) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar2,0);
    this_01 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    BasePowerup::GetType(this_01);
    RemovePowerup((string *)this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::AddPowerup(std::string const&, bool) */

void __thiscall PowerupManager::AddPowerup(PowerupManager *this,string *param_1,bool param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  string *psVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BasePowerup *this_01;
  ResourceInfo *pRVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  BasePowerup *extraout_x0;
  ResourceInfo *pRVar9;
  PowerupHolderUI *extraout_x0_00;
  DangerRoomManager *this_02;
  PowerupHolderUI *extraout_x0_01;
  ulong uVar10;
  PowerupHolderUI *pPVar11;
  undefined8 uVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar10 = 0;
  do {
    uVar12 = *(undefined8 *)(this + 0x18);
    uVar6 = FUN_043073dc(uVar12,*(undefined8 *)(this + 0x20));
    if (uVar6 <= uVar10) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      pcVar8 = (char *)FUN_0547429c(lVar7 + 0x10);
      uVar12 = Sexy::RtClass::StaticGetClassNamed(pcVar8);
      GameObject::Create(uVar12,0x36);
      nop();
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      LoadPropsFromMagento(this,(PowerupType *)pRVar9);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
      BasePowerup::SetPowerupType(extraout_x0,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      std::vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>>::
      push_back((vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>> *
                )(this + 0x18),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      bVar2 = std::operator==((string *)(lVar7 + 8),"powerupdangerroomtacticalcuke");
      if (bVar2) {
        this_02 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        uVar3 = DangerRoomManager::GetCukeUsedCount(this_02);
        *(undefined4 *)(this + 0x44) = uVar3;
      }
      std::string::string((string *)aRStack_18,"UIPowerupHolder");
      lVar7 = UIWidget::GetWidgetBySheetName((string *)aRStack_18);
      std::string::~string((string *)aRStack_18);
      nop();
      if (lVar7 == 0) {
        Sexy::RtName::RtName((RtName *)aRStack_18,L"UIPowerupHolder");
        UIWidget::CreateWidget(aRStack_18,0);
        nop();
        Sexy::RtName::~RtName((RtName *)aRStack_18);
        pPVar11 = extraout_x0_01;
      }
      else {
        nop();
        pPVar11 = extraout_x0_00;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
      PowerupHolderUI::AddPowerup(pPVar11,aRStack_18,param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      puVar1 = gMessageRouter;
      if (!param_2) {
        FUN_05475d88(aRStack_18,param_1);
        MessageRouter::Broadcast<std::string_const&,std::string>
                  ((MessageRouter *)puVar1,Message::PowerupEquipped,aRStack_18);
        std::string::~string((string *)aRStack_18);
      }
      break;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar12,uVar10);
    this_01 = (BasePowerup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pRVar9 = (ResourceInfo *)BasePowerup::GetType(this_01);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    uVar10 = uVar10 + 1;
  } while (pRVar9 != pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::addPowerupSet(std::string const&) */

void __thiscall PowerupManager::addPowerupSet(PowerupManager *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar3;
  long lVar4;
  string *psVar5;
  RtId aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_1);
  Sexy::RtName::RtName(aRStack_18,(wstring *)aRStack_20);
  PVZDB::GetIdByAlias(aRStack_48,uVar3,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar4 + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar4 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    FUN_05475d88(asStack_38,uVar3);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if ((bVar1) && (cVar2 = PlayerInfo::GetPowerupUnlockState(this_01,asStack_38), cVar2 != '\0')) {
      AddPowerup(this,asStack_38,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::string::~string(asStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtId::~RtId(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::AddDefaultPowerupsForLevel() */

void __thiscall PowerupManager::AddDefaultPowerupsForLevel(PowerupManager *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetLevelPowerupSet();
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    addPowerupSet(this,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::AddConveyorPowerup(std::string const&) */

void PowerupManager::AddConveyorPowerup(string *param_1)

{
  string *psVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  undefined8 *puVar5;
  ulong uVar6;
  RtWeakPtr *this_00;
  BasePowerup *extraout_x0;
  ulong uVar7;
  undefined8 uVar8;
  ResourceInfo *pRVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  pRVar9 = (ResourceInfo *)0x0;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pcVar3 = (char *)FUN_0547429c(lVar2 + 0x10);
  lVar2 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = FUN_043073dc(uVar8,*(undefined8 *)(param_1 + 0x20));
  if (lVar4 != 0) {
    do {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043073e8(uVar8,uVar7);
      puVar5 = (undefined8 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      lVar4 = (**(code **)*puVar5)();
      if (lVar2 == lVar4) {
        this_00 = (RtWeakPtr *)FUN_043073e8(*(undefined8 *)(param_1 + 0x18),uVar7);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = FUN_043073dc(uVar8,*(undefined8 *)(param_1 + 0x20));
    } while (uVar7 < uVar6);
  }
  if (pRVar9 == (ResourceInfo *)0x0) {
    GameObject::Create(lVar2,0x36);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
    BasePowerup::SetPowerupType(extraout_x0,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>>::
    push_back((vector<Sexy::RtWeakPtr<BasePowerup>,std::allocator<Sexy::RtWeakPtr<BasePowerup>>> *)
              (param_1 + 0x18),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  SelectPowerup((PowerupManager *)param_1,(PowerupType *)pRVar9,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupManager::ActivatePowerup() */

void __thiscall PowerupManager::ActivatePowerup(PowerupManager *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ResourceInfo *pRVar6;
  BasePowerup *pBVar7;
  long lVar8;
  long lVar9;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  DangerRoomManager *pDVar10;
  WorldMapCamera *pWVar11;
  char *__s;
  TGALogMgr *pTVar12;
  PowerupManager *pPVar13;
  size_t __n;
  string asStack_80 [8];
  TGALuckyChestData aTStack_78 [24];
  undefined1 auStack_60 [8];
  string asStack_58 [24];
  string asStack_40 [56];
  size_t local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)(this + 0x30));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  iVar4 = GetCurrentPowerCost(this,(BasePowerup *)pRVar6);
  pBVar7 = (BasePowerup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar8 = BasePowerup::GetType(pBVar7);
  iVar1 = *(int *)(lVar8 + 100);
  if (this[0x40] != (PowerupManager)0x0) {
    iVar4 = 0;
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar2 = FUN_043073c4(*(undefined4 *)(lVar8 + 0x20));
  if ('\0' < cVar2) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = FUN_043073c4(*(undefined4 *)(lVar9 + 0x20));
    FUN_043073b8(lVar8 + 0x20,iVar5 + -1);
  }
  pBVar7 = (BasePowerup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar8 = BasePowerup::GetType(pBVar7);
  cVar2 = IsMiniGamePerkPowerUp(this,(string *)(lVar8 + 8));
  if (cVar2 != '\0') goto LAB_0430a99c;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  pBVar7 = (BasePowerup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar8 = BasePowerup::GetType(pBVar7);
  bVar3 = std::operator==((string *)(lVar8 + 8),"powerupdangerroomtacticalcuke");
  if (bVar3) {
    pDVar10 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar5 = DangerRoomManager::GetCukeCount(pDVar10);
    if (iVar5 < 1) {
      pWVar11 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      WorldMapCamera::SetUseClipViewport(pWVar11,true);
      pPVar13 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<PowerupManager,bool>::ICloudRequestCallbackFunction
                (pPVar13,(_func_void_bool_ptr *)this);
      iVar4 = PlayerInfo::SubtractGems
                        (this_02,iVar4,iVar1,(ICloudRequestCallbackFunctionBase *)pPVar13,1,false);
      if (iVar4 == -1) {
        pWVar11 = (WorldMapCamera *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
        WorldMapCamera::SetUseClipViewport(pWVar11,false);
        pBVar7 = (BasePowerup *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        BasePowerup::Deactivate(pBVar7);
      }
    }
    else {
      pDVar10 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      DangerRoomManager::SetCukeCount(pDVar10,iVar5 + -1);
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::UseGemFinish,true);
      if (iVar5 + -1 == 0) {
        pDVar10 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        cVar2 = DangerRoomManager::IsTrainingMode(pDVar10);
        if (cVar2 == '\0') {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          FUN_0430746c(lVar8 + 0x1a);
        }
      }
    }
    goto LAB_0430a99c;
  }
  pBVar7 = (BasePowerup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar8 = BasePowerup::GetType(pBVar7);
  FUN_05475d88(asStack_80,lVar8 + 8);
  bVar3 = std::operator==(asStack_80,"poweruptacticalcuke");
  if ((bVar3) && (iVar5 = PlayerInfo::GetMonthlyCukeUsesLeft(this_02), 0 < iVar5)) {
    std::string::string(asStack_40,"monthlycard_tacticalcuke");
    PlayerInfo::ModifyPowerupUses(this_02,asStack_40,-1);
    std::string::~string(asStack_40);
    nop();
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::UseGemFinish,true);
    iVar4 = PlayerInfo::GetMonthlyCukeUsesLeft(this_02);
    if (iVar4 < 1) {
      std::string::string(asStack_40,"poweruptacticalcuke");
      iVar4 = PlayerInfo::GetPowerupUsesLeft(this_02,asStack_40);
      std::string::~string(asStack_40);
      nop();
joined_r0x0430aba0:
      if (iVar4 < 1) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        FUN_0430746c(lVar8 + 0x1a);
      }
    }
  }
  else {
    iVar5 = PlayerInfo::GetPowerupUsesLeft(this_02,asStack_80);
    if (iVar5 != 0) {
      PlayerInfo::ModifyPowerupUses(this_02,asStack_80,-1);
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::UseGemFinish,true);
      iVar4 = PlayerInfo::GetPowerupUsesLeft(this_02,asStack_80);
      goto joined_r0x0430aba0;
    }
    pBVar7 = (BasePowerup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    lVar8 = BasePowerup::GetType(pBVar7);
    if (*(int *)(lVar8 + 0x70) == 0) {
      pPVar13 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<PowerupManager,bool>::ICloudRequestCallbackFunction
                (pPVar13,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems
                (this_02,iVar4,iVar1,(ICloudRequestCallbackFunctionBase *)pPVar13,1,false);
    }
    else if (*(int *)(lVar8 + 0x70) == 2) {
      lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if ((lVar8 != 0) &&
         (lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
         *(char *)(lVar8 + 0x111) != '\0')) {
        TGALuckyChestData::TGALuckyChestData(aTStack_78);
        std::string::append((string *)aTStack_78,"2",__n);
        pBVar7 = (BasePowerup *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        lVar8 = BasePowerup::GetType(pBVar7);
        thunk_FUN_05475e00(auStack_60,lVar8 + 8);
        DString::DString((DString *)asStack_40,iVar4);
        __s = (char *)DString::c_str((DString *)asStack_40);
        std::string::append(asStack_58,__s,__n);
        DString::~DString((DString *)asStack_40);
        pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                  ((TGAPlantSpecialOfferData *)asStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
        TGALogMgr::LogVaseBreaker(pTVar12,(DString *)asStack_40);
        TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
        TGALuckyChestData::~TGALuckyChestData(aTStack_78);
      }
      PlayerInfo::SubtractCoins(this_02,iVar4);
    }
  }
  std::string::~string(asStack_80);
LAB_0430a99c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

