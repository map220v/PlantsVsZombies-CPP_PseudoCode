// Class: ZombieWalkOutSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkOutSubSystem::StaticClassInit() */

void ZombieWalkOutSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWalkOutSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca2ee0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWalkOutSubSystem::StaticGetClass() */

long * ZombieWalkOutSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkOutSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkOutSubSystem::GetClass() const */

long * ZombieWalkOutSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkOutSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkOutSubSystem::ZombieWalkOutSubSystem() */

void __thiscall ZombieWalkOutSubSystem::ZombieWalkOutSubSystem(ZombieWalkOutSubSystem *this)

{
  char cVar1;
  LevelModuleManager *this_00;
  CardGameBoardModule *this_01;
  float fVar2;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06997e00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  cVar1 = CardGameUtils::IsPlayingCardGame();
  if (cVar1 != '\0') {
    this_00 = (LevelModuleManager *)
              FUN_04ca0100(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    this_01 = LevelModuleManager::GetModuleByClass<CardGameBoardModule>(this_00);
    if (this_01 != (CardGameBoardModule *)0x0) {
      fVar2 = (float)LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this_01);
      *(float *)(this + 0x58) = fVar2;
      Sexy::OutputDebugStrF((wchar_t *)"ZombieWalkOutSubSystem scale = %f",(double)fVar2);
      return;
    }
  }
  return;
}


/* ZombieWalkOutSubSystem::StaticNew() */

ZombieWalkOutSubSystem * ZombieWalkOutSubSystem::StaticNew(void)

{
  ZombieWalkOutSubSystem *this;
  
  this = ::operator_new(0x60);
  ZombieWalkOutSubSystem(this);
  return this;
}


/* ZombieWalkOutSubSystem::~ZombieWalkOutSubSystem() */

void __thiscall ZombieWalkOutSubSystem::~ZombieWalkOutSubSystem(ZombieWalkOutSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06997e00;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::~vector
            ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)(this + 0x28));
  std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::~vector
            ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieWalkOutSubSystem::~ZombieWalkOutSubSystem() */

void __thiscall ZombieWalkOutSubSystem::~ZombieWalkOutSubSystem(ZombieWalkOutSubSystem *this)

{
  ~ZombieWalkOutSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkOutSubSystem::OutZombie(Zombie*, Sexy::SexyVector3, float) */

void ZombieWalkOutSubSystem::OutZombie
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_1,Zombie *param_6)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  int local_44;
  WalkingOutZombie aWStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined8 local_28;
  undefined4 local_18;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_60 = param_1_00;
  local_5c = param_2;
  local_58 = param_3;
  WalkingOutZombie::WalkingOutZombie(aWStack_40);
  Zombie::GetAnimRig(param_6);
  PopAnimRig::GetPAMColor();
  local_28 = local_50;
  local_2c = (float)Zombie::GetZombieScale(param_6);
  local_2c = local_2c * *(float *)(param_1 + 0x58);
  Sexy::OutputDebugStrF((wchar_t *)"newWalkingOutZombie.oldScale %f",(double)local_2c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_10,(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::SexyVector3::operator=((SexyVector3 *)aWStack_40,(SexyVector3 *)&local_60);
  local_30 = PVZ_T();
  local_34 = param_4;
  (**(code **)(*(long *)param_6 + 0xb0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,param_6);
  if (90.0 < (float)local_44) {
    local_18 = 0x3f000000;
  }
  Zombie::SetIsTargetable(param_6,false);
  Zombie::SetIgnoresCollisions(param_6,true);
  std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::push_back
            ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)(param_1 + 0x28),
             aWStack_40);
  WalkingOutZombie::~WalkingOutZombie(aWStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkOutSubSystem::Update() */

void __thiscall ZombieWalkOutSubSystem::Update(ZombieWalkOutSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  PopAnimRig *pPVar7;
  long lVar8;
  ResourceInfo *this_02;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  PVZ_Dt();
  uVar13 = *(undefined8 *)(this + 0x40);
  uVar4 = FUN_04ca01a0(uVar13,*(undefined8 *)(this + 0x48));
  if (uVar4 != 0) {
    do {
      uVar12 = *(undefined8 *)(this + 0x10);
      lVar5 = FUN_04ca01ac(uVar12,*(undefined8 *)(this + 0x18));
      lVar8 = 0;
      do {
        iVar3 = (int)lVar8;
        if (lVar8 == lVar5) goto LAB_04ca5204;
        lVar9 = FUN_04ca01e8(uVar12,lVar8);
        pRVar6 = (RtWeakPtrBase *)FUN_04ca01f8(uVar13,uVar11);
        cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar9 + 0x30),pRVar6);
        lVar8 = lVar8 + 1;
      } while (cVar2 == '\0');
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_20 = __gnu_cxx::
                 __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                 ::operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                              *)&local_28,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_20);
      std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::erase
                ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)this_00,local_18);
      uVar13 = *(undefined8 *)(this + 0x40);
      uVar4 = FUN_04ca01a0(uVar13,*(undefined8 *)(this + 0x48));
