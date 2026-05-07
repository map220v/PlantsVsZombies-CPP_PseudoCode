// Class: CheatCommand


/* CheatCommand::~CheatCommand() */

void __thiscall CheatCommand::~CheatCommand(CheatCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06753950;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x18));
  Cheat::~Cheat((Cheat *)this);
  return;
}


/* CheatCommand::~CheatCommand() */

void __thiscall CheatCommand::~CheatCommand(CheatCommand *this)

{
  ~CheatCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatCommand::StaticGetClass() */

long * CheatCommand::StaticGetClass(void)

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
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatCommand::GetClass() const */

long * CheatCommand::GetClass(void)

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
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatCommand::CheatCommand() */

void __thiscall CheatCommand::CheatCommand(CheatCommand *this)

{
  Cheat::Cheat((Cheat *)this);
  *(undefined ***)this = &PTR_GetClass_06753950;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x18));
  return;
}


/* CheatCommand::StaticNew() */

CheatCommand * CheatCommand::StaticNew(void)

{
  CheatCommand *this;
  
  this = ::operator_new(0x38);
  CheatCommand(this);
  return this;
}

