// Class: SaucedPlantConditionTargetProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaucedPlantConditionTargetProps::StaticClassInit() */

void SaucedPlantConditionTargetProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SaucedPlantConditionTargetProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04efe3ac,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SaucedPlantConditionTargetProps::StaticGetClass() */

long * SaucedPlantConditionTargetProps::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"SaucedPlantConditionTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaucedPlantConditionTargetProps::GetClass() const */

long * SaucedPlantConditionTargetProps::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"SaucedPlantConditionTargetProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaucedPlantConditionTargetProps::SaucedPlantConditionTargetProps() */

void __thiscall
SaucedPlantConditionTargetProps::SaucedPlantConditionTargetProps
          (SaucedPlantConditionTargetProps *this)

{
  GridItemBoardEntityConditionTargetProps::GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  *(undefined4 *)(this + 0x138) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_06a0b6a0;
  return;
}


/* SaucedPlantConditionTargetProps::StaticNew() */

SaucedPlantConditionTargetProps * SaucedPlantConditionTargetProps::StaticNew(void)

{
  SaucedPlantConditionTargetProps *this;
  
  this = ::operator_new(0x140);
  SaucedPlantConditionTargetProps(this);
  return this;
}


/* SaucedPlantConditionTargetProps::~SaucedPlantConditionTargetProps() */

void __thiscall
SaucedPlantConditionTargetProps::~SaucedPlantConditionTargetProps
          (SaucedPlantConditionTargetProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0b6a0;
  GridItemBoardEntityConditionTargetProps::~GridItemBoardEntityConditionTargetProps
            ((GridItemBoardEntityConditionTargetProps *)this);
  return;
}


/* SaucedPlantConditionTargetProps::~SaucedPlantConditionTargetProps() */

void __thiscall
SaucedPlantConditionTargetProps::~SaucedPlantConditionTargetProps
          (SaucedPlantConditionTargetProps *this)

{
  ~SaucedPlantConditionTargetProps(this);
  AK::FreeHook(this);
  return;
}

