// Class: CollectablePlantUpgradeType


/* CollectablePlantUpgradeType::~CollectablePlantUpgradeType() */

void __thiscall
CollectablePlantUpgradeType::~CollectablePlantUpgradeType(CollectablePlantUpgradeType *this)

{
  *(undefined ***)this = &PTR_GetClass_06755950;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectablePlantUpgradeType::~CollectablePlantUpgradeType() */

void __thiscall
CollectablePlantUpgradeType::~CollectablePlantUpgradeType(CollectablePlantUpgradeType *this)

{
  ~CollectablePlantUpgradeType(this);
  AK::FreeHook(this);
  return;
}


/* CollectablePlantUpgradeType::CollectablePlantUpgradeType() */

void __thiscall
CollectablePlantUpgradeType::CollectablePlantUpgradeType(CollectablePlantUpgradeType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_06755950;
  return;
}


/* CollectablePlantUpgradeType::StaticNew() */

CollectablePlantUpgradeType * CollectablePlantUpgradeType::StaticNew(void)

{
  CollectablePlantUpgradeType *this;
  
  this = ::operator_new(0x98);
  CollectablePlantUpgradeType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantUpgradeType::StaticClassInit() */

void CollectablePlantUpgradeType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePlantUpgradeType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c64878,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePlantUpgradeType::StaticGetClass() */

long * CollectablePlantUpgradeType::StaticGetClass(void)

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
  uVar2 = CollectableType::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantUpgradeType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePlantUpgradeType::GetClass() const */

long * CollectablePlantUpgradeType::GetClass(void)

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
  uVar2 = CollectableType::StaticGetClass();
  (*pcVar3)(plVar1,"CollectablePlantUpgradeType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

