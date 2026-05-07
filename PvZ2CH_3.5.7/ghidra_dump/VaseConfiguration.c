// Class: VaseConfiguration


/* VaseConfiguration::VaseConfiguration() */

void __thiscall VaseConfiguration::VaseConfiguration(VaseConfiguration *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  this[8] = (VaseConfiguration)0x0;
  return;
}


/* VaseConfiguration::VaseConfiguration(VaseConfiguration const&) */

void __thiscall
VaseConfiguration::VaseConfiguration(VaseConfiguration *this,VaseConfiguration *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  this[8] = param_1[8];
  return;
}


/* VaseConfiguration::TEMPNAMEPLACEHOLDERVALUE(VaseConfiguration&&) */

VaseConfiguration * __thiscall
VaseConfiguration::operator=(VaseConfiguration *this,VaseConfiguration *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  this[8] = param_1[8];
  return this;
}


/* VaseConfiguration::VaseConfiguration(Sexy::RtWeakPtr<ObjectTypeDescriptor>, bool) */

void __thiscall
VaseConfiguration::VaseConfiguration
          (VaseConfiguration *this,RtWeakPtrBase *param_2,VaseConfiguration param_3)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)this,param_2);
  this[8] = param_3;
  return;
}

