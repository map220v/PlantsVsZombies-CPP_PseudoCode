// Class: GameInputListenerInfo


/* GameInputListenerInfo::~GameInputListenerInfo() */

void __thiscall GameInputListenerInfo::~GameInputListenerInfo(GameInputListenerInfo *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  return;
}


/* GameInputListenerInfo::TEMPNAMEPLACEHOLDERVALUE(GameInputListenerInfo const&) const */

bool __thiscall
GameInputListenerInfo::operator<(GameInputListenerInfo *this,GameInputListenerInfo *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x60);
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar3 == iVar2) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x68));
    if (cVar1 != '\0') {
      return *(int *)(param_1 + 0x70) < *(int *)(this + 0x70);
    }
    iVar3 = *(int *)(this + 0x60);
    iVar2 = *(int *)(param_1 + 0x60);
  }
  return iVar2 < iVar3;
}


/* GameInputListenerInfo::TEMPNAMEPLACEHOLDERVALUE(GameInputListenerInfo const&) const */

bool __thiscall
GameInputListenerInfo::operator==(GameInputListenerInfo *this,GameInputListenerInfo *param_1)

{
  if (*(int *)(this + 0x60) != *(int *)(param_1 + 0x60)) {
    return false;
  }
  return *(int *)(this + 0x70) == *(int *)(param_1 + 0x70);
}


void __thiscall GameInputListenerInfo::~GameInputListenerInfo(GameInputListenerInfo *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  return;
}


void __thiscall GameInputListenerInfo::~GameInputListenerInfo(GameInputListenerInfo *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  return;
}


void __thiscall GameInputListenerInfo::~GameInputListenerInfo(GameInputListenerInfo *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  return;
}


/* GameInputListenerInfo::GameInputListenerInfo(Sexy::Delegate1wRet<bool, Sexy::Touch const&>, int,
   Sexy::RtWeakPtr<BoardEntity>, Sexy::Delegate0) */

void __thiscall
GameInputListenerInfo::GameInputListenerInfo
          (GameInputListenerInfo *this,Delegate1wRet *param_2,undefined4 param_3,RtWeakPtr *param_4,
          Delegate2 *param_5)

{
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::Delegate1wRet((DummyInit *)this);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x30),(DummyInit *)0x0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)this,param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x30),param_5);
  *(undefined4 *)(this + 0x60) = param_3;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),param_4);
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


/* GameInputListenerInfo::GameInputListenerInfo(GameInputListenerInfo const&) */

void __thiscall
GameInputListenerInfo::GameInputListenerInfo
          (GameInputListenerInfo *this,GameInputListenerInfo *param_1)

{
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::Delegate1wRet
            ((Delegate1wRet<bool,Sexy::Touch_const&> *)this,(Delegate1wRet *)param_1);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x30),(Delegate0 *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x68),(RtWeakPtrBase *)(param_1 + 0x68));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return;
}


/* GameInputListenerInfo::TEMPNAMEPLACEHOLDERVALUE(GameInputListenerInfo&&) */

GameInputListenerInfo * __thiscall
GameInputListenerInfo::operator=(GameInputListenerInfo *this,GameInputListenerInfo *param_1)

{
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)this,(Delegate1wRet *)param_1);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x30),(Delegate2 *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)(param_1 + 0x68));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return this;
}

