// Class: NewPVPDamageOpponentBasesListener


/* NewPVPDamageOpponentBasesListener::~NewPVPDamageOpponentBasesListener() */

void __thiscall
NewPVPDamageOpponentBasesListener::~NewPVPDamageOpponentBasesListener
          (NewPVPDamageOpponentBasesListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710c70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPDamageOpponentBasesListener::~NewPVPDamageOpponentBasesListener() */

void __thiscall
NewPVPDamageOpponentBasesListener::~NewPVPDamageOpponentBasesListener
          (NewPVPDamageOpponentBasesListener *this)

{
  ~NewPVPDamageOpponentBasesListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPDamageOpponentBasesListener::NewPVPDamageOpponentBasesListener() */

void __thiscall
NewPVPDamageOpponentBasesListener::NewPVPDamageOpponentBasesListener
          (NewPVPDamageOpponentBasesListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710c70;
  return;
}


/* NewPVPDamageOpponentBasesListener::StaticNew() */

NewPVPDamageOpponentBasesListener * NewPVPDamageOpponentBasesListener::StaticNew(void)

{
  NewPVPDamageOpponentBasesListener *this;
  
  this = ::operator_new(0x18);
  NewPVPDamageOpponentBasesListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDamageOpponentBasesListener::StaticClassInit() */

void NewPVPDamageOpponentBasesListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPDamageOpponentBasesListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8f174,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDamageOpponentBasesListener::StaticGetClass() */

long * NewPVPDamageOpponentBasesListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPDamageOpponentBasesListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPDamageOpponentBasesListener::GetClass() const */

long * NewPVPDamageOpponentBasesListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPDamageOpponentBasesListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPDamageOpponentBasesListener::onDamageTaken(float) */

void __thiscall
NewPVPDamageOpponentBasesListener::onDamageTaken
          (NewPVPDamageOpponentBasesListener *this,float param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  NewPVPTaskData *pNVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar3 = Sexy::RtObject::Cast<NewPVPTaskData>(this_00);
    if ((pNVar3 != (NewPVPTaskData *)0x0) && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')
       ) {
      (**(code **)(*(long *)this + 0x58))(this,(int)param_1);
      return;
    }
  }
  return;
}


/* NewPVPDamageOpponentBasesListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPDamageOpponentBasesListener::RegisterListener
          (NewPVPDamageOpponentBasesListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onDamageTaken);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<NewPVPDamageOpponentBasesListener,void(NewPVPDamageOpponentBasesListener::*)(float)>>
            ((MessageRouter *)puVar1,Message::NewPVPDamageOpponentBases,&local_40);
  this[8] = (NewPVPDamageOpponentBasesListener)0x1;
  return;
}

