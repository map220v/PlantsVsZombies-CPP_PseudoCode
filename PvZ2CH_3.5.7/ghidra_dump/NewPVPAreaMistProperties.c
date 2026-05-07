// Class: NewPVPAreaMistProperties


/* NewPVPAreaMistProperties::~NewPVPAreaMistProperties() */

void __thiscall NewPVPAreaMistProperties::~NewPVPAreaMistProperties(NewPVPAreaMistProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d020;
  NewPVPAreaProperties::~NewPVPAreaProperties((NewPVPAreaProperties *)this);
  return;
}


/* NewPVPAreaMistProperties::~NewPVPAreaMistProperties() */

void __thiscall NewPVPAreaMistProperties::~NewPVPAreaMistProperties(NewPVPAreaMistProperties *this)

{
  ~NewPVPAreaMistProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMistProperties::StaticClassInit() */

void NewPVPAreaMistProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaMistProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034c0e1c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMistProperties::StaticGetClass() */

long * NewPVPAreaMistProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAreaMistProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMistProperties::GetClass() const */

long * NewPVPAreaMistProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAreaMistProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMistProperties::NewPVPAreaMistProperties() */

void __thiscall NewPVPAreaMistProperties::NewPVPAreaMistProperties(NewPVPAreaMistProperties *this)

{
  NewPVPAreaProperties::NewPVPAreaProperties((NewPVPAreaProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664d020;
  return;
}


/* NewPVPAreaMistProperties::StaticNew() */

NewPVPAreaMistProperties * NewPVPAreaMistProperties::StaticNew(void)

{
  NewPVPAreaMistProperties *this;
  
  this = ::operator_new(0x30);
  NewPVPAreaMistProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMistProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
NewPVPAreaMistProperties::GatherResourceRequirements(NewPVPAreaMistProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"War_Misty");
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

