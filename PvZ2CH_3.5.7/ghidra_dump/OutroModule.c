// Class: OutroModule


/* OutroModule::OutroModule() */

void __thiscall OutroModule::OutroModule(OutroModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067937f0;
  return;
}


/* OutroModule::~OutroModule() */

void __thiscall OutroModule::~OutroModule(OutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067937f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* OutroModule::~OutroModule() */

void __thiscall OutroModule::~OutroModule(OutroModule *this)

{
  ~OutroModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OutroModule::StaticClassInit() */

void OutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"OutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0a840,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OutroModule::StaticGetClass() */

long * OutroModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OutroModule::StaticNew() */

OutroModule * OutroModule::StaticNew(void)

{
  OutroModule *this;
  
  this = ::operator_new(0x18);
  OutroModule(this);
  return this;
}

