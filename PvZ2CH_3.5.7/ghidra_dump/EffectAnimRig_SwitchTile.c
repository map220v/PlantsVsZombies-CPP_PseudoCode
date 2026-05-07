// Class: EffectAnimRig_SwitchTile


/* EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile() */

void __thiscall EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile(EffectAnimRig_SwitchTile *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e470;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SwitchTile_0675e590;
  std::string::~string((string *)(this + 0x218));
  std::string::~string((string *)(this + 0x210));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile() */

void __thiscall EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile(EffectAnimRig_SwitchTile *this)

{
  ~EffectAnimRig_SwitchTile(this + -0x10);
  return;
}


/* EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile() */

void __thiscall EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile(EffectAnimRig_SwitchTile *this)

{
  ~EffectAnimRig_SwitchTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile() */

void __thiscall EffectAnimRig_SwitchTile::~EffectAnimRig_SwitchTile(EffectAnimRig_SwitchTile *this)

{
  ~EffectAnimRig_SwitchTile(this + -0x10);
  return;
}


/* EffectAnimRig_SwitchTile::EffectAnimRig_SwitchTile() */

void __thiscall EffectAnimRig_SwitchTile::EffectAnimRig_SwitchTile(EffectAnimRig_SwitchTile *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675e470;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SwitchTile_0675e590;
  Set8BytesTo0(this + 0x210);
  Set8BytesTo0(this + 0x218);
  return;
}


/* EffectAnimRig_SwitchTile::StaticNew() */

EffectAnimRig_SwitchTile * EffectAnimRig_SwitchTile::StaticNew(void)

{
  EffectAnimRig_SwitchTile *this;
  
  this = ::operator_new(0x220);
  EffectAnimRig_SwitchTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SwitchTile::StaticClassInit() */

void EffectAnimRig_SwitchTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_SwitchTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbc944,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_SwitchTile::StaticGetClass() */

long * EffectAnimRig_SwitchTile::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_SwitchTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_SwitchTile::GetClass() const */

long * EffectAnimRig_SwitchTile::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_SwitchTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SwitchTile::PlaySwitchUp() */

void __thiscall EffectAnimRig_SwitchTile::PlaySwitchUp(EffectAnimRig_SwitchTile *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,this + 0x210,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SwitchTile::PlaySwitchDown() */

void __thiscall EffectAnimRig_SwitchTile::PlaySwitchDown(EffectAnimRig_SwitchTile *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,this + 0x218,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SwitchTile::SetBaseAnimName(std::string const&) */

void __thiscall
EffectAnimRig_SwitchTile::SetBaseAnimName(EffectAnimRig_SwitchTile *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    std::operator+(param_1,"_up");
    FUN_05474278(this + 0x210,asStack_10);
    std::string::~string(asStack_10);
    std::operator+(param_1,"_down");
    FUN_05474278(this + 0x218,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_SwitchTile::onPopAnimInitialized() */

void __thiscall EffectAnimRig_SwitchTile::onPopAnimInitialized(EffectAnimRig_SwitchTile *this)

{
  size_t in_x2;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  std::string::append((string *)(this + 0x210),"up",in_x2);
  std::string::append((string *)(this + 0x218),"down",in_x2);
  return;
}

