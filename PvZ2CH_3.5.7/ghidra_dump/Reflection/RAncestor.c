// Class: Reflection::RAncestor


/* Reflection::RAncestor::StaticGetClass() */

long * Reflection::RAncestor::StaticGetClass(void)

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
  uVar2 = RClassMember::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RAncestor",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RAncestor::GetClass() const */

long * Reflection::RAncestor::GetClass(void)

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
  uVar2 = RClassMember::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RAncestor",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RAncestor::RAncestor() */

void __thiscall Reflection::RAncestor::RAncestor(RAncestor *this)

{
  RClassMember::RClassMember((RClassMember *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f920;
  return;
}


/* Reflection::RAncestor::StaticNew() */

RAncestor * Reflection::RAncestor::StaticNew(void)

{
  RAncestor *this;
  
  this = ::operator_new(0x88);
  RAncestor(this);
  return this;
}


/* Reflection::RAncestor::~RAncestor() */

void __thiscall Reflection::RAncestor::~RAncestor(RAncestor *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f920;
  RClassMember::~RClassMember((RClassMember *)this);
  return;
}


/* Reflection::RAncestor::~RAncestor() */

void __thiscall Reflection::RAncestor::~RAncestor(RAncestor *this)

{
  ~RAncestor(this);
  AK::FreeHook(this);
  return;
}

