// Class: DaveTaskObtainSunmoneyOnPennyLevel


/* DaveTaskObtainSunmoneyOnPennyLevel::GetClass() const */

long * DaveTaskObtainSunmoneyOnPennyLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskObtainSunmoneyOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskObtainSunmoneyOnPennyLevel::StaticClassInit() */

void DaveTaskObtainSunmoneyOnPennyLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskObtainSunmoneyOnPennyLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a07dc4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskObtainSunmoneyOnPennyLevel::StaticGetClass() */

long * DaveTaskObtainSunmoneyOnPennyLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskObtainSunmoneyOnPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::DaveTaskObtainSunmoneyOnPennyLevel() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevel::DaveTaskObtainSunmoneyOnPennyLevel
          (DaveTaskObtainSunmoneyOnPennyLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066faa90;
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::StaticNew() */

DaveTaskObtainSunmoneyOnPennyLevel * DaveTaskObtainSunmoneyOnPennyLevel::StaticNew(void)

{
  DaveTaskObtainSunmoneyOnPennyLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskObtainSunmoneyOnPennyLevel(this);
  return this;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::~DaveTaskObtainSunmoneyOnPennyLevel() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevel::~DaveTaskObtainSunmoneyOnPennyLevel
          (DaveTaskObtainSunmoneyOnPennyLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066faa90;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::~DaveTaskObtainSunmoneyOnPennyLevel() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevel::~DaveTaskObtainSunmoneyOnPennyLevel
          (DaveTaskObtainSunmoneyOnPennyLevel *this)

{
  ~DaveTaskObtainSunmoneyOnPennyLevel(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::onObtainSunmoney(CollectableSun*) */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevel::onObtainSunmoney
          (DaveTaskObtainSunmoneyOnPennyLevel *this,CollectableSun *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if ((cVar2 != '\0') && (param_1 != (CollectableSun *)0x0)) {
    iVar3 = CollectableCure::GetCureValue();
    iVar1 = *(int *)(this + 0x14);
    *(undefined4 *)(this + 0x18) = 1;
    *(int *)(this + 0x14) = iVar3 + iVar1;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
    ;
    if (iVar3 + iVar1 < *(int *)(lVar4 + 0x40)) {
      (**(code **)(*(long *)this + 0x50))(this);
    }
    else {
      *(undefined4 *)(this + 0x18) = 2;
      (**(code **)(*(long *)this + 0x88))(this);
      (**(code **)(*(long *)this + 0x50))(this);
    }
  }
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevel::AddListener() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevel::AddListener(DaveTaskObtainSunmoneyOnPennyLevel *this)

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
            ((ReceivedDataCallback *)this,onObtainSunmoney);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<CollectableSun*,Sexy::CBMemberTranslatorX<DaveTaskObtainSunmoneyOnPennyLevel,void(DaveTaskObtainSunmoneyOnPennyLevel::*)(CollectableSun*)>>
            ((MessageRouter *)puVar1,Message::SunProducedByPlant,&local_40);
  this[0x38] = (DaveTaskObtainSunmoneyOnPennyLevel)0x1;
  return;
}

