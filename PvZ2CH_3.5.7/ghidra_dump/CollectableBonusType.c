// Class: CollectableBonusType


/* CollectableBonusType::~CollectableBonusType() */

void __thiscall CollectableBonusType::~CollectableBonusType(CollectableBonusType *this)

{
  *(undefined ***)this = &PTR_GetClass_06757fe0;
  std::string::~string((string *)(this + 0x98));
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableBonusType::~CollectableBonusType() */

void __thiscall CollectableBonusType::~CollectableBonusType(CollectableBonusType *this)

{
  ~CollectableBonusType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableBonusType::CollectableBonusType() */

void __thiscall CollectableBonusType::CollectableBonusType(CollectableBonusType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_06757fe0;
  Set8BytesTo0(this + 0x98);
  return;
}


/* CollectableBonusType::StaticNew() */

CollectableBonusType * CollectableBonusType::StaticNew(void)

{
  CollectableBonusType *this;
  
  this = ::operator_new(0xa0);
  CollectableBonusType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableBonusType::StaticClassInit() */

void CollectableBonusType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableBonusType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6ae84,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableBonusType::StaticGetClass() */

long * CollectableBonusType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableBonusType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableBonusType::GetClass() const */

long * CollectableBonusType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableBonusType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

