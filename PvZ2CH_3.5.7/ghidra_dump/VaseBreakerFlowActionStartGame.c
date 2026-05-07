// Class: VaseBreakerFlowActionStartGame


/* VaseBreakerFlowActionStartGame::onBegin() */

void __thiscall VaseBreakerFlowActionStartGame::onBegin(VaseBreakerFlowActionStartGame *this)

{
  VaseBreakerModule *this_00;
  
  this_00 = (VaseBreakerModule *)
            VaseBreakerFlowAction::getVaseBreaker((VaseBreakerFlowAction *)this);
  VaseBreakerModule::StartVaseBreakerGameplay(this_00);
  RunnableAction::End((RunnableAction *)(this + 0x10));
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionStartGame::onBegin() */

void __thiscall VaseBreakerFlowActionStartGame::onBegin(VaseBreakerFlowActionStartGame *this)

{
  onBegin(this + -0x10);
  return;
}


/* VaseBreakerFlowActionStartGame::StaticGetClass() */

long * VaseBreakerFlowActionStartGame::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionStartGame",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionStartGame::GetClass() const */

long * VaseBreakerFlowActionStartGame::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowActionStartGame",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionStartGame::VaseBreakerFlowActionStartGame() */

void __thiscall
VaseBreakerFlowActionStartGame::VaseBreakerFlowActionStartGame(VaseBreakerFlowActionStartGame *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917400;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionStartGame_069174a8;
  return;
}


/* VaseBreakerFlowActionStartGame::StaticNew() */

VaseBreakerFlowActionStartGame * VaseBreakerFlowActionStartGame::StaticNew(void)

{
  VaseBreakerFlowActionStartGame *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowActionStartGame(this);
  return this;
}


/* VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame() */

void __thiscall
VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame
          (VaseBreakerFlowActionStartGame *this)

{
  *(undefined ***)this = &PTR_GetClass_06917400;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionStartGame_069174a8;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame() */

void __thiscall
VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame
          (VaseBreakerFlowActionStartGame *this)

{
  ~VaseBreakerFlowActionStartGame(this + -0x10);
  return;
}


/* VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame() */

void __thiscall
VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame
          (VaseBreakerFlowActionStartGame *this)

{
  ~VaseBreakerFlowActionStartGame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame() */

void __thiscall
VaseBreakerFlowActionStartGame::~VaseBreakerFlowActionStartGame
          (VaseBreakerFlowActionStartGame *this)

{
  ~VaseBreakerFlowActionStartGame(this + -0x10);
  return;
}

