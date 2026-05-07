// Class: ZombieExcavatorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExcavatorProps::StaticClassInit() */

void ZombieExcavatorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieExcavatorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047cd924,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExcavatorProps::StaticGetClass() */

long * ZombieExcavatorProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExcavatorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExcavatorProps::GetClass() const */

long * ZombieExcavatorProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieExcavatorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExcavatorProps::ZombieExcavatorProps() */

void __thiscall ZombieExcavatorProps::ZombieExcavatorProps(ZombieExcavatorProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x214) = 3;
  *(undefined ***)this = &PTR_GetClass_068e61b0;
  *(undefined4 *)(this + 0x218) = 0xffffffe2;
  *(undefined4 *)(this + 0x210) = 0x42f00000;
  Sexy::Insets::Insets((Insets *)(this + 0x21c));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x230));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 600));
  return;
}


/* ZombieExcavatorProps::StaticNew() */

ZombieExcavatorProps * ZombieExcavatorProps::StaticNew(void)

{
  ZombieExcavatorProps *this;
  
  this = ::operator_new(0x280);
  ZombieExcavatorProps(this);
  return this;
}


/* ZombieExcavatorProps::~ZombieExcavatorProps() */

void __thiscall ZombieExcavatorProps::~ZombieExcavatorProps(ZombieExcavatorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e61b0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 600));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x230));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieExcavatorProps::~ZombieExcavatorProps() */

void __thiscall ZombieExcavatorProps::~ZombieExcavatorProps(ZombieExcavatorProps *this)

{
  ~ZombieExcavatorProps(this);
  AK::FreeHook(this);
  return;
}

