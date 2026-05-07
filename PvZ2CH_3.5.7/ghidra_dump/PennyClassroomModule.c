// Class: PennyClassroomModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomModule::StaticClassInit() */

void PennyClassroomModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyClassroomModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04df429c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassroomModule::StaticGetClass() */

long * PennyClassroomModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyClassroomModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyClassroomModule::PennyClassroomModule() */

void __thiscall PennyClassroomModule::PennyClassroomModule(PennyClassroomModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069cf800;
  return;
}


/* PennyClassroomModule::StaticNew() */

PennyClassroomModule * PennyClassroomModule::StaticNew(void)

{
  PennyClassroomModule *this;
  
  this = ::operator_new(0x18);
  PennyClassroomModule(this);
  return this;
}


/* PennyClassroomModule::~PennyClassroomModule() */

void __thiscall PennyClassroomModule::~PennyClassroomModule(PennyClassroomModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069cf800;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PennyClassroomModule::~PennyClassroomModule() */

void __thiscall PennyClassroomModule::~PennyClassroomModule(PennyClassroomModule *this)

{
  ~PennyClassroomModule(this);
  AK::FreeHook(this);
  return;
}

