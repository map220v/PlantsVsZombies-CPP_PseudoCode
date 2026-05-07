// Class: HydraFlyingFireball


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraFlyingFireball::getAnimName() const */

void __thiscall HydraFlyingFireball::getAnimName(HydraFlyingFireball *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_EFFECT");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraFlyingFireball::getPlayAnim() const */

void __thiscall HydraFlyingFireball::getPlayAnim(HydraFlyingFireball *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"dy01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraFlyingFireball::StaticClassInit() */

void HydraFlyingFireball::StaticClassInit(void)

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
    std::string::string(asStack_10,"HydraFlyingFireball");
    (*pcVar2)(plVar1,asStack_10,FUN_03e84f58,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HydraFlyingFireball::StaticGetClass() */

long * HydraFlyingFireball::StaticGetClass(void)

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
  uVar2 = FlyingFireball::StaticGetClass();
  (*pcVar3)(plVar1,"HydraFlyingFireball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HydraFlyingFireball::GetClass() const */

long * HydraFlyingFireball::GetClass(void)

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
  uVar2 = FlyingFireball::StaticGetClass();
  (*pcVar3)(plVar1,"HydraFlyingFireball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HydraFlyingFireball::createGridTile() */

void HydraFlyingFireball::createGridTile(void)

{
  GridSquareCoveringPoison *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = GameObject::Create<GridSquareCoveringPoison>();
  std::string::string(asStack_10,"Play_Zomboss_Hydra_Poisonl_Land");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* HydraFlyingFireball::HydraFlyingFireball() */

void __thiscall HydraFlyingFireball::HydraFlyingFireball(HydraFlyingFireball *this)

{
  FlyingFireball::FlyingFireball((FlyingFireball *)this);
  *(undefined ***)this = &PTR_GetClass_0678f050;
  *(undefined ***)(this + 0x10) = &PTR__HydraFlyingFireball_0678f250;
  return;
}


/* HydraFlyingFireball::StaticNew() */

HydraFlyingFireball * HydraFlyingFireball::StaticNew(void)

{
  HydraFlyingFireball *this;
  
  this = ::operator_new(0xf8);
  HydraFlyingFireball(this);
  return this;
}


/* HydraFlyingFireball::~HydraFlyingFireball() */

void __thiscall HydraFlyingFireball::~HydraFlyingFireball(HydraFlyingFireball *this)

{
  *(undefined ***)this = &PTR_GetClass_0678f050;
  *(undefined ***)(this + 0x10) = &PTR__HydraFlyingFireball_0678f250;
  FlyingFireball::~FlyingFireball((FlyingFireball *)this);
  return;
}


/* non-virtual thunk to HydraFlyingFireball::~HydraFlyingFireball() */

void __thiscall HydraFlyingFireball::~HydraFlyingFireball(HydraFlyingFireball *this)

{
  ~HydraFlyingFireball(this + -0x10);
  return;
}


/* HydraFlyingFireball::~HydraFlyingFireball() */

void __thiscall HydraFlyingFireball::~HydraFlyingFireball(HydraFlyingFireball *this)

{
  ~HydraFlyingFireball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HydraFlyingFireball::~HydraFlyingFireball() */

void __thiscall HydraFlyingFireball::~HydraFlyingFireball(HydraFlyingFireball *this)

{
  ~HydraFlyingFireball(this + -0x10);
  return;
}

