// Class: BowlingMechDisco


/* BowlingMechDisco::onEnterState_Walk(ZombieState) */

void __thiscall BowlingMechDisco::onEnterState_Walk(BowlingMechDisco *this,undefined8 param_2)

{
  ZombieMechDiscoProps *pZVar1;
  
  if ((int)param_2 != 0x21) {
    Zombie::onEnterState_Walk(this);
    return;
  }
  pZVar1 = Zombie::GetProps<ZombieMechDiscoProps>((Zombie *)this);
  *(undefined4 *)(this + 0x830) = *(undefined4 *)(pZVar1 + 0x224);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMechDisco::StaticClassInit() */

void BowlingMechDisco::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingMechDisco");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0bda4,0x838,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMechDisco::StaticGetClass() */

long * BowlingMechDisco::StaticGetClass(void)

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
  uVar2 = ZombieMechDisco::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingMechDisco",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingMechDisco::GetClass() const */

long * BowlingMechDisco::GetClass(void)

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
  uVar2 = ZombieMechDisco::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingMechDisco",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMechDisco::updateState_Dancing() */

void __thiscall BowlingMechDisco::updateState_Dancing(BowlingMechDisco *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtMixedPtrBase *this_00;
  Zombie *this_01;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x818));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x818));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      this_01 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = Zombie::getZombieStateSerialization(this_01);
      if (iVar3 == 1) {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        (**(code **)(*plVar4 + 600))();
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  Zombie::setZombieState((Zombie *)this,0x21);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMechDisco::onEnterState_DanceCooldown(ZombieState) */

void BowlingMechDisco::onEnterState_DanceCooldown(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_EightiesPunk::StartJamming((ZombieAnimRig_EightiesPunk *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMechDisco::updateState_DanceCooldown() */

void __thiscall BowlingMechDisco::updateState_DanceCooldown(BowlingMechDisco *this)

{
  char cVar1;
  bool bVar2;
  ZombieHydraHeadAnimRig *this_00;
  RtMixedPtrBase *this_01;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  cVar1 = ZombieAnimRig_DiscoMech::DanceHasEnded((ZombieAnimRig_DiscoMech *)this_00);
  if (cVar1 != '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x818));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x818));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_01 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar1 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        cVar1 = (**(code **)(*plVar3 + 0x330))();
        if (cVar1 == '\0') {
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          cVar1 = (**(code **)(*plVar3 + 0x328))();
          if (cVar1 == '\0') {
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
            (**(code **)(*plVar3 + 0x260))();
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    (**(code **)(*(long *)this + 0x260))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMechDisco::BowlingMechDisco() */

void __thiscall BowlingMechDisco::BowlingMechDisco(BowlingMechDisco *this)

{
  ZombieMechDisco::ZombieMechDisco((ZombieMechDisco *)this);
  *(undefined ***)this = &PTR_GetClass_069d4300;
  *(undefined ***)(this + 0x10) = &PTR__BowlingMechDisco_069d4d68;
  return;
}


/* BowlingMechDisco::StaticNew() */

BowlingMechDisco * BowlingMechDisco::StaticNew(void)

{
  BowlingMechDisco *this;
  
  this = ::operator_new(0x838);
  BowlingMechDisco(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMechDisco::updateState_Walk() */

void __thiscall BowlingMechDisco::updateState_Walk(BowlingMechDisco *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  RtMixedPtrBase *this_01;
  long lVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                (this + 0x818);
      cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                        (this_00);
      if (cVar1 == '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        iVar6 = 0;
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          this_01 = (RtMixedPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
          if (cVar1 == '\0') {
            iVar6 = iVar6 + 1;
            lVar5 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
            iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar5 + 4));
            if ((iVar3 == 0) || (iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar4 + -1 == iVar3)) {
              if (iVar6 != 1) {
                Zombie::setZombieState((Zombie *)this,0x20,0);
              }
            }
            else {
              Zombie::setZombieState((Zombie *)this,0x20,0);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
      else {
        Zombie::setZombieState((Zombie *)this,0x20,0);
      }
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMechDisco::updateDancers() */

void __thiscall BowlingMechDisco::updateDancers(BowlingMechDisco *this)

{
  ZombieHydraHeadAnimRig *this_00;
  ZombieMechDiscoProps *pZVar1;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_DiscoMech::StartDance((ZombieAnimRig_DiscoMech *)this_00);
  pZVar1 = Zombie::GetProps<ZombieMechDiscoProps>((Zombie *)this);
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar1 + 0x230),0.0);
  return;
}


/* BowlingMechDisco::~BowlingMechDisco() */

void __thiscall BowlingMechDisco::~BowlingMechDisco(BowlingMechDisco *this)

{
  *(undefined ***)this = &PTR_GetClass_069d4300;
  *(undefined ***)(this + 0x10) = &PTR__BowlingMechDisco_069d4d68;
  ZombieMechDisco::~ZombieMechDisco((ZombieMechDisco *)this);
  return;
}


/* non-virtual thunk to BowlingMechDisco::~BowlingMechDisco() */

void __thiscall BowlingMechDisco::~BowlingMechDisco(BowlingMechDisco *this)

{
  ~BowlingMechDisco(this + -0x10);
  return;
}


/* BowlingMechDisco::~BowlingMechDisco() */

void __thiscall BowlingMechDisco::~BowlingMechDisco(BowlingMechDisco *this)

{
  ~BowlingMechDisco(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingMechDisco::~BowlingMechDisco() */

void __thiscall BowlingMechDisco::~BowlingMechDisco(BowlingMechDisco *this)

{
  ~BowlingMechDisco(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMechDisco::onEnterState_Dancing(ZombieState) */

void BowlingMechDisco::onEnterState_Dancing
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  SexyVector3 *pSVar6;
  RtMixedPtrBase *pRVar7;
  undefined8 uVar8;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  long lVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  long *plVar11;
  ZombiePumpkinKnightGhost *this_01;
  RealObject *pRVar12;
  Zombie *pZVar13;
  ZombieAnimRig *pZVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  int iVar18;
  Board *pBVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
         (param_1 + 0x818);
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_18,"bowling_future_jetpack_disco");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_18);
  nop();
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty(this);
  if (cVar1 == '\0') {
    iVar18 = 1;
    lVar16 = 0;
    pSVar6 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_1);
    do {
      iVar4 = (int)lVar16;
      pRVar7 = (RtMixedPtrBase *)FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar7);
      iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(pSVar6 + 4));
      if (cVar1 == '\0') {
LAB_04e0d684:
        if (iVar4 == 2) {
          uVar8 = *(undefined8 *)(param_1 + 0x818);
          uVar15 = 2;
LAB_04e0d6a4:
          this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_04e0ac04(uVar8,uVar15);
          pBVar19 = *(Board **)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_30);
          Board::AddZombie(pBVar19,(RtWeakPtr<Sexy::SoundResource> *)local_28,0,1,0,0);
          ToolPacketData::GetProps();
LAB_04e0d6f0:
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28)
          ;
        }
        else if (iVar4 == 3) {
          cVar1 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),iVar3 + 1);
          if (cVar1 != '\0') {
            this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),3);
            pBVar19 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_30);
            Board::AddZombie(pBVar19,(RtWeakPtr<Sexy::SoundResource> *)local_28,0,1,0,0);
            ToolPacketData::GetProps();
            goto LAB_04e0d6f0;
          }
        }
        else {
          if (iVar4 != 1) {
            uVar8 = *(undefined8 *)(param_1 + 0x818);
            uVar15 = 0;
            goto LAB_04e0d6a4;
          }
          cVar1 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),iVar3 + -1);
          if (cVar1 != '\0') {
            this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),1);
            pBVar19 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_30);
            Board::AddZombie(pBVar19,(RtWeakPtr<Sexy::SoundResource> *)local_28,0,1,0,0);
            ToolPacketData::GetProps();
            goto LAB_04e0d6f0;
          }
        }
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar20 = sinf((float)iVar18 * 1.5707964);
        fVar21 = cosf((float)iVar18 * 1.5707964);
        pRVar7 = (RtMixedPtrBase *)FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar7);
        if (cVar1 != '\0') {
          pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
          plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
          cVar1 = (**(code **)(*plVar11 + 0x330))();
          if (cVar1 == '\0') {
            pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
            plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
            cVar1 = (**(code **)(*plVar11 + 0x328))();
            if (cVar1 == '\0') {
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
              plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              uVar23 = 0;
              fVar21 = (float)iVar3 * fVar21;
              pcVar17 = *(code **)(*plVar11 + 0x78);
              EATextSquish::Vec3::Vec3((Vec3 *)local_28,(float)iVar4 * fVar20,fVar21,0.0);
              uVar22 = Sexy::SexyVector3::operator+((SexyVector3 *)local_28,pSVar6);
              local_18 = CONCAT44(fVar21,uVar22);
              local_10 = uVar23;
              (*pcVar17)(plVar11,(string *)&local_18);
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              nop();
              ZombiePumpkinKnightGhost::onPlaceOnBoard(this_01);
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
              pRVar12 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              uVar22 = FUN_04e0aba0(*(undefined4 *)(param_1 + 0x24));
              RealObject::JoinTeam(pRVar12,uVar22);
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
              pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              uVar22 = Zombie::GetFacing((Zombie *)param_1);
              Zombie::SetFacing(pZVar13,uVar22);
              pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
              pZVar13 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
              pZVar14 = (ZombieAnimRig *)Zombie::GetAnimRig(pZVar13);
              if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
                fVar20 = (float)Zombie::GetWalkSpeed((Zombie *)param_1);
              }
              else {
                fVar20 = (float)(**(code **)(*(long *)param_1 + 0x1d8))(param_1);
              }
              ZombieAnimRig::SetDesiredWalkVelocity(pZVar14,fVar20);
            }
          }
        }
      }
      else {
        pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
        cVar1 = (**(code **)(*plVar11 + 0x330))();
        if (cVar1 != '\0') goto LAB_04e0d684;
        pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
        cVar1 = (**(code **)(*plVar11 + 0x328))();
        if (cVar1 != '\0') goto LAB_04e0d684;
        pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04e0ac04(*(undefined8 *)(param_1 + 0x818),lVar16);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
        fVar20 = (float)FUN_04e0abe4(*(undefined4 *)(lVar9 + 0x280));
        if (fVar20 <= 0.0) goto LAB_04e0d684;
      }
      lVar16 = lVar16 + 1;
      iVar18 = iVar18 + 1;
    } while (lVar16 != 4);
    (**(code **)(*(long *)param_1 + 0xa38))(param_1);
  }
  else {
    ZombieMechDisco::addDancers((ZombieMechDisco *)param_1);
    ZombieMechDisco::updateDancers((ZombieMechDisco *)param_1);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_28,(__normal_iterator *)&local_18), bVar2)
    {
      pRVar7 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_28);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar7);
      if (cVar1 != '\0') {
        pZVar13 = (Zombie *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar7);
        pZVar14 = (ZombieAnimRig *)Zombie::GetAnimRig(pZVar13);
        if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
          fVar20 = (float)Zombie::GetWalkSpeed((Zombie *)param_1);
        }
        else {
          fVar20 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
        }
        ZombieAnimRig::SetDesiredWalkVelocity(pZVar14,fVar20);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_28);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

