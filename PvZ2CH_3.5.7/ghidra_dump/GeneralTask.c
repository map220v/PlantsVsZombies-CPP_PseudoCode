// Class: GeneralTask


/* GeneralTask::StaticNew() */

undefined8 GeneralTask::StaticNew(void)

{
  return 0;
}


/* GeneralTask::FinishTask() */

void __thiscall GeneralTask::FinishTask(GeneralTask *this)

{
  (**(code **)(*(long *)this + 0x50))(this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTask::StaticClassInit() */

void GeneralTask::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTask");
    (*pcVar2)(plVar1,asStack_10,FUN_03a9e97c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTask::StaticGetClass() */

long * GeneralTask::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTask::GetClass() const */

long * GeneralTask::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTask",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTask::SetState(int) */

void __thiscall GeneralTask::SetState(GeneralTask *this,int param_1)

{
  long lVar1;
  
  *(int *)(this + 0x14) = param_1;
  if (param_1 - 2U < 2) {
    if (*(GeneralTaskListener **)(this + 0x28) != (GeneralTaskListener *)0x0) {
      GeneralTaskListener::RemoveListener(*(GeneralTaskListener **)(this + 0x28));
    }
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20))
    ;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(lVar1 + 0x28);
  }
  (**(code **)(*(long *)this + 0x60))(this);
  return;
}


/* GeneralTask::GeneralTask() */

void __thiscall GeneralTask::GeneralTask(GeneralTask *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0670d770;
  *(undefined4 *)(this + 0x10) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* GeneralTask::~GeneralTask() */

void __thiscall GeneralTask::~GeneralTask(GeneralTask *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d770;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x18))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  nop();
  return;
}


/* GeneralTask::~GeneralTask() */

void __thiscall GeneralTask::~GeneralTask(GeneralTask *this)

{
  ~GeneralTask(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTask::Init(Sexy::RtWeakPtr<GeneralTaskData>) */

char __thiscall GeneralTask::Init(GeneralTask *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x0;
  undefined8 uVar4;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x20);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 8) = *(undefined4 *)(lVar2 + 8);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(lVar2 + 0xc);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"Error, TaskConfig class not found, Check your task config");
    return '\0';
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  lVar2 = (**(code **)(*plVar3 + 0x50))();
  if (lVar2 == 0) {
    cVar1 = '\0';
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_0547429c(lVar2 + 0x40);
    Sexy::OutputDebugStrF((wchar_t *)"Error, TaskListener class not found, class name is: %s",uVar4)
    ;
  }
  else {
    FUN_03a79bfc(*(undefined8 *)(lVar2 + 0x18));
    nop();
    *(undefined8 *)(this + 0x28) = extraout_x0;
    (**(code **)(*(long *)this + 0x58))(this);
    if (*(uint *)(this + 0x14) < 2) {
      (**(code **)(**(long **)(this + 0x28) + 0x48))(*(long **)(this + 0x28),this);
      return cVar1;
    }
  }
  return cVar1;
}

