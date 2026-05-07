// Class: AttachedGameObjectNode


/* AttachedGameObjectNode::AttachedGameObjectNode(AttachedGameObjectNode const&) */

void __thiscall
AttachedGameObjectNode::AttachedGameObjectNode
          (AttachedGameObjectNode *this,AttachedGameObjectNode *param_1)

{
  *(undefined ***)this = &PTR__AttachedGameObjectNode_0675cad0;
  FUN_05475d88(this + 8,param_1 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* AttachedGameObjectNode::AttachedGameObjectNode(std::string const&) */

void __thiscall
AttachedGameObjectNode::AttachedGameObjectNode(AttachedGameObjectNode *this,string *param_1)

{
  *(undefined ***)this = &PTR__AttachedGameObjectNode_0675cad0;
  FUN_05475d88(this + 8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* AttachedGameObjectNode::AttachedGameObjectNode() */

void __thiscall AttachedGameObjectNode::AttachedGameObjectNode(AttachedGameObjectNode *this)

{
  *(undefined ***)this = &PTR__AttachedGameObjectNode_0675cad0;
  Set8BytesTo0(this + 8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* AttachedGameObjectNode::~AttachedGameObjectNode() */

void __thiscall AttachedGameObjectNode::~AttachedGameObjectNode(AttachedGameObjectNode *this)

{
  *(undefined ***)this = &PTR__AttachedGameObjectNode_0675cad0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* AttachedGameObjectNode::~AttachedGameObjectNode() */

void __thiscall AttachedGameObjectNode::~AttachedGameObjectNode(AttachedGameObjectNode *this)

{
  ~AttachedGameObjectNode(this);
  AK::FreeHook(this);
  return;
}


/* AttachedGameObjectNode::Destroy() */

void __thiscall AttachedGameObjectNode::Destroy(AttachedGameObjectNode *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x10);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar2 + 0x48))();
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* AttachedGameObjectNode::TEMPNAMEPLACEHOLDERVALUE(AttachedGameObjectNode const&) */

AttachedGameObjectNode * __thiscall
AttachedGameObjectNode::operator=(AttachedGameObjectNode *this,AttachedGameObjectNode *param_1)

{
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  return this;
}

