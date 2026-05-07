// Class: PlantfoodCaptureSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::StaticClassInit() */

void PlantfoodCaptureSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodOwnerLink");
    (*pcVar3)(plVar2,asStack_10,FUN_04655f34,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantfoodCaptureSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046561a0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodCaptureSubSystem::StaticGetClass() */

long * PlantfoodCaptureSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantfoodCaptureSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodCaptureSubSystem::GetClass() const */

long * PlantfoodCaptureSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantfoodCaptureSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodCaptureSubSystem::getPlantfoodLink(Sexy::RtWeakPtr<CollectablePlantfood>) */

long __thiscall
PlantfoodCaptureSubSystem::getPlantfoodLink(PlantfoodCaptureSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x28);
  lVar2 = FUN_04655354(uVar5,*(undefined8 *)(this + 0x30));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_04655384(uVar5,lVar4);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar3 + 8),param_2);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return lVar3;
}


/* PlantfoodCaptureSubSystem::calcOwnerType(Sexy::RtWeakPtr<BoardEntity>) */

undefined8 __thiscall
PlantfoodCaptureSubSystem::calcOwnerType(undefined8 param_1,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *this;
  ZombieHeianAkinndo *pZVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar2 = Sexy::RtObject::Cast<ZombieHeianAkinndo>(this);
    if (pZVar2 != (ZombieHeianAkinndo *)0x0) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::findNearest(Sexy::SexyVector3 const&) */

void PlantfoodCaptureSubSystem::findNearest(SexyVector3 *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  ZombieHeianAkinndo *this_00;
  float *pfVar5;
  RtWeakPtr *pRVar6;
  float *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  FastCurve aFStack_28 [8];
  undefined8 local_20;
  FastCurve aFStack_18 [8];
  undefined8 local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)CheatManager::GetVariableValue(___stack_chk_guard);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  Sexy::FastCurve::SetOutRange(aFStack_28,*in_x1,in_x1[1]);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar4);
    iVar3 = calcOwnerType((PlantfoodCaptureSubSystem *)param_1,
                          (RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (iVar3 == 1) {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      nop();
      cVar2 = ZombieHeianAkinndo::CanClaimPlantfood(this_00);
      if (cVar2 != '\0') {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar9 = pfVar5[1];
        Sexy::FastCurve::SetOutRange(aFStack_18,*pfVar5,fVar9);
        uVar8 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_18,(SexyVector2 *)aFStack_28);
        local_10 = CONCAT44(fVar9,uVar8);
        fVar9 = (float)VectorNorm((FPoint *)&local_10);
        if (fVar9 < fVar7) {
          pRVar6 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar6);
          fVar7 = fVar9;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodCaptureSubSystem::PlantfoodCaptureSubSystem() */

void __thiscall
PlantfoodCaptureSubSystem::PlantfoodCaptureSubSystem(PlantfoodCaptureSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068896c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* PlantfoodCaptureSubSystem::StaticNew() */

PlantfoodCaptureSubSystem * PlantfoodCaptureSubSystem::StaticNew(void)

{
  PlantfoodCaptureSubSystem *this;
  
  this = ::operator_new(0x40);
  PlantfoodCaptureSubSystem(this);
  return this;
}


/* PlantfoodCaptureSubSystem::registerForEvents() */

void __thiscall PlantfoodCaptureSubSystem::registerForEvents(PlantfoodCaptureSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantfoodCaptureSubSystem,void(PlantfoodCaptureSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* PlantfoodCaptureSubSystem::clearCollections() */

void __thiscall PlantfoodCaptureSubSystem::clearCollections(PlantfoodCaptureSubSystem *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::clear
            ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)(this + 0x28));
  return;
}


/* PlantfoodCaptureSubSystem::~PlantfoodCaptureSubSystem() */

void __thiscall
PlantfoodCaptureSubSystem::~PlantfoodCaptureSubSystem(PlantfoodCaptureSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068896c0;
  std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::~vector
            ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantfoodCaptureSubSystem::~PlantfoodCaptureSubSystem() */

void __thiscall
PlantfoodCaptureSubSystem::~PlantfoodCaptureSubSystem(PlantfoodCaptureSubSystem *this)

{
  ~PlantfoodCaptureSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::removePlantfoodLink(Sexy::RtWeakPtr<CollectablePlantfood>) */

void __thiscall
PlantfoodCaptureSubSystem::removePlantfoodLink
          (PlantfoodCaptureSubSystem *this,RtWeakPtrBase *param_2)

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
      local_18 = std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::erase
                           ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)this_00
                            ,local_10);
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
/* PlantfoodCaptureSubSystem::uncapturePlantfood(CollectablePlantfood*) */

void __thiscall
PlantfoodCaptureSubSystem::uncapturePlantfood
          (PlantfoodCaptureSubSystem *this,CollectablePlantfood *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  removePlantfoodLink(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  CollectablePlantfood::StopCaptureEffect(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::eraseOwner(BoardEntity*) */

void __thiscall
PlantfoodCaptureSubSystem::eraseOwner(PlantfoodCaptureSubSystem *this,BoardEntity *param_1)

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
    uVar5 = FUN_04655340(uVar10,*(undefined8 *)(this + 0x18));
    if (uVar5 <= uVar7) goto LAB_04656a4c;
    pRVar3 = (RtWeakPtr *)FUN_0465534c(uVar10,uVar7);
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
  iVar2 = FUN_04655354(uVar10,*(undefined8 *)(this + 0x30));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      pRVar3 = (RtWeakPtr *)FUN_04655384(uVar10,lVar11);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
      if (param_1 == (BoardEntity *)pRVar4) {
        lVar6 = FUN_04655384(*(undefined8 *)(this + 0x28),lVar11);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 8));
        uncapturePlantfood(this,(CollectablePlantfood *)pRVar4);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar6 = lVar9 + -1;
      lVar11 = lVar9;
    }
  }
LAB_04656a4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::onZombieDestroyed(Zombie*) */

void __thiscall
PlantfoodCaptureSubSystem::onZombieDestroyed(PlantfoodCaptureSubSystem *this,Zombie *param_1)

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
    uVar5 = FUN_04655340(uVar10,*(undefined8 *)(this + 0x18));
    if (uVar5 <= uVar7) goto LAB_04656a4c;
    pRVar3 = (RtWeakPtr *)FUN_0465534c(uVar10,uVar7);
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
  iVar2 = FUN_04655354(uVar10,*(undefined8 *)(this + 0x30));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar6 = lVar8;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar6;
      pRVar3 = (RtWeakPtr *)FUN_04655384(uVar10,lVar11);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar3);
      if (param_1 == (Zombie *)pRVar4) {
        lVar6 = FUN_04655384(*(undefined8 *)(this + 0x28),lVar11);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 8));
        uncapturePlantfood(this,(CollectablePlantfood *)pRVar4);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar10 = *(undefined8 *)(this + 0x28);
      lVar6 = lVar9 + -1;
      lVar11 = lVar9;
    }
  }
