// Class: TravelLogTaskEpicTask


/* TravelLogTaskEpicTask::GetClass() const */

long * TravelLogTaskEpicTask::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskEpicTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskEpicTask::StaticClassInit() */

void TravelLogTaskEpicTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskEpicTask");
    (*pcVar2)(plVar1,asStack_10,FUN_039ea0ac,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskEpicTask::StaticGetClass() */

long * TravelLogTaskEpicTask::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskEpicTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskEpicTask::TravelLogTaskEpicTask() */

void __thiscall TravelLogTaskEpicTask::TravelLogTaskEpicTask(TravelLogTaskEpicTask *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f6270;
  return;
}


/* TravelLogTaskEpicTask::StaticNew() */

TravelLogTaskEpicTask * TravelLogTaskEpicTask::StaticNew(void)

{
  TravelLogTaskEpicTask *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskEpicTask(this);
  return this;
}


/* TravelLogTaskEpicTask::~TravelLogTaskEpicTask() */

void __thiscall TravelLogTaskEpicTask::~TravelLogTaskEpicTask(TravelLogTaskEpicTask *this)

{
  *(undefined ***)this = &PTR_GetClass_066f6270;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskEpicTask::~TravelLogTaskEpicTask() */

void __thiscall TravelLogTaskEpicTask::~TravelLogTaskEpicTask(TravelLogTaskEpicTask *this)

{
  ~TravelLogTaskEpicTask(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskEpicTask::AddListener() */

void __thiscall TravelLogTaskEpicTask::AddListener(TravelLogTaskEpicTask *this)

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
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<TravelLogTaskEpicTask,void(TravelLogTaskEpicTask::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x28] = (TravelLogTaskEpicTask)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskEpicTask::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
TravelLogTaskEpicTask::onLevelEnded(TravelLogTaskEpicTask *this,LevelDefinitionForTask *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  LevelDefinitionForTask LVar4;
  char cVar5;
  ProfileMgr *this_01;
  RtObject *pRVar6;
  TravelLogEpicTaskData *pTVar7;
  ulong uVar8;
  string *psVar9;
  long lVar10;
  undefined8 uVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  if (param_1[0x10] != (LevelDefinitionForTask)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogEpicTaskData>(pRVar6);
    uVar11 = *(undefined8 *)(pTVar7 + 0x50);
    uVar8 = FUN_039e8158(uVar11,*(undefined8 *)(pTVar7 + 0x58));
    if ((ulong)(long)*(int *)(this + 0x10) < uVar8) {
      psVar9 = (string *)FUN_039e8164(uVar11);
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      cVar5 = std::operator==(psVar9,asStack_10);
      std::string::~string(asStack_10);
      if (cVar5 != '\0') {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pTVar7 = Sexy::RtObject::Cast<TravelLogEpicTaskData>(pRVar6);
        if ((pTVar7[0x48] == (TravelLogEpicTaskData)0x0) ||
           (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
          iVar3 = *(int *)(this + 0x10);
          *(undefined4 *)(this + 0x14) = 1;
          *(int *)(this + 0x10) = iVar3 + 1;
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          if (*(int *)(lVar10 + 0x40) <= iVar3 + 1) {
            *(undefined4 *)(this + 0x14) = 2;
            (**(code **)(*(long *)this + 0x88))(this);
          }
          (**(code **)(*(long *)this + 0x50))(this);
        }
      }
    }
    uVar1 = *(undefined4 *)(this + 0xc);
    uVar2 = *(undefined4 *)(this + 8);
    FUN_05475d88(asStack_10,param_1);
    LVar4 = param_1[0x21];
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogEpicTaskData>(pRVar6);
    LogTravelLogResultData(uVar1,uVar2,asStack_10,LVar4,pTVar7);
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

