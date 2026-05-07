// Class: MiniGamePerkZombieSpeedReduced


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieSpeedReduced::StaticClassInit() */

void MiniGamePerkZombieSpeedReduced::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MiniGamePerkZombieSpeedReduced");
    (*pcVar2)(plVar1,asStack_10,FUN_038971bc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkZombieSpeedReduced::StaticGetClass() */

long * MiniGamePerkZombieSpeedReduced::StaticGetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkZombieSpeedReduced",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieSpeedReduced::GetClass() const */

long * MiniGamePerkZombieSpeedReduced::GetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkZombieSpeedReduced",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkZombieSpeedReduced::~MiniGamePerkZombieSpeedReduced() */

void __thiscall
MiniGamePerkZombieSpeedReduced::~MiniGamePerkZombieSpeedReduced
          (MiniGamePerkZombieSpeedReduced *this)

{
  *(undefined ***)this = &PTR_GetClass_066aff10;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkZombieSpeedReduced::~MiniGamePerkZombieSpeedReduced() */

void __thiscall
MiniGamePerkZombieSpeedReduced::~MiniGamePerkZombieSpeedReduced
          (MiniGamePerkZombieSpeedReduced *this)

{
  ~MiniGamePerkZombieSpeedReduced(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkZombieSpeedReduced::MiniGamePerkZombieSpeedReduced() */

void __thiscall
MiniGamePerkZombieSpeedReduced::MiniGamePerkZombieSpeedReduced(MiniGamePerkZombieSpeedReduced *this)

{
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined ***)this = &PTR_GetClass_066aff10;
  return;
}


/* MiniGamePerkZombieSpeedReduced::StaticNew() */

MiniGamePerkZombieSpeedReduced * MiniGamePerkZombieSpeedReduced::StaticNew(void)

{
  MiniGamePerkZombieSpeedReduced *this;
  
  this = ::operator_new(0x28);
  MiniGamePerkZombieSpeedReduced(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieSpeedReduced::onZombiePlaceOnBoard(Zombie*) */

void __thiscall
MiniGamePerkZombieSpeedReduced::onZombiePlaceOnBoard
          (MiniGamePerkZombieSpeedReduced *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  float *pfVar2;
  code *pcVar3;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    MiniGamePerk::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    cVar1 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(extraout_x0 + 0x60),param_1);
    if (cVar1 != '\0') {
      local_10[0] = 1.0 - *(float *)(this + 0x24);
      pcVar3 = *(code **)(*(long *)param_1 + 0x358);
      local_14 = 0.0;
      pfVar2 = eastl::max_alt<float>(&local_14,local_10);
      (*pcVar3)(*pfVar2,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkZombieSpeedReduced::Activate() */

void __thiscall MiniGamePerkZombieSpeedReduced::Activate(MiniGamePerkZombieSpeedReduced *this)

{
  undefined *puVar1;
  long extraout_x0;
  undefined4 *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::Activate((MiniGamePerk *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  puVar2 = (undefined4 *)
           FUN_03896040(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x24) = *puVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaceOnBoard);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<MiniGamePerkZombieSpeedReduced,void(MiniGamePerkZombieSpeedReduced::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

