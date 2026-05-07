// Class: ZombieGumProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGumProps::StaticClassInit() */

void ZombieGumProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGumProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0427d6e4,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGumProps::StaticGetClass() */

long * ZombieGumProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGumProps::GetClass() const */

long * ZombieGumProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGumProps::ZombieGumProps() */

void __thiscall ZombieGumProps::ZombieGumProps(ZombieGumProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06823eb0;
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x218));
  return;
}


/* ZombieGumProps::StaticNew() */

ZombieGumProps * ZombieGumProps::StaticNew(void)

{
  ZombieGumProps *this;
  
  this = ::operator_new(0x238);
  ZombieGumProps(this);
  return this;
}


/* ZombieGumProps::~ZombieGumProps() */

void __thiscall ZombieGumProps::~ZombieGumProps(ZombieGumProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06823eb0;
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieGumProps::~ZombieGumProps() */

void __thiscall ZombieGumProps::~ZombieGumProps(ZombieGumProps *this)

{
  ~ZombieGumProps(this);
  AK::FreeHook(this);
  return;
}

