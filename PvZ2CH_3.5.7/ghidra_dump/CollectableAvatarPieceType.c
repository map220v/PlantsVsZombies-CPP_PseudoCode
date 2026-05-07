// Class: CollectableAvatarPieceType


/* CollectableAvatarPieceType::~CollectableAvatarPieceType() */

void __thiscall
CollectableAvatarPieceType::~CollectableAvatarPieceType(CollectableAvatarPieceType *this)

{
  *(undefined ***)this = &PTR_GetClass_0690d020;
  std::string::~string((string *)(this + 0x98));
  CollectableType::~CollectableType((CollectableType *)this);
  return;
}


/* CollectableAvatarPieceType::~CollectableAvatarPieceType() */

void __thiscall
CollectableAvatarPieceType::~CollectableAvatarPieceType(CollectableAvatarPieceType *this)

{
  ~CollectableAvatarPieceType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableAvatarPieceType::CollectableAvatarPieceType() */

void __thiscall
CollectableAvatarPieceType::CollectableAvatarPieceType(CollectableAvatarPieceType *this)

{
  size_t in_x2;
  
  CollectableType::CollectableType((CollectableType *)this);
  *(undefined ***)this = &PTR_GetClass_0690d020;
  Set8BytesTo0((string *)(this + 0x98));
  std::string::append((string *)(this + 0x98),"",in_x2);
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  return;
}


/* CollectableAvatarPieceType::StaticNew() */

CollectableAvatarPieceType * CollectableAvatarPieceType::StaticNew(void)

{
  CollectableAvatarPieceType *this;
  
  this = ::operator_new(0xa8);
  CollectableAvatarPieceType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAvatarPieceType::StaticClassInit() */

void CollectableAvatarPieceType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableAvatarPieceType");
    (*pcVar2)(plVar1,asStack_10,FUN_0490d648,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAvatarPieceType::StaticGetClass() */

long * CollectableAvatarPieceType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAvatarPieceType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableAvatarPieceType::GetClass() const */

long * CollectableAvatarPieceType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAvatarPieceType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

