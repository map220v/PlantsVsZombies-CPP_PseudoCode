// Class: DaveTaskExtinguishFire


/* DaveTaskExtinguishFire::GetClass() const */

long * DaveTaskExtinguishFire::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskExtinguishFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskExtinguishFire::StaticClassInit() */

void DaveTaskExtinguishFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskExtinguishFire");
    (*pcVar2)(plVar1,asStack_10,FUN_03a06d44,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskExtinguishFire::StaticGetClass() */

long * DaveTaskExtinguishFire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskExtinguishFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskExtinguishFire::DaveTaskExtinguishFire() */

void __thiscall DaveTaskExtinguishFire::DaveTaskExtinguishFire(DaveTaskExtinguishFire *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066fa590;
  return;
}


/* DaveTaskExtinguishFire::StaticNew() */

DaveTaskExtinguishFire * DaveTaskExtinguishFire::StaticNew(void)

{
  DaveTaskExtinguishFire *this;
  
  this = ::operator_new(0x40);
  DaveTaskExtinguishFire(this);
  return this;
}


/* DaveTaskExtinguishFire::~DaveTaskExtinguishFire() */

void __thiscall DaveTaskExtinguishFire::~DaveTaskExtinguishFire(DaveTaskExtinguishFire *this)

{
  *(undefined ***)this = &PTR_GetClass_066fa590;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskExtinguishFire::~DaveTaskExtinguishFire() */

void __thiscall DaveTaskExtinguishFire::~DaveTaskExtinguishFire(DaveTaskExtinguishFire *this)

{
  ~DaveTaskExtinguishFire(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskExtinguishFire::onExtinguishFire(Zombie*) */

void DaveTaskExtinguishFire::onExtinguishFire(Zombie *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
  if (*(int *)(lVar2 + 0x40) <= iVar1 + 1) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
  }
  (**(code **)(*(long *)param_1 + 0x50))(param_1);
  return;
}


/* DaveTaskExtinguishFire::AddListener() */

void __thiscall DaveTaskExtinguishFire::AddListener(DaveTaskExtinguishFire *this)

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
            ((ReceivedDataCallback *)this,onExtinguishFire);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<DaveTaskExtinguishFire,void(DaveTaskExtinguishFire::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ExplorerTorchExtinguished,&local_40);
  this[0x38] = (DaveTaskExtinguishFire)0x1;
  return;
}

