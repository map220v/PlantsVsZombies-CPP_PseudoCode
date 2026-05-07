// Class: LancerHoyaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LancerHoyaProps::StaticClassInit() */

void LancerHoyaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LancerHoyaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d04610,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LancerHoyaProps::StaticGetClass() */

long * LancerHoyaProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"LancerHoyaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LancerHoyaProps::GetClass() const */

long * LancerHoyaProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"LancerHoyaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LancerHoyaProps::LancerHoyaProps() */

void __thiscall LancerHoyaProps::LancerHoyaProps(LancerHoyaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a61e0;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x418c0000;
  *(undefined4 *)(this + 700) = 0x41a00000;
  *(undefined4 *)(this + 0x2cc) = 0x42b40000;
  *(undefined4 *)(this + 0x2c4) = 0x41700000;
  *(undefined4 *)(this + 0x2d0) = 0x43fa0000;
  *(undefined4 *)(this + 0x2c8) = 0x3fc00000;
  *(undefined4 *)(this + 0x2d4) = 0x42c80000;
  return;
}


/* LancerHoyaProps::StaticNew() */

LancerHoyaProps * LancerHoyaProps::StaticNew(void)

{
  LancerHoyaProps *this;
  
  this = ::operator_new(0x300);
  LancerHoyaProps(this);
  return this;
}


/* LancerHoyaProps::~LancerHoyaProps() */

void __thiscall LancerHoyaProps::~LancerHoyaProps(LancerHoyaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a61e0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LancerHoyaProps::~LancerHoyaProps() */

void __thiscall LancerHoyaProps::~LancerHoyaProps(LancerHoyaProps *this)

{
  ~LancerHoyaProps(this);
  AK::FreeHook(this);
  return;
}

