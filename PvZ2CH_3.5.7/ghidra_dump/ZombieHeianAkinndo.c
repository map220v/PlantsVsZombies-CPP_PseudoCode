// Class: ZombieHeianAkinndo


/* ZombieHeianAkinndo::onAnimationDone(StandaloneEffect*) */

void ZombieHeianAkinndo::onAnimationDone(StandaloneEffect *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieHeianAkinndo::~ZombieHeianAkinndo() */

void __thiscall ZombieHeianAkinndo::~ZombieHeianAkinndo(ZombieHeianAkinndo *this)

{
  *(undefined ***)this = &PTR_GetClass_06888970;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianAkinndo_068893b8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieHeianAkinndo::~ZombieHeianAkinndo() */

void __thiscall ZombieHeianAkinndo::~ZombieHeianAkinndo(ZombieHeianAkinndo *this)

{
  ~ZombieHeianAkinndo(this + -0x10);
  return;
}


/* ZombieHeianAkinndo::~ZombieHeianAkinndo() */

void __thiscall ZombieHeianAkinndo::~ZombieHeianAkinndo(ZombieHeianAkinndo *this)

{
  ~ZombieHeianAkinndo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHeianAkinndo::~ZombieHeianAkinndo() */

void __thiscall ZombieHeianAkinndo::~ZombieHeianAkinndo(ZombieHeianAkinndo *this)

{
  ~ZombieHeianAkinndo(this + -0x10);
  return;
}


/* ZombieHeianAkinndo::ZombieHeianAkinndo() */

void __thiscall ZombieHeianAkinndo::ZombieHeianAkinndo(ZombieHeianAkinndo *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06888970;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHeianAkinndo_068893b8;
  return;
}


/* ZombieHeianAkinndo::StaticNew() */

ZombieHeianAkinndo * ZombieHeianAkinndo::StaticNew(void)

{
  ZombieHeianAkinndo *this;
  
  this = ::operator_new(0x808);
  ZombieHeianAkinndo(this);
  return this;
}


/* ZombieHeianAkinndo::IncrementPlantfoodCollected() */

void __thiscall ZombieHeianAkinndo::IncrementPlantfoodCollected(ZombieHeianAkinndo *this)

{
  *(int *)(this + 0x800) = *(int *)(this + 0x800) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::releaseCollectedPlantfood(bool) */

void ZombieHeianAkinndo::releaseCollectedPlantfood(bool param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *this_00;
  ulong uVar1;
  Board *this_01;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x800)) {
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this);
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      fVar2 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      fVar3 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      uVar4 = 0;
      fVar3 = (fVar3 + -0.5) * 10.0;
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      EATextSquish::Vec3::Vec3(aVStack_28,(fVar2 + -0.5) * 10.0,fVar3,0.0);
      local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
      local_14 = fVar3;
      local_10 = uVar4;
      Board::AddPlantfood(this_01,(SexyVector3 *)&local_18,0);
    } while (uVar1 < (ulong)(long)*(int *)(this + 0x800));
    *(undefined4 *)(this + 0x800) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianAkinndo::onMowedDown() */

void __thiscall ZombieHeianAkinndo::onMowedDown(ZombieHeianAkinndo *this)

{
  releaseCollectedPlantfood(SUB81(this,0));
  return;
}


/* ZombieHeianAkinndo::onFlicked(Zombie*) */

void __thiscall ZombieHeianAkinndo::onFlicked(ZombieHeianAkinndo *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)this) {
    return;
  }
  releaseCollectedPlantfood(SUB81(this,0));
  return;
}


/* ZombieHeianAkinndo::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieHeianAkinndo::onChangeTeams(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    return;
  }
  releaseCollectedPlantfood(SUB81(param_1,0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::onTakeFatalDamage(DamageInfo const&) */

void ZombieHeianAkinndo::onTakeFatalDamage(DamageInfo *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  releaseCollectedPlantfood(SUB81(param_1,0));
  std::string::string(asStack_10,"Play_RaZombie_Death");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianAkinndo::ShouldReleasePlantfood() */

char __thiscall ZombieHeianAkinndo::ShouldReleasePlantfood(ZombieHeianAkinndo *this)

{
  char cVar1;
  float *pfVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x20);
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    return 770.0 <= *pfVar2;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::IncrementPlantfoodClaimed() */

void __thiscall ZombieHeianAkinndo::IncrementPlantfoodClaimed(ZombieHeianAkinndo *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x804) = *(int *)(this + 0x804) + 1;
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if ((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,2), cVar1 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar2 + 0x268))();
    std::string::string(asStack_10,"Play_RaZombie_WandActivate");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Play_RaZombie_SunSuck");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHeianAkinndo::CanClaimPlantfood() */

