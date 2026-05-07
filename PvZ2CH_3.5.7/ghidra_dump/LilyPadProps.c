// Class: LilyPadProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LilyPadProps::StaticClassInit() */

void LilyPadProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LilyPadProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f96714,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LilyPadProps::LilyPadProps() */

void __thiscall LilyPadProps::LilyPadProps(LilyPadProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a4f60;
  return;
}


/* LilyPadProps::StaticNew() */

LilyPadProps * LilyPadProps::StaticNew(void)

{
  LilyPadProps *this;
  
  this = ::operator_new(0x2b8);
  LilyPadProps(this);
  return this;
}


/* LilyPadProps::~LilyPadProps() */

void __thiscall LilyPadProps::~LilyPadProps(LilyPadProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4f60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LilyPadProps::~LilyPadProps() */

void __thiscall LilyPadProps::~LilyPadProps(LilyPadProps *this)

{
  ~LilyPadProps(this);
  AK::FreeHook(this);
  return;
}


/* LilyPadProps::StaticGetClass() */

long * LilyPadProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"LilyPadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LilyPadProps::GetClass() const */

long * LilyPadProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"LilyPadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