LAB_04656a4c:
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::movePlantfoodTowardCaptor(CollectablePlantfood*, PlantfoodOwnerLink
   const*, Sexy::RtWeakPtr<BoardEntity>) */

void PlantfoodCaptureSubSystem::movePlantfoodTowardCaptor
               (undefined1 param_1_00 [16],undefined4 param_2_00,undefined4 param_3,
               PlantfoodCaptureSubSystem *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_2,long param_6,RtWeakPtr<Sexy::ResourceInfo> *param_7)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  undefined8 *puVar3;
  ZombieModernSolarTruck *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
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
  fVar5 = (float)PVZ_T();
  fVar10 = *(float *)(param_6 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_7);
  iVar2 = calcOwnerType(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (iVar2 == 1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_7);
    nop();
    cVar1 = Zombie::IsSuspended(this);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_58 = *puVar3;
      local_50 = *(undefined4 *)(puVar3 + 1);
      nop();
      local_18 = ZombieModernSolarTruck::GetSunTarget(this_00);
      local_14 = param_2_00;
      local_10 = param_3;
      EATextSquish::Vec3::operator+=((Vec3 *)&local_58,(Vec3 *)&local_18);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(param_2);
      local_48 = *puVar3;
      local_40 = *(undefined4 *)(puVar3 + 1);
      local_38 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
      local_34 = param_2_00;
      local_30 = param_3;
      fVar6 = (float)DVec3::getLength((DVec3 *)&local_38);
      uVar7 = 0x42580001;
      if (fVar6 <= 54.000004) {
        ZombieHeianAkinndo::IncrementPlantfoodCollected((ZombieHeianAkinndo *)this);
        ZombieHeianAkinndo::DecrementPlantfoodClaimed((ZombieHeianAkinndo *)this);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)(param_6 + 8));
        removePlantfoodLink(param_1,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        (**(code **)(*(long *)param_2 + 0x48))(param_2);
      }
      else {
        local_28 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
        uVar9 = 0x447a0000;
        uVar8 = 0x41f00000;
        local_24 = uVar7;
        local_20 = param_3;
        fVar5 = (float)ClampFloat((fVar5 - fVar10) * 45.0,30.0,1000.0);
        EATextSquish::Vec3::operator*=((Vec3 *)&local_28,fVar5);
        pcVar4 = *(code **)(*(long *)param_2 + 0x78);
        local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_48,(SexyVector3 *)&local_28);
        local_14 = uVar8;
        local_10 = uVar9;
        (*pcVar4)(param_2,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodCaptureSubSystem::AssociateWithSubSystem(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantfoodCaptureSubSystem::AssociateWithSubSystem
          (PlantfoodCaptureSubSystem *this,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *this_00;
  ZombieHeianAkinndo *pZVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar2 = Sexy::RtObject::Cast<ZombieHeianAkinndo>(this_00);
    if (pZVar2 != (ZombieHeianAkinndo *)0x0) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x10),param_2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::addPlantfoodLink(Sexy::RtWeakPtr<CollectablePlantfood>,
   Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantfoodCaptureSubSystem::addPlantfoodLink
          (PlantfoodCaptureSubSystem *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  SunOwnerLink aSStack_20 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SunOwnerLink::SunOwnerLink(aSStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aSStack_20,param_3);
  local_10 = PVZ_T();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_30);
  std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::insert
            ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)(this + 0x28),local_28
             ,aSStack_20);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
            ((DragonBruitLauncherEntry *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::capturePlantfood(CollectablePlantfood*) */

void __thiscall
PlantfoodCaptureSubSystem::capturePlantfood
          (PlantfoodCaptureSubSystem *this,CollectablePlantfood *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ZombieHeianAkinndo *this_00;
  float fVar5;
  RtMixedPtrBase aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar4;
  local_10 = *(float *)(puVar4 + 1);
  iVar2 = BoardTransforms::GridToBoardSpaceY(0);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar5 = (float)FUN_04655808(param_1 + 0xc0);
  if (((1.0 < fVar5) && (cVar1 = Collectable::IsCollecting((Collectable *)param_1), cVar1 == '\0'))
     && ((float)(iVar2 - iVar3) < local_18._4_4_ - local_10)) {
    findNearest((SexyVector3 *)this);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
      addPlantfoodLink(this,aRStack_28,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
      iVar2 = calcOwnerType(this,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (iVar2 == 1) {
        std::string::string((string *)aRStack_20,"red");
        CollectablePlantfood::StartCaptureEffect(param_1,aRStack_20);
        std::string::~string((string *)aRStack_20);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        nop();
        ZombieHeianAkinndo::IncrementPlantfoodClaimed(this_00);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::incrementPlantfoodlinkTimers() */

void __thiscall
PlantfoodCaptureSubSystem::incrementPlantfoodlinkTimers(PlantfoodCaptureSubSystem *this)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  RtWeakPtrBase *pRVar7;
  RtObject *this_00;
  ZombieHeianAkinndo *this_01;
  ResourceInfo *pRVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_38 = (ulong)local_38._4_4_ << 0x20;
  do {
    uVar13 = *(undefined8 *)(this + 0x28);
    uVar6 = FUN_04655354(uVar13,*(undefined8 *)(this + 0x30));
    if (uVar6 <= (ulong)(long)iVar5) {
      iVar5 = FUN_04655390(local_20,local_18);
      uVar1 = iVar5 - 1;
      if (-1 < (int)uVar1) {
        lVar10 = (long)(int)uVar1 + -1;
        lVar2 = lVar10;
        lVar12 = (long)(int)uVar1;
        while( true ) {
          lVar11 = lVar2;
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x28));
          piVar9 = (int *)FUN_0465539c(local_20,lVar12);
          local_30 = __gnu_cxx::
                     __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                     ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                                  *)&local_38,(long)*piVar9);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_28,(__normal_iterator *)&local_30);
          std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::erase
                    ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)(this + 0x28),
                     local_28);
          if (lVar11 == lVar10 - (ulong)uVar1) break;
          lVar2 = lVar11 + -1;
          lVar12 = lVar11;
        }
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar7 = (RtWeakPtrBase *)FUN_04655384(uVar13,(long)iVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,pRVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
    iVar5 = calcOwnerType(this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    if (iVar5 == 1) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_30);
      if (!bVar3) {
LAB_04657620:
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pRVar7 + 8));
        if (pRVar8 == (ResourceInfo *)0x0) {
LAB_046576e8:
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_38);
        }
        goto LAB_0465762c;
      }
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
      ;
      this_01 = Sexy::RtObject::Cast<ZombieHeianAkinndo>(this_00);
      if (this_01 == (ZombieHeianAkinndo *)0x0) goto LAB_04657620;
      cVar4 = Zombie::IsSuspended((Zombie *)this_01);
      if (cVar4 == '\0') {
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pRVar7 + 8));
        if (pRVar8 != (ResourceInfo *)0x0) goto LAB_0465762c;
        ZombieHeianAkinndo::DecrementPlantfoodClaimed(this_01);
        goto LAB_046576e8;
      }
      fVar14 = (float)PVZ_Dt();
      *(float *)(pRVar7 + 0x10) = *(float *)(pRVar7 + 0x10) + fVar14;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    else {
LAB_0465762c:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    iVar5 = (int)local_38 + 1;
    local_38 = CONCAT44(local_38._4_4_,iVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodCaptureSubSystem::Update() */

void __thiscall PlantfoodCaptureSubSystem::Update(PlantfoodCaptureSubSystem *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *pRVar5;
  CollectablePlantfood *this_00;
  RtWeakPtrBase *pRVar6;
  ZombieHeianAkinndo *this_01;
  int extraout_w1;
  int extraout_w1_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x10));
  if ((cVar1 == '\0') ||
     (cVar1 = std::vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>>::empty
                        ((vector<PlantfoodOwnerLink,std::allocator<PlantfoodOwnerLink>> *)
                         (this + 0x28)), cVar1 == '\0')) {
    incrementPlantfoodlinkTimers(this);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2e);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      this_00 = Sexy::RtObject::Cast<CollectablePlantfood>(pRVar5);
      if (this_00 == (CollectablePlantfood *)0x0) {
LAB_04657934:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        iVar3 = extraout_w1_00;
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_40);
        pRVar6 = (RtWeakPtrBase *)getPlantfoodLink(this,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if ((pRVar6 == (RtWeakPtrBase *)0x0) ||
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(pRVar6 + 8)), cVar1 == '\0')) {
          capturePlantfood(this,this_00);
          goto LAB_04657934;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
        iVar3 = calcOwnerType(this,aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        if (iVar3 != 1) {
LAB_0465798c:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          goto LAB_04657934;
        }
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar2) {
          pRVar5 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          this_01 = Sexy::RtObject::Cast<ZombieHeianAkinndo>(pRVar5);
          if ((this_01 != (ZombieHeianAkinndo *)0x0) &&
             (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) {
            cVar1 = ZombieHeianAkinndo::ShouldReleasePlantfood(this_01);
            if ((cVar1 == '\0') &&
               (cVar1 = Collectable::IsCollecting((Collectable *)this_00), cVar1 == '\0')) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_30,(RtWeakPtrBase *)aRStack_38);
              movePlantfoodTowardCaptor(this,this_00,pRVar6,aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              goto LAB_04657934;
            }
            uncapturePlantfood(this,this_00);
            ZombieHeianAkinndo::DecrementPlantfoodClaimed(this_01);
            goto LAB_0465798c;
          }
        }
        uncapturePlantfood(this,this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        iVar3 = extraout_w1;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

