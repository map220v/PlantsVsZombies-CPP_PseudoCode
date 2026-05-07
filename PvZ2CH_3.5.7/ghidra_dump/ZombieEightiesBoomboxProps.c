// Class: ZombieEightiesBoomboxProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoomboxProps::StaticClassInit() */

void ZombieEightiesBoomboxProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesBoomboxProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047e2ef4,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBoomboxProps::StaticGetClass() */

long * ZombieEightiesBoomboxProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBoomboxProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBoomboxProps::GetClass() const */

long * ZombieEightiesBoomboxProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBoomboxProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBoomboxProps::ZombieEightiesBoomboxProps() */

void __thiscall
ZombieEightiesBoomboxProps::ZombieEightiesBoomboxProps(ZombieEightiesBoomboxProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068f0440;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x210));
  Set8BytesTo0((string *)(this + 0x238));
  std::string::append((string *)(this + 0x238),"",in_x2);
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  return;
}


/* ZombieEightiesBoomboxProps::StaticNew() */

ZombieEightiesBoomboxProps * ZombieEightiesBoomboxProps::StaticNew(void)

{
  ZombieEightiesBoomboxProps *this;
  
  this = ::operator_new(0x250);
  ZombieEightiesBoomboxProps(this);
  return this;
}


/* ZombieEightiesBoomboxProps::~ZombieEightiesBoomboxProps() */

void __thiscall
ZombieEightiesBoomboxProps::~ZombieEightiesBoomboxProps(ZombieEightiesBoomboxProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f0440;
  std::string::~string((string *)(this + 0x238));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieEightiesBoomboxProps::~ZombieEightiesBoomboxProps() */

void __thiscall
ZombieEightiesBoomboxProps::~ZombieEightiesBoomboxProps(ZombieEightiesBoomboxProps *this)

{
  ~ZombieEightiesBoomboxProps(this);
  AK::FreeHook(this);
  return;
}

