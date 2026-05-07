// Class: VaseBreakerFlowAction


/* VaseBreakerFlowAction::onUpdate() */

void VaseBreakerFlowAction::onUpdate(void)

{
  return;
}


/* non-virtual thunk to VaseBreakerFlowAction::onUpdate() */

void __thiscall VaseBreakerFlowAction::onUpdate(VaseBreakerFlowAction *this)

{
  onUpdate();
  return;
}


/* VaseBreakerFlowAction::onEnd() */

void VaseBreakerFlowAction::onEnd(void)

{
  return;
}


/* non-virtual thunk to VaseBreakerFlowAction::onEnd() */

void __thiscall VaseBreakerFlowAction::onEnd(VaseBreakerFlowAction *this)

{
  onEnd();
  return;
}


/* VaseBreakerFlowAction::onAddToRenderQueue(RenderQueue*) */

void VaseBreakerFlowAction::onAddToRenderQueue(RenderQueue *param_1)

{
  return;
}


/* VaseBreakerFlowAction::VaseBreakerFlowAction() */

void __thiscall VaseBreakerFlowAction::VaseBreakerFlowAction(VaseBreakerFlowAction *this)

{
  GameObject::GameObject((GameObject *)this);
  RunnableAction::RunnableAction((RunnableAction *)(this + 0x10));
  *(undefined ***)this = &PTR_GetClass_06918250;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowAction_069182f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* VaseBreakerFlowAction::~VaseBreakerFlowAction() */

void __thiscall VaseBreakerFlowAction::~VaseBreakerFlowAction(VaseBreakerFlowAction *this)

{
  *(undefined ***)this = &PTR_GetClass_06918250;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowAction_069182f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowAction::~VaseBreakerFlowAction() */

void __thiscall VaseBreakerFlowAction::~VaseBreakerFlowAction(VaseBreakerFlowAction *this)

{
  ~VaseBreakerFlowAction(this + -0x10);
  return;
}


/* VaseBreakerFlowAction::~VaseBreakerFlowAction() */

void __thiscall VaseBreakerFlowAction::~VaseBreakerFlowAction(VaseBreakerFlowAction *this)

{
  ~VaseBreakerFlowAction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VaseBreakerFlowAction::~VaseBreakerFlowAction() */

void __thiscall VaseBreakerFlowAction::~VaseBreakerFlowAction(VaseBreakerFlowAction *this)

{
  ~VaseBreakerFlowAction(this + -0x10);
  return;
}


/* VaseBreakerFlowAction::onBegin() */

void VaseBreakerFlowAction::onBegin(void)

{
  return;
}


/* non-virtual thunk to VaseBreakerFlowAction::onBegin() */

void __thiscall VaseBreakerFlowAction::onBegin(VaseBreakerFlowAction *this)

{
  onBegin();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowAction::StaticClassInit() */

void VaseBreakerFlowAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowAction");
    (*pcVar2)(plVar1,asStack_10,FUN_0497d50c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowAction::StaticGetClass() */

long * VaseBreakerFlowAction::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowAction::GetClass() const */

long * VaseBreakerFlowAction::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowAction::AddToRenderQueue(RenderQueue*) */

void VaseBreakerFlowAction::AddToRenderQueue(RenderQueue *param_1)

{
  if (*(code **)(*(long *)param_1 + 0x90) != onAddToRenderQueue) {
    (**(code **)(*(long *)param_1 + 0x90))();
  }
  return;
}


/* VaseBreakerFlowAction::StaticNew() */

VaseBreakerFlowAction * VaseBreakerFlowAction::StaticNew(void)

{
  VaseBreakerFlowAction *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowAction::SetOwningModules(VaseBreakerFlowModule*, VaseBreakerModule*) */

void VaseBreakerFlowAction::SetOwningModules
               (VaseBreakerFlowModule *param_1,VaseBreakerModule *param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x20),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x28),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowAction::getFlow() const */

void __thiscall VaseBreakerFlowAction::getFlow(VaseBreakerFlowAction *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x20));
  return;
}


/* VaseBreakerFlowAction::getVaseBreaker() const */

void __thiscall VaseBreakerFlowAction::getVaseBreaker(VaseBreakerFlowAction *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
  return;
}

