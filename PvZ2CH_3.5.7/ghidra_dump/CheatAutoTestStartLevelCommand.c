// Class: CheatAutoTestStartLevelCommand


/* CheatAutoTestStartLevelCommand::~CheatAutoTestStartLevelCommand() */

void __thiscall
CheatAutoTestStartLevelCommand::~CheatAutoTestStartLevelCommand
          (CheatAutoTestStartLevelCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_068470e0;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatAutoTestStartLevelCommand::~CheatAutoTestStartLevelCommand() */

void __thiscall
CheatAutoTestStartLevelCommand::~CheatAutoTestStartLevelCommand
          (CheatAutoTestStartLevelCommand *this)

{
  ~CheatAutoTestStartLevelCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatAutoTestStartLevelCommand::StaticGetClass() */

long * CheatAutoTestStartLevelCommand::StaticGetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatAutoTestStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatAutoTestStartLevelCommand::GetClass() const */

long * CheatAutoTestStartLevelCommand::GetClass(void)

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
  uVar2 = CheatCommand::StaticGetClass();
  (*pcVar3)(plVar1,"CheatAutoTestStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatAutoTestStartLevelCommand::CheatAutoTestStartLevelCommand() */

void __thiscall
CheatAutoTestStartLevelCommand::CheatAutoTestStartLevelCommand(CheatAutoTestStartLevelCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_068470e0;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatAutoTestStartLevelCommand::StaticNew() */

CheatAutoTestStartLevelCommand * CheatAutoTestStartLevelCommand::StaticNew(void)

{
  CheatAutoTestStartLevelCommand *this;
  
  this = ::operator_new(0x40);
  CheatAutoTestStartLevelCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAutoTestStartLevelCommand::changeLevel() */

void __thiscall CheatAutoTestStartLevelCommand::changeLevel(CheatAutoTestStartLevelCommand *this)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x38);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::changeAutoTestStartLevel,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

