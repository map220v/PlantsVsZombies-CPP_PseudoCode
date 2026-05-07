// Class: ScaredyshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScaredyshroomProps::StaticClassInit() */

void ScaredyshroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScaredyshroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f94c24,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScaredyshroomProps::ScaredyshroomProps() */

void __thiscall ScaredyshroomProps::ScaredyshroomProps(ScaredyshroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 700) = 3;
  *(undefined4 *)(this + 0x2c0) = 3;
  *(undefined ***)this = &PTR_GetClass_067a4920;
  return;
}


/* ScaredyshroomProps::StaticNew() */

ScaredyshroomProps * ScaredyshroomProps::StaticNew(void)

{
  ScaredyshroomProps *this;
  
  this = ::operator_new(0x2c8);
  ScaredyshroomProps(this);
  return this;
}


/* ScaredyshroomProps::~ScaredyshroomProps() */

void __thiscall ScaredyshroomProps::~ScaredyshroomProps(ScaredyshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4920;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ScaredyshroomProps::~ScaredyshroomProps() */

void __thiscall ScaredyshroomProps::~ScaredyshroomProps(ScaredyshroomProps *this)

{
  ~ScaredyshroomProps(this);
  AK::FreeHook(this);
  return;
}


/* ScaredyshroomProps::StaticGetClass() */

long * ScaredyshroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ScaredyshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ScaredyshroomProps::GetClass() const */

long * ScaredyshroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ScaredyshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

