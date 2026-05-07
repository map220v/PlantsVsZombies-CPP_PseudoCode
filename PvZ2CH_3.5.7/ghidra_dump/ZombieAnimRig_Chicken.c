// Class: ZombieAnimRig_Chicken


/* ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken() */

void __thiscall ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken(ZombieAnimRig_Chicken *this)

{
  *(undefined ***)this = &PTR_GetClass_0686dd80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Chicken_0686dff8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken() */

void __thiscall ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken(ZombieAnimRig_Chicken *this)

{
  ~ZombieAnimRig_Chicken(this + -0x10);
  return;
}


/* ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken() */

void __thiscall ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken(ZombieAnimRig_Chicken *this)

{
  ~ZombieAnimRig_Chicken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken() */

void __thiscall ZombieAnimRig_Chicken::~ZombieAnimRig_Chicken(ZombieAnimRig_Chicken *this)

{
  ~ZombieAnimRig_Chicken(this + -0x10);
  return;
}


/* ZombieAnimRig_Chicken::ZombieAnimRig_Chicken() */

void __thiscall ZombieAnimRig_Chicken::ZombieAnimRig_Chicken(ZombieAnimRig_Chicken *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0686dd80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Chicken_0686dff8;
  Sexy::Color::Color((Color *)(this + 0x240));
  this[0x250] = (ZombieAnimRig_Chicken)0x0;
  return;
}


/* ZombieAnimRig_Chicken::StaticNew() */

ZombieAnimRig_Chicken * ZombieAnimRig_Chicken::StaticNew(void)

{
  ZombieAnimRig_Chicken *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_Chicken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chicken::StaticClassInit() */

void ZombieAnimRig_Chicken::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Chicken");
    (*pcVar2)(plVar1,asStack_10,FUN_045f9424,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Chicken::StaticGetClass() */

long * ZombieAnimRig_Chicken::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Chicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Chicken::GetClass() const */

long * ZombieAnimRig_Chicken::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Chicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Chicken::SetColor(Sexy::Color const&) */

void __thiscall ZombieAnimRig_Chicken::SetColor(ZombieAnimRig_Chicken *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x240) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x248) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chicken::SetBoneLegVisibility(bool) */

void __thiscall
ZombieAnimRig_Chicken::SetBoneLegVisibility(ZombieAnimRig_Chicken *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"chicken_leg_outer");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,!param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"chicken_leg_outer_bone");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Chicken::PlayDie() */

void __thiscall ZombieAnimRig_Chicken::PlayDie(ZombieAnimRig_Chicken *this)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x250] == (ZombieAnimRig_Chicken)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    pcVar2 = *(code **)(*(long *)this + 0x168);
    std::string::string(asStack_40,"chicken_bucket");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

