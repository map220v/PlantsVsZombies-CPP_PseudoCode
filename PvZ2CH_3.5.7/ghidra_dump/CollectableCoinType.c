// Class: CollectableCoinType


/* CollectableCoinType::~CollectableCoinType() */

void __thiscall CollectableCoinType::~CollectableCoinType(CollectableCoinType *this)

{
  *(undefined ***)this = &PTR_GetClass_06754530;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableCoinType::~CollectableCoinType() */

void __thiscall CollectableCoinType::~CollectableCoinType(CollectableCoinType *this)

{
  ~CollectableCoinType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableCoinType::CollectableCoinType() */

void __thiscall CollectableCoinType::CollectableCoinType(CollectableCoinType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined ***)this = &PTR_GetClass_06754530;
  return;
}


/* CollectableCoinType::StaticNew() */

CollectableCoinType * CollectableCoinType::StaticNew(void)

{
  CollectableCoinType *this;
  
  this = ::operator_new(0x98);
  CollectableCoinType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableCoinType::StaticClassInit() */

void CollectableCoinType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableCoinType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c62120,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableCoinType::StaticGetClass() */

long * CollectableCoinType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoinType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableCoinType::GetClass() const */

long * CollectableCoinType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableCoinType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

