// Class: ZombieGeneralCaesarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGeneralCaesarProps::StaticClassInit() */

void ZombieGeneralCaesarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieGeneralCaesarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04efe8c0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGeneralCaesarProps::StaticGetClass() */

long * ZombieGeneralCaesarProps::StaticGetClass(void)

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
  uVar2 = ZombieGeneralProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralCaesarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralCaesarProps::GetClass() const */

long * ZombieGeneralCaesarProps::GetClass(void)

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
  uVar2 = ZombieGeneralProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGeneralCaesarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGeneralCaesarProps::ZombieGeneralCaesarProps() */

void __thiscall ZombieGeneralCaesarProps::ZombieGeneralCaesarProps(ZombieGeneralCaesarProps *this)

{
  ZombieGeneralProps::ZombieGeneralProps((ZombieGeneralProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a0a670;
  Sexy::Insets::Insets((Insets *)(this + 0x238));
  return;
}


/* ZombieGeneralCaesarProps::StaticNew() */

ZombieGeneralCaesarProps * ZombieGeneralCaesarProps::StaticNew(void)

{
  ZombieGeneralCaesarProps *this;
  
  this = ::operator_new(0x248);
  ZombieGeneralCaesarProps(this);
  return this;
}


/* ZombieGeneralCaesarProps::~ZombieGeneralCaesarProps() */

void __thiscall ZombieGeneralCaesarProps::~ZombieGeneralCaesarProps(ZombieGeneralCaesarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0a670;
  ZombieGeneralProps::~ZombieGeneralProps((ZombieGeneralProps *)this);
  return;
}


/* ZombieGeneralCaesarProps::~ZombieGeneralCaesarProps() */

void __thiscall ZombieGeneralCaesarProps::~ZombieGeneralCaesarProps(ZombieGeneralCaesarProps *this)

{
  ~ZombieGeneralCaesarProps(this);
  AK::FreeHook(this);
  return;
}

