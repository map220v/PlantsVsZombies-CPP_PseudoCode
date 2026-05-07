// Class: ZombieEightiesBassProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBassProps::StaticClassInit() */

void ZombieEightiesBassProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesBassProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047e0d00,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBassProps::StaticGetClass() */

long * ZombieEightiesBassProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBassProps::GetClass() const */

long * ZombieEightiesBassProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBassProps::ZombieEightiesBassProps() */

void __thiscall ZombieEightiesBassProps::ZombieEightiesBassProps(ZombieEightiesBassProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068ef660;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x210));
  *(undefined4 *)(this + 0x218) = 0x40a00000;
  return;
}


/* ZombieEightiesBassProps::StaticNew() */

ZombieEightiesBassProps * ZombieEightiesBassProps::StaticNew(void)

{
  ZombieEightiesBassProps *this;
  
  this = ::operator_new(0x220);
  ZombieEightiesBassProps(this);
  return this;
}


/* ZombieEightiesBassProps::~ZombieEightiesBassProps() */

void __thiscall ZombieEightiesBassProps::~ZombieEightiesBassProps(ZombieEightiesBassProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068ef660;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieEightiesBassProps::~ZombieEightiesBassProps() */

void __thiscall ZombieEightiesBassProps::~ZombieEightiesBassProps(ZombieEightiesBassProps *this)

{
  ~ZombieEightiesBassProps(this);
  AK::FreeHook(this);
  return;
}

