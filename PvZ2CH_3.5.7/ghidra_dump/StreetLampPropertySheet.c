// Class: StreetLampPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StreetLampPropertySheet::StaticClassInit() */

void StreetLampPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"StreetLampPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03fefdf4,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StreetLampPropertySheet::StaticGetClass() */

long * StreetLampPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StreetLampPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StreetLampPropertySheet::GetClass() const */

long * StreetLampPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"StreetLampPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StreetLampPropertySheet::StreetLampPropertySheet() */

void __thiscall StreetLampPropertySheet::StreetLampPropertySheet(StreetLampPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_067b1270;
  return;
}


/* StreetLampPropertySheet::StaticNew() */

StreetLampPropertySheet * StreetLampPropertySheet::StaticNew(void)

{
  StreetLampPropertySheet *this;
  
  this = ::operator_new(0x2c0);
  StreetLampPropertySheet(this);
  return this;
}


/* StreetLampPropertySheet::~StreetLampPropertySheet() */

void __thiscall StreetLampPropertySheet::~StreetLampPropertySheet(StreetLampPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067b1270;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StreetLampPropertySheet::~StreetLampPropertySheet() */

void __thiscall StreetLampPropertySheet::~StreetLampPropertySheet(StreetLampPropertySheet *this)

{
  ~StreetLampPropertySheet(this);
  AK::FreeHook(this);
  return;
}

