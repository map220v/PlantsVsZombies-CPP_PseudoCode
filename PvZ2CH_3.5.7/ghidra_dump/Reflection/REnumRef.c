// Class: Reflection::REnumRef


/* Reflection::REnumRef::StaticGetTypeCategory() */

undefined8 Reflection::REnumRef::StaticGetTypeCategory(void)

{
  return 0x100;
}


/* Reflection::REnumRef::GetTypeCategory() const */

undefined8 Reflection::REnumRef::GetTypeCategory(void)

{
  return 0x100;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::REnumRef::InstanceToString(void const*) const */

void Reflection::REnumRef::InstanceToString(void *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 in_x1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = (long *)FUN_05181a90((long)param_1 + 0x78);
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


/* Reflection::REnumRef::GetDereferencedType() const */

void __thiscall Reflection::REnumRef::GetDereferencedType(REnumRef *this)

{
  FUN_05181a90(this + 0x78);
  return;
}


/* Reflection::REnumRef::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

undefined1 __thiscall
Reflection::REnumRef::InstanceRtonSync
          (REnumRef *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_05181a90(this + 0x78);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


/* Reflection::REnumRef::StaticGetClass() */

long * Reflection::REnumRef::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REnumRef",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REnumRef::GetClass() const */

long * Reflection::REnumRef::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::REnumRef",uVar2,StaticNew);
  return sClass;
}


/* Reflection::REnumRef::REnumRef() */

void __thiscall Reflection::REnumRef::REnumRef(REnumRef *this)

{
  RNamedType::RNamedType((RNamedType *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f6b0;
  return;
}


/* Reflection::REnumRef::StaticNew() */

REnumRef * Reflection::REnumRef::StaticNew(void)

{
  REnumRef *this;
  
  this = ::operator_new(0x80);
  REnumRef(this);
  return this;
}


/* Reflection::REnumRef::~REnumRef() */

void __thiscall Reflection::REnumRef::~REnumRef(REnumRef *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f6b0;
  RNamedType::~RNamedType((RNamedType *)this);
  return;
}


/* Reflection::REnumRef::~REnumRef() */

void __thiscall Reflection::REnumRef::~REnumRef(REnumRef *this)

{
  ~REnumRef(this);
  AK::FreeHook(this);
  return;
}

