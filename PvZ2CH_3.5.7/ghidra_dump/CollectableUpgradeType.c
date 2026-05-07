// Class: CollectableUpgradeType


/* CollectableUpgradeType::~CollectableUpgradeType() */

void __thiscall CollectableUpgradeType::~CollectableUpgradeType(CollectableUpgradeType *this)

{
  *(undefined ***)this = &PTR_GetClass_06757d00;
  std::string::~string((string *)(this + 0x98));
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableUpgradeType::~CollectableUpgradeType() */

void __thiscall CollectableUpgradeType::~CollectableUpgradeType(CollectableUpgradeType *this)

{
  ~CollectableUpgradeType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableUpgradeType::CollectableUpgradeType() */

void __thiscall CollectableUpgradeType::CollectableUpgradeType(CollectableUpgradeType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_06757d00;
  Set8BytesTo0(this + 0x98);
  return;
}


/* CollectableUpgradeType::StaticNew() */

CollectableUpgradeType * CollectableUpgradeType::StaticNew(void)

{
  CollectableUpgradeType *this;
  
  this = ::operator_new(0xa0);
  CollectableUpgradeType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableUpgradeType::StaticClassInit() */

void CollectableUpgradeType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableUpgradeType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6ab10,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableUpgradeType::StaticGetClass() */

long * CollectableUpgradeType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableUpgradeType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableUpgradeType::GetClass() const */

long * CollectableUpgradeType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableUpgradeType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

