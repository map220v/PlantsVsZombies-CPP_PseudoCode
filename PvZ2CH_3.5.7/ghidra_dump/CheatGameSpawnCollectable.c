// Class: CheatGameSpawnCollectable


/* CheatGameSpawnCollectable::~CheatGameSpawnCollectable() */

void __thiscall
CheatGameSpawnCollectable::~CheatGameSpawnCollectable(CheatGameSpawnCollectable *this)

{
  *(undefined ***)this = &PTR_GetClass_06846d60;
  std::string::~string((string *)(this + 0x38));
  CheatCommand::~CheatCommand((CheatCommand *)this);
  return;
}


/* CheatGameSpawnCollectable::~CheatGameSpawnCollectable() */

void __thiscall
CheatGameSpawnCollectable::~CheatGameSpawnCollectable(CheatGameSpawnCollectable *this)

{
  ~CheatGameSpawnCollectable(this);
  AK::FreeHook(this);
  return;
}


/* CheatGameSpawnCollectable::StaticGetClass() */

long * CheatGameSpawnCollectable::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnCollectable",uVar2,StaticNew);
  return sClass;
}


/* CheatGameSpawnCollectable::GetClass() const */

long * CheatGameSpawnCollectable::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatGameSpawnCollectable",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatGameSpawnCollectable::spawnCollectable() */

void CheatGameSpawnCollectable::spawnCollectable(void)

{
  Collectable *this;
  long lVar1;
  code *pcVar2;
  int local_30;
  int local_2c;
  float local_28 [2];
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ___stack_chk_guard;
  this = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)&DAT_00000004,2,(int)lVar1);
  pcVar2 = *(code **)(*(long *)this + 0x78);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_30,(float)local_2c,0.0);
  (*pcVar2)(this,aVStack_18);
  DVec3::DVec3((DVec3 *)local_28);
  local_28[0] = (float)Sexy::Rand(100.0);
  local_28[0] = local_28[0] - 50.0;
  local_20 = (float)Sexy::Rand(200.0);
  local_20 = local_20 + 300.0;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
  Collectable::SetMotionNewtonian(this,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
  Collectable::SetKeepOnBoard(this,true);
  Collectable::StartExpirationTimerAfterMotion(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatGameSpawnCollectable::CheatGameSpawnCollectable() */

void __thiscall
CheatGameSpawnCollectable::CheatGameSpawnCollectable(CheatGameSpawnCollectable *this)

{
  CheatCommand::CheatCommand((CheatCommand *)this);
  *(undefined ***)this = &PTR_GetClass_06846d60;
  Set8BytesTo0(this + 0x38);
  return;
}


/* CheatGameSpawnCollectable::StaticNew() */

CheatGameSpawnCollectable * CheatGameSpawnCollectable::StaticNew(void)

{
  CheatGameSpawnCollectable *this;
  
  this = ::operator_new(0x40);
  CheatGameSpawnCollectable(this);
  return this;
}

