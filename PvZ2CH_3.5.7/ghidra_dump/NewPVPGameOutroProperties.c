// Class: NewPVPGameOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameOutroProperties::StaticClassInit() */

void NewPVPGameOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGameOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034ba750,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameOutroProperties::StaticGetClass() */

long * NewPVPGameOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameOutroProperties::GetClass() const */

long * NewPVPGameOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameOutroProperties::GetModuleClass() const */

long * NewPVPGameOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPGameOutro::sClass != (long *)0x0) {
    return NewPVPGameOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPGameOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameOutro",uVar2,NewPVPGameOutro::StaticNew);
  NewPVPGameOutro::StaticClassInit();
  return NewPVPGameOutro::sClass;
}


/* NewPVPGameOutroProperties::NewPVPGameOutroProperties() */

void __thiscall
NewPVPGameOutroProperties::NewPVPGameOutroProperties(NewPVPGameOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06647710;
  return;
}


/* NewPVPGameOutroProperties::StaticNew() */

NewPVPGameOutroProperties * NewPVPGameOutroProperties::StaticNew(void)

{
  NewPVPGameOutroProperties *this;
  
  this = ::operator_new(0x40);
  NewPVPGameOutroProperties(this);
  return this;
}


/* NewPVPGameOutroProperties::~NewPVPGameOutroProperties() */

void __thiscall
NewPVPGameOutroProperties::~NewPVPGameOutroProperties(NewPVPGameOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06647710;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* NewPVPGameOutroProperties::~NewPVPGameOutroProperties() */

void __thiscall
NewPVPGameOutroProperties::~NewPVPGameOutroProperties(NewPVPGameOutroProperties *this)

{
  ~NewPVPGameOutroProperties(this);
  AK::FreeHook(this);
  return;
}

