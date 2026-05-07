// Class: Reflection::RClassMember


/* Reflection::RClassMember::StaticGetClass() */

long * Reflection::RClassMember::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RClassMember",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RClassMember::GetClass() const */

long * Reflection::RClassMember::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RClassMember",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RClassMember::RClassMember() */

void __thiscall Reflection::RClassMember::RClassMember(RClassMember *this)

{
  RSymbol::RSymbol((RSymbol *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f740;
  Set8BytesTo0(this + 0x60);
  return;
}


/* Reflection::RClassMember::StaticNew() */

RClassMember * Reflection::RClassMember::StaticNew(void)

{
  RClassMember *this;
  
  this = ::operator_new(0x78);
  RClassMember(this);
  return this;
}


/* Reflection::RClassMember::~RClassMember() */

void __thiscall Reflection::RClassMember::~RClassMember(RClassMember *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f740;
  std::string::~string((string *)(this + 0x60));
  RSymbol::~RSymbol((RSymbol *)this);
  return;
}


/* Reflection::RClassMember::~RClassMember() */

void __thiscall Reflection::RClassMember::~RClassMember(RClassMember *this)

{
  ~RClassMember(this);
  AK::FreeHook(this);
  return;
}

