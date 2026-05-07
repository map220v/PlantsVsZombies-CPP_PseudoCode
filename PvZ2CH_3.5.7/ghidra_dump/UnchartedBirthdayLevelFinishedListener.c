// Class: UnchartedBirthdayLevelFinishedListener


/* UnchartedBirthdayLevelFinishedListener::~UnchartedBirthdayLevelFinishedListener() */

void __thiscall
UnchartedBirthdayLevelFinishedListener::~UnchartedBirthdayLevelFinishedListener
          (UnchartedBirthdayLevelFinishedListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710e70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* UnchartedBirthdayLevelFinishedListener::~UnchartedBirthdayLevelFinishedListener() */

void __thiscall
UnchartedBirthdayLevelFinishedListener::~UnchartedBirthdayLevelFinishedListener
          (UnchartedBirthdayLevelFinishedListener *this)

{
  ~UnchartedBirthdayLevelFinishedListener(this);
  AK::FreeHook(this);
  return;
}


/* UnchartedBirthdayLevelFinishedListener::UnchartedBirthdayLevelFinishedListener() */

void __thiscall
UnchartedBirthdayLevelFinishedListener::UnchartedBirthdayLevelFinishedListener
          (UnchartedBirthdayLevelFinishedListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710e70;
  return;
}


/* UnchartedBirthdayLevelFinishedListener::StaticNew() */

UnchartedBirthdayLevelFinishedListener * UnchartedBirthdayLevelFinishedListener::StaticNew(void)

{
  UnchartedBirthdayLevelFinishedListener *this;
  
  this = ::operator_new(0x18);
  UnchartedBirthdayLevelFinishedListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayLevelFinishedListener::StaticClassInit() */

void UnchartedBirthdayLevelFinishedListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedBirthdayLevelFinishedListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8fb34,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBirthdayLevelFinishedListener::StaticGetClass() */

long * UnchartedBirthdayLevelFinishedListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBirthdayLevelFinishedListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBirthdayLevelFinishedListener::GetClass() const */

long * UnchartedBirthdayLevelFinishedListener::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBirthdayLevelFinishedListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBirthdayLevelFinishedListener::onLevelFinished(bool) */

void UnchartedBirthdayLevelFinishedListener::onLevelFinished(bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  RtObject *this;
  UnchartedBirthdayTaskData *pUVar6;
  UnchartedModeNetworkMgr *pUVar7;
  long lVar8;
  
  plVar5 = (long *)(ulong)param_1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar5[2] + 0x20));
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar5[2] + 0x20));
    pUVar6 = Sexy::RtObject::Cast<UnchartedBirthdayTaskData>(this);
    if (pUVar6 != (UnchartedBirthdayTaskData *)0x0) {
      cVar2 = PVZ2UnchartedModeUtils::IsUnchartedBirthday();
      if ((cVar2 == '\0') &&
         (cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar2 == '\0')) {
        return;
      }
      if (0 < *(int *)(pUVar6 + 0x28)) {
        pUVar7 = (UnchartedModeNetworkMgr *)
                 Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar5[2] + 0x20));
        cVar2 = UnchartedModeNetworkMgr::IsTaskIdValidInCurrentLevel(pUVar7,*(int *)(lVar8 + 8));
        if (cVar2 != '\0') {
          iVar3 = PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndex();
          pUVar7 = (UnchartedModeNetworkMgr *)
                   Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          iVar3 = UnchartedModeNetworkMgr::GetBirthdayCurrentLevelStar(pUVar7,iVar3);
          iVar4 = PVZ2UnchartedModeUtils::GetBirthdayCurrentLevelSelectedStars();
          if ((*(int *)(pUVar6 + 0x28) <= iVar4) && (iVar3 < *(int *)(pUVar6 + 0x28))) {
            (**(code **)(*plVar5 + 0x58))(plVar5);
          }
        }
      }
    }
  }
  return;
}


/* UnchartedBirthdayLevelFinishedListener::RegisterListener(GeneralTask*) */

void __thiscall
UnchartedBirthdayLevelFinishedListener::RegisterListener
          (UnchartedBirthdayLevelFinishedListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onLevelFinished);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UnchartedBirthdayLevelFinishedListener,void(UnchartedBirthdayLevelFinishedListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyUnchartedBirthdayFinished,&local_40);
  this[8] = (UnchartedBirthdayLevelFinishedListener)0x1;
  return;
}

