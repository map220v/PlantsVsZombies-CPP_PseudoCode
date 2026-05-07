// Class: CollectablePresentType


/* CollectablePresentType::~CollectablePresentType() */

void __thiscall CollectablePresentType::~CollectablePresentType(CollectablePresentType *this)

{
  *(undefined ***)this = &PTR_GetClass_06755eb0;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectablePresentType::~CollectablePresentType() */

void __thiscall CollectablePresentType::~CollectablePresentType(CollectablePresentType *this)

{
  ~CollectablePresentType(this);
  AK::FreeHook(this);
  return;
}


/* CollectablePresentType::CollectablePresentType() */

void __thiscall CollectablePresentType::CollectablePresentType(CollectablePresentType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  this[0x91] = (CollectablePresentType)0x0;
  *(undefined ***)this = &PTR_GetClass_06755eb0;
  return;
}


/* CollectablePresentType::StaticNew() */

CollectablePresentType * CollectablePresentType::StaticNew(void)

{
  CollectablePresentType *this;
  
  this = ::operator_new(0x98);
  CollectablePresentType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePresentType::StaticClassInit() */

void CollectablePresentType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePresentType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c65450,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePresentType::StaticGetClass() */

long * CollectablePresentType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePresentType::GetClass() const */

long * CollectablePresentType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

