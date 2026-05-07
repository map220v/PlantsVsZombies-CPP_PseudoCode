// Class: GridItemPlantCrackerFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlowerProps::StaticClassInit() */

void GridItemPlantCrackerFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlantCrackerFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040a3678,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlantCrackerFlowerProps::StaticGetClass() */

long * GridItemPlantCrackerFlowerProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlantCrackerFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlantCrackerFlowerProps::GetClass() const */

long * GridItemPlantCrackerFlowerProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlantCrackerFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlowerProps::GridItemPlantCrackerFlowerProps() */

void __thiscall
GridItemPlantCrackerFlowerProps::GridItemPlantCrackerFlowerProps
          (GridItemPlantCrackerFlowerProps *this)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_067d12d0;
  std::string::string((string *)(this + 0xd8),"PlantCrackerPlantfoodAvatarBomb");
  nop();
  std::string::string((string *)(this + 0xe0),"PlantCrackerPlantfoodAvatarBomb");
  nop();
  bVar2 = lVar1 == ___stack_chk_guard;
  *(undefined4 *)(this + 0xf0) = 0x3f800000;
  *(undefined4 *)(this + 0xe8) = 0x3f88f5c3;
  *(undefined4 *)(this + 0xec) = 0x43960000;
  *(undefined4 *)(this + 0xf4) = 0x42480000;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlantCrackerFlowerProps::StaticNew() */

GridItemPlantCrackerFlowerProps * GridItemPlantCrackerFlowerProps::StaticNew(void)

{
  GridItemPlantCrackerFlowerProps *this;
  
  this = ::operator_new(0xf8);
  GridItemPlantCrackerFlowerProps(this);
  return this;
}


/* GridItemPlantCrackerFlowerProps::~GridItemPlantCrackerFlowerProps() */

void __thiscall
GridItemPlantCrackerFlowerProps::~GridItemPlantCrackerFlowerProps
          (GridItemPlantCrackerFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d12d0;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemPlantCrackerFlowerProps::~GridItemPlantCrackerFlowerProps() */

void __thiscall
GridItemPlantCrackerFlowerProps::~GridItemPlantCrackerFlowerProps
          (GridItemPlantCrackerFlowerProps *this)

{
  ~GridItemPlantCrackerFlowerProps(this);
  AK::FreeHook(this);
  return;
}

