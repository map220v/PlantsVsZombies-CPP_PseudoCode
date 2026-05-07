// Class: PyreVineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PyreVineProps::StaticClassInit() */

void PyreVineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PyreVineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d29e4c,0x3f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PyreVineProps::StaticGetClass() */

long * PyreVineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PyreVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PyreVineProps::GetClass() const */

long * PyreVineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PyreVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PyreVineProps::PyreVineProps() */

void __thiscall PyreVineProps::PyreVineProps(PyreVineProps *this)

{
  bool bVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069abb80;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x3d0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x3e4) = 0x708;
  *(undefined8 *)(this + 0x3d0) = local_10;
  *(undefined4 *)(this + 0x3d8) = 3;
  *(undefined4 *)(this + 0x3dc) = 0x42200000;
  *(undefined4 *)(this + 1000) = 0x3e19999a;
  *(undefined4 *)(this + 0x3ec) = 0x3e99999a;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PyreVineProps::StaticNew() */

PyreVineProps * PyreVineProps::StaticNew(void)

{
  PyreVineProps *this;
  
  this = ::operator_new(0x3f0);
  PyreVineProps(this);
  return this;
}


/* PyreVineProps::~PyreVineProps() */

void __thiscall PyreVineProps::~PyreVineProps(PyreVineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069abb80;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PyreVineProps::~PyreVineProps() */

void __thiscall PyreVineProps::~PyreVineProps(PyreVineProps *this)

{
  ~PyreVineProps(this);
  AK::FreeHook(this);
  return;
}

