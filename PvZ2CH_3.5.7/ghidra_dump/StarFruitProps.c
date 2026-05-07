// Class: StarFruitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarFruitProps::StaticClassInit() */

void StarFruitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarFruitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f92900,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarFruitProps::StarFruitProps() */

void __thiscall StarFruitProps::StarFruitProps(StarFruitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067a4060;
  *(undefined4 *)(this + 700) = 0x3ea3d70a;
  return;
}


/* StarFruitProps::StaticNew() */

StarFruitProps * StarFruitProps::StaticNew(void)

{
  StarFruitProps *this;
  
  this = ::operator_new(0x2c0);
  StarFruitProps(this);
  return this;
}


/* StarFruitProps::~StarFruitProps() */

void __thiscall StarFruitProps::~StarFruitProps(StarFruitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4060;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StarFruitProps::~StarFruitProps() */

void __thiscall StarFruitProps::~StarFruitProps(StarFruitProps *this)

{
  ~StarFruitProps(this);
  AK::FreeHook(this);
  return;
}


/* StarFruitProps::StaticGetClass() */

long * StarFruitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarFruitProps::GetClass() const */

long * StarFruitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarFruitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

