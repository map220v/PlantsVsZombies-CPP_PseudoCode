// Class: PlantExplodeSmallONut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantExplodeSmallONut::StaticClassInit() */

void PlantExplodeSmallONut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantExplodeSmallONut");
    (*pcVar2)(plVar1,asStack_10,FUN_039036f0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantExplodeSmallONut::StaticGetClass() */

long * PlantExplodeSmallONut::StaticGetClass(void)

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
  uVar2 = PlantExplodeONut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantExplodeSmallONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantExplodeSmallONut::GetClass() const */

long * PlantExplodeSmallONut::GetClass(void)

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
  uVar2 = PlantExplodeONut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantExplodeSmallONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantExplodeSmallONut::PlantExplodeSmallONut() */

void __thiscall PlantExplodeSmallONut::PlantExplodeSmallONut(PlantExplodeSmallONut *this)

{
  PlantExplodeONut::PlantExplodeONut((PlantExplodeONut *)this);
  *(undefined ***)this = &PTR_GetClass_066c09b0;
  return;
}


/* PlantExplodeSmallONut::StaticNew() */

PlantExplodeSmallONut * PlantExplodeSmallONut::StaticNew(void)

{
  PlantExplodeSmallONut *this;
  
  this = ::operator_new(0x40);
  PlantExplodeSmallONut(this);
  return this;
}


/* PlantExplodeSmallONut::~PlantExplodeSmallONut() */

void __thiscall PlantExplodeSmallONut::~PlantExplodeSmallONut(PlantExplodeSmallONut *this)

{
  *(undefined ***)this = &PTR_GetClass_066c09b0;
  PlantExplodeONut::~PlantExplodeONut((PlantExplodeONut *)this);
  return;
}


/* PlantExplodeSmallONut::~PlantExplodeSmallONut() */

void __thiscall PlantExplodeSmallONut::~PlantExplodeSmallONut(PlantExplodeSmallONut *this)

{
  ~PlantExplodeSmallONut(this);
  AK::FreeHook(this);
  return;
}

