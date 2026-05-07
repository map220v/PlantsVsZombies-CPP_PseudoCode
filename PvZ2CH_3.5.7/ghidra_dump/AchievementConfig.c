// Class: AchievementConfig


/* AchievementConfig::AchievementConfig() */

void __thiscall AchievementConfig::AchievementConfig(AchievementConfig *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (AchievementConfig)0x0;
  return;
}


/* AchievementConfig::AchievementConfig(AchievementConfig const&) */

void __thiscall
AchievementConfig::AchievementConfig(AchievementConfig *this,AchievementConfig *param_1)

{
  undefined4 uVar1;
  
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* AchievementConfig::TEMPNAMEPLACEHOLDERVALUE(AchievementConfig const&) */

AchievementConfig * __thiscall
AchievementConfig::operator=(AchievementConfig *this,AchievementConfig *param_1)

{
  AchievementConfig AVar1;
  
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  AVar1 = param_1[0x24];
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = AVar1;
  return this;
}


/* AchievementConfig::AchievementConfig(AchievementConfig&&) */

void __thiscall
AchievementConfig::AchievementConfig(AchievementConfig *this,AchievementConfig *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}

