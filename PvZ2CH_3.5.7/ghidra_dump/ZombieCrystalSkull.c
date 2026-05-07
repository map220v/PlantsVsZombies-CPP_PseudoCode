// Class: ZombieCrystalSkull


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::GetSunTarget() */

void __thiscall ZombieCrystalSkull::GetSunTarget(ZombieCrystalSkull *this)

{
  CreatureConditionTracker *this_00;
  float fVar1;
  Vec3 aVStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,-20.0,0.0,100.0);
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar1 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_28,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCrystalSkull::onLaserCooledDown() */

void __thiscall ZombieCrystalSkull::onLaserCooledDown(ZombieCrystalSkull *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::IncrementSunsClaimed(int) */

void ZombieCrystalSkull::IncrementSunsClaimed(int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_LostCity_CrystalSkull_PowerSuck");
  RealObject::PlayPositionalSound((RealObject *)(ulong)(uint)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCrystalSkull::onArmingDone() */

void __thiscall ZombieCrystalSkull::onArmingDone(ZombieCrystalSkull *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21);
  return;
}


/* ZombieCrystalSkull::~ZombieCrystalSkull() */

void __thiscall ZombieCrystalSkull::~ZombieCrystalSkull(ZombieCrystalSkull *this)

{
  *(undefined ***)this = &PTR_GetClass_068e4930;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCrystalSkull_068e5390;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieCrystalSkull::~ZombieCrystalSkull() */

void __thiscall ZombieCrystalSkull::~ZombieCrystalSkull(ZombieCrystalSkull *this)

{
  ~ZombieCrystalSkull(this + -0x10);
  return;
}


/* ZombieCrystalSkull::~ZombieCrystalSkull() */

void __thiscall ZombieCrystalSkull::~ZombieCrystalSkull(ZombieCrystalSkull *this)

{
  ~ZombieCrystalSkull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCrystalSkull::~ZombieCrystalSkull() */

void __thiscall ZombieCrystalSkull::~ZombieCrystalSkull(ZombieCrystalSkull *this)

{
  ~ZombieCrystalSkull(this + -0x10);
  return;
}


/* ZombieCrystalSkull::CanClaimSun() */

bool __thiscall ZombieCrystalSkull::CanClaimSun(ZombieCrystalSkull *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  
  cVar2 = Zombie::IsSuspended((Zombie *)this);
  if (((cVar2 == '\0') && (cVar2 = RealObject::IsOnTeam(this,1), cVar2 == '\0')) &&
     (cVar2 = Zombie::isInState((Zombie *)this,0x1f), cVar2 != '\0')) {
    if (((DAT_06b26b50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b26b50), iVar3 != 0)) {
      iVar3 = BoardTransforms::GridToBoardSpaceX(8);
      DAT_06b26b60 = iVar3 + 0x1e;
      __cxa_guard_release(&DAT_06b26b50);
    }
    uVar1 = (uint)DAT_06b26938;
    if (((DAT_06b26938 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b26938), iVar3 != 0)) {
      iVar3 = BoardTransforms::GridToBoardSpaceX(uVar1 & 1);
      DAT_06b26910 = iVar3 + 0x1e;
      __cxa_guard_release(&DAT_06b26938);
    }
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar4 <= (float)DAT_06b26b60) {
      return (float)DAT_06b26910 <= *pfVar4;
    }
  }
  return false;
}


/* ZombieCrystalSkull::ZombieCrystalSkull() */

void __thiscall ZombieCrystalSkull::ZombieCrystalSkull(ZombieCrystalSkull *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068e4930;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCrystalSkull_068e5390;
  *(undefined4 *)(this + 0x800) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar1;
  return;
}


/* ZombieCrystalSkull::StaticNew() */

ZombieCrystalSkull * ZombieCrystalSkull::StaticNew(void)

{
  ZombieCrystalSkull *this;
  
  this = ::operator_new(0x808);
  ZombieCrystalSkull(this);
  return this;
}


/* ZombieCrystalSkull::IncrementSunsCollected(int) */

void __thiscall ZombieCrystalSkull::IncrementSunsCollected(ZombieCrystalSkull *this,int param_1)

{
  ZombieCrystalSkullProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieCrystalSkullProps>((Zombie *)this);
  *(float *)(this + 0x804) =
       *(float *)(this + 0x804) - *(float *)(pZVar1 + 0x214) * (float)(param_1 / 5);
  return;
}


/* ZombieCrystalSkull::calcLaserAttackRect() const */

void ZombieCrystalSkull::calcLaserAttackRect(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Zombie *in_x0;
  ZombieCrystalSkullProps *pZVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pZVar4 = Zombie::GetProps<ZombieCrystalSkullProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar4 + 0x80));
  *(int *)(in_x8 + 8) = (int)((float)*(int *)(in_x8 + 8) + *(float *)(pZVar4 + 0x218));
  cVar3 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar3 == '\0') {
    fVar5 = (float)*(int *)(in_x8 + 8);
  }
  else {
    fVar5 = (float)NewPVPUtils::GetBoardScale();
    fVar5 = fVar5 * (float)*(int *)(in_x8 + 8);
  }
  fVar7 = *(float *)(in_x0 + 0x1c);
  *(int *)(in_x8 + 8) = (int)fVar5;
  fVar5 = (float)FUN_047ca654(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar6 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar5 - (float)iVar1) + (float)iVar2 * fVar6);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar7) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieCrystalSkull::onEnterState_SKULL_Charging(ZombieState) */

