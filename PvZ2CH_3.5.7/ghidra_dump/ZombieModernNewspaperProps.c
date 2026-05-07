// Class: ZombieModernNewspaperProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernNewspaperProps::StaticClassInit() */

void ZombieModernNewspaperProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModernNewspaperProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc3310,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernNewspaperProps::StaticGetClass() */

long * ZombieModernNewspaperProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernNewspaperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernNewspaperProps::GetClass() const */

long * ZombieModernNewspaperProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernNewspaperProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernNewspaperProps::ZombieModernNewspaperProps() */

void __thiscall
ZombieModernNewspaperProps::ZombieModernNewspaperProps(ZombieModernNewspaperProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x40800000;
  *(undefined ***)this = &PTR_GetClass_06739480;
  *(undefined4 *)(this + 0x214) = 0x40800000;
  return;
}


/* ZombieModernNewspaperProps::StaticNew() */

ZombieModernNewspaperProps * ZombieModernNewspaperProps::StaticNew(void)

{
  ZombieModernNewspaperProps *this;
  
  this = ::operator_new(0x218);
  ZombieModernNewspaperProps(this);
  return this;
}


/* ZombieModernNewspaperProps::~ZombieModernNewspaperProps() */

void __thiscall
ZombieModernNewspaperProps::~ZombieModernNewspaperProps(ZombieModernNewspaperProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06739480;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieModernNewspaperProps::~ZombieModernNewspaperProps() */

void __thiscall
ZombieModernNewspaperProps::~ZombieModernNewspaperProps(ZombieModernNewspaperProps *this)

{
  ~ZombieModernNewspaperProps(this);
  AK::FreeHook(this);
  return;
}

