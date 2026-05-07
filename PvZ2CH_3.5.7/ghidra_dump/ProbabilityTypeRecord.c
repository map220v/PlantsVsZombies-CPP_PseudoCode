// Class: ProbabilityTypeRecord


/* ProbabilityTypeRecord::~ProbabilityTypeRecord() */

void __thiscall ProbabilityTypeRecord::~ProbabilityTypeRecord(ProbabilityTypeRecord *this)

{
  *(undefined ***)this = &PTR_GetClass_067354c0;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* ProbabilityTypeRecord::~ProbabilityTypeRecord() */

void __thiscall ProbabilityTypeRecord::~ProbabilityTypeRecord(ProbabilityTypeRecord *this)

{
  ~ProbabilityTypeRecord(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityTypeRecord::StaticClassInit() */

void ProbabilityTypeRecord::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProbabilityTypeRecord");
    (*pcVar2)(plVar1,asStack_10,FUN_03b849fc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProbabilityTypeRecord::StaticGetClass() */

long * ProbabilityTypeRecord::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityTypeRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityTypeRecord::GetClass() const */

long * ProbabilityTypeRecord::GetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityTypeRecord",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityTypeRecord::ProbabilityTypeRecord() */

void __thiscall ProbabilityTypeRecord::ProbabilityTypeRecord(ProbabilityTypeRecord *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_067354c0;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  return;
}


/* ProbabilityTypeRecord::StaticNew() */

ProbabilityTypeRecord * ProbabilityTypeRecord::StaticNew(void)

{
  ProbabilityTypeRecord *this;
  
  this = ::operator_new(0x20);
  ProbabilityTypeRecord(this);
  return this;
}


/* ProbabilityTypeRecord::ProbabilityTypeRecord(ProbabilityTypeRecord&&) */

void __thiscall
ProbabilityTypeRecord::ProbabilityTypeRecord
          (ProbabilityTypeRecord *this,ProbabilityTypeRecord *param_1)

{
  undefined4 uVar1;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_067354c0;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* ProbabilityTypeRecord::ProbabilityTypeRecord(ProbabilityTypeRecord const&) */

void __thiscall
ProbabilityTypeRecord::ProbabilityTypeRecord
          (ProbabilityTypeRecord *this,ProbabilityTypeRecord *param_1)

{
  undefined4 uVar1;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_067354c0;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

