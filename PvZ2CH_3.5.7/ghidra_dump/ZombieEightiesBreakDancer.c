// Class: ZombieEightiesBreakDancer


/* ZombieEightiesBreakDancer::spinOutroComplete(std::string const&) */

void ZombieEightiesBreakDancer::spinOutroComplete(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer() */

void __thiscall
ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer(ZombieEightiesBreakDancer *this)

{
  *(undefined ***)this = &PTR_GetClass_068f12a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBreakDancer_068f1ce8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer() */

void __thiscall
ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer(ZombieEightiesBreakDancer *this)

{
  ~ZombieEightiesBreakDancer(this + -0x10);
  return;
}


/* ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer() */

void __thiscall
ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer(ZombieEightiesBreakDancer *this)

{
  ~ZombieEightiesBreakDancer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer() */

void __thiscall
ZombieEightiesBreakDancer::~ZombieEightiesBreakDancer(ZombieEightiesBreakDancer *this)

{
  ~ZombieEightiesBreakDancer(this + -0x10);
  return;
}


/* ZombieEightiesBreakDancer::ZombieEightiesBreakDancer() */

void __thiscall
ZombieEightiesBreakDancer::ZombieEightiesBreakDancer(ZombieEightiesBreakDancer *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieEightiesBreakDancer)0x0;
  *(undefined ***)this = &PTR_GetClass_068f12a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBreakDancer_068f1ce8;
  return;
}


/* ZombieEightiesBreakDancer::StaticNew() */

ZombieEightiesBreakDancer * ZombieEightiesBreakDancer::StaticNew(void)

{
  ZombieEightiesBreakDancer *this;
  
  this = ::operator_new(0x808);
  ZombieEightiesBreakDancer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::calcTossRect(Sexy::TRect<int>) */

void ZombieEightiesBreakDancer::calcTossRect(Insets *param_1,Zombie *param_2,Insets *param_3)

{
  int iVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(lVar3 + 0x70));
  fVar6 = *(float *)(param_2 + 0x1c);
  fVar4 = (float)FUN_047e4e60(*(undefined4 *)(param_2 + 0x18),fVar6,*(undefined4 *)(param_2 + 0x20))
  ;
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)param_3;
  fVar5 = (float)Zombie::GetFacingMultiplier(param_2);
  *(int *)param_3 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(param_3 + 4) =
       (int)(((float)*(int *)(param_3 + 4) + fVar6) - (float)*(int *)(param_3 + 0xc));
  Sexy::Insets::Insets(param_1,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ZombieEightiesBreakDancer::isTossable(BoardEntity*) */

undefined8 __thiscall
ZombieEightiesBreakDancer::isTossable(ZombieEightiesBreakDancer *this,BoardEntity *param_1)

{
  char cVar1;
  RealObject *this_00;
  undefined8 uVar2;
  
  nop();
  if (((((this == (ZombieEightiesBreakDancer *)this_00) ||
        (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
      (((cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0' ||
        (cVar1 = Zombie::HasCondition(this_00,1), cVar1 != '\0')) ||
       ((cVar1 = Zombie::HasCondition(this_00,0x27), cVar1 != '\0' ||
        ((cVar1 = Zombie::HasCondition(this_00,0x25), cVar1 != '\0' ||
         (cVar1 = Zombie::HasCondition(this_00,0x65), cVar1 != '\0')))))))) ||
     ((cVar1 = Zombie::IsControlled((Zombie *)this_00), cVar1 != '\0' ||
      ((((cVar1 = Zombie::IsFlying((Zombie *)this_00), cVar1 != '\0' ||
         (cVar1 = Zombie::IsBoss((Zombie *)this_00), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 != '\0')))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* ZombieEightiesBreakDancer::GetJamStyle() */

void ZombieEightiesBreakDancer::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesBreakDancerProps>(in_x0);
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::tossZombie(BoardEntity*) */

void __thiscall
ZombieEightiesBreakDancer::tossZombie(ZombieEightiesBreakDancer *this,BoardEntity *param_1)

{
  undefined8 extraout_x0;
  ZombieEightiesBreakDancerProps *pZVar1;
  ZombieTosserSubSystem *pZVar2;
  ZombieTosserSubSystem *pZVar5;
  undefined4 uVar3;
  undefined4 uVar4;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pZVar1 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)this);
  uVar4 = *(undefined4 *)(pZVar1 + 0x21c);
  pZVar1 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)this);
  uVar3 = *(undefined4 *)(pZVar1 + 0x220);
  pZVar1 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
  pZVar5._0_4_ = *(ZombieTosserSubSystem **)(pZVar1 + 0x224);
  pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombieHorizontal
            (pZVar5._0_4_,uVar3,uVar4,pZVar2,extraout_x0,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBreakDancer::StartJamming() */

void __thiscall ZombieEightiesBreakDancer::StartJamming(ZombieEightiesBreakDancer *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this[0x800] = (ZombieEightiesBreakDancer)0x1;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_EightiesBreakDancer::ActivateJam((ZombieAnimRig_EightiesBreakDancer *)this_00,this);
  Zombie::reenterZombieState((Zombie *)this);
  return;
}


/* ZombieEightiesBreakDancer::StopJamming() */

void __thiscall ZombieEightiesBreakDancer::StopJamming(ZombieEightiesBreakDancer *this)

{
  ZombieAnimRig_EightiesBreakDancer *this_00;
  
  this[0x800] = (ZombieEightiesBreakDancer)0x0;
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  ZombieAnimRig_EightiesBreakDancer::DeactivateJam(this_00,this);
  Zombie::reenterZombieState((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::onEnterState_StartToss(ZombieState) */

void ZombieEightiesBreakDancer::onEnterState_StartToss(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"spinIntroComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBreakDancer::SpinIntro
            ((ZombieAnimRig_EightiesBreakDancer *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::spinIntroComplete(std::string const&) */

void ZombieEightiesBreakDancer::spinIntroComplete(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"spinMainComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBreakDancer::SpinMain
            ((ZombieAnimRig_EightiesBreakDancer *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::spinMainComplete(std::string const&) */

void ZombieEightiesBreakDancer::spinMainComplete(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"spinOutroComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBreakDancer::SpinOutro
            ((ZombieAnimRig_EightiesBreakDancer *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::removeInvalidTargets(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ZombieEightiesBreakDancer::removeInvalidTargets(ZombieEightiesBreakDancer *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      cVar2 = isTossable(this,(BoardEntity *)*puVar3);
      if (cVar2 == '\0') break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)param_1);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::getTossTargets(Sexy::TRect<int>) */

void ZombieEightiesBreakDancer::getTossTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               SharkMinion *param_2,Insets *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  uVar1 = SharkMinion::getRow(param_2);
  Sexy::Insets::Insets(aIStack_18,param_3);
  calcTossRect(auStack_28,param_2,aIStack_18);
  EntityFinder::GetEntitiesTouchingRectangle(param_1,2,auStack_28,uVar1,uVar1);
  removeInvalidTargets((ZombieEightiesBreakDancer *)param_2,(vector *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::canTossZombies() */

void __thiscall ZombieEightiesBreakDancer::canTossZombies(ZombieEightiesBreakDancer *this)

{
  bool bVar1;
  char cVar2;
  ZombieEightiesBreakDancerProps *pZVar3;
  long lVar4;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x800] == (ZombieEightiesBreakDancer)0x0) ||
     (cVar2 = Creature::IsOnBoard(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    pZVar3 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)this);
    Sexy::Insets::Insets(aIStack_30,(Insets *)(pZVar3 + 0x70));
    getTossTargets((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,this,aIStack_30);
    lVar4 = FUN_047e4da8(local_20,local_18);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    bVar1 = lVar4 != 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::tossZombies() */

void __thiscall ZombieEightiesBreakDancer::tossZombies(ZombieEightiesBreakDancer *this)

{
  bool bVar1;
  ZombieEightiesBreakDancerProps *pZVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::setZombieState((Zombie *)this,0x20,0);
  pZVar2 = Zombie::GetProps<ZombieEightiesBreakDancerProps>((Zombie *)this);
  Sexy::Insets::Insets((Insets *)local_30,(Insets *)(pZVar2 + 0x228));
  getTossTargets(avStack_20,this,(Insets *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    tossZombie(this,(BoardEntity *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBreakDancer::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieEightiesBreakDancer::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    tossZombies((ZombieEightiesBreakDancer *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancer::StaticClassInit() */

void ZombieEightiesBreakDancer::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieEightiesBreakDancer");
      (*pcVar4)(plVar1,asStack_150,FUN_047e6e4c,0x808,0);
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
  Delegate1<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_StartToss");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e6b48(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBreakDancer,void(ZombieEightiesBreakDancer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Tossing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e6b48(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesBreakDancer::StaticGetClass() */

long * ZombieEightiesBreakDancer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBreakDancer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBreakDancer::GetClass() const */

long * ZombieEightiesBreakDancer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBreakDancer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBreakDancer::onPlaceOnBoard() */

void __thiscall ZombieEightiesBreakDancer::onPlaceOnBoard(ZombieEightiesBreakDancer *this)

{
  char cVar1;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x280))(this);
  }
  return;
}


/* ZombieEightiesBreakDancer::updateState_Walk() */

void __thiscall ZombieEightiesBreakDancer::updateState_Walk(ZombieEightiesBreakDancer *this)

{
  char cVar1;
  
  cVar1 = canTossZombies(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieEightiesBreakDancer::updateState_Eat() */

void __thiscall ZombieEightiesBreakDancer::updateState_Eat(ZombieEightiesBreakDancer *this)

{
  char cVar1;
  
  cVar1 = canTossZombies(this);
  if (cVar1 == '\0') {
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}

