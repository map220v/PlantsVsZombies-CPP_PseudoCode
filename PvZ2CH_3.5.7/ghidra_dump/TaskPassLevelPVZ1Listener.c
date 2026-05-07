// Class: TaskPassLevelPVZ1Listener


/* TaskPassLevelPVZ1Listener::onPvZ1FinishLevel(int, bool) */

void __thiscall
TaskPassLevelPVZ1Listener::onPvZ1FinishLevel
          (TaskPassLevelPVZ1Listener *this,int param_1,bool param_2)

{
  if (param_2) {
    if (((param_1 - 8U & 0xfffffff7) == 0) || ((param_1 & 0xfffffff7U) == 4)) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  else if ((param_1 - 4U & 0xfffffffb) == 0) {
    (**(code **)(*(long *)this + 0x58))(this,1);
    return;
  }
  return;
}


/* TaskPassLevelPVZ1Listener::~TaskPassLevelPVZ1Listener() */

void __thiscall
TaskPassLevelPVZ1Listener::~TaskPassLevelPVZ1Listener(TaskPassLevelPVZ1Listener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670eb70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* TaskPassLevelPVZ1Listener::~TaskPassLevelPVZ1Listener() */

void __thiscall
TaskPassLevelPVZ1Listener::~TaskPassLevelPVZ1Listener(TaskPassLevelPVZ1Listener *this)

{
  ~TaskPassLevelPVZ1Listener(this);
  AK::FreeHook(this);
  return;
}


/* TaskPassLevelPVZ1Listener::TaskPassLevelPVZ1Listener() */

void __thiscall
TaskPassLevelPVZ1Listener::TaskPassLevelPVZ1Listener(TaskPassLevelPVZ1Listener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670eb70;
  return;
}


/* TaskPassLevelPVZ1Listener::StaticNew() */

TaskPassLevelPVZ1Listener * TaskPassLevelPVZ1Listener::StaticNew(void)

{
  TaskPassLevelPVZ1Listener *this;
  
  this = ::operator_new(0x18);
  TaskPassLevelPVZ1Listener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TaskPassLevelPVZ1Listener::StaticClassInit() */

void TaskPassLevelPVZ1Listener::StaticClassInit(void)

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
    std::string::string(asStack_10,"TaskPassLevelPVZ1Listener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a85094,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TaskPassLevelPVZ1Listener::StaticGetClass() */

long * TaskPassLevelPVZ1Listener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TaskPassLevelPVZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TaskPassLevelPVZ1Listener::GetClass() const */

long * TaskPassLevelPVZ1Listener::GetClass(void)

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
  (*pcVar3)(plVar1,"TaskPassLevelPVZ1Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TaskPassLevelPVZ1Listener::RegisterListener(GeneralTask*) */

void __thiscall
TaskPassLevelPVZ1Listener::RegisterListener(TaskPassLevelPVZ1Listener *this,GeneralTask *param_1)

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
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<TaskPassLevelPVZ1Listener,void(TaskPassLevelPVZ1Listener::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::PvZ1FinishLevel,&local_40);
  this[8] = (TaskPassLevelPVZ1Listener)0x1;
  return;
}

