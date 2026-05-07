// Class: MagicMirrorTeleportationObject


/* MagicMirrorTeleportationObject::MagicMirrorTeleportationObject() */

void __thiscall
MagicMirrorTeleportationObject::MagicMirrorTeleportationObject(MagicMirrorTeleportationObject *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  DVec3::DVec3((DVec3 *)(this + 0x14));
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* MagicMirrorTeleportationObject::MagicMirrorTeleportationObject(MagicMirrorTeleportationObject&&)
    */

void __thiscall
MagicMirrorTeleportationObject::MagicMirrorTeleportationObject
          (MagicMirrorTeleportationObject *this,MagicMirrorTeleportationObject *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar2;
  return;
}


/* MagicMirrorTeleportationObject::TEMPNAMEPLACEHOLDERVALUE(MagicMirrorTeleportationObject const&)
    */

MagicMirrorTeleportationObject * __thiscall
MagicMirrorTeleportationObject::operator=
          (MagicMirrorTeleportationObject *this,MagicMirrorTeleportationObject *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x14),(SexyVector3 *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  return this;
}

