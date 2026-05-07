// Class: DaveTaskPassEasyLevel


/* DaveTaskPassEasyLevel::GetClass() const */

long * DaveTaskPassEasyLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassEasyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassEasyLevel::StaticClassInit() */

void DaveTaskPassEasyLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassEasyLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03a05ed4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassEasyLevel::StaticGetClass() */

long * DaveTaskPassEasyLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassEasyLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassEasyLevel::DaveTaskPassEasyLevel() */

void __thiscall DaveTaskPassEasyLevel::DaveTaskPassEasyLevel(DaveTaskPassEasyLevel *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa130;
  return;
}


/* DaveTaskPassEasyLevel::StaticNew() */

DaveTaskPassEasyLevel * DaveTaskPassEasyLevel::StaticNew(void)

{
  DaveTaskPassEasyLevel *this;
  
  this = ::operator_new(0x40);
  DaveTaskPassEasyLevel(this);
  return this;
}


/* DaveTaskPassEasyLevel::~DaveTaskPassEasyLevel() */

void __thiscall DaveTaskPassEasyLevel::~DaveTaskPassEasyLevel(DaveTaskPassEasyLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa130;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPassEasyLevel::~DaveTaskPassEasyLevel() */

void __thiscall DaveTaskPassEasyLevel::~DaveTaskPassEasyLevel(DaveTaskPassEasyLevel *this)

{
  ~DaveTaskPassEasyLevel(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPassEasyLevel::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
DaveTaskPassEasyLevel::onLevelEnded(DaveTaskPassEasyLevel *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  RtObject *this_00;
  DaveTaskPassEasyLevelData *pDVar2;
  long lVar3;
  
  if ((param_1[0x22] != (LevelDefinitionForTask)0x0) &&
     (param_1[0xc] == (LevelDefinitionForTask)0x0)) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pDVar2 = Sexy::RtObject::Cast<DaveTaskPassEasyLevelData>(this_00);
    if ((pDVar2[0x50] == (DaveTaskPassEasyLevelData)0x0) ||
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


/* DaveTaskPassEasyLevel::AddListener() */

void __thiscall DaveTaskPassEasyLevel::AddListener(DaveTaskPassEasyLevel *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskPassEasyLevel,void(DaveTaskPassEasyLevel::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskPassEasyLevel)0x1;
  return;
}