LAB_04ca5204:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_20);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_01);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_01);
  std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::
  insert<__gnu_cxx::__normal_iterator<WalkingOutZombie*,std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>>,void>
            ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)this_00,local_18,uVar13,
             uVar12);
  std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::clear
            ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)this_01);
  uVar13 = *(undefined8 *)(this + 0x10);
  iVar3 = FUN_04ca01ac(uVar13,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar9 = (long)(int)uVar1 + -1;
    lVar8 = lVar9;
    lVar5 = (long)(int)uVar1;
    while( true ) {
      lVar10 = lVar8;
      lVar8 = FUN_04ca01e8(uVar13,lVar5);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x30));
      if (this_02 == (ResourceInfo *)0x0) {
        lVar8 = FUN_04ca01ac(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
        if (lVar8 != 0) {
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_20 = __gnu_cxx::
                     __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                     ::operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                                  *)&local_28,lVar5);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_18,(__normal_iterator *)&local_20);
          std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::erase
                    ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)this_00,local_18);
        }
      }
      else {
        fVar18 = *(float *)(this + 0x58);
        fVar14 = (float)PVZ_T();
        fVar17 = fVar18 * 0.3;
        fVar16 = *(float *)(lVar8 + 0x28);
        fVar14 = (fVar14 - *(float *)(lVar8 + 0x10)) / *(float *)(lVar8 + 0xc);
        if (fVar17 <= fVar14) {
          fVar18 = fVar18 * 0.8;
          if (fVar18 <= fVar14) {
            fVar17 = (float)PVZ_T();
            fmodf(fVar17,0.1);
            local_20 = 0;
            local_18 = 0x3ff0000000000000;
            dVar15 = CurveEvaluate<double>
                               ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                 *)&local_20,
                                (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                 *)&local_18,8);
            fVar16 = *(float *)(lVar8 + 0x14);
            fVar17 = (float)dVar15;
          }
          else {
            fVar16 = fVar16 + ((fVar14 - fVar17) * (*(float *)(lVar8 + 0x14) - fVar16)) /
                              (fVar18 - fVar17);
            fVar17 = fVar14;
          }
        }
        Zombie::SetZombieScale((Zombie *)this_02,fVar16);
        Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(lVar8 + 0x18));
        local_c = (int)(fVar17 * 255.0);
        pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_02);
        PopAnimRig::SetPAMColor(pPVar7,(Color *)&local_18);
        if (1.0 <= fVar14) {
          pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_02);
          PopAnimRig::SetPAMColor(pPVar7,(Color *)(lVar8 + 0x18));
          Zombie::SetZombieScale((Zombie *)this_02,*(float *)(lVar8 + 0x14));
          Zombie::SetIsTargetable((Zombie *)this_02,true);
          Zombie::SetIgnoresCollisions((Zombie *)this_02,false);
          lVar8 = FUN_04ca01ac(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
          if (lVar8 != 0) {
            local_30 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(this_00);
            local_28 = __gnu_cxx::
                       __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                       ::operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                                    *)&local_30,lVar5);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_20,(__normal_iterator *)&local_28);
            std::vector<WalkingOutZombie,std::allocator<WalkingOutZombie>>::erase
                      ((vector<WalkingOutZombie,std::allocator<WalkingOutZombie>> *)this_00,local_20
                      );
          }
        }
      }
      if (lVar10 == lVar9 - (ulong)uVar1) break;
      uVar13 = *(undefined8 *)(this + 0x10);
      lVar8 = lVar10 + -1;
      lVar5 = lVar10;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

