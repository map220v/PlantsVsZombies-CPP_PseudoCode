// Class: DropwaterTileSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropwaterTileSubSystem::StaticClassInit() */

void DropwaterTileSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropwaterTileSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04caa044,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropwaterTileSubSystem::StaticGetClass() */

long * DropwaterTileSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DropwaterTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropwaterTileSubSystem::GetClass() const */

long * DropwaterTileSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"DropwaterTileSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropwaterTileSubSystem::DropwaterTileSubSystem() */

void __thiscall DropwaterTileSubSystem::DropwaterTileSubSystem(DropwaterTileSubSystem *this)

{
  GridItemTileSubSystem::GridItemTileSubSystem((GridItemTileSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069985c0;
  return;
}


/* DropwaterTileSubSystem::StaticNew() */

DropwaterTileSubSystem * DropwaterTileSubSystem::StaticNew(void)

{
  DropwaterTileSubSystem *this;
  
  this = ::operator_new(0x28);
  DropwaterTileSubSystem(this);
  return this;
}


/* DropwaterTileSubSystem::~DropwaterTileSubSystem() */

void __thiscall DropwaterTileSubSystem::~DropwaterTileSubSystem(DropwaterTileSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069985c0;
  GridItemTileSubSystem::~GridItemTileSubSystem((GridItemTileSubSystem *)this);
  return;
}


/* DropwaterTileSubSystem::~DropwaterTileSubSystem() */

void __thiscall DropwaterTileSubSystem::~DropwaterTileSubSystem(DropwaterTileSubSystem *this)

{
  ~DropwaterTileSubSystem(this);
  AK::FreeHook(this);
  return;
}

