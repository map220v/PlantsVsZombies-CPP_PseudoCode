// Class: TravelLogTaskDailyIntegral


/* TravelLogTaskDailyIntegral::GetClass() const */

long * TravelLogTaskDailyIntegral::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskDailyIntegral",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskDailyIntegral::StaticClassInit() */

void TravelLogTaskDailyIntegral::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskDailyIntegral");
    (*pcVar2)(plVar1,asStack_10,FUN_039e9c8c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskDailyIntegral::StaticGetClass() */

long * TravelLogTaskDailyIntegral::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskDailyIntegral",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskDailyIntegral::TravelLogTaskDailyIntegral() */

void __thiscall
TravelLogTaskDailyIntegral::TravelLogTaskDailyIntegral(TravelLogTaskDailyIntegral *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f6130;
  return;
}


/* TravelLogTaskDailyIntegral::StaticNew() */

TravelLogTaskDailyIntegral * TravelLogTaskDailyIntegral::StaticNew(void)

{
  TravelLogTaskDailyIntegral *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskDailyIntegral(this);
  return this;
}


/* TravelLogTaskDailyIntegral::~TravelLogTaskDailyIntegral() */

void __thiscall
TravelLogTaskDailyIntegral::~TravelLogTaskDailyIntegral(TravelLogTaskDailyIntegral *this)

{
  *(undefined ***)this = &PTR_GetClass_066f6130;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskDailyIntegral::~TravelLogTaskDailyIntegral() */

void __thiscall
TravelLogTaskDailyIntegral::~TravelLogTaskDailyIntegral(TravelLogTaskDailyIntegral *this)

{
  ~TravelLogTaskDailyIntegral(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskDailyIntegral::onObtainIntegral(int) */

void __thiscall
TravelLogTaskDailyIntegral::onObtainIntegral(TravelLogTaskDailyIntegral *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0x14) = 1;
  *(int *)(this + 0x10) = param_1 + iVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  if (*(int *)(lVar2 + 0x40) <= param_1 + iVar1) {
    *(undefined4 *)(this + 0x14) = 2;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* TravelLogTaskDailyIntegral::AddListener() */

void __thiscall TravelLogTaskDailyIntegral::AddListener(TravelLogTaskDailyIntegral *this)

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
            ((ReceivedDataCallback *)this,onObtainIntegral);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<TravelLogTaskDailyIntegral,void(TravelLogTaskDailyIntegral::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainIntegral,&local_40);
  this[0x28] = (TravelLogTaskDailyIntegral)0x1;
  return;
}

