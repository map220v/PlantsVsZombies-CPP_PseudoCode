// Class: WaveAction


/* WaveAction::WaveAction() */

void __thiscall WaveAction::WaveAction(WaveAction *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06910f10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* WaveAction::~WaveAction() */

void __thiscall WaveAction::~WaveAction(WaveAction *this)

{
  *(undefined ***)this = &PTR_GetClass_06910f10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* WaveAction::~WaveAction() */

void __thiscall WaveAction::~WaveAction(WaveAction *this)

{
  ~WaveAction(this);
  AK::FreeHook(this);
  return;
}


/* FairyTaleWindWaveActionProps const* WaveAction::GetProps<FairyTaleWindWaveActionProps>() const */

FairyTaleWindWaveActionProps * __thiscall
WaveAction::GetProps<FairyTaleWindWaveActionProps>(WaveAction *this)

{
  FairyTaleWindWaveActionProps *extraout_x0;
  
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  nop();
  return extraout_x0;
}


/* WaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void WaveAction::AddResourceRequirements(set *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveAction::StaticClassInit() */

void WaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_0492afb0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveAction::StaticGetClass() */

long * WaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveAction::GetClass() const */

long * WaveAction::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveAction::InitializeAction(Sexy::RtWeakPtr<WaveActionProperties>, Sexy::MTRand&, int) */

void __thiscall
WaveAction::InitializeAction
          (WaveAction *this,RtWeakPtr *param_2,undefined8 param_3,undefined4 param_4)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_2);
  (**(code **)(*(long *)this + 0x98))(this,param_3,param_4);
  return;
}


/* WaveAction::StaticNew() */

WaveAction * WaveAction::StaticNew(void)

{
  WaveAction *this;
  
  this = ::operator_new(0x18);
  WaveAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveAction::notifyWaveEvents() */

void __thiscall WaveAction::notifyWaveEvents(WaveAction *this)

{
  RtMixedPtrBase *this_00;
  undefined *puVar1;
  char cVar2;
  long lVar3;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(lVar3 + 0x28));
    puVar1 = gMessageRouter;
    if (cVar2 == '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::vector<std::string,std::allocator<std::string>>::vector
                (avStack_20,(vector *)(lVar3 + 0x28));
      MessageRouter::
      Broadcast<std::vector<std::string,std::allocator<std::string>>const&,std::vector<std::string,std::allocator<std::string>>>
                ((MessageRouter *)puVar1,Message::SendWaveNotificationEvents,avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

