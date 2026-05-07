// Class: Reflection::REnumMember


/* Reflection::REnumMember::StaticGetClass() */

long * Reflection::REnumMember::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REnumMember",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REnumMember::GetClass() const */

long * Reflection::REnumMember::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REnumMember",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REnumMember::REnumMember() */

void __thiscall Reflection::REnumMember::REnumMember(REnumMember *this)

{
  RSymbol::RSymbol((RSymbol *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f980;
  Set8BytesTo0(this + 0x60);
  return;
}


/* Reflection::REnumMember::StaticNew() */

REnumMember * Reflection::REnumMember::StaticNew(void)

{
  REnumMember *this;
  
  this = ::operator_new(0x80);
  REnumMember(this);
  return this;
}


/* Reflection::REnumMember::~REnumMember() */

void __thiscall Reflection::REnumMember::~REnumMember(REnumMember *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f980;
  std::string::~string((string *)(this + 0x60));
  RSymbol::~RSymbol((RSymbol *)this);
  return;
}


/* Reflection::REnumMember::~REnumMember() */

void __thiscall Reflection::REnumMember::~REnumMember(REnumMember *this)

{
  ~REnumMember(this);
  AK::FreeHook(this);
  return;
}

