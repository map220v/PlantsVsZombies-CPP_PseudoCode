// Class: ZombieMechDisco


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDisco::updateDancerPositions(float) */

void __thiscall ZombieMechDisco::updateDancerPositions(ZombieMechDisco *this,float param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long *plVar7;
  RtWeakPtr<PowerPropertySheet> *this_01;
  Zombie *this_02;
  SexyVector3 *pSVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  code *pcVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  iVar11 = 1;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  do {
    uVar10 = *(undefined8 *)(this + 0x818);
    uVar5 = FUN_0469ece8(uVar10,*(undefined8 *)(this + 0x820));
    if (uVar5 <= uVar9) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtr *)FUN_0469ece0(uVar10,uVar9);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar9);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      cVar2 = (**(code **)(*plVar7 + 0x328))();
      if (cVar2 == '\0') {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar9);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        cVar2 = (**(code **)(*plVar7 + 0x330))();
        if (cVar2 == '\0') {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar9);
          this_02 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          cVar2 = Zombie::IsSlowed(this_02);
          if (cVar2 == '\0') {
            fVar15 = param_1 + (float)iVar11 * 1.5707964;
            fVar13 = sinf(fVar15);
            fVar15 = cosf(fVar15);
            pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar9);
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
            fVar15 = fVar15 * (float)iVar4;
            uVar14 = 0;
            pcVar12 = *(code **)(*plVar7 + 0x78);
            EATextSquish::Vec3::Vec3(aVStack_28,fVar13 * (float)iVar3,fVar15,0.0);
            pSVar8 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_28,pSVar8);
            local_14 = fVar15;
            local_10 = uVar14;
            (*pcVar12)(plVar7,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                              &local_18);
            goto LAB_0469f13c;
          }
        }
      }
      this_01 = (RtWeakPtr<PowerPropertySheet> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar9);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
LAB_0469f13c:
    uVar9 = uVar9 + 1;
    iVar11 = iVar11 + 1;
  } while( true );
}


/* ZombieMechDisco::updateState_Walk() */

void __thiscall ZombieMechDisco::updateState_Walk(ZombieMechDisco *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this);
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x830);
    *(float *)(this + 0x830) = fVar3 - fVar2;
    if (fVar3 - fVar2 <= 0.0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieMechDisco::updateState_DanceCooldown() */

void __thiscall ZombieMechDisco::updateState_DanceCooldown(ZombieMechDisco *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  cVar1 = ZombieAnimRig_DiscoMech::DanceHasEnded((ZombieAnimRig_DiscoMech *)this_00);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieMechDisco::ZombieMechDisco() */

void __thiscall ZombieMechDisco::ZombieMechDisco(ZombieMechDisco *this)

{
  ZombieMech::ZombieMech((ZombieMech *)this);
  *(undefined ***)this = &PTR_GetClass_068a7c00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMechDisco_068a8668;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  *(undefined4 *)(this + 0x830) = 0;
  return;
}


/* ZombieMechDisco::StaticNew() */

ZombieMechDisco * ZombieMechDisco::StaticNew(void)

{
  ZombieMechDisco *this;
  
  this = ::operator_new(0x838);
  ZombieMechDisco(this);
  return this;
}


/* ZombieMechDisco::onEnterState_Walk(ZombieState) */

void __thiscall ZombieMechDisco::onEnterState_Walk(ZombieMechDisco *this,undefined8 param_2)

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


/* ZombieMechDisco::updateDancers() */

void __thiscall ZombieMechDisco::updateDancers(ZombieMechDisco *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtWeakPtr *this_00;
  ZombieHydraHeadAnimRig *this_01;
  ZombieMechDiscoProps *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ZombiePumpkinKnightGhost *this_03;
  long lVar5;
  Zombie *pZVar6;
  
  lVar5 = 0;
  do {
    this_00 = (RtWeakPtr *)FUN_0469ece0(*(undefined8 *)(this + 0x818),lVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),lVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      nop();
      cVar2 = Zombie::HasCondition(this,0x19);
      if (cVar2 != '\0') {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,this_03,0x19,1);
      }
      cVar2 = Zombie::HasCondition(this,0x90);
      if (cVar2 != '\0') {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,this_03,0x90,1);
        Zombie::SetFacing((Zombie *)this_03,1);
      }
      cVar2 = Zombie::HasCondition(this,0x77);
      if (cVar2 != '\0') {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,this_03,0x77,1);
      }
      ZombiePumpkinKnightGhost::onPlaceOnBoard(this_03);
      uVar3 = FUN_0469ecd8(*(undefined4 *)(this + 0x24));
      RealObject::JoinTeam((RealObject *)this_03,uVar3);
      uVar3 = Zombie::GetFacing((Zombie *)this);
      Zombie::SetFacing((Zombie *)this_03,uVar3);
      cVar2 = Zombie::HasCondition(this,0x41);
      if (cVar2 != '\0') {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,this_03,0x41,1);
      }
      cVar2 = Zombie::HasCondition(this,0x60);
      if (cVar2 != '\0') {
        pZVar6._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar6._0_4_,0,this_03,0x60,1);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  updateDancerPositions(this,0.0);
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_DiscoMech::StartDance((ZombieAnimRig_DiscoMech *)this_01);
  pZVar4 = Zombie::GetProps<ZombieMechDiscoProps>((Zombie *)this);
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar4 + 0x230),0.0);
  return;
}


/* ZombieMechDisco::onEnterState_DanceCooldown(ZombieState) */

void ZombieMechDisco::onEnterState_DanceCooldown(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x818));
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_EightiesPunk::StartJamming((ZombieAnimRig_EightiesPunk *)this);
  return;
}


