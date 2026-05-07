// Class: NewPVPKillZombieListener


/* NewPVPKillZombieListener::~NewPVPKillZombieListener() */

void __thiscall NewPVPKillZombieListener::~NewPVPKillZombieListener(NewPVPKillZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710b70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPKillZombieListener::~NewPVPKillZombieListener() */

void __thiscall NewPVPKillZombieListener::~NewPVPKillZombieListener(NewPVPKillZombieListener *this)

{
  ~NewPVPKillZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPKillZombieListener::NewPVPKillZombieListener() */

void __thiscall NewPVPKillZombieListener::NewPVPKillZombieListener(NewPVPKillZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710b70;
  return;
}


/* NewPVPKillZombieListener::StaticNew() */

NewPVPKillZombieListener * NewPVPKillZombieListener::StaticNew(void)

{
  NewPVPKillZombieListener *this;
  
  this = ::operator_new(0x18);
  NewPVPKillZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPKillZombieListener::StaticClassInit() */

void NewPVPKillZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPKillZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8ec94,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPKillZombieListener::StaticGetClass() */

long * NewPVPKillZombieListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPKillZombieListener::GetClass() const */

long * NewPVPKillZombieListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPKillZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPKillZombieListener::onZombieDied(Zombie*, DamageInfo const*) */

void NewPVPKillZombieListener::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtObject *this;
  NewPVPTaskData *pNVar5;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(param_1 + 0x10) + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(param_1 + 0x10) + 0x20));
    pNVar5 = Sexy::RtObject::Cast<NewPVPTaskData>(this);
    if ((pNVar5 != (NewPVPTaskData *)0x0) && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')
       ) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
      iVar4 = SharkMinion::getRow((SharkMinion *)param_2);
      Sexy::Point::Point(aPStack_10,iVar3,iVar4);
      cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
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


/* NewPVPKillZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPKillZombieListener::RegisterListener(NewPVPKillZombieListener *this,GeneralTask *param_1)

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
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<NewPVPKillZombieListener,void(NewPVPKillZombieListener::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  this[8] = (NewPVPKillZombieListener)0x1;
  return;
}

