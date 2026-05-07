// Class: ZombiePirateBarrel


/* ZombiePirateBarrel::GetPusherZombie() */

RtWeakPtr<Sexy::SoundResource> * ZombiePirateBarrel::GetPusherZombie(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x808));
  return in_x8;
}


/* ZombiePirateBarrel::SetBeingPushed(bool) */

void __thiscall ZombiePirateBarrel::SetBeingPushed(ZombiePirateBarrel *this,bool param_1)

{
  this[0x800] = (ZombiePirateBarrel)param_1;
  return;
}


/* ZombiePirateBarrel::getEatingDamageType() const */

undefined8 ZombiePirateBarrel::getEatingDamageType(void)

{
  return 0x200000;
}


/* ZombiePirateBarrel::IsCrushingPlant() */

ZombiePirateBarrel __thiscall ZombiePirateBarrel::IsCrushingPlant(ZombiePirateBarrel *this)

{
  ZombiePirateBarrel ZVar1;
  
  ZVar1 = (ZombiePirateBarrel)0x0;
  if (this[0x800] != (ZombiePirateBarrel)0x0) {
    ZVar1 = this[0x801];
  }
  return ZVar1;
}


/* ZombiePirateBarrel::CanBePushed() */

byte __thiscall ZombiePirateBarrel::CanBePushed(ZombiePirateBarrel *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = IsCrushingPlant(this);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = Zombie::IsSuspended((Zombie *)this);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::CalcProjectileTargetLocation(float) */

void ZombiePirateBarrel::CalcProjectileTargetLocation(float param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  Insets *pIVar3;
  long lVar4;
  undefined4 in_register_00005004;
  ulong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Insets *)(**(code **)(*(long *)in_x0 + 0x178))(CONCAT44(in_register_00005004,param_1));
  Sexy::Insets::Insets((Insets *)&local_18,pIVar3);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(in_x0);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_38,(float)local_18 + (float)local_10 * 0.5,
             (float)local_14 + (float)local_c * 0.5,*(float *)(lVar4 + 8));
  local_28 = local_38;
  uVar1 = local_28;
  local_20 = local_30;
  local_28._4_4_ = (undefined4)(local_38 >> 0x20);
  uVar2 = local_28._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_28 = uVar1;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38 & 0xffffffff,uVar2,local_30);
}


/* ZombiePirateBarrel::~ZombiePirateBarrel() */

void __thiscall ZombiePirateBarrel::~ZombiePirateBarrel(ZombiePirateBarrel *this)

