// Class: PvZ1FinishLevelListener


/* PvZ1FinishLevelListener::~PvZ1FinishLevelListener() */

void __thiscall PvZ1FinishLevelListener::~PvZ1FinishLevelListener(PvZ1FinishLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670fbf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PvZ1FinishLevelListener::~PvZ1FinishLevelListener() */

void __thiscall PvZ1FinishLevelListener::~PvZ1FinishLevelListener(PvZ1FinishLevelListener *this)

{
  ~PvZ1FinishLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1FinishLevelListener::PvZ1FinishLevelListener() */

void __thiscall PvZ1FinishLevelListener::PvZ1FinishLevelListener(PvZ1FinishLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670fbf0;
  return;
}


/* PvZ1FinishLevelListener::StaticNew() */

PvZ1FinishLevelListener * PvZ1FinishLevelListener::StaticNew(void)

{
  PvZ1FinishLevelListener *this;
  
  this = ::operator_new(0x18);
  PvZ1FinishLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishLevelListener::StaticClassInit() */

void PvZ1FinishLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1FinishLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8a104,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1FinishLevelListener::StaticGetClass() */

long * PvZ1FinishLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1FinishLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1FinishLevelListener::GetClass() const */

long * PvZ1FinishLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"PvZ1FinishLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1FinishLevelListener::onPvZ1FinishLevel(int, bool) */

void PvZ1FinishLevelListener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  PvZ1AchievementData *pPVar4;
  long extraout_x0;
  RtObject *pRVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar3[2] + 0x20));
  if (bVar1) {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar3[2] + 0x20));
    pPVar4 = Sexy::RtObject::Cast<PvZ1AchievementData>(pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar3[2] + 0x20));
    if (bVar1) {
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar3[2] + 0x20));
      Sexy::RtObject::Cast<GoldenEggTaskData>(pRVar5);
    }
    if (pPVar4 == (PvZ1AchievementData *)0x0) goto LAB_03a96cc8;
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 == '\0') goto LAB_03a96cd4;
    std::string::string(asStack_10,"UISpacetimeEnergy");
    UIWidget::GetWidgetBySheetName(asStack_10);
    nop();
    std::string::~string(asStack_10);
    nop();
    if ((extraout_x0 == 0) ||
       (fVar6 = (float)FUN_03a79c98(*(undefined4 *)(extraout_x0 + 0x1d0),
                                    *(undefined4 *)(extraout_x0 + 0x1d4)),
       fVar6 <= *(float *)(pPVar4 + 0x58))) goto LAB_03a96cd4;
  }
  else {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar3[2] + 0x20));
    if (bVar1) {
      pRVar5 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar3[2] + 0x20));
      Sexy::RtObject::Cast<GoldenEggTaskData>(pRVar5);
    }
LAB_03a96cc8:
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 == '\0') goto LAB_03a96cd4;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
LAB_03a96cd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1FinishLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
PvZ1FinishLevelListener::RegisterListener(PvZ1FinishLevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PvZ1FinishLevelListener,void(PvZ1FinishLevelListener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PvZ1FinishLevelListener)0x1;
  return;
}