/* ZombieMechDisco::killDancers() */

void __thiscall ZombieMechDisco::killDancers(ZombieMechDisco *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Zombie *this_02;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = *(undefined8 *)(this + 0x818);
  lVar2 = FUN_0469ece8(uVar5,*(undefined8 *)(this + 0x820));
  if (lVar2 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_0469ece0(uVar5,uVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),uVar4)
        ;
        this_02 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        Zombie::TakeFatalDamage(this_02,(BoardEntity *)0x0);
      }
      uVar4 = uVar4 + 1;
      uVar5 = *(undefined8 *)(this + 0x818);
      uVar3 = FUN_0469ece8(uVar5,*(undefined8 *)(this + 0x820));
    } while (uVar4 < uVar3);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x818));
  return;
}


/* ZombieMechDisco::updateState_Dancing() */

void __thiscall ZombieMechDisco::updateState_Dancing(ZombieMechDisco *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x830);
    *(float *)(this + 0x830) = fVar3 - fVar2;
    if (0.0 < fVar3 - fVar2) {
      return;
    }
    Zombie::setZombieState((Zombie *)this,0x21,0);
    return;
  }
  killDancers(this);
  return;
}


/* ZombieMechDisco::onExitState_Dancing(ZombieState) */

void __thiscall ZombieMechDisco::onExitState_Dancing(ZombieMechDisco *this,int param_2)

{
  if (param_2 != 0x1f) {
    return;
  }
  killDancers(this);
  return;
}


/* ZombieMechDisco::onMowedDown() */

void __thiscall ZombieMechDisco::onMowedDown(ZombieMechDisco *this)

{
  killDancers(this);
  nop();
  return;
}


/* ZombieMechDisco::onTakeFatalDamage(DamageInfo const&) */

void ZombieMechDisco::onTakeFatalDamage(DamageInfo *param_1)

{
  killDancers((ZombieMechDisco *)param_1);
  Zombie::onTakeFatalDamage(param_1);
  return;
}


/* ZombieMechDisco::~ZombieMechDisco() */

void __thiscall ZombieMechDisco::~ZombieMechDisco(ZombieMechDisco *this)

{
  *(undefined ***)this = &PTR_GetClass_068a7c00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMechDisco_068a8668;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x818));
  ZombieMech::~ZombieMech((ZombieMech *)this);
  return;
}


/* non-virtual thunk to ZombieMechDisco::~ZombieMechDisco() */

void __thiscall ZombieMechDisco::~ZombieMechDisco(ZombieMechDisco *this)

{
  ~ZombieMechDisco(this + -0x10);
  return;
}


/* ZombieMechDisco::~ZombieMechDisco() */

void __thiscall ZombieMechDisco::~ZombieMechDisco(ZombieMechDisco *this)

{
  ~ZombieMechDisco(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMechDisco::~ZombieMechDisco() */

void __thiscall ZombieMechDisco::~ZombieMechDisco(ZombieMechDisco *this)

{
  ~ZombieMechDisco(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDisco::addDancers() */

void __thiscall ZombieMechDisco::addDancers(ZombieMechDisco *this)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 4;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"future_jetpack_disco");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x818));
  do {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x818),(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar4 + 4));
  pRVar5 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),0);
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  Board::AddZombie(pBVar6,aRStack_18,0,1,0,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar5,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  cVar1 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),iVar2 + -1);
  if (cVar1 != '\0') {
    pRVar5 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),1);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    Board::AddZombie(pBVar6,aRStack_18,0,1,0,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar5,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  pRVar5 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),2);
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  Board::AddZombie(pBVar6,aRStack_18,0,1,0,0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar5,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  cVar1 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),iVar2 + 1);
  if (cVar1 != '\0') {
    pRVar5 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_0469ece0(*(undefined8 *)(this + 0x818),3);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    Board::AddZombie(pBVar6,aRStack_18,0,1,0,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar5,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechDisco::onEnterState_Dancing(ZombieState) */

void ZombieMechDisco::onEnterState_Dancing(Zombie *param_1)

{
  ZombieMechDiscoProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieMechDiscoProps>(param_1);
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(pZVar1 + 0x228);
  addDancers((ZombieMechDisco *)param_1);
  (**(code **)(*(long *)param_1 + 0xa38))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDisco::StaticClassInit() */

void ZombieMechDisco::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieMechDisco");
      (*pcVar4)(plVar1,asStack_150,FUN_046a0cd0,0x838,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMechDisco,void(ZombieMechDisco::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieMechDisco,void(ZombieMechDisco::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMechDisco,void(ZombieMechDisco::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DiscoMech_Dancing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a09cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMechDisco,void(ZombieMechDisco::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate0::Delegate0<ZombieMechDisco,void(ZombieMechDisco::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMechDisco,void(ZombieMechDisco::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DiscoMech_DanceCooldown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a09cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMechDisco::StaticGetClass() */

long * ZombieMechDisco::StaticGetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechDisco",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechDisco::GetClass() const */

long * ZombieMechDisco::GetClass(void)

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
  uVar2 = ZombieMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechDisco",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDisco::onPlaceOnBoard() */

void __thiscall ZombieMechDisco::onPlaceOnBoard(ZombieMechDisco *this)

{
  ZombieMechDiscoProps *pZVar1;
  ZombieMechDiscoSubsystem *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieMechDiscoProps>((Zombie *)this);
  *(undefined4 *)(this + 0x830) = *(undefined4 *)(pZVar1 + 0x224);
  pZVar2 = Board::GetGameSubSystem<ZombieMechDiscoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieMechDiscoSubsystem::AssociateWithSubSystem(pZVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ZombieMech::onPlaceOnBoard((ZombieMech *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

