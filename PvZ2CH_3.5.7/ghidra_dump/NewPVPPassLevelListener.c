// Class: NewPVPPassLevelListener


/* NewPVPPassLevelListener::~NewPVPPassLevelListener() */

void __thiscall NewPVPPassLevelListener::~NewPVPPassLevelListener(NewPVPPassLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710970;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NewPVPPassLevelListener::~NewPVPPassLevelListener() */

void __thiscall NewPVPPassLevelListener::~NewPVPPassLevelListener(NewPVPPassLevelListener *this)

{
  ~NewPVPPassLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPPassLevelListener::NewPVPPassLevelListener() */

void __thiscall NewPVPPassLevelListener::NewPVPPassLevelListener(NewPVPPassLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710970;
  return;
}


/* NewPVPPassLevelListener::StaticNew() */

NewPVPPassLevelListener * NewPVPPassLevelListener::StaticNew(void)

{
  NewPVPPassLevelListener *this;
  
  this = ::operator_new(0x18);
  NewPVPPassLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPassLevelListener::StaticClassInit() */

void NewPVPPassLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPPassLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8e2d4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPPassLevelListener::StaticGetClass() */

long * NewPVPPassLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPPassLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPPassLevelListener::GetClass() const */

long * NewPVPPassLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPPassLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPPassLevelListener::onPassLevel(bool, bool, int) */

void __thiscall
NewPVPPassLevelListener::onPassLevel
          (NewPVPPassLevelListener *this,bool param_1,bool param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  TourismOctoberTaskData *pTVar3;
  RtObject *pRVar4;
  NewPVPTaskData *pNVar5;
  BattleOrderTaskData *pBVar6;
  PlantCultivateTaskData *pPVar7;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  pNVar5 = (NewPVPTaskData *)0x0;
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar5 = Sexy::RtObject::Cast<NewPVPTaskData>(pRVar4);
  }
  pBVar6 = (BattleOrderTaskData *)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pBVar6 = Sexy::RtObject::Cast<BattleOrderTaskData>(pRVar4);
  }
  pPVar7 = (PlantCultivateTaskData *)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pPVar7 = Sexy::RtObject::Cast<PlantCultivateTaskData>(pRVar4);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  pTVar3 = (TourismOctoberTaskData *)0x0;
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pTVar3 = Sexy::RtObject::Cast<TourismOctoberTaskData>(pRVar4);
  }
  if (pNVar5 == (NewPVPTaskData *)0x0) {
    if (pBVar6 == (BattleOrderTaskData *)0x0) {
      if (((pPVar7 != (PlantCultivateTaskData *)0x0) || (pTVar3 != (TourismOctoberTaskData *)0x0))
         && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')) {
LAB_03a9794c:
        (**(code **)(*(long *)this + 0x58))(this,1);
        return;
      }
    }
    else {
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      if ((cVar2 != '\0') && (param_1)) goto LAB_03a9794c;
    }
  }
  else {
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if ((((cVar2 != '\0') && ((byte)pNVar5[0x54] <= param_1)) && ((byte)pNVar5[0x55] <= param_2)) &&
       ((param_3 <= *(int *)(pNVar5 + 0x58) || (*(int *)(pNVar5 + 0x58) < 1)))) goto LAB_03a9794c;
  }
  return;
}


/* NewPVPPassLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
NewPVPPassLevelListener::RegisterListener(NewPVPPassLevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onPassLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,bool,int,Sexy::CBMemberTranslatorX<NewPVPPassLevelListener,void(NewPVPPassLevelListener::*)(bool,bool,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPPassLevel,&local_40);
  this[8] = (NewPVPPassLevelListener)0x1;
  return;
}

