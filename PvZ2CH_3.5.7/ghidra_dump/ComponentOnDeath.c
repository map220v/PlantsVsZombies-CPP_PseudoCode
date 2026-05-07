// Class: ComponentOnDeath


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentOnDeath::StaticClassInit() */

void ComponentOnDeath::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentOnDeath");
    (*pcVar2)(plVar1,asStack_10,FUN_03b88174,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentOnDeath::StaticGetClass() */

long * ComponentOnDeath::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentOnDeath",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentOnDeath::GetClass() const */

long * ComponentOnDeath::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentOnDeath",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentOnDeath::ComponentOnDeath() */

void __thiscall ComponentOnDeath::ComponentOnDeath(ComponentOnDeath *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_06735860;
  return;
}


/* ComponentOnDeath::StaticNew() */

ComponentOnDeath * ComponentOnDeath::StaticNew(void)

{
  ComponentOnDeath *this;
  
  this = ::operator_new(0x30);
  ComponentOnDeath(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentOnDeath::onEnd() */

void __thiscall ComponentOnDeath::onEnd(ComponentOnDeath *this)

{
  char cVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x98))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentOnDeath::~ComponentOnDeath() */

void __thiscall ComponentOnDeath::~ComponentOnDeath(ComponentOnDeath *this)

{
  *(undefined ***)this = &PTR_GetClass_06735860;
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentOnDeath::~ComponentOnDeath() */

void __thiscall ComponentOnDeath::~ComponentOnDeath(ComponentOnDeath *this)

{
  ~ComponentOnDeath(this);
  AK::FreeHook(this);
  return;
}

