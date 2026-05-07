// Class: Reflection::RUnknownNamedType


/* Reflection::RUnknownNamedType::StaticGetTypeCategory() */

undefined8 Reflection::RUnknownNamedType::StaticGetTypeCategory(void)

{
  return 0x10;
}


/* Reflection::RUnknownNamedType::GetTypeCategory() const */

undefined8 Reflection::RUnknownNamedType::GetTypeCategory(void)

{
  return 0x10;
}


/* Reflection::RUnknownNamedType::StaticGetClass() */

long * Reflection::RUnknownNamedType::StaticGetClass(void)

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
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RUnknownNamedType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RUnknownNamedType::GetClass() const */

long * Reflection::RUnknownNamedType::GetClass(void)

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
  uVar2 = RNamedType::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RUnknownNamedType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RUnknownNamedType::RUnknownNamedType() */

void __thiscall Reflection::RUnknownNamedType::RUnknownNamedType(RUnknownNamedType *this)

{
  RNamedType::RNamedType((RNamedType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f470;
  return;
}


/* Reflection::RUnknownNamedType::StaticNew() */

RUnknownNamedType * Reflection::RUnknownNamedType::StaticNew(void)

{
  RUnknownNamedType *this;
  
  this = ::operator_new(0x78);
  RUnknownNamedType(this);
  return this;
}


/* Reflection::RUnknownNamedType::~RUnknownNamedType() */

void __thiscall Reflection::RUnknownNamedType::~RUnknownNamedType(RUnknownNamedType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f470;
  RNamedType::~RNamedType((RNamedType *)this);
  return;
}


/* Reflection::RUnknownNamedType::~RUnknownNamedType() */

void __thiscall Reflection::RUnknownNamedType::~RUnknownNamedType(RUnknownNamedType *this)

{
  ~RUnknownNamedType(this);
  AK::FreeHook(this);
  return;
}

