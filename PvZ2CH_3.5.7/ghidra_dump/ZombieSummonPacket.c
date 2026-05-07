// Class: ZombieSummonPacket


/* ZombieSummonPacket::ZombieSummonPacket() */

void __thiscall ZombieSummonPacket::ZombieSummonPacket(ZombieSummonPacket *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 8) = 1;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xc),-10.0,10.0);
  this[0x14] = (ZombieSummonPacket)0x0;
  return;
}


/* ZombieSummonPacket::ZombieSummonPacket(ZombieSummonPacket const&) */

void __thiscall
ZombieSummonPacket::ZombieSummonPacket(ZombieSummonPacket *this,ZombieSummonPacket *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  return;
}

