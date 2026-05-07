// Class: DaveTaskPVZ1


/* DaveTaskPVZ1::GetClass() const */

long * DaveTaskPVZ1::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPVZ1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPVZ1::StaticClassInit() */

void DaveTaskPVZ1::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPVZ1");
    (*pcVar2)(plVar1,asStack_10,FUN_03a05484,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPVZ1::StaticGetClass() */

long * DaveTaskPVZ1::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPVZ1",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPVZ1::DaveTaskPVZ1() */

void __thiscall DaveTaskPVZ1::DaveTaskPVZ1(DaveTaskPVZ1 *this)

{
  DaveTask::DaveTask((DaveTask *)this);
  *(undefined ***)this = &PTR_GetClass_066f9e10;
  return;
}


/* DaveTaskPVZ1::StaticNew() */

DaveTaskPVZ1 * DaveTaskPVZ1::StaticNew(void)

{
  DaveTaskPVZ1 *this;
  
  this = ::operator_new(0x40);
  DaveTaskPVZ1(this);
  return this;
}


/* DaveTaskPVZ1::~DaveTaskPVZ1() */

void __thiscall DaveTaskPVZ1::~DaveTaskPVZ1(DaveTaskPVZ1 *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9e10;
  DaveTaskPlantfoodOnPennyLevel::RemoveListener((DaveTaskPlantfoodOnPennyLevel *)this);
  DaveTask::~DaveTask((DaveTask *)this);
  return;
}


/* DaveTaskPVZ1::~DaveTaskPVZ1() */

void __thiscall DaveTaskPVZ1::~DaveTaskPVZ1(DaveTaskPVZ1 *this)

{
  ~DaveTaskPVZ1(this);
  AK::FreeHook(this);
  return;
}


/* DaveTaskPVZ1::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall DaveTaskPVZ1::onLevelEnded(DaveTaskPVZ1 *this,LevelDefinitionForTask *param_1)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  DaveTaskPVZ1Data *pDVar3;
  long lVar4;
  
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar2 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pDVar3 = Sexy::RtObject::Cast<DaveTaskPVZ1Data>(this_00);
    if ((pDVar3[0x50] == (DaveTaskPVZ1Data)0x0) || (param_1[0x21] != (LevelDefinitionForTask)0x0)) {
      iVar1 = *(int *)(this + 0x14);
      *(undefined4 *)(this + 0x18) = 1;
      *(int *)(this + 0x14) = iVar1 + 1;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      if (*(int *)(lVar4 + 0x40) <= iVar1 + 1) {
        *(undefined4 *)(this + 0x18) = 2;
        (**(code **)(*(long *)this + 0x88))(this);
      }
      (**(code **)(*(long *)this + 0x50))(this);
      return;
    }
  }
  return;
}


/* DaveTaskPVZ1::AddListener() */

void __thiscall DaveTaskPVZ1::AddListener(DaveTaskPVZ1 *this)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<DaveTaskPVZ1,void(DaveTaskPVZ1::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[0x38] = (DaveTaskPVZ1)0x1;
  return;
}

