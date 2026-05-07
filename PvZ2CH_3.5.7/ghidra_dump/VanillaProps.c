// Class: VanillaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaProps::StaticClassInit() */

void VanillaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03966708,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaProps::StaticGetClass() */

long * VanillaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProps::GetClass() const */

long * VanillaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaProps::VanillaProps() */

void __thiscall VanillaProps::VanillaProps(VanillaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066d4d80;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e0));
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined4 *)(this + 0x2d4) = 1;
  *(undefined4 *)(this + 0x2d8) = 1;
  *(undefined4 *)(this + 0x2dc) = 1;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x308) = 0x3e800000;
  *(undefined4 *)(this + 0x310) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c0) = 0x42c80000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x314) = 0x42a00000;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0x42c80000;
  return;
}


/* VanillaProps::StaticNew() */

VanillaProps * VanillaProps::StaticNew(void)

{
  VanillaProps *this;
  
  this = ::operator_new(800);
  VanillaProps(this);
  return this;
}


/* VanillaProps::~VanillaProps() */

void __thiscall VanillaProps::~VanillaProps(VanillaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d4d80;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* VanillaProps::~VanillaProps() */

void __thiscall VanillaProps::~VanillaProps(VanillaProps *this)

{
  ~VanillaProps(this);
  AK::FreeHook(this);
  return;
}

