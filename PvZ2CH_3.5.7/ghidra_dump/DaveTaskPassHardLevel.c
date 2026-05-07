// Class: DaveTaskPassHardLevel


/* DaveTaskPassHardLevel::GetClass() const */

long * DaveTaskPassHardLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassHardLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassHardLevel::StaticClassInit() */

void DaveTaskPassHardLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassHardLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a060e4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassHardLevel::StaticGetClass() */

long * DaveTaskPassHardLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassHardLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassHardLevel::DaveTaskPassHardLevel() */

void __thiscall DaveTaskPassHardLevel::DaveTaskPassHardLevel(DaveTaskPassHardLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa1d0;
  return;
}


/* DaveTaskPassHardLevel::StaticNew() */

DaveTaskPassHardLevel * DaveTaskPassHardLevel::StaticNew(void)

{
  DaveTaskPassHardLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskPassHardLevel(this);
  return this;
}


/* DaveTaskPassHardLevel::~DaveTaskPassHardLevel() */

void __thiscall DaveTaskPassHardLevel::~DaveTaskPassHardLevel(DaveTaskPassHardLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa1d0;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPassHardLevel::~DaveTaskPassHardLevel() */

void __thiscall DaveTaskPassHardLevel::~DaveTaskPassHardLevel(DaveTaskPassHardLevel *this)

{
  ~DaveTaskPassHardLevel(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPassHardLevel::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
DaveTaskPassHardLevel::onLevelEnded(DaveTaskPassHardLevel *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  RtObject *this_00;
  DaveTaskPassHardLevelData *pDVar2;
  long lVar3;
  
  if ((param_1[0x22] != (LevelDefinitionForTask)0x0) &&
     (param_1[0xc] != (LevelDefinitionForTask)0x0)) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pDVar2 = Sexy::RtObject::Cast<DaveTaskPassHardLevelData>(this_00);
    if ((pDVar2[0x50] == (DaveTaskPassHardLevelData)0x0) ||
       (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
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


/* DaveTaskPassHardLevel::AddListener() */

void __thiscall DaveTaskPassHardLevel::AddListener(DaveTaskPassHardLevel *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskPassHardLevel,void(DaveTaskPassHardLevel::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskPassHardLevel)0x1;
  return;
}

