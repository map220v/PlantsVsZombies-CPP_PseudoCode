// Class: ZombieSpawnData


/* ZombieSpawnData::ZombieSpawnData() */

void __thiscall ZombieSpawnData::ZombieSpawnData(ZombieSpawnData *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[4] = (ZombieSpawnData)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)this = 6;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x30) = 0x3fc00000;
  return;
}


/* ZombieSpawnData::ZombieSpawnData(ZombieSpawnData const&) */

void __thiscall ZombieSpawnData::ZombieSpawnData(ZombieSpawnData *this,ZombieSpawnData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZombieSpawnData ZVar7;
  
  uVar1 = *(undefined4 *)param_1;
  ZVar7 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  this[4] = ZVar7;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar6;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar5;
  return;
}

