// Class: Reflection::RType


/* Reflection::RType::StaticNew() */

undefined8 Reflection::RType::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Reflection::RType::InstanceToString(void const*) const */

void Reflection::RType::InstanceToString(void *param_1)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"?");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Reflection::RType::InstanceRtonSync(void*, Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey const&)
   const */

char __thiscall
Reflection::RType::InstanceRtonSync
          (RType *this,void *param_1,RtSerialRtonSync *param_2,RtSerialRtonKey *param_3)

{
  char cVar1;
  RtSerialRtonWriter *this_00;
  
  cVar1 = FUN_0517e1fc(param_2[0x10]);
  if (cVar1 != '\0') {
    this_00 = (RtSerialRtonWriter *)FUN_0517e20c(*(undefined8 *)(param_2 + 8));
    Sexy::RtSerialRtonWriter::WriteString(this_00,param_3,"???RType::InstanceRtonSync???",false);
  }
  return cVar1;
}


/* Reflection::RType::StaticGetClass() */

long * Reflection::RType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RType::GetClass() const */

long * Reflection::RType::GetClass(void)

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
  (*pcVar3)(plVar1,"Reflection::RType",uVar2,StaticNew);
  return sClass;
}


/* Reflection::RType::RType() */

void __thiscall Reflection::RType::RType(RType *this)

{
  RSymbol::RSymbol((RSymbol *)this);
  *(undefined ***)this = &PTR_GetClass_06a2f110;
  return;
}


/* Reflection::RType::~RType() */

void __thiscall Reflection::RType::~RType(RType *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2f110;
  RSymbol::~RSymbol((RSymbol *)this);
  return;
}


/* Reflection::RType::~RType() */

void __thiscall Reflection::RType::~RType(RType *this)

{
  ~RType(this);
  AK::FreeHook(this);
  return;
}

