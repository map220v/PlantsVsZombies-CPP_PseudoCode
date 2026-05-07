// Class: DaveTaskBeatBoss


/* DaveTaskBeatBoss::GetClass() const */

long * DaveTaskBeatBoss::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBeatBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskBeatBoss::StaticClassInit() */

void DaveTaskBeatBoss::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskBeatBoss");
    (*pcVar2)(plVar1,asStack_10,FUN_03a062f4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskBeatBoss::StaticGetClass() */

long * DaveTaskBeatBoss::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBeatBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskBeatBoss::DaveTaskBeatBoss() */

void __thiscall DaveTaskBeatBoss::DaveTaskBeatBoss(DaveTaskBeatBoss *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa270;
  return;
}


/* DaveTaskBeatBoss::StaticNew() */

DaveTaskBeatBoss * DaveTaskBeatBoss::StaticNew(void)

{
  DaveTaskBeatBoss *this;
  
  this = ::operator_new(0x40);
  DaveTaskBeatBoss(this);
  return this;
}


/* DaveTaskBeatBoss::~DaveTaskBeatBoss() */

void __thiscall DaveTaskBeatBoss::~DaveTaskBeatBoss(DaveTaskBeatBoss *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa270;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskBeatBoss::~DaveTaskBeatBoss() */

void __thiscall DaveTaskBeatBoss::~DaveTaskBeatBoss(DaveTaskBeatBoss *this)

{
  ~DaveTaskBeatBoss(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskBeatBoss::onZombieDied(Zombie*, DamageInfo const*) */

void DaveTaskBeatBoss::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  if ((param_2 != (DamageInfo *)0x0) && (cVar2 = Zombie::IsBoss((Zombie *)param_2), cVar2 != '\0'))
  {
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
  }
  return;
}


/* DaveTaskBeatBoss::AddListener() */

void __thiscall DaveTaskBeatBoss::AddListener(DaveTaskBeatBoss *this)

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
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<DaveTaskBeatBoss,void(DaveTaskBeatBoss::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  this[0x38] = (DaveTaskBeatBoss)0x1;
  return;
}

