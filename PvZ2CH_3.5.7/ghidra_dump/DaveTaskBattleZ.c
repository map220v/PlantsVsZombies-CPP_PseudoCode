// Class: DaveTaskBattleZ


/* DaveTaskBattleZ::GetClass() const */

long * DaveTaskBattleZ::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBattleZ",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskBattleZ::StaticClassInit() */

void DaveTaskBattleZ::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskBattleZ");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06504,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskBattleZ::StaticGetClass() */

long * DaveTaskBattleZ::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBattleZ",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskBattleZ::DaveTaskBattleZ() */

void __thiscall DaveTaskBattleZ::DaveTaskBattleZ(DaveTaskBattleZ *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa310;
  return;
}


/* DaveTaskBattleZ::StaticNew() */

DaveTaskBattleZ * DaveTaskBattleZ::StaticNew(void)

{
  DaveTaskBattleZ *this;
  
  this = ::operator_new(0x40);
  DaveTaskBattleZ(this);
  return this;
}


/* DaveTaskBattleZ::~DaveTaskBattleZ() */

void __thiscall DaveTaskBattleZ::~DaveTaskBattleZ(DaveTaskBattleZ *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa310;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskBattleZ::~DaveTaskBattleZ() */

void __thiscall DaveTaskBattleZ::~DaveTaskBattleZ(DaveTaskBattleZ *this)

{
  ~DaveTaskBattleZ(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskBattleZ::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall DaveTaskBattleZ::onLevelEnded(DaveTaskBattleZ *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  RtObject *this_00;
  DaveTaskBattleZData *pDVar2;
  long lVar3;
  
  if (param_1[0xe] != (LevelDefinitionForTask)0x0) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pDVar2 = Sexy::RtObject::Cast<DaveTaskBattleZData>(this_00);
    if ((pDVar2[0x50] == (DaveTaskBattleZData)0x0) || (param_1[0x21] != (LevelDefinitionForTask)0x0)
       ) {
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
      return;
    }
  }
  return;
}


/* DaveTaskBattleZ::AddListener() */

void __thiscall DaveTaskBattleZ::AddListener(DaveTaskBattleZ *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskBattleZ,void(DaveTaskBattleZ::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskBattleZ)0x1;
  return;
}

