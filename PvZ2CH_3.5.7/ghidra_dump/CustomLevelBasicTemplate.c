// Class: CustomLevelBasicTemplate


/* CustomLevelBasicTemplate::CustomLevelBasicTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelBasicTemplate::CustomLevelBasicTemplate
          (CustomLevelBasicTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665e8a0;
  return;
}


/* CustomLevelBasicTemplate::needDefaultZombieWinCon(CustomLevelWorldParams const&) */

undefined8 __thiscall
CustomLevelBasicTemplate::needDefaultZombieWinCon
          (CustomLevelBasicTemplate *this,CustomLevelWorldParams *param_1)

{
  char cVar1;
  
  cVar1 = CustomChallenge::HasStatueMaze((CustomChallenge *)(param_1 + 0xa8));
  if ((cVar1 == '\0') &&
     (cVar1 = CustomChallenge::HasEvilDave((CustomChallenge *)(param_1 + 0xa8)), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}


/* CustomLevelBasicTemplate::needMowers(CustomLevelWorldParams const&) */

CustomLevelWorldParams __thiscall
CustomLevelBasicTemplate::needMowers(CustomLevelBasicTemplate *this,CustomLevelWorldParams *param_1)

{
  CustomLevelWorldParams CVar1;
  char cVar2;
  
  CVar1 = param_1[0x27b];
  cVar2 = CustomChallenge::HasStatueMaze((CustomChallenge *)(param_1 + 0xa8));
  if ((cVar2 == '\0') &&
     (cVar2 = CustomChallenge::HasEvilDave((CustomChallenge *)(param_1 + 0xa8)), cVar2 == '\0')) {
    return CVar1;
  }
  return (CustomLevelWorldParams)0x0;
}


/* CustomLevelBasicTemplate::needSunDropper(CustomLevelWorldParams const&) */

undefined8 __thiscall
CustomLevelBasicTemplate::needSunDropper
          (CustomLevelBasicTemplate *this,CustomLevelWorldParams *param_1)

{
  char cVar1;
  
  cVar1 = CustomChallenge::HasStatueMaze((CustomChallenge *)(param_1 + 0xa8));
  if (((cVar1 == '\0') &&
      (cVar1 = CustomChallenge::HasEvilDave((CustomChallenge *)(param_1 + 0xa8)), cVar1 == '\0')) &&
     (*(int *)(param_1 + 0x80) != 1)) {
    return 1;
  }
  return 0;
}


/* CustomLevelBasicTemplate::needStandardIntro(CustomLevelWorldParams const&) */

byte __thiscall
CustomLevelBasicTemplate::needStandardIntro
          (CustomLevelBasicTemplate *this,CustomLevelWorldParams *param_1)

{
  byte bVar1;
  
  bVar1 = CustomChallenge::HasLastStand((CustomChallenge *)(param_1 + 0xa8));
  return bVar1 ^ 1;
}


/* CustomLevelBasicTemplate::needDefaultModule(std::string const&, CustomLevelWorldParams const&) */

undefined8 __thiscall
CustomLevelBasicTemplate::needDefaultModule
          (CustomLevelBasicTemplate *this,string *param_1,CustomLevelWorldParams *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  bVar1 = std::operator==(param_1,"DefaultSunDropper");
  if (bVar1) {
    uVar3 = needSunDropper(this,param_2);
    return uVar3;
  }
  bVar1 = std::operator==(param_1,"StandardIntro");
  if (bVar1) {
    uVar3 = needStandardIntro(this,param_2);
    return uVar3;
  }
  bVar1 = std::operator==(param_1,"ZombiesDeadWinCon");
  if (bVar1) {
    uVar3 = needDefaultZombieWinCon(this,param_2);
    return uVar3;
  }
  bVar1 = std::operator==(param_1,"DefaultZombieWinCondition");
  if (!bVar1) {
    lVar2 = FUN_05474374(param_1,"Mowers",0);
    if (lVar2 != -1) {
      uVar3 = needMowers(this,param_2);
      return uVar3;
    }
    return 1;
  }
  uVar3 = needDefaultZombieWinCon(this,param_2);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelBasicTemplate::generateStageSpecificModules(CustomLevelCreator&, std::string const&,
   CustomLevelConfig const*) */

void CustomLevelBasicTemplate::generateStageSpecificModules
               (CustomLevelCreator *param_1,string *param_2,CustomLevelConfig *param_3)

{
  bool bVar1;
  int iVar2;
  PiratePlankProperties *pPVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==((string *)param_3,"PirateStage");
  if (bVar1) {
    pPVar3 = CustomLevelCreator::AddModule<PiratePlankProperties>((CustomLevelCreator *)param_2);
    local_c = 0;
    while (iVar2 = BoardConstants::NUMBER_OF_ROWS(), local_c < iVar2) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(pPVar3 + 0x40),&local_c);
      local_c = local_c + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelBasicTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams const&,
   CustomLevelConfig const*) */

void __thiscall
CustomLevelBasicTemplate::GenerateTemplate
          (CustomLevelBasicTemplate *this,CustomLevelCreator *param_1,
          CustomLevelWorldParams *param_2,CustomLevelConfig *param_3)

{
  CustomLevelEncourageModuleProperties CVar1;
  CustomLevelEncourageModuleProperties CVar2;
  char cVar3;
  bool bVar4;
  CustomLevelMgr *this_00;
  Sexy *this_01;
  Sexy *this_02;
  wchar_t *pwVar5;
  CustomLevelEncourageModuleProperties *pCVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  string *__n;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_28,param_2);
  this_00 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  std::string::string(asStack_10,"ValidWorlds");
  __n = asStack_28;
  cVar3 = CustomLevelMgr::IsValueValid(this_00,asStack_10,asStack_28);
  std::string::~string(asStack_10);
  nop();
  if (cVar3 == '\0') {
    std::string::append(asStack_28,"egypt",(size_t)__n);
  }
  this_01 = (Sexy *)CustomLevelConfig::GetDefaultModuleConfigByWorld(param_3,asStack_28);
  local_20 = FUN_035cddd0(*(undefined8 *)(this_01 + 0x10));
  local_18 = FUN_035cde20(*(undefined8 *)(this_01 + 0x18));
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar4) {
    this_02 = (Sexy *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    cVar3 = needDefaultModule(this,(string *)this_02,param_2);
    if (cVar3 != '\0') {
      Sexy::StringToWString(this_02,extraout_x1);
      pwVar5 = (wchar_t *)FUN_054766ec(asStack_10);
      CustomLevelCreator::AddModuleReference(param_1,pwVar5,L"LevelModules");
      FUN_05476c50(asStack_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  Sexy::StringToWString(this_01 + 8,(string *)L"[CARD_GAME_TUTORIAL_STEP_2]");
  pwVar5 = (wchar_t *)FUN_054766ec(asStack_10);
  CustomLevelCreator::SetLootModuleReference(param_1,pwVar5,L"LevelModules");
  FUN_05476c50(asStack_10);
  Sexy::StringToWString(this_01,extraout_x1_00);
  pwVar5 = (wchar_t *)FUN_054766ec(asStack_10);
  CustomLevelCreator::SetStageModuleReference(param_1,pwVar5,L"LevelModules");
  FUN_05476c50(asStack_10);
  generateStageSpecificModules
            ((CustomLevelCreator *)this,(string *)param_1,(CustomLevelConfig *)this_01);
  if (param_2[0x278] != (CustomLevelWorldParams)0x0) {
    pCVar6 = CustomLevelCreator::AddModule<CustomLevelEncourageModuleProperties>(param_1);
    CVar1 = *(CustomLevelEncourageModuleProperties *)(param_2 + 0x279);
    CVar2 = *(CustomLevelEncourageModuleProperties *)(param_2 + 0x27a);
    pCVar6[0x42] = *(CustomLevelEncourageModuleProperties *)(param_2 + 0x27b);
    pCVar6[0x40] = CVar1;
    pCVar6[0x41] = CVar2;
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

