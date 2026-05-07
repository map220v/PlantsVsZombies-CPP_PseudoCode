// Class: CustomLevelChallengeVaseBreakerTemplate


/* CustomLevelChallengeVaseBreakerTemplate::CustomLevelChallengeVaseBreakerTemplate(CustomLevelMgr*)
    */

void __thiscall
CustomLevelChallengeVaseBreakerTemplate::CustomLevelChallengeVaseBreakerTemplate
          (CustomLevelChallengeVaseBreakerTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665ec60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeVaseBreakerTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

void CustomLevelChallengeVaseBreakerTemplate::GenerateTemplate
               (CustomLevelCreator *param_1,CustomLevelWorldParams *param_2,
               CustomLevelConfig *param_3)

{
  string *psVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  VaseBreakerPresetProperties *pVVar5;
  undefined8 uVar6;
  int *piVar7;
  CustomLevelMgr *pCVar8;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  VaseContentProperties aVStack_28 [8];
  undefined1 auStack_20 [16];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVVar5 = CustomLevelCreator::AddModule<VaseBreakerPresetProperties>((CustomLevelCreator *)param_2)
  ;
  uVar2 = *(undefined4 *)(param_3 + 0x1c4);
  uVar6 = *(undefined8 *)(param_3 + 0x1c8);
  *(undefined4 *)(pVVar5 + 0x40) = *(undefined4 *)(param_3 + 0x1c0);
  *(undefined4 *)(pVVar5 + 0x44) = uVar2;
  *(undefined4 *)(pVVar5 + 0x60) = 0;
  *(undefined4 *)(pVVar5 + 100) = 0;
  local_40 = FUN_035cf3e0(uVar6);
  local_38 = FUN_035cf430(*(undefined8 *)(param_3 + 0x1d0));
  do {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar3) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    psVar1 = (string *)(piVar7 + 2);
    cVar4 = FUN_0547419c(psVar1);
    if (cVar4 == '\0') {
      VaseContentProperties::VaseContentProperties(aVStack_28);
      if (*piVar7 == 0) {
        pCVar8 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
        std::string::string(asStack_30,"ValidPlants");
        cVar4 = CustomLevelMgr::IsValueValid(pCVar8,asStack_30,psVar1);
        std::string::~string(asStack_30);
        nop();
        if (cVar4 != '\0') {
          thunk_FUN_05475e00(auStack_20,psVar1);
LAB_035d7940:
          local_10 = piVar7[4];
          std::vector<VaseContentProperties,std::allocator<VaseContentProperties>>::push_back
                    ((vector<VaseContentProperties,std::allocator<VaseContentProperties>> *)
                     (pVVar5 + 0x48),aVStack_28);
          Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aVStack_28);
          goto LAB_035d7844;
        }
      }
      else {
        pCVar8 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
        std::string::string(asStack_30,"ValidZombies");
        cVar4 = CustomLevelMgr::IsValueValid(pCVar8,asStack_30,psVar1);
        std::string::~string(asStack_30);
        nop();
        if (cVar4 != '\0') {
          thunk_FUN_05475e00(aVStack_28,psVar1);
          goto LAB_035d7940;
        }
      }
      Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aVStack_28);
    }
LAB_035d7844:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
  } while( true );
}

