// Class: EggplantNinjaPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantNinjaPropertySheet::StaticClassInit() */

void EggplantNinjaPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantNinjaPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03c288b0,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantNinjaPropertySheet::StaticGetClass() */

long * EggplantNinjaPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EggplantNinjaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantNinjaPropertySheet::GetClass() const */

long * EggplantNinjaPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"EggplantNinjaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantNinjaPropertySheet::EggplantNinjaPropertySheet() */

void __thiscall
EggplantNinjaPropertySheet::EggplantNinjaPropertySheet(EggplantNinjaPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x3e4ccccd;
  *(undefined ***)this = &PTR_GetClass_0674b030;
  *(undefined4 *)(this + 0x2c0) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2c4) = 0x3dcccccd;
  return;
}


/* EggplantNinjaPropertySheet::StaticNew() */

EggplantNinjaPropertySheet * EggplantNinjaPropertySheet::StaticNew(void)

{
  EggplantNinjaPropertySheet *this;
  
  this = ::operator_new(0x2d0);
  EggplantNinjaPropertySheet(this);
  return this;
}


/* EggplantNinjaPropertySheet::~EggplantNinjaPropertySheet() */

void __thiscall
EggplantNinjaPropertySheet::~EggplantNinjaPropertySheet(EggplantNinjaPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0674b030;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EggplantNinjaPropertySheet::~EggplantNinjaPropertySheet() */

void __thiscall
EggplantNinjaPropertySheet::~EggplantNinjaPropertySheet(EggplantNinjaPropertySheet *this)

{
  ~EggplantNinjaPropertySheet(this);
  AK::FreeHook(this);
  return;
}

