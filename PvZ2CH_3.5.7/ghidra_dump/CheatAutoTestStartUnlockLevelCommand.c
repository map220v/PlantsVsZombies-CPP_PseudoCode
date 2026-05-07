// Class: CheatAutoTestStartUnlockLevelCommand


/* CheatAutoTestStartUnlockLevelCommand::~CheatAutoTestStartUnlockLevelCommand() */

void __thiscall
CheatAutoTestStartUnlockLevelCommand::~CheatAutoTestStartUnlockLevelCommand
          (CheatAutoTestStartUnlockLevelCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_068471a0;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatAutoTestStartUnlockLevelCommand::~CheatAutoTestStartUnlockLevelCommand() */

void __thiscall
CheatAutoTestStartUnlockLevelCommand::~CheatAutoTestStartUnlockLevelCommand
          (CheatAutoTestStartUnlockLevelCommand *this)

{
  ~CheatAutoTestStartUnlockLevelCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatAutoTestStartUnlockLevelCommand::StaticGetClass() */

long * CheatAutoTestStartUnlockLevelCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatAutoTestStartUnlockLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatAutoTestStartUnlockLevelCommand::GetClass() const */

long * CheatAutoTestStartUnlockLevelCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatAutoTestStartUnlockLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatAutoTestStartUnlockLevelCommand::CheatAutoTestStartUnlockLevelCommand() */

void __thiscall
CheatAutoTestStartUnlockLevelCommand::CheatAutoTestStartUnlockLevelCommand
          (CheatAutoTestStartUnlockLevelCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_068471a0;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatAutoTestStartUnlockLevelCommand::StaticNew() */

CheatAutoTestStartUnlockLevelCommand * CheatAutoTestStartUnlockLevelCommand::StaticNew(void)

{
  CheatAutoTestStartUnlockLevelCommand *this;
  
  this = ::operator_new(0x40);
  CheatAutoTestStartUnlockLevelCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatAutoTestStartUnlockLevelCommand::changeLevel() */

void __thiscall
CheatAutoTestStartUnlockLevelCommand::changeLevel(CheatAutoTestStartUnlockLevelCommand *this)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x38);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::changeAutoTestStartUnlockLevel,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

