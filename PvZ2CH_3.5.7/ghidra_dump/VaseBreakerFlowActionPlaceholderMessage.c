// Class: VaseBreakerFlowActionPlaceholderMessage


/* VaseBreakerFlowActionPlaceholderMessage::onEnd() */

void VaseBreakerFlowActionPlaceholderMessage::onEnd(void)

{
  PrimeText *this;
  
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionPlaceholderMessage::onEnd() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::onEnd(VaseBreakerFlowActionPlaceholderMessage *this)

{
  onEnd();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionPlaceholderMessage::StaticClassInit() */

void VaseBreakerFlowActionPlaceholderMessage::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowActionPlaceholderMessage");
    (*pcVar2)(plVar1,asStack_10,FUN_049739f0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionPlaceholderMessage::StaticGetClass() */

long * VaseBreakerFlowActionPlaceholderMessage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionPlaceholderMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionPlaceholderMessage::GetClass() const */

long * VaseBreakerFlowActionPlaceholderMessage::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionPlaceholderMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionPlaceholderMessage::SetPlaceholderMessage(std::string const&, float) */

void VaseBreakerFlowActionPlaceholderMessage::SetPlaceholderMessage(string *param_1,float param_2)

{
  thunk_FUN_05475e00(param_1 + 0x30);
  *(float *)(param_1 + 0x38) = param_2;
  return;
}


/* VaseBreakerFlowActionPlaceholderMessage::VaseBreakerFlowActionPlaceholderMessage() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::VaseBreakerFlowActionPlaceholderMessage
          (VaseBreakerFlowActionPlaceholderMessage *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_069176a0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionPlaceholderMessage_06917748;
  Set8BytesTo0(this + 0x30);
  return;
}


/* VaseBreakerFlowActionPlaceholderMessage::StaticNew() */

VaseBreakerFlowActionPlaceholderMessage * VaseBreakerFlowActionPlaceholderMessage::StaticNew(void)

{
  VaseBreakerFlowActionPlaceholderMessage *this;
  
  this = ::operator_new(0x40);
  VaseBreakerFlowActionPlaceholderMessage(this);
  return this;
}


/* VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage
          (VaseBreakerFlowActionPlaceholderMessage *this)

{
  *(undefined ***)this = &PTR_GetClass_069176a0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionPlaceholderMessage_06917748;
  std::string::~string((string *)(this + 0x30));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage
          (VaseBreakerFlowActionPlaceholderMessage *this)

{
  ~VaseBreakerFlowActionPlaceholderMessage(this + -0x10);
  return;
}


/* VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage
          (VaseBreakerFlowActionPlaceholderMessage *this)

{
  ~VaseBreakerFlowActionPlaceholderMessage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::~VaseBreakerFlowActionPlaceholderMessage
          (VaseBreakerFlowActionPlaceholderMessage *this)

{
  ~VaseBreakerFlowActionPlaceholderMessage(this + -0x10);
  return;
}


/* VaseBreakerFlowActionPlaceholderMessage::onUpdate() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::onUpdate(VaseBreakerFlowActionPlaceholderMessage *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x38)) {
    return;
  }
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionPlaceholderMessage::onUpdate() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::onUpdate(VaseBreakerFlowActionPlaceholderMessage *this)

{
  onUpdate(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionPlaceholderMessage::onBegin() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::onBegin(VaseBreakerFlowActionPlaceholderMessage *this)

{
  bool bVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x30),gLawnApp);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,0);
  FUN_05476c50(auStack_10);
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x38) = *(float *)(this + 0x38) + fVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionPlaceholderMessage::onBegin() */

void __thiscall
VaseBreakerFlowActionPlaceholderMessage::onBegin(VaseBreakerFlowActionPlaceholderMessage *this)

{
  onBegin(this + -0x10);
  return;
}

