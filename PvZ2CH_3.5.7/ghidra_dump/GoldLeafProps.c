// Class: GoldLeafProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldLeafProps::StaticClassInit() */

void GoldLeafProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldLeafProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041121e4,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldLeafProps::StaticGetClass() */

long * GoldLeafProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GoldLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldLeafProps::GetClass() const */

long * GoldLeafProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GoldLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldLeafProps::GoldLeafProps() */

void __thiscall GoldLeafProps::GoldLeafProps(GoldLeafProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e58e0;
  return;
}


/* GoldLeafProps::StaticNew() */

GoldLeafProps * GoldLeafProps::StaticNew(void)

{
  GoldLeafProps *this;
  
  this = ::operator_new(0x2b8);
  GoldLeafProps(this);
  return this;
}


/* GoldLeafProps::~GoldLeafProps() */

void __thiscall GoldLeafProps::~GoldLeafProps(GoldLeafProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e58e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GoldLeafProps::~GoldLeafProps() */

void __thiscall GoldLeafProps::~GoldLeafProps(GoldLeafProps *this)

{
  ~GoldLeafProps(this);
  AK::FreeHook(this);
  return;
}

