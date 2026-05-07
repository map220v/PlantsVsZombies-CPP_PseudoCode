// Class: ZombiePullSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePullSubSystem::StaticClassInit() */

void ZombiePullSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PullZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_046e79a8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePullSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046e7d78,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePullSubSystem::StaticGetClass() */

long * ZombiePullSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePullSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePullSubSystem::GetClass() const */

long * ZombiePullSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePullSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePullSubSystem::ZombiePullSubSystem() */

void __thiscall ZombiePullSubSystem::ZombiePullSubSystem(ZombiePullSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b6f90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombiePullSubSystem::StaticNew() */

ZombiePullSubSystem * ZombiePullSubSystem::StaticNew(void)

{
  ZombiePullSubSystem *this;
  
  this = ::operator_new(0x58);
  ZombiePullSubSystem(this);
  return this;
}


/* ZombiePullSubSystem::~ZombiePullSubSystem() */

void __thiscall ZombiePullSubSystem::~ZombiePullSubSystem(ZombiePullSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6f90;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<PullZombie,std::allocator<PullZombie>>::~vector
            ((vector<PullZombie,std::allocator<PullZombie>> *)(this + 0x28));
  std::vector<PullZombie,std::allocator<PullZombie>>::~vector
            ((vector<PullZombie,std::allocator<PullZombie>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombiePullSubSystem::~ZombiePullSubSystem() */

void __thiscall ZombiePullSubSystem::~ZombiePullSubSystem(ZombiePullSubSystem *this)

{
  ~ZombiePullSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePullSubSystem::internalPullZombie(PullZombie&) */

void __thiscall
ZombiePullSubSystem::internalPullZombie(ZombiePullSubSystem *this,PullZombie *param_1)

{
  undefined8 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  Zombie *pZVar5;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  pZVar5._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar5._0_4_,0,uVar1,0x18,1);
  uVar3 = 0;
  uVar4 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0xc),(SexyVector3 *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_28 = Sexy::SexyVector3::operator-((SexyVector3 *)(param_1 + 0x18),pSVar2);
  local_24 = uVar3;
  local_20 = uVar4;
  local_18 = Sexy::SexyVector3::operator/((SexyVector3 *)&local_28,1.6);
  local_14 = uVar3;
  local_10 = uVar4;
  Sexy::SexyVector3::operator=((SexyVector3 *)param_1,(SexyVector3 *)&local_18);
  std::vector<PullZombie,std::allocator<PullZombie>>::push_back
            ((vector<PullZombie,std::allocator<PullZombie>> *)(this + 0x28),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePullSubSystem::PullZombieToTarget(Plant*, Zombie*, Sexy::SexyVector3,
   RtReflectionDelegate<Sexy::Delegate1<Zombie*> >) */

void ZombiePullSubSystem::PullZombieToTarget
               (undefined4 param_1_00,undefined4 param_2_00,undefined4 param_3,
               ZombiePullSubSystem *param_1,long param_2,ResourceInfo *param_6,
               RtReflectionDelegate *param_7)

{
  long lVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  PullZombie aPStack_88 [24];
  SexyVector3 aSStack_70 [16];
  RtWeakPtr<PowerPropertySheet> aRStack_60 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_b0 = param_1_00;
  local_ac = param_2_00;
  local_a8 = param_3;
  if (param_6 == (ResourceInfo *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_a0);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  }
  if (param_2 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_98);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  }
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_046e7530(uVar5,*(undefined8 *)(param_1 + 0x18));
    if (uVar3 <= uVar4) {
      PullZombie::PullZombie(aPStack_88);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_58,(RtWeakPtr *)aRStack_98);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_60,(RtWeakPtr *)aRStack_a0);
      Sexy::SexyVector3::operator=(aSStack_70,(SexyVector3 *)&local_b0);
      RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=(aRStack_50,param_7);
      internalPullZombie(param_1,aPStack_88);
      PullZombie::~PullZombie(aPStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
      goto LAB_046e8920;
    }
    lVar1 = FUN_046e7558(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar1 + 0x28));
    uVar4 = uVar4 + 1;
  } while (param_6 != pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
LAB_046e8920:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePullSubSystem::onZombieDestroyed(Zombie*) */

void ZombiePullSubSystem::onZombieDestroyed(Zombie *param_1)

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
/* ZombiePullSubSystem::Update() */

void ZombiePullSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  ResourceInfo *this_01;
  undefined8 *puVar8;
  Vec3 *pVVar9;
  long *plVar10;
  TRect<int> *this_02;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar11;
  Delegate1wRet<bool,SexyURL_const&> *this_03;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float in_s1;
  RtWeakPtr aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float fStack_14;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar15 = 0;
  fVar18 = (float)PVZ_Dt();
  uVar17 = *(undefined8 *)(in_x0 + 0x40);
  uVar5 = FUN_046e7560(uVar17,*(undefined8 *)(in_x0 + 0x48));
  if (uVar5 != 0) {
    do {
      uVar16 = *(undefined8 *)(in_x0 + 0x10);
      lVar6 = FUN_046e7530(uVar16,*(undefined8 *)(in_x0 + 0x18));
      lVar12 = 0;
      do {
        iVar4 = (int)lVar12;
        if (lVar12 == lVar6) goto LAB_046e926c;
        lVar13 = FUN_046e7558(uVar16,lVar12);
        pRVar7 = (RtWeakPtrBase *)FUN_046e756c(uVar17,uVar15);
        cVar3 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar13 + 0x28),pRVar7);
        lVar12 = lVar12 + 1;
      } while (cVar3 == '\0');
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>::
                 operator+((__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                            *)&local_30,(long)iVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<PullZombie,std::allocator<PullZombie>>::erase
                ((vector<PullZombie,std::allocator<PullZombie>> *)this,CONCAT44(fStack_14,local_18))
      ;
      uVar17 = *(undefined8 *)(in_x0 + 0x40);
      uVar5 = FUN_046e7560(uVar17,*(undefined8 *)(in_x0 + 0x48));
LAB_046e926c:
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar5);
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
  uVar17 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar16 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::vector<PullZombie,std::allocator<PullZombie>>::
  insert<__gnu_cxx::__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>,void>
            ((vector<PullZombie,std::allocator<PullZombie>> *)this,CONCAT44(fStack_14,local_18),
             uVar17,uVar16);
  std::vector<PullZombie,std::allocator<PullZombie>>::clear
            ((vector<PullZombie,std::allocator<PullZombie>> *)this_00);
  uVar17 = *(undefined8 *)(in_x0 + 0x10);
  iVar4 = FUN_046e7530(uVar17,*(undefined8 *)(in_x0 + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar13 = (long)(int)uVar1 + -1;
    lVar12 = lVar13;
    lVar6 = (long)(int)uVar1;
    do {
      lVar14 = lVar12;
      pVVar9 = (Vec3 *)FUN_046e7558(uVar17,lVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)(pVVar9 + 0x28));
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
      if (cVar3 == '\0') {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_28 = __gnu_cxx::
                   __normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                   ::operator+((__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                                *)&local_30,lVar6);
        pVVar9 = (Vec3 *)&local_28;
LAB_046e93f0:
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)pVVar9);
        std::vector<PullZombie,std::allocator<PullZombie>>::erase
                  ((vector<PullZombie,std::allocator<PullZombie>> *)this,
                   CONCAT44(fStack_14,local_18));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      else {
        this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_40);
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_01);
        local_28 = *puVar8;
        local_20 = *(undefined4 *)(puVar8 + 1);
        EATextSquish::Vec3::operator+=(pVVar9,pVVar9 + 0xc);
        local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)pVVar9,fVar18);
        fStack_14 = in_s1;
        EATextSquish::Vec3::operator+=((Vec3 *)&local_28,(Vec3 *)&local_18);
        (**(code **)(*(long *)this_01 + 0x78))(this_01,(Vec3 *)&local_28);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pVVar9 + 0x30));
        if (bVar2) {
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(pVVar9 + 0x30));
          this_02 = (TRect<int> *)(**(code **)(*plVar10 + 0x178))();
          in_s1 = (float)local_28;
          cVar3 = Sexy::TRect<int>::Contains(this_02,(int)(float)local_28,(int)local_28._4_4_);
          if (cVar3 != '\0') {
            pEVar11 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                      Zombie::GetConditionTracker((Zombie *)this_01);
            EntityConditionTracker<Zombie,ZombieConditions>::EndCondition(pEVar11,this_01,0x18);
            iVar4 = ::RtReflectionDelegate::operator_cast_to_int
                              ((RtReflectionDelegate *)(pVVar9 + 0x38));
            if (iVar4 != 0) {
              this_03 = (Delegate1wRet<bool,SexyURL_const&> *)
                        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(pVVar9 + 0x38)
                                  );
              Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_03,(SexyURL *)this_01);
            }
            local_38 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(this);
            local_30 = __gnu_cxx::
                       __normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                       ::operator+((__normal_iterator<PullZombie*,std::vector<PullZombie,std::allocator<PullZombie>>>
                                    *)&local_38,lVar6);
            pVVar9 = (Vec3 *)&local_30;
            goto LAB_046e93f0;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      if (lVar14 == lVar13 - (ulong)uVar1) break;
      uVar17 = *(undefined8 *)(in_x0 + 0x10);
      lVar12 = lVar14 + -1;
      lVar6 = lVar14;
    } while( true );
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

