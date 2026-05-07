// Class: ZombieStabberSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::StaticClassInit() */

void ZombieStabberSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"StabbedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_046e5200,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieStabberSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046e5720,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStabberSubSystem::StaticGetClass() */

long * ZombieStabberSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStabberSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieStabberSubSystem::GetClass() const */

long * ZombieStabberSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieStabberSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::findStabbedZombie(Zombie*) */

void ZombieStabberSubSystem::findStabbedZombie(Zombie *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_046e4988(uVar5,*(undefined8 *)(param_1 + 0x18));
  lVar3 = 0;
  do {
    if (lVar3 == lVar2) {
      lVar4 = 0;
      break;
    }
    lVar4 = FUN_046e49b8(uVar5,lVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar4 + 0x40),(RtWeakPtrBase *)aRStack_18);
    lVar3 = lVar3 + 1;
  } while (cVar1 == '\0');
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* ZombieStabberSubSystem::IsStabbed(Zombie*) */

bool ZombieStabberSubSystem::IsStabbed(Zombie *param_1)

{
  long lVar1;
  
  lVar1 = findStabbedZombie(param_1);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::GetTargetPosition(Zombie*) */

void ZombieStabberSubSystem::GetTargetPosition(Zombie *param_1)

{
  long lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findStabbedZombie(param_1);
  if (lVar1 == 0) {
    DVec3::DVec3((DVec3 *)&local_28);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0xc);
    local_10 = *(undefined4 *)(lVar1 + 0x14);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_18,local_18._4_4_,local_10);
}


/* ZombieStabberSubSystem::ZombieStabberSubSystem() */

void __thiscall ZombieStabberSubSystem::ZombieStabberSubSystem(ZombieStabberSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b6ec0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombieStabberSubSystem::StaticNew() */

ZombieStabberSubSystem * ZombieStabberSubSystem::StaticNew(void)

{
  ZombieStabberSubSystem *this;
  
  this = ::operator_new(0x58);
  ZombieStabberSubSystem(this);
  return this;
}


/* ZombieStabberSubSystem::registerForEvents() */

void __thiscall ZombieStabberSubSystem::registerForEvents(ZombieStabberSubSystem *this)

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
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieStabberSubSystem,void(ZombieStabberSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* ZombieStabberSubSystem::~ZombieStabberSubSystem() */

void __thiscall ZombieStabberSubSystem::~ZombieStabberSubSystem(ZombieStabberSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6ec0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::~vector
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)(this + 0x28));
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::~vector
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieStabberSubSystem::~ZombieStabberSubSystem() */

void __thiscall ZombieStabberSubSystem::~ZombieStabberSubSystem(ZombieStabberSubSystem *this)

{
  ~ZombieStabberSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::removeStabbedZombie(Zombie*) */

void ZombieStabberSubSystem::removeStabbedZombie(Zombie *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = FUN_046e4988(uVar6,*(undefined8 *)(param_1 + 0x18));
  lVar5 = 0;
  do {
    iVar1 = (int)lVar5;
    if (lVar5 == lVar3) goto LAB_046e601c;
    lVar4 = FUN_046e49b8(uVar6,lVar5);
    cVar2 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(lVar4 + 0x40),(RtWeakPtrBase *)aRStack_28);
    lVar5 = lVar5 + 1;
  } while (cVar2 == '\0');
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_18 = __gnu_cxx::
             __normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
             ::operator+((__normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::erase
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)(param_1 + 0x10),local_10);
LAB_046e601c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieStabberSubSystem::ReleaseZombie(Zombie*) */

void __thiscall ZombieStabberSubSystem::ReleaseZombie(ZombieStabberSubSystem *this,Zombie *param_1)

{
  long lVar1;
  
  lVar1 = findStabbedZombie((Zombie *)this);
  if (lVar1 != 0) {
    Zombie::SetIsFlying(param_1,*(bool *)(lVar1 + 0x98));
    Zombie::SetIsControlled(param_1,false);
    removeStabbedZombie((Zombie *)this);
    return;
  }
  return;
}


/* ZombieStabberSubSystem::internalLaunchZombie(float, float, StabbedZombie&) */

void __thiscall
ZombieStabberSubSystem::internalLaunchZombie
          (ZombieStabberSubSystem *this,float param_1,float param_2,StabbedZombie *param_3)

{
  ResourceInfo *this_00;
  SexyVector3 *pSVar1;
  Zombie *pZVar2;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_3 + 0x40));
  Zombie::SetIsFlying((Zombie *)this_00,true);
  Zombie::SetIsControlled((Zombie *)this_00,true);
  pZVar2._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar2._0_4_,0,this_00,0xf,1);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  Sexy::SexyVector3::operator=((SexyVector3 *)param_3,pSVar1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0x18),(SexyVector3 *)param_3);
  CalculateTossVelocity
            ((SexyVector3 *)(param_3 + 0x18),(SexyVector3 *)(param_3 + 0xc),param_1,param_2,
             (SexyVector3 *)(param_3 + 0x24),(SexyVector3 *)(param_3 + 0x30));
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::push_back
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)(this + 0x28),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::LaunchZombie(Zombie*, Plant*, Sexy::SexyVector3 const&, float, float,
   RtReflectionDelegate<Sexy::Delegate1<Plant*> >) */

