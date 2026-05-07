// Class: RechargeRewardContentConfig


/* RechargeRewardContentConfig::~RechargeRewardContentConfig() */

void __thiscall
RechargeRewardContentConfig::~RechargeRewardContentConfig(RechargeRewardContentConfig *this)

{
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  FUN_05476c50(this + 0x18);
  std::vector<RechargeReward,std::allocator<RechargeReward>>::~vector
            ((vector<RechargeReward,std::allocator<RechargeReward>> *)this);
  return;
}


/* RechargeRewardContentConfig::RechargeRewardContentConfig(RechargeRewardContentConfig const&) */

void __thiscall
RechargeRewardContentConfig::RechargeRewardContentConfig
          (RechargeRewardContentConfig *this,RechargeRewardContentConfig *param_1)

{
  undefined4 uVar1;
  RechargeRewardContentConfig RVar2;
  
  std::vector<RechargeReward,std::allocator<RechargeReward>>::vector
            ((vector<RechargeReward,std::allocator<RechargeReward>> *)this,(vector *)param_1);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  RVar2 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this[0x30] = RVar2;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* RechargeRewardContentConfig::TEMPNAMEPLACEHOLDERVALUE(RechargeRewardContentConfig const&) */

RechargeRewardContentConfig * __thiscall
RechargeRewardContentConfig::operator=
          (RechargeRewardContentConfig *this,RechargeRewardContentConfig *param_1)

{
  undefined4 uVar1;
  RechargeRewardContentConfig RVar2;
  
  std::vector<RechargeReward,std::allocator<RechargeReward>>::operator=
            ((vector<RechargeReward,std::allocator<RechargeReward>> *)this,(vector *)param_1);
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  RVar2 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this[0x30] = RVar2;
  *(undefined4 *)(this + 0x34) = uVar1;
  return this;
}


/* RechargeRewardContentConfig::RechargeRewardContentConfig() */

void __thiscall
RechargeRewardContentConfig::RechargeRewardContentConfig(RechargeRewardContentConfig *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  FUN_05476574(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  this[0x30] = (RechargeRewardContentConfig)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 6;
  return;
}


/* RechargeRewardContentConfig::RechargeRewardContentConfig(RechargeRewardContentConfig&&) */

void __thiscall
RechargeRewardContentConfig::RechargeRewardContentConfig
          (RechargeRewardContentConfig *this,RechargeRewardContentConfig *param_1)

{
  undefined4 uVar1;
  RechargeRewardContentConfig RVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  FUN_05476584(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  RVar2 = param_1[0x30];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this[0x30] = RVar2;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}

