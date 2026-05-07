// Class: ZombieIceAgeChiefProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChiefProps::StaticClassInit() */

void ZombieIceAgeChiefProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeChiefProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04770b94,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeChiefProps::StaticGetClass() */

long * ZombieIceAgeChiefProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeChiefProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeChiefProps::GetClass() const */

long * ZombieIceAgeChiefProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeChiefProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeChiefProps::ZombieIceAgeChiefProps() */

void __thiscall ZombieIceAgeChiefProps::ZombieIceAgeChiefProps(ZombieIceAgeChiefProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068d4540;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* ZombieIceAgeChiefProps::StaticNew() */

ZombieIceAgeChiefProps * ZombieIceAgeChiefProps::StaticNew(void)

{
  ZombieIceAgeChiefProps *this;
  
  this = ::operator_new(0x218);
  ZombieIceAgeChiefProps(this);
  return this;
}


/* ZombieIceAgeChiefProps::~ZombieIceAgeChiefProps() */

void __thiscall ZombieIceAgeChiefProps::~ZombieIceAgeChiefProps(ZombieIceAgeChiefProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4540;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieIceAgeChiefProps::~ZombieIceAgeChiefProps() */

void __thiscall ZombieIceAgeChiefProps::~ZombieIceAgeChiefProps(ZombieIceAgeChiefProps *this)

{
  ~ZombieIceAgeChiefProps(this);
  AK::FreeHook(this);
  return;
}

