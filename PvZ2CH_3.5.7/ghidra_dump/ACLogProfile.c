// Class: ACLogProfile


/* ACLogProfile::ACLogProfile() */

void __thiscall ACLogProfile::ACLogProfile(ACLogProfile *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0660f7e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* ACLogProfile::~ACLogProfile() */

void __thiscall ACLogProfile::~ACLogProfile(ACLogProfile *this)

{
  *(undefined ***)this = &PTR_GetClass_0660f7e0;
  std::vector<S2C_ACLog,std::allocator<S2C_ACLog>>::~vector
            ((vector<S2C_ACLog,std::allocator<S2C_ACLog>> *)(this + 8));
  nop();
  return;
}


/* ACLogProfile::~ACLogProfile() */

void __thiscall ACLogProfile::~ACLogProfile(ACLogProfile *this)

{
  ~ACLogProfile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ACLogProfile::StaticClassInit() */

void ACLogProfile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ACLogProfile");
    (*pcVar2)(plVar1,asStack_10,FUN_03259230,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ACLogProfile::StaticGetClass() */

long * ACLogProfile::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ACLogProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ACLogProfile::GetClass() const */

long * ACLogProfile::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"ACLogProfile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ACLogProfile::StaticNew() */

ACLogProfile * ACLogProfile::StaticNew(void)

{
  ACLogProfile *this;
  
  this = ::operator_new(0x20);
  ACLogProfile(this);
  return this;
}


/* ACLogProfile::ACLogProfile(ACLogProfile const&) */

void __thiscall ACLogProfile::ACLogProfile(ACLogProfile *this,ACLogProfile *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0660f7e0;
  std::vector<S2C_ACLog,std::allocator<S2C_ACLog>>::vector
            ((vector<S2C_ACLog,std::allocator<S2C_ACLog>> *)(this + 8),(vector *)(param_1 + 8));
  return;
}


/* ACLogProfile::TEMPNAMEPLACEHOLDERVALUE(ACLogProfile const&) */

ACLogProfile * __thiscall ACLogProfile::operator=(ACLogProfile *this,ACLogProfile *param_1)

{
  std::vector<S2C_ACLog,std::allocator<S2C_ACLog>>::operator=
            ((vector<S2C_ACLog,std::allocator<S2C_ACLog>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}

