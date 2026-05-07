// Class: CheatGameSpawnZombieCommand


/* CheatGameSpawnZombieCommand::~CheatGameSpawnZombieCommand() */

void __thiscall
CheatGameSpawnZombieCommand::~CheatGameSpawnZombieCommand(CheatGameSpawnZombieCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846ca0;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameSpawnZombieCommand::~CheatGameSpawnZombieCommand() */

void __thiscall
CheatGameSpawnZombieCommand::~CheatGameSpawnZombieCommand(CheatGameSpawnZombieCommand *this)

{
  ~CheatGameSpawnZombieCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameSpawnZombieCommand::StaticGetClass() */

long * CheatGameSpawnZombieCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnZombieCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnZombieCommand::GetClass() const */

long * CheatGameSpawnZombieCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnZombieCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnZombieCommand::CheatGameSpawnZombieCommand() */

void __thiscall
CheatGameSpawnZombieCommand::CheatGameSpawnZombieCommand(CheatGameSpawnZombieCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846ca0;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameSpawnZombieCommand::StaticNew() */

CheatGameSpawnZombieCommand * CheatGameSpawnZombieCommand::StaticNew(void)

{
  CheatGameSpawnZombieCommand *this;
  
  this = ::operator_new(0x40);
  CheatGameSpawnZombieCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameSpawnZombieCommand::spawnZombie() */

void CheatGameSpawnZombieCommand::spawnZombie(void)

{
  bool bVar1;
  string *psVar2;
  long *plVar3;
  Board *pBVar4;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    plVar3 = (long *)Board::CheatAddZombie(pBVar4,aRStack_10,cheat_spawn_zombie_row,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar3 + 0x198))(plVar3,cheat_spawn_zombie_level);
    (**(code **)(*plVar3 + 0x9d8))(plVar3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

