// Class: ZombieWealthGodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWealthGodProps::StaticClassInit() */

void ZombieWealthGodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWealthGodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0463d5a4,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWealthGodProps::StaticGetClass() */

long * ZombieWealthGodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWealthGodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWealthGodProps::GetClass() const */

long * ZombieWealthGodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWealthGodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWealthGodProps::ZombieWealthGodProps() */

void __thiscall ZombieWealthGodProps::ZombieWealthGodProps(ZombieWealthGodProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06881b40;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x214));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x21c));
  *(undefined4 *)(this + 0x224) = 5;
  *(undefined4 *)(this + 0x230) = 5000;
  *(undefined4 *)(this + 0x210) = 0x40000000;
  *(undefined4 *)(this + 0x228) = 0x3e3d70a4;
  *(undefined4 *)(this + 0x22c) = 0x3e99999a;
  return;
}


/* ZombieWealthGodProps::StaticNew() */

ZombieWealthGodProps * ZombieWealthGodProps::StaticNew(void)

{
  ZombieWealthGodProps *this;
  
  this = ::operator_new(0x238);
  ZombieWealthGodProps(this);
  return this;
}


/* ZombieWealthGodProps::~ZombieWealthGodProps() */

void __thiscall ZombieWealthGodProps::~ZombieWealthGodProps(ZombieWealthGodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06881b40;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieWealthGodProps::~ZombieWealthGodProps() */

void __thiscall ZombieWealthGodProps::~ZombieWealthGodProps(ZombieWealthGodProps *this)

{
  ~ZombieWealthGodProps(this);
  AK::FreeHook(this);
  return;
}

