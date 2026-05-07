// Class: DracaenaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DracaenaProps::StaticClassInit() */

void DracaenaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DracaenaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e39c98,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DracaenaProps::StaticGetClass() */

long * DracaenaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DracaenaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DracaenaProps::GetClass() const */

long * DracaenaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DracaenaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DracaenaProps::DracaenaProps() */

void __thiscall DracaenaProps::DracaenaProps(DracaenaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069dcab0;
  *(undefined4 *)(this + 0x2b8) = 0x42f00000;
  return;
}


/* DracaenaProps::StaticNew() */

DracaenaProps * DracaenaProps::StaticNew(void)

{
  DracaenaProps *this;
  
  this = ::operator_new(0x2c0);
  DracaenaProps(this);
  return this;
}


/* DracaenaProps::~DracaenaProps() */

void __thiscall DracaenaProps::~DracaenaProps(DracaenaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069dcab0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DracaenaProps::~DracaenaProps() */

void __thiscall DracaenaProps::~DracaenaProps(DracaenaProps *this)

{
  ~DracaenaProps(this);
  AK::FreeHook(this);
  return;
}

