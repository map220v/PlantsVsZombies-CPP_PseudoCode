// Class: CheatGameAddZombieTitleCommand


/* CheatGameAddZombieTitleCommand::~CheatGameAddZombieTitleCommand() */

void __thiscall
CheatGameAddZombieTitleCommand::~CheatGameAddZombieTitleCommand
          (CheatGameAddZombieTitleCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846ee0;
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameAddZombieTitleCommand::~CheatGameAddZombieTitleCommand() */

void __thiscall
CheatGameAddZombieTitleCommand::~CheatGameAddZombieTitleCommand
          (CheatGameAddZombieTitleCommand *this)

{
  ~CheatGameAddZombieTitleCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameAddZombieTitleCommand::StaticGetClass() */

long * CheatGameAddZombieTitleCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameAddZombieTitleCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameAddZombieTitleCommand::GetClass() const */

long * CheatGameAddZombieTitleCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameAddZombieTitleCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameAddZombieTitleCommand::CheatGameAddZombieTitleCommand() */

void __thiscall
CheatGameAddZombieTitleCommand::CheatGameAddZombieTitleCommand(CheatGameAddZombieTitleCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846ee0;
  return;
}


/* CheatGameAddZombieTitleCommand::StaticNew() */

CheatGameAddZombieTitleCommand * CheatGameAddZombieTitleCommand::StaticNew(void)

{
  CheatGameAddZombieTitleCommand *this;
  
  this = ::operator_new(0x40);
  CheatGameAddZombieTitleCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameAddZombieTitleCommand::CheatAddZombieTitles() */

void __thiscall
CheatGameAddZombieTitleCommand::CheatAddZombieTitles(CheatGameAddZombieTitleCommand *this)

{
  long lVar1;
  undefined8 *puVar2;
  Zombie *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar5 = local_20;
  lVar1 = FUN_043d19d4(local_20,local_18);
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_043d19e0(uVar5,uVar4);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2);
      if (this_00 != (Zombie *)0x0) {
        Zombie::CheatAddZombieTitles(this_00,*(int *)(this + 0x38));
      }
      uVar5 = local_20;
      uVar4 = uVar4 + 1;
      uVar3 = FUN_043d19d4(local_20,local_18);
    } while (uVar4 < uVar3);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

