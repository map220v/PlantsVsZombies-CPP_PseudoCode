// Class: NewPVPAddZombieInSingleLevelListener


/* NewPVPAddZombieInSingleLevelListener::~NewPVPAddZombieInSingleLevelListener() */

void __thiscall
NewPVPAddZombieInSingleLevelListener::~NewPVPAddZombieInSingleLevelListener
          (NewPVPAddZombieInSingleLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710d70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPAddZombieInSingleLevelListener::~NewPVPAddZombieInSingleLevelListener() */

void __thiscall
NewPVPAddZombieInSingleLevelListener::~NewPVPAddZombieInSingleLevelListener
          (NewPVPAddZombieInSingleLevelListener *this)

{
  ~NewPVPAddZombieInSingleLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPAddZombieInSingleLevelListener::NewPVPAddZombieInSingleLevelListener() */

void __thiscall
NewPVPAddZombieInSingleLevelListener::NewPVPAddZombieInSingleLevelListener
          (NewPVPAddZombieInSingleLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710d70;
  return;
}


/* NewPVPAddZombieInSingleLevelListener::StaticNew() */

NewPVPAddZombieInSingleLevelListener * NewPVPAddZombieInSingleLevelListener::StaticNew(void)

{
  NewPVPAddZombieInSingleLevelListener *this;
  
  this = ::operator_new(0x18);
  NewPVPAddZombieInSingleLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAddZombieInSingleLevelListener::StaticClassInit() */

void NewPVPAddZombieInSingleLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAddZombieInSingleLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8f654,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAddZombieInSingleLevelListener::StaticGetClass() */

long * NewPVPAddZombieInSingleLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAddZombieInSingleLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAddZombieInSingleLevelListener::GetClass() const */

long * NewPVPAddZombieInSingleLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAddZombieInSingleLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAddZombieInSingleLevelListener::JumpToTargetTask() */

bool NewPVPAddZombieInSingleLevelListener::JumpToTargetTask(void)

{
  char cVar1;
  QuickJumpUtil *this;
  
  cVar1 = GetSecondWorldLevelCompleted(2);
  if (cVar1 != '\0') {
    this = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowNewPVP(this);
  }
  return cVar1 != '\0';
}


/* NewPVPAddZombieInSingleLevelListener::conterSetInSingleLevel(int) */

void __thiscall
NewPVPAddZombieInSingleLevelListener::conterSetInSingleLevel
          (NewPVPAddZombieInSingleLevelListener *this,int param_1)

{
  NewPVPTask *pNVar1;
  
  if (*(RtObject **)(this + 0x10) != (RtObject *)0x0) {
    pNVar1 = Sexy::RtObject::Cast<NewPVPTask>(*(RtObject **)(this + 0x10));
    *(int *)(pNVar1 + 0x30) = param_1;
  }
  return;
}


/* NewPVPAddZombieInSingleLevelListener::onLevelLoadComplete() */

void __thiscall
NewPVPAddZombieInSingleLevelListener::onLevelLoadComplete
          (NewPVPAddZombieInSingleLevelListener *this)

{
  conterSetInSingleLevel(this,0);
  return;
}


/* NewPVPAddZombieInSingleLevelListener::counterAddInSingleLevel(int) */

void __thiscall
NewPVPAddZombieInSingleLevelListener::counterAddInSingleLevel
          (NewPVPAddZombieInSingleLevelListener *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  NewPVPTask *pNVar3;
  long lVar4;
  RtObject *this_00;
  NewPVPTaskData *pNVar5;
  
  if (*(RtObject **)(this + 0x10) != (RtObject *)0x0) {
    pNVar3 = Sexy::RtObject::Cast<NewPVPTask>(*(RtObject **)(this + 0x10));
    lVar4 = *(long *)(this + 0x10);
    *(int *)(pNVar3 + 0x30) = *(int *)(pNVar3 + 0x30) + param_1;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar4 + 0x20));
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1000,0x3a97ce4);
      (*pcVar1)();
    }
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar5 = Sexy::RtObject::Cast<NewPVPTaskData>(this_00);
    if (*(int *)(pNVar5 + 0x68) <= *(int *)(pNVar3 + 0x30)) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      conterSetInSingleLevel(this,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAddZombieInSingleLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPAddZombieInSingleLevelListener::RegisterListener
          (NewPVPAddZombieInSingleLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAdded);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<NewPVPAddZombieMessageData*,Sexy::CBMemberTranslatorX<NewPVPAddZombieInSingleLevelListener,void(NewPVPAddZombieInSingleLevelListener::*)(NewPVPAddZombieMessageData*)>>
            ((MessageRouter *)puVar1,Message::NewPVPAddZombie,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoadComplete);
  Sexy::Delegate0::
  Delegate0<NewPVPAddZombieInSingleLevelListener,void(NewPVPAddZombieInSingleLevelListener::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  lVar2 = ___stack_chk_guard;
  this[8] = (NewPVPAddZombieInSingleLevelListener)0x1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAddZombieInSingleLevelListener::onZombieAdded(NewPVPAddZombieMessageData*) */

void __thiscall
NewPVPAddZombieInSingleLevelListener::onZombieAdded
          (NewPVPAddZombieInSingleLevelListener *this,NewPVPAddZombieMessageData *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  NewPVPTaskData *pNVar3;
  string *psVar4;
  ZombieType *this_01;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar3 = Sexy::RtObject::Cast<NewPVPTaskData>(this_00);
    if ((pNVar3 != (NewPVPTaskData *)0x0) && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')
       ) {
      if (pNVar3[0x60] != (NewPVPTaskData)0x0) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ServerZombieID::ServerZombieID(aSStack_18,*(int *)param_1);
        ServerZombieID::ToString();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        std::string::~string(asStack_20);
        this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        lVar5 = ZombieType::GetProps(this_01);
        if (*(int *)(lVar5 + 0x58) != 2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          goto LAB_03aa1fb8;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
      if (((((pNVar3[0x61] == (NewPVPTaskData)0x0) ||
            (param_1[8] != (NewPVPAddZombieMessageData)0x0)) &&
           ((pNVar3[0x62] == (NewPVPTaskData)0x0 || (param_1[9] != (NewPVPAddZombieMessageData)0x0))
           )) && ((pNVar3[99] == (NewPVPTaskData)0x0 ||
                  (param_1[10] != (NewPVPAddZombieMessageData)0x0)))) &&
         ((pNVar3[100] == (NewPVPTaskData)0x0 ||
          (((param_1[8] != (NewPVPAddZombieMessageData)0x0 ||
            (param_1[9] != (NewPVPAddZombieMessageData)0x0)) ||
           (param_1[10] != (NewPVPAddZombieMessageData)0x0)))))) {
        counterAddInSingleLevel(this,1);
      }
    }
  }
LAB_03aa1fb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

