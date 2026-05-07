// Class: DaveTaskPassPennyLevel


/* DaveTaskPassPennyLevel::GetClass() const */

long * DaveTaskPassPennyLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassPennyLevel::StaticClassInit() */

void DaveTaskPassPennyLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassPennyLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a07164,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassPennyLevel::StaticGetClass() */

long * DaveTaskPassPennyLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPennyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassPennyLevel::DaveTaskPassPennyLevel() */

void __thiscall DaveTaskPassPennyLevel::DaveTaskPassPennyLevel(DaveTaskPassPennyLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa6d0;
  return;
}


/* DaveTaskPassPennyLevel::StaticNew() */

DaveTaskPassPennyLevel * DaveTaskPassPennyLevel::StaticNew(void)

{
  DaveTaskPassPennyLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskPassPennyLevel(this);
  return this;
}


/* DaveTaskPassPennyLevel::~DaveTaskPassPennyLevel() */

void __thiscall DaveTaskPassPennyLevel::~DaveTaskPassPennyLevel(DaveTaskPassPennyLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa6d0;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPassPennyLevel::~DaveTaskPassPennyLevel() */

void __thiscall DaveTaskPassPennyLevel::~DaveTaskPassPennyLevel(DaveTaskPassPennyLevel *this)

{
  ~DaveTaskPassPennyLevel(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPassPennyLevel::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
DaveTaskPassPennyLevel::onLevelEnded(DaveTaskPassPennyLevel *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if ((cVar2 != '\0') && (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
    iVar1 = *(int *)(this + 0x14);
    *(undefined4 *)(this + 0x18) = 1;
    *(int *)(this + 0x14) = iVar1 + 1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
    ;
    if (*(int *)(lVar3 + 0x40) <= iVar1 + 1) {
      *(undefined4 *)(this + 0x18) = 2;
      (**(code **)(*(long *)this + 0x88))(this);
    }
    (**(code **)(*(long *)this + 0x50))(this);
  }
  return;
}


/* DaveTaskPassPennyLevel::AddListener() */

void __thiscall DaveTaskPassPennyLevel::AddListener(DaveTaskPassPennyLevel *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskPassPennyLevel,void(DaveTaskPassPennyLevel::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskPassPennyLevel)0x1;
  return;
}

