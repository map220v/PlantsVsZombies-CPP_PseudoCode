// Class: WaterMistTileSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterMistTileSubSystem::StaticClassInit() */

void WaterMistTileSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaterMistTileSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca9c1c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaterMistTileSubSystem::StaticGetClass() */

long * WaterMistTileSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaterMistTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterMistTileSubSystem::GetClass() const */

long * WaterMistTileSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"WaterMistTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterMistTileSubSystem::WaterMistTileSubSystem() */

void __thiscall WaterMistTileSubSystem::WaterMistTileSubSystem(WaterMistTileSubSystem *this)

{
  GridItemTileSubSystem::GridItemTileSubSystem((GridItemTileSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06998420;
  return;
}


/* WaterMistTileSubSystem::StaticNew() */

WaterMistTileSubSystem * WaterMistTileSubSystem::StaticNew(void)

{
  WaterMistTileSubSystem *this;
  
  this = ::operator_new(0x28);
  WaterMistTileSubSystem(this);
  return this;
}


/* WaterMistTileSubSystem::~WaterMistTileSubSystem() */

void __thiscall WaterMistTileSubSystem::~WaterMistTileSubSystem(WaterMistTileSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06998420;
  GridItemTileSubSystem::~GridItemTileSubSystem((GridItemTileSubSystem *)this);
  return;
}


/* WaterMistTileSubSystem::~WaterMistTileSubSystem() */

void __thiscall WaterMistTileSubSystem::~WaterMistTileSubSystem(WaterMistTileSubSystem *this)

{
  ~WaterMistTileSubSystem(this);
  AK::FreeHook(this);
  return;
}

