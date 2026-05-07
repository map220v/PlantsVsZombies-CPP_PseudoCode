// Class: ZombieBeachSurferProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachSurferProps::StaticClassInit() */

void ZombieBeachSurferProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBeachSurferProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c463c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachSurferProps::ZombieBeachSurferProps() */

void __thiscall ZombieBeachSurferProps::ZombieBeachSurferProps(ZombieBeachSurferProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x40800000;
  *(undefined ***)this = &PTR_GetClass_068b1930;
  *(undefined4 *)(this + 0x214) = 0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x218));
  return;
}


/* ZombieBeachSurferProps::StaticNew() */

ZombieBeachSurferProps * ZombieBeachSurferProps::StaticNew(void)

{
  ZombieBeachSurferProps *this;
  
  this = ::operator_new(0x240);
  ZombieBeachSurferProps(this);
  return this;
}


/* ZombieBeachSurferProps::~ZombieBeachSurferProps() */

void __thiscall ZombieBeachSurferProps::~ZombieBeachSurferProps(ZombieBeachSurferProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1930;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBeachSurferProps::~ZombieBeachSurferProps() */

void __thiscall ZombieBeachSurferProps::~ZombieBeachSurferProps(ZombieBeachSurferProps *this)

{
  ~ZombieBeachSurferProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieBeachSurferProps::StaticGetClass() */

long * ZombieBeachSurferProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSurferProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachSurferProps::GetClass() const */

long * ZombieBeachSurferProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBeachSurferProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

