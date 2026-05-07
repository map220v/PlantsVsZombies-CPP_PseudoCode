// Class: DaveTaskNormalDraw


/* DaveTaskNormalDraw::GetClass() const */

long * DaveTaskNormalDraw::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskNormalDraw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskNormalDraw::StaticClassInit() */

void DaveTaskNormalDraw::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskNormalDraw");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06924,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskNormalDraw::StaticGetClass() */

long * DaveTaskNormalDraw::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskNormalDraw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskNormalDraw::DaveTaskNormalDraw() */

void __thiscall DaveTaskNormalDraw::DaveTaskNormalDraw(DaveTaskNormalDraw *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa450;
  return;
}


/* DaveTaskNormalDraw::StaticNew() */

DaveTaskNormalDraw * DaveTaskNormalDraw::StaticNew(void)

{
  DaveTaskNormalDraw *this;
  
  this = ::operator_new(0x40);
  DaveTaskNormalDraw(this);
  return this;
}


/* DaveTaskNormalDraw::~DaveTaskNormalDraw() */

void __thiscall DaveTaskNormalDraw::~DaveTaskNormalDraw(DaveTaskNormalDraw *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa450;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskNormalDraw::~DaveTaskNormalDraw() */

void __thiscall DaveTaskNormalDraw::~DaveTaskNormalDraw(DaveTaskNormalDraw *this)

{
  ~DaveTaskNormalDraw(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskNormalDraw::onFinishGacha(int, int) */

void __thiscall DaveTaskNormalDraw::onFinishGacha(DaveTaskNormalDraw *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 1) {
    return;
  }
  iVar1 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x18) = 1;
  *(int *)(this + 0x14) = param_2 + iVar1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  if (*(int *)(lVar2 + 0x40) <= param_2 + iVar1) {
    *(undefined4 *)(this + 0x18) = 2;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* DaveTaskNormalDraw::AddListener() */

void __thiscall DaveTaskNormalDraw::AddListener(DaveTaskNormalDraw *this)

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
            ((ReceivedDataCallback *)this,onFinishGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<DaveTaskNormalDraw,void(DaveTaskNormalDraw::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::FinishPennyGacha,&local_40);
  this[0x38] = (DaveTaskNormalDraw)0x1;
  return;
}

