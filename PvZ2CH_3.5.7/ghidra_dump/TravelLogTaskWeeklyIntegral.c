// Class: TravelLogTaskWeeklyIntegral


/* TravelLogTaskWeeklyIntegral::GetClass() const */

long * TravelLogTaskWeeklyIntegral::GetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskWeeklyIntegral",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogTaskWeeklyIntegral::StaticClassInit() */

void TravelLogTaskWeeklyIntegral::StaticClassInit(void)

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
    std::string::string(asStack_10,"TravelLogTaskWeeklyIntegral");
    (*pcVar2)(plVar1,asStack_10,FUN_039ea2bc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogTaskWeeklyIntegral::StaticGetClass() */

long * TravelLogTaskWeeklyIntegral::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TravelLogTaskWeeklyIntegral",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TravelLogTaskWeeklyIntegral::TravelLogTaskWeeklyIntegral() */

void __thiscall
TravelLogTaskWeeklyIntegral::TravelLogTaskWeeklyIntegral(TravelLogTaskWeeklyIntegral *this)

{
  TravelLogTask::TravelLogTask((TravelLogTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f6310;
  return;
}


/* TravelLogTaskWeeklyIntegral::StaticNew() */

TravelLogTaskWeeklyIntegral * TravelLogTaskWeeklyIntegral::StaticNew(void)

{
  TravelLogTaskWeeklyIntegral *this;
  
  this = ::operator_new(0x30);
  TravelLogTaskWeeklyIntegral(this);
  return this;
}


/* TravelLogTaskWeeklyIntegral::~TravelLogTaskWeeklyIntegral() */

void __thiscall
TravelLogTaskWeeklyIntegral::~TravelLogTaskWeeklyIntegral(TravelLogTaskWeeklyIntegral *this)

{
  *(undefined ***)this = &PTR_GetClass_066f6310;
  TravelLogTaskWorldTask::RemoveListener((TravelLogTaskWorldTask *)this);
  TravelLogTask::~TravelLogTask((TravelLogTask *)this);
  return;
}


/* TravelLogTaskWeeklyIntegral::~TravelLogTaskWeeklyIntegral() */

void __thiscall
TravelLogTaskWeeklyIntegral::~TravelLogTaskWeeklyIntegral(TravelLogTaskWeeklyIntegral *this)

{
  ~TravelLogTaskWeeklyIntegral(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogTaskWeeklyIntegral::onObtainIntegral(int) */

void __thiscall
TravelLogTaskWeeklyIntegral::onObtainIntegral(TravelLogTaskWeeklyIntegral *this,int param_1)

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


/* TravelLogTaskWeeklyIntegral::AddListener() */

void __thiscall TravelLogTaskWeeklyIntegral::AddListener(TravelLogTaskWeeklyIntegral *this)

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
  Subscribe<int,Sexy::CBMemberTranslatorX<TravelLogTaskWeeklyIntegral,void(TravelLogTaskWeeklyIntegral::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainIntegral,&local_40);
  this[0x28] = (TravelLogTaskWeeklyIntegral)0x1;
  return;
}

