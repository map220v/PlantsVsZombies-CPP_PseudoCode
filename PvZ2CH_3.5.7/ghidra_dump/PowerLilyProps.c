// Class: PowerLilyProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerLilyProps::StaticClassInit() */

void PowerLilyProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerLilyProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9339c,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerLilyProps::PowerLilyProps() */

void __thiscall PowerLilyProps::PowerLilyProps(PowerLilyProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a42e0;
  return;
}


/* PowerLilyProps::StaticNew() */

PowerLilyProps * PowerLilyProps::StaticNew(void)

{
  PowerLilyProps *this;
  
  this = ::operator_new(0x2b8);
  PowerLilyProps(this);
  return this;
}


/* PowerLilyProps::~PowerLilyProps() */

void __thiscall PowerLilyProps::~PowerLilyProps(PowerLilyProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a42e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PowerLilyProps::~PowerLilyProps() */

void __thiscall PowerLilyProps::~PowerLilyProps(PowerLilyProps *this)

{
  ~PowerLilyProps(this);
  AK::FreeHook(this);
  return;
}


/* PowerLilyProps::StaticGetClass() */

long * PowerLilyProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerLilyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerLilyProps::GetClass() const */

long * PowerLilyProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerLilyProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

