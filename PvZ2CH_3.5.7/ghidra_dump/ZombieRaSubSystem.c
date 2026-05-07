// Class: ZombieRaSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::StaticClassInit() */

void ZombieRaSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunOwnerLink");
    (*pcVar3)(plVar2,asStack_10,FUN_046cb678,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieRaSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046cb954,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRaSubSystem::StaticGetClass() */

long * ZombieRaSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRaSubSystem::GetClass() const */

long * ZombieRaSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRaSubSystem::getSunLink(Sexy::RtWeakPtr<CollectableSun>) */

long __thiscall ZombieRaSubSystem::getSunLink(ZombieRaSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x28);
  lVar2 = FUN_046ca750(uVar5,*(undefined8 *)(this + 0x30));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_046ca780(uVar5,lVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar3 + 8),param_2);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return lVar3;
}


/* ZombieRaSubSystem::calcOwnerType(Sexy::RtWeakPtr<BoardEntity>) */

undefined8 __thiscall ZombieRaSubSystem::calcOwnerType(undefined8 param_1,RtWeakPtr *param_2)

{
  bool bVar1;
  ZombieRa *pZVar2;
  ZombieCrystalSkull *pZVar3;
  ZombieModernSolarTruck *pZVar4;
  RtObject *pRVar5;
  Plant *pPVar6;
  PlantSunGun *pPVar7;
  undefined8 uVar8;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar2 = Sexy::RtObject::Cast<ZombieRa>(pRVar5);
    if (pZVar2 != (ZombieRa *)0x0) {
      return 1;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar3 = Sexy::RtObject::Cast<ZombieCrystalSkull>(pRVar5);
    if (pZVar3 != (ZombieCrystalSkull *)0x0) {
      return 2;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar4 = Sexy::RtObject::Cast<ZombieModernSolarTruck>(pRVar5);
    if (pZVar4 != (ZombieModernSolarTruck *)0x0) {
      return 4;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar5);
    if ((pPVar6 == (Plant *)0x0) ||
       (pPVar7 = Sexy::RtObject::Cast<PlantSunGun>(*(RtObject **)(pPVar6 + 0xa8)),
       pPVar7 == (PlantSunGun *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 3;
    }
    return uVar8;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::findNearest(Sexy::SexyVector3 const&) */

void ZombieRaSubSystem::findNearest(SexyVector3 *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtWeakPtrBase *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *extraout_x0;
  PlantSunGun *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar6;
  RtWeakPtr *pRVar7;
  float *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  float fVar8;
  float fVar9;
  FastCurve aFStack_28 [8];
  undefined8 local_20;
  FastCurve aFStack_18 [8];
  undefined8 local_10;
  string *local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  fVar8 = (float)CheatManager::GetVariableValue(___stack_chk_guard);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  Sexy::FastCurve::SetOutRange(aFStack_28,*in_x1,in_x1[1]);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar4);
      uVar3 = calcOwnerType((ZombieRaSubSystem *)param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_10
                           );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      switch(uVar3) {
      case 1:
      case 2:
      case 4:
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        nop();
        cVar2 = (**(code **)(*(long *)extraout_x0 + 0x470))();
        this_01 = extraout_x0;
        if (cVar2 != '\0') {
LAB_046cb0b4:
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_01);
          fVar9 = pfVar6[1];
          Sexy::FastCurve::SetOutRange(aFStack_18,*pfVar6,fVar9);
          uVar3 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_18,(SexyVector2 *)aFStack_28);
          local_10 = CONCAT44(fVar9,uVar3);
          fVar9 = (float)VectorNorm((FPoint *)&local_10);
          if (fVar9 < fVar8) {
            pRVar7 = (RtWeakPtr *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar7);
            fVar8 = fVar9;
          }
        }
        break;
      case 3:
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        nop();
        nop();
        cVar2 = PlantSunGun::CanClaimSun(this_00);
        if (cVar2 != '\0') {
          this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(this_00 + 0x10);
          goto LAB_046cb0b4;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRaSubSystem::ZombieRaSubSystem() */

void __thiscall ZombieRaSubSystem::ZombieRaSubSystem(ZombieRaSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b3be0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombieRaSubSystem::StaticNew() */

ZombieRaSubSystem * ZombieRaSubSystem::StaticNew(void)

{
  ZombieRaSubSystem *this;
  
  this = ::operator_new(0x40);
  ZombieRaSubSystem(this);
  return this;
}


/* ZombieRaSubSystem::registerForEvents() */

void __thiscall ZombieRaSubSystem::registerForEvents(ZombieRaSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieRaSubSystem,void(ZombieRaSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ZombieRaSubSystem,void(ZombieRaSubSystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_70);
  return;
}


/* ZombieRaSubSystem::clearCollections() */

void __thiscall ZombieRaSubSystem::clearCollections(ZombieRaSubSystem *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::clear
            ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)(this + 0x28));
  return;
}


/* ZombieRaSubSystem::~ZombieRaSubSystem() */

void __thiscall ZombieRaSubSystem::~ZombieRaSubSystem(ZombieRaSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b3be0;
  std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::~vector
            ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieRaSubSystem::~ZombieRaSubSystem() */

void __thiscall ZombieRaSubSystem::~ZombieRaSubSystem(ZombieRaSubSystem *this)

{
  ~ZombieRaSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::removeSunLink(Sexy::RtWeakPtr<CollectableSun>) */

void __thiscall ZombieRaSubSystem::removeSunLink(ZombieRaSubSystem *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar3 + 8),param_2);
      if (cVar2 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::erase
                           ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::uncaptureSun(CollectableSun*) */

void __thiscall ZombieRaSubSystem::uncaptureSun(ZombieRaSubSystem *this,CollectableSun *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  removeSunLink(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  CollectableCure::StopCaptureEffect((CollectableCure *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::eraseOwner(BoardEntity*) */

void __thiscall ZombieRaSubSystem::eraseOwner(ZombieRaSubSystem *this,BoardEntity *param_1)

{
  uint uVar1;
  int iVar2;
  RtWeakPtr *pRVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  do {
    uVar10 = *(undefined8 *)(this + 0x10);
    iVar2 = (int)uVar7;
    uVar5 = FUN_046ca73c(uVar10,*(undefined8 *)(this + 0x18));
    if (uVar5 <= uVar7) goto LAB_046cc1bc;
    pRVar3 = (RtWeakPtr *)FUN_046ca748(uVar10,uVar7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
    uVar7 = uVar7 + 1;
  } while (param_1 != (BoardEntity *)pRVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),local_10);
  uVar10 = *(undefined8 *)(this + 0x28);
  iVar2 = FUN_046ca750(uVar10,*(undefined8 *)(this + 0x30));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      pRVar3 = (RtWeakPtr *)FUN_046ca780(uVar10,lVar11);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
      if (param_1 == (BoardEntity *)pRVar4) {
        lVar6 = FUN_046ca780(*(undefined8 *)(this + 0x28),lVar11);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 8));
        uncaptureSun(this,(CollectableSun *)pRVar4);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar6 = lVar9 + -1;
      lVar11 = lVar9;
    }
  }
LAB_046cc1bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::onZombieDestroyed(Zombie*) */

void __thiscall ZombieRaSubSystem::onZombieDestroyed(ZombieRaSubSystem *this,Zombie *param_1)

{
  uint uVar1;
  int iVar2;
  RtWeakPtr *pRVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar7 = 0;
  do {
    uVar10 = *(undefined8 *)(this + 0x10);
    iVar2 = (int)uVar7;
    uVar5 = FUN_046ca73c(uVar10,*(undefined8 *)(this + 0x18));
    if (uVar5 <= uVar7) goto LAB_046cc1bc;
    pRVar3 = (RtWeakPtr *)FUN_046ca748(uVar10,uVar7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
    uVar7 = uVar7 + 1;
  } while (param_1 != (Zombie *)pRVar4);
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x10));
  uStack_18 = __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&uStack_20,(long)iVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&uStack_10,(__normal_iterator *)&uStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),uStack_10);
  uVar10 = *(undefined8 *)(this + 0x28);
  iVar2 = FUN_046ca750(uVar10,*(undefined8 *)(this + 0x30));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      pRVar3 = (RtWeakPtr *)FUN_046ca780(uVar10,lVar11);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
      if (param_1 == (Zombie *)pRVar4) {
        lVar6 = FUN_046ca780(*(undefined8 *)(this + 0x28),lVar11);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 8));
        uncaptureSun(this,(CollectableSun *)pRVar4);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar6 = lVar9 + -1;
      lVar11 = lVar9;
    }
  }
LAB_046cc1bc:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::onPlantDied(Plant*) */

void __thiscall ZombieRaSubSystem::onPlantDied(ZombieRaSubSystem *this,Plant *param_1)

{
  uint uVar1;
  int iVar2;
  RtWeakPtr *pRVar3;
  ResourceInfo *pRVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar7 = 0;
  do {
    uVar10 = *(undefined8 *)(this + 0x10);
    iVar2 = (int)uVar7;
    uVar5 = FUN_046ca73c(uVar10,*(undefined8 *)(this + 0x18));
    if (uVar5 <= uVar7) goto LAB_046cc1bc;
    pRVar3 = (RtWeakPtr *)FUN_046ca748(uVar10,uVar7);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
    uVar7 = uVar7 + 1;
  } while (param_1 != (Plant *)pRVar4);
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x10));
  uStack_18 = __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&uStack_20,(long)iVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&uStack_10,(__normal_iterator *)&uStack_18);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::erase
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),uStack_10);
  uVar10 = *(undefined8 *)(this + 0x28);
  iVar2 = FUN_046ca750(uVar10,*(undefined8 *)(this + 0x30));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      pRVar3 = (RtWeakPtr *)FUN_046ca780(uVar10,lVar11);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
      if (param_1 == (Plant *)pRVar4) {
        lVar6 = FUN_046ca780(*(undefined8 *)(this + 0x28),lVar11);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 8));
        uncaptureSun(this,(CollectableSun *)pRVar4);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar6 = lVar9 + -1;
      lVar11 = lVar9;
    }
  }
