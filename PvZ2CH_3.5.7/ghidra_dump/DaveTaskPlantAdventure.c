// Class: DaveTaskPlantAdventure


/* DaveTaskPlantAdventure::GetClass() const */

long * DaveTaskPlantAdventure::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPlantAdventure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPlantAdventure::StaticClassInit() */

void DaveTaskPlantAdventure::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPlantAdventure");
    (*pcVar2)(plVar1,asStack_10,FUN_03a05ab4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPlantAdventure::StaticGetClass() */

long * DaveTaskPlantAdventure::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPlantAdventure",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPlantAdventure::DaveTaskPlantAdventure() */

void __thiscall DaveTaskPlantAdventure::DaveTaskPlantAdventure(DaveTaskPlantAdventure *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f9ff0;
  return;
}


/* DaveTaskPlantAdventure::StaticNew() */

DaveTaskPlantAdventure * DaveTaskPlantAdventure::StaticNew(void)

{
  DaveTaskPlantAdventure *this;
  
  this = ::operator_new(0x40);
  DaveTaskPlantAdventure(this);
  return this;
}


/* DaveTaskPlantAdventure::~DaveTaskPlantAdventure() */

void __thiscall DaveTaskPlantAdventure::~DaveTaskPlantAdventure(DaveTaskPlantAdventure *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9ff0;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPlantAdventure::~DaveTaskPlantAdventure() */

void __thiscall DaveTaskPlantAdventure::~DaveTaskPlantAdventure(DaveTaskPlantAdventure *this)

{
  ~DaveTaskPlantAdventure(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPlantAdventure::onPlantAdventureFinish(int) */

void DaveTaskPlantAdventure::onPlantAdventureFinish(int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  *(undefined4 *)(plVar2 + 3) = 1;
  iVar1 = *(int *)((long)plVar2 + 0x14) + 1;
  *(int *)((long)plVar2 + 0x14) = iVar1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(plVar2 + 6));
  if (*(int *)(lVar3 + 0x40) <= iVar1) {
    *(undefined4 *)(plVar2 + 3) = 2;
    (**(code **)(*plVar2 + 0x88))(plVar2);
  }
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}


/* DaveTaskPlantAdventure::AddListener() */

void __thiscall DaveTaskPlantAdventure::AddListener(DaveTaskPlantAdventure *this)

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
            ((ReceivedDataCallback *)this,onPlantAdventureFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DaveTaskPlantAdventure,void(DaveTaskPlantAdventure::*)(int)>>
            ((MessageRouter *)puVar1,Message::FinishPlantAdventure,&local_40);
  this[0x38] = (DaveTaskPlantAdventure)0x1;
  return;
}

