// Class: PoisonMistTileSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonMistTileSubSystem::StaticClassInit() */

void PoisonMistTileSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonMistTileSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca9e30,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonMistTileSubSystem::StaticGetClass() */

long * PoisonMistTileSubSystem::StaticGetClass(void)

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
  uVar2 = GridItemTileSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonMistTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonMistTileSubSystem::GetClass() const */

long * PoisonMistTileSubSystem::GetClass(void)

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
  uVar2 = GridItemTileSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonMistTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonMistTileSubSystem::PoisonMistTileSubSystem() */

void __thiscall PoisonMistTileSubSystem::PoisonMistTileSubSystem(PoisonMistTileSubSystem *this)

{
  GridItemTileSubSystem::GridItemTileSubSystem((GridItemTileSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069984f0;
  return;
}


/* PoisonMistTileSubSystem::StaticNew() */

PoisonMistTileSubSystem * PoisonMistTileSubSystem::StaticNew(void)

{
  PoisonMistTileSubSystem *this;
  
  this = ::operator_new(0x28);
  PoisonMistTileSubSystem(this);
  return this;
}


/* PoisonMistTileSubSystem::~PoisonMistTileSubSystem() */

void __thiscall PoisonMistTileSubSystem::~PoisonMistTileSubSystem(PoisonMistTileSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069984f0;
  GridItemTileSubSystem::~GridItemTileSubSystem((GridItemTileSubSystem *)this);
  return;
}


/* PoisonMistTileSubSystem::~PoisonMistTileSubSystem() */

void __thiscall PoisonMistTileSubSystem::~PoisonMistTileSubSystem(PoisonMistTileSubSystem *this)

{
  ~PoisonMistTileSubSystem(this);
  AK::FreeHook(this);
  return;
}

