// Class: PlantTypeCaulipower


/* PlantTypeCaulipower::getAvatarPlantFoodLayer() const */

PlantTypeCaulipower * __thiscall
PlantTypeCaulipower::getAvatarPlantFoodLayer(PlantTypeCaulipower *this)

{
  return this + 0x138;
}


/* PlantTypeCaulipower::PlantTypeCaulipower() */

void __thiscall PlantTypeCaulipower::PlantTypeCaulipower(PlantTypeCaulipower *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_0673b0c0;
  Set8BytesTo0(this + 0x138);
  return;
}


/* PlantTypeCaulipower::StaticNew() */

PlantTypeCaulipower * PlantTypeCaulipower::StaticNew(void)

{
  PlantTypeCaulipower *this;
  
  this = ::operator_new(0x140);
  PlantTypeCaulipower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeCaulipower::StaticClassInit() */

void PlantTypeCaulipower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeCaulipower");
    (*pcVar2)(plVar1,asStack_10,FUN_03bcd364,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeCaulipower::StaticGetClass() */

long * PlantTypeCaulipower::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeCaulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeCaulipower::GetClass() const */

long * PlantTypeCaulipower::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeCaulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeCaulipower::~PlantTypeCaulipower() */

void __thiscall PlantTypeCaulipower::~PlantTypeCaulipower(PlantTypeCaulipower *this)

{
  *(undefined ***)this = &PTR_GetClass_0673b0c0;
  std::string::~string((string *)(this + 0x138));
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeCaulipower::~PlantTypeCaulipower() */

void __thiscall PlantTypeCaulipower::~PlantTypeCaulipower(PlantTypeCaulipower *this)

{
  ~PlantTypeCaulipower(this);
  AK::FreeHook(this);
  return;
}

