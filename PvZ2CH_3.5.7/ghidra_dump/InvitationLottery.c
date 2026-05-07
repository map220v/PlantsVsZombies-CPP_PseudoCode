// Class: InvitationLottery


/* InvitationLottery::~InvitationLottery() */

void __thiscall InvitationLottery::~InvitationLottery(InvitationLottery *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* InvitationLottery::InvitationLottery() */

void __thiscall InvitationLottery::InvitationLottery(InvitationLottery *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* InvitationLottery::TEMPNAMEPLACEHOLDERVALUE(InvitationLottery const&) */

InvitationLottery * __thiscall
InvitationLottery::operator=(InvitationLottery *this,InvitationLottery *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* InvitationLottery::InvitationLottery(InvitationLottery const&) */

void __thiscall
InvitationLottery::InvitationLottery(InvitationLottery *this,InvitationLottery *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* InvitationLottery::InvitationLottery(InvitationLottery&&) */

void __thiscall
InvitationLottery::InvitationLottery(InvitationLottery *this,InvitationLottery *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}

