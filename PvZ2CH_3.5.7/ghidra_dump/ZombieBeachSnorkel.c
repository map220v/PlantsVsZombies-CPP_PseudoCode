// Class: ZombieBeachSnorkel


/* ZombieBeachSnorkel::updateState_SnorkelSubmerge() */

void __thiscall ZombieBeachSnorkel::updateState_SnorkelSubmerge(ZombieBeachSnorkel *this)

{
  if (this[0x800] != (ZombieBeachSnorkel)0x0) {
    (**(code **)(*(long *)this + 0x260))();
  }
  return;
}


/* ZombieBeachSnorkel::onSubmergeAnimFinished(std::string const&) */

void ZombieBeachSnorkel::onSubmergeAnimFinished(string *param_1)

{
  param_1[0x800] = (string)0x1;
  return;
}


/* ZombieBeachSnorkel::~ZombieBeachSnorkel() */

void __thiscall ZombieBeachSnorkel::~ZombieBeachSnorkel(ZombieBeachSnorkel *this)

{
  *(undefined ***)this = &PTR_GetClass_06885950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachSnorkel_06886398;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBeachSnorkel::~ZombieBeachSnorkel() */

void __thiscall ZombieBeachSnorkel::~ZombieBeachSnorkel(ZombieBeachSnorkel *this)

{
  ~ZombieBeachSnorkel(this + -0x10);
  return;
}


/* ZombieBeachSnorkel::~ZombieBeachSnorkel() */

void __thiscall ZombieBeachSnorkel::~ZombieBeachSnorkel(ZombieBeachSnorkel *this)

{
  ~ZombieBeachSnorkel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBeachSnorkel::~ZombieBeachSnorkel() */

void __thiscall ZombieBeachSnorkel::~ZombieBeachSnorkel(ZombieBeachSnorkel *this)

{
  ~ZombieBeachSnorkel(this + -0x10);
  return;
}


/* ZombieBeachSnorkel::ZombieBeachSnorkel() */

void __thiscall ZombieBeachSnorkel::ZombieBeachSnorkel(ZombieBeachSnorkel *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x800] = (ZombieBeachSnorkel)0x0;
  *(undefined ***)this = &PTR_GetClass_06885950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachSnorkel_06886398;
  return;
}


/* ZombieBeachSnorkel::StaticNew() */

ZombieBeachSnorkel * ZombieBeachSnorkel::StaticNew(void)

{
  ZombieBeachSnorkel *this;
  
  this = ::operator_new(0x808);
  ZombieBeachSnorkel(this);
  return this;
}


/* ZombieBeachSnorkel::updateState_SnorkelEmerge() */

void __thiscall ZombieBeachSnorkel::updateState_SnorkelEmerge(ZombieBeachSnorkel *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  long lVar2;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  cVar1 = ZombieAnimRig_BeachSnorkel::PROTOTYPE_IsLerping((ZombieAnimRig_BeachSnorkel *)this_00);
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*(long *)this + 0x228))(this);
    if (lVar2 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
      return;
    }
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSnorkel::onEnterState_SnorkelEmerge(ZombieState) */

void ZombieBeachSnorkel::onEnterState_SnorkelEmerge(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_BeachSnorkel::PlayEmerge((ZombieAnimRig_BeachSnorkel *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::string(asStack_58,"Play_Zomb_Beach_Snorkel_Change_Lanes");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  param_1[0x800] = (Zombie)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSnorkel::onEnterState_SnorkelSubmerge(ZombieState) */

void ZombieBeachSnorkel::onEnterState_SnorkelSubmerge(Zombie *param_1)

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
  std::string::string(asStack_58,"onSubmergeAnimFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_BeachSnorkel::PlaySubmerge((ZombieAnimRig_BeachSnorkel *)pZVar1,aRStack_50);
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
/* ZombieBeachSnorkel::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieBeachSnorkel::CanBeTargetedByPlant
          (ZombieBeachSnorkel *this,RtMixedPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  ZombieBeachSnorkelProps *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  PlantType *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if ((cVar1 == '\0') || (this[0x800] == (ZombieBeachSnorkel)0x0)) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_2);
    bVar2 = Zombie::CanBeTargetedByPlant
                      ((Zombie *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  else {
    pZVar4 = Zombie::GetProps<ZombieBeachSnorkelProps>((Zombie *)this);
    uVar5 = FUN_046491dc(*(undefined8 *)(pZVar4 + 0x210));
    uVar6 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x218));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,lVar7 + 8);
    local_10 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x218));
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar7 = PlantType::GetProps(this_00);
    bVar2 = *(byte *)(lVar7 + 0x24a) | bVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSnorkel::canBeDamagedByAttack(Plant*, DamageTypeFlags) */

void __thiscall
ZombieBeachSnorkel::canBeDamagedByAttack(ZombieBeachSnorkel *this,long param_1,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  ZombieBeachSnorkelProps *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(0x1000000,param_3);
  if ((!bVar1) && (bVar1 = TestFlag<DamageTypeFlags>(0x4000000,param_3), !bVar1)) {
    if (param_1 == 0) goto LAB_04649ad8;
    Plant::GetType();
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    pZVar4 = Zombie::GetProps<ZombieBeachSnorkelProps>((Zombie *)this);
    uVar5 = FUN_046491dc(*(undefined8 *)(pZVar4 + 0x228));
    uVar6 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x230));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,pRVar3 + 8);
    local_10 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x230));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      bVar2 = TestFlag<DamageTypeFlags>(0x2000,param_3);
      bVar1 = false;
      if (bVar2) {
        uVar5 = FUN_046491dc(*(undefined8 *)(pZVar4 + 0x240));
        uVar6 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x248));
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                             (uVar5,uVar6,pRVar3 + 8);
        local_10 = FUN_0464922c(*(undefined8 *)(pZVar4 + 0x248));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
      }
      goto LAB_04649ad8;
    }
  }
  bVar1 = true;
