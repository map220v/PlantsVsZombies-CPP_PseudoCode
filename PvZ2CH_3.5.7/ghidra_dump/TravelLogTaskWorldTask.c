// Class: TravelLogTaskWorldTask


/* TravelLogTaskWorldTask::GetClass() const */

long * TravelLogTaskWorldTask::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskWorldTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskWorldTask::RemoveListener() */

void __thiscall TravelLogTaskWorldTask::RemoveListener(TravelLogTaskWorldTask *this)

{
  if (this[0x28] == (TravelLogTaskWorldTask)0x0) {
    return;
  }
  this[0x28] = (TravelLogTaskWorldTask)0x0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskWorldTask::StaticClassInit() */

void TravelLogTaskWorldTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskWorldTask");
    (*pcVar2)(plVar1,asStack_10,FUN_039ea4cc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskWorldTask::StaticGetClass() */

long * TravelLogTaskWorldTask::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskWorldTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskWorldTask::TravelLogTaskWorldTask() */

void __thiscall TravelLogTaskWorldTask::TravelLogTaskWorldTask(TravelLogTaskWorldTask *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f63b0;
  return;
}


/* TravelLogTaskWorldTask::StaticNew() */

TravelLogTaskWorldTask * TravelLogTaskWorldTask::StaticNew(void)

{
  TravelLogTaskWorldTask *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskWorldTask(this);
  return this;
}


/* TravelLogTaskWorldTask::~TravelLogTaskWorldTask() */

void __thiscall TravelLogTaskWorldTask::~TravelLogTaskWorldTask(TravelLogTaskWorldTask *this)

{
  *(undefined ***)this = &PTR_GetClass_066f63b0;
  RemoveListener(this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskWorldTask::~TravelLogTaskWorldTask() */

void __thiscall TravelLogTaskWorldTask::~TravelLogTaskWorldTask(TravelLogTaskWorldTask *this)

{
  ~TravelLogTaskWorldTask(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskWorldTask::Init(Sexy::RtWeakPtr<TravelLogData>) */

void __thiscall TravelLogTaskWorldTask::Init(TravelLogTaskWorldTask *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  TravelLogTask::Init((TravelLogTask *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskWorldTask::AddListener() */

void __thiscall TravelLogTaskWorldTask::AddListener(TravelLogTaskWorldTask *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<TravelLogTaskWorldTask,void(TravelLogTaskWorldTask::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x28] = (TravelLogTaskWorldTask)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskWorldTask::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
TravelLogTaskWorldTask::onLevelEnded(TravelLogTaskWorldTask *this,LevelDefinitionForTask *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  LevelDefinitionForTask LVar4;
  char cVar5;
  RtObject *pRVar6;
  TravelLogWorldTaskData *pTVar7;
  long lVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x22] == (LevelDefinitionForTask)0x0) goto LAB_039edf60;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
  if (pTVar7[0x55] == (TravelLogWorldTaskData)0x0) {
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
    cVar5 = std::operator==((string *)(pTVar7 + 0x48),(string *)param_1);
    if (cVar5 != '\0') {
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
      if (*(int *)(pTVar7 + 0x50) == *(int *)(param_1 + 8)) {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
        if (pTVar7[0x54] == *(TravelLogWorldTaskData *)(param_1 + 0xc)) goto LAB_039ee048;
      }
    }
  }
  else {
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
    if (pTVar7[0x55] == *(TravelLogWorldTaskData *)(param_1 + 0xd)) {
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
      cVar5 = std::operator==((string *)(pTVar7 + 0x48),(string *)param_1);
      if (cVar5 != '\0') {
LAB_039ee048:
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
        if ((pTVar7[0x56] == (TravelLogWorldTaskData)0x0) ||
           (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
          iVar3 = *(int *)(this + 0x10);
          *(undefined4 *)(this + 0x14) = 1;
          *(int *)(this + 0x10) = iVar3 + 1;
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          if (*(int *)(lVar8 + 0x40) <= iVar3 + 1) {
            *(undefined4 *)(this + 0x14) = 2;
            (**(code **)(*(long *)this + 0x88))(this);
          }
          (**(code **)(*(long *)this + 0x50))(this);
        }
      }
    }
  }
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 8);
  FUN_05475d88(asStack_10,param_1);
  LVar4 = param_1[0x21];
  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pTVar7 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(pRVar6);
  LogTravelLogResultData(uVar1,uVar2,asStack_10,LVar4,pTVar7);
  std::string::~string(asStack_10);
LAB_039edf60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

