// Class: SpikeweedProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpikeweedProps::StaticClassInit() */

void SpikeweedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpikeweedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f90b84,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpikeweedProps::SpikeweedProps() */

void __thiscall SpikeweedProps::SpikeweedProps(SpikeweedProps *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3b60;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2b8) = 100;
  *(undefined4 *)(this + 0x2c4) = 0x28;
  *(undefined4 *)(this + 700) = 0x40800000;
  *(undefined4 *)(this + 0x2c0) = 0x3e800000;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2c8) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpikeweedProps::StaticNew() */

SpikeweedProps * SpikeweedProps::StaticNew(void)

{
  SpikeweedProps *this;
  
  this = ::operator_new(0x2d0);
  SpikeweedProps(this);
  return this;
}


/* SpikeweedProps::~SpikeweedProps() */

void __thiscall SpikeweedProps::~SpikeweedProps(SpikeweedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3b60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SpikeweedProps::~SpikeweedProps() */

void __thiscall SpikeweedProps::~SpikeweedProps(SpikeweedProps *this)

{
  ~SpikeweedProps(this);
  AK::FreeHook(this);
  return;
}


/* SpikeweedProps::StaticGetClass() */

long * SpikeweedProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SpikeweedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpikeweedProps::GetClass() const */

long * SpikeweedProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SpikeweedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

