// Class: DaveTaskFinishPennyLevelBoss


/* DaveTaskFinishPennyLevelBoss::GetClass() const */

long * DaveTaskFinishPennyLevelBoss::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskFinishPennyLevelBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskFinishPennyLevelBoss::StaticClassInit() */

void DaveTaskFinishPennyLevelBoss::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskFinishPennyLevelBoss");
    (*pcVar2)(plVar1,asStack_10,FUN_03a079a4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskFinishPennyLevelBoss::StaticGetClass() */

long * DaveTaskFinishPennyLevelBoss::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskFinishPennyLevelBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskFinishPennyLevelBoss::DaveTaskFinishPennyLevelBoss() */

void __thiscall
DaveTaskFinishPennyLevelBoss::DaveTaskFinishPennyLevelBoss(DaveTaskFinishPennyLevelBoss *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa950;
  return;
}


/* DaveTaskFinishPennyLevelBoss::StaticNew() */

DaveTaskFinishPennyLevelBoss * DaveTaskFinishPennyLevelBoss::StaticNew(void)

{
  DaveTaskFinishPennyLevelBoss *this;
  
  this = ::operator_new(0x40);
  DaveTaskFinishPennyLevelBoss(this);
  return this;
}


/* DaveTaskFinishPennyLevelBoss::~DaveTaskFinishPennyLevelBoss() */

void __thiscall
DaveTaskFinishPennyLevelBoss::~DaveTaskFinishPennyLevelBoss(DaveTaskFinishPennyLevelBoss *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa950;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskFinishPennyLevelBoss::~DaveTaskFinishPennyLevelBoss() */

void __thiscall
DaveTaskFinishPennyLevelBoss::~DaveTaskFinishPennyLevelBoss(DaveTaskFinishPennyLevelBoss *this)

{
  ~DaveTaskFinishPennyLevelBoss(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskFinishPennyLevelBoss::onSettlePennyLevel() */

void __thiscall DaveTaskFinishPennyLevelBoss::onSettlePennyLevel(DaveTaskFinishPennyLevelBoss *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = RiftUtils::IsPlayingZombossLevel();
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x18) = 1;
  *(int *)(this + 0x14) = iVar1 + 1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  if (*(int *)(lVar3 + 0x40) <= iVar1 + 1) {
    *(undefined4 *)(this + 0x18) = 2;
    (**(code **)(*(long *)this + 0x88))(this);
  }
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskFinishPennyLevelBoss::AddListener() */

void __thiscall DaveTaskFinishPennyLevelBoss::AddListener(DaveTaskFinishPennyLevelBoss *this)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSettlePennyLevel);
  Sexy::Delegate0::Delegate0<DaveTaskFinishPennyLevelBoss,void(DaveTaskFinishPennyLevelBoss::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::SettlePennyLevel,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[0x38] = (DaveTaskFinishPennyLevelBoss)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

