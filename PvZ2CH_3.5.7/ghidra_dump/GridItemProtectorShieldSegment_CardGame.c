// Class: GridItemProtectorShieldSegment_CardGame


/* GridItemProtectorShieldSegment_CardGame::onGridItemInitialize() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::onGridItemInitialize
          (GridItemProtectorShieldSegment_CardGame *this)

{
  GridItemProtectorShieldSegment::onGridItemInitialize((GridItemProtectorShieldSegment *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegment_CardGame::StaticClassInit() */

void GridItemProtectorShieldSegment_CardGame::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProtectorShieldSegment_CardGame");
    (*pcVar2)(plVar1,asStack_10,FUN_04f45d38,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegment_CardGame::StaticGetClass() */

long * GridItemProtectorShieldSegment_CardGame::StaticGetClass(void)

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
  uVar2 = GridItemProtectorShieldSegment::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegment_CardGame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegment_CardGame::GetClass() const */

long * GridItemProtectorShieldSegment_CardGame::GetClass(void)

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
  uVar2 = GridItemProtectorShieldSegment::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegment_CardGame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegment_CardGame::GridItemProtectorShieldSegment_CardGame() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::GridItemProtectorShieldSegment_CardGame
          (GridItemProtectorShieldSegment_CardGame *this)

{
  GridItemProtectorShieldSegment::GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  *(undefined ***)this = &PTR_GetClass_06a1ad20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegment_CardGame_06a1afc8;
  return;
}


/* GridItemProtectorShieldSegment_CardGame::StaticNew() */

GridItemProtectorShieldSegment_CardGame * GridItemProtectorShieldSegment_CardGame::StaticNew(void)

{
  GridItemProtectorShieldSegment_CardGame *this;
  
  this = ::operator_new(0x1b0);
  GridItemProtectorShieldSegment_CardGame(this);
  return this;
}


/* GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame
          (GridItemProtectorShieldSegment_CardGame *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1ad20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegment_CardGame_06a1afc8;
  GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
            ((GridItemProtectorShieldSegment *)this);
  return;
}


/* non-virtual thunk to
   GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame
          (GridItemProtectorShieldSegment_CardGame *this)

{
  ~GridItemProtectorShieldSegment_CardGame(this + -0x10);
  return;
}


/* GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame
          (GridItemProtectorShieldSegment_CardGame *this)

{
  ~GridItemProtectorShieldSegment_CardGame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame() */

void __thiscall
GridItemProtectorShieldSegment_CardGame::~GridItemProtectorShieldSegment_CardGame
          (GridItemProtectorShieldSegment_CardGame *this)

{
  ~GridItemProtectorShieldSegment_CardGame(this + -0x10);
  return;
}