{
  *(undefined ***)this = &PTR_GetClass_068ab4c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateBarrel_068abf08;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateBarrel::~ZombiePirateBarrel() */

void __thiscall ZombiePirateBarrel::~ZombiePirateBarrel(ZombiePirateBarrel *this)

{
  ~ZombiePirateBarrel(this + -0x10);
  return;
}


/* ZombiePirateBarrel::~ZombiePirateBarrel() */

void __thiscall ZombiePirateBarrel::~ZombiePirateBarrel(ZombiePirateBarrel *this)

{
  ~ZombiePirateBarrel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateBarrel::~ZombiePirateBarrel() */

void __thiscall ZombiePirateBarrel::~ZombiePirateBarrel(ZombiePirateBarrel *this)

{
  ~ZombiePirateBarrel(this + -0x10);
  return;
}


/* ZombiePirateBarrel::onEnterState_BarrelIdle(ZombieState) */

void ZombiePirateBarrel::onEnterState_BarrelIdle(Zombie *param_1)

{
  PopAnimRig *this;
  
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetPaused(this,true);
  return;
}


/* ZombiePirateBarrel::ZombiePirateBarrel() */

void __thiscall ZombiePirateBarrel::ZombiePirateBarrel(ZombiePirateBarrel *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ab4c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateBarrel_068abf08;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  return;
}


/* ZombiePirateBarrel::StaticNew() */

ZombiePirateBarrel * ZombiePirateBarrel::StaticNew(void)

{
  ZombiePirateBarrel *this;
  
  this = ::operator_new(0x818);
  ZombiePirateBarrel(this);
  return this;
}


/* ZombiePirateBarrel::CanForceLaneChange() */

undefined1 __thiscall ZombiePirateBarrel::CanForceLaneChange(ZombiePirateBarrel *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::tryEating() */

void __thiscall ZombiePirateBarrel::tryEating(ZombiePirateBarrel *this)

{
  ZombiePirateBarrel ZVar1;
  ZombiePirateBarrel ZVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  GridItem *pGVar4;
  PlantGroup *this_01;
  long lVar5;
  PlantCracker *pPVar6;
  PlantSpikeweed *pPVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  ZVar1 = this[0x800];
  this[0x801] = (ZombiePirateBarrel)0x0;
  local_8 = ___stack_chk_guard;
  if ((ZVar1 == (ZombiePirateBarrel)0x0) ||
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(), this_00 == (RtObject *)0x0)) {
LAB_046a8b80:
    ZVar2 = (ZombiePirateBarrel)0x0;
    goto LAB_046a8b84;
  }
  pZVar3 = Sexy::RtObject::Cast<Zombie>(this_00);
  ZVar2 = ZVar1;
  if (pZVar3 != (Zombie *)0x0) {
    (**(code **)(*(long *)this + 0x960))(this,pZVar3);
    this[0x801] = (ZombiePirateBarrel)0x1;
    goto LAB_046a8b84;
  }
  pGVar4 = Sexy::RtObject::Cast<GridItem>(this_00);
  if (pGVar4 != (GridItem *)0x0) {
    this[0x801] = (ZombiePirateBarrel)0x1;
    pcVar8 = *(code **)(*(long *)this + 0x970);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    (*pcVar8)(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    goto LAB_046a8b84;
  }
  this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
  if (this_01 == (PlantGroup *)0x0) goto LAB_046a8b80;
  this[0x801] = (ZombiePirateBarrel)0x1;
  PlantGroup::GetPlantAtLayer((RtMixedPtrBase *)aRStack_18,this_01,1);
  ZVar2 = (ZombiePirateBarrel)Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (ZVar2 == (ZombiePirateBarrel)0x0) {
LAB_046a8c80:
    PlantGroup::GetPlantAtLayer((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,this_01,1);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pPVar6 = Sexy::RtObject::Cast<PlantCracker>(*(RtObject **)(lVar5 + 0xa8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (pPVar6 == (PlantCracker *)0x0) {
      Zombie::eatPlantGroup((Zombie *)this,this_01);
      ZVar2 = ZVar1;
    }
    else {
      this[0x801] = (ZombiePirateBarrel)0x0;
      ZVar2 = (ZombiePirateBarrel)0x0;
    }
  }
  else {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pPVar7 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar5 + 0xa8));
    if (pPVar7 == (PlantSpikeweed *)0x0) goto LAB_046a8c80;
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)this_01);
    PlantGroup::TakeSmashAttack(this_01,(BoardEntity *)this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
LAB_046a8b84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZVar2);
}


/* ZombiePirateBarrel::updateState_BarrelIdle() */

void __thiscall ZombiePirateBarrel::updateState_BarrelIdle(ZombiePirateBarrel *this)

{
  char cVar1;
  
  if ((this[0x800] != (ZombiePirateBarrel)0x0) && (cVar1 = tryEating(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x20);
      return;
    }
  }
  return;
}


/* ZombiePirateBarrel::updateState_BarrelRoll() */

void __thiscall ZombiePirateBarrel::updateState_BarrelRoll(ZombiePirateBarrel *this)

{
  char cVar1;
  
  if ((this[0x800] == (ZombiePirateBarrel)0x0) || (cVar1 = tryEating(this), cVar1 != '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f);
      return;
    }
  }
  return;
}


/* ZombiePirateBarrel::SetPusherZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ZombiePirateBarrel::SetPusherZombie(ZombiePirateBarrel *this,RtWeakPtr *param_2)

{
  char cVar1;
  ZombieBarrelProps *pZVar2;
  float fVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x808),param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
  if (cVar1 == '\0') {
    fVar3 = (float)PVZ_T();
    pZVar2 = Zombie::GetProps<ZombieBarrelProps>((Zombie *)this);
    *(float *)(this + 0x810) = fVar3 + *(float *)(pZVar2 + 0x210);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombiePirateBarrel::CanBeTargetedByPlant
          (ZombiePirateBarrel *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  ZombieBarrelProps *pZVar3;
  long lVar4;
  long *plVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieBarrelProps>((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = StringRestrictionSet::IsIncluded
                    ((StringRestrictionSet *)(pZVar3 + 0x218),(string *)(lVar4 + 8));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
      cVar2 = (**(code **)(*plVar5 + 0x328))();
      cVar1 = '\0';
      if (cVar2 == '\0') goto LAB_046a8fa4;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar1 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_046a8fa4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* ZombiePirateBarrel::onPlaceOnBoard() */

void __thiscall ZombiePirateBarrel::onPlaceOnBoard(ZombiePirateBarrel *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  MessageRouter::Post<Zombie*,ZombiePirateBarrel*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  GridItemBarrelAnimRig::PlayRoll((GridItemBarrelAnimRig *)this_00);
  Zombie::setZombieState((Zombie *)this,0x20,0);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x9f0))(this,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::spawnImp(int) */

void ZombiePirateBarrel::spawnImp(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  string *psVar3;
  SexyVector3 *pSVar4;
  SexyVector3 *this_00;
  long *extraout_x0;
  int in_w1;
  long *plVar5;
  code *pcVar6;
  undefined4 in_s1;
  undefined4 in_s2;
  string asStack_48 [8];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x9f8))();
  if (cVar1 == '\0') {
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_30 = *(undefined4 *)(this + 0x50);
    local_2b = 1;
    pcVar6 = *(code **)(*plVar5 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_48,"pirate_imp");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    pSVar4 = (SexyVector3 *)
             (*pcVar6)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0xfffffffb,
                       (SpawnZombieParams *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    std::string::~string(asStack_48);
    nop();
    if (((DAT_06b1f608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1f608), iVar2 != 0)) {
      in_s1 = 0;
      in_s2 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1f638,-40.0,0.0,0.0);
      __cxa_guard_release(&DAT_06b1f608);
    }
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this);
    local_40 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)&DAT_06b1f638);
    local_3c = (float)in_s1;
    local_38 = in_s2;
    BoardEntity::PlaceOnBoard(pSVar4);
    nop();
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)pSVar4);
    local_40 = Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)&DAT_06b1f638);
    local_3c = (float)in_s1;
    local_38 = in_s2;
    iVar2 = BoardTransforms::GridToBoardSpaceY(in_w1);
    local_3c = (float)iVar2;
    (**(code **)(*extraout_x0 + 0xa08))
              (local_40,local_3c,local_38,0x3f000000,0x42800000,extraout_x0,1);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::onTakeFatalDamage(DamageInfo const&) */

