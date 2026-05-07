// Class: CheatGameStartLevelCommand


/* CheatGameStartLevelCommand::~CheatGameStartLevelCommand() */

void __thiscall
CheatGameStartLevelCommand::~CheatGameStartLevelCommand(CheatGameStartLevelCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846dc0;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameStartLevelCommand::~CheatGameStartLevelCommand() */

void __thiscall
CheatGameStartLevelCommand::~CheatGameStartLevelCommand(CheatGameStartLevelCommand *this)

{
  ~CheatGameStartLevelCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameStartLevelCommand::StaticGetClass() */

long * CheatGameStartLevelCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameStartLevelCommand::GetClass() const */

long * CheatGameStartLevelCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameStartLevelCommand::startLevel() */

void __thiscall CheatGameStartLevelCommand::startLevel(CheatGameStartLevelCommand *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(this + 0x38);
  Sexy::StrFormat("[#43966] CheatGameStartLevelCommand::startLevel - Loading level from cheats: %s",
                  asStack_10,uVar1);
  nop();
  std::string::~string(asStack_10);
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05438,this + 0x38,0xffffffff,1,1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatGameStartLevelCommand::CheatGameStartLevelCommand() */

void __thiscall
CheatGameStartLevelCommand::CheatGameStartLevelCommand(CheatGameStartLevelCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846dc0;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameStartLevelCommand::StaticNew() */

CheatGameStartLevelCommand * CheatGameStartLevelCommand::StaticNew(void)

{
  CheatGameStartLevelCommand *this;
  
  this = ::operator_new(0x40);
  CheatGameStartLevelCommand(this);
  return this;
}

