// Class: ZombieAnimRig_PirateBarrel


/* ZombieAnimRig_PirateBarrel::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_PirateBarrel::onPopAnimInitialized(ZombieAnimRig_PirateBarrel *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  (**(code **)(*(long *)this + 0x1f8))(this);
  return;
}


/* ZombieAnimRig_PirateBarrel::SetBarrelDamageIndex(int) */

void __thiscall
ZombieAnimRig_PirateBarrel::SetBarrelDamageIndex(ZombieAnimRig_PirateBarrel *this,int param_1)

{
  if (*(int *)(this + 0x240) != param_1) {
    *(int *)(this + 0x240) = param_1;
    (**(code **)(*(long *)this + 0x1f8))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrel::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_PirateBarrel::SetLayerVisibilityForCurrentState(ZombieAnimRig_PirateBarrel *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"barrel_front_normal");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,*(int *)(this + 0x240) == 0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_front_damage_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,*(int *)(this + 0x240) == 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"barrel_front_damage_02");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,*(int *)(this + 0x240) == 2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrel::GetHeadOffset() */

void __thiscall ZombieAnimRig_PirateBarrel::GetHeadOffset(ZombieAnimRig_PirateBarrel *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ResistenceValueInfo aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_18);
  std::string::string(asStack_10,"barrel_side");
  PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,asStack_10,(SexyVector2 *)aRStack_18);
  std::string::~string(asStack_10);
  nop();
  uVar2 = 0x40a00000;
  Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,40.0,5.0);
  uVar1 = Sexy::SexyVector2::operator-((SexyVector2 *)aRStack_18,(SexyVector2 *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateBarrel::StaticClassInit() */

void ZombieAnimRig_PirateBarrel::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_PirateBarrel");
    (*pcVar2)(plVar1,asStack_10,FUN_04606f60,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_PirateBarrel::StaticGetClass() */

long * ZombieAnimRig_PirateBarrel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PirateBarrel::GetClass() const */

long * ZombieAnimRig_PirateBarrel::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel() */

void __thiscall
ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel(ZombieAnimRig_PirateBarrel *this)

{
  *(undefined ***)this = &PTR_GetClass_06871b40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBarrel_06871dc0;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel() */

void __thiscall
ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel(ZombieAnimRig_PirateBarrel *this)

{
  ~ZombieAnimRig_PirateBarrel(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel() */

void __thiscall
ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel(ZombieAnimRig_PirateBarrel *this)

{
  ~ZombieAnimRig_PirateBarrel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel() */

void __thiscall
ZombieAnimRig_PirateBarrel::~ZombieAnimRig_PirateBarrel(ZombieAnimRig_PirateBarrel *this)

{
  ~ZombieAnimRig_PirateBarrel(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateBarrel::ZombieAnimRig_PirateBarrel() */

void __thiscall
ZombieAnimRig_PirateBarrel::ZombieAnimRig_PirateBarrel(ZombieAnimRig_PirateBarrel *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_06871b40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateBarrel_06871dc0;
  return;
}


/* ZombieAnimRig_PirateBarrel::StaticNew() */

ZombieAnimRig_PirateBarrel * ZombieAnimRig_PirateBarrel::StaticNew(void)

{
  ZombieAnimRig_PirateBarrel *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_PirateBarrel(this);
  return this;
}

