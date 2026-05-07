// Class: ComponentBase


/* ComponentBase::registerForEvents() */

void ComponentBase::registerForEvents(void)

{
  return;
}


/* ComponentBase::unregisterForEvents() */

void ComponentBase::unregisterForEvents(void)

{
  return;
}


/* ComponentBase::Initialize() */

void __thiscall ComponentBase::Initialize(ComponentBase *this)

{
  if (this[0x28] != (ComponentBase)0x0) {
    return;
  }
  if (*(code **)(*(long *)this + 0x50) != registerForEvents) {
    (**(code **)(*(long *)this + 0x50))();
  }
  this[0x28] = (ComponentBase)0x1;
  return;
}


/* ComponentBase::Uninitialize() */

void __thiscall ComponentBase::Uninitialize(ComponentBase *this)

{
  if (this[0x28] == (ComponentBase)0x0) {
    return;
  }
  if (*(code **)(*(long *)this + 0x58) == unregisterForEvents) {
    this[0x28] = (ComponentBase)0x0;
  }
  else {
    (**(code **)(*(long *)this + 0x58))();
    this[0x28] = (ComponentBase)0x0;
  }
  return;
}


/* ComponentBase::Begin() */

void __thiscall ComponentBase::Begin(ComponentBase *this)

{
  Initialize(this);
  (**(code **)(*(long *)this + 0x78))(this);
  *(undefined4 *)(this + 0x18) = 1;
  return;
}


/* ComponentBase::End() */

void __thiscall ComponentBase::End(ComponentBase *this)

{
  (**(code **)(*(long *)this + 0x90))();
  Uninitialize(this);
  *(undefined4 *)(this + 0x18) = 2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentBase::StaticClassInit() */

void ComponentBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentBase");
    (*pcVar2)(plVar1,asStack_10,FUN_03b87350,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentBase::StaticGetClass() */

long * ComponentBase::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ComponentBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentBase::GetClass() const */

long * ComponentBase::GetClass(void)

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
  (*pcVar3)(plVar1,"ComponentBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentBase::SetOwner(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ComponentBase::SetOwner(ComponentBase *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),param_2);
  return;
}


/* ComponentBase::ComponentBase() */

void __thiscall ComponentBase::ComponentBase(ComponentBase *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06735610;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x28] = (ComponentBase)0x0;
  return;
}


/* ComponentBase::StaticNew() */

ComponentBase * ComponentBase::StaticNew(void)

{
  ComponentBase *this;
  
  this = ::operator_new(0x30);
  ComponentBase(this);
  return this;
}


/* ComponentBase::~ComponentBase() */

void __thiscall ComponentBase::~ComponentBase(ComponentBase *this)

{
  *(undefined ***)this = &PTR_GetClass_06735610;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* ComponentBase::~ComponentBase() */

void __thiscall ComponentBase::~ComponentBase(ComponentBase *this)

{
  ~ComponentBase(this);
  AK::FreeHook(this);
  return;
}

