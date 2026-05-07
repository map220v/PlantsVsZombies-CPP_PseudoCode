// Class: RewardImageFactory


/* RewardImageFactory::GetImageForReward(AwardType, std::string const&, int, int) */

undefined8
RewardImageFactory::GetImageForReward
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  FUN_0385b5e0(param_3,param_4,param_5,param_6);
  return param_1;
}


/* RewardImageFactory::GetImageForReward(LevelOfTheDay_RewardItemType const&) */

void RewardImageFactory::GetImageForReward(LevelOfTheDay_RewardItemType *param_1)

{
  long in_x1;
  
  GetImageForReward(param_1,*(undefined4 *)(in_x1 + 0x10),in_x1 + 0x18,*(undefined4 *)(in_x1 + 0x28)
                    ,*(undefined4 *)(in_x1 + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardImageFactory::GetImageForReward(AwardType, int) */

void RewardImageFactory::GetImageForReward
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  FUN_0385b5e0(param_1,param_3,asStack_10,0,param_4);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

