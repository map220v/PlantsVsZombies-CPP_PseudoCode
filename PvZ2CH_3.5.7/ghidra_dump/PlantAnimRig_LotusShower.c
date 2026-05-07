// Class: PlantAnimRig_LotusShower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LotusShower::getIdleAnimationName() */

void __thiscall PlantAnimRig_LotusShower::getIdleAnimationName(PlantAnimRig_LotusShower *this)

{
  int iVar1;
  string *psVar2;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = asStack_10;
  std::string::string(in_x8,"IDLE");
  nop();
  iVar1 = Sexy::Rand(2);
  if (iVar1 == 1) {
    psVar2 = std::string::append(in_x8,"IDLEFREE",(size_t)psVar2);
    FUN_05475d88(asStack_10,psVar2);
    std::string::~string(asStack_10);
  }
  else {
    std::string::string(asStack_10,"IDLE");
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower() */

void __thiscall PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower(PlantAnimRig_LotusShower *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1c40;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LotusShower_067d1ea8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower() */

void __thiscall PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower(PlantAnimRig_LotusShower *this)

{
  ~PlantAnimRig_LotusShower(this + -0x10);
  return;
}


/* PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower() */

void __thiscall PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower(PlantAnimRig_LotusShower *this)

{
  ~PlantAnimRig_LotusShower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower() */

void __thiscall PlantAnimRig_LotusShower::~PlantAnimRig_LotusShower(PlantAnimRig_LotusShower *this)

{
  ~PlantAnimRig_LotusShower(this + -0x10);
  return;
}


/* PlantAnimRig_LotusShower::PlantAnimRig_LotusShower() */

void __thiscall PlantAnimRig_LotusShower::PlantAnimRig_LotusShower(PlantAnimRig_LotusShower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d1c40;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_LotusShower_067d1ea8;
  return;
}


/* PlantAnimRig_LotusShower::StaticNew() */

PlantAnimRig_LotusShower * PlantAnimRig_LotusShower::StaticNew(void)

{
  PlantAnimRig_LotusShower *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_LotusShower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_LotusShower::StaticClassInit() */

void PlantAnimRig_LotusShower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_LotusShower");
    (*pcVar2)(plVar1,asStack_10,FUN_040a76c0,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_LotusShower::StaticGetClass() */

long * PlantAnimRig_LotusShower::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_LotusShower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_LotusShower::GetClass() const */

long * PlantAnimRig_LotusShower::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_LotusShower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

