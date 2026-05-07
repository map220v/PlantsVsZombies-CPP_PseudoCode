// Class: DaveTaskEndless


/* DaveTaskEndless::GetClass() const */

long * DaveTaskEndless::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskEndless",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskEndless::StaticClassInit() */

void DaveTaskEndless::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskEndless");
    (*pcVar2)(plVar1,asStack_10,FUN_03a05cc4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskEndless::StaticGetClass() */

long * DaveTaskEndless::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskEndless",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskEndless::DaveTaskEndless() */

void __thiscall DaveTaskEndless::DaveTaskEndless(DaveTaskEndless *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa090;
  return;
}


/* DaveTaskEndless::StaticNew() */

DaveTaskEndless * DaveTaskEndless::StaticNew(void)

{
  DaveTaskEndless *this;
  
  this = ::operator_new(0x40);
  DaveTaskEndless(this);
  return this;
}


/* DaveTaskEndless::~DaveTaskEndless() */

void __thiscall DaveTaskEndless::~DaveTaskEndless(DaveTaskEndless *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa090;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskEndless::~DaveTaskEndless() */

void __thiscall DaveTaskEndless::~DaveTaskEndless(DaveTaskEndless *this)

{
  ~DaveTaskEndless(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskEndless::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall DaveTaskEndless::onLevelEnded(DaveTaskEndless *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  DaveTaskEndlessData *pDVar3;
  long lVar4;
  PlantCthulhuActinia *this_01;
  
  if (param_1[0x20] == (LevelDefinitionForTask)0x0) {
    return;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  pDVar3 = Sexy::RtObject::Cast<DaveTaskEndlessData>(this_00);
  if (pDVar3[0x50] != (DaveTaskEndlessData)0x0) {
    this_01 = (PlantCthulhuActinia *)Sexy::LazySingleton<DaveTaskManager>::GetInstancePtr();
    cVar2 = PlantCthulhuActinia::GetEyeballStatus(this_01);
    if (cVar2 == '\0') {
      return;
    }
  }
  iVar1 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x18) = 1;
  *(int *)(this + 0x14) = iVar1 + 1;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  if (*(int *)(lVar4 + 0x40) <= iVar1 + 1) {
    *(undefined4 *)(this + 0x18) = 2;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* DaveTaskEndless::AddListener() */

void __thiscall DaveTaskEndless::AddListener(DaveTaskEndless *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskEndless,void(DaveTaskEndless::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskEndless)0x1;
  return;
}

