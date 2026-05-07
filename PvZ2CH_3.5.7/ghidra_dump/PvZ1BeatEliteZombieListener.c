// Class: PvZ1BeatEliteZombieListener


/* PvZ1BeatEliteZombieListener::~PvZ1BeatEliteZombieListener() */

void __thiscall
PvZ1BeatEliteZombieListener::~PvZ1BeatEliteZombieListener(PvZ1BeatEliteZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710770;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1BeatEliteZombieListener::~PvZ1BeatEliteZombieListener() */

void __thiscall
PvZ1BeatEliteZombieListener::~PvZ1BeatEliteZombieListener(PvZ1BeatEliteZombieListener *this)

{
  ~PvZ1BeatEliteZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1BeatEliteZombieListener::PvZ1BeatEliteZombieListener() */

void __thiscall
PvZ1BeatEliteZombieListener::PvZ1BeatEliteZombieListener(PvZ1BeatEliteZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710770;
  return;
}


/* PvZ1BeatEliteZombieListener::StaticNew() */

PvZ1BeatEliteZombieListener * PvZ1BeatEliteZombieListener::StaticNew(void)

{
  PvZ1BeatEliteZombieListener *this;
  
  this = ::operator_new(0x18);
  PvZ1BeatEliteZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1BeatEliteZombieListener::StaticClassInit() */

void PvZ1BeatEliteZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1BeatEliteZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8d914,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1BeatEliteZombieListener::StaticGetClass() */

long * PvZ1BeatEliteZombieListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1BeatEliteZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1BeatEliteZombieListener::GetClass() const */

long * PvZ1BeatEliteZombieListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1BeatEliteZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1BeatEliteZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1BeatEliteZombieListener::RegisterListener
          (PvZ1BeatEliteZombieListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PvZ1BeatEliteZombieListener,void(PvZ1BeatEliteZombieListener::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  this[8] = (PvZ1BeatEliteZombieListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1BeatEliteZombieListener::onZombieDied(Zombie*, DamageInfo const*) */

void PvZ1BeatEliteZombieListener::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_2 + 0x4d8))(param_2);
  if ((cVar1 != '\0') && (cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar1 != '\0')) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    psVar2 = (string *)Zombie::GetTypeName((Zombie *)param_2);
    PlayerInfo::PvZ1AchievementBeatEliteZombie(this_00,psVar2);
    pcVar4 = *(code **)(*(long *)param_1 + 0x60);
    PlayerInfo::GetPvZ1AchievementBeatEliteZombieList();
    uVar3 = FUN_03a79ce8(local_20,local_18);
    (*pcVar4)(param_1,uVar3);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

