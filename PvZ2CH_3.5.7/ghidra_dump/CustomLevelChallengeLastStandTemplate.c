// Class: CustomLevelChallengeLastStandTemplate


/* CustomLevelChallengeLastStandTemplate::CustomLevelChallengeLastStandTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelChallengeLastStandTemplate::CustomLevelChallengeLastStandTemplate
          (CustomLevelChallengeLastStandTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665eb40;
  return;
}


/* CustomLevelChallengeLastStandTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

undefined8
CustomLevelChallengeLastStandTemplate::GenerateTemplate
          (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,CustomLevelConfig *param_3)

{
  undefined4 uVar1;
  LastStandMinigameProperties *pLVar2;
  
  pLVar2 = CustomLevelCreator::AddModule<LastStandMinigameProperties>((CustomLevelCreator *)param_2)
  ;
  uVar1 = *(undefined4 *)(param_3 + 0xb8);
  *(undefined4 *)(pLVar2 + 0x78) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(pLVar2 + 0x7c) = uVar1;
  return 1;
}

