// Class: PlantLauncherProps


/* PlantLauncherProps::PlantLauncherProps() */

void __thiscall PlantLauncherProps::PlantLauncherProps(PlantLauncherProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06826620;
  *(undefined4 *)(this + 0x2b8) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 700));
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  return;
}


/* PlantLauncherProps::~PlantLauncherProps() */

void __thiscall PlantLauncherProps::~PlantLauncherProps(PlantLauncherProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06826620;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantLauncherProps::~PlantLauncherProps() */

void __thiscall PlantLauncherProps::~PlantLauncherProps(PlantLauncherProps *this)

{
  ~PlantLauncherProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherProps::StaticClassInit() */

void PlantLauncherProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLauncherProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0428c5bc,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLauncherProps::StaticGetClass() */

long * PlantLauncherProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLauncherProps::GetClass() const */

long * PlantLauncherProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLauncherProps::StaticNew() */

PlantLauncherProps * PlantLauncherProps::StaticNew(void)

{
  PlantLauncherProps *this;
  
  this = ::operator_new(0x2d0);
  PlantLauncherProps(this);
  return this;
}

