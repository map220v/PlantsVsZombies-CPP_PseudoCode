// Class: PrimeText_PotentialTypeface_Alias


/* PrimeText_PotentialTypeface_Alias::~PrimeText_PotentialTypeface_Alias() */

void __thiscall
PrimeText_PotentialTypeface_Alias::~PrimeText_PotentialTypeface_Alias
          (PrimeText_PotentialTypeface_Alias *this)

{
  *(undefined ***)this = &PTR_GetClass_068339a0;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PrimeText_PotentialTypeface_Alias::~PrimeText_PotentialTypeface_Alias() */

void __thiscall
PrimeText_PotentialTypeface_Alias::~PrimeText_PotentialTypeface_Alias
          (PrimeText_PotentialTypeface_Alias *this)

{
  ~PrimeText_PotentialTypeface_Alias(this);
  AK::FreeHook(this);
  return;
}


/* PrimeText_PotentialTypeface_Alias::PrimeText_PotentialTypeface_Alias() */

void __thiscall
PrimeText_PotentialTypeface_Alias::PrimeText_PotentialTypeface_Alias
          (PrimeText_PotentialTypeface_Alias *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068339a0;
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* PrimeText_PotentialTypeface_Alias::StaticNew() */

PrimeText_PotentialTypeface_Alias * PrimeText_PotentialTypeface_Alias::StaticNew(void)

{
  PrimeText_PotentialTypeface_Alias *this;
  
  this = ::operator_new(0x18);
  PrimeText_PotentialTypeface_Alias(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimeText_PotentialTypeface_Alias::StaticClassInit() */

void PrimeText_PotentialTypeface_Alias::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimeText_PotentialTypeface_Alias");
    (*pcVar2)(plVar1,asStack_10,FUN_04325304,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimeText_PotentialTypeface_Alias::StaticGetClass() */

long * PrimeText_PotentialTypeface_Alias::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PrimeText_PotentialTypeface_Alias",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimeText_PotentialTypeface_Alias::GetClass() const */

long * PrimeText_PotentialTypeface_Alias::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PrimeText_PotentialTypeface_Alias",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

