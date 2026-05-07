// Class: GroundCherryPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GroundCherryPropertySheet::StaticClassInit() */

void GroundCherryPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GroundCherryPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0422baec,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GroundCherryPropertySheet::StaticGetClass() */

long * GroundCherryPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GroundCherryPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GroundCherryPropertySheet::GetClass() const */

long * GroundCherryPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GroundCherryPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GroundCherryPropertySheet::GroundCherryPropertySheet() */

void __thiscall
GroundCherryPropertySheet::GroundCherryPropertySheet(GroundCherryPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_06810280;
  *(undefined4 *)(this + 700) = 0x42700000;
  return;
}


/* GroundCherryPropertySheet::StaticNew() */

GroundCherryPropertySheet * GroundCherryPropertySheet::StaticNew(void)

{
  GroundCherryPropertySheet *this;
  
  this = ::operator_new(0x2c0);
  GroundCherryPropertySheet(this);
  return this;
}


/* GroundCherryPropertySheet::~GroundCherryPropertySheet() */

void __thiscall
GroundCherryPropertySheet::~GroundCherryPropertySheet(GroundCherryPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06810280;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GroundCherryPropertySheet::~GroundCherryPropertySheet() */

void __thiscall
GroundCherryPropertySheet::~GroundCherryPropertySheet(GroundCherryPropertySheet *this)

{
  ~GroundCherryPropertySheet(this);
  AK::FreeHook(this);
  return;
}