LAB_04649ad8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSnorkel::StaticClassInit() */

void ZombieBeachSnorkel::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBeachSnorkel");
      (*pcVar4)(plVar1,asStack_150,FUN_0464a364,0x808,0);
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
  Delegate1<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SNORKEL_Submerge");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0464a060(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieBeachSnorkel,void(ZombieBeachSnorkel::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_SNORKEL_Emerge");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0464a060(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBeachSnorkel::StaticGetClass() */

long * ZombieBeachSnorkel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSnorkel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachSnorkel::GetClass() const */

long * ZombieBeachSnorkel::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSnorkel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachSnorkel::onPlaceOnBoard() */

void __thiscall ZombieBeachSnorkel::onPlaceOnBoard(ZombieBeachSnorkel *this)

{
  ZombieBeachSnorkel ZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  ZVar1 = (ZombieBeachSnorkel)Zombie::IsInWater((Zombie *)this);
  this[0x800] = ZVar1;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_BeachSnorkel::PROTOTYPE_SetSubmerged
            ((ZombieAnimRig_BeachSnorkel *)this_00,(bool)this[0x800]);
  return;
}


/* ZombieBeachSnorkel::onPlaceOnStreet() */

void __thiscall ZombieBeachSnorkel::onPlaceOnStreet(ZombieBeachSnorkel *this)

{
  ZombieBeachSnorkel ZVar1;
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onPlaceOnStreet((Zombie *)this);
  ZVar1 = (ZombieBeachSnorkel)Zombie::IsInWater((Zombie *)this);
  this[0x800] = ZVar1;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_BeachSnorkel::PROTOTYPE_SetSubmerged
            ((ZombieAnimRig_BeachSnorkel *)this_00,(bool)this[0x800]);
  return;
}


/* ZombieBeachSnorkel::updateState_Walk() */

void __thiscall ZombieBeachSnorkel::updateState_Walk(ZombieBeachSnorkel *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Zombie::IsInWater((Zombie *)this);
  if ((cVar1 != '\0') && (this[0x800] == (ZombieBeachSnorkel)0x0)) {
    Zombie::setZombieState((Zombie *)this,0x1f);
    return;
  }
  cVar1 = Zombie::IsInWater((Zombie *)this);
  if (cVar1 == '\0') {
    if (this[0x800] != (ZombieBeachSnorkel)0x0) {
      Zombie::setZombieState((Zombie *)this,0x20);
      return;
    }
  }
  else if ((this[0x800] != (ZombieBeachSnorkel)0x0) &&
          (lVar2 = (**(code **)(*(long *)this + 0x228))(this), lVar2 != 0)) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieBeachSnorkel::TakeDamage(DamageInfo const&) */

void __thiscall ZombieBeachSnorkel::TakeDamage(ZombieBeachSnorkel *this,DamageInfo *param_1)

{
  char cVar1;
  Plant *pPVar2;
  
  if ((*(RtObject **)param_1 != (RtObject *)0x0) && (this[0x800] != (ZombieBeachSnorkel)0x0)) {
    pPVar2 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1);
    cVar1 = canBeDamagedByAttack(this,pPVar2,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      Zombie::TakeDamage((Zombie *)this,param_1);
    }
    if (pPVar2 != (Plant *)0x0) {
      return;
    }
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}


/* ZombieBeachSnorkel::OverrideProjectileCollision(Projectile*) */

ulong __thiscall
ZombieBeachSnorkel::OverrideProjectileCollision(ZombieBeachSnorkel *this,Projectile *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  RtObject *this_00;
  ulong uVar5;
  long extraout_x0;
  undefined8 uVar6;
  
  if (this[0x800] == (ZombieBeachSnorkel)0x0) {
    uVar5 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
    return uVar5;
  }
  if ((param_1 != (Projectile *)0x0) && (lVar4 = Projectile::GetInstigator(param_1), lVar4 != 0)) {
    this_00 = (RtObject *)Projectile::GetInstigator(param_1);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_00);
    if (bVar1) {
      Projectile::GetInstigator(param_1);
      nop();
      if (extraout_x0 != 0) {
        uVar6 = FUN_04648b44(*(undefined8 *)(param_1 + 0xe0));
        uVar3 = canBeDamagedByAttack(this,extraout_x0,uVar6);
        return (ulong)(uVar3 & 0xff ^ 1);
      }
    }
  }
  bVar2 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
  uVar5 = (ulong)bVar2;
  if (bVar2 != 0) {
    uVar3 = Projectile::IsLobbed(param_1);
    uVar5 = (ulong)(uVar3 & 0xff ^ 1);
  }
  return uVar5;
}


/* ZombieBeachSnorkel::calcTideDepth(Sexy::SexyVector3 const&, float) */

void ZombieBeachSnorkel::calcTideDepth(SexyVector3 *param_1,float param_2)

{
  ZombieHydraHeadAnimRig *this;
  SexyVector3 *in_x1;
  float fVar1;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  fVar1 = (float)ZombieAnimRig_BeachSnorkel::PROTOTYPE_GetVerticalOffset
                           ((ZombieAnimRig_BeachSnorkel *)this);
  RealObject::calcTideDepth((RealObject *)param_1,in_x1,fVar1);
  return;
}

