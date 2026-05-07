// Class: NewPVPAddZombieListener


/* NewPVPAddZombieListener::~NewPVPAddZombieListener() */

void __thiscall NewPVPAddZombieListener::~NewPVPAddZombieListener(NewPVPAddZombieListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710af0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPAddZombieListener::~NewPVPAddZombieListener() */

void __thiscall NewPVPAddZombieListener::~NewPVPAddZombieListener(NewPVPAddZombieListener *this)

{
  ~NewPVPAddZombieListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPAddZombieListener::NewPVPAddZombieListener() */

void __thiscall NewPVPAddZombieListener::NewPVPAddZombieListener(NewPVPAddZombieListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710af0;
  return;
}


/* NewPVPAddZombieListener::StaticNew() */

NewPVPAddZombieListener * NewPVPAddZombieListener::StaticNew(void)

{
  NewPVPAddZombieListener *this;
  
  this = ::operator_new(0x18);
  NewPVPAddZombieListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAddZombieListener::StaticClassInit() */

void NewPVPAddZombieListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAddZombieListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8ea24,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAddZombieListener::StaticGetClass() */

long * NewPVPAddZombieListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAddZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAddZombieListener::GetClass() const */

long * NewPVPAddZombieListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPAddZombieListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAddZombieListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPAddZombieListener::RegisterListener(NewPVPAddZombieListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onZombieAdded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<NewPVPAddZombieMessageData*,Sexy::CBMemberTranslatorX<NewPVPAddZombieListener,void(NewPVPAddZombieListener::*)(NewPVPAddZombieMessageData*)>>
            ((MessageRouter *)puVar1,Message::NewPVPAddZombie,&local_40);
  this[8] = (NewPVPAddZombieListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAddZombieListener::onZombieAdded(NewPVPAddZombieMessageData*) */

void __thiscall
NewPVPAddZombieListener::onZombieAdded
          (NewPVPAddZombieListener *this,NewPVPAddZombieMessageData *param_1)

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
          goto LAB_03aa1e40;
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
        (**(code **)(*(long *)this + 0x58))(this,1);
      }
    }
  }
LAB_03aa1e40:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

