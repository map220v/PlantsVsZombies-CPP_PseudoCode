// Class: PlantShadowShroomSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::StaticClassInit() */

void PlantShadowShroomSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePushInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03bd2264,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantShadowShroomSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_03bd24cc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowShroomSubSystem::StaticGetClass() */

long * PlantShadowShroomSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowShroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowShroomSubSystem::GetClass() const */

long * PlantShadowShroomSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowShroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowShroomSubSystem::PushZombieAway(ZombiePushInfo const&) */

void __thiscall
PlantShadowShroomSubSystem::PushZombieAway(PlantShadowShroomSubSystem *this,ZombiePushInfo *param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar2;
  Zombie *this_01;
  float fVar3;
  float fVar4;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = *pfVar2;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((200.0 < fVar3) &&
     (fVar4 = (float)(int)((float)(iVar1 * *(int *)(this + 0x28)) + fVar4), fVar3 <= fVar4)) {
    this_01 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    Zombie::Nudge(this_01,fVar4,2.0,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::FinishZombie(Zombie*) */

void PlantShadowShroomSubSystem::FinishZombie(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03bd1460:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (cVar1 != '\0') {
      this[0xc] = (RtWeakPtrBase)0x1;
      goto LAB_03bd1460;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::onZombieNudgeEnd(Zombie*) */

void PlantShadowShroomSubSystem::onZombieNudgeEnd(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_18 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x10));
  do {
    uStack_10 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10);
    if (!bVar2) {
LAB_03bd1460:
      if (lStack_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18)
    ;
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)&uStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_10);
    if (cVar1 != '\0') {
      this[0xc] = (RtWeakPtrBase)0x1;
      goto LAB_03bd1460;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_18);
  } while( true );
}


/* PlantShadowShroomSubSystem::PlantShadowShroomSubSystem() */

void __thiscall
PlantShadowShroomSubSystem::PlantShadowShroomSubSystem(PlantShadowShroomSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0673bcd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieNudgeEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantShadowShroomSubSystem,void(PlantShadowShroomSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieNudgeEnd,&local_40);
  return;
}


/* PlantShadowShroomSubSystem::StaticNew() */

PlantShadowShroomSubSystem * PlantShadowShroomSubSystem::StaticNew(void)

{
  PlantShadowShroomSubSystem *this;
  
  this = ::operator_new(0x30);
  PlantShadowShroomSubSystem(this);
  return this;
}


/* PlantShadowShroomSubSystem::~PlantShadowShroomSubSystem() */

void __thiscall
PlantShadowShroomSubSystem::~PlantShadowShroomSubSystem(PlantShadowShroomSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0673bcd0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ZombiePushInfo,std::allocator<ZombiePushInfo>>::~vector
            ((vector<ZombiePushInfo,std::allocator<ZombiePushInfo>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantShadowShroomSubSystem::~PlantShadowShroomSubSystem() */

void __thiscall
PlantShadowShroomSubSystem::~PlantShadowShroomSubSystem(PlantShadowShroomSubSystem *this)

{
  ~PlantShadowShroomSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::Update() */

void __thiscall PlantShadowShroomSubSystem::Update(PlantShadowShroomSubSystem *this)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  RtMixedPtrBase *this_00;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03bd09a0(uVar6,*(undefined8 *)(this + 0x18));
  uVar4 = 0;
  if (lVar3 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_03bd09c8(uVar6,uVar9);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar2 == '\0') {
LAB_03bd30ac:
        this_00[0xc] = (RtMixedPtrBase)0x1;
      }
      else {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar2 = (**(code **)(*plVar5 + 0x328))();
        if (cVar2 != '\0') goto LAB_03bd30ac;
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
        if (cVar2 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)this_00);
        }
        Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        if (this_00[0xc] == (RtMixedPtrBase)0x0) {
          PushZombieAway(this,(ZombiePushInfo *)this_00);
        }
      }
      uVar9 = uVar9 + 1;
      uVar6 = *(undefined8 *)(this + 0x10);
      uVar4 = FUN_03bd09a0(uVar6,*(undefined8 *)(this + 0x18));
    } while (uVar9 < uVar4);
  }
  uVar1 = (int)uVar4 - 1;
  if ((int)uVar4 != 0) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar3 = lVar7;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar3;
      lVar3 = FUN_03bd09c8(uVar6,lVar10);
      if (*(char *)(lVar3 + 0xc) != '\0') {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                   ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                *)&local_20,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ZombiePushInfo,std::allocator<ZombiePushInfo>>::erase
                  ((vector<ZombiePushInfo,std::allocator<ZombiePushInfo>> *)(this + 0x10),local_10);
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 0x10);
      lVar3 = lVar8 + -1;
      lVar10 = lVar8;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::onInitialized() */

void __thiscall PlantShadowShroomSubSystem::onInitialized(PlantShadowShroomSubSystem *this)

{
  string *psVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"shadowshroom");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(extraout_x0 + 0x2e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowShroomSubSystem::MarkZombie(Zombie*, float) */

void PlantShadowShroomSubSystem::MarkZombie(Zombie *param_1,float param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  ZombiePushInfo aZStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombiePushInfo::ZombiePushInfo(aZStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_10 = param_2;
  std::vector<ZombiePushInfo,std::allocator<ZombiePushInfo>>::push_back
            ((vector<ZombiePushInfo,std::allocator<ZombiePushInfo>> *)(param_1 + 0x10),aZStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

