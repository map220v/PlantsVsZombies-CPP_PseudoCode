// Class: CollectableNewerPresentType


/* CollectableNewerPresentType::~CollectableNewerPresentType() */

void __thiscall
CollectableNewerPresentType::~CollectableNewerPresentType(CollectableNewerPresentType *this)

{
  *(undefined ***)this = &PTR_GetClass_06756470;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableNewerPresentType::~CollectableNewerPresentType() */

void __thiscall
CollectableNewerPresentType::~CollectableNewerPresentType(CollectableNewerPresentType *this)

{
  ~CollectableNewerPresentType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableNewerPresentType::CollectableNewerPresentType() */

void __thiscall
CollectableNewerPresentType::CollectableNewerPresentType(CollectableNewerPresentType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_06756470;
  return;
}


/* CollectableNewerPresentType::StaticNew() */

CollectableNewerPresentType * CollectableNewerPresentType::StaticNew(void)

{
  CollectableNewerPresentType *this;
  
  this = ::operator_new(0x98);
  CollectableNewerPresentType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableNewerPresentType::StaticClassInit() */

void CollectableNewerPresentType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableNewerPresentType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c65d20,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableNewerPresentType::StaticGetClass() */

long * CollectableNewerPresentType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableNewerPresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableNewerPresentType::GetClass() const */

long * CollectableNewerPresentType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableNewerPresentType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

