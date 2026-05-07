// Class: DaveTaskObtainPennySignal


/* DaveTaskObtainPennySignal::GetClass() const */

long * DaveTaskObtainPennySignal::GetClass(void)

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
  uVar2 = DaveTask::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskObtainPennySignal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskObtainPennySignal::StaticClassInit() */

void DaveTaskObtainPennySignal::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskObtainPennySignal");
    (*pcVar2)(plVar1,asStack_10,FUN_03a07584,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskObtainPennySignal::StaticGetClass() */

long * DaveTaskObtainPennySignal::StaticGetClass(void)

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
  uVar2 = DaveTask::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskObtainPennySignal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainPennySignal::DaveTaskObtainPennySignal() */

void __thiscall
DaveTaskObtainPennySignal::DaveTaskObtainPennySignal(DaveTaskObtainPennySignal *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa810;
  return;
}


/* DaveTaskObtainPennySignal::StaticNew() */

DaveTaskObtainPennySignal * DaveTaskObtainPennySignal::StaticNew(void)

{
  DaveTaskObtainPennySignal *this;
  
  this = ::operator_new(0x40);
  DaveTaskObtainPennySignal(this);
  return this;
}


/* DaveTaskObtainPennySignal::~DaveTaskObtainPennySignal() */

void __thiscall
DaveTaskObtainPennySignal::~DaveTaskObtainPennySignal(DaveTaskObtainPennySignal *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa810;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskObtainPennySignal::~DaveTaskObtainPennySignal() */

void __thiscall
DaveTaskObtainPennySignal::~DaveTaskObtainPennySignal(DaveTaskObtainPennySignal *this)

{
  ~DaveTaskObtainPennySignal(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskObtainPennySignal::onObtainPennySignal(int) */

void __thiscall
DaveTaskObtainPennySignal::onObtainPennySignal(DaveTaskObtainPennySignal *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x18) = 1;
  *(int *)(this + 0x14) = param_1 + iVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  if (*(int *)(lVar2 + 0x40) <= param_1 + iVar1) {
    *(undefined4 *)(this + 0x18) = 2;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* DaveTaskObtainPennySignal::AddListener() */

void __thiscall DaveTaskObtainPennySignal::AddListener(DaveTaskObtainPennySignal *this)

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
            ((ReceivedDataCallback *)this,onObtainPennySignal);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DaveTaskObtainPennySignal,void(DaveTaskObtainPennySignal::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainPennySignal,&local_40);
  this[0x38] = (DaveTaskObtainPennySignal)0x1;
  return;
}

