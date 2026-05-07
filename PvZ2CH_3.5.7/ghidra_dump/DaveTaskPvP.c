// Class: DaveTaskPvP


/* DaveTaskPvP::GetClass() const */

long * DaveTaskPvP::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPvP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPvP::StaticClassInit() */

void DaveTaskPvP::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPvP");
    (*pcVar2)(plVar1,asStack_10,FUN_03a05274,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPvP::StaticGetClass() */

long * DaveTaskPvP::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPvP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPvP::DaveTaskPvP() */

void __thiscall DaveTaskPvP::DaveTaskPvP(DaveTaskPvP *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f9d70;
  return;
}


/* DaveTaskPvP::StaticNew() */

DaveTaskPvP * DaveTaskPvP::StaticNew(void)

{
  DaveTaskPvP *this;
  
  this = ::operator_new(0x40);
  DaveTaskPvP(this);
  return this;
}


/* DaveTaskPvP::~DaveTaskPvP() */

void __thiscall DaveTaskPvP::~DaveTaskPvP(DaveTaskPvP *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9d70;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPvP::~DaveTaskPvP() */

void __thiscall DaveTaskPvP::~DaveTaskPvP(DaveTaskPvP *this)

{
  ~DaveTaskPvP(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPvP::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall DaveTaskPvP::onLevelEnded(DaveTaskPvP *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  RtObject *this_00;
  DaveTaskPvPData *pDVar2;
  long lVar3;
  
  if (param_1[0xf] != (LevelDefinitionForTask)0x0) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pDVar2 = Sexy::RtObject::Cast<DaveTaskPvPData>(this_00);
    if ((pDVar2[0x50] == (DaveTaskPvPData)0x0) || (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
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


/* DaveTaskPvP::AddListener() */

void __thiscall DaveTaskPvP::AddListener(DaveTaskPvP *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskPvP,void(DaveTaskPvP::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskPvP)0x1;
  return;
}

