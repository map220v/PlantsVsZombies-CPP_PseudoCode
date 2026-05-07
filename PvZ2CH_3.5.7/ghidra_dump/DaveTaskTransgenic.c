// Class: DaveTaskTransgenic


/* DaveTaskTransgenic::GetClass() const */

long * DaveTaskTransgenic::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskTransgenic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskTransgenic::StaticClassInit() */

void DaveTaskTransgenic::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskTransgenic");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06f54,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskTransgenic::StaticGetClass() */

long * DaveTaskTransgenic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskTransgenic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskTransgenic::DaveTaskTransgenic() */

void __thiscall DaveTaskTransgenic::DaveTaskTransgenic(DaveTaskTransgenic *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa630;
  return;
}


/* DaveTaskTransgenic::StaticNew() */

DaveTaskTransgenic * DaveTaskTransgenic::StaticNew(void)

{
  DaveTaskTransgenic *this;
  
  this = ::operator_new(0x40);
  DaveTaskTransgenic(this);
  return this;
}


/* DaveTaskTransgenic::~DaveTaskTransgenic() */

void __thiscall DaveTaskTransgenic::~DaveTaskTransgenic(DaveTaskTransgenic *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa630;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskTransgenic::~DaveTaskTransgenic() */

void __thiscall DaveTaskTransgenic::~DaveTaskTransgenic(DaveTaskTransgenic *this)

{
  ~DaveTaskTransgenic(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskTransgenic::FinishPlantTransgenic(int) */

void __thiscall DaveTaskTransgenic::FinishPlantTransgenic(DaveTaskTransgenic *this,int param_1)

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


/* DaveTaskTransgenic::AddListener() */

void __thiscall DaveTaskTransgenic::AddListener(DaveTaskTransgenic *this)

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
            ((ReceivedDataCallback *)this,FinishPlantTransgenic);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DaveTaskTransgenic,void(DaveTaskTransgenic::*)(int)>>
            ((MessageRouter *)puVar1,Message::PlantTransgenic,&local_40);
  this[0x38] = (DaveTaskTransgenic)0x1;
  return;
}

