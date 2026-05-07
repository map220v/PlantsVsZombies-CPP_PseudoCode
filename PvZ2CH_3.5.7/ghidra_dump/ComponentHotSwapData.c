// Class: ComponentHotSwapData


/* ComponentHotSwapData::ComponentHotSwapData(Sexy::RtWeakPtr<HotUIComponent>,
   Sexy::RtWeakPtr<HotUIComponentProperties>) */

void __thiscall
ComponentHotSwapData::ComponentHotSwapData
          (ComponentHotSwapData *this,RtWeakPtr *param_2,RtWeakPtr *param_3)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),param_3);
  return;
}

