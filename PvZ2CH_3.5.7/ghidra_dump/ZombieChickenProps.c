// Class: ZombieChickenProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenProps::StaticClassInit() */

void ZombieChickenProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieChickenProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0468a15c,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChickenProps::StaticGetClass() */

long * ZombieChickenProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenProps::GetClass() const */

long * ZombieChickenProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenProps::ZombieChickenProps() */

void __thiscall ZombieChickenProps::ZombieChickenProps(ZombieChickenProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0689de20;
  Set8BytesTo0(this + 0x218);
  this[0x220] = (ZombieChickenProps)0x1;
  *(undefined4 *)(this + 0x210) = 0x3f000000;
  return;
}


/* ZombieChickenProps::StaticNew() */

ZombieChickenProps * ZombieChickenProps::StaticNew(void)

{
  ZombieChickenProps *this;
  
  this = ::operator_new(0x228);
  ZombieChickenProps(this);
  return this;
}


/* ZombieChickenProps::~ZombieChickenProps() */

void __thiscall ZombieChickenProps::~ZombieChickenProps(ZombieChickenProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0689de20;
  std::string::~string((string *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieChickenProps::~ZombieChickenProps() */

void __thiscall ZombieChickenProps::~ZombieChickenProps(ZombieChickenProps *this)

{
  ~ZombieChickenProps(this);
  AK::FreeHook(this);
  return;
}

