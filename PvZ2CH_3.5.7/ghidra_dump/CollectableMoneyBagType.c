// Class: CollectableMoneyBagType


/* CollectableMoneyBagType::~CollectableMoneyBagType() */

void __thiscall CollectableMoneyBagType::~CollectableMoneyBagType(CollectableMoneyBagType *this)

{
  *(undefined ***)this = &PTR_GetClass_067555b0;
  std::string::~string((string *)(this + 0x98));
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableMoneyBagType::~CollectableMoneyBagType() */

void __thiscall CollectableMoneyBagType::~CollectableMoneyBagType(CollectableMoneyBagType *this)

{
  ~CollectableMoneyBagType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableMoneyBagType::CollectableMoneyBagType() */

void __thiscall CollectableMoneyBagType::CollectableMoneyBagType(CollectableMoneyBagType *this)

{
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_067555b0;
  Set8BytesTo0(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}


/* CollectableMoneyBagType::StaticNew() */

CollectableMoneyBagType * CollectableMoneyBagType::StaticNew(void)

{
  CollectableMoneyBagType *this;
  
  this = ::operator_new(0xa8);
  CollectableMoneyBagType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableMoneyBagType::StaticClassInit() */

void CollectableMoneyBagType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableMoneyBagType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c63720,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableMoneyBagType::StaticGetClass() */

long * CollectableMoneyBagType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableMoneyBagType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableMoneyBagType::GetClass() const */

long * CollectableMoneyBagType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableMoneyBagType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

