// Class: ZombieAnimRig_FootballMech


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FootballMech::SetDamageState(int) */

void __thiscall
ZombieAnimRig_FootballMech::SetDamageState(ZombieAnimRig_FootballMech *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"damage1_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage2_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage3_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_leg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_leg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 6);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_leg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 6);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech() */

void __thiscall
ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech(ZombieAnimRig_FootballMech *this)

{
  *(undefined ***)this = &PTR_GetClass_06871030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FootballMech_068712b0;
  ZombieAnimRig_Mech::~ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech() */

void __thiscall
ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech(ZombieAnimRig_FootballMech *this)

{
  ~ZombieAnimRig_FootballMech(this + -0x10);
  return;
}


/* ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech() */

void __thiscall
ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech(ZombieAnimRig_FootballMech *this)

{
  ~ZombieAnimRig_FootballMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech() */

void __thiscall
ZombieAnimRig_FootballMech::~ZombieAnimRig_FootballMech(ZombieAnimRig_FootballMech *this)

{
  ~ZombieAnimRig_FootballMech(this + -0x10);
  return;
}


/* ZombieAnimRig_FootballMech::ZombieAnimRig_FootballMech() */

void __thiscall
ZombieAnimRig_FootballMech::ZombieAnimRig_FootballMech(ZombieAnimRig_FootballMech *this)

{
  ZombieAnimRig_Mech::ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  *(undefined ***)this = &PTR_GetClass_06871030;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_FootballMech_068712b0;
  return;
}


/* ZombieAnimRig_FootballMech::StaticNew() */

ZombieAnimRig_FootballMech * ZombieAnimRig_FootballMech::StaticNew(void)

{
  ZombieAnimRig_FootballMech *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_FootballMech(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_FootballMech::StaticClassInit() */

void ZombieAnimRig_FootballMech::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_FootballMech");
    (*pcVar2)(plVar1,asStack_10,FUN_04604030,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_FootballMech::StaticGetClass() */

long * ZombieAnimRig_FootballMech::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FootballMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_FootballMech::GetClass() const */

long * ZombieAnimRig_FootballMech::GetClass(void)

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
  uVar2 = ZombieAnimRig_Mech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_FootballMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

