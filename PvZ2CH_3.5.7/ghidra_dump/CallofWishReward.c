// Class: CallofWishReward


/* CallofWishReward::CallofWishReward(CallofWishReward const&) */

void __thiscall CallofWishReward::CallofWishReward(CallofWishReward *this,CallofWishReward *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}

