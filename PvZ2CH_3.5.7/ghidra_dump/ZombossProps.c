// Class: ZombossProps


/* ZombossProps::ZombossProps() */

void __thiscall ZombossProps::ZombossProps(ZombossProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined ***)this = &PTR_GetClass_068cb320;
  return;
}


/* ZombossProps::~ZombossProps() */

void __thiscall ZombossProps::~ZombossProps(ZombossProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068cb320;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombossProps::~ZombossProps() */

void __thiscall ZombossProps::~ZombossProps(ZombossProps *this)

{
  ~ZombossProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossProps::StaticClassInit() */

void ZombossProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0474e090,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossProps::StaticGetClass() */

long * ZombossProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossProps::GetClass() const */

long * ZombossProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossProps::StaticNew() */

ZombossProps * ZombossProps::StaticNew(void)

{
  ZombossProps *this;
  
  this = ::operator_new(0x218);
  ZombossProps(this);
  return this;
}

