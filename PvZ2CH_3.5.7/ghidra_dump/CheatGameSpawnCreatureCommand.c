// Class: CheatGameSpawnCreatureCommand


/* CheatGameSpawnCreatureCommand::~CheatGameSpawnCreatureCommand() */

void __thiscall
CheatGameSpawnCreatureCommand::~CheatGameSpawnCreatureCommand(CheatGameSpawnCreatureCommand *this)

{
  *(undefined ***)this = &PTR_GetClass_06846d00;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameSpawnCreatureCommand::~CheatGameSpawnCreatureCommand() */

void __thiscall
CheatGameSpawnCreatureCommand::~CheatGameSpawnCreatureCommand(CheatGameSpawnCreatureCommand *this)

{
  ~CheatGameSpawnCreatureCommand(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameSpawnCreatureCommand::StaticGetClass() */

long * CheatGameSpawnCreatureCommand::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnCreatureCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnCreatureCommand::GetClass() const */

long * CheatGameSpawnCreatureCommand::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnCreatureCommand",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnCreatureCommand::CheatGameSpawnCreatureCommand() */

void __thiscall
CheatGameSpawnCreatureCommand::CheatGameSpawnCreatureCommand(CheatGameSpawnCreatureCommand *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846d00;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameSpawnCreatureCommand::StaticNew() */

CheatGameSpawnCreatureCommand * CheatGameSpawnCreatureCommand::StaticNew(void)

{
  CheatGameSpawnCreatureCommand *this;
  
  this = ::operator_new(0x40);
  CheatGameSpawnCreatureCommand(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameSpawnCreatureCommand::spawnCreature() */

void CheatGameSpawnCreatureCommand::spawnCreature(void)

{
  bool bVar1;
  string *psVar2;
  Board *pBVar3;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::CheatAddCreature(pBVar3,aRStack_10,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

