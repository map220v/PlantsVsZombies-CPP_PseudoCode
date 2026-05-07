// Class: OakProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakProps::StaticClassInit() */

void OakProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04210714,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakProps::StaticGetClass() */

long * OakProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakProps::GetClass() const */

long * OakProps::GetClass(void)

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
  (*pcVar3)(plVar1,"OakProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakProps::OakProps() */

void __thiscall OakProps::OakProps(OakProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_0680b840;
  return;
}


/* OakProps::StaticNew() */

OakProps * OakProps::StaticNew(void)

{
  OakProps *this;
  
  this = ::operator_new(0x2c0);
  OakProps(this);
  return this;
}


/* OakProps::~OakProps() */

void __thiscall OakProps::~OakProps(OakProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0680b840;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* OakProps::~OakProps() */

void __thiscall OakProps::~OakProps(OakProps *this)

{
  ~OakProps(this);
  AK::FreeHook(this);
  return;
}

