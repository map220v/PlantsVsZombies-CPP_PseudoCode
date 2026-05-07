// Class: GeneralPlantHypnoZombieListener


/* GeneralPlantHypnoZombieListener::~GeneralPlantHypnoZombieListener() */

void __thiscall
GeneralPlantHypnoZombieListener::~GeneralPlantHypnoZombieListener
          (GeneralPlantHypnoZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fa70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralPlantHypnoZombieListener::~GeneralPlantHypnoZombieListener() */

void __thiscall
GeneralPlantHypnoZombieListener::~GeneralPlantHypnoZombieListener
          (GeneralPlantHypnoZombieListener *this)

{
  ~GeneralPlantHypnoZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralPlantHypnoZombieListener::GeneralPlantHypnoZombieListener() */

void __thiscall
GeneralPlantHypnoZombieListener::GeneralPlantHypnoZombieListener
          (GeneralPlantHypnoZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fa70;
  return;
}


/* GeneralPlantHypnoZombieListener::StaticNew() */

GeneralPlantHypnoZombieListener * GeneralPlantHypnoZombieListener::StaticNew(void)

{
  GeneralPlantHypnoZombieListener *this;
  
  this = ::operator_new(0x18);
  GeneralPlantHypnoZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantHypnoZombieListener::StaticClassInit() */

void GeneralPlantHypnoZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralPlantHypnoZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a899b4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralPlantHypnoZombieListener::StaticGetClass() */

long * GeneralPlantHypnoZombieListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantHypnoZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralPlantHypnoZombieListener::GetClass() const */

long * GeneralPlantHypnoZombieListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantHypnoZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantHypnoZombieListener::onPlantHypnoZombie(Plant*, Zombie*) */

void GeneralPlantHypnoZombieListener::onPlantHypnoZombie(Plant *param_1,Zombie *param_2)

{
  bool bVar1;
  char cVar2;
  RtObject *this;
  PvZ1AchievementData *pPVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(param_1 + 0x10) + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(param_1 + 0x10) + 0x20));
    pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(this);
    if (((pPVar3 != (PvZ1AchievementData *)0x0) &&
        (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) && (param_2 != (Zombie *)0x0))
    {
      Plant::GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = std::operator==((string *)(lVar4 + 8),(string *)(pPVar3 + 0x60));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)param_1 + 0x58))(param_1,1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralPlantHypnoZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralPlantHypnoZombieListener::RegisterListener
          (GeneralPlantHypnoZombieListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onPlantHypnoZombie);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Zombie*,Sexy::CBMemberTranslatorX<GeneralPlantHypnoZombieListener,void(GeneralPlantHypnoZombieListener::*)(Plant*,Zombie*)>>
            ((MessageRouter *)puVar1,Message::PlantHypnoZombie,&local_40);
  this[8] = (GeneralPlantHypnoZombieListener)0x1;
  return;
}

