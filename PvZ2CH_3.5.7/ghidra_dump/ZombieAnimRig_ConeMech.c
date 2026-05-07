// Class: ZombieAnimRig_ConeMech


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ConeMech::SetDamageState(int) */

void __thiscall ZombieAnimRig_ConeMech::SetDamageState(ZombieAnimRig_ConeMech *this,int param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"damage1_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage2_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage3_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_cone_top");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 4);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 5;
  std::string::string(asStack_10,"damage5_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_cone_top");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_mouth1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_mouth2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_mouth3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = param_1 == 6;
  std::string::string(asStack_10,"damage6_cone_main");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_cone_top");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_mouth1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_mouth2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_mouth3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech() */

void __thiscall ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech(ZombieAnimRig_ConeMech *this)

{
  *(undefined ***)this = &PTR_GetClass_06870d70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ConeMech_06870ff0;
  ZombieAnimRig_Mech::~ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech() */

void __thiscall ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech(ZombieAnimRig_ConeMech *this)

{
  ~ZombieAnimRig_ConeMech(this + -0x10);
  return;
}


/* ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech() */

void __thiscall ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech(ZombieAnimRig_ConeMech *this)

{
  ~ZombieAnimRig_ConeMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech() */

void __thiscall ZombieAnimRig_ConeMech::~ZombieAnimRig_ConeMech(ZombieAnimRig_ConeMech *this)

{
  ~ZombieAnimRig_ConeMech(this + -0x10);
  return;
}


/* ZombieAnimRig_ConeMech::ZombieAnimRig_ConeMech() */

void __thiscall ZombieAnimRig_ConeMech::ZombieAnimRig_ConeMech(ZombieAnimRig_ConeMech *this)

{
  ZombieAnimRig_Mech::ZombieAnimRig_Mech((ZombieAnimRig_Mech *)this);
  *(undefined ***)this = &PTR_GetClass_06870d70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ConeMech_06870ff0;
  return;
}


/* ZombieAnimRig_ConeMech::StaticNew() */

ZombieAnimRig_ConeMech * ZombieAnimRig_ConeMech::StaticNew(void)

{
  ZombieAnimRig_ConeMech *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ConeMech(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ConeMech::StaticClassInit() */

void ZombieAnimRig_ConeMech::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ConeMech");
    (*pcVar2)(plVar1,asStack_10,FUN_04603db8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ConeMech::StaticGetClass() */

long * ZombieAnimRig_ConeMech::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ConeMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ConeMech::GetClass() const */

long * ZombieAnimRig_ConeMech::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ConeMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

