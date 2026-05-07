// Class: ZombieSwashbucklerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbucklerProps::StaticClassInit() */

void ZombieSwashbucklerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSwashbucklerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046d43a0,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSwashbucklerProps::StaticGetClass() */

long * ZombieSwashbucklerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSwashbucklerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSwashbucklerProps::GetClass() const */

long * ZombieSwashbucklerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSwashbucklerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwashbucklerProps::ZombieSwashbucklerProps() */

void __thiscall ZombieSwashbucklerProps::ZombieSwashbucklerProps(ZombieSwashbucklerProps *this)

{
  undefined4 uVar1;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  this[0x210] = (ZombieSwashbucklerProps)0x5;
  this[0x211] = (ZombieSwashbucklerProps)0x5;
  uVar1 = _FUN_046d5f30;
  *(undefined ***)this = &PTR_GetClass_068b4650;
  *(undefined4 *)(this + 0x214) = uVar1;
  return;
}


/* ZombieSwashbucklerProps::StaticNew() */

ZombieSwashbucklerProps * ZombieSwashbucklerProps::StaticNew(void)

{
  ZombieSwashbucklerProps *this;
  
  this = ::operator_new(0x218);
  ZombieSwashbucklerProps(this);
  return this;
}


/* ZombieSwashbucklerProps::~ZombieSwashbucklerProps() */

void __thiscall ZombieSwashbucklerProps::~ZombieSwashbucklerProps(ZombieSwashbucklerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b4650;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSwashbucklerProps::~ZombieSwashbucklerProps() */

void __thiscall ZombieSwashbucklerProps::~ZombieSwashbucklerProps(ZombieSwashbucklerProps *this)

{
  ~ZombieSwashbucklerProps(this);
  AK::FreeHook(this);
  return;
}

