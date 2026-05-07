// Class: VaseBreakerFlowActionClearBoard


/* VaseBreakerFlowActionClearBoard::onBegin() */

void __thiscall VaseBreakerFlowActionClearBoard::onBegin(VaseBreakerFlowActionClearBoard *this)

{
  Board::ClearAllEntitiesAndCollectCollectables(*(Board **)(gLawnApp + 0x9f0));
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionClearBoard::onBegin() */

void __thiscall VaseBreakerFlowActionClearBoard::onBegin(VaseBreakerFlowActionClearBoard *this)

{
  onBegin(this + -0x10);
  return;
}


/* VaseBreakerFlowActionClearBoard::StaticGetClass() */

long * VaseBreakerFlowActionClearBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionClearBoard",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionClearBoard::GetClass() const */

long * VaseBreakerFlowActionClearBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionClearBoard",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionClearBoard::VaseBreakerFlowActionClearBoard() */

void __thiscall
VaseBreakerFlowActionClearBoard::VaseBreakerFlowActionClearBoard
          (VaseBreakerFlowActionClearBoard *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917a20;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionClearBoard_06917ac8;
  return;
}


/* VaseBreakerFlowActionClearBoard::StaticNew() */

VaseBreakerFlowActionClearBoard * VaseBreakerFlowActionClearBoard::StaticNew(void)

{
  VaseBreakerFlowActionClearBoard *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowActionClearBoard(this);
  return this;
}


/* VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard() */

void __thiscall
VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard
          (VaseBreakerFlowActionClearBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_06917a20;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionClearBoard_06917ac8;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard() */

void __thiscall
VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard
          (VaseBreakerFlowActionClearBoard *this)

{
  ~VaseBreakerFlowActionClearBoard(this + -0x10);
  return;
}


/* VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard() */

void __thiscall
VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard
          (VaseBreakerFlowActionClearBoard *this)

{
  ~VaseBreakerFlowActionClearBoard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard() */

void __thiscall
VaseBreakerFlowActionClearBoard::~VaseBreakerFlowActionClearBoard
          (VaseBreakerFlowActionClearBoard *this)

{
  ~VaseBreakerFlowActionClearBoard(this + -0x10);
  return;
}

