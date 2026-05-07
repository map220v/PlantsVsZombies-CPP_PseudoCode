// Class: NewPVPAreaGuideDoorProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoorProperties::StaticClassInit() */

void NewPVPAreaGuideDoorProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPGuideDoorLocation");
    (*pcVar3)(plVar2,asStack_10,FUN_034c85a0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPAreaGuideDoorProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_034e00ec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaGuideDoorProperties::StaticGetClass() */

long * NewPVPAreaGuideDoorProperties::StaticGetClass(void)

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
  uVar2 = NewPVPAreaProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaGuideDoorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaGuideDoorProperties::GetClass() const */

long * NewPVPAreaGuideDoorProperties::GetClass(void)

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
  uVar2 = NewPVPAreaProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaGuideDoorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaGuideDoorProperties::NewPVPAreaGuideDoorProperties() */

void __thiscall
NewPVPAreaGuideDoorProperties::NewPVPAreaGuideDoorProperties(NewPVPAreaGuideDoorProperties *this)

{
  NewPVPAreaProperties::NewPVPAreaProperties((NewPVPAreaProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664d250;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* NewPVPAreaGuideDoorProperties::StaticNew() */

NewPVPAreaGuideDoorProperties * NewPVPAreaGuideDoorProperties::StaticNew(void)

{
  NewPVPAreaGuideDoorProperties *this;
  
  this = ::operator_new(0x38);
  NewPVPAreaGuideDoorProperties(this);
  return this;
}


/* NewPVPAreaGuideDoorProperties::~NewPVPAreaGuideDoorProperties() */

void __thiscall
NewPVPAreaGuideDoorProperties::~NewPVPAreaGuideDoorProperties(NewPVPAreaGuideDoorProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d250;
  std::vector<NewPVPGuideDoorLocation,std::allocator<NewPVPGuideDoorLocation>>::~vector
            ((vector<NewPVPGuideDoorLocation,std::allocator<NewPVPGuideDoorLocation>> *)
             (this + 0x20));
  NewPVPAreaProperties::~NewPVPAreaProperties((NewPVPAreaProperties *)this);
  return;
}


/* NewPVPAreaGuideDoorProperties::~NewPVPAreaGuideDoorProperties() */

void __thiscall
NewPVPAreaGuideDoorProperties::~NewPVPAreaGuideDoorProperties(NewPVPAreaGuideDoorProperties *this)

{
  ~NewPVPAreaGuideDoorProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoorProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
NewPVPAreaGuideDoorProperties::GatherResourceRequirements
          (NewPVPAreaGuideDoorProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieLostCityGuideGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

