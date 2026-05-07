// Class: GravityZombieData


/* GravityZombieData::GravityZombieData() */

void __thiscall GravityZombieData::GravityZombieData(GravityZombieData *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x24] = (GravityZombieData)0x0;
  this[0x26] = (GravityZombieData)0x0;
  this[0x25] = (GravityZombieData)0x1;
  return;
}


/* GravityZombieData::GravityZombieData(GravityZombieData const&) */

void __thiscall
GravityZombieData::GravityZombieData(GravityZombieData *this,GravityZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GravityZombieData GVar6;
  GravityZombieData GVar7;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  GVar6 = param_1[0x25];
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  GVar7 = param_1[0x26];
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  this[0x25] = GVar6;
  this[0x26] = GVar7;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  return;
}


/* GravityZombieData::TEMPNAMEPLACEHOLDERVALUE(GravityZombieData&&) */

GravityZombieData * __thiscall
GravityZombieData::operator=(GravityZombieData *this,GravityZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GravityZombieData GVar6;
  GravityZombieData GVar7;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  GVar6 = param_1[0x25];
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  GVar7 = param_1[0x26];
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  this[0x25] = GVar6;
  this[0x26] = GVar7;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar5;
  return this;
}

