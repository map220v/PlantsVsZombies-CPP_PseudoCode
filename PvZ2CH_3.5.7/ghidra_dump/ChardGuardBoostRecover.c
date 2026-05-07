// Class: ChardGuardBoostRecover


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChardGuardBoostRecover::StaticClassInit() */

void ChardGuardBoostRecover::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChardGuardBoostRecover");
    (*pcVar2)(plVar1,asStack_10,FUN_043afa28,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChardGuardBoostRecover::StaticGetClass() */

long * ChardGuardBoostRecover::StaticGetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"ChardGuardBoostRecover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChardGuardBoostRecover::GetClass() const */

long * ChardGuardBoostRecover::GetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"ChardGuardBoostRecover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChardGuardBoostRecover::ChardGuardBoostRecover() */

void __thiscall ChardGuardBoostRecover::ChardGuardBoostRecover(ChardGuardBoostRecover *this)

{
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  *(undefined4 *)(this + 100) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_06841430;
  return;
}


/* ChardGuardBoostRecover::StaticNew() */

ChardGuardBoostRecover * ChardGuardBoostRecover::StaticNew(void)

{
  ChardGuardBoostRecover *this;
  
  this = ::operator_new(0x68);
  ChardGuardBoostRecover(this);
  return this;
}


/* ChardGuardBoostRecover::~ChardGuardBoostRecover() */

void __thiscall ChardGuardBoostRecover::~ChardGuardBoostRecover(ChardGuardBoostRecover *this)

{
  *(undefined ***)this = &PTR_GetClass_06841430;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* ChardGuardBoostRecover::~ChardGuardBoostRecover() */

void __thiscall ChardGuardBoostRecover::~ChardGuardBoostRecover(ChardGuardBoostRecover *this)

{
  ~ChardGuardBoostRecover(this);
  AK::FreeHook(this);
  return;
}

