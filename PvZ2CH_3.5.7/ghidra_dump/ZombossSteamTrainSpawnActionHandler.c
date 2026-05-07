// Class: ZombossSteamTrainSpawnActionHandler


/* ZombossSteamTrainSpawnActionHandler::onNotifySteamTrainMoving() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::onNotifySteamTrainMoving
          (ZombossSteamTrainSpawnActionHandler *this)

{
  if (this[0x44] == (ZombossSteamTrainSpawnActionHandler)0x0) {
    this[0x44] = (ZombossSteamTrainSpawnActionHandler)0x1;
  }
  return;
}


/* ZombossSteamTrainSpawnActionHandler::onPortalStopAnimDone(std::string const&) */

void ZombossSteamTrainSpawnActionHandler::onPortalStopAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::StaticClassInit() */

void ZombossSteamTrainSpawnActionHandler::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SteamZombiePortalInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03c49e1c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossSteamTrainSpawnActionHandler");
    (*pcVar3)(plVar2,asStack_10,FUN_03c4a434,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamTrainSpawnActionHandler::StaticGetClass() */

long * ZombossSteamTrainSpawnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamTrainSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamTrainSpawnActionHandler::GetClass() const */

long * ZombossSteamTrainSpawnActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamTrainSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onZombiePortalCloseAnimDone(std::string const&) */

void ZombossSteamTrainSpawnActionHandler::onZombiePortalCloseAnimDone(string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x28);
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      lVar3 = FUN_03c3ed6c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if (lVar3 - 1U <= (ulong)(long)iVar5) {
LAB_03c45b9c:
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 8));
          if (bVar1) {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
            (**(code **)(*plVar4 + 0x48))();
          }
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
        }
      }
LAB_03c45b54:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == 3) {
      *piVar2 = 4;
      lVar3 = FUN_03c3ed6c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if (lVar3 - 1U <= (ulong)(long)iVar5) goto LAB_03c45b9c;
      goto LAB_03c45b54;
    }
    iVar5 = iVar5 + 1;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::drawZombieSpawnPortal(Sexy::Graphics*) */

void __thiscall
ZombossSteamTrainSpawnActionHandler::drawZombieSpawnPortal
          (ZombossSteamTrainSpawnActionHandler *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  Point aPStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03c3ed6c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  if (lVar4 != 0) {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x28));
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      this_00 = (RtWeakPtr *)(lVar4 + 8);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        Sexy::Point::Point(aPStack_38,*(int *)(lVar4 + 0x10),*(int *)(lVar4 + 0x14));
        BoardTransforms::GridToBoardSpace(aPStack_38);
        iVar2 = FUN_03c3f320(local_40 + -0x88);
        iVar3 = FUN_03c3f320(local_3c + -0x8c);
        FUN_03c3eb68((float)iVar2,(float)iVar3,auStack_28,auStack_1c);
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        PopAnimRig::SetRenderTransform(pPVar5,aSStack_30);
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        PopAnimRig::Draw(pPVar5,param_1);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onEndAction() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::onEndAction(ZombossSteamTrainSpawnActionHandler *this)

