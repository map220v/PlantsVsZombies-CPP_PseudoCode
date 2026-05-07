// Class: ZombieImpPorterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieImpPorterProps::StaticClassInit() */

void ZombieImpPorterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieImpPorterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047d0168,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieImpPorterProps::StaticGetClass() */

long * ZombieImpPorterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieImpPorterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImpPorterProps::GetClass() const */

long * ZombieImpPorterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieImpPorterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieImpPorterProps::ZombieImpPorterProps() */

void __thiscall ZombieImpPorterProps::ZombieImpPorterProps(ZombieImpPorterProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068e6600;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* ZombieImpPorterProps::StaticNew() */

ZombieImpPorterProps * ZombieImpPorterProps::StaticNew(void)

{
  ZombieImpPorterProps *this;
  
  this = ::operator_new(0x218);
  ZombieImpPorterProps(this);
  return this;
}


/* ZombieImpPorterProps::~ZombieImpPorterProps() */

void __thiscall ZombieImpPorterProps::~ZombieImpPorterProps(ZombieImpPorterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e6600;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieImpPorterProps::~ZombieImpPorterProps() */

void __thiscall ZombieImpPorterProps::~ZombieImpPorterProps(ZombieImpPorterProps *this)

{
  ~ZombieImpPorterProps(this);
  AK::FreeHook(this);
  return;
}

