// Class: ZombieModernAllStarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStarProps::StaticClassInit() */

void ZombieModernAllStarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModernAllStarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c32024,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernAllStarProps::StaticGetClass() */

long * ZombieModernAllStarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernAllStarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernAllStarProps::GetClass() const */

long * ZombieModernAllStarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernAllStarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernAllStarProps::ZombieModernAllStarProps() */

void __thiscall ZombieModernAllStarProps::ZombieModernAllStarProps(ZombieModernAllStarProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 1000;
  *(undefined ***)this = &PTR_GetClass_0674d6b0;
  *(undefined4 *)(this + 0x214) = 0x3f800000;
  return;
}


/* ZombieModernAllStarProps::StaticNew() */

ZombieModernAllStarProps * ZombieModernAllStarProps::StaticNew(void)

{
  ZombieModernAllStarProps *this;
  
  this = ::operator_new(0x218);
  ZombieModernAllStarProps(this);
  return this;
}


/* ZombieModernAllStarProps::~ZombieModernAllStarProps() */

void __thiscall ZombieModernAllStarProps::~ZombieModernAllStarProps(ZombieModernAllStarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674d6b0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieModernAllStarProps::~ZombieModernAllStarProps() */

void __thiscall ZombieModernAllStarProps::~ZombieModernAllStarProps(ZombieModernAllStarProps *this)

{
  ~ZombieModernAllStarProps(this);
  AK::FreeHook(this);
  return;
}

