// Class: RiftAPIResponseLeagueChange


/* RiftAPIResponseLeagueChange::RiftAPIResponseLeagueChange() */

void __thiscall
RiftAPIResponseLeagueChange::RiftAPIResponseLeagueChange(RiftAPIResponseLeagueChange *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *this = (RiftAPIResponseLeagueChange)0x0;
  this[1] = (RiftAPIResponseLeagueChange)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* RiftAPIResponseLeagueChange::~RiftAPIResponseLeagueChange() */

void __thiscall
RiftAPIResponseLeagueChange::~RiftAPIResponseLeagueChange(RiftAPIResponseLeagueChange *this)

{
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x10));
  return;
}


/* RiftAPIResponseLeagueChange::TEMPNAMEPLACEHOLDERVALUE(RiftAPIResponseLeagueChange const&) */

RiftAPIResponseLeagueChange * __thiscall
RiftAPIResponseLeagueChange::operator=
          (RiftAPIResponseLeagueChange *this,RiftAPIResponseLeagueChange *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  RiftAPIResponseLeagueChange RVar3;
  RiftAPIResponseLeagueChange RVar4;
  
  RVar3 = *param_1;
  RVar4 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = RVar3;
  this[1] = RVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

