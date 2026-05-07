// Class: InfernoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfernoProps::StaticClassInit() */

void InfernoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"InfernoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b0c75c,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InfernoProps::StaticGetClass() */

long * InfernoProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoProps::GetClass() const */

long * InfernoProps::GetClass(void)

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
  (*pcVar3)(plVar1,"InfernoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InfernoProps::InfernoProps() */

void __thiscall InfernoProps::InfernoProps(InfernoProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x40400000;
  *(undefined4 *)(this + 0x2c8) = 3;
  *(undefined ***)this = &PTR_GetClass_0672b360;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  return;
}


/* InfernoProps::StaticNew() */

InfernoProps * InfernoProps::StaticNew(void)

{
  InfernoProps *this;
  
  this = ::operator_new(0x2d0);
  InfernoProps(this);
  return this;
}


/* InfernoProps::~InfernoProps() */

void __thiscall InfernoProps::~InfernoProps(InfernoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672b360;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* InfernoProps::~InfernoProps() */

void __thiscall InfernoProps::~InfernoProps(InfernoProps *this)

{
  ~InfernoProps(this);
  AK::FreeHook(this);
  return;
}

