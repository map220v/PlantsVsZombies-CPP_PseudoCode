// Class: CollectableGemType


/* CollectableGemType::~CollectableGemType() */

void __thiscall CollectableGemType::~CollectableGemType(CollectableGemType *this)

{
  *(undefined ***)this = &PTR_GetClass_06754ff0;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableGemType::~CollectableGemType() */

void __thiscall CollectableGemType::~CollectableGemType(CollectableGemType *this)

{
  ~CollectableGemType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableGemType::CollectableGemType() */

void __thiscall CollectableGemType::CollectableGemType(CollectableGemType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined ***)this = &PTR_GetClass_06754ff0;
  return;
}


/* CollectableGemType::StaticNew() */

CollectableGemType * CollectableGemType::StaticNew(void)

{
  CollectableGemType *this;
  
  this = ::operator_new(0x98);
  CollectableGemType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableGemType::StaticClassInit() */

void CollectableGemType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableGemType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c62e48,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableGemType::StaticGetClass() */

long * CollectableGemType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableGemType::GetClass() const */

long * CollectableGemType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableGemType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

