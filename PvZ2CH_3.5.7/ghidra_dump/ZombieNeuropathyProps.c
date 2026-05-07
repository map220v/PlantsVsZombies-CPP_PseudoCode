// Class: ZombieNeuropathyProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieNeuropathyProps::StaticClassInit() */

void ZombieNeuropathyProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieNeuropathyProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04760b0c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieNeuropathyProps::StaticGetClass() */

long * ZombieNeuropathyProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieNeuropathyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieNeuropathyProps::GetClass() const */

long * ZombieNeuropathyProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieNeuropathyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieNeuropathyProps::ZombieNeuropathyProps() */

void __thiscall ZombieNeuropathyProps::ZombieNeuropathyProps(ZombieNeuropathyProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x3e75c28f;
  *(undefined ***)this = &PTR_GetClass_068ce350;
  *(undefined4 *)(this + 0x214) = 0x3f4ccccd;
  return;
}


/* ZombieNeuropathyProps::StaticNew() */

ZombieNeuropathyProps * ZombieNeuropathyProps::StaticNew(void)

{
  ZombieNeuropathyProps *this;
  
  this = ::operator_new(0x218);
  ZombieNeuropathyProps(this);
  return this;
}


/* ZombieNeuropathyProps::~ZombieNeuropathyProps() */

void __thiscall ZombieNeuropathyProps::~ZombieNeuropathyProps(ZombieNeuropathyProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068ce350;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieNeuropathyProps::~ZombieNeuropathyProps() */

void __thiscall ZombieNeuropathyProps::~ZombieNeuropathyProps(ZombieNeuropathyProps *this)

{
  ~ZombieNeuropathyProps(this);
  AK::FreeHook(this);
  return;
}

