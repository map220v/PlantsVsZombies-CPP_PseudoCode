// Class: DeltaInfoSummary


/* DeltaInfoSummary::~DeltaInfoSummary() */

void __thiscall DeltaInfoSummary::~DeltaInfoSummary(DeltaInfoSummary *this)

{
  *(undefined ***)this = &PTR_GetClass_06611b70;
  std::string::~string((string *)(this + 0x30));
  nop();
  return;
}


/* DeltaInfoSummary::~DeltaInfoSummary() */

void __thiscall DeltaInfoSummary::~DeltaInfoSummary(DeltaInfoSummary *this)

{
  ~DeltaInfoSummary(this);
  AK::FreeHook(this);
  return;
}


/* DeltaInfoSummary::DeltaInfoSummary() */

void __thiscall DeltaInfoSummary::DeltaInfoSummary(DeltaInfoSummary *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06611b70;
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* DeltaInfoSummary::StaticNew() */

DeltaInfoSummary * DeltaInfoSummary::StaticNew(void)

{
  DeltaInfoSummary *this;
  
  this = ::operator_new(0x48);
  DeltaInfoSummary(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeltaInfoSummary::StaticClassInit() */

void DeltaInfoSummary::StaticClassInit(void)

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
    std::string::string(asStack_10,"DeltaInfoSummary");
    (*pcVar2)(plVar1,asStack_10,FUN_03300ae8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeltaInfoSummary::StaticGetClass() */

long * DeltaInfoSummary::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DeltaInfoSummary",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeltaInfoSummary::GetClass() const */

long * DeltaInfoSummary::GetClass(void)

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
  (*pcVar3)(plVar1,"DeltaInfoSummary",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeltaInfoSummary::DeltaInfoSummary(DeltaInfoSummary const&) */

void __thiscall DeltaInfoSummary::DeltaInfoSummary(DeltaInfoSummary *this,DeltaInfoSummary *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_GetClass_06611b70;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x24) = uVar8;
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  return;
}


/* DeltaInfoSummary::TEMPNAMEPLACEHOLDERVALUE(DeltaInfoSummary const&) */

DeltaInfoSummary * __thiscall
DeltaInfoSummary::operator=(DeltaInfoSummary *this,DeltaInfoSummary *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar7;
  *(undefined4 *)(this + 0x24) = uVar8;
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  return this;
}

