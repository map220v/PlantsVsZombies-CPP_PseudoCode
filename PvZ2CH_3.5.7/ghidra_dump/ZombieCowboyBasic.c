// Class: ZombieCowboyBasic


/* ZombieCowboyBasic::StaticGetClass() */

long * ZombieCowboyBasic::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCowboyBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieCowboyBasic::GetClass() const */

long * ZombieCowboyBasic::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCowboyBasic",uVar2,StaticNew);
  return sClass;
}


/* ZombieCowboyBasic::~ZombieCowboyBasic() */

void __thiscall ZombieCowboyBasic::~ZombieCowboyBasic(ZombieCowboyBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068a13e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCowboyBasic_068a1e08;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieCowboyBasic::~ZombieCowboyBasic() */

void __thiscall ZombieCowboyBasic::~ZombieCowboyBasic(ZombieCowboyBasic *this)

{
  ~ZombieCowboyBasic(this + -0x10);
  return;
}


/* ZombieCowboyBasic::~ZombieCowboyBasic() */

void __thiscall ZombieCowboyBasic::~ZombieCowboyBasic(ZombieCowboyBasic *this)

{
  ~ZombieCowboyBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCowboyBasic::~ZombieCowboyBasic() */

void __thiscall ZombieCowboyBasic::~ZombieCowboyBasic(ZombieCowboyBasic *this)

{
  ~ZombieCowboyBasic(this + -0x10);
  return;
}


/* ZombieCowboyBasic::ZombieCowboyBasic() */

void __thiscall ZombieCowboyBasic::ZombieCowboyBasic(ZombieCowboyBasic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068a13e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCowboyBasic_068a1e08;
  return;
}


/* ZombieCowboyBasic::StaticNew() */

ZombieCowboyBasic * ZombieCowboyBasic::StaticNew(void)

{
  ZombieCowboyBasic *this;
  
  this = ::operator_new(0x810);
  ZombieCowboyBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCowboyBasic::onHelmDropped(HelmType, int) */

void ZombieCowboyBasic::onHelmDropped(Zombie *param_1,int param_2)

{
  undefined8 uVar1;
  PopAnimRig *this;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 8) {
    std::string::string(asStack_18,"cowboy_hat");
    std::string::string(asStack_10,"particle_hat");
    uVar1 = SpawnZombieParticle(param_1,asStack_18,asStack_10,0.75);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
    std::string::string(asStack_10,"cowboy_hat");
    PopAnimRig::SetLayerVisibility(this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    uVar1 = ZombieBasic::onHelmDropped();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCowboyBasic::onTakeHelmDamage(DamageInfo const&) */

void __thiscall ZombieCowboyBasic::onTakeHelmDamage(ZombieCowboyBasic *this,DamageInfo *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04690f14(*(undefined4 *)(this + 0xb0));
  if (iVar2 == 8) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x20);
    if ((!bVar1) && (bVar1 = TestFlag<DamageTypeFlags>(uVar3,2), !bVar1)) {
      DamageInfo::DamageInfo(aDStack_68,param_1);
      SetFlag<DamageTypeFlags>(auStack_58,8,1);
      (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  ZombieBasic::onTakeHelmDamage((ZombieBasic *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

