// Class: ZombossIceAgeGlacierBlock


/* ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock() */

void __thiscall
ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock(ZombossIceAgeGlacierBlock *this)

{
  *(undefined ***)this = &PTR_GetClass_068d3b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombossIceAgeGlacierBlock_068d3e30;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock() */

void __thiscall
ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock(ZombossIceAgeGlacierBlock *this)

{
  ~ZombossIceAgeGlacierBlock(this + -0x10);
  return;
}


/* ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock() */

void __thiscall
ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock(ZombossIceAgeGlacierBlock *this)

{
  ~ZombossIceAgeGlacierBlock(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock() */

void __thiscall
ZombossIceAgeGlacierBlock::~ZombossIceAgeGlacierBlock(ZombossIceAgeGlacierBlock *this)

{
  ~ZombossIceAgeGlacierBlock(this + -0x10);
  return;
}


/* ZombossIceAgeGlacierBlock::ZombossIceAgeGlacierBlock() */

void __thiscall
ZombossIceAgeGlacierBlock::ZombossIceAgeGlacierBlock(ZombossIceAgeGlacierBlock *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_068d3b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombossIceAgeGlacierBlock_068d3e30;
  return;
}


/* ZombossIceAgeGlacierBlock::StaticNew() */

ZombossIceAgeGlacierBlock * ZombossIceAgeGlacierBlock::StaticNew(void)

{
  ZombossIceAgeGlacierBlock *this;
  
  this = ::operator_new(0x1c8);
  ZombossIceAgeGlacierBlock(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossIceAgeGlacierBlock::StaticClassInit() */

void ZombossIceAgeGlacierBlock::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossIceAgeGlacierBlock");
    (*pcVar2)(plVar1,asStack_10,FUN_0476b89c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossIceAgeGlacierBlock::StaticGetClass() */

long * ZombossIceAgeGlacierBlock::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossIceAgeGlacierBlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossIceAgeGlacierBlock::GetClass() const */

long * ZombossIceAgeGlacierBlock::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossIceAgeGlacierBlock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossIceAgeGlacierBlock::onKilled() */

void __thiscall ZombossIceAgeGlacierBlock::onKilled(ZombossIceAgeGlacierBlock *this)

{
  ComponentBase *this_00;
  
  this_00 = (ComponentBase *)BoardEntity::GetComponentRunner((BoardEntity *)this);
  ComponentBase::End(this_00);
  return;
}

