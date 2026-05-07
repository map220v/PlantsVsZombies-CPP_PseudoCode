// Class: Reflection::RProperty


/* Reflection::RProperty::StaticGetClass() */

long * Reflection::RProperty::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RProperty",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RProperty::GetClass() const */

long * Reflection::RProperty::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RProperty",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RProperty::RProperty() */

void __thiscall Reflection::RProperty::RProperty(RProperty *this)

{
  RClassMember::RClassMember((RClassMember *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f800;
  return;
}


/* Reflection::RProperty::StaticNew() */

RProperty * Reflection::RProperty::StaticNew(void)

{
  RProperty *this;
  
  this = ::operator_new(0x98);
  RProperty(this);
  return this;
}


/* Reflection::RProperty::~RProperty() */

void __thiscall Reflection::RProperty::~RProperty(RProperty *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f800;
  RClassMember::~RClassMember((RClassMember *)this);
  return;
}


/* Reflection::RProperty::~RProperty() */

void __thiscall Reflection::RProperty::~RProperty(RProperty *this)

{
  ~RProperty(this);
  AK::FreeHook(this);
  return;
}

