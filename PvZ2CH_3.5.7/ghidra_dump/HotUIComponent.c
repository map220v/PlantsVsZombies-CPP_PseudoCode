// Class: HotUIComponent


/* HotUIComponent::onInitializeComponent() */

void HotUIComponent::onInitializeComponent(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIComponent::StaticClassInit() */

void HotUIComponent::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIComponent");
    (*pcVar2)(plVar1,asStack_10,FUN_03624338,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIComponent::StaticGetClass() */

long * HotUIComponent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIComponent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIComponent::InitializeComponent(Sexy::RtWeakPtr<HotUIComponent>,
   Sexy::RtWeakPtr<HotUIComponentProperties>) */

void __thiscall
HotUIComponent::InitializeComponent(HotUIComponent *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_3);
  if (*(code **)(*(long *)this + 0x50) != onInitializeComponent) {
    (**(code **)(*(long *)this + 0x50))(this);
  }
  return;
}


/* HotUIComponent::HotUIComponent() */

void __thiscall HotUIComponent::HotUIComponent(HotUIComponent *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetComponentClass_0666be30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* HotUIComponent::StaticNew() */

HotUIComponent * HotUIComponent::StaticNew(void)

{
  HotUIComponent *this;
  
  this = ::operator_new(0x30);
  HotUIComponent(this);
  return this;
}


/* HotUIComponent::~HotUIComponent() */

void __thiscall HotUIComponent::~HotUIComponent(HotUIComponent *this)

{
  *(undefined ***)this = &PTR_GetComponentClass_0666be30;
  std::vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>>::~vector
            ((vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>> *)
             (this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* HotUIComponent::~HotUIComponent() */

void __thiscall HotUIComponent::~HotUIComponent(HotUIComponent *this)

{
  ~HotUIComponent(this);
  AK::FreeHook(this);
  return;
}


/* HotUIComponent::AddTarget(Sexy::RtWeakPtr<HotUIWidget>) */

void __thiscall HotUIComponent::AddTarget(HotUIComponent *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>>::push_back
            ((vector<Sexy::RtWeakPtr<HotUIWidget>,std::allocator<Sexy::RtWeakPtr<HotUIWidget>>> *)
             (this + 0x18),param_2);
  return;
}


/* HotUIPropertyAnimatorProperties const*
   HotUIComponent::getProps<HotUIPropertyAnimatorProperties>() const */

HotUIPropertyAnimatorProperties * __thiscall
HotUIComponent::getProps<HotUIPropertyAnimatorProperties>(HotUIComponent *this)

{
  HotUIPropertyAnimatorProperties *extraout_x0;
  
  BoardArtifactManager::GetBoardArtifact((BoardArtifactManager *)this);
  nop();
  return extraout_x0;
}

