// Class: CthulhuActiniaSubSystem


/* CthulhuActiniaSubSystem::hideShowOriginal(Sexy::RtWeakPtr<Zombie>, bool) */

void __thiscall
CthulhuActiniaSubSystem::hideShowOriginal
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,bool param_3)

{
  long *plVar1;
  Zombie *pZVar2;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
  if (param_3 == false) {
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    (**(code **)(*plVar1 + 0x260))();
  }
  else {
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    (**(code **)(*plVar1 + 600))();
  }
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar2,param_3);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsTargetable(pZVar2,(bool)(param_3 ^ 1));
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresCollisions(pZVar2,param_3);
  return;
}


/* CthulhuActiniaSubSystem::AddTransformEntry(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
CthulhuActiniaSubSystem::AddTransformEntry(CthulhuActiniaSubSystem *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaSubSystem::StaticClassInit() */

void CthulhuActiniaSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuActiniaSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5c704,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaSubSystem::StaticGetClass() */

long * CthulhuActiniaSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuActiniaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuActiniaSubSystem::GetClass() const */

long * CthulhuActiniaSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"CthulhuActiniaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaSubSystem::getTransformType(Zombie*) */

void CthulhuActiniaSubSystem::getTransformType(Zombie *param_1)

{
  long lVar1;
  bool bVar2;
  RtObject *in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((in_x1 == (RtObject *)0x0) || (bVar2 = Sexy::RtObject::IsA<ZombieImp>(in_x1), !bVar2)) {
    std::string::string(in_x8,"cthulhuactinia");
    nop();
  }
  else {
    std::string::string(in_x8,"cthulhuactinia_imp");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaSubSystem::CopyCondition(Sexy::RtWeakPtr<Zombie>, Sexy::RtWeakPtr<Zombie>,
   ZombieConditions) */

void __thiscall
CthulhuActiniaSubSystem::CopyCondition
          (undefined8 param_1,RtMixedPtrBase *param_2,RtMixedPtrBase *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  Zombie *pZVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  undefined4 uVar6;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if ((cVar1 != '\0') && (cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3), cVar1 != '\0')) {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = Zombie::HasCondition(uVar2,param_4);
    if (cVar1 != '\0') {
      if (param_4 == 0x42) {
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(pZVar3);
        lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x42);
                    /* WARNING: Load size is inaccurate */
        pZVar3 = *(Zombie **)(lVar5 + 0x10);
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        Zombie::ApplyCondition(pZVar3,0,uVar2,0x43,1);
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(pZVar3);
        lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x42);
        uVar6 = *(undefined4 *)(lVar5 + 0xc);
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        Zombie::SetConditionTracker(uVar6,uVar2,0x43);
        pZVar3 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(pZVar3);
        lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x42);
        uVar6 = *(undefined4 *)(lVar5 + 0x14);
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        Zombie::SetExtraConditionTracker(uVar6,uVar2,0x43);
        return;
      }
      pZVar3 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(pZVar3);
      pZVar3 = (Zombie *)
               EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration(pEVar4,param_4)
      ;
      uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      cVar1 = Zombie::HasCondition(uVar2,param_4);
      if (cVar1 == '\0') {
        uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        Zombie::ApplyCondition(pZVar3,0,uVar2,param_4,1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaSubSystem::ApplyConditionToOriginalZombie(Sexy::RtWeakPtr<Zombie>,
   Sexy::RtWeakPtr<Zombie>) */

void __thiscall
CthulhuActiniaSubSystem::ApplyConditionToOriginalZombie
          (CthulhuActiniaSubSystem *this,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  CopyCondition(this,aRStack_18,aRStack_10,0x40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  CopyCondition(this,aRStack_18,aRStack_10,0x58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  CopyCondition(this,aRStack_18,aRStack_10,0x42);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaSubSystem::CthulhuActiniaSubSystem() */

void __thiscall CthulhuActiniaSubSystem::CthulhuActiniaSubSystem(CthulhuActiniaSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069b3f80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* CthulhuActiniaSubSystem::StaticNew() */

CthulhuActiniaSubSystem * CthulhuActiniaSubSystem::StaticNew(void)

{
  CthulhuActiniaSubSystem *this;
  
  this = ::operator_new(0x28);
  CthulhuActiniaSubSystem(this);
  return this;
}


/* CthulhuActiniaSubSystem::registerForEvents() */

void __thiscall CthulhuActiniaSubSystem::registerForEvents(CthulhuActiniaSubSystem *this)

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
            ((ReceivedDataCallback *)this,onZombieConditionEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,int,Sexy::CBMemberTranslatorX<CthulhuActiniaSubSystem,void(CthulhuActiniaSubSystem::*)(Zombie*,int)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionEnded,&local_40);
  return;
}


/* CthulhuActiniaSubSystem::~CthulhuActiniaSubSystem() */

void __thiscall CthulhuActiniaSubSystem::~CthulhuActiniaSubSystem(CthulhuActiniaSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3f80;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* CthulhuActiniaSubSystem::~CthulhuActiniaSubSystem() */

void __thiscall CthulhuActiniaSubSystem::~CthulhuActiniaSubSystem(CthulhuActiniaSubSystem *this)

{
  ~CthulhuActiniaSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaSubSystem::onZombieConditionEnded(Zombie*, int) */

void __thiscall
CthulhuActiniaSubSystem::onZombieConditionEnded
          (CthulhuActiniaSubSystem *this,Zombie *param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  long lVar7;
  Zombie *this_01;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_90;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04d597a4(*(undefined4 *)(param_1 + 0xcc));
  if (((cVar1 != '\0') || (param_2 != 0x83)) ||
     ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0 &&
      (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0'))))
  goto LAB_04d5e760;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_90 = FUN_04d5ce48(uVar3,uVar4,param_1);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)local_68);
  if (!bVar2) goto LAB_04d5e760;
  pRVar5 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Zombie::GetOriginalZombie();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_80);
    ApplyConditionToOriginalZombie
              (this,(RtWeakPtr<Sexy::SoundResource> *)&local_70,
               (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)aRStack_80);
    hideShowOriginal(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)local_68,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
    (**(code **)(*plVar6 + 0x78))(plVar6,uVar3);
  }
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  cVar1 = (**(code **)(*plVar6 + 0x328))();
  if (cVar1 == '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    cVar1 = (**(code **)(*plVar6 + 0x330))();
    if (cVar1 != '\0') goto LAB_04d5e860;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    fVar9 = (float)FUN_04d586e4(*(undefined4 *)(lVar7 + 0x280));
    if (fVar9 == 0.0) goto LAB_04d5e860;
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
    if (cVar1 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      cVar1 = (**(code **)(*plVar6 + 0x328))();
      if (cVar1 == '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar9 = (float)FUN_04d586e4(*(undefined4 *)(lVar7 + 0x280));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar10 = (float)FUN_04d586ec(*(undefined4 *)(lVar7 + 0x2a8));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar11 = (float)FUN_04d586e8(*(undefined4 *)(lVar7 + 0x284));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        fVar12 = (float)FUN_04d586f0(*(undefined4 *)(lVar7 + 0x2ac));
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        fVar13 = (float)FUN_04d586e8(*(undefined4 *)(lVar7 + 0x284));
        this_01 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        Zombie::SetHitpoints(this_01,((fVar10 + fVar9) / (fVar12 + fVar11)) * fVar13);
      }
    }
  }
  else {
LAB_04d5e860:
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
    if (cVar1 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      cVar1 = (**(code **)(*plVar6 + 0x328))();
      if (cVar1 == '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        pcVar8 = *(code **)(*plVar6 + 0x120);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,
                   (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68,4,aPStack_78,0);
        (*pcVar8)(plVar6,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
  }
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  (**(code **)(*plVar6 + 0x80))(plVar6,1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_88);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    cVar1 = (**(code **)(*plVar6 + 0x328))();
    if (cVar1 == '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      (**(code **)(*plVar6 + 0x48))();
    }
  }
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_68,(__normal_iterator *)&local_90);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
             local_68[0]);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
LAB_04d5e760:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuActiniaSubSystem::transform(Zombie*, int, float) */

void CthulhuActiniaSubSystem::transform(Zombie *param_1,int param_2,float param_3)

{
  string *psVar1;
  ZombieType *this;
  SexyVector3 *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> local_30 [40];
  long local_8;
  
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_30,(RtWeakPtrBase *)aRStack_38);
  hideShowOriginal((CthulhuActiniaSubSystem *)param_1,local_30,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  getTransformType(param_1);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  std::string::~string((string *)aRStack_38);
  this = (ZombieType *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_48);
  this_00 = (SexyVector3 *)(*pcVar3)(plVar2,aRStack_38,0,local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (this_00 == (SexyVector3 *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    fVar4 = (float)FUN_04d586e4(*(undefined4 *)(this_01 + 0x280));
    fVar5 = (float)FUN_04d586ec(*(undefined4 *)(this_01 + 0x2a8));
    fVar6 = (float)FUN_04d586e8(*(undefined4 *)(this_01 + 0x284));
    fVar7 = (float)FUN_04d586f0(*(undefined4 *)(this_01 + 0x2ac));
    fVar8 = (float)FUN_04d586e8(*(undefined4 *)(this_00 + 0x284));
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost(this_01);
    BoardEntity::PlaceOnBoard(this_00);
    Zombie::ApplyCondition((Zombie *)param_3,0,this_00,0x83,1);
    Zombie::SetHitpoints((Zombie *)this_00,((fVar5 + fVar4) / (fVar7 + fVar6)) * fVar8);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
    Zombie::SetOriginalZombie((Zombie *)this_00,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
    AddTransformEntry((CthulhuActiniaSubSystem *)param_1,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuActiniaSubSystem::tryTransform(Zombie*, int, float) */

void __thiscall
CthulhuActiniaSubSystem::tryTransform
          (CthulhuActiniaSubSystem *this,Zombie *param_1,int param_2,float param_3)

{
  transform((Zombie *)this,(int)param_1,param_3);
  return;
}

