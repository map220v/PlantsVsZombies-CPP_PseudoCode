// Class: InvitationGradeTask


/* InvitationGradeTask::LoadTask() */

void __thiscall InvitationGradeTask::LoadTask(InvitationGradeTask *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationGradeTask::StaticClassInit() */

void InvitationGradeTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"InvitationGradeTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8100c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationGradeTask::StaticGetClass() */

long * InvitationGradeTask::StaticGetClass(void)

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
  uVar2 = GeneralTask::StaticGetClass();
  (*pcVar3)(plVar1,"InvitationGradeTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationGradeTask::GetClass() const */

long * InvitationGradeTask::GetClass(void)

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
  uVar2 = GeneralTask::StaticGetClass();
  (*pcVar3)(plVar1,"InvitationGradeTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationGradeTask::InvitationGradeTask() */

void __thiscall InvitationGradeTask::InvitationGradeTask(InvitationGradeTask *this)

{
  GeneralTask::GeneralTask((GeneralTask *)this);
  *(undefined ***)this = &PTR_GetClass_0670dda0;
  return;
}


/* InvitationGradeTask::StaticNew() */

InvitationGradeTask * InvitationGradeTask::StaticNew(void)

{
  InvitationGradeTask *this;
  
  this = ::operator_new(0x30);
  InvitationGradeTask(this);
  return this;
}


/* InvitationGradeTask::~InvitationGradeTask() */

void __thiscall InvitationGradeTask::~InvitationGradeTask(InvitationGradeTask *this)

{
  *(undefined ***)this = &PTR_GetClass_0670dda0;
  GeneralTask::~GeneralTask((GeneralTask *)this);
  return;
}


/* InvitationGradeTask::~InvitationGradeTask() */

void __thiscall InvitationGradeTask::~InvitationGradeTask(InvitationGradeTask *this)

{
  ~InvitationGradeTask(this);
  AK::FreeHook(this);
  return;
}

