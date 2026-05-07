// Class: HanabiTileSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HanabiTileSubSystem::StaticClassInit() */

void HanabiTileSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HanabiTileSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04caa258,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HanabiTileSubSystem::StaticGetClass() */

long * HanabiTileSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HanabiTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HanabiTileSubSystem::GetClass() const */

long * HanabiTileSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"HanabiTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HanabiTileSubSystem::HanabiTileSubSystem() */

void __thiscall HanabiTileSubSystem::HanabiTileSubSystem(HanabiTileSubSystem *this)

{
  GridItemTileSubSystem::GridItemTileSubSystem((GridItemTileSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06998690;
  return;
}


/* HanabiTileSubSystem::StaticNew() */

HanabiTileSubSystem * HanabiTileSubSystem::StaticNew(void)

{
  HanabiTileSubSystem *this;
  
  this = ::operator_new(0x28);
  HanabiTileSubSystem(this);
  return this;
}


/* HanabiTileSubSystem::~HanabiTileSubSystem() */

void __thiscall HanabiTileSubSystem::~HanabiTileSubSystem(HanabiTileSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06998690;
  GridItemTileSubSystem::~GridItemTileSubSystem((GridItemTileSubSystem *)this);
  return;
}


/* HanabiTileSubSystem::~HanabiTileSubSystem() */

void __thiscall HanabiTileSubSystem::~HanabiTileSubSystem(HanabiTileSubSystem *this)

{
  ~HanabiTileSubSystem(this);
  AK::FreeHook(this);
  return;
}

