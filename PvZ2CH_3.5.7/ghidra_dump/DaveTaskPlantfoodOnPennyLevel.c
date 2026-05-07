// Class: DaveTaskPlantfoodOnPennyLevel


/* DaveTaskPlantfoodOnPennyLevel::GetClass() const */

long * DaveTaskPlantfoodOnPennyLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPlantfoodOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPlantfoodOnPennyLevel::RemoveListener() */

void __thiscall DaveTaskPlantfoodOnPennyLevel::RemoveListener(DaveTaskPlantfoodOnPennyLevel *this)

{
  if (this[0x38] == (DaveTaskPlantfoodOnPennyLevel)0x0) {
    return;
  }
  this[0x38] = (DaveTaskPlantfoodOnPennyLevel)0x0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPlantfoodOnPennyLevel::StaticClassInit() */

void DaveTaskPlantfoodOnPennyLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPlantfoodOnPennyLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a081e4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPlantfoodOnPennyLevel::StaticGetClass() */

long * DaveTaskPlantfoodOnPennyLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPlantfoodOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPlantfoodOnPennyLevel::DaveTaskPlantfoodOnPennyLevel() */

void __thiscall
DaveTaskPlantfoodOnPennyLevel::DaveTaskPlantfoodOnPennyLevel(DaveTaskPlantfoodOnPennyLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fabd0;
  return;
}


/* DaveTaskPlantfoodOnPennyLevel::StaticNew() */

DaveTaskPlantfoodOnPennyLevel * DaveTaskPlantfoodOnPennyLevel::StaticNew(void)

{
  DaveTaskPlantfoodOnPennyLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskPlantfoodOnPennyLevel(this);
  return this;
}


/* DaveTaskPlantfoodOnPennyLevel::~DaveTaskPlantfoodOnPennyLevel() */

void __thiscall
DaveTaskPlantfoodOnPennyLevel::~DaveTaskPlantfoodOnPennyLevel(DaveTaskPlantfoodOnPennyLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066fabd0;
  RemoveListener(this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPlantfoodOnPennyLevel::~DaveTaskPlantfoodOnPennyLevel() */

void __thiscall
DaveTaskPlantfoodOnPennyLevel::~DaveTaskPlantfoodOnPennyLevel(DaveTaskPlantfoodOnPennyLevel *this)

{
  ~DaveTaskPlantfoodOnPennyLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPlantfoodOnPennyLevel::Init(Sexy::RtWeakPtr<DaveTaskData>) */

void __thiscall
DaveTaskPlantfoodOnPennyLevel::Init(DaveTaskPlantfoodOnPennyLevel *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  DaveTask::Init((DaveTask *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPlantfoodOnPennyLevel::onApplyPlantfood(Plant*) */

void DaveTaskPlantfoodOnPennyLevel::onApplyPlantfood(Plant *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
  if (*(int *)(lVar3 + 0x40) <= iVar1 + 1) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
  }
  (**(code **)(*(long *)param_1 + 0x50))(param_1);
  return;
}


/* DaveTaskPlantfoodOnPennyLevel::AddListener() */

void __thiscall DaveTaskPlantfoodOnPennyLevel::AddListener(DaveTaskPlantfoodOnPennyLevel *this)

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
            ((ReceivedDataCallback *)this,onApplyPlantfood);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<DaveTaskPlantfoodOnPennyLevel,void(DaveTaskPlantfoodOnPennyLevel::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_40);
  this[0x38] = (DaveTaskPlantfoodOnPennyLevel)0x1;
  return;
}

