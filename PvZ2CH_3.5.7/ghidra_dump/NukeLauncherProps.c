// Class: NukeLauncherProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProps::StaticClassInit() */

void NukeLauncherProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04243ce8,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherProps::StaticGetClass() */

long * NukeLauncherProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProps::GetClass() const */

long * NukeLauncherProps::GetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProps::NukeLauncherProps() */

void __thiscall NukeLauncherProps::NukeLauncherProps(NukeLauncherProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068157f0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 700));
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  return;
}


/* NukeLauncherProps::StaticNew() */

NukeLauncherProps * NukeLauncherProps::StaticNew(void)

{
  NukeLauncherProps *this;
  
  this = ::operator_new(0x2d8);
  NukeLauncherProps(this);
  return this;
}


/* NukeLauncherProps::~NukeLauncherProps() */

void __thiscall NukeLauncherProps::~NukeLauncherProps(NukeLauncherProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068157f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* NukeLauncherProps::~NukeLauncherProps() */

void __thiscall NukeLauncherProps::~NukeLauncherProps(NukeLauncherProps *this)

{
  ~NukeLauncherProps(this);
  AK::FreeHook(this);
  return;
}

