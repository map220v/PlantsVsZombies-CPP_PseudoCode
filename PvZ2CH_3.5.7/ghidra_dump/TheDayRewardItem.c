// Class: TheDayRewardItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TheDayRewardItem::GetDisplayText() const */

void TheDayRewardItem::GetDisplayText(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long in_x0;
  RenaissanceChallengeNewManager *this;
  Magento *pMVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  ulong uVar7;
  wchar_t *pwVar8;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  ulong uVar9;
  wstring awStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(in_x0 + 8);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    TodStringTranslate(L"[CONSUMPTION_COIN_REWARD]");
    TodReplaceNumberString(awStack_10,L"{COIN}",*(int *)(in_x0 + 0x10));
    FUN_05476c50(awStack_10);
    goto LAB_049bdf90;
  }
  if (iVar1 == 1) {
    TodStringTranslate(L"[CONSUMPTION_GEM_REWARD]");
    TodReplaceNumberString(awStack_10,L"{GEM}",*(int *)(in_x0 + 0x10));
    FUN_05476c50(awStack_10);
    goto LAB_049bdf90;
  }
  if (iVar1 == 5) {
    pwVar8 = L"[CONSUMPTION_COIN2018_REWARD]";
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 2) {
        FUN_05478178(awStack_38,&DAT_056f11a8,awStack_10);
        nop();
        pMVar4 = (Magento *)FUN_05475d88(asStack_30);
        Magento::GetPlantLevelUp(pMVar4);
        uVar7 = 0;
        do {
          uVar9 = uVar7;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          uVar7 = FUN_049bd8bc(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
          if (uVar7 <= uVar9) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            std::string::~string(asStack_30);
            FUN_05476c50(awStack_38);
            goto LAB_049bdf10;
          }
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_049bd8c8(*(undefined8 *)(lVar6 + 0x60),uVar9);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          cVar2 = std::operator==((string *)(lVar6 + 0x80),asStack_30);
          uVar7 = uVar9 + 1;
        } while (cVar2 == '\0');
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049bd8c8(*(undefined8 *)(lVar6 + 0x60),uVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString((Sexy *)awStack_20,extraout_x1_00);
        TodStringTranslate((wstring *)asStack_18);
        FUN_054766c8(awStack_38,awStack_10);
        FUN_05477b24();
        FUN_05476c50(awStack_10);
        FUN_05476c50((wstring *)asStack_18);
        std::string::~string((string *)awStack_20);
      }
      else {
        if (1 < iVar1 - 3U) {
LAB_049bdf10:
          std::string::string(asStack_18,"[PINATA_PARTY_COIN_REWARD_TEXT]");
          Sexy::UTF8StringToWString((Sexy *)asStack_18,extraout_x1);
          TodStringTranslate(awStack_10);
          FUN_05476c50(awStack_10);
          std::string::~string(asStack_18);
          nop();
          Sexy::CommaSeparate(100);
          TodReplaceString(awStack_20,L"{NUMBER}",awStack_10);
          FUN_05476c50(awStack_10);
          FUN_05476c50(awStack_20);
          goto LAB_049bdf90;
        }
        FUN_05478178(awStack_38,&DAT_056f11a8,awStack_10);
        nop();
        pMVar4 = (Magento *)FUN_05475d88(asStack_30);
        Magento::GetPlantLevelUp(pMVar4);
        uVar7 = 0;
        do {
          uVar9 = uVar7;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          uVar7 = FUN_049bd8bc(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
          if (uVar7 <= uVar9) goto LAB_049be238;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_049bd8c8(*(undefined8 *)(lVar6 + 0x60),uVar9);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
          cVar2 = std::operator==((string *)(lVar6 + 0x80),asStack_30);
          uVar7 = uVar9 + 1;
        } while (cVar2 == '\0');
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_049bd8c8(*(undefined8 *)(lVar6 + 0x60),uVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString((Sexy *)awStack_20,extraout_x1_01);
        TodStringTranslate((wstring *)asStack_18);
        FUN_054766c8(awStack_38,awStack_10);
        FUN_05476c50(awStack_10);
        FUN_05476c50((wstring *)asStack_18);
        std::string::~string((string *)awStack_20);
LAB_049be238:
        if (*(int *)(in_x0 + 8) == 3) {
          pwVar8 = L"[PIECE]";
LAB_049be3c0:
          TodStringTranslate(pwVar8);
          thunk_FUN_05477668(awStack_38,awStack_10);
          FUN_05476c50(awStack_10);
        }
        else if (*(int *)(in_x0 + 8) == 4) {
          pwVar8 = L"[AVATAR_PIECE]";
          goto LAB_049be3c0;
        }
        TodStringTranslate(L"[CONSUMPTION_COUNT_REWARD]");
        TodReplaceString((wstring *)asStack_18,L"{NAME}",awStack_38);
        FUN_054766c8(awStack_38,awStack_10);
        FUN_05476c50(awStack_10);
        FUN_05476c50((wstring *)asStack_18);
        TodReplaceNumberString(awStack_38,L"{COUNT}",*(int *)(in_x0 + 0x10));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      std::string::~string(asStack_30);
      FUN_05476c50(awStack_38);
      goto LAB_049bdf90;
    }
    this = (RenaissanceChallengeNewManager *)
           Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
    uVar3 = RenaissanceChallengeNewManager::GetResourceId(this);
    if (0 < (int)uVar3) {
      Sexy::StrFormat("[CONSUMPTION_STATUE2019_REWARD_%d]",(string *)awStack_20,(ulong)uVar3);
      Sexy::ToWString((string *)awStack_20);
      TodStringTranslate((wstring *)asStack_18);
      TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(in_x0 + 0x10));
      FUN_05476c50(awStack_10);
      FUN_05476c50((wstring *)asStack_18);
      std::string::~string((string *)awStack_20);
      goto LAB_049bdf90;
    }
    pwVar8 = L"[CONSUMPTION_STATUE2019_REWARD]";
  }
  TodStringTranslate(pwVar8);
  TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(in_x0 + 0x10));
  FUN_05476c50(awStack_10);
LAB_049bdf90:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

