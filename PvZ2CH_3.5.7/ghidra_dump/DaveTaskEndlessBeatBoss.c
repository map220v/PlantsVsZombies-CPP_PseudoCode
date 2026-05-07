// Class: DaveTaskEndlessBeatBoss


/* DaveTaskEndlessBeatBoss::GetClass() const */

long * DaveTaskEndlessBeatBoss::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskEndlessBeatBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskEndlessBeatBoss::StaticClassInit() */

void DaveTaskEndlessBeatBoss::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskEndlessBeatBoss");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06b34,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskEndlessBeatBoss::StaticGetClass() */

long * DaveTaskEndlessBeatBoss::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskEndlessBeatBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskEndlessBeatBoss::DaveTaskEndlessBeatBoss() */

void __thiscall DaveTaskEndlessBeatBoss::DaveTaskEndlessBeatBoss(DaveTaskEndlessBeatBoss *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa4f0;
  return;
}


/* DaveTaskEndlessBeatBoss::StaticNew() */

DaveTaskEndlessBeatBoss * DaveTaskEndlessBeatBoss::StaticNew(void)

{
  DaveTaskEndlessBeatBoss *this;
  
  this = ::operator_new(0x40);
  DaveTaskEndlessBeatBoss(this);
  return this;
}


/* DaveTaskEndlessBeatBoss::~DaveTaskEndlessBeatBoss() */

void __thiscall DaveTaskEndlessBeatBoss::~DaveTaskEndlessBeatBoss(DaveTaskEndlessBeatBoss *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa4f0;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskEndlessBeatBoss::~DaveTaskEndlessBeatBoss() */

void __thiscall DaveTaskEndlessBeatBoss::~DaveTaskEndlessBeatBoss(DaveTaskEndlessBeatBoss *this)

{
  ~DaveTaskEndlessBeatBoss(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskEndlessBeatBoss::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
DaveTaskEndlessBeatBoss::onLevelEnded(DaveTaskEndlessBeatBoss *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  char cVar2;
  PlantCthulhuActinia *this_00;
  long lVar3;
  
  if ((param_1[0x20] != (LevelDefinitionForTask)0x0) &&
     (*(int *)(param_1 + 8) == (*(int *)(param_1 + 8) / 5) * 5)) {
    this_00 = (PlantCthulhuActinia *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
    cVar2 = PlantCthulhuActinia::GetEyeballStatus(this_00);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x14);
      *(undefined4 *)(this + 0x18) = 1;
      *(int *)(this + 0x14) = iVar1 + 1;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      if (*(int *)(lVar3 + 0x40) <= iVar1 + 1) {
        *(undefined4 *)(this + 0x18) = 2;
        (**(code **)(*(long *)this + 0x88))(this);
      }
      (**(code **)(*(long *)this + 0x50))(this);
    }
  }
  return;
}


/* DaveTaskEndlessBeatBoss::AddListener() */

void __thiscall DaveTaskEndlessBeatBoss::AddListener(DaveTaskEndlessBeatBoss *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskEndlessBeatBoss,void(DaveTaskEndlessBeatBoss::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskEndlessBeatBoss)0x1;
  return;
}