void ZombieCrystalSkull::onEnterState_SKULL_Charging(Zombie *param_1)

{
  ZombieCrystalSkullProps *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined4 uVar3;
  
  pZVar1 = Zombie::GetProps<ZombieCrystalSkullProps>(param_1);
  uVar3 = BoardHelpers::ApplyLevelBasedModifierValue(*(float *)(pZVar1 + 0x210),0xe,0xb,1);
  *(undefined4 *)(param_1 + 0x804) = uVar3;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  (**(code **)(*(long *)pZVar2 + 0x268))();
  return;
}


/* ZombieCrystalSkull::updateState_SKULL_Charging() */

void __thiscall ZombieCrystalSkull::updateState_SKULL_Charging(ZombieCrystalSkull *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  ZombieCrystalSkullProps *pZVar2;
  float fVar3;
  
  if ((*(float *)(this + 0x804) <= 0.0) &&
     (cVar1 = (**(code **)(*(long *)this + 0x328))(), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x20);
    return;
  }
  fVar3 = (float)PVZ_Dt();
  *(float *)(this + 0x804) = *(float *)(this + 0x804) - fVar3;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  fVar3 = *(float *)(this + 0x804);
  pZVar2 = Zombie::GetProps<ZombieCrystalSkullProps>((Zombie *)this);
  ZombieAnimRig_CrystalSkull::SetSkullGlow
            ((ZombieAnimRig_CrystalSkull *)this_00,fVar3 / *(float *)(pZVar2 + 0x210));
  return;
}


/* ZombieCrystalSkull::onExitState_SKULL_Firing(ZombieState) */

void ZombieCrystalSkull::onExitState_SKULL_Firing(Zombie *param_1)

{
  ZombieCrystalSkullProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieCrystalSkullProps>(param_1);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(pZVar1 + 0x220);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::onEnterState_SKULL_Arming(ZombieState) */

void ZombieCrystalSkull::onEnterState_SKULL_Arming(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x270);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onArmingDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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
/* ZombieCrystalSkull::onEnterState_SKULL_Firing(ZombieState) */

void ZombieCrystalSkull::onEnterState_SKULL_Firing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x278);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLaserCooledDown");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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
/* ZombieCrystalSkull::canFindLaserTarget() */

