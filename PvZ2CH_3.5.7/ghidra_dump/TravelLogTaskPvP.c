// Class: TravelLogTaskPvP


/* TravelLogTaskPvP::GetClass() const */

long * TravelLogTaskPvP::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskPvP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPvP::StaticClassInit() */

void TravelLogTaskPvP::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskPvP");
    (*pcVar2)(plVar1,asStack_10,FUN_039e8c0c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskPvP::StaticGetClass() */

long * TravelLogTaskPvP::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskPvP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskPvP::TravelLogTaskPvP() */

void __thiscall TravelLogTaskPvP::TravelLogTaskPvP(TravelLogTaskPvP *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f5c30;
  return;
}


/* TravelLogTaskPvP::StaticNew() */

TravelLogTaskPvP * TravelLogTaskPvP::StaticNew(void)

{
  TravelLogTaskPvP *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskPvP(this);
  return this;
}


/* TravelLogTaskPvP::~TravelLogTaskPvP() */

void __thiscall TravelLogTaskPvP::~TravelLogTaskPvP(TravelLogTaskPvP *this)

{
  *(undefined ***)this = &PTR_GetClass_066f5c30;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskPvP::~TravelLogTaskPvP() */

void __thiscall TravelLogTaskPvP::~TravelLogTaskPvP(TravelLogTaskPvP *this)

{
  ~TravelLogTaskPvP(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskPvP::AddListener() */

void __thiscall TravelLogTaskPvP::AddListener(TravelLogTaskPvP *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<TravelLogTaskPvP,void(TravelLogTaskPvP::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x28] = (TravelLogTaskPvP)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskPvP::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
TravelLogTaskPvP::onLevelEnded(TravelLogTaskPvP *this,LevelDefinitionForTask *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelDefinitionForTask LVar4;
  RtObject *pRVar5;
  TravelLogPvPData *pTVar6;
  long lVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xf] != (LevelDefinitionForTask)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
    pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar6 = Sexy::RtObject::Cast<TravelLogPvPData>(pRVar5);
    if ((pTVar6[0x48] == (TravelLogPvPData)0x0) || (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
      iVar1 = *(int *)(this + 0x10);
      *(undefined4 *)(this + 0x14) = 1;
      *(int *)(this + 0x10) = iVar1 + 1;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      if (*(int *)(lVar7 + 0x40) <= iVar1 + 1) {
        *(undefined4 *)(this + 0x14) = 2;
        (**(code **)(*(long *)this + 0x88))(this);
      }
      (**(code **)(*(long *)this + 0x50))(this);
    }
    uVar2 = *(undefined4 *)(this + 0xc);
    uVar3 = *(undefined4 *)(this + 8);
    FUN_05475d88(asStack_10,param_1);
    LVar4 = param_1[0x21];
    pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pTVar6 = Sexy::RtObject::Cast<TravelLogPvPData>(pRVar5);
    LogTravelLogResultData(uVar2,uVar3,asStack_10,LVar4,pTVar6);
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

