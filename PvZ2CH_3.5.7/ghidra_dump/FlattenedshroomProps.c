// Class: FlattenedshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlattenedshroomProps::StaticClassInit() */

void FlattenedshroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlattenedshroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfeb74,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlattenedshroomProps::StaticGetClass() */

long * FlattenedshroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FlattenedshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlattenedshroomProps::GetClass() const */

long * FlattenedshroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"FlattenedshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlattenedshroomProps::FlattenedshroomProps() */

void __thiscall FlattenedshroomProps::FlattenedshroomProps(FlattenedshroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x41700000;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR_GetClass_06743270;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  return;
}


/* FlattenedshroomProps::StaticNew() */

FlattenedshroomProps * FlattenedshroomProps::StaticNew(void)

{
  FlattenedshroomProps *this;
  
  this = ::operator_new(0x2c8);
  FlattenedshroomProps(this);
  return this;
}


/* FlattenedshroomProps::~FlattenedshroomProps() */

void __thiscall FlattenedshroomProps::~FlattenedshroomProps(FlattenedshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06743270;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* FlattenedshroomProps::~FlattenedshroomProps() */

void __thiscall FlattenedshroomProps::~FlattenedshroomProps(FlattenedshroomProps *this)

{
  ~FlattenedshroomProps(this);
  AK::FreeHook(this);
  return;
}

