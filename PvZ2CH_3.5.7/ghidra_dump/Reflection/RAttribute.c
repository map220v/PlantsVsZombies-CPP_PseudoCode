// Class: Reflection::RAttribute


/* Reflection::RAttribute::GetName() const */

void __thiscall Reflection::RAttribute::GetName(RAttribute *this)

{
  FUN_0547429c(this + 0x60);
  return;
}


/* Reflection::RAttribute::GetValue() const */

RAttribute * __thiscall Reflection::RAttribute::GetValue(RAttribute *this)

{
  return this + 0x70;
}


/* Reflection::RAttribute::StaticGetClass() */

long * Reflection::RAttribute::StaticGetClass(void)

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
  uVar2 = RSymbol::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RAttribute",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RAttribute::GetClass() const */

long * Reflection::RAttribute::GetClass(void)

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
  uVar2 = RSymbol::StaticGetClass();
  (*pcVar3)(plVar1,"Reflection::RAttribute",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RAttribute::RAttribute() */

void __thiscall Reflection::RAttribute::RAttribute(RAttribute *this)

{
  RSymbol::RSymbol((RSymbol *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f9e0;
  Set8BytesTo0(this + 0x60);
  CRefAttributeVariant::CRefAttributeVariant((CRefAttributeVariant *)(this + 0x70));
  return;
}


/* Reflection::RAttribute::StaticNew() */

RAttribute * Reflection::RAttribute::StaticNew(void)

{
  RAttribute *this;
  
  this = ::operator_new(0x90);
  RAttribute(this);
  return this;
}


/* Reflection::RAttribute::~RAttribute() */

void __thiscall Reflection::RAttribute::~RAttribute(RAttribute *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f9e0;
  CRefAttributeVariant::~CRefAttributeVariant((CRefAttributeVariant *)(this + 0x70));
  std::string::~string((string *)(this + 0x60));
  RSymbol::~RSymbol((RSymbol *)this);
  return;
}


/* Reflection::RAttribute::~RAttribute() */

void __thiscall Reflection::RAttribute::~RAttribute(RAttribute *this)

{
  ~RAttribute(this);
  AK::FreeHook(this);
  return;
}

