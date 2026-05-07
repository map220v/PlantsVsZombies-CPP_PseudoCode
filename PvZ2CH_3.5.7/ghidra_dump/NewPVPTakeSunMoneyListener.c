// Class: NewPVPTakeSunMoneyListener


/* NewPVPTakeSunMoneyListener::~NewPVPTakeSunMoneyListener() */

void __thiscall
NewPVPTakeSunMoneyListener::~NewPVPTakeSunMoneyListener(NewPVPTakeSunMoneyListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067109f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPTakeSunMoneyListener::~NewPVPTakeSunMoneyListener() */

void __thiscall
NewPVPTakeSunMoneyListener::~NewPVPTakeSunMoneyListener(NewPVPTakeSunMoneyListener *this)

{
  ~NewPVPTakeSunMoneyListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPTakeSunMoneyListener::NewPVPTakeSunMoneyListener() */

void __thiscall
NewPVPTakeSunMoneyListener::NewPVPTakeSunMoneyListener(NewPVPTakeSunMoneyListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067109f0;
  return;
}


/* NewPVPTakeSunMoneyListener::StaticNew() */

NewPVPTakeSunMoneyListener * NewPVPTakeSunMoneyListener::StaticNew(void)

{
  NewPVPTakeSunMoneyListener *this;
  
  this = ::operator_new(0x18);
  NewPVPTakeSunMoneyListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTakeSunMoneyListener::StaticClassInit() */

void NewPVPTakeSunMoneyListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPTakeSunMoneyListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8e544,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTakeSunMoneyListener::StaticGetClass() */

long * NewPVPTakeSunMoneyListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTakeSunMoneyListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPTakeSunMoneyListener::GetClass() const */

long * NewPVPTakeSunMoneyListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTakeSunMoneyListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPTakeSunMoneyListener::onTakenSunMoney(int) */

void __thiscall
NewPVPTakeSunMoneyListener::onTakenSunMoney(NewPVPTakeSunMoneyListener *this,int param_1)

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
      (**(code **)(*(long *)this + 0x58))(this,param_1);
      return;
    }
  }
  return;
}


/* NewPVPTakeSunMoneyListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPTakeSunMoneyListener::RegisterListener(NewPVPTakeSunMoneyListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onTakenSunMoney);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPTakeSunMoneyListener,void(NewPVPTakeSunMoneyListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunChanged,&local_40);
  this[8] = (NewPVPTakeSunMoneyListener)0x1;
  return;
}

