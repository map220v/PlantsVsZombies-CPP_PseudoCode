// Class: NewPVPAreaMergeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMergeProperties::StaticClassInit() */

void NewPVPAreaMergeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaMergeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034ce260,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMergeProperties::StaticGetClass() */

long * NewPVPAreaMergeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAreaMergeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMergeProperties::GetClass() const */

long * NewPVPAreaMergeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAreaMergeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMergeProperties::NewPVPAreaMergeProperties() */

void __thiscall
NewPVPAreaMergeProperties::NewPVPAreaMergeProperties(NewPVPAreaMergeProperties *this)

{
  NewPVPAreaProperties::NewPVPAreaProperties((NewPVPAreaProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664d390;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 3;
  *(undefined4 *)(this + 0x4c) = 0x40400000;
  return;
}


/* NewPVPAreaMergeProperties::StaticNew() */

NewPVPAreaMergeProperties * NewPVPAreaMergeProperties::StaticNew(void)

{
  NewPVPAreaMergeProperties *this;
  
  this = ::operator_new(0x50);
  NewPVPAreaMergeProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMergeProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
NewPVPAreaMergeProperties::GatherResourceRequirements(NewPVPAreaMergeProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_New_PVP_Effect");
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


/* NewPVPAreaMergeProperties::~NewPVPAreaMergeProperties() */

void __thiscall
NewPVPAreaMergeProperties::~NewPVPAreaMergeProperties(NewPVPAreaMergeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d390;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  NewPVPAreaProperties::~NewPVPAreaProperties((NewPVPAreaProperties *)this);
  return;
}


/* NewPVPAreaMergeProperties::~NewPVPAreaMergeProperties() */

void __thiscall
NewPVPAreaMergeProperties::~NewPVPAreaMergeProperties(NewPVPAreaMergeProperties *this)

{
  ~NewPVPAreaMergeProperties(this);
  AK::FreeHook(this);
  return;
}

