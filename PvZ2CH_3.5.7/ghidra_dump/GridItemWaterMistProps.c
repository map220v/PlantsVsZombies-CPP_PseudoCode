// Class: GridItemWaterMistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterMistProps::StaticClassInit() */

void GridItemWaterMistProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWaterMistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc0044,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterMistProps::StaticGetClass() */

long * GridItemWaterMistProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterMistProps::GetClass() const */

long * GridItemWaterMistProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWaterMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterMistProps::GridItemWaterMistProps() */

void __thiscall GridItemWaterMistProps::GridItemWaterMistProps(GridItemWaterMistProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_0699a840;
  *(undefined4 *)(this + 0xd8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd4) = 0x41000000;
  *(undefined4 *)(this + 0xdc) = 0x3ecccccd;
  *(undefined4 *)(this + 0xe0) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xe4) = 0x3ecccccd;
  *(undefined4 *)(this + 0xe8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xec) = 0x40000000;
  return;
}


/* GridItemWaterMistProps::StaticNew() */

GridItemWaterMistProps * GridItemWaterMistProps::StaticNew(void)

{
  GridItemWaterMistProps *this;
  
  this = ::operator_new(0xf0);
  GridItemWaterMistProps(this);
  return this;
}


/* GridItemWaterMistProps::~GridItemWaterMistProps() */

void __thiscall GridItemWaterMistProps::~GridItemWaterMistProps(GridItemWaterMistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699a840;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemWaterMistProps::~GridItemWaterMistProps() */

void __thiscall GridItemWaterMistProps::~GridItemWaterMistProps(GridItemWaterMistProps *this)

{
  ~GridItemWaterMistProps(this);
  AK::FreeHook(this);
  return;
}

