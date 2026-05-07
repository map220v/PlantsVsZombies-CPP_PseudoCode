// Class: PVZ1OverwhelmModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1OverwhelmModule::StaticClassInit() */

void PVZ1OverwhelmModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1OverwhelmModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03f6c704,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1OverwhelmModule::StaticGetClass() */

long * PVZ1OverwhelmModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1OverwhelmModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1OverwhelmModule::~PVZ1OverwhelmModule() */

void __thiscall PVZ1OverwhelmModule::~PVZ1OverwhelmModule(PVZ1OverwhelmModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067a2090;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PVZ1OverwhelmModule::~PVZ1OverwhelmModule() */

void __thiscall PVZ1OverwhelmModule::~PVZ1OverwhelmModule(PVZ1OverwhelmModule *this)

{
  ~PVZ1OverwhelmModule(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1OverwhelmModule::PVZ1OverwhelmModule() */

void __thiscall PVZ1OverwhelmModule::PVZ1OverwhelmModule(PVZ1OverwhelmModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067a2090;
  return;
}


/* PVZ1OverwhelmModule::StaticNew() */

PVZ1OverwhelmModule * PVZ1OverwhelmModule::StaticNew(void)

{
  PVZ1OverwhelmModule *this;
  
  this = ::operator_new(0x18);
  PVZ1OverwhelmModule(this);
  return this;
}

