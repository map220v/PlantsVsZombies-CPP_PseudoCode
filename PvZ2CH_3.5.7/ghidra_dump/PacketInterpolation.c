// Class: PacketInterpolation


/* PacketInterpolation::TEMPNAMEPLACEHOLDERVALUE(PacketInterpolation&&) */

PacketInterpolation * __thiscall
PacketInterpolation::operator=(PacketInterpolation *this,PacketInterpolation *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


/* PacketInterpolation::PacketInterpolation(PacketInterpolation const&) */

void __thiscall
PacketInterpolation::PacketInterpolation(PacketInterpolation *this,PacketInterpolation *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

