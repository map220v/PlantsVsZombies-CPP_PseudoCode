// Class: ZombieBasic


/* ZombieBasic::ZombieBasic() */

void __thiscall ZombieBasic::ZombieBasic(ZombieBasic *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0689a810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBasic_0689b238;
  return;
}


/* ZombieBasic::~ZombieBasic() */

void __thiscall ZombieBasic::~ZombieBasic(ZombieBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0689a810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBasic_0689b238;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBasic::~ZombieBasic() */

void __thiscall ZombieBasic::~ZombieBasic(ZombieBasic *this)

{
  ~ZombieBasic(this + -0x10);
  return;
}


/* ZombieBasic::~ZombieBasic() */

void __thiscall ZombieBasic::~ZombieBasic(ZombieBasic *this)

{
  ~ZombieBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBasic::~ZombieBasic() */

void __thiscall ZombieBasic::~ZombieBasic(ZombieBasic *this)

{
  ~ZombieBasic(this + -0x10);
  return;
}


/* ZombieBasic::onSetHelm() */

void __thiscall ZombieBasic::onSetHelm(ZombieBasic *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x208))();
  *(undefined4 *)(this + 0x800) = uVar1;
  (**(code **)(*(long *)this + 0xa08))(this);
  return;
}


/* ZombieBasic::StaticNew() */

ZombieBasic * ZombieBasic::StaticNew(void)

{
  ZombieBasic *this;
  
  this = ::operator_new(0x810);
  ZombieBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBasic::StaticClassInit() */

void ZombieBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0467e9ac,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBasic::StaticGetClass() */

long * ZombieBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBasic::GetClass() const */

long * ZombieBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBasic::PlaySurPrise() */

void __thiscall ZombieBasic::PlaySurPrise(ZombieBasic *this)

{
  if (this[0x804] == (ZombieBasic)0x0) {
    this[0x804] = (ZombieBasic)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBasic::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombieBasic::onTakeHelmDamage(ZombieBasic *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x10000);
  if ((!bVar1) &&
     ((*(RtObject **)param_1 == (RtObject *)0x0 ||
      (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)param_1), !bVar1)))) {
    iVar2 = FUN_0467e83c(*(undefined4 *)(this + 0xb0));
    if ((iVar2 == 2) || (iVar2 == 3)) {
      std::string::string(asStack_10,"Play_impact_shieldhit");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_0467edc4);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
    else if (iVar2 == 1) {
      std::string::string(asStack_10,"Play_impact_plastic");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,_FUN_0467edc4);
      std::string::~string(asStack_10);
      nop();
      BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
    }
  }
  (**(code **)(*(long *)this + 0xa10))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBasic::refreshAnimRigForHelm() */

void __thiscall ZombieBasic::refreshAnimRigForHelm(ZombieBasic *this)

{
  undefined4 uVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  if (pZVar2 != (ZombieHydraHeadAnimRig *)0x0) {
    (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,0);
    uVar1 = FUN_0467e83c(*(undefined4 *)(this + 0xb0));
    switch(uVar1) {
    case 1:
    case 2:
    case 3:
    case 10:
    case 0xd:
    case 0x14:
      (**(code **)(*(long *)pZVar2 + 0x268))(pZVar2,uVar1);
      (**(code **)(*(long *)pZVar2 + 0x270))(pZVar2,*(undefined4 *)(this + 0x800));
    }
    (**(code **)(*(long *)pZVar2 + 0x1f8))(pZVar2);
  }
  return;
}


/* ZombieBasic::SetIsFlagZombie(bool) */

void __thiscall ZombieBasic::SetIsFlagZombie(ZombieBasic *this,bool param_1)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this_00,param_1);
  (**(code **)(*(long *)this_00 + 0x1f8))(this_00);
  return;
}


/* ZombieBasic::refreshHelmDamageState() */

void __thiscall ZombieBasic::refreshHelmDamageState(ZombieBasic *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  iVar1 = *(int *)(this + 0x800);
  iVar2 = (**(code **)(*(long *)this + 0x208))(this);
  if (iVar2 != iVar1) {
    uVar3 = FUN_0467e83c(*(undefined4 *)(this + 0xb0));
    switch(uVar3) {
    case 1:
    case 2:
    case 3:
    case 10:
    case 0xd:
    case 0x14:
      (**(code **)(*(long *)pZVar4 + 0x270))(pZVar4,iVar2);
    }
    (**(code **)(*(long *)pZVar4 + 0x1f8))(pZVar4);
    *(int *)(this + 0x800) = iVar2;
  }
  return;
}


/* ZombieBasic::onHelmDropped(HelmType, int) */

undefined8 ZombieBasic::onHelmDropped(Zombie *param_1,undefined4 param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined8 uVar2;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 10:
  case 0xd:
    (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,0);
    uVar2 = (**(code **)(*(long *)pZVar1 + 0x288))(pZVar1,param_2,param_1);
    break;
  default:
    uVar2 = 0;
  }
  (**(code **)(*(long *)pZVar1 + 0x1f8))(pZVar1);
  return uVar2;
}


/* ZombieBasic::onZombieInitialize() */

void __thiscall ZombieBasic::onZombieInitialize(ZombieBasic *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x804] = (ZombieBasic)0x0;
  this[0x805] = (ZombieBasic)0x0;
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x808) = 0;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Basic::SetHasTanHao((ZombieAnimRig_Basic *)this_00,false);
  (**(code **)(*(long *)this + 0xa08))(this);
  return;
}


/* ZombieBasic::onUpdate() */

void __thiscall ZombieBasic::onUpdate(ZombieBasic *this)

{
  ZombieHydraHeadAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  Zombie::onUpdate((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  lVar1 = FUN_0467e838(*(undefined8 *)(this_00 + 0x20));
  fVar3 = *(float *)(*(long *)(lVar1 + 0x50) + 0xc);
  if (this[0x805] == (ZombieBasic)0x0) {
    if (this[0x804] == (ZombieBasic)0x0) goto LAB_0467f084;
    fVar2 = *(float *)(this + 0x808);
  }
  else {
    if (((*(float *)(this + 0x808) <= fVar3) ||
        (ZombieAnimRig_Basic::SetHasTanHao((ZombieAnimRig_Basic *)this_00,false),
        this[0x804] == (ZombieBasic)0x0)) || (this[0x805] != (ZombieBasic)0x0)) goto LAB_0467f084;
    fVar2 = *(float *)(this + 0x808);
  }
  if (fVar3 < fVar2) {
    ZombieAnimRig_Basic::SetHasTanHao((ZombieAnimRig_Basic *)this_00,true);
    this[0x805] = (ZombieBasic)0x1;
    *(float *)(this + 0x808) = fVar3;
    return;
  }
LAB_0467f084:
  *(float *)(this + 0x808) = fVar3;
  return;
}

