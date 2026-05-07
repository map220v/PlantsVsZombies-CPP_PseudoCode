// Class: TravelLogTaskBeatZombies


/* TravelLogTaskBeatZombies::GetClass() const */

long * TravelLogTaskBeatZombies::GetClass(void)

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
  uVar2 = TravelLogTask::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogTaskBeatZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskBeatZombies::StaticClassInit() */

void TravelLogTaskBeatZombies::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskBeatZombies");
    (*pcVar2)(plVar1,asStack_10,FUN_039e9e9c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskBeatZombies::StaticGetClass() */

long * TravelLogTaskBeatZombies::StaticGetClass(void)

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
  uVar2 = TravelLogTask::StaticGetClass();
  (*pcVar3)(plVar1,"TravelLogTaskBeatZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskBeatZombies::TravelLogTaskBeatZombies() */

void __thiscall TravelLogTaskBeatZombies::TravelLogTaskBeatZombies(TravelLogTaskBeatZombies *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f61d0;
  return;
}


/* TravelLogTaskBeatZombies::StaticNew() */

TravelLogTaskBeatZombies * TravelLogTaskBeatZombies::StaticNew(void)

{
  TravelLogTaskBeatZombies *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskBeatZombies(this);
  return this;
}


/* TravelLogTaskBeatZombies::~TravelLogTaskBeatZombies() */

void __thiscall TravelLogTaskBeatZombies::~TravelLogTaskBeatZombies(TravelLogTaskBeatZombies *this)

{
  *(undefined ***)this = &PTR_GetClass_066f61d0;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskBeatZombies::~TravelLogTaskBeatZombies() */

void __thiscall TravelLogTaskBeatZombies::~TravelLogTaskBeatZombies(TravelLogTaskBeatZombies *this)

{
  ~TravelLogTaskBeatZombies(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskBeatZombies::onZombieDied(Zombie*, DamageInfo const*) */

void TravelLogTaskBeatZombies::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  char cVar2;
  RtObject *this;
  TravelLogBeatZombiesData *pTVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20))
  ;
  pTVar3 = Sexy::RtObject::Cast<TravelLogBeatZombiesData>(this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)param_2);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar2 = std::operator==((string *)(pTVar3 + 0x50),(string *)(lVar4 + 8));
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
  if (*(int *)(lVar4 + 0x40) <= iVar1 + 1) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
  }
  (**(code **)(*(long *)param_1 + 0x50))(param_1);
  return;
}


/* TravelLogTaskBeatZombies::AddListener() */

void __thiscall TravelLogTaskBeatZombies::AddListener(TravelLogTaskBeatZombies *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<TravelLogTaskBeatZombies,void(TravelLogTaskBeatZombies::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  this[0x28] = (TravelLogTaskBeatZombies)0x1;
  return;
}

