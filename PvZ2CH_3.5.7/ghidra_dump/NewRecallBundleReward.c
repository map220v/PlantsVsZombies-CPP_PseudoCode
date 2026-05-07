// Class: NewRecallBundleReward


/* NewRecallBundleReward::TEMPNAMEPLACEHOLDERVALUE(NewRecallBundleReward const&) */

NewRecallBundleReward * __thiscall
NewRecallBundleReward::operator=(NewRecallBundleReward *this,NewRecallBundleReward *param_1)

{
  undefined4 uVar1;
  NewRecallBundleReward NVar2;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  NVar2 = param_1[0x18];
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x18] = NVar2;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}


/* NewRecallBundleReward::NewRecallBundleReward(NewRecallBundleReward&&) */

void __thiscall
NewRecallBundleReward::NewRecallBundleReward
          (NewRecallBundleReward *this,NewRecallBundleReward *param_1)

{
  undefined4 uVar1;
  NewRecallBundleReward NVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  NVar2 = param_1[0x18];
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x18] = NVar2;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

