// Class: ZombieLionDanceProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLionDanceProps::StaticClassInit() */

void ZombieLionDanceProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieLionDanceProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0463af68,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLionDanceProps::StaticGetClass() */

long * ZombieLionDanceProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLionDanceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLionDanceProps::GetClass() const */

long * ZombieLionDanceProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLionDanceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLionDanceProps::ZombieLionDanceProps() */

void __thiscall ZombieLionDanceProps::ZombieLionDanceProps(ZombieLionDanceProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06881050;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x214));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x21c));
  *(undefined4 *)(this + 0x224) = 5;
  *(undefined4 *)(this + 0x210) = 0x40000000;
  return;
}


/* ZombieLionDanceProps::StaticNew() */

ZombieLionDanceProps * ZombieLionDanceProps::StaticNew(void)

{
  ZombieLionDanceProps *this;
  
  this = ::operator_new(0x228);
  ZombieLionDanceProps(this);
  return this;
}


/* ZombieLionDanceProps::~ZombieLionDanceProps() */

void __thiscall ZombieLionDanceProps::~ZombieLionDanceProps(ZombieLionDanceProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06881050;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieLionDanceProps::~ZombieLionDanceProps() */

void __thiscall ZombieLionDanceProps::~ZombieLionDanceProps(ZombieLionDanceProps *this)

{
  ~ZombieLionDanceProps(this);
  AK::FreeHook(this);
  return;
}

