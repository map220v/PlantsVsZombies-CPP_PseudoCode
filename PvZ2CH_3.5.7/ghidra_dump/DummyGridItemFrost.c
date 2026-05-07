// Class: DummyGridItemFrost


/* DummyGridItemFrost::DummyGridItemFrost() */

void __thiscall DummyGridItemFrost::DummyGridItemFrost(DummyGridItemFrost *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_067abd80;
  *(undefined ***)(this + 0x10) = &PTR__DummyGridItemFrost_067ac798;
  return;
}


/* DummyGridItemFrost::StaticNew() */

DummyGridItemFrost * DummyGridItemFrost::StaticNew(void)

{
  DummyGridItemFrost *this;
  
  this = ::operator_new(0x800);
  DummyGridItemFrost(this);
  return this;
}


/* DummyGridItemFrost::~DummyGridItemFrost() */

void __thiscall DummyGridItemFrost::~DummyGridItemFrost(DummyGridItemFrost *this)

{
  int iVar1;
  int iVar2;
  Board *this_00;
  
  *(undefined ***)(this + 0x10) = &PTR__DummyGridItemFrost_067ac798;
  *(undefined ***)this = &PTR_GetClass_067abd80;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Board::SetGridSquareLocked(this_00,iVar1,iVar2,false);
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to DummyGridItemFrost::~DummyGridItemFrost() */

void __thiscall DummyGridItemFrost::~DummyGridItemFrost(DummyGridItemFrost *this)

{
  ~DummyGridItemFrost(this + -0x10);
  return;
}


/* DummyGridItemFrost::~DummyGridItemFrost() */

void __thiscall DummyGridItemFrost::~DummyGridItemFrost(DummyGridItemFrost *this)

{
  ~DummyGridItemFrost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DummyGridItemFrost::~DummyGridItemFrost() */

void __thiscall DummyGridItemFrost::~DummyGridItemFrost(DummyGridItemFrost *this)

{
  ~DummyGridItemFrost(this + -0x10);
  return;
}


/* DummyGridItemFrost::onInitialized() */

void __thiscall DummyGridItemFrost::onInitialized(DummyGridItemFrost *this)

{
  int iVar1;
  int iVar2;
  Board *this_00;
  
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Board::SetGridSquareLocked(this_00,iVar1,iVar2,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DummyGridItemFrost::StaticClassInit() */

void DummyGridItemFrost::StaticClassInit(void)

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
    std::string::string(asStack_10,"DummyGridItemFrost");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc7f88,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DummyGridItemFrost::StaticGetClass() */

long * DummyGridItemFrost::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"DummyGridItemFrost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DummyGridItemFrost::GetClass() const */

long * DummyGridItemFrost::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"DummyGridItemFrost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

