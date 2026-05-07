// Class: WidgetComponent


/* WidgetComponent::TEMPNAMEPLACEHOLDERVALUE(WidgetComponent&&) */

WidgetComponent * __thiscall
WidgetComponent::operator=(WidgetComponent *this,WidgetComponent *param_1)

{
  undefined8 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return this;
}


/* WidgetComponent::WidgetComponent() */

void __thiscall WidgetComponent::WidgetComponent(WidgetComponent *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Insets::Insets((Insets *)(this + 8));
  return;
}

