// Class: CheatPlantsVsZombiesStartWorldCommand


/* CheatPlantsVsZombiesStartWorldCommand::~CheatPlantsVsZombiesStartWorldCommand() */

void __thiscall
CheatPlantsVsZombiesStartWorldCommand::~CheatPlantsVsZombiesStartWorldCommand
          (CheatPlantsVsZombiesStartWorldCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06847140;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatPlantsVsZombiesStartWorldCommand::~CheatPlantsVsZombiesStartWorldCommand() */

void __thiscall
CheatPlantsVsZombiesStartWorldCommand::~CheatPlantsVsZombiesStartWorldCommand
          (CheatPlantsVsZombiesStartWorldCommand *this)

{
  ~CheatPlantsVsZombiesStartWorldCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatPlantsVsZombiesStartWorldCommand::StaticGetClass() */

long * CheatPlantsVsZombiesStartWorldCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatPlantsVsZombiesStartWorldCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatPlantsVsZombiesStartWorldCommand::GetClass() const */

long * CheatPlantsVsZombiesStartWorldCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatPlantsVsZombiesStartWorldCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatPlantsVsZombiesStartWorldCommand::CheatPlantsVsZombiesStartWorldCommand() */

void __thiscall
CheatPlantsVsZombiesStartWorldCommand::CheatPlantsVsZombiesStartWorldCommand
          (CheatPlantsVsZombiesStartWorldCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06847140;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatPlantsVsZombiesStartWorldCommand::StaticNew() */

CheatPlantsVsZombiesStartWorldCommand * CheatPlantsVsZombiesStartWorldCommand::StaticNew(void)

{
  CheatPlantsVsZombiesStartWorldCommand *this;
  
  this = ::operator_new(0x40);
  CheatPlantsVsZombiesStartWorldCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatPlantsVsZombiesStartWorldCommand::changeWorld() */

void __thiscall
CheatPlantsVsZombiesStartWorldCommand::changeWorld(CheatPlantsVsZombiesStartWorldCommand *this)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x38);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::changePlantsVsZombiesStartWorld,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

