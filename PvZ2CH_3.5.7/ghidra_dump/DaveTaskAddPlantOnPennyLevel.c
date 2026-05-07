// Class: DaveTaskAddPlantOnPennyLevel


/* DaveTaskAddPlantOnPennyLevel::GetClass() const */

long * DaveTaskAddPlantOnPennyLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskAddPlantOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskAddPlantOnPennyLevel::StaticClassInit() */

void DaveTaskAddPlantOnPennyLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskAddPlantOnPennyLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a07fd4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskAddPlantOnPennyLevel::StaticGetClass() */

long * DaveTaskAddPlantOnPennyLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskAddPlantOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskAddPlantOnPennyLevel::DaveTaskAddPlantOnPennyLevel() */

void __thiscall
DaveTaskAddPlantOnPennyLevel::DaveTaskAddPlantOnPennyLevel(DaveTaskAddPlantOnPennyLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fab30;
  return;
}


/* DaveTaskAddPlantOnPennyLevel::StaticNew() */

DaveTaskAddPlantOnPennyLevel * DaveTaskAddPlantOnPennyLevel::StaticNew(void)

{
  DaveTaskAddPlantOnPennyLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskAddPlantOnPennyLevel(this);
  return this;
}


/* DaveTaskAddPlantOnPennyLevel::~DaveTaskAddPlantOnPennyLevel() */

void __thiscall
DaveTaskAddPlantOnPennyLevel::~DaveTaskAddPlantOnPennyLevel(DaveTaskAddPlantOnPennyLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066fab30;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskAddPlantOnPennyLevel::~DaveTaskAddPlantOnPennyLevel() */

void __thiscall
DaveTaskAddPlantOnPennyLevel::~DaveTaskAddPlantOnPennyLevel(DaveTaskAddPlantOnPennyLevel *this)

{
  ~DaveTaskAddPlantOnPennyLevel(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskAddPlantOnPennyLevel::onAddPlant(Plant*) */

void DaveTaskAddPlantOnPennyLevel::onAddPlant(Plant *param_1)

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


/* DaveTaskAddPlantOnPennyLevel::AddListener() */

void __thiscall DaveTaskAddPlantOnPennyLevel::AddListener(DaveTaskAddPlantOnPennyLevel *this)

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
            ((ReceivedDataCallback *)this,onAddPlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<DaveTaskAddPlantOnPennyLevel,void(DaveTaskAddPlantOnPennyLevel::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  this[0x38] = (DaveTaskAddPlantOnPennyLevel)0x1;
  return;
}