LAB_046cc1bc:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::moveSunTowardCaptor(CollectableSun*, SunOwnerLink const*,
   Sexy::RtWeakPtr<BoardEntity>) */

void ZombieRaSubSystem::moveSunTowardCaptor
               (undefined1 param_1_00 [16],undefined4 param_2_00,undefined4 param_3,
               ZombieRaSubSystem *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_2,long param_6,RtWeakPtr<Sexy::ResourceInfo> *param_7)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  undefined8 *puVar3;
  PlantSunGun *this_00;
  ZombieModernSolarTruck *this_01;
  ZombieCrystalSkull *this_02;
  ZombieModernSolarTruck *this_03;
  long lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  fVar11 = *(float *)(param_6 + 0x14);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_7);
  iVar2 = calcOwnerType(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  switch(iVar2) {
  case 1:
  case 2:
  case 4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_7);
    nop();
    cVar1 = Zombie::IsSuspended(this);
    if (cVar1 != '\0') goto switchD_046cc33c_default;
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_58 = *puVar3;
    local_50 = *(undefined4 *)(puVar3 + 1);
    if (iVar2 == 1) {
      nop();
      local_18 = ZombieModernSolarTruck::GetSunTarget(this_01);
LAB_046cc618:
      local_14 = param_2_00;
      local_10 = param_3;
      EATextSquish::Vec3::operator+=((Vec3 *)&local_58,(Vec3 *)&local_18);
      uVar10 = param_3;
    }
    else {
      if (iVar2 == 2) {
        nop();
        local_18 = ZombieCrystalSkull::GetSunTarget(this_02);
        goto LAB_046cc618;
      }
      uVar10 = param_3;
      if (iVar2 == 4) {
        nop();
        local_18 = ZombieModernSolarTruck::GetSunTarget(this_03);
        goto LAB_046cc618;
      }
    }
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_2);
    local_48 = *puVar3;
    local_40 = *(undefined4 *)(puVar3 + 1);
    local_38 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
    local_34 = param_2_00;
    local_30 = uVar10;
    fVar7 = (float)DVec3::getLength((DVec3 *)&local_38);
    uVar8 = 0x42580001;
    if (fVar7 <= 54.000004) {
      pcVar5 = *(code **)(*(long *)this + 0x490);
      uVar9 = CollectableCure::GetCureValue();
      (*pcVar5)(this,uVar9);
      pcVar5 = *(code **)(*(long *)this + 0x480);
      uVar9 = CollectableCure::GetCureValue();
      (*pcVar5)(this,uVar9);
LAB_046cc5ac:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(param_6 + 8));
      removeSunLink(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      (**(code **)(*(long *)param_2 + 0x48))(param_2);
      goto switchD_046cc33c_default;
    }
    local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
    param_3 = 0x447a0000;
    uVar9 = 0x41f00000;
    local_24 = uVar8;
    local_20 = uVar10;
    fVar6 = (float)ClampFloat((fVar6 - fVar11) * 45.0,30.0,1000.0);
    EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar6);
    lVar4 = *(long *)param_2;
    break;
  case 3:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_7);
    nop();
    nop();
    cVar1 = PlantSunGun::CanClaimSun(this_00);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(param_6 + 8));
      removeSunLink(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      goto switchD_046cc33c_default;
    }
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this_00 + 0x10));
    uVar9 = 0x428c0000;
    local_58._4_4_ = (float)((ulong)*puVar3 >> 0x20);
    local_50 = *(undefined4 *)(puVar3 + 1);
    local_58 = CONCAT44(local_58._4_4_ - 70.0,(int)*puVar3);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_2);
    local_48 = *puVar3;
    local_40 = *(undefined4 *)(puVar3 + 1);
    local_38 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
    local_34 = uVar9;
    local_30 = param_3;
    fVar6 = (float)DVec3::getLength((DVec3 *)&local_38);
    uVar9 = 0x41700000;
    if (fVar6 <= 15.0) {
      uVar9 = CollectableCure::GetCureValue();
      FUN_046ca724(this_00 + 0x34,uVar9);
      iVar2 = CollectableCure::GetCureValue();
      PlantSunGun::DecrementSunsClaimed(this_00,iVar2);
      goto LAB_046cc5ac;
    }
    local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
    local_24 = uVar9;
    local_20 = param_3;
    EATextSquish::Vec3::operator*=((Vec3 *)&local_28,10.0);
    lVar4 = *(long *)param_2;
    break;
  default:
    goto switchD_046cc33c_default;
  }
  pcVar5 = *(code **)(lVar4 + 0x78);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_48,(SexyVector3 *)&local_28);
  local_14 = uVar9;
  local_10 = param_3;
  (*pcVar5)(param_2,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
switchD_046cc33c_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRaSubSystem::AssociateWithSubSystem(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
ZombieRaSubSystem::AssociateWithSubSystem(ZombieRaSubSystem *this,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  PlantSunGun *pPVar4;
  ZombieRa *pZVar5;
  ZombieCrystalSkull *pZVar6;
  ZombieModernSolarTruck *pZVar7;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar5 = Sexy::RtObject::Cast<ZombieRa>(pRVar2);
    if (pZVar5 == (ZombieRa *)0x0) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pZVar6 = Sexy::RtObject::Cast<ZombieCrystalSkull>(pRVar2);
      if (pZVar6 == (ZombieCrystalSkull *)0x0) {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pZVar7 = Sexy::RtObject::Cast<ZombieModernSolarTruck>(pRVar2);
        if (pZVar7 == (ZombieModernSolarTruck *)0x0) goto LAB_046cc68c;
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x10),param_2);
  }
LAB_046cc68c:
  pRVar2 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
  if ((pPVar3 != (Plant *)0x0) &&
     (pPVar4 = Sexy::RtObject::Cast<PlantSunGun>(*(RtObject **)(pPVar3 + 0xa8)),
     pPVar4 != (PlantSunGun *)0x0)) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x10),param_2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::addSunLink(Sexy::RtWeakPtr<CollectableSun>, Sexy::RtWeakPtr<BoardEntity>, int)
    */

