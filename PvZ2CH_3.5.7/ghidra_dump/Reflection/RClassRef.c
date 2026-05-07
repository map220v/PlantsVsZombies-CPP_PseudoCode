// Class: Reflection::RClassRef


/* Reflection::RClassRef::StaticGetTypeCategory() */

undefined8 Reflection::RClassRef::StaticGetTypeCategory(void)

{
  return 0x40;
}


/* Reflection::RClassRef::GetTypeCategory() const */

undefined8 Reflection::RClassRef::GetTypeCategory(void)

{
  return 0x40;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RClassRef::InstanceToString(void const*) const */

void Reflection::RClassRef::InstanceToString(void *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = (long *)FUN_05181860((long)param_1 + 0x78);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"?");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x60))(plVar2,in_x1);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Reflection::RClassRef::GetDereferencedType() const */

void __thiscall Reflection::RClassRef::GetDereferencedType(RClassRef *this)

{
  FUN_05181860(this + 0x78);
  return;
}


/* Reflection::RClassRef::InstanceNavigatePath(void*&, std::string&, Reflection::RType*&) const */

undefined1 __thiscall
Reflection::RClassRef::InstanceNavigatePath
          (RClassRef *this,void **param_1,string *param_2,RType **param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_05181860(this + 0x78);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* Reflection::RClassRef::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

undefined1 __thiscall
Reflection::RClassRef::InstanceRtonSync
          (RClassRef *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_05181860(this + 0x78);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* Reflection::RClassRef::StaticGetClass() */

long * Reflection::RClassRef::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RClassRef",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RClassRef::GetClass() const */

long * Reflection::RClassRef::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RClassRef",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RClassRef::RClassRef() */

void __thiscall Reflection::RClassRef::RClassRef(RClassRef *this)

{
  RNamedType::RNamedType((RNamedType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f590;
  return;
}


/* Reflection::RClassRef::StaticNew() */

RClassRef * Reflection::RClassRef::StaticNew(void)

{
  RClassRef *this;
  
  this = ::operator_new(0x80);
  RClassRef(this);
  return this;
}


/* Reflection::RClassRef::~RClassRef() */

void __thiscall Reflection::RClassRef::~RClassRef(RClassRef *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f590;
  RNamedType::~RNamedType((RNamedType *)this);
  return;
}


/* Reflection::RClassRef::~RClassRef() */

void __thiscall Reflection::RClassRef::~RClassRef(RClassRef *this)

{
  ~RClassRef(this);
  AK::FreeHook(this);
  return;
}

