// Class: GeneralShieldArtifactKillZombieListener


/* GeneralShieldArtifactKillZombieListener::~GeneralShieldArtifactKillZombieListener() */

void __thiscall
GeneralShieldArtifactKillZombieListener::~GeneralShieldArtifactKillZombieListener
          (GeneralShieldArtifactKillZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670faf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralShieldArtifactKillZombieListener::~GeneralShieldArtifactKillZombieListener() */

void __thiscall
GeneralShieldArtifactKillZombieListener::~GeneralShieldArtifactKillZombieListener
          (GeneralShieldArtifactKillZombieListener *this)

{
  ~GeneralShieldArtifactKillZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralShieldArtifactKillZombieListener::GeneralShieldArtifactKillZombieListener() */

void __thiscall
GeneralShieldArtifactKillZombieListener::GeneralShieldArtifactKillZombieListener
          (GeneralShieldArtifactKillZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670faf0;
  return;
}


/* GeneralShieldArtifactKillZombieListener::StaticNew() */

GeneralShieldArtifactKillZombieListener * GeneralShieldArtifactKillZombieListener::StaticNew(void)

{
  GeneralShieldArtifactKillZombieListener *this;
  
  this = ::operator_new(0x18);
  GeneralShieldArtifactKillZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralShieldArtifactKillZombieListener::StaticClassInit() */

void GeneralShieldArtifactKillZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralShieldArtifactKillZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a89c24,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralShieldArtifactKillZombieListener::StaticGetClass() */

long * GeneralShieldArtifactKillZombieListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralShieldArtifactKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralShieldArtifactKillZombieListener::GetClass() const */

long * GeneralShieldArtifactKillZombieListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralShieldArtifactKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralShieldArtifactKillZombieListener::onShieldArtifactKillZombie(Zombie*) */

void GeneralShieldArtifactKillZombieListener::onShieldArtifactKillZombie(Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  PvZ1AchievementData *pPVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(param_1 + 0x10) + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(param_1 + 0x10) + 0x20));
    pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(this);
    if ((pPVar3 != (PvZ1AchievementData *)0x0) &&
       (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) {
      (**(code **)(*(long *)param_1 + 0x58))(param_1,1);
      return;
    }
  }
  return;
}


/* GeneralShieldArtifactKillZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralShieldArtifactKillZombieListener::RegisterListener
          (GeneralShieldArtifactKillZombieListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onShieldArtifactKillZombie);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GeneralShieldArtifactKillZombieListener,void(GeneralShieldArtifactKillZombieListener::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ShieldArtifactKillZombie,&local_40);
  this[8] = (GeneralShieldArtifactKillZombieListener)0x1;
  return;
}