void __thiscall
ZombieRaSubSystem::addSunLink
          (ZombieRaSubSystem *this,RtWeakPtr *param_2,RtWeakPtr *param_3,undefined4 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  SunOwnerLink aSStack_20 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SunOwnerLink::SunOwnerLink(aSStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aSStack_20,param_3);
  local_10 = param_4;
  local_c = PVZ_T();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_30);
  std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::insert
            ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)(this + 0x28),local_28,aSStack_20)
  ;
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::captureSun(CollectableSun*) */

void __thiscall ZombieRaSubSystem::captureSun(ZombieRaSubSystem *this,CollectableSun *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *extraout_x0;
  PlantSunGun *this_00;
  char *__s;
  code *pcVar6;
  float fVar7;
  RtMixedPtrBase aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar5;
  local_10 = *(float *)(puVar5 + 1);
  iVar2 = BoardTransforms::GridToBoardSpaceY(0);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar7 = (float)FUN_046cac7c(param_1 + 0xc0);
  if ((fVar7 <= 1.0) || (cVar1 = Collectable::IsCollecting((Collectable *)param_1), cVar1 != '\0'))
  goto LAB_046ccdf4;
  if (local_18._4_4_ - local_10 <= (float)(iVar2 - iVar3)) goto LAB_046ccdf4;
  findNearest((SexyVector3 *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 == '\0') goto switchD_046ccf18_default;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
  uVar4 = CollectableCure::GetCureValue();
  addSunLink(this,aRStack_28,aRStack_20,uVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
  uVar4 = calcOwnerType(this,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  switch(uVar4) {
  case 1:
  case 4:
    __s = "red";
    goto LAB_046ccf28;
  case 2:
    __s = "blue";
LAB_046ccf28:
    std::string::string((string *)aRStack_20,__s);
    CollectableSun::StartCaptureEffect(param_1,aRStack_20);
    std::string::~string((string *)aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x488);
    uVar4 = CollectableCure::GetCureValue();
    (*pcVar6)(extraout_x0,uVar4);
    break;
  case 3:
    std::string::string((string *)aRStack_20,"red");
    CollectableSun::StartCaptureEffect(param_1,aRStack_20);
    std::string::~string((string *)aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    nop();
    iVar2 = CollectableCure::GetCureValue();
    PlantSunGun::IncrementSunsClaimed(this_00,iVar2);
  }
switchD_046ccf18_default:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
LAB_046ccdf4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::incrementSunlinkTimers() */

void __thiscall ZombieRaSubSystem::incrementSunlinkTimers(ZombieRaSubSystem *this)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  Zombie *this_00;
  ResourceInfo *pRVar7;
  ulong uVar8;
  int *piVar9;
  PlantSunGun *this_01;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar14 = *(undefined8 *)(this + 0x28);
  local_38 = (ulong)local_38._4_4_ << 0x20;
  lVar5 = FUN_046ca750(uVar14,*(undefined8 *)(this + 0x30));
  if (lVar5 != 0) {
    do {
      pRVar6 = (RtWeakPtrBase *)FUN_046ca780(uVar14,uVar10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,pRVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      uVar3 = calcOwnerType(this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      switch(uVar3) {
      case 1:
      case 2:
      case 4:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        nop();
        if (this_00 == (Zombie *)0x0) {
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pRVar6 + 8));
          if (pRVar7 == (ResourceInfo *)0x0) goto LAB_046cd204;
          goto switchD_046cd0b4_default;
        }
        cVar2 = Zombie::IsSuspended(this_00);
        if (cVar2 == '\0') {
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pRVar6 + 8));
          if (pRVar7 == (ResourceInfo *)0x0) {
            (**(code **)(*(long *)this_00 + 0x480))(this_00,*(undefined4 *)(pRVar6 + 0x10));
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_38);
          }
          goto switchD_046cd0b4_default;
        }
        fVar15 = (float)PVZ_Dt();
        *(float *)(pRVar6 + 0x14) = *(float *)(pRVar6 + 0x14) + fVar15;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        break;
      case 3:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        nop();
        nop();
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pRVar6 + 8));
        if (pRVar7 == (ResourceInfo *)0x0) {
          if (this_01 != (PlantSunGun *)0x0) {
            PlantSunGun::DecrementSunsClaimed(this_01,*(int *)(pRVar6 + 0x10));
          }
LAB_046cd204:
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_38);
        }
      default:
switchD_046cd0b4_default:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      uVar14 = *(undefined8 *)(this + 0x28);
      iVar4 = (int)local_38 + 1;
      local_38 = CONCAT44(local_38._4_4_,iVar4);
      uVar10 = (ulong)iVar4;
      uVar8 = FUN_046ca750(uVar14,*(undefined8 *)(this + 0x30));
    } while (uVar10 < uVar8);
  }
  iVar4 = FUN_046ca78c(local_20,local_18);
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar11 = (long)(int)uVar1 + -1;
    lVar5 = lVar11;
    lVar13 = (long)(int)uVar1;
    while( true ) {
      lVar12 = lVar5;
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x28));
      piVar9 = (int *)FUN_046ca798(local_20,lVar13);
      local_30 = __gnu_cxx::
                 __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                 ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                              *)&local_38,(long)*piVar9);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_30);
      std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::erase
                ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)(this + 0x28),local_28);
      if (lVar12 == lVar11 - (ulong)uVar1) break;
      lVar5 = lVar12 + -1;
      lVar13 = lVar12;
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRaSubSystem::Update() */

