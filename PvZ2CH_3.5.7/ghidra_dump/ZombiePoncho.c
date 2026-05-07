// Class: ZombiePoncho


/* ZombiePoncho::~ZombiePoncho() */

void __thiscall ZombiePoncho::~ZombiePoncho(ZombiePoncho *this)

{
  *(undefined ***)this = &PTR_GetClass_068af470;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePoncho_068afe88;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePoncho::~ZombiePoncho() */

void __thiscall ZombiePoncho::~ZombiePoncho(ZombiePoncho *this)

{
  ~ZombiePoncho(this + -0x10);
  return;
}


/* ZombiePoncho::~ZombiePoncho() */

void __thiscall ZombiePoncho::~ZombiePoncho(ZombiePoncho *this)

{
  ~ZombiePoncho(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePoncho::~ZombiePoncho() */

void __thiscall ZombiePoncho::~ZombiePoncho(ZombiePoncho *this)

{
  ~ZombiePoncho(this + -0x10);
  return;
}


/* ZombiePoncho::ZombiePoncho() */

void __thiscall ZombiePoncho::ZombiePoncho(ZombiePoncho *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068af470;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePoncho_068afe88;
  return;
}


/* ZombiePoncho::StaticNew() */

ZombiePoncho * ZombiePoncho::StaticNew(void)

{
  ZombiePoncho *this;
  
  this = ::operator_new(0x808);
  ZombiePoncho(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePoncho::StaticClassInit() */

void ZombiePoncho::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePoncho");
    (*pcVar2)(plVar1,asStack_10,FUN_046b10d8,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePoncho::StaticGetClass() */

long * ZombiePoncho::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePoncho",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePoncho::GetClass() const */

long * ZombiePoncho::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePoncho",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePoncho::onHelmDropped(HelmType, int) */

void ZombiePoncho::onHelmDropped(Zombie *param_1,int param_2)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  undefined8 uVar2;
  ZombiePonchoProps *pZVar3;
  float fVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  if (param_2 == 6) {
    ZombieAnimRig_Poncho::DiscardPoncho((ZombieAnimRig_Poncho *)this);
    ZombieAnimRig_Poncho::GetPonchoSymbolName((ZombieAnimRig_Poncho *)this);
    ZombieAnimRig_Poncho::GetPonchoParticleName((ZombieAnimRig_Poncho *)this);
    uVar2 = SpawnZombieParticle(param_1,asStack_18,asStack_10,1.0);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (param_1[0x804] != (Zombie)0x0) {
      param_1[0x805] = (Zombie)0x1;
      pZVar3 = Zombie::GetProps<ZombiePonchoProps>(param_1);
      fVar5 = *(float *)(pZVar3 + 0x218);
      fVar4 = (float)Zombie::GetExtraHitPointsmodifier(param_1);
      Zombie::setHelm((Zombie *)(fVar4 * fVar5),param_1,7);
      ZombieAnimRig_Poncho::SetHasPlate((ZombieAnimRig_Poncho *)this,true);
    }
LAB_046b1414:
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) goto LAB_046b13d0;
  }
  else if (param_2 != 7) {
    uVar2 = 0;
    goto LAB_046b1414;
  }
  ZombieAnimRig_Poncho::DiscardPlate((ZombieAnimRig_Poncho *)this);
  ZombieAnimRig_Poncho::GetPlateSymbolName((ZombieAnimRig_Poncho *)this);
  ZombieAnimRig_Poncho::GetPlateParticleName();
  uVar2 = SpawnZombieParticle(param_1,asStack_18,asStack_10,0.75);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
LAB_046b13d0:
  (**(code **)(*(long *)this + 0x1f8))(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* ZombiePoncho::CalcProgressMeterHitpoints() const */

int __thiscall ZombiePoncho::CalcProgressMeterHitpoints(ZombiePoncho *this)

{
  int iVar1;
  ZombiePonchoProps *pZVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)FUN_046b0f2c(*(undefined4 *)(this + 0x280));
  iVar1 = FUN_046b0f30(*(undefined4 *)(this + 0xb0));
  if (iVar1 != 6) {
    fVar4 = (float)FUN_046b0f34(*(undefined4 *)(this + 0x2a8));
    return (int)((float)(int)fVar3 + fVar4);
  }
  pZVar2 = Zombie::GetProps<ZombiePonchoProps>((Zombie *)this);
  fVar5 = *(float *)(pZVar2 + 0x218);
  fVar4 = (float)FUN_046b0f34(*(undefined4 *)(this + 0x2a8));
  return (int)((float)(int)((float)(int)fVar3 + fVar5) + fVar4);
}


/* ZombiePoncho::modifyBodyDamage(DamageInfo const&) */

void ZombiePoncho::modifyBodyDamage(DamageInfo *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar3;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  fVar3 = (float)FUN_046b0f2c(*(undefined4 *)(param_1 + 0x280));
  if ((fVar3 <= *(float *)(in_x1 + 8)) && (param_1[0x805] != (DamageInfo)0x0)) {
    uVar2 = operator|(0x20000,2);
    bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x8 + 0x10),uVar2);
    if (!bVar1) {
      *(undefined4 *)(in_x8 + 8) = 0;
      param_1[0x805] = (DamageInfo)0x0;
    }
  }
  return;
}


/* ZombiePoncho::onZombieInitialize() */

void __thiscall ZombiePoncho::onZombieInitialize(ZombiePoncho *this)

{
  ZombiePonchoProps *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  float fVar4;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombiePonchoProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar1 + 0x210);
  fVar3 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::setHelm((Zombie *)(fVar3 * fVar4),this,6);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x1f8))();
  *(undefined4 *)(this + 0x800) = 0;
  this[0x805] = (ZombiePoncho)0x0;
  fVar3 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
  pZVar1 = Zombie::GetProps<ZombiePonchoProps>((Zombie *)this);
  this[0x804] = (ZombiePoncho)(fVar3 <= *(float *)(pZVar1 + 0x214));
  return;
}


/* ZombiePoncho::CalcHelmDamageIndex() const */

undefined8 __thiscall ZombiePoncho::CalcHelmDamageIndex(ZombiePoncho *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_046b0f30(*(undefined4 *)(this + 0xb0));
  if (iVar1 != 6) {
    uVar2 = Zombie::CalcHelmDamageIndex((Zombie *)this);
    return uVar2;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePoncho::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombiePoncho::onTakeHelmDamage(ZombiePoncho *this,DamageInfo *param_1)

{
  int iVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_046b0f30(*(undefined4 *)(this + 0xb0));
  if (iVar1 == 6) {
    __s = "Play_PonchoZombie_ImpactPoncho";
  }
  else {
    if (iVar1 != 7) goto LAB_046b1700;
    __s = "Play_Zomb_WildWest_Poncho_Impact_Metal";
  }
  std::string::string(asStack_10,__s);
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_046b0f30(*(undefined4 *)(this + 0xb0));
  if ((iVar1 == 7) &&
     (iVar1 = *(int *)(this + 0x800), iVar2 = (**(code **)(*(long *)this + 0x208))(this),
     iVar2 != iVar1)) {
    this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Sarcophagus::SetSarcophagusDamageIndex((ZombieAnimRig_Sarcophagus *)this_00,iVar2)
    ;
    *(int *)(this + 0x800) = iVar2;
  }
LAB_046b1700:
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

