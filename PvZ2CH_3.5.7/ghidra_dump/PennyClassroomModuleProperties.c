// Class: PennyClassroomModuleProperties


/* PennyClassroomModuleProperties::GetModuleClass() const */

long * PennyClassroomModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PennyClassroomModule::sClass != (long *)0x0) {
    return PennyClassroomModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PennyClassroomModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PennyClassroomModule",uVar2,PennyClassroomModule::StaticNew);
  PennyClassroomModule::StaticClassInit();
  return PennyClassroomModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomModuleProperties::StaticClassInit() */

void PennyClassroomModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyClassroomModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04df4920,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassroomModuleProperties::StaticGetClass() */

long * PennyClassroomModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyClassroomModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyClassroomModuleProperties::GetClass() const */

long * PennyClassroomModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PennyClassroomModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyClassroomModuleProperties::PennyClassroomModuleProperties() */

void __thiscall
PennyClassroomModuleProperties::PennyClassroomModuleProperties(PennyClassroomModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069cf8b0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  return;
}


/* PennyClassroomModuleProperties::StaticNew() */

PennyClassroomModuleProperties * PennyClassroomModuleProperties::StaticNew(void)

{
  PennyClassroomModuleProperties *this;
  
  this = ::operator_new(0x70);
  PennyClassroomModuleProperties(this);
  return this;
}


/* PennyClassroomModuleProperties::~PennyClassroomModuleProperties() */

void __thiscall
PennyClassroomModuleProperties::~PennyClassroomModuleProperties
          (PennyClassroomModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069cf8b0;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PennyClassroomModuleProperties::~PennyClassroomModuleProperties() */

void __thiscall
PennyClassroomModuleProperties::~PennyClassroomModuleProperties
          (PennyClassroomModuleProperties *this)

{
  ~PennyClassroomModuleProperties(this);
  AK::FreeHook(this);
  return;
}

