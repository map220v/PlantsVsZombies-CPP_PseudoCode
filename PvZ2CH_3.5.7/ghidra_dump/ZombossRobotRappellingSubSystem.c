// Class: ZombossRobotRappellingSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotRappellingSubSystem::StaticClassInit() */

void ZombossRobotRappellingSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"RappellingZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04f1bd38,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossRobotRappellingSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04f1c104,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotRappellingSubSystem::StaticGetClass() */

long * ZombossRobotRappellingSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotRappellingSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotRappellingSubSystem::GetClass() const */

long * ZombossRobotRappellingSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRobotRappellingSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotRappellingSubSystem::drawLine(Sexy::Graphics*) */

void __thiscall
ZombossRobotRappellingSubSystem::drawLine(ZombossRobotRappellingSubSystem *this,Graphics *param_1)

{
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_00;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  bool bVar4;
  RappellingZombieInfo *pRVar5;
  Image *pIVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  string asStack_b8 [16];
  RappellingZombieInfo aRStack_a8 [80];
  RappellingZombieInfo aRStack_58 [8];
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_3c;
  long local_8;
  
  this_00 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
            (this + 0x10);
  local_8 = ___stack_chk_guard;
  pRVar5 = (RappellingZombieInfo *)
           std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                     (this_00);
  RappellingZombieInfo::RappellingZombieInfo(aRStack_a8,pRVar5);
  std::string::string(asStack_b8,"IMAGE_EFFECTS_ZOMBOSS_PVZ1_ROBOT_LINE");
  pIVar6 = (Image *)StringHelper::ToImage(asStack_b8,true);
  std::string::~string(asStack_b8);
  nop();
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar4) {
    pRVar5 = (RappellingZombieInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    RappellingZombieInfo::RappellingZombieInfo(aRStack_58,pRVar5);
    fVar3 = local_3c;
    fVar10 = local_48;
    fVar9 = local_4c;
    uVar2 = local_50;
    Sexy::Insets::Insets((Insets *)&local_c8);
    fVar8 = (float)FUN_04f13670(uVar2);
    iVar1 = *(int *)(pIVar6 + 0x38);
    iVar7 = (int)(fVar8 - (float)(iVar1 / 2));
    local_c8 = iVar7;
    fVar9 = (float)FUN_04f13670(fVar9 - fVar10);
    local_c4 = (int)fVar9;
    local_c0 = iVar1;
    fVar10 = (float)FUN_04f13670(fVar10 - fVar3);
    local_bc = (int)fVar10;
    Sexy::Insets::Insets((Insets *)asStack_b8,0,0,iVar1,local_bc);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar7,(int)fVar9,(TRect *)asStack_b8);
    RappellingZombieInfo::~RappellingZombieInfo(aRStack_58);
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)&local_d8);
  }
  RappellingZombieInfo::~RappellingZombieInfo(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotRappellingSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombossRobotRappellingSubSystem::AddToRenderQueue
          (ZombossRobotRappellingSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLine);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ZombossRobotRappellingSubSystem,void(ZombossRobotRappellingSubSystem::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,399999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotRappellingSubSystem::ZombossRobotRappellingSubSystem() */

void __thiscall
ZombossRobotRappellingSubSystem::ZombossRobotRappellingSubSystem
          (ZombossRobotRappellingSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06a10d90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombossRobotRappellingSubSystem::StaticNew() */

ZombossRobotRappellingSubSystem * ZombossRobotRappellingSubSystem::StaticNew(void)

{
  ZombossRobotRappellingSubSystem *this;
  
  this = ::operator_new(0x58);
  ZombossRobotRappellingSubSystem(this);
  return this;
}


/* ZombossRobotRappellingSubSystem::~ZombossRobotRappellingSubSystem() */

void __thiscall
ZombossRobotRappellingSubSystem::~ZombossRobotRappellingSubSystem
          (ZombossRobotRappellingSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10d90;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::~vector
            ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)(this + 0x28));
  std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::~vector
            ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombossRobotRappellingSubSystem::~ZombossRobotRappellingSubSystem() */

void __thiscall
ZombossRobotRappellingSubSystem::~ZombossRobotRappellingSubSystem
          (ZombossRobotRappellingSubSystem *this)

{
  ~ZombossRobotRappellingSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotRappellingSubSystem::rappellingZombie(Zombie*, Sexy::SexyVector3, float,
   std::function<void (Zombie*)>) */

void ZombossRobotRappellingSubSystem::rappellingZombie
               (undefined4 param_1_00,undefined4 param_2,float param_3,float param_4,long param_1,
               Zombie *param_6,function *param_7)

{
  char cVar1;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  RappellingZombieInfo aRStack_58 [8];
  SexyVector3 aSStack_50 [12];
  SexyVector3 aSStack_44 [12];
  undefined4 local_38;
  SexyVector3 aSStack_34 [12];
  function<void(Zombie*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = param_1_00;
  local_7c = param_2;
  local_78 = param_3;
  if ((((param_6 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(param_6), cVar1 == '\0')) &&
      (0.0 <= param_4)) && (0.0 < local_78)) {
    RappellingZombieInfo::RappellingZombieInfo(aRStack_58);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aRStack_58,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::SexyVector3::operator=(aSStack_50,(SexyVector3 *)&local_80);
    Sexy::SexyVector3::operator=(aSStack_44,(SexyVector3 *)&local_80);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,0.0,0.0,-param_4);
    Sexy::SexyVector3::operator=(aSStack_34,(SexyVector3 *)aRStack_68);
    std::function<void(Zombie*)>::operator=(afStack_28,param_7);
    local_38 = PVZ_T();
    Zombie::SetIsControlled(param_6,true);
    std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::push_back
              ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)(param_1 + 0x28)
               ,aRStack_58);
    RappellingZombieInfo::~RappellingZombieInfo(aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotRappellingSubSystem::Update() */

void ZombossRobotRappellingSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  SexyVector3 *this_01;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  RtWeakPtrBase *this_02;
  RtWeakPtr *this_03;
  ResourceInfo *this_04;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  float in_s1;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_18;
  float fStack_14;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x10);
  iVar4 = 0;
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  PVZ_Dt();
  uVar11 = *(undefined8 *)(in_x0 + 0x40);
  uVar5 = FUN_04f12040(uVar11,*(undefined8 *)(in_x0 + 0x48));
  if (uVar5 != 0) {
    do {
      uVar12 = *(undefined8 *)(in_x0 + 0x10);
      lVar6 = FUN_04f1204c(uVar12,*(undefined8 *)(in_x0 + 0x18));
      if (lVar6 != 0) {
        pRVar7 = (RtWeakPtrBase *)FUN_04f12084(uVar12,0);
        while( true ) {
          this_02 = (RtWeakPtrBase *)FUN_04f1207c(uVar11,uVar8);
          cVar2 = Sexy::RtWeakPtrBase::operator==(this_02,pRVar7);
          if (cVar2 != '\0') break;
          iVar4 = iVar4 + 1;
          uVar8 = uVar8 + 1;
        }
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_28 = __gnu_cxx::
                   __normal_iterator<RappellingZombieInfo*,std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>>
                   ::operator+((__normal_iterator<RappellingZombieInfo*,std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>>
                                *)&local_30,0);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::erase
                  ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)this,
                   CONCAT44(fStack_14,local_18));
        uVar11 = *(undefined8 *)(in_x0 + 0x40);
        uVar5 = FUN_04f12040(uVar11,*(undefined8 *)(in_x0 + 0x48));
      }
      iVar4 = iVar4 + 1;
      uVar8 = (ulong)iVar4;
    } while (uVar8 < uVar5);
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
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::
  insert<__gnu_cxx::__normal_iterator<RappellingZombieInfo*,std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>>,void>
            ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)this,
             CONCAT44(fStack_14,local_18),uVar11,uVar12);
  std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::clear
            ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)this_00);
  uVar11 = *(undefined8 *)(in_x0 + 0x10);
  iVar4 = FUN_04f1204c(uVar11,*(undefined8 *)(in_x0 + 0x18));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_04f22a4c:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar9 = (long)(int)uVar1 + -1;
  lVar6 = lVar9;
  lVar13 = (long)(int)uVar1;
  do {
    lVar10 = lVar6;
    this_03 = (RtWeakPtr *)FUN_04f12084(uVar11,lVar13);
    this_04 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_03);
    if (this_04 == (ResourceInfo *)0x0) {
LAB_04f229fc:
      lVar6 = FUN_04f1204c(*(undefined8 *)(in_x0 + 0x10),*(undefined8 *)(in_x0 + 0x18));
      if (lVar6 != 0) {
LAB_04f22a0c:
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_28 = __gnu_cxx::
                   __normal_iterator<RappellingZombieInfo*,std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>>
                   ::operator+((__normal_iterator<RappellingZombieInfo*,std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>>
                                *)&local_30,lVar13);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>>::erase
                  ((vector<RappellingZombieInfo,std::allocator<RappellingZombieInfo>> *)this,
                   CONCAT44(fStack_14,local_18));
      }
    }
    else {
      fVar14 = (float)PVZ_Dt();
      this_01 = (SexyVector3 *)(this_03 + 0x14);
      uVar15 = Sexy::SexyVector3::operator*((SexyVector3 *)(this_03 + 0x24),fVar14);
      local_28 = CONCAT44(in_s1,uVar15);
      local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
      fStack_14 = in_s1;
      Sexy::SexyVector3::operator=(this_01,(SexyVector3 *)&local_18);
      (**(code **)(*(long *)this_04 + 0x78))(this_04,this_01);
      fVar14 = (float)RealObject::CalcGroundZHeight((RealObject *)this_04,this_01);
      in_s1 = *(float *)(this_03 + 0x1c);
      if (in_s1 < fVar14) {
        lVar6 = *(long *)this_04;
        *(float *)(this_03 + 0x1c) = fVar14;
        (**(code **)(lVar6 + 0x78))(this_04,this_01);
        Zombie::SetIsControlled((Zombie *)this_04,false);
        bVar3 = std::function::operator_cast_to_bool((function *)(this_03 + 0x30));
        if (!bVar3) goto LAB_04f229fc;
        std::function<void(Zombie*)>::operator()
                  ((function<void(Zombie*)> *)(this_03 + 0x30),(Zombie *)this_04);
        lVar6 = FUN_04f1204c(*(undefined8 *)(in_x0 + 0x10),*(undefined8 *)(in_x0 + 0x18));
        if (lVar6 == 0) goto joined_r0x04f229d8;
        goto LAB_04f22a0c;
      }
    }
joined_r0x04f229d8:
    if (lVar10 == lVar9 - (ulong)uVar1) goto LAB_04f22a4c;
    uVar11 = *(undefined8 *)(in_x0 + 0x10);
    lVar6 = lVar10 + -1;
    lVar13 = lVar10;
  } while( true );
}

