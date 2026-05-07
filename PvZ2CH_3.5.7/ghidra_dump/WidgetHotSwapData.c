// Class: WidgetHotSwapData


/* WidgetHotSwapData::WidgetHotSwapData(std::string const&, Sexy::RtWeakPtr<HotUIWidget>,
   Sexy::RtWeakPtr<HotUIWidgetProperties>) */

void __thiscall
WidgetHotSwapData::WidgetHotSwapData
          (WidgetHotSwapData *this,undefined8 param_1,RtWeakPtr *param_3,RtWeakPtr *param_4)

{
  Set8BytesTo0();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  thunk_FUN_05475e00(this,param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),param_3);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),param_4);
  return;
}


/* WidgetHotSwapData::~WidgetHotSwapData() */

void __thiscall WidgetHotSwapData::~WidgetHotSwapData(WidgetHotSwapData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WidgetHotSwapData::WidgetHotSwapData(WidgetHotSwapData&&) */

void __thiscall
WidgetHotSwapData::WidgetHotSwapData(WidgetHotSwapData *this,WidgetHotSwapData *param_1)

{
  FUN_05474148();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* WidgetHotSwapData::WidgetHotSwapData(WidgetHotSwapData const&) */

void __thiscall
WidgetHotSwapData::WidgetHotSwapData(WidgetHotSwapData *this,WidgetHotSwapData *param_1)

{
  FUN_05475d88();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}

