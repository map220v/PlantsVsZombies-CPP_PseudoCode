// Class: ToxicWaterGridItemPoisonMistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToxicWaterGridItemPoisonMistProps::StaticClassInit() */

void ToxicWaterGridItemPoisonMistProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToxicWaterGridItemPoisonMistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ede4ac,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToxicWaterGridItemPoisonMistProps::StaticGetClass() */

long * ToxicWaterGridItemPoisonMistProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToxicWaterGridItemPoisonMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToxicWaterGridItemPoisonMistProps::GetClass() const */

long * ToxicWaterGridItemPoisonMistProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ToxicWaterGridItemPoisonMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToxicWaterGridItemPoisonMistProps::ToxicWaterGridItemPoisonMistProps() */

void __thiscall
ToxicWaterGridItemPoisonMistProps::ToxicWaterGridItemPoisonMistProps
          (ToxicWaterGridItemPoisonMistProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_069fd1e0;
  *(undefined4 *)(this + 0xd4) = 0x3e4ccccd;
  return;
}


/* ToxicWaterGridItemPoisonMistProps::StaticNew() */

ToxicWaterGridItemPoisonMistProps * ToxicWaterGridItemPoisonMistProps::StaticNew(void)

{
  ToxicWaterGridItemPoisonMistProps *this;
  
  this = ::operator_new(0xd8);
  ToxicWaterGridItemPoisonMistProps(this);
  return this;
}


/* ToxicWaterGridItemPoisonMistProps::~ToxicWaterGridItemPoisonMistProps() */

void __thiscall
ToxicWaterGridItemPoisonMistProps::~ToxicWaterGridItemPoisonMistProps
          (ToxicWaterGridItemPoisonMistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069fd1e0;
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* ToxicWaterGridItemPoisonMistProps::~ToxicWaterGridItemPoisonMistProps() */

void __thiscall
ToxicWaterGridItemPoisonMistProps::~ToxicWaterGridItemPoisonMistProps
          (ToxicWaterGridItemPoisonMistProps *this)

{
  ~ToxicWaterGridItemPoisonMistProps(this);
  AK::FreeHook(this);
  return;
}