{
  RtWeakPtrBase *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  long lVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  std::string::string((string *)&local_10,"Play_Zomb_Global_Zomboss_Attack_Portal_End");
  RealObject::PlayPositionalSound((RealObject *)this_02,(string *)&local_10,0.0);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (RtWeakPtrBase *)(lVar3 + 8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(this_00);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossSteamTrainSpawnActionHandler::AddToRenderQueue
          (ZombossSteamTrainSpawnActionHandler *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  long lVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03c3ed6c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  if (lVar2 != 0) {
    uVar1 = BoardConstants::NUMBER_OF_ROWS();
    uVar1 = Board::MakeRenderOrder(0x61e68,uVar1,0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,drawZombieSpawnPortal);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<ZombossSteamTrainSpawnActionHandler,void(ZombossSteamTrainSpawnActionHandler::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,uVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::registerForEvents() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::registerForEvents(ZombossSteamTrainSpawnActionHandler *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySteamTrainMoving);
  Sexy::Delegate0::
  Delegate0<ZombossSteamTrainSpawnActionHandler,void(ZombossSteamTrainSpawnActionHandler::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifySteamTrainMoving,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamTrainSpawnActionHandler::ZombossSteamTrainSpawnActionHandler() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::ZombossSteamTrainSpawnActionHandler
          (ZombossSteamTrainSpawnActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_067526e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  this[0x44] = (ZombossSteamTrainSpawnActionHandler)0x0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* ZombossSteamTrainSpawnActionHandler::StaticNew() */

ZombossSteamTrainSpawnActionHandler * ZombossSteamTrainSpawnActionHandler::StaticNew(void)

{
  ZombossSteamTrainSpawnActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossSteamTrainSpawnActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::spawnTrains() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::spawnTrains(ZombossSteamTrainSpawnActionHandler *this)

{
  bool bVar1;
  undefined4 uVar2;
  RtObject *pRVar3;
  ZombieZombossMech *pZVar4;
  long lVar5;
  GridItemSteamTrain *this_00;
  Board *this_01;
  float fVar6;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar3);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::Point::Point((Point *)&local_18,(TPoint *)(lVar5 + 0x10));
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"steam_train");
    pRVar3 = (RtObject *)Board::AddGridItem(this_01,asStack_10,local_18,local_14,1);
    this_00 = Sexy::RtObject::Cast<GridItemSteamTrain>(pRVar3);
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (GridItemSteamTrain *)0x0) {
      uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
      FUN_03c3ed14(this_00 + 0x1ec,uVar2);
      GridItemSteamTrain::SetTrainState(this_00,1);
      fVar6 = (float)FUN_03c3eca4(*(undefined4 *)(pZVar4 + 0x284));
      GridItemSteamTrain::SetMaxHP(this_00,fVar6);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onZombiePortalOpenAnimDone(std::string const&) */

void ZombossSteamTrainSpawnActionHandler::onZombiePortalOpenAnimDone(string *param_1)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  EffectAnimRig_ZombiePortal *this;
  int iVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x28));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x28));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_03c47bb0:
      lVar3 = FUN_03c3ed6c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      if (lVar3 - 1U <= (ulong)(long)iVar4) {
        spawnTrains((ZombossSteamTrainSpawnActionHandler *)param_1);
        fVar5 = (float)PVZ_T();
        *(float *)(param_1 + 0x40) = fVar5 + 1.5;
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == 1) {
      *piVar2 = 2;
      this = (EffectAnimRig_ZombiePortal *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(piVar2 + 2))
      ;
      EffectAnimRig_ZombiePortal::PlayLooped(this);
      goto LAB_03c47bb0;
    }
    iVar4 = iVar4 + 1;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onStartAction() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::onStartAction(ZombossSteamTrainSpawnActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPortalStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlayPortalStart((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onUpdateAction() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::onUpdateAction(ZombossSteamTrainSpawnActionHandler *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  long lVar3;
  PopAnimRig *this_03;
  ZombieHydraHeadAnimRig *pZVar4;
  undefined4 *puVar5;
  EffectAnimRig_ZombiePortal *pEVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_78;
  undefined8 local_70;
  RtMixedPtr aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  cVar1 = (**(code **)(*(long *)this_02 + 0xa90))();
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x28);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 8));
      if (bVar2) {
        this_03 = (PopAnimRig *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
        fVar7 = (float)PVZ_T();
        fVar8 = (float)PVZ_Dt();
        PopAnimRig::UpdateAnim(this_03,fVar7,fVar8);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
    }
    fVar7 = (float)PVZ_T();
    if ((*(float *)(this + 0x40) <= fVar7) &&
       (this[0x44] != (ZombossSteamTrainSpawnActionHandler)0x0)) {
      uVar9 = PVZ_EOT();
      *(undefined4 *)(this + 0x40) = uVar9;
      pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_02);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)&local_58,"onPortalStopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (move_iterator<Sexy::LeaderboardEntry*> *)&local_60,(string *)&local_58);
      ZombieAnimRig_ZombossMech::PlayPortalEnd((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar2) {
        puVar5 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *puVar5 = 3;
        pEVar6 = (EffectAnimRig_ZombiePortal *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(puVar5 + 2));
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)&local_58,"onZombiePortalCloseAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (move_iterator<Sexy::LeaderboardEntry*> *)&local_60,(string *)&local_58);
        EffectAnimRig_ZombiePortal::PlayClose(pEVar6,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_58);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_78);
      }
      ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamTrainSpawnActionHandler::~ZombossSteamTrainSpawnActionHandler() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::~ZombossSteamTrainSpawnActionHandler
          (ZombossSteamTrainSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_067526e0;
  std::vector<SteamZombiePortalInfo,std::allocator<SteamZombiePortalInfo>>::~vector
            ((vector<SteamZombiePortalInfo,std::allocator<SteamZombiePortalInfo>> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSteamTrainSpawnActionHandler::~ZombossSteamTrainSpawnActionHandler() */

void __thiscall
ZombossSteamTrainSpawnActionHandler::~ZombossSteamTrainSpawnActionHandler
          (ZombossSteamTrainSpawnActionHandler *this)

{
  ~ZombossSteamTrainSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::createZombiePortal(int, int) */

void __thiscall
ZombossSteamTrainSpawnActionHandler::createZombiePortal
          (ZombossSteamTrainSpawnActionHandler *this,int param_1,int param_2)

{
  ResourceInfo *pRVar1;
  EffectAnimRig_ZombiePortal *pEVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined4 local_68 [2];
  RtWeakPtr<PowerPropertySheet> aRStack_60 [8];
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"POPANIM_EFFECTS_ZOMBOSS_TELEPORTATION_TRAIN");
  GetPAMByName(asStack_78);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
  PopAnimRig::CreateRig<EffectAnimRig_ZombiePortal>((PopAnim *)pRVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  std::string::~string(asStack_78);
  nop();
  pEVar2 = (EffectAnimRig_ZombiePortal *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_78);
  std::string::string((string *)local_68,"onZombiePortalOpenAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtWeakPtr *)&local_70,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  EffectAnimRig_ZombiePortal::PlayOpen(pEVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)local_68);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
  SteamZombiePortalInfo::SteamZombiePortalInfo((SteamZombiePortalInfo *)local_68);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_60,(RtWeakPtr *)aRStack_80);
  local_68[0] = 1;
  Sexy::Point::Point((Point *)&local_70,param_1,param_2);
  local_58 = local_70;
  std::vector<SteamZombiePortalInfo,std::allocator<SteamZombiePortalInfo>>::push_back
            ((vector<SteamZombiePortalInfo,std::allocator<SteamZombiePortalInfo>> *)(this + 0x28),
             (SteamZombiePortalInfo *)local_68);
  WidgetImg::~WidgetImg((WidgetImg *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler::onPortalStartAnimDone(std::string const&) */

void ZombossSteamTrainSpawnActionHandler::onPortalStartAnimDone(string *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  ZombossHydraSprayActionDefinition *pZVar5;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_ZombossMech::PlayPortalLoop((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar2 = *(int *)(pZVar5 + 0x40);
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = (iVar3 - iVar2) / 2;
  iVar2 = iVar3 + iVar2;
  if (iVar3 < iVar2) {
    do {
      iVar1 = iVar3 + 1;
      createZombiePortal((ZombossSteamTrainSpawnActionHandler *)param_1,6,iVar3);
      iVar3 = iVar1;
    } while (iVar1 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

