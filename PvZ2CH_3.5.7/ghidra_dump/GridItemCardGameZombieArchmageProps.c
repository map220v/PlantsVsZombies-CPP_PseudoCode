// Class: GridItemCardGameZombieArchmageProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmageProps::StaticClassInit() */

void GridItemCardGameZombieArchmageProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieArchmageProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1ec0c,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieArchmageProps::StaticGetClass() */

long * GridItemCardGameZombieArchmageProps::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieArchmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieArchmageProps::GetClass() const */

long * GridItemCardGameZombieArchmageProps::GetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieArchmageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieArchmageProps::GridItemCardGameZombieArchmageProps() */

void __thiscall
GridItemCardGameZombieArchmageProps::GridItemCardGameZombieArchmageProps
          (GridItemCardGameZombieArchmageProps *this)

{
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d7d70;
  Set8BytesTo0((string *)(this + 0x170));
  *(undefined4 *)(this + 0x160) = 1;
  *(undefined4 *)(this + 0x164) = 3;
  *(undefined4 *)(this + 0x168) = 1;
  *(undefined4 *)(this + 0x16c) = 2;
  std::string::append((string *)(this + 0x170),"card_game_enemy_future_protector",2);
  return;
}


/* GridItemCardGameZombieArchmageProps::StaticNew() */

GridItemCardGameZombieArchmageProps * GridItemCardGameZombieArchmageProps::StaticNew(void)

{
  GridItemCardGameZombieArchmageProps *this;
  
  this = ::operator_new(0x178);
  GridItemCardGameZombieArchmageProps(this);
  return this;
}


/* GridItemCardGameZombieArchmageProps::~GridItemCardGameZombieArchmageProps() */

void __thiscall
GridItemCardGameZombieArchmageProps::~GridItemCardGameZombieArchmageProps
          (GridItemCardGameZombieArchmageProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7d70;
  std::string::~string((string *)(this + 0x170));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieArchmageProps::~GridItemCardGameZombieArchmageProps() */

void __thiscall
GridItemCardGameZombieArchmageProps::~GridItemCardGameZombieArchmageProps
          (GridItemCardGameZombieArchmageProps *this)

{
  ~GridItemCardGameZombieArchmageProps(this);
  AK::FreeHook(this);
  return;
}

