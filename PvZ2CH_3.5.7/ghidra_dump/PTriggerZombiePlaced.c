// Class: PTriggerZombiePlaced


/* PTriggerZombiePlaced::~PTriggerZombiePlaced() */

void __thiscall PTriggerZombiePlaced::~PTriggerZombiePlaced(PTriggerZombiePlaced *this)

{
  *(undefined ***)this = &PTR_GetClass_06948c30;
  std::string::~string((string *)(this + 0x10));
  PTrigger::~PTrigger((PTrigger *)this);
  return;
}


/* PTriggerZombiePlaced::~PTriggerZombiePlaced() */

void __thiscall PTriggerZombiePlaced::~PTriggerZombiePlaced(PTriggerZombiePlaced *this)

{
  ~PTriggerZombiePlaced(this);
  AK::FreeHook(this);
  return;
}


/* PTriggerZombiePlaced::PTriggerZombiePlaced() */

void __thiscall PTriggerZombiePlaced::PTriggerZombiePlaced(PTriggerZombiePlaced *this)

{
  PTrigger::PTrigger((PTrigger *)this,0x745f7a70);
  *(undefined ***)this = &PTR_GetClass_06948c30;
  Set8BytesTo0(this + 0x10);
  Sexy::Point::Point((Point *)(this + 0x18));
  this[0x20] = (PTriggerZombiePlaced)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* PTriggerZombiePlaced::StaticNew() */

PTriggerZombiePlaced * PTriggerZombiePlaced::StaticNew(void)

{
  PTriggerZombiePlaced *this;
  
  this = ::operator_new(0x28);
  PTriggerZombiePlaced(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombiePlaced::SetZombie(Zombie*) */

void __thiscall PTriggerZombiePlaced::SetZombie(PTriggerZombiePlaced *this,Zombie *param_1)

{
  long lVar1;
  PTriggerZombiePlaced PVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  thunk_FUN_05475e00(this + 0x10,lVar4 + 8);
  BoardEntity::CalcGridPosition();
  *(undefined8 *)(this + 0x18) = local_10;
  PVar2 = (PTriggerZombiePlaced)Zombie::GetHasPlantFood(param_1);
  this[0x20] = PVar2;
  lVar4 = PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)param_1);
  uVar3 = FUN_04ab9c1c(*(undefined4 *)(lVar4 + 0x30));
  *(undefined4 *)(this + 0x24) = uVar3;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombiePlaced::DoTrigger() */

void __thiscall PTriggerZombiePlaced::DoTrigger(PTriggerZombiePlaced *this)

{
  char cVar1;
  string *psVar2;
  SeedPacket *this_00;
  PlayerInfo *this_01;
  long lVar3;
  Board *pBVar4;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  SeedBankNew::GetPacket(psVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    this_00 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    SeedPacket::CheckResourceLoaded(this_00);
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    this_01 = (PlayerInfo *)
              Board::DoZombieAtGridSingle
                        (pBVar4,aRStack_10,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c)
                         ,this[0x20],1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (this_01 != (PlayerInfo *)0x0) {
      lVar3 = PlayerInfo::GetPlantNewAvatarPiecesInfo(this_01);
      FUN_04ab9c20(lVar3 + 0x30,*(undefined4 *)(this + 0x24));
      FUN_04abac10(lVar3 + 0x34);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PTriggerZombiePlaced::StaticClassInit() */

void PTriggerZombiePlaced::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  string *this_00;
  code *in_x2;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PTriggerZombiePlaced");
    in_x2 = FUN_04abeaec;
    (*pcVar2)(plVar1,asStack_10,FUN_04abeaec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  this_00 = (string *)
            std::
            map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
            ::operator[]((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
                          *)k_TriggerTypeToString,&TypeValue);
  std::string::append(this_00,"PTriggerZombiePlaced",(size_t)in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PTriggerZombiePlaced::StaticGetClass() */

long * PTriggerZombiePlaced::StaticGetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerZombiePlaced",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PTriggerZombiePlaced::GetClass() const */

long * PTriggerZombiePlaced::GetClass(void)

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
  uVar2 = PTrigger::StaticGetClass();
  (*pcVar3)(plVar1,"PTriggerZombiePlaced",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