void __thiscall ZombieRaSubSystem::Update(ZombieRaSubSystem *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  RtObject *this_00;
  CollectableSun *this_01;
  RtWeakPtrBase *pRVar6;
  long *extraout_x0;
  PlantSunGun *this_02;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x10));
  if ((cVar1 == '\0') ||
     (cVar1 = std::vector<SunOwnerLink,std::allocator<SunOwnerLink>>::empty
                        ((vector<SunOwnerLink,std::allocator<SunOwnerLink>> *)(this + 0x28)),
     cVar1 == '\0')) {
    incrementSunlinkTimers(this);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2e);
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (bVar2) {
      do {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        this_01 = Sexy::RtObject::Cast<CollectableSun>(this_00);
        if (this_01 == (CollectableSun *)0x0) {
LAB_046cd43c:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          iVar4 = extraout_w1_00;
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_40);
          pRVar6 = (RtWeakPtrBase *)getSunLink(this,aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if ((pRVar6 == (RtWeakPtrBase *)0x0) ||
             (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pRVar6 + 8)), cVar1 == '\0'))
          {
            captureSun(this,this_01);
            goto LAB_046cd43c;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar6);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
          uVar3 = calcOwnerType(this,aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          switch(uVar3) {
          case 1:
          case 2:
          case 4:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            nop();
            if ((extraout_x0 != (long *)0x0) &&
               (cVar1 = (**(code **)(*extraout_x0 + 0x328))(), cVar1 == '\0')) {
              cVar1 = (**(code **)(*extraout_x0 + 0x478))(extraout_x0);
              if ((cVar1 == '\0') &&
                 (cVar1 = Collectable::IsCollecting((Collectable *)this_01), cVar1 == '\0')) {
LAB_046cd514:
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38)
                ;
                moveSunTowardCaptor(this,this_01,pRVar6,aRStack_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              }
              else {
                uncaptureSun(this,this_01);
                pcVar7 = *(code **)(*extraout_x0 + 0x480);
                uVar3 = CollectableCure::GetCureValue();
                (*pcVar7)(extraout_x0,uVar3);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              }
              goto LAB_046cd43c;
            }
            break;
          case 3:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            nop();
            nop();
            if (this_02 != (PlantSunGun *)0x0) {
              cVar1 = Collectable::IsCollecting((Collectable *)this_01);
              if ((cVar1 == '\0') && (cVar1 = PlantSunGun::CanClaimSun(this_02), cVar1 != '\0'))
              goto LAB_046cd514;
              uncaptureSun(this,this_01);
              iVar4 = CollectableCure::GetCureValue();
              PlantSunGun::DecrementSunsClaimed(this_02,iVar4);
              goto switchD_046cd39c_default;
            }
            break;
          default:
switchD_046cd39c_default:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            goto LAB_046cd43c;
          }
          uncaptureSun(this,this_01);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          iVar4 = extraout_w1;
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
        bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      } while (bVar2);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

