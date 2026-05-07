// Class: GridItemPlacementChallengeModuleProps


/* GridItemPlacementChallengeModuleProps::GetDescription() const */

void __thiscall
GridItemPlacementChallengeModuleProps::GetDescription(GridItemPlacementChallengeModuleProps *this)

{
  TodStringTranslate(L"");
  return;
}


/* GridItemPlacementChallengeModuleProps::GetModuleClass() const */

long * GridItemPlacementChallengeModuleProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (GridItemPlacementChallengeModule::sClass != (long *)0x0) {
    return GridItemPlacementChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  GridItemPlacementChallengeModule::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementChallengeModule",uVar2,
            GridItemPlacementChallengeModule::StaticNew);
  GridItemPlacementChallengeModule::StaticClassInit();
  return GridItemPlacementChallengeModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlacementChallengeModuleProps::StaticClassInit() */

void GridItemPlacementChallengeModuleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlacementChallengeModuleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0369cb58,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlacementChallengeModuleProps::StaticGetClass() */

long * GridItemPlacementChallengeModuleProps::StaticGetClass(void)

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
  uVar2 = GridItemPlacementModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementChallengeModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementChallengeModuleProps::GetClass() const */

long * GridItemPlacementChallengeModuleProps::GetClass(void)

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
  uVar2 = GridItemPlacementModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlacementChallengeModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlacementChallengeModuleProps::GridItemPlacementChallengeModuleProps() */

void __thiscall
GridItemPlacementChallengeModuleProps::GridItemPlacementChallengeModuleProps
          (GridItemPlacementChallengeModuleProps *this)

{
  GridItemPlacementModuleProps::GridItemPlacementModuleProps((GridItemPlacementModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0667efa0;
  return;
}


/* GridItemPlacementChallengeModuleProps::StaticNew() */

GridItemPlacementChallengeModuleProps * GridItemPlacementChallengeModuleProps::StaticNew(void)

{
  GridItemPlacementChallengeModuleProps *this;
  
  this = ::operator_new(0x50);
  GridItemPlacementChallengeModuleProps(this);
  return this;
}


/* GridItemPlacementChallengeModuleProps::~GridItemPlacementChallengeModuleProps() */

void __thiscall
GridItemPlacementChallengeModuleProps::~GridItemPlacementChallengeModuleProps
          (GridItemPlacementChallengeModuleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667efa0;
  GridItemPlacementModuleProps::~GridItemPlacementModuleProps((GridItemPlacementModuleProps *)this);
  return;
}


/* GridItemPlacementChallengeModuleProps::~GridItemPlacementChallengeModuleProps() */

void __thiscall
GridItemPlacementChallengeModuleProps::~GridItemPlacementChallengeModuleProps
          (GridItemPlacementChallengeModuleProps *this)

{
  ~GridItemPlacementChallengeModuleProps(this);
  AK::FreeHook(this);
  return;
}