void __thiscall ZombieCrystalSkull::canFindLaserTarget(ZombieCrystalSkull *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  GridItem *pGVar7;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  uVar4 = operator|(4,1);
  calcLaserAttackRect();
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,uVar4,(__normal_iterator *)local_30,uVar3,uVar3);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    if (!bVar1) {
      uVar8 = 0;
LAB_047cb784:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    if (((pPVar6 != (Plant *)0x0) &&
        (cVar2 = Zombie::WillTargetPlant((Zombie *)this,pPVar6), cVar2 != '\0')) ||
       ((pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), pGVar7 != (GridItem *)0x0 &&
        ((cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pGVar7),
         cVar2 != '\0' &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x218))(pGVar7,this), cVar2 != '\0')))))) {
      uVar8 = 1;
      goto LAB_047cb784;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* ZombieCrystalSkull::updateState_Walk() */

void __thiscall ZombieCrystalSkull::updateState_Walk(ZombieCrystalSkull *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  if ((*(float *)(this + 0x800) <= 0.0) && (cVar1 = canFindLaserTarget(this), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  fVar3 = (float)PVZ_Dt();
  *(float *)(this + 0x800) = *(float *)(this + 0x800) - fVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::StaticClassInit() */

void ZombieCrystalSkull::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieCrystalSkull");
      (*pcVar4)(plVar1,asStack_150,FUN_047cc0c4,0x808,0);
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
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieCrystalSkull,void(ZombieCrystalSkull::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SKULL_Charging");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047cbd10(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieCrystalSkull,void(ZombieCrystalSkull::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SKULL_Arming");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047cbd10(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieCrystalSkull,void(ZombieCrystalSkull::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieCrystalSkull,void(ZombieCrystalSkull::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SKULL_Firing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047cbd10(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCrystalSkull::StaticGetClass() */

long * ZombieCrystalSkull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCrystalSkull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCrystalSkull::GetClass() const */

long * ZombieCrystalSkull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCrystalSkull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieCrystalSkull::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombieHydraHeadAnimRig *this;
  ZombieCrystalSkullProps *pZVar4;
  AttachedEffect *pAVar5;
  long *plVar6;
  undefined8 uVar7;
  GridItem *pGVar8;
  Plant *pPVar9;
  undefined8 *puVar10;
  Zombie *pZVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  DamageInfo *pDVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  Vec3 aVStack_d0 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c0 [24];
  AttachedEffect aAStack_a8 [64];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"laser_on");
  if (bVar1) {
    this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    ZombieAnimRig_CrystalSkull::SetSkullGlow((ZombieAnimRig_CrystalSkull *)this,1.0);
    cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar2 == '\0') {
      pZVar4 = Zombie::GetProps<ZombieCrystalSkullProps>((Zombie *)param_1);
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      if (cVar2 == '\0') {
        fVar14 = *(float *)(pZVar4 + 0x218);
      }
      else {
        fVar14 = (float)NewPVPUtils::GetBoardScale();
        fVar14 = fVar14 * *(float *)(pZVar4 + 0x218);
      }
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      if (cVar2 == '\0') {
        fVar13 = -38.0;
      }
      else {
        fVar13 = (float)NewPVPUtils::GetBoardScale();
        fVar13 = fVar13 * -38.0;
      }
      EATextSquish::Vec3::Vec3(aVStack_d0,17.0 - fVar14 * 0.5,fVar13,0.0);
      pAVar5 = (AttachedEffect *)
               Zombie::AddAttachedEffect
                         ((Zombie *)param_1,"lazors","POPANIM_EFFECTS_CRYSTALSKULL_BEAM",
                          "laser_beam",(SexyVector3 *)aVStack_d0,0x64960,true);
      AttachedEffect::AttachedEffect(aAStack_a8,pAVar5);
      plVar6 = (long *)AttachedEffect::GetEffect(aAStack_a8);
      uVar12 = (**(code **)(*plVar6 + 0x88))();
      fVar13 = (float)FUN_047ca788(uVar12);
      plVar6 = (long *)AttachedEffect::GetEffect(aAStack_a8);
      (**(code **)(*plVar6 + 0xb8))(fVar14 / fVar13,0x3f800000);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c0);
      uVar12 = SharkMinion::getRow((SharkMinion *)param_1);
      uVar7 = operator|(4,1);
      uVar3 = operator|(uVar7,2);
      calcLaserAttackRect();
      EntityFinder::GetEntitiesTouchingRectangle(avStack_c0,uVar3,aDStack_68,uVar12,uVar12);
      pZVar4 = Zombie::GetProps<ZombieCrystalSkullProps>((Zombie *)param_1);
                    /* WARNING: Load size is inaccurate */
      pDVar15._0_4_ = *(DamageInfo **)(pZVar4 + 0x21c);
      Sexy::Point::Point((Point *)&local_e0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d8,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar15._0_4_,(undefined4)local_d8,local_d8._4_4_,aDStack_68,0x400,param_1,
                 (Point *)&local_e0,0);
      local_e0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_c0);
      local_d8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_c0);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8),
            bVar1) {
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
        pZVar11 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
        if (((pZVar11 != (Zombie *)0x0) &&
            (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)pZVar11),
            cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pZVar11 + 0x328))(pZVar11), cVar2 == '\0')) {
          (**(code **)(*(long *)*puVar10 + 0x110))((long *)*puVar10,aDStack_68);
        }
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
        if (((pGVar8 != (GridItem *)0x0) &&
            (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)pGVar8),
            cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pGVar8 + 0x218))(pGVar8,param_1), cVar2 != '\0')) {
          (**(code **)(*(long *)*puVar10 + 0x110))((long *)*puVar10,aDStack_68);
        }
        pPVar9 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar10);
        if ((pPVar9 != (Plant *)0x0) &&
           (cVar2 = Zombie::WillTargetPlant((Zombie *)param_1,pPVar9), cVar2 != '\0')) {
          (**(code **)(*(long *)*puVar10 + 0x110))((long *)*puVar10,aDStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
      }
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c0);
      AttachedEffect::~AttachedEffect(aAStack_a8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCrystalSkull::onZombieInitialize() */

void __thiscall ZombieCrystalSkull::onZombieInitialize(ZombieCrystalSkull *this)

{
  ZombieCrystalSkullProps *pZVar1;
  ZombieRaSubSystem *pZVar2;
  ZombieHydraHeadAnimRig *this_00;
  code *pcVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieCrystalSkullProps>((Zombie *)this);
  *(undefined4 *)(this + 0x800) = *(undefined4 *)(pZVar1 + 0x210);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = uVar4;
  pZVar2 = Board::GetGameSubSystem<ZombieRaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar3 = *(code **)(*(long *)pZVar2 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar3)(pZVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_CrystalSkull::SetSkullGlow((ZombieAnimRig_CrystalSkull *)this_00,1.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

