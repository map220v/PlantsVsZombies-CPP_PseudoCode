// Class: GeneralPlantKillZombieListener


/* GeneralPlantKillZombieListener::~GeneralPlantKillZombieListener() */

void __thiscall
GeneralPlantKillZombieListener::~GeneralPlantKillZombieListener
          (GeneralPlantKillZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f9f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralPlantKillZombieListener::~GeneralPlantKillZombieListener() */

void __thiscall
GeneralPlantKillZombieListener::~GeneralPlantKillZombieListener
          (GeneralPlantKillZombieListener *this)

{
  ~GeneralPlantKillZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralPlantKillZombieListener::GeneralPlantKillZombieListener() */

void __thiscall
GeneralPlantKillZombieListener::GeneralPlantKillZombieListener(GeneralPlantKillZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f9f0;
  return;
}


/* GeneralPlantKillZombieListener::StaticNew() */

GeneralPlantKillZombieListener * GeneralPlantKillZombieListener::StaticNew(void)

{
  GeneralPlantKillZombieListener *this;
  
  this = ::operator_new(0x18);
  GeneralPlantKillZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantKillZombieListener::StaticClassInit() */

void GeneralPlantKillZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralPlantKillZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a89744,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralPlantKillZombieListener::StaticGetClass() */

long * GeneralPlantKillZombieListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralPlantKillZombieListener::GetClass() const */

long * GeneralPlantKillZombieListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralPlantKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantKillZombieListener::onZombieDied(Zombie*, DamageInfo const*) */

void __thiscall
GeneralPlantKillZombieListener::onZombieDied
          (GeneralPlantKillZombieListener *this,Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  char cVar2;
  PvZ1AchievementData *pPVar3;
  long lVar4;
  RtObject *pRVar5;
  BattleOrderTaskData *pBVar6;
  string *psVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pPVar3 = Sexy::RtObject::Cast<PvZ1AchievementData>(pRVar5);
    if (pPVar3 == (PvZ1AchievementData *)0x0) goto LAB_03a96980;
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if ((((cVar2 == '\0') || (param_2 == (DamageInfo *)0x0)) ||
        (*(RtObject **)param_2 == (RtObject *)0x0)) ||
       (bVar1 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_2), !bVar1)) goto LAB_03a969ac;
    Sexy::RtObject::Cast<Plant>(*(RtObject **)param_2);
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar2 = std::operator==((string *)(lVar4 + 8),(string *)(pPVar3 + 0x60));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
joined_r0x03a96a44:
    if (cVar2 == '\0') goto LAB_03a969ac;
  }
  else {
LAB_03a96980:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
    if (bVar1) {
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
      pBVar6 = Sexy::RtObject::Cast<BattleOrderTaskData>(pRVar5);
      if (pBVar6 != (BattleOrderTaskData *)0x0) {
        if (param_1 == (Zombie *)0x0) goto LAB_03a969ac;
        psVar7 = (string *)Zombie::GetTypeName(param_1);
        cVar2 = std::operator==(psVar7,(string *)(pBVar6 + 0x58));
        goto joined_r0x03a96a44;
      }
    }
    if (param_1 == (Zombie *)0x0) goto LAB_03a969ac;
  }
  (**(code **)(*(long *)this + 0x58))(this,1);
LAB_03a969ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralPlantKillZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralPlantKillZombieListener::RegisterListener
          (GeneralPlantKillZombieListener *this,GeneralTask *param_1)

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
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<GeneralPlantKillZombieListener,void(GeneralPlantKillZombieListener::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  this[8] = (GeneralPlantKillZombieListener)0x1;
  return;
}

