// Class: SmallCactusPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmallCactusPropertySheet::StaticClassInit() */

void SmallCactusPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"SmallCactusPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0417f1f4,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SmallCactusPropertySheet::StaticGetClass() */

long * SmallCactusPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SmallCactusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmallCactusPropertySheet::GetClass() const */

long * SmallCactusPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"SmallCactusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmallCactusPropertySheet::SmallCactusPropertySheet() */

void __thiscall SmallCactusPropertySheet::SmallCactusPropertySheet(SmallCactusPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_067f7970;
  *(undefined4 *)(this + 0x2b8) = 0x42200000;
  return;
}


/* SmallCactusPropertySheet::StaticNew() */

SmallCactusPropertySheet * SmallCactusPropertySheet::StaticNew(void)

{
  SmallCactusPropertySheet *this;
  
  this = ::operator_new(0x2c0);
  SmallCactusPropertySheet(this);
  return this;
}


/* SmallCactusPropertySheet::~SmallCactusPropertySheet() */

void __thiscall SmallCactusPropertySheet::~SmallCactusPropertySheet(SmallCactusPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7970;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SmallCactusPropertySheet::~SmallCactusPropertySheet() */

void __thiscall SmallCactusPropertySheet::~SmallCactusPropertySheet(SmallCactusPropertySheet *this)

{
  ~SmallCactusPropertySheet(this);
  AK::FreeHook(this);
  return;
}

