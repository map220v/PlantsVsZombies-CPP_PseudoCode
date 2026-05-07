// Class: CustomLevelChallengeTemplate


/* CustomLevelChallengeTemplate::CustomLevelChallengeTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelChallengeTemplate::CustomLevelChallengeTemplate
          (CustomLevelChallengeTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665eb10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeTemplate::GetDefaultDescriptions(CustomLevelWorldParams const&) */

void CustomLevelChallengeTemplate::GetDefaultDescriptions(CustomLevelWorldParams *param_1)

{
  CustomChallenge *this;
  char cVar1;
  long in_x1;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (CustomChallenge *)(in_x1 + 0xa8);
  local_8 = ___stack_chk_guard;
  cVar1 = CustomChallenge::HasLastStand(this);
  if (cVar1 == '\0') {
    cVar1 = CustomChallenge::HasStatueMaze(this);
    if (cVar1 == '\0') {
      cVar1 = CustomChallenge::HasEvilDave(this);
      if (cVar1 == '\0') {
        cVar1 = CustomChallenge::HasTowerDefend(this);
        if (cVar1 == '\0') {
          cVar1 = CustomChallenge::HasSingleHanded(this);
          if (cVar1 == '\0') {
            cVar1 = CustomChallenge::HasVaseBreaker(this);
            if (cVar1 == '\0') {
              cVar1 = CustomChallenge::HasMolds(this);
              if (cVar1 == '\0') {
                std::string::string(asStack_18,"");
                std::string::string(asStack_10,"");
                std::vector<std::string,std::allocator<std::string>>::vector();
                goto LAB_035d261c;
              }
              std::string::string(asStack_18,"[STARCHALLENGE_MOLD_MINIGAME]");
              __s = "[STARCHALLENGE_MOLD_MINIGAME_NAME]";
            }
            else {
              std::string::string(asStack_18,"[STARCHALLENGE_VASEBREAKER]");
              __s = "[STARCHALLENGE_VASEBREAKER_NAME]";
            }
          }
          else {
            std::string::string(asStack_18,"[STARCHALLENGE_SINGLE]");
            __s = "[STARCHALLENGE_SINGLE_NAME]";
          }
        }
        else {
          std::string::string(asStack_18,"[STARCHALLENGE_THREEPIGS]");
          __s = "[STARCHALLENGE_THREEPIGS_NAME]";
        }
      }
      else {
        std::string::string(asStack_18,"[STARCHALLENGE_EVIL]");
        __s = "[STARCHALLENGE_EVIL_NAME]";
      }
    }
    else {
      std::string::string(asStack_18,"[STARCHALLENGE_MAZE_STATUE]");
      __s = "[STARCHALLENGE_MAZE_STATUE_NAME]";
    }
  }
  else {
    std::string::string(asStack_18,"[STARCHALLENGE_LASTSTAND_MINIGAME]");
    __s = "[STARCHALLENGE_LASTSTAND_MINIGAME_NAME]";
  }
  std::string::string(asStack_10,__s);
  std::vector<std::string,std::allocator<std::string>>::vector();
LAB_035d261c:
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams
   const&, CustomLevelConfig const*) */

void CustomLevelChallengeTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  char cVar1;
  StarChallengeModuleProperties *pSVar2;
  long lVar3;
  CustomLevelConfig *pCVar4;
  CustomLevelConfig *pCVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38 [3];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar4 = param_3 + 0xa8;
  pSVar2 = CustomLevelCreator::AddModule<StarChallengeModuleProperties>
                     ((CustomLevelCreator *)param_2);
  CustomLevelCreator::AddAliasedObject<StarChallengeBeatTheLevelProps>();
  GetDefaultDescriptions((CustomLevelWorldParams *)param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  cVar1 = FUN_0547419c(pCVar4);
  if (cVar1 != '\0') {
    pCVar4 = (CustomLevelConfig *)FUN_035cc048(local_38[0],0);
  }
  pCVar5 = param_3 + 0xb0;
  thunk_FUN_05475e00(lVar3 + 0x40,pCVar4);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  cVar1 = FUN_0547419c(pCVar5);
  if (cVar1 != '\0') {
    pCVar5 = (CustomLevelConfig *)FUN_035cc048(local_38[0],1);
  }
  thunk_FUN_05475e00(lVar3 + 0x48,pCVar5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
  std::
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  ::push_back((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
               *)avStack_20,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  std::
  vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
  ::push_back((vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
               *)(pSVar2 + 0x40),(vector *)avStack_20);
  pSVar2[0x70] = (StarChallengeModuleProperties)0x1;
  std::
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
             *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

