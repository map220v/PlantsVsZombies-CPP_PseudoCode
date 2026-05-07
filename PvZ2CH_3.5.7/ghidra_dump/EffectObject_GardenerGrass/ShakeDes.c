// Class: EffectObject_GardenerGrass::ShakeDes


/* EffectObject_GardenerGrass::ShakeDes::ShakeDes() */

void __thiscall EffectObject_GardenerGrass::ShakeDes::ShakeDes(ShakeDes *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 0xc));
  return;
}


/* EffectObject_GardenerGrass::ShakeDes::ShakeDes(EffectObject_GardenerGrass::ShakeDes&&) */

void __thiscall EffectObject_GardenerGrass::ShakeDes::ShakeDes(ShakeDes *this,ShakeDes *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* EffectObject_GardenerGrass::ShakeDes::TEMPNAMEPLACEHOLDERVALUE(EffectObject_GardenerGrass::ShakeDes
   const&) */

ShakeDes * __thiscall
EffectObject_GardenerGrass::ShakeDes::operator=(ShakeDes *this,ShakeDes *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc),(SexyVector3 *)(param_1 + 0xc));
  return this;
}

