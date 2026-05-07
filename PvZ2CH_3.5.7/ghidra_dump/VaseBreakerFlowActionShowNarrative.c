// Class: VaseBreakerFlowActionShowNarrative


/* VaseBreakerFlowActionShowNarrative::onNarrationFinished() */

void VaseBreakerFlowActionShowNarrative::onNarrationFinished(void)

{
  return;
}


/* VaseBreakerFlowActionShowNarrative::onUpdate() */

void __thiscall
VaseBreakerFlowActionShowNarrative::onUpdate(VaseBreakerFlowActionShowNarrative *this)

{
  char cVar1;
  CrazyNPCManager *this_00;
  
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  cVar1 = CrazyNPCManager::IsNarrationActive(this_00);
  if (cVar1 != '\0') {
    return;
  }
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionShowNarrative::onUpdate() */

void __thiscall
VaseBreakerFlowActionShowNarrative::onUpdate(VaseBreakerFlowActionShowNarrative *this)

{
  onUpdate(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowNarrative::StaticClassInit() */

void VaseBreakerFlowActionShowNarrative::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionShowNarrative");
    (*pcVar2)(plVar1,asStack_10,FUN_04973da0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionShowNarrative::StaticGetClass() */

long * VaseBreakerFlowActionShowNarrative::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionShowNarrative",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionShowNarrative::GetClass() const */

long * VaseBreakerFlowActionShowNarrative::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionShowNarrative",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionShowNarrative::VaseBreakerFlowActionShowNarrative() */

void __thiscall
VaseBreakerFlowActionShowNarrative::VaseBreakerFlowActionShowNarrative
          (VaseBreakerFlowActionShowNarrative *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917860;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionShowNarrative_06917908;
  Set8BytesTo0(this + 0x30);
  return;
}


/* VaseBreakerFlowActionShowNarrative::StaticNew() */

VaseBreakerFlowActionShowNarrative * VaseBreakerFlowActionShowNarrative::StaticNew(void)

{
  VaseBreakerFlowActionShowNarrative *this;
  
  this = ::operator_new(0x38);
  VaseBreakerFlowActionShowNarrative(this);
  return this;
}


/* VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative() */

void __thiscall
VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative
          (VaseBreakerFlowActionShowNarrative *this)

{
  *(undefined ***)this = &PTR_GetClass_06917860;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionShowNarrative_06917908;
  std::string::~string((string *)(this + 0x30));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative() */

void __thiscall
VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative
          (VaseBreakerFlowActionShowNarrative *this)

{
  ~VaseBreakerFlowActionShowNarrative(this + -0x10);
  return;
}


/* VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative() */

void __thiscall
VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative
          (VaseBreakerFlowActionShowNarrative *this)

{
  ~VaseBreakerFlowActionShowNarrative(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative() */

void __thiscall
VaseBreakerFlowActionShowNarrative::~VaseBreakerFlowActionShowNarrative
          (VaseBreakerFlowActionShowNarrative *this)

{
  ~VaseBreakerFlowActionShowNarrative(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowNarrative::onBegin() */

void __thiscall
VaseBreakerFlowActionShowNarrative::onBegin(VaseBreakerFlowActionShowNarrative *this)

{
  long lVar1;
  CrazyNPCManager *pCVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474184(this + 0x30);
  if (lVar1 != 0) {
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::
    Delegate0<VaseBreakerFlowActionShowNarrative,void(VaseBreakerFlowActionShowNarrative::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,this + 0x30,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionShowNarrative::onBegin() */

void __thiscall
VaseBreakerFlowActionShowNarrative::onBegin(VaseBreakerFlowActionShowNarrative *this)

{
  onBegin(this + -0x10);
  return;
}