void __thiscall
ZombieStabberSubSystem::LaunchZombie
          (float param_4,float param_5,ZombieStabberSubSystem *this,Zombie *param_1,
          undefined8 param_5_00,SexyVector3 *param_3,RtReflectionDelegate *param_7)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  StabbedZombie aSStack_a8 [12];
  SexyVector3 aSStack_9c [52];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_68 [8];
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_60 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_58 [72];
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StabbedZombie::StabbedZombie(aSStack_a8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_68,(RtWeakPtrBase *)aRStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_60,(RtWeakPtrBase *)aRStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  Sexy::SexyVector3::operator=(aSStack_9c,param_3);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_58,param_7);
  local_10 = Zombie::IsFlying(param_1);
  internalLaunchZombie(this,param_4,param_5,aSStack_a8);
  StabbedZombie::~StabbedZombie(aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::onZombieDestroyed(Zombie*) */

void ZombieStabberSubSystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStabberSubSystem::Update() */

void ZombieStabberSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  SexyVector3 *this_01;
  SexyVector3 *this_02;
  uint uVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  ResourceInfo *this_03;
  ResourceInfo *pRVar8;
  Delegate1wRet<bool,SexyURL_const&> *this_04;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_s1;
  undefined4 local_48 [4];
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x10);
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  fVar14 = (float)PVZ_Dt();
  uVar13 = *(undefined8 *)(in_x0 + 0x40);
  uVar4 = FUN_046e497c(uVar13,*(undefined8 *)(in_x0 + 0x48));
  if (uVar4 != 0) {
    do {
      uVar10 = *(undefined8 *)(in_x0 + 0x10);
      lVar5 = FUN_046e4988(uVar10,*(undefined8 *)(in_x0 + 0x18));
      lVar7 = 0;
      do {
        iVar3 = (int)lVar7;
        if (lVar7 == lVar5) goto LAB_046e6e4c;
        lVar11 = FUN_046e49b8(uVar10,lVar7);
        pRVar6 = (RtWeakPtrBase *)FUN_046e49c4(uVar13,uVar9);
        cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar11 + 0x40),pRVar6);
        lVar7 = lVar7 + 1;
      } while (cVar2 == '\0');
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
                 ::operator+((__normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
                              *)&local_38,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<StabbedZombie,std::allocator<StabbedZombie>>::erase
                ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)this,
                 CONCAT44(uStack_14,local_18));
      uVar13 = *(undefined8 *)(in_x0 + 0x40);
      uVar4 = FUN_046e497c(uVar13,*(undefined8 *)(in_x0 + 0x48));
LAB_046e6e4c:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(in_x0 + 0x28);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x40));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::
  insert<__gnu_cxx::__normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>,void>
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)this,
             CONCAT44(uStack_14,local_18),uVar13,uVar10);
  std::vector<StabbedZombie,std::allocator<StabbedZombie>>::clear
            ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)this_00);
  uVar13 = *(undefined8 *)(in_x0 + 0x10);
  iVar3 = FUN_046e4988(uVar13,*(undefined8 *)(in_x0 + 0x18));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_046e704c:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar11 = (long)(int)uVar1 + -1;
  lVar7 = lVar11;
  lVar5 = (long)(int)uVar1;
  do {
    lVar12 = lVar7;
    lVar7 = FUN_046e49b8(uVar13,lVar5);
    this_03 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x40));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar7 + 0x48));
    if (this_03 == (ResourceInfo *)0x0) {
LAB_046e7008:
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
                 ::operator+((__normal_iterator<StabbedZombie*,std::vector<StabbedZombie,std::allocator<StabbedZombie>>>
                              *)&local_38,lVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<StabbedZombie,std::allocator<StabbedZombie>>::erase
                ((vector<StabbedZombie,std::allocator<StabbedZombie>> *)this,
                 CONCAT44(uStack_14,local_18));
    }
    else {
      this_01 = (SexyVector3 *)(lVar7 + 0x24);
      this_02 = (SexyVector3 *)(lVar7 + 0x18);
      local_48[0] = Sexy::SexyVector3::operator*(this_01,fVar14);
      uVar15 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)local_48);
      local_38 = CONCAT44(in_s1,uVar15);
      uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar7 + 0x30),fVar14 * fVar14 * 0.5);
      local_28 = CONCAT44(in_s1,uVar15);
      local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
      Sexy::SexyVector3::operator=(this_02,(SexyVector3 *)&local_18);
      uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar7 + 0x30),fVar14);
      local_28 = CONCAT44(in_s1,uVar15);
      local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
      uStack_14 = in_s1;
      Sexy::SexyVector3::operator=(this_01,(SexyVector3 *)&local_18);
      (**(code **)(*(long *)this_03 + 0x78))(this_03,this_02);
      if (*(float *)(lVar7 + 0x20) < 0.0) {
        (**(code **)(*(long *)this_03 + 0x78))(this_03,lVar7 + 0xc);
        Zombie::SetIsFlying((Zombie *)this_03,*(bool *)(lVar7 + 0x98));
        Zombie::SetIsControlled((Zombie *)this_03,false);
        iVar3 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(lVar7 + 0x50))
        ;
        if ((iVar3 != 0) && (pRVar8 != (ResourceInfo *)0x0)) {
          this_04 = (Delegate1wRet<bool,SexyURL_const&> *)
                    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::GetDelegate
                              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(lVar7 + 0x50));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_04,(SexyURL *)pRVar8);
        }
        goto LAB_046e7008;
      }
    }
    if (lVar12 == lVar11 - (ulong)uVar1) goto LAB_046e704c;
    uVar13 = *(undefined8 *)(in_x0 + 0x10);
    lVar7 = lVar12 + -1;
    lVar5 = lVar12;
  } while( true );
}

