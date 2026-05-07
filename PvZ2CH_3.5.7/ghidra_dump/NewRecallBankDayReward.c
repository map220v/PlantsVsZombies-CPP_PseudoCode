// Class: NewRecallBankDayReward


/* NewRecallBankDayReward::TEMPNAMEPLACEHOLDERVALUE(NewRecallBankDayReward const&) */

NewRecallBankDayReward * __thiscall
NewRecallBankDayReward::operator=(NewRecallBankDayReward *this,NewRecallBankDayReward *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  this[0x18] = param_1[0x18];
  return this;
}


/* NewRecallBankDayReward::NewRecallBankDayReward(NewRecallBankDayReward const&) */

void __thiscall
NewRecallBankDayReward::NewRecallBankDayReward
          (NewRecallBankDayReward *this,NewRecallBankDayReward *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  this[0x18] = param_1[0x18];
  return;
}

