// Class: ZombieCarnieMagicianProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianProps::StaticClassInit() */

void ZombieCarnieMagicianProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCarnieMagicianProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f30238,0x278,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianProps::StaticGetClass() */

long * ZombieCarnieMagicianProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagicianProps::GetClass() const */

long * ZombieCarnieMagicianProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagicianProps::ZombieCarnieMagicianProps() */

void __thiscall
ZombieCarnieMagicianProps::ZombieCarnieMagicianProps(ZombieCarnieMagicianProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a13210;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0x40a00000;
  *(undefined4 *)(this + 0x230) = 0x41200000;
  *(undefined4 *)(this + 0x234) = 0x41200000;
  *(undefined4 *)(this + 0x238) = 0x40a00000;
  *(undefined4 *)(this + 0x23c) = 0x41700000;
  *(undefined4 *)(this + 0x240) = 0x42480000;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x248));
  *(undefined4 *)(this + 0x270) = 0x41700000;
  return;
}


/* ZombieCarnieMagicianProps::StaticNew() */

ZombieCarnieMagicianProps * ZombieCarnieMagicianProps::StaticNew(void)

{
  ZombieCarnieMagicianProps *this;
  
  this = ::operator_new(0x278);
  ZombieCarnieMagicianProps(this);
  return this;
}


/* ZombieCarnieMagicianProps::~ZombieCarnieMagicianProps() */

void __thiscall
ZombieCarnieMagicianProps::~ZombieCarnieMagicianProps(ZombieCarnieMagicianProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a13210;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x248));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieCarnieMagicianProps::~ZombieCarnieMagicianProps() */

void __thiscall
ZombieCarnieMagicianProps::~ZombieCarnieMagicianProps(ZombieCarnieMagicianProps *this)

{
  ~ZombieCarnieMagicianProps(this);
  AK::FreeHook(this);
  return;
}