bool __thiscall ZombieHeianAkinndo::CanClaimPlantfood(ZombieHeianAkinndo *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ZombieHeianAkinndoProps *pZVar5;
  float *pfVar6;
  
  cVar3 = ShouldReleasePlantfood(this);
  if ((((cVar3 == '\0') && (cVar3 = Zombie::IsSuspended((Zombie *)this), cVar3 == '\0')) &&
      (cVar3 = RealObject::IsOnTeam(this,1), cVar3 == '\0')) &&
     (iVar4 = *(int *)(this + 0x804), iVar1 = *(int *)(this + 0x800),
     pZVar5 = Zombie::GetProps<ZombieHeianAkinndoProps>((Zombie *)this),
     iVar1 + iVar4 < *(int *)(pZVar5 + 0x210))) {
    if (((DAT_06b1cc40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1cc40), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(8);
      DAT_06b1cc38 = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b1cc40);
    }
    uVar2 = (uint)DAT_06b1cbf8;
    if (((DAT_06b1cbf8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b1cbf8), iVar4 != 0)) {
      iVar4 = BoardTransforms::GridToBoardSpaceX(uVar2 & 1);
      DAT_06b1cbf0 = iVar4 + 0x1e;
      __cxa_guard_release(&DAT_06b1cbf8);
    }
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar6 <= (float)DAT_06b1cc38) {
      return (float)DAT_06b1cbf0 <= *pfVar6;
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::DecrementPlantfoodClaimed() */

void __thiscall ZombieHeianAkinndo::DecrementPlantfoodClaimed(ZombieHeianAkinndo *this)

{
  int iVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x804);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x804) = iVar1 + -1;
  if ((iVar1 + -1 < 1) && (cVar2 = Zombie::isInState((Zombie *)this,0x1f), cVar2 != '\0')) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar4 = *(code **)(*(long *)pZVar3 + 0x270);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Zombie::SetHasPlantFood(SUB81(this,0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHeianAkinndo::onLostHead() */

void __thiscall ZombieHeianAkinndo::onLostHead(ZombieHeianAkinndo *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0x1f);
  if (cVar1 != '\0') {
    while (0 < *(int *)(this + 0x804)) {
      DecrementPlantfoodClaimed(this);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::StaticClassInit() */

void ZombieHeianAkinndo::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieHeianAkinndo");
      (*pcVar4)(plVar1,asStack_150,FUN_04654d38,0x808,0);
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
  Delegate1<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Akinndo_Claiming");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04654a34(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Akinndo_PoweringDown");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04654a34(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHeianAkinndo::StaticGetClass() */

long * ZombieHeianAkinndo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianAkinndo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHeianAkinndo::GetClass() const */

long * ZombieHeianAkinndo::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHeianAkinndo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::onZombieInitialize() */

void __thiscall ZombieHeianAkinndo::onZombieInitialize(ZombieHeianAkinndo *this)

{
  PlantfoodCaptureSubSystem *pPVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x800) = 0;
  pPVar1 = Board::GetGameSubSystem<PlantfoodCaptureSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHeianAkinndo::OverrideProjectileCollision(Projectile*) */

void __thiscall
ZombieHeianAkinndo::OverrideProjectileCollision(ZombieHeianAkinndo *this,Projectile *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  ZombieHeianAkinndoProps *pZVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar9 = *(code **)(*(long *)this + 0xb8);
  if (*(code **)(*(long *)param_1 + 0xc0) == RealObject::GetCollisionFlags) {
    uVar3 = RealObject::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0xc0))(param_1);
  }
  (*pcVar9)(this,uVar3);
  pZVar5 = Zombie::GetProps<ZombieHeianAkinndoProps>((Zombie *)this);
  local_20 = Projectile::GetProps(param_1);
  local_28 = FUN_04653b54(*(undefined8 *)(pZVar5 + 0x228));
  uVar6 = FUN_04653b04(*(undefined8 *)(pZVar5 + 0x220));
  uVar7 = FUN_04653b54(*(undefined8 *)(pZVar5 + 0x228));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ProjectilePropertySheet>const*,std::vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>>,ProjectilePropertySheet_const*>
                       (uVar6,uVar7,&local_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_18);
  if (bVar1) {
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)param_1,0);
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_18 = *puVar8;
    local_10 = *(undefined4 *)(puVar8 + 1);
    pZVar5 = Zombie::GetProps<ZombieHeianAkinndoProps>((Zombie *)this);
    iVar4 = FUN_04653494(*(undefined4 *)(pZVar5 + 0x21c));
    local_18 = CONCAT44(local_18._4_4_,(float)iVar4 + (float)local_18);
    pZVar5 = Zombie::GetProps<ZombieHeianAkinndoProps>((Zombie *)this);
    iVar4 = FUN_04653494(*(undefined4 *)(pZVar5 + 0x214));
    pZVar5 = Zombie::GetProps<ZombieHeianAkinndoProps>((Zombie *)this);
    Projectile::LaunchAt(param_1,(SexyVector3 *)&local_18,(float)iVar4,*(float *)(pZVar5 + 0x218));
    uVar2 = 1;
  }
  else {
    uVar2 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieHeianAkinndo::registerForEvents() */

void __thiscall ZombieHeianAkinndo::registerForEvents(ZombieHeianAkinndo *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zombie::registerForEvents((Zombie *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlicked);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieHeianAkinndo,void(ZombieHeianAkinndo::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieFlicked,&local_40);
  return;
}

