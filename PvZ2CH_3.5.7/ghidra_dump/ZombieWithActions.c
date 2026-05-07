// Class: ZombieWithActions


/* ZombieWithActions::TryJamAction(GridItem*) */

undefined8 ZombieWithActions::TryJamAction(GridItem *param_1)

{
  return 0;
}


/* ZombieWithActions::onPhaseChanged() */

void ZombieWithActions::onPhaseChanged(void)

{
  return;
}


/* ZombieWithActions::ZombieWithActions() */

void __thiscall ZombieWithActions::ZombieWithActions(ZombieWithActions *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x810) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0687d250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithActions_0687dcc0;
  *(undefined4 *)(this + 0x80c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x828));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>() const */

void ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_03af7fc4(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_03af8014(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03af8284:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombieProjectileActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_03af8284;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombieWithActions::~ZombieWithActions() */

void __thiscall ZombieWithActions::~ZombieWithActions(ZombieWithActions *this)

{
  *(undefined ***)this = &PTR_GetClass_0687d250;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithActions_0687dcc0;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
             *)(this + 0x828));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieWithActions::~ZombieWithActions() */

void __thiscall ZombieWithActions::~ZombieWithActions(ZombieWithActions *this)

{
  ~ZombieWithActions(this + -0x10);
  return;
}


/* ZombieWithActions::~ZombieWithActions() */

void __thiscall ZombieWithActions::~ZombieWithActions(ZombieWithActions *this)

{
  ~ZombieWithActions(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWithActions::~ZombieWithActions() */

void __thiscall ZombieWithActions::~ZombieWithActions(ZombieWithActions *this)

{
  ~ZombieWithActions(this + -0x10);
  return;
}


/* ZombieWithActions::GetCurrentAction() */

RtWeakPtr<Sexy::SoundResource> * ZombieWithActions::GetCurrentAction(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x820));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamImpCannonActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamImpCannonActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamImpCannonActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamImpCannonActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamImpCannonActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamImpCannonActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamJumpActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamJumpActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamJumpActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamJumpActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamRandomJumpActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamRandomJumpActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamRandomJumpActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamRandomJumpActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamRandomJumpActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamRushActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamRushActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamRushActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamRushActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamRushActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamFireActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamFireActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamFireActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamFireActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamFireActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamFireActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamTrainSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamTrainSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamTrainSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamTrainSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamTrainSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamTrainSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRestActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamRestActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamRestActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamRestActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamRestActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamRestActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamThrowActionHandler*
   ZombieWithActions::QueueAction<ZombossSteamThrowActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSteamThrowActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSteamThrowActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSteamThrowActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSteamThrowActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithActions::onZombieInitialize() */

void __thiscall ZombieWithActions::onZombieInitialize(ZombieWithActions *this)

{
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined4 *)(this + 0x810) = 0xffffffff;
  *(undefined4 *)(this + 0x814) = 0;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombieWithActions::SetPhase(ZombieActionPhase) */

void __thiscall ZombieWithActions::SetPhase(ZombieWithActions *this,int param_2)

{
  if (*(int *)(this + 0x814) != param_2) {
    *(int *)(this + 0x814) = param_2;
    if (*(code **)(*(long *)this + 0xa58) != onPhaseChanged) {
      (**(code **)(*(long *)this + 0xa58))();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::tryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall
ZombieWithActions::tryStartAction(ZombieWithActions *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  cVar4 = '\0';
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar5 = *(code **)(*plVar2 + 0x88);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
  cVar1 = (*pcVar5)(plVar2,aRStack_10,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (cVar1 != '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar4 = *(char *)(lVar3 + 0x1d);
    if (cVar4 == '\0') {
      cVar4 = '\x01';
    }
    else {
      Zombie::SetZombieFlag(this,0x20000,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::tryRepeatAction() */

void __thiscall ZombieWithActions::tryRepeatAction(ZombieWithActions *this)

{
  char cVar1;
  char cVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x800)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    cVar1 = Sexy::RtWeakPtrBase::operator!=
                      ((RtWeakPtrBase *)(this + 0x818),(RtWeakPtrBase *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(this + 0x818));
      cVar2 = tryStartAction(this,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      if (cVar2 == '\0') {
        *(undefined4 *)(this + 0x800) = 0;
        cVar1 = '\0';
      }
      else {
        *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
      }
      goto LAB_04627df4;
    }
  }
  cVar1 = '\0';
LAB_04627df4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ZombieWithActions::getCurrentAction() const */

void __thiscall ZombieWithActions::getCurrentAction(ZombieWithActions *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::onEnterState_ZombiePerformAction(ZombieState) */

void ZombieWithActions::onEnterState_ZombiePerformAction(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  ZombieActionHandler *this;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ZombieActionHandler *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x820));
  ZombieActionHandler::StartAction(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x820));
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x34);
    cVar2 = *(char *)(lVar3 + 0x1d);
    *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(lVar3 + 0x30);
    *(undefined4 *)(param_1 + 0x808) = uVar1;
    if (cVar2 != '\0') {
      Zombie::SetZombieFlag(param_1,0x20000,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithActions::updateState_ZombiePerformAction() */

void __thiscall ZombieWithActions::updateState_ZombiePerformAction(ZombieWithActions *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  char cVar2;
  ZombieActionHandler *this_01;
  EASquaredImpl *this_02;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820);
  this_01 = (ZombieActionHandler *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ZombieActionHandler::UpdateAction(this_01);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    this_02 = (EASquaredImpl *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar2 = EASquaredImpl::IsEnabledForUser(this_02);
    if (cVar2 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  return;
}


/* ZombieWithActions::StaticNew() */

ZombieWithActions * ZombieWithActions::StaticNew(void)

{
  ZombieWithActions *this;
  
  this = ::operator_new(0x840);
  ZombieWithActions(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::clearActionQueue() */

void __thiscall ZombieWithActions::clearActionQueue(ZombieWithActions *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x828);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      (**(code **)(*plVar4 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::clear((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
           *)this_00);
  *(undefined4 *)(this + 0x804) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithActions::CancelCurrentAction() */

void __thiscall ZombieWithActions::CancelCurrentAction(ZombieWithActions *this)

{
  clearActionQueue(this);
  *(undefined4 *)(this + 0x800) = 0;
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::QueueActionImmediate(Sexy::RtWeakPtr<ZombieActionDefinition const>) */

void __thiscall
ZombieWithActions::QueueActionImmediate(ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearActionQueue(this);
  *(undefined4 *)(this + 0x800) = 0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar1 = tryStartAction(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieWithActions::onExitState_ZombiePerformAction(ZombieState) */

void __thiscall
ZombieWithActions::onExitState_ZombiePerformAction(ZombieWithActions *this,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  ZombieActionHandler *this_01;
  long *plVar2;
  
  if (*(int *)(this + 0x804) != 0) {
    SetPhase();
  }
  if ((*(int *)(this + 0x800) == 0) && (*(int *)(this + 0x808) != 0)) {
    SetPhase(this);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820);
  this_01 = (ZombieActionHandler *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ZombieActionHandler::EndAction(this_01);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (param_2 != 0x1f) {
    clearActionQueue(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::updateState_ZombiePullFromActionQueue() */

void __thiscall ZombieWithActions::updateState_ZombiePullFromActionQueue(ZombieWithActions *this)

{
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  *this_00;
  char cVar1;
  RtWeakPtr *pRVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
             *)(this + 0x828);
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
          ::empty(this_00);
  if (cVar1 == '\0') {
    pRVar2 = (RtWeakPtr *)
             std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                       ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                         *)this_00);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x820),pRVar2);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::
    vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
    ::erase(this_00,local_10);
    Zombie::setZombieState((Zombie *)this,0x20,0);
  }
  else if (*(int *)(this + 0x810) == -1) {
    (**(code **)(*(long *)this + 600))(this);
  }
  else {
    Zombie::setZombieState((Zombie *)this,*(int *)(this + 0x810),0);
    *(undefined4 *)(this + 0x810) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::tryStartActionRandom(std::vector<Sexy::RtWeakPtr<ZombieActionDefinition>,
   std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition> > > const&) */

void __thiscall ZombieWithActions::tryStartActionRandom(ZombieWithActions *this,vector *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = tryRepeatAction(this);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr *)(this + 0x818);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar2) &&
       (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       *(char *)(lVar7 + 0x1c) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    local_50 = FUN_046280f8(*(undefined8 *)param_1);
    local_48 = FUN_04628148(*(undefined8 *)(param_1 + 8));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,pRVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      if (((0 < (int)plVar6[2]) && (*(int *)((long)plVar6 + 0x2c) == *(int *)(this + 0x814))) &&
         (cVar1 = (**(code **)(*plVar6 + 0x80))(plVar6,this), cVar1 != '\0')) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_58);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::AddItem
                  ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38,
                   aRStack_40,*(undefined4 *)(lVar7 + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    if (bVar2) {
      while (lVar7 = ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::GetSize
                               ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)
                                aPStack_38), lVar7 != 0) {
        ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::PickItem();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
        cVar1 = tryStartAction(this,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        if (cVar1 != '\0') goto LAB_046290e8;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
        ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::RemoveItem
                  ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38,
                   aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      }
    }
    else {
      lVar7 = ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::GetSize
                        ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38
                        );
      while (lVar7 != 0) {
        ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::PickItem();
        cVar1 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)&local_48,(RtWeakPtrBase *)this_00)
        ;
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
          cVar1 = tryStartAction(this,aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          if (cVar1 != '\0') goto LAB_046290e8;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
        ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::RemoveItem
                  ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38,
                   aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        lVar7 = ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::GetSize
                          ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)
                           aPStack_38);
      }
    }
    ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::~ProbabilitySet
              ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38);
    cVar1 = '\0';
  }
LAB_04628e8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
LAB_046290e8:
  cVar1 = '\x01';
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_48);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_48);
  uVar4 = ZombieZombossMech::pickRandomRepeatCountForAction((ZombieZombossMech *)this,aRStack_40);
  *(undefined4 *)(this + 0x800) = uVar4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<ZombieActionDefinition_const>> *)aPStack_38);
  goto LAB_04628e8c;
}


/* ZombieWithActions::updateState_ZombiePickNextAction() */

void __thiscall ZombieWithActions::updateState_ZombiePickNextAction(ZombieWithActions *this)

{
  char cVar1;
  int iVar2;
  ZombieWithActionsProps *pZVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  pZVar3 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
  iVar2 = FUN_04627a98(*(undefined4 *)(this + 0x814));
  if (iVar2 == 10) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
  cVar1 = tryStartActionRandom(this,(vector *)(pZVar3 + 0x210));
  if (cVar1 == '\0') {
    iVar2 = FUN_04627a98(*(undefined4 *)(this + 0x814));
    if (iVar2 == 9) {
      fVar7 = *(float *)(this + 0x80c);
      if (fVar7 == 0.0) {
        uVar6 = PVZ_T();
        *(undefined4 *)(this + 0x80c) = uVar6;
        return;
      }
      fVar5 = (float)PVZ_T();
      if (fVar7 + 4.0 < fVar5) {
        pcVar4 = *(code **)(*(long *)this + 0x48);
        *(undefined4 *)(this + 0x80c) = 0;
        (*pcVar4)(this);
      }
    }
    return;
  }
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,0x21);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithActions::StaticClassInit() */

void ZombieWithActions::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieWithActions");
      (*pcVar4)(plVar1,asStack_150,FUN_046295e4,0x840,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieWithActions,void(ZombieWithActions::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombiePullFromActionQueue");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04629230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieWithActions,void(ZombieWithActions::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombiePerformAction");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04629230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieWithActions,void(ZombieWithActions::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWithActions,void(ZombieWithActions::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombiePickNextAction");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04629230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieWithActions::StaticGetClass() */

long * ZombieWithActions::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithActions",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithActions::GetClass() const */

long * ZombieWithActions::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithActions",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithActions::AddToRenderQueue(RenderQueue*) */

void __thiscall ZombieWithActions::AddToRenderQueue(ZombieWithActions *this,RenderQueue *param_1)

{
  char cVar1;
  long *plVar2;
  
  Zombie::AddToRenderQueue((Zombie *)this,param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x820));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
    if (*(code **)(*plVar2 + 0x80) != ZombieActionHandler::AddToRenderQueue) {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_1);
      return;
    }
  }
  return;
}


/* ZombieWithActions::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void __thiscall
ZombieWithActions::onPopAnimCommand
          (ZombieWithActions *this,string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  long *plVar2;
  
  Zombie::onPopAnimCommand((string *)this,param_2,param_1,param_3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x820));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
    (**(code **)(*plVar2 + 0x78))(param_2,plVar2,param_1,param_3,param_4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombiePushGridItemActionDefinition>() const */

void ZombieWithActions::getBaseActionDefinition<ZombiePushGridItemActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_0462b544(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_0462b594(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_0462bf08:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombiePushGridItemActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_0462bf08;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler*
   ZombieWithActions::QueueAction<ZombiePushGriditemActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombiePushGriditemActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombiePushGriditemActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombiePushGriditemActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombiePushGriditemActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileActionHandler*
   ZombieWithActions::QueueAction<ZombieProjectileActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieProjectileActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieProjectileActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieProjectileActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieProjectileActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileEliteActionHandler*
   ZombieWithActions::QueueAction<ZombieProjectileEliteActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieProjectileEliteActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieProjectileEliteActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieProjectileEliteActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieProjectileEliteActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileLaunchActionHandler*
   ZombieWithActions::QueueAction<ZombieProjectileLaunchActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieProjectileLaunchActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieProjectileLaunchActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieProjectileLaunchActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieProjectileLaunchActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionHandler*
   ZombieWithActions::QueueAction<ZombieDropZombiesOnBoardActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieDropZombiesOnBoardActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieDropZombiesOnBoardActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieDropZombiesOnBoardActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieDropZombiesOnBoardActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInstantTargetAttackActionHandler*
   ZombieWithActions::QueueAction<ZombieInstantTargetAttackActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieInstantTargetAttackActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieInstantTargetAttackActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieInstantTargetAttackActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieInstantTargetAttackActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler*
   ZombieWithActions::QueueAction<ZombossJumpActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossJumpActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossJumpActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossJumpActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossJumpActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionHandler*
   ZombieWithActions::QueueAction<ZombossImpCannonActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossImpCannonActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossImpCannonActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossImpCannonActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossImpCannonActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossDarkSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDarkSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDarkSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDarkSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDarkSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler*
   ZombieWithActions::QueueAction<ZombossDarkFireBreathActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDarkFireBreathActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDarkFireBreathActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDarkFireBreathActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDarkFireBreathActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkLobFireballsActionHandler*
   ZombieWithActions::QueueAction<ZombossDarkLobFireballsActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDarkLobFireballsActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDarkLobFireballsActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDarkLobFireballsActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDarkLobFireballsActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkWalkActionHandler*
   ZombieWithActions::QueueAction<ZombossDarkWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDarkWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDarkWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDarkWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDarkWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCitySpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCitySpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCitySpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCitySpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCitySpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityWalkActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityLineShootActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityLineShootActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityLineShootActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityLineShootActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityLineShootActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityLineShootActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityThrowAircraftActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityThrowAircraftActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityThrowAircraftActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityThrowAircraftActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityThrowAircraftActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityThrowAircraftActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySandstormActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCitySandstormActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCitySandstormActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCitySandstormActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCitySandstormActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCitySandstormActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityRushDownActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityRushDownActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityRushDownActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityRushDownActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityRushDownActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityRushDownActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityAttackNearByActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityAttackNearByActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityAttackNearByActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityAttackNearByActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityAttackNearByActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityAttackNearByActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionHandler*
   ZombieWithActions::QueueAction<ZombossSkyCityBarrageActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSkyCityBarrageActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSkyCityBarrageActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSkyCityBarrageActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSkyCityBarrageActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler*
   ZombieWithActions::QueueAction<ZombossDropZombieActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDropZombieActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDropZombieActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDropZombieActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDropZombieActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler*
   ZombieWithActions::QueueAction<ZombossDropSandbagActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDropSandbagActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDropSandbagActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDropSandbagActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDropSandbagActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionHandler*
   ZombieWithActions::QueueAction<ZombossWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler*
   ZombieWithActions::QueueAction<ZombossSummonActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSummonActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSummonActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSummonActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSummonActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionHandler*
   ZombieWithActions::QueueAction<ZombossRushActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRushActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRushActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRushActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRushActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFireActionHandler*
   ZombieWithActions::QueueAction<ZombossFireActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossFireActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossFireActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossFireActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossFireActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHelmLostActionHandler*
   ZombieWithActions::QueueAction<ZombossHelmLostActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHelmLostActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHelmLostActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHelmLostActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHelmLostActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossCoverUpActionHandler*
   ZombieWithActions::QueueAction<ZombossCoverUpActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossCoverUpActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossCoverUpActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossCoverUpActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossCoverUpActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnGlacierColumnActionHandler*
   ZombieWithActions::QueueAction<ZombossSpawnGlacierColumnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSpawnGlacierColumnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSpawnGlacierColumnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSpawnGlacierColumnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSpawnGlacierColumnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionHandler*
   ZombieWithActions::QueueAction<ZombossFreezingWindRowActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossFreezingWindRowActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossFreezingWindRowActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossFreezingWindRowActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossFreezingWindRowActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnShieldActionHandler*
   ZombieWithActions::QueueAction<ZombossSpawnShieldActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSpawnShieldActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSpawnShieldActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSpawnShieldActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSpawnShieldActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombieElectricProjectileActionDefinition>() const */

void ZombieWithActions::getBaseActionDefinition<ZombieElectricProjectileActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_047a7960(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_047a79b0(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_047a7cac:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombieElectricProjectileActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_047a7cac;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElectricProjectileActionHandler*
   ZombieWithActions::QueueAction<ZombieElectricProjectileActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieElectricProjectileActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieElectricProjectileActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieElectricProjectileActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieElectricProjectileActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesSwapJamActionHandler*
   ZombieWithActions::QueueAction<ZombossEightiesSwapJamActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossEightiesSwapJamActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossEightiesSwapJamActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossEightiesSwapJamActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossEightiesSwapJamActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionHandler*
   ZombieWithActions::QueueAction<ZombossEightiesDropSpeakerActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossEightiesDropSpeakerActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossEightiesDropSpeakerActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossEightiesDropSpeakerActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossEightiesDropSpeakerActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesFireSpeakerRayActionHandler*
   ZombieWithActions::QueueAction<ZombossEightiesFireSpeakerRayActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossEightiesFireSpeakerRayActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossEightiesFireSpeakerRayActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossEightiesFireSpeakerRayActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossEightiesFireSpeakerRayActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler*
   ZombieWithActions::QueueAction<ZombossSpawnDinoActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSpawnDinoActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSpawnDinoActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSpawnDinoActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSpawnDinoActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionHandler*
   ZombieWithActions::QueueAction<ZombossDinoLaserActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDinoLaserActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDinoLaserActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDinoLaserActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDinoLaserActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoWalkActionHandler*
   ZombieWithActions::QueueAction<ZombossDinoWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossDinoWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossDinoWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossDinoWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossDinoWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionHandler*
   ZombieWithActions::QueueAction<ZombossBeachDiveActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossBeachDiveActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossBeachDiveActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossBeachDiveActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossBeachDiveActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFanPullActionHandler*
   ZombieWithActions::QueueAction<ZombossFanPullActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossFanPullActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossFanPullActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossFanPullActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossFanPullActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSharkMinionAttackActionHandler*
   ZombieWithActions::QueueAction<ZombossSharkMinionAttackActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossSharkMinionAttackActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossSharkMinionAttackActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossSharkMinionAttackActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossSharkMinionAttackActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>() const */

void ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_04ee93e8(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_04ee9438(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_04ee9990:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombieRomanHealerHealActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_04ee9990;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionHandler*
   ZombieWithActions::QueueAction<ZombieRomanHealerHealActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieRomanHealerHealActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieRomanHealerHealActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieRomanHealerHealActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieRomanHealerHealActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombieEliteElectricProjectileActionDefinition>() const
    */

void ZombieWithActions::getBaseActionDefinition<ZombieEliteElectricProjectileActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_04ef9aa4(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_04ef9af4(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_04ef9e70:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombieEliteElectricProjectileActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_04ef9e70;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteElectricProjectileActionHandler*
   ZombieWithActions::QueueAction<ZombieEliteElectricProjectileActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieEliteElectricProjectileActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieEliteElectricProjectileActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieEliteElectricProjectileActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieEliteElectricProjectileActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ZombieActionDefinition const>
   ZombieWithActions::getBaseActionDefinition<ZombieRomanMedusaPetrifyActionDefinition>() const */

void ZombieWithActions::getBaseActionDefinition<ZombieRomanMedusaPetrifyActionDefinition>(void)

{
  bool bVar1;
  Zombie *in_x0;
  ZombieWithActionsProps *pZVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieWithActionsProps>(in_x0);
  local_18 = FUN_04efb830(*(undefined8 *)(pZVar2 + 0x210));
  local_10 = FUN_04efb880(*(undefined8 *)(pZVar2 + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_04efba58:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar1 = Sexy::RtObject::IsA<ZombieRomanMedusaPetrifyActionDefinition>(this);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        goto LAB_04efba58;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanMedusaPetrifyActionHandler*
   ZombieWithActions::QueueAction<ZombieRomanMedusaPetrifyActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieRomanMedusaPetrifyActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieRomanMedusaPetrifyActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieRomanMedusaPetrifyActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieRomanMedusaPetrifyActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionHandler*
   ZombieWithActions::QueueAction<ZombieWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTimedActionHandler*
   ZombieWithActions::QueueAction<ZombieTimedActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieTimedActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieTimedActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieTimedActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieTimedActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIdleActionHandler*
   ZombieWithActions::QueueAction<ZombieIdleActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieIdleActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieIdleActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieIdleActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieIdleActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePlayAnimationActionHandler*
   ZombieWithActions::QueueAction<ZombiePlayAnimationActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombiePlayAnimationActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombiePlayAnimationActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombiePlayAnimationActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombiePlayAnimationActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieStunActionHandler*
   ZombieWithActions::QueueAction<ZombieStunActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieStunActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieStunActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieStunActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieStunActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenMirrorMagicActionHandler*
   ZombieWithActions::QueueAction<ZombieMirrorQueenMirrorMagicActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieMirrorQueenMirrorMagicActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieMirrorQueenMirrorMagicActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieMirrorQueenMirrorMagicActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieMirrorQueenMirrorMagicActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenIdleActionHandler*
   ZombieWithActions::QueueAction<ZombieMirrorQueenIdleActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieMirrorQueenIdleActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieMirrorQueenIdleActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieMirrorQueenIdleActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieMirrorQueenIdleActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionHandler*
   ZombieWithActions::QueueAction<ZombieMirrorQueenSummonActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieMirrorQueenSummonActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieMirrorQueenSummonActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieMirrorQueenSummonActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieMirrorQueenSummonActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotBaseZombieActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotBaseZombieActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotBaseZombieActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotBaseZombieActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotBaseZombieActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotBaseZombieActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnNormalZombieActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotSpawnNormalZombieActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotSpawnNormalZombieActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotSpawnNormalZombieActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotSpawnNormalZombieActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotSpawnNormalZombieActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotSpitOutBallActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotSpitOutBallActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotSpitOutBallActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotSpitOutBallActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotSpitOutBallActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotThrowCarActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotThrowCarActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotThrowCarActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotThrowCarActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotThrowCarActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotThrowCarActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotAirDropZombieActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotAirDropZombieActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotAirDropZombieActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotAirDropZombieActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotAirDropZombieActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotTrampleActionHandler*
   ZombieWithActions::QueueAction<ZombossRobotTrampleActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossRobotTrampleActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossRobotTrampleActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossRobotTrampleActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossRobotTrampleActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionHandler*
   ZombieWithActions::QueueAction<ZombieTeleportActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieTeleportActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieTeleportActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieTeleportActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieTeleportActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombieSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnArtifactDoveActionHandler*
   ZombieWithActions::QueueAction<ZombieSpawnArtifactDoveActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombieSpawnArtifactDoveActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombieSpawnArtifactDoveActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombieSpawnArtifactDoveActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombieSpawnArtifactDoveActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler*
   ZombieWithActions::QueueAction<ZombossHydraSpawnActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHydraSpawnActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHydraSpawnActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHydraSpawnActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHydraSpawnActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraPullActionHandler*
   ZombieWithActions::QueueAction<ZombossHydraPullActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHydraPullActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHydraPullActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHydraPullActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHydraPullActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraLobFireballsActionHandler*
   ZombieWithActions::QueueAction<ZombossHydraLobFireballsActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHydraLobFireballsActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHydraLobFireballsActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHydraLobFireballsActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHydraLobFireballsActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraWalkActionHandler*
   ZombieWithActions::QueueAction<ZombossHydraWalkActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHydraWalkActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHydraWalkActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHydraWalkActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHydraWalkActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSprayActionHandler*
   ZombieWithActions::QueueAction<ZombossHydraSprayActionHandler>(Sexy::RtWeakPtr<ZombieActionDefinition
   const>) */

ZombossHydraSprayActionHandler * __thiscall
ZombieWithActions::QueueAction<ZombossHydraSprayActionHandler>
          (ZombieWithActions *this,RtWeakPtrBase *param_2)

{
  ZombossHydraSprayActionHandler *pZVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = GameObject::Create<ZombossHydraSprayActionHandler>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieActionHandler::InitFromDefinition((ZombieActionHandler *)pZVar1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
               *)(this + 0x828),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return pZVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

