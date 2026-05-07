// Class: ZombiePVPGargantuar


/* ZombiePVPGargantuar::isImpReadyToBeThrown() */

void __thiscall ZombiePVPGargantuar::isImpReadyToBeThrown(ZombiePVPGargantuar *this)

{
  (**(code **)(*(long *)this + 0x4c0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPGargantuar::ApplyZombieFood() */

void __thiscall ZombiePVPGargantuar::ApplyZombieFood(ZombiePVPGargantuar *this)

{
  AttachedEffect *this_00;
  ResourceInfo *pRVar1;
  code *pcVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long lStack_8;
  
  this[0x138] = (ZombiePVPGargantuar)0x1;
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"zombiefood");
  this_00 = (AttachedEffect *)
            GameObjectDictionary::FindOrCreate((GameObjectDictionary *)(this + 0x420),asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_ZOMBIE_ZOMBIE_PVPSKILL_ZOMBIEFOOD");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_00,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  pcVar2 = *(code **)(*(long *)this_00 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-40.0,0.0);
  (*pcVar2)(this_00,this,asStack_18,1);
  std::string::string(asStack_18,"buff");
  AttachedEffect::PlayAnimLooped(this_00,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPGargantuar::~ZombiePVPGargantuar() */

void __thiscall ZombiePVPGargantuar::~ZombiePVPGargantuar(ZombiePVPGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_0691a020;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPGargantuar_0691aa78;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombiePVPGargantuar::~ZombiePVPGargantuar() */

void __thiscall ZombiePVPGargantuar::~ZombiePVPGargantuar(ZombiePVPGargantuar *this)

{
  ~ZombiePVPGargantuar(this + -0x10);
  return;
}


/* ZombiePVPGargantuar::~ZombiePVPGargantuar() */

void __thiscall ZombiePVPGargantuar::~ZombiePVPGargantuar(ZombiePVPGargantuar *this)

{
  ~ZombiePVPGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPGargantuar::~ZombiePVPGargantuar() */

void __thiscall ZombiePVPGargantuar::~ZombiePVPGargantuar(ZombiePVPGargantuar *this)

{
  ~ZombiePVPGargantuar(this + -0x10);
  return;
}


/* ZombiePVPGargantuar::ZombiePVPGargantuar() */

void __thiscall ZombiePVPGargantuar::ZombiePVPGargantuar(ZombiePVPGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined ***)this = &PTR_GetClass_0691a020;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPGargantuar_0691aa78;
  return;
}


/* ZombiePVPGargantuar::StaticNew() */

ZombiePVPGargantuar * ZombiePVPGargantuar::StaticNew(void)

{
  ZombiePVPGargantuar *this;
  
  this = ::operator_new(0x810);
  ZombiePVPGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPGargantuar::StaticClassInit() */

void ZombiePVPGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_049946d4,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPGargantuar::StaticGetClass() */

long * ZombiePVPGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPGargantuar::GetClass() const */

long * ZombiePVPGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPGargantuar::GetRemainImp() */

int __thiscall ZombiePVPGargantuar::GetRemainImp(ZombiePVPGargantuar *this)

{
  return 3 - *(int *)(this + 0x808);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPGargantuar::GetImpTargetColumn() */

void __thiscall ZombiePVPGargantuar::GetImpTargetColumn(ZombiePVPGargantuar *this)

{
  int *piVar1;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10[0] = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  local_10[0] = local_10[0] + -4;
  local_10[1] = 0;
  piVar1 = eastl::max_alt<int>(local_10 + 1,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPGargantuar::ThrowRemainImp() */

void __thiscall ZombiePVPGargantuar::ThrowRemainImp(ZombiePVPGargantuar *this)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  ZombieGargantuarProps *pZVar4;
  code *pcVar5;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,1);
  if (cVar1 == '\0') {
    *(int *)(this + 0x808) = *(int *)(this + 0x808) + 1;
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar3 + 0x168);
    std::string::string(asStack_58,"fire");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnSkillThrowEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombiePVPGargantuar,void(ZombiePVPGargantuar::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    uVar2 = (*pcVar5)(plVar3,asStack_58,0,aDStack_38);
    *(undefined4 *)(this + 0x804) = uVar2;
    std::string::~string(asStack_58);
    nop();
    pZVar4 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar4 + 0x260),0.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPGargantuar::onEnterState_ThrowImp(ZombieState) */

void ZombiePVPGargantuar::onEnterState_ThrowImp(Zombie *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  ZombieGargantuarProps *pZVar4;
  code *pcVar5;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x808) = *(int *)(param_1 + 0x808) + 1;
    plVar3 = (long *)Zombie::GetAnimRig(param_1);
    pcVar5 = *(code **)(*plVar3 + 0x168);
    std::string::string(asStack_58,"fire");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,OnSkillThrowEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombiePVPGargantuar,void(ZombiePVPGargantuar::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    uVar2 = (*pcVar5)(plVar3,asStack_58,0,aDStack_38);
    *(undefined4 *)(param_1 + 0x804) = uVar2;
    std::string::~string(asStack_58);
    nop();
    pZVar4 = Zombie::GetProps<ZombieGargantuarProps>(param_1);
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar4 + 0x260),0.0);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPGargantuar::OnSkillThrowEnd(std::string const&) */

void ZombiePVPGargantuar::OnSkillThrowEnd(string *param_1)

{
  int iVar1;
  ZombieGargantuarProps *pZVar2;
  ZombieHydraHeadAnimRig *this;
  long lVar3;
  
  iVar1 = GetRemainImp((ZombiePVPGargantuar *)param_1);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x808) = 0;
    (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
  }
  else {
    ThrowRemainImp((ZombiePVPGargantuar *)param_1);
  }
  pZVar2 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)param_1);
  *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + -1;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  lVar3 = FUN_049944c0(*(undefined8 *)(pZVar2 + 0x210),*(undefined4 *)(param_1 + 0x800));
  ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
            ((ZombieAnimRig_Gargantuar *)this,(vector *)(lVar3 + 8),true);
  return;
}

