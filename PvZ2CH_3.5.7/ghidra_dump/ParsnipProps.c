// Class: ParsnipProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipProps::StaticClassInit() */

void ParsnipProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParsnipProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bece28,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipProps::StaticGetClass() */

long * ParsnipProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProps::GetClass() const */

long * ParsnipProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ParsnipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipProps::ParsnipProps() */

void __thiscall ParsnipProps::ParsnipProps(ParsnipProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_0673fca0;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2c4) = 0x43160000;
  *(undefined4 *)(this + 0x2c8) = 0x3dcccccd;
  return;
}


/* ParsnipProps::StaticNew() */

ParsnipProps * ParsnipProps::StaticNew(void)

{
  ParsnipProps *this;
  
  this = ::operator_new(0x2d0);
  ParsnipProps(this);
  return this;
}


/* ParsnipProps::~ParsnipProps() */

void __thiscall ParsnipProps::~ParsnipProps(ParsnipProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673fca0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ParsnipProps::~ParsnipProps() */

void __thiscall ParsnipProps::~ParsnipProps(ParsnipProps *this)

{
  ~ParsnipProps(this);
  AK::FreeHook(this);
  return;
}

