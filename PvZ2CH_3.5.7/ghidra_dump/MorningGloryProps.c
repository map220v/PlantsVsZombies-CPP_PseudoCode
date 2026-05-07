// Class: MorningGloryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryProps::StaticClassInit() */

void MorningGloryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MorningGloryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04175e98,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryProps::StaticGetClass() */

long * MorningGloryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryProps::GetClass() const */

long * MorningGloryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryProps::MorningGloryProps() */

void __thiscall MorningGloryProps::MorningGloryProps(MorningGloryProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 2;
  *(undefined ***)this = &PTR_GetClass_067f5720;
  *(undefined4 *)(this + 700) = 3;
  *(undefined4 *)(this + 0x2c0) = 0x3e800000;
  *(undefined4 *)(this + 0x2c4) = 0x3f4ccccd;
  return;
}


/* MorningGloryProps::StaticNew() */

MorningGloryProps * MorningGloryProps::StaticNew(void)

{
  MorningGloryProps *this;
  
  this = ::operator_new(0x2c8);
  MorningGloryProps(this);
  return this;
}


/* MorningGloryProps::~MorningGloryProps() */

void __thiscall MorningGloryProps::~MorningGloryProps(MorningGloryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5720;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MorningGloryProps::~MorningGloryProps() */

void __thiscall MorningGloryProps::~MorningGloryProps(MorningGloryProps *this)

{
  ~MorningGloryProps(this);
  AK::FreeHook(this);
  return;
}

