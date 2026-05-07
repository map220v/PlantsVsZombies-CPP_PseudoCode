// Class: CollectableSpringCoinType


/* CollectableSpringCoinType::~CollectableSpringCoinType() */

void __thiscall
CollectableSpringCoinType::~CollectableSpringCoinType(CollectableSpringCoinType *this)

{
  *(undefined ***)this = &PTR_GetClass_0690cf60;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableSpringCoinType::~CollectableSpringCoinType() */

void __thiscall
CollectableSpringCoinType::~CollectableSpringCoinType(CollectableSpringCoinType *this)

{
  ~CollectableSpringCoinType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableSpringCoinType::CollectableSpringCoinType() */

void __thiscall
CollectableSpringCoinType::CollectableSpringCoinType(CollectableSpringCoinType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined ***)this = &PTR_GetClass_0690cf60;
  return;
}


/* CollectableSpringCoinType::StaticNew() */

CollectableSpringCoinType * CollectableSpringCoinType::StaticNew(void)

{
  CollectableSpringCoinType *this;
  
  this = ::operator_new(0x98);
  CollectableSpringCoinType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSpringCoinType::StaticClassInit() */

void CollectableSpringCoinType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSpringCoinType");
    (*pcVar2)(plVar1,asStack_10,FUN_0490c478,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSpringCoinType::StaticGetClass() */

long * CollectableSpringCoinType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpringCoinType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSpringCoinType::GetClass() const */

long * CollectableSpringCoinType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSpringCoinType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

