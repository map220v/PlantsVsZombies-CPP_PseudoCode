// Class: Reflection::RField


/* Reflection::RField::InstanceToString(void const*) const */

void Reflection::RField::InstanceToString(void *param_1)

{
  long *plVar1;
  ulong uVar2;
  long in_x1;
  
  plVar1 = (long *)FUN_0517ebc4(*(undefined8 *)((long)param_1 + 0x80));
  uVar2 = FUN_0517ebc0(*(undefined4 *)((long)param_1 + 0x7c));
  (**(code **)(*plVar1 + 0x60))(plVar1,in_x1 + (uVar2 & 0xffffffff));
  return;
}


/* Reflection::RField::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&) const */

void __thiscall
Reflection::RField::InstanceRtonSync
          (RField *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)FUN_0517ebc4(*(undefined8 *)(this + 0x80));
  uVar2 = FUN_0517ebc0(*(undefined4 *)(this + 0x7c));
  (**(code **)(*plVar1 + 0x68))(plVar1,(long)param_1 + (uVar2 & 0xffffffff),param_2,param_3);
  return;
}


/* Reflection::RField::StaticGetClass() */

long * Reflection::RField::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RField",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RField::GetClass() const */

long * Reflection::RField::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RField",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RField::RField() */

void __thiscall Reflection::RField::RField(RField *this)

{
  RClassMember::RClassMember((RClassMember *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f7a0;
  return;
}


/* Reflection::RField::StaticNew() */

RField * Reflection::RField::StaticNew(void)

{
  RField *this;
  
  this = ::operator_new(0x88);
  RField(this);
  return this;
}


/* Reflection::RField::~RField() */

void __thiscall Reflection::RField::~RField(RField *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f7a0;
  RClassMember::~RClassMember((RClassMember *)this);
  return;
}


/* Reflection::RField::~RField() */

void __thiscall Reflection::RField::~RField(RField *this)

{
  ~RField(this);
  AK::FreeHook(this);
  return;
}

