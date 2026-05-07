// Class: ZombieCarnieMagicianDoveProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianDoveProps::StaticClassInit() */

void ZombieCarnieMagicianDoveProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCarnieMagicianDoveProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f30ab8,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianDoveProps::StaticGetClass() */

long * ZombieCarnieMagicianDoveProps::StaticGetClass(void)

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
  uVar2 = ZombiePirateCaptainParrotProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianDoveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagicianDoveProps::GetClass() const */

long * ZombieCarnieMagicianDoveProps::GetClass(void)

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
  uVar2 = ZombiePirateCaptainParrotProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianDoveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagicianDoveProps::ZombieCarnieMagicianDoveProps() */

void __thiscall
ZombieCarnieMagicianDoveProps::ZombieCarnieMagicianDoveProps(ZombieCarnieMagicianDoveProps *this)

{
  ZombiePirateCaptainParrotProps::ZombiePirateCaptainParrotProps
            ((ZombiePirateCaptainParrotProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a14ac0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x21c));
  return;
}


/* ZombieCarnieMagicianDoveProps::StaticNew() */

ZombieCarnieMagicianDoveProps * ZombieCarnieMagicianDoveProps::StaticNew(void)

{
  ZombieCarnieMagicianDoveProps *this;
  
  this = ::operator_new(0x228);
  ZombieCarnieMagicianDoveProps(this);
  return this;
}


/* ZombieCarnieMagicianDoveProps::~ZombieCarnieMagicianDoveProps() */

void __thiscall
ZombieCarnieMagicianDoveProps::~ZombieCarnieMagicianDoveProps(ZombieCarnieMagicianDoveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a14ac0;
  ZombiePirateCaptainParrotProps::~ZombiePirateCaptainParrotProps
            ((ZombiePirateCaptainParrotProps *)this);
  return;
}


/* ZombieCarnieMagicianDoveProps::~ZombieCarnieMagicianDoveProps() */

void __thiscall
ZombieCarnieMagicianDoveProps::~ZombieCarnieMagicianDoveProps(ZombieCarnieMagicianDoveProps *this)

{
  ~ZombieCarnieMagicianDoveProps(this);
  AK::FreeHook(this);
  return;
}

