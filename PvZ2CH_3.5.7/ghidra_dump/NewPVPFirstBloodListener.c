// Class: NewPVPFirstBloodListener


/* NewPVPFirstBloodListener::~NewPVPFirstBloodListener() */

void __thiscall NewPVPFirstBloodListener::~NewPVPFirstBloodListener(NewPVPFirstBloodListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710cf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPFirstBloodListener::~NewPVPFirstBloodListener() */

void __thiscall NewPVPFirstBloodListener::~NewPVPFirstBloodListener(NewPVPFirstBloodListener *this)

{
  ~NewPVPFirstBloodListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPFirstBloodListener::NewPVPFirstBloodListener() */

void __thiscall NewPVPFirstBloodListener::NewPVPFirstBloodListener(NewPVPFirstBloodListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710cf0;
  return;
}


/* NewPVPFirstBloodListener::StaticNew() */

NewPVPFirstBloodListener * NewPVPFirstBloodListener::StaticNew(void)

{
  NewPVPFirstBloodListener *this;
  
  this = ::operator_new(0x18);
  NewPVPFirstBloodListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFirstBloodListener::StaticClassInit() */

void NewPVPFirstBloodListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPFirstBloodListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8f3e4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPFirstBloodListener::StaticGetClass() */

long * NewPVPFirstBloodListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPFirstBloodListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPFirstBloodListener::GetClass() const */

long * NewPVPFirstBloodListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPFirstBloodListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPFirstBloodListener::onFirstBlood() */

void __thiscall NewPVPFirstBloodListener::onFirstBlood(NewPVPFirstBloodListener *this)

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
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPFirstBloodListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPFirstBloodListener::RegisterListener(NewPVPFirstBloodListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFirstBlood);
  Sexy::Delegate0::Delegate0<NewPVPFirstBloodListener,void(NewPVPFirstBloodListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NewPVPFirstBlood,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (NewPVPFirstBloodListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

