// Class: VaseBreakerFlowActionWait


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionWait::StaticClassInit() */

void VaseBreakerFlowActionWait::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionWait");
    (*pcVar2)(plVar1,asStack_10,FUN_049734b0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionWait::StaticGetClass() */

long * VaseBreakerFlowActionWait::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionWait",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionWait::GetClass() const */

long * VaseBreakerFlowActionWait::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionWait",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionWait::SetWaitTime(float) */

void __thiscall
VaseBreakerFlowActionWait::SetWaitTime(VaseBreakerFlowActionWait *this,float param_1)

{
  *(float *)(this + 0x34) = param_1;
  return;
}


/* VaseBreakerFlowActionWait::VaseBreakerFlowActionWait() */

void __thiscall
VaseBreakerFlowActionWait::VaseBreakerFlowActionWait(VaseBreakerFlowActionWait *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917320;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionWait_069173c8;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* VaseBreakerFlowActionWait::StaticNew() */

VaseBreakerFlowActionWait * VaseBreakerFlowActionWait::StaticNew(void)

{
  VaseBreakerFlowActionWait *this;
  
  this = ::operator_new(0x38);
  VaseBreakerFlowActionWait(this);
  return this;
}


/* VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait() */

void __thiscall
VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait(VaseBreakerFlowActionWait *this)

{
  *(undefined ***)this = &PTR_GetClass_06917320;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionWait_069173c8;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait() */

void __thiscall
VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait(VaseBreakerFlowActionWait *this)

{
  ~VaseBreakerFlowActionWait(this + -0x10);
  return;
}


/* VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait() */

void __thiscall
VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait(VaseBreakerFlowActionWait *this)

{
  ~VaseBreakerFlowActionWait(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait() */

void __thiscall
VaseBreakerFlowActionWait::~VaseBreakerFlowActionWait(VaseBreakerFlowActionWait *this)

{
  ~VaseBreakerFlowActionWait(this + -0x10);
  return;
}


/* VaseBreakerFlowActionWait::onBegin() */

void __thiscall VaseBreakerFlowActionWait::onBegin(VaseBreakerFlowActionWait *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionWait::onBegin() */

void __thiscall VaseBreakerFlowActionWait::onBegin(VaseBreakerFlowActionWait *this)

{
  onBegin(this + -0x10);
  return;
}


/* VaseBreakerFlowActionWait::onUpdate() */

void __thiscall VaseBreakerFlowActionWait::onUpdate(VaseBreakerFlowActionWait *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x34) + *(float *)(this + 0x30)) {
    return;
  }
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionWait::onUpdate() */

void __thiscall VaseBreakerFlowActionWait::onUpdate(VaseBreakerFlowActionWait *this)

{
  onUpdate(this + -0x10);
  return;
}

