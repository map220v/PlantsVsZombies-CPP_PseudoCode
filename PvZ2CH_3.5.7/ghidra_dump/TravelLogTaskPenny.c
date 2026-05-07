// Class: TravelLogTaskPenny


/* TravelLogTaskPenny::GetClass() const */

long * TravelLogTaskPenny::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskPenny",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPenny::StaticClassInit() */

void TravelLogTaskPenny::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskPenny");
    (*pcVar2)(plVar1,asStack_10,FUN_039e902c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskPenny::StaticGetClass() */

long * TravelLogTaskPenny::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskPenny",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskPenny::TravelLogTaskPenny() */

void __thiscall TravelLogTaskPenny::TravelLogTaskPenny(TravelLogTaskPenny *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f5d70;
  return;
}


/* TravelLogTaskPenny::StaticNew() */

TravelLogTaskPenny * TravelLogTaskPenny::StaticNew(void)

{
  TravelLogTaskPenny *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskPenny(this);
  return this;
}


/* TravelLogTaskPenny::~TravelLogTaskPenny() */

void __thiscall TravelLogTaskPenny::~TravelLogTaskPenny(TravelLogTaskPenny *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5d70;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskPenny::~TravelLogTaskPenny() */

void __thiscall TravelLogTaskPenny::~TravelLogTaskPenny(TravelLogTaskPenny *this)

{
  ~TravelLogTaskPenny(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskPenny::AddListener() */

void __thiscall TravelLogTaskPenny::AddListener(TravelLogTaskPenny *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<TravelLogTaskPenny,void(TravelLogTaskPenny::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x28] = (TravelLogTaskPenny)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPenny::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
TravelLogTaskPenny::onLevelEnded(TravelLogTaskPenny *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelDefinitionForTask LVar4;
  RtObject *pRVar5;
  TravelLogPennyData *pTVar6;
  long lVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1[0x18] == (LevelDefinitionForTask)0x0) &&
     (param_1[0x19] == (LevelDefinitionForTask)0x0)) {
    if (*(int *)(param_1 + 0x1c) < 1) goto LAB_039ed620;
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    pTVar6 = Sexy::RtObject::Cast<TravelLogPennyData>(pRVar5);
    if (pTVar6[0x48] != (TravelLogPennyData)0x0) goto LAB_039ed64c;
LAB_039ed5a0:
    iVar1 = *(int *)(this + 0x10);
    *(undefined4 *)(this + 0x14) = 1;
    *(int *)(this + 0x10) = iVar1 + 1;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
    ;
    if (*(int *)(lVar7 + 0x40) <= iVar1 + 1) {
      *(undefined4 *)(this + 0x14) = 2;
      (**(code **)(*(long *)this + 0x88))(this);
    }
    (**(code **)(*(long *)this + 0x50))(this);
  }
  else {
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    pTVar6 = Sexy::RtObject::Cast<TravelLogPennyData>(pRVar5);
    if (pTVar6[0x48] == (TravelLogPennyData)0x0) goto LAB_039ed5a0;
LAB_039ed64c:
    if (param_1[0x21] != (LevelDefinitionForTask)0x0) goto LAB_039ed5a0;
  }
  uVar2 = *(undefined4 *)(this + 0xc);
  uVar3 = *(undefined4 *)(this + 8);
  FUN_05475d88(asStack_10,param_1);
  LVar4 = param_1[0x21];
  pRVar5 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  pTVar6 = Sexy::RtObject::Cast<TravelLogPennyData>(pRVar5);
  LogTravelLogResultData(uVar2,uVar3,asStack_10,LVar4,pTVar6);
  std::string::~string(asStack_10);
LAB_039ed620:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

