// Class: CheatDangerRoomStartLevelCommand


/* CheatDangerRoomStartLevelCommand::~CheatDangerRoomStartLevelCommand() */

void __thiscall
CheatDangerRoomStartLevelCommand::~CheatDangerRoomStartLevelCommand
          (CheatDangerRoomStartLevelCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846e20;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatDangerRoomStartLevelCommand::~CheatDangerRoomStartLevelCommand() */

void __thiscall
CheatDangerRoomStartLevelCommand::~CheatDangerRoomStartLevelCommand
          (CheatDangerRoomStartLevelCommand *this)

{
  ~CheatDangerRoomStartLevelCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatDangerRoomStartLevelCommand::StaticGetClass() */

long * CheatDangerRoomStartLevelCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatDangerRoomStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatDangerRoomStartLevelCommand::GetClass() const */

long * CheatDangerRoomStartLevelCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatDangerRoomStartLevelCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatDangerRoomStartLevelCommand::CheatDangerRoomStartLevelCommand() */

void __thiscall
CheatDangerRoomStartLevelCommand::CheatDangerRoomStartLevelCommand
          (CheatDangerRoomStartLevelCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846e20;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatDangerRoomStartLevelCommand::StaticNew() */

CheatDangerRoomStartLevelCommand * CheatDangerRoomStartLevelCommand::StaticNew(void)

{
  CheatDangerRoomStartLevelCommand *this;
  
  this = ::operator_new(0x40);
  CheatDangerRoomStartLevelCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatDangerRoomStartLevelCommand::startLevel() */

void CheatDangerRoomStartLevelCommand::startLevel(void)

{
  long in_x0;
  DangerRoomManager *this;
  undefined1 in_w2;
  S2C_DangerRoomRecord aSStack_c0 [184];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_DangerRoomRecord::S2C_DangerRoomRecord(aSStack_c0);
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetRecord(this,aSStack_c0);
  DangerRoomModule::StartDangerRoomLevel
            ((DangerRoomModule *)(in_x0 + 0x38),(string *)0x0,(bool)in_w2);
  S2C_DangerRoomRecord::~S2C_DangerRoomRecord(aSStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

