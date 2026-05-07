// Class: PassLevelPVZ1Listener


/* PassLevelPVZ1Listener::onPvZ1FinishLevel(int, bool) */

void PassLevelPVZ1Listener::onPvZ1FinishLevel(int param_1,bool param_2)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))((long *)(ulong)(uint)param_1,1);
  return;
}


/* PassLevelPVZ1Listener::~PassLevelPVZ1Listener() */

void __thiscall PassLevelPVZ1Listener::~PassLevelPVZ1Listener(PassLevelPVZ1Listener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670eaf0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* PassLevelPVZ1Listener::~PassLevelPVZ1Listener() */

void __thiscall PassLevelPVZ1Listener::~PassLevelPVZ1Listener(PassLevelPVZ1Listener *this)

{
  ~PassLevelPVZ1Listener(this);
  AK::FreeHook(this);
  return;
}


/* PassLevelPVZ1Listener::PassLevelPVZ1Listener() */

void __thiscall PassLevelPVZ1Listener::PassLevelPVZ1Listener(PassLevelPVZ1Listener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670eaf0;
  return;
}


/* PassLevelPVZ1Listener::StaticNew() */

PassLevelPVZ1Listener * PassLevelPVZ1Listener::StaticNew(void)

{
  PassLevelPVZ1Listener *this;
  
  this = ::operator_new(0x18);
  PassLevelPVZ1Listener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassLevelPVZ1Listener::StaticClassInit() */

void PassLevelPVZ1Listener::StaticClassInit(void)

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
    std::string::string(asStack_10,"PassLevelPVZ1Listener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a84e24,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassLevelPVZ1Listener::StaticGetClass() */

long * PassLevelPVZ1Listener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PassLevelPVZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassLevelPVZ1Listener::GetClass() const */

long * PassLevelPVZ1Listener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"PassLevelPVZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassLevelPVZ1Listener::RegisterListener(GeneralTask*) */

void __thiscall
PassLevelPVZ1Listener::RegisterListener(PassLevelPVZ1Listener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPvZ1FinishLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<PassLevelPVZ1Listener,void(PassLevelPVZ1Listener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (PassLevelPVZ1Listener)0x1;
  return;
}

