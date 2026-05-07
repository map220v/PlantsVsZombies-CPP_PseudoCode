// Class: CollectablePlantfoodType


/* CollectablePlantfoodType::~CollectablePlantfoodType() */

void __thiscall CollectablePlantfoodType::~CollectablePlantfoodType(CollectablePlantfoodType *this)

{
  *(undefined ***)this = &PTR_GetClass_06755670;
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectablePlantfoodType::~CollectablePlantfoodType() */

void __thiscall CollectablePlantfoodType::~CollectablePlantfoodType(CollectablePlantfoodType *this)

{
  ~CollectablePlantfoodType(this);
  AK::FreeHook(this);
  return;
}


/* CollectablePlantfoodType::CollectablePlantfoodType() */

void __thiscall CollectablePlantfoodType::CollectablePlantfoodType(CollectablePlantfoodType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_06755670;
  return;
}


/* CollectablePlantfoodType::StaticNew() */

CollectablePlantfoodType * CollectablePlantfoodType::StaticNew(void)

{
  CollectablePlantfoodType *this;
  
  this = ::operator_new(0x98);
  CollectablePlantfoodType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantfoodType::StaticClassInit() */

void CollectablePlantfoodType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePlantfoodType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6404c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePlantfoodType::StaticGetClass() */

long * CollectablePlantfoodType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantfoodType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePlantfoodType::GetClass() const */

long * CollectablePlantfoodType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantfoodType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

