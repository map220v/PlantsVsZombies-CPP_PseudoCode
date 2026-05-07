// Class: ZombieActionHandler


/* ZombieActionHandler::EndAction() */

void __thiscall ZombieActionHandler::EndAction(ZombieActionHandler *this)

{
  (**(code **)(*(long *)this + 0xa0))();
  return;
}


/* ZombieActionHandler::StartAction() */

void __thiscall ZombieActionHandler::StartAction(ZombieActionHandler *this)

{
  (**(code **)(*(long *)this + 0x90))();
  return;
}


/* ZombieActionHandler::markActionDone() */

void __thiscall ZombieActionHandler::markActionDone(ZombieActionHandler *this)

{
  this[0x20] = (ZombieActionHandler)0x1;
  return;
}


/* ZombieActionHandler::UpdateAction() */

void __thiscall ZombieActionHandler::UpdateAction(ZombieActionHandler *this)

{
  (**(code **)(*(long *)this + 0x98))();
  return;
}


/* ZombieActionHandler::AddToRenderQueue(RenderQueue*) */

void ZombieActionHandler::AddToRenderQueue(RenderQueue *param_1)

{
  return;
}


/* ZombieActionHandler::onInitializeAction() */

void ZombieActionHandler::onInitializeAction(void)

{
  return;
}


/* ZombieActionHandler::ZombieActionHandler() */

void __thiscall ZombieActionHandler::ZombieActionHandler(ZombieActionHandler *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0687ec70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[0x20] = (ZombieActionHandler)0x0;
  return;
}


/* ZombieActionHandler::~ZombieActionHandler() */

void __thiscall ZombieActionHandler::~ZombieActionHandler(ZombieActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ec70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* ZombieActionHandler::~ZombieActionHandler() */

void __thiscall ZombieActionHandler::~ZombieActionHandler(ZombieActionHandler *this)

{
  ~ZombieActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionDefinition*
   ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>() const */

ZombossHydraSprayActionDefinition *
ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>(void)

{
  ZombossHydraSprayActionDefinition *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieActionHandler::StaticClassInit() */

void ZombieActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04630288,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieActionHandler::StaticGetClass() */

long * ZombieActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieActionHandler::GetClass() const */

long * ZombieActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieActionHandler::StaticNew() */

ZombieActionHandler * ZombieActionHandler::StaticNew(void)

{
  ZombieActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieActionHandler::InitFromDefinition(Zombie*, Sexy::RtWeakPtr<ZombieActionDefinition const>)
    */

void __thiscall
ZombieActionHandler::InitFromDefinition
          (ZombieActionHandler *this,undefined8 param_2,RtWeakPtr *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_3);
  if (*(code **)(*(long *)this + 0x88) != onInitializeAction) {
    (**(code **)(*(long *)this + 0x88))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieActionHandler::getZombie() const */

void __thiscall ZombieActionHandler::getZombie(ZombieActionHandler *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
  return;
}

