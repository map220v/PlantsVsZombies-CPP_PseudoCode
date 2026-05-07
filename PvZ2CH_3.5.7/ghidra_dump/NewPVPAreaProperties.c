// Class: NewPVPAreaProperties


/* NewPVPAreaProperties::~NewPVPAreaProperties() */

void __thiscall NewPVPAreaProperties::~NewPVPAreaProperties(NewPVPAreaProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664cda0;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* NewPVPAreaProperties::~NewPVPAreaProperties() */

void __thiscall NewPVPAreaProperties::~NewPVPAreaProperties(NewPVPAreaProperties *this)

{
  ~NewPVPAreaProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaProperties::StaticClassInit() */

void NewPVPAreaProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034c0630,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaProperties::StaticGetClass() */

long * NewPVPAreaProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaProperties::GetClass() const */

long * NewPVPAreaProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaProperties::NewPVPAreaProperties() */

void __thiscall NewPVPAreaProperties::NewPVPAreaProperties(NewPVPAreaProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0664cda0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* NewPVPAreaProperties::StaticNew() */

NewPVPAreaProperties * NewPVPAreaProperties::StaticNew(void)

{
  NewPVPAreaProperties *this;
  
  this = ::operator_new(0x20);
  NewPVPAreaProperties(this);
  return this;
}