void __thiscall ZombiePirateBarrel::onTakeFatalDamage(ZombiePirateBarrel *this,DamageInfo *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ZombiePirateBarrelPusher *this_01;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    ZombiePirateBarrelPusher::OnBarrelDied(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x200);
  if (!bVar1) {
    SharkMinion::getRow((SharkMinion *)this);
    spawnImp((int)this);
    spawnImp((int)this);
  }
  std::string::string(asStack_10,"Play_BarrelBreak");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::StaticClassInit() */

void ZombiePirateBarrel::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePirateBarrel");
      (*pcVar4)(plVar1,asStack_150,FUN_046a9828,0x818,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateBarrel,void(ZombiePirateBarrel::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePirateBarrel,void(ZombiePirateBarrel::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateBarrel,void(ZombiePirateBarrel::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_B_BarrelIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a9524(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateBarrel,void(ZombiePirateBarrel::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePirateBarrel,void(ZombiePirateBarrel::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePirateBarrel,void(ZombiePirateBarrel::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_B_BarrelRoll");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046a9524(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePirateBarrel::StaticGetClass() */

long * ZombiePirateBarrel::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateBarrel::GetClass() const */

long * ZombiePirateBarrel::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateBarrel::onInitialized() */

void __thiscall ZombiePirateBarrel::onInitialized(ZombiePirateBarrel *this)

{
  undefined4 uVar1;
  
  Zombie::onInitialized((Zombie *)this);
  this[0x800] = (ZombiePirateBarrel)0x0;
  this[0x801] = (ZombiePirateBarrel)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x810) = uVar1;
  return;
}


/* ZombiePirateBarrel::onUpdate() */

void __thiscall ZombiePirateBarrel::onUpdate(ZombiePirateBarrel *this)

{
  char cVar1;
  float fVar2;
  
  Zombie::onUpdate((Zombie *)this);
  fVar2 = (float)PVZ_T();
  if (((*(float *)(this + 0x810) <= fVar2) &&
      (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsFlying((Zombie *)this), cVar1 == '\0')) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    return;
  }
  return;
}


/* ZombiePirateBarrel::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePirateBarrel::onApplyCondition(ZombiePirateBarrel *this,uint param_2)

{
  bool bVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  
  Zombie::onApplyCondition();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x808));
  if ((bVar1) &&
     ((((param_2 < 2 || (param_2 == 0x10)) || (param_2 - 0x28 < 2)) ||
      ((param_2 & 0xfffffffd) == 0x2d)))) {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    pZVar4 = (Zombie *)
             EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration(pEVar2,param_2);
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    Zombie::ApplyCondition(pZVar4,0,uVar3,param_2,1);
  }
  if ((param_2 != 3) && (param_2 != 4)) {
    return;
  }
  Zombie::EndCondition((Zombie *)this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::onTakeBodyDamage(DamageInfo const&) */

void __thiscall ZombiePirateBarrel::onTakeBodyDamage(ZombiePirateBarrel *this,DamageInfo *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int local_1c [3];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x10000);
  if ((!bVar1) &&
     ((*(RtObject **)param_1 == (RtObject *)0x0 ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), !bVar1)))) {
    std::string::string((string *)local_10,"Play_BarrelHit");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)local_10,0.0);
    std::string::~string((string *)local_10);
    nop();
  }
  BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  fVar4 = (float)FUN_046a8770(*(undefined4 *)(this + 0x284));
  fVar5 = (float)FUN_046a876c(*(undefined4 *)(this + 0x280));
  local_1c[1] = 0;
  local_1c[0] = 2 - (int)(fVar5 / (fVar4 * 0.33333334));
  piVar3 = eastl::max_alt<int>(local_1c,local_1c + 1);
  local_10[0] = 2;
  piVar3 = eastl::min_alt<int>(piVar3,local_10);
  (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,*piVar3);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateBarrel::onDestroy() */

void __thiscall ZombiePirateBarrel::onDestroy(ZombiePirateBarrel *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ZombiePirateBarrelPusher *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x808);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    nop();
    ZombiePirateBarrelPusher::OnBarrelDied(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Zombie::onDestroy((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

