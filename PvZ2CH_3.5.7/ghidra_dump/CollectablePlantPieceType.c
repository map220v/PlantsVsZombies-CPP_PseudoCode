// Class: CollectablePlantPieceType


/* CollectablePlantPieceType::~CollectablePlantPieceType() */

void __thiscall
CollectablePlantPieceType::~CollectablePlantPieceType(CollectablePlantPieceType *this)

{
  *(undefined ***)this = &PTR_GetClass_0690cfc0;
  std::string::~string((string *)(this + 0x98));
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectablePlantPieceType::~CollectablePlantPieceType() */

void __thiscall
CollectablePlantPieceType::~CollectablePlantPieceType(CollectablePlantPieceType *this)

{
  ~CollectablePlantPieceType(this);
  AK::FreeHook(this);
  return;
}


/* CollectablePlantPieceType::CollectablePlantPieceType() */

void __thiscall
CollectablePlantPieceType::CollectablePlantPieceType(CollectablePlantPieceType *this)

{
  size_t in_x2;
  
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_0690cfc0;
  Set8BytesTo0((string *)(this + 0x98));
  std::string::append((string *)(this + 0x98),"",in_x2);
  return;
}


/* CollectablePlantPieceType::StaticNew() */

CollectablePlantPieceType * CollectablePlantPieceType::StaticNew(void)

{
  CollectablePlantPieceType *this;
  
  this = ::operator_new(0xa0);
  CollectablePlantPieceType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantPieceType::StaticClassInit() */

void CollectablePlantPieceType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectablePlantPieceType");
    (*pcVar2)(plVar1,asStack_10,FUN_0490c70c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectablePlantPieceType::StaticGetClass() */

long * CollectablePlantPieceType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantPieceType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectablePlantPieceType::GetClass() const */

long * CollectablePlantPieceType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantPieceType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

