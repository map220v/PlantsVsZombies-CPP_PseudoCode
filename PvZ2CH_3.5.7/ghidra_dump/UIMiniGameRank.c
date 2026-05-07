// Class: UIMiniGameRank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRank::GetLayoutName() */

void __thiscall UIMiniGameRank::GetLayoutName(UIMiniGameRank *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIMiniGameRank");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIMiniGameRank::~UIMiniGameRank() */

void __thiscall UIMiniGameRank::~UIMiniGameRank(UIMiniGameRank *this)

{
  *(undefined ***)this = &PTR_GetClass_066cd000;
  *(undefined **)(this + 0xd8) = &DAT_066cd350;
  UISingletonDialog<UIMiniGameRank>::~UISingletonDialog((UISingletonDialog<UIMiniGameRank> *)this);
  return;
}


/* UIMiniGameRank::~UIMiniGameRank() */

void __thiscall UIMiniGameRank::~UIMiniGameRank(UIMiniGameRank *this)

{
  ~UIMiniGameRank(this);
  AK::FreeHook(this);
  return;
}


/* UIMiniGameRank::UIMiniGameRank() */

void __thiscall UIMiniGameRank::UIMiniGameRank(UIMiniGameRank *this)

{
  UISingletonDialog<UIMiniGameRank>::UISingletonDialog((UISingletonDialog<UIMiniGameRank> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066cd000;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined **)(this + 0xd8) = &DAT_066cd350;
  *(undefined8 *)(this + 0x150) = 0;
  return;
}


/* UIMiniGameRank::ButtonDepress(int) */

void __thiscall UIMiniGameRank::ButtonDepress(UIMiniGameRank *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIMiniGameRank>::CloseDialog();
  return;
}


/* non-virtual thunk to UIMiniGameRank::ButtonDepress(int) */

void __thiscall UIMiniGameRank::ButtonDepress(UIMiniGameRank *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRank::OnCreate() */

void UIMiniGameRank::OnCreate(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  Dialog *in_x0;
  Widget *pWVar4;
  UIScrollControl *pUVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ChallengeRankItem *pCVar9;
  SurpriseInfo *pSVar10;
  LoadingWidget *pLVar11;
  UIWidgetText *pUVar12;
  long lVar13;
  long *plVar14;
  code *pcVar15;
  code *in_x3;
  ulong uVar16;
  string asStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  string asStack_100 [8];
  string asStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c0;
  uint local_bc;
  int local_98;
  uint local_94;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate(in_x0);
  std::string::string(asStack_f8,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget(in_x0,asStack_f8);
  std::string::~string(asStack_f8);
  nop();
  UI::Dialog::SetCenter(in_x0,pWVar4,false);
  *(int *)(pWVar4 + 0x4c) = *(int *)(pWVar4 + 0x4c) + -0x14;
  std::string::string(asStack_f8,"TabRank_Day_Scroll");
  pUVar5 = UI::Dialog::GetWidget<UIScrollControl>(in_x0,asStack_f8);
  *(UIScrollControl **)(in_x0 + 0x138) = pUVar5;
  std::string::~string(asStack_f8);
  nop();
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(in_x0 + 0x138),2);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(in_x0 + 0x138),false);
  lVar6 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(in_x0 + 0x138));
  *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(*(long *)(in_x0 + 0x138) + 0x50);
  Sexy::OutputDebugStrF((wchar_t *)"UIMiniGameRank::OnCreate");
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_0393a804(local_80);
  if ((cVar2 != '\0') || (cVar2 = '\0', local_70 != '\0')) {
    MiniGameRankItemConfig::MiniGameRankItemConfig((MiniGameRankItemConfig *)asStack_f8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_f8);
    if (cVar2 != '\0') {
      uVar7 = FUN_0393a858(local_f0,local_e8);
      Sexy::OutputDebugStrF
                ((wchar_t *)"UIMiniGameRank::OnCreate end data.m_vecRankItem.size() = %d",uVar7);
      uVar1 = *(undefined4 *)(*(long *)(in_x0 + 0x138) + 0x50);
      uVar16 = 0;
      while( true ) {
        uVar8 = FUN_0393a858(local_f0,local_e8);
        if (uVar8 <= uVar16) break;
        pCVar9 = ::operator_new(0x100);
        ChallengeRankItem::ChallengeRankItem(pCVar9);
        pSVar10 = (SurpriseInfo *)FUN_0393a888(local_f0,uVar16);
        SurpriseInfo::SurpriseInfo((SurpriseInfo *)&local_110,pSVar10);
        *(undefined4 *)(pCVar9 + 0x50) = uVar1;
        *(undefined4 *)(pCVar9 + 0xd4) = local_110;
        *(undefined4 *)(pCVar9 + 0xd8) = local_10c;
        Sexy::UTF8StringToSexyString(asStack_100);
        FUN_054766c8(pCVar9 + 0xe0,asStack_118);
        FUN_05476c50(asStack_118);
        plVar14 = *(long **)(in_x0 + 0x138);
        *(undefined4 *)(pCVar9 + 0xec) = local_104;
        lVar6 = *plVar14;
        *(undefined4 *)(pCVar9 + 0xe8) = local_108;
        pcVar15 = *(code **)(lVar6 + 0x60);
        (*pcVar15)(plVar14,pCVar9);
        pLVar11 = ::operator_new(0xe0);
        LoadingWidget::LoadingWidget(pLVar11);
        *(LoadingWidget **)(in_x0 + 0x148) = pLVar11;
        std::string::append((string *)(pLVar11 + 0xc0),"TabRank_DayLoading",(size_t)pcVar15);
        in_x3 = *(code **)(**(long **)(in_x0 + 0x138) + 0xc0);
        (*in_x3)(*(long **)(in_x0 + 0x138),pCVar9,*(undefined8 *)(in_x0 + 0x148));
        ChallengeRankItem::Refresh(pCVar9);
        GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                  ((GridItemCardGameZombieActionData *)&local_110);
        uVar16 = uVar16 + 1;
      }
      UIScrollControl::SetAutoArrange(*(UIScrollControl **)(in_x0 + 0x138),true);
      std::string::string((string *)&local_110,"TabRank_Mon_Scroll");
      pUVar5 = UI::Dialog::GetWidget<UIScrollControl>(in_x0,(string *)&local_110);
      *(UIScrollControl **)(in_x0 + 0x140) = pUVar5;
      std::string::~string((string *)&local_110);
      nop();
      Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(in_x0 + 0x140),2);
      UIScrollControl::SetAutoArrange(*(UIScrollControl **)(in_x0 + 0x140),false);
      lVar6 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(in_x0 + 0x140));
      lVar13 = *(long *)(in_x0 + 0x140);
      *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar13 + 0x50);
      uVar1 = *(undefined4 *)(lVar13 + 0x50);
      uVar16 = 0;
      while( true ) {
        iVar3 = (int)in_x3;
        uVar8 = FUN_0393a858(local_d8,local_d0);
        if (uVar8 <= uVar16) break;
        pCVar9 = ::operator_new(0x100);
        ChallengeRankItem::ChallengeRankItem(pCVar9);
        pSVar10 = (SurpriseInfo *)FUN_0393a888(local_d8,uVar16);
        SurpriseInfo::SurpriseInfo((SurpriseInfo *)&local_110,pSVar10);
        *(undefined4 *)(pCVar9 + 0x50) = uVar1;
        *(undefined4 *)(pCVar9 + 0xd4) = local_110;
        *(undefined4 *)(pCVar9 + 0xd8) = local_10c;
        Sexy::UTF8StringToSexyString(asStack_100);
        FUN_054766c8(pCVar9 + 0xe0,asStack_118);
        FUN_05476c50(asStack_118);
        plVar14 = *(long **)(in_x0 + 0x140);
        *(undefined4 *)(pCVar9 + 0xec) = local_104;
        lVar6 = *plVar14;
        *(undefined4 *)(pCVar9 + 0xe8) = local_108;
        pcVar15 = *(code **)(lVar6 + 0x60);
        (*pcVar15)(plVar14,pCVar9);
        pLVar11 = ::operator_new(0xe0);
        LoadingWidget::LoadingWidget(pLVar11);
        *(LoadingWidget **)(in_x0 + 0x150) = pLVar11;
        std::string::append((string *)(pLVar11 + 0xc0),"TabRank_DayLoading",(size_t)pcVar15);
        plVar14 = *(long **)(in_x0 + 0x150);
        in_x3 = *(code **)(*plVar14 + 0xc0);
        (*in_x3)(plVar14,pCVar9,plVar14);
        ChallengeRankItem::Refresh(pCVar9);
        GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                  ((GridItemCardGameZombieActionData *)&local_110);
        uVar16 = uVar16 + 1;
      }
      UIScrollControl::SetAutoArrange(*(UIScrollControl **)(in_x0 + 0x140),true);
      std::string::string((string *)&local_110,"TabRank_Day_Rank");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)&local_110);
      std::string::~string((string *)&local_110);
      nop();
      if (local_c0 < 0) {
        TodStringTranslate(L"[MINIGAME_RANK_NOORDER]");
        PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
        FUN_05476c50((SurpriseInfo *)&local_110);
      }
      else {
        std::string::string(asStack_118,"[BOSSCHALLENGE_RANK_USER_DESC]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_118,(string *)&DAT_0570d0f8,
                   (wchar_t *)(ulong)(local_c0 + 1),iVar3);
        PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
        FUN_05476c50((SurpriseInfo *)&local_110);
        std::string::~string(asStack_118);
        nop();
      }
      std::string::string((string *)&local_110,"TabRank_Day_Best");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)&local_110);
      std::string::~string((string *)&local_110);
      nop();
      std::string::string(asStack_118,"[BOSSCHALLENGE_RANK_DAY_DESC]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_118,(string *)&DAT_0570d0f8,(wchar_t *)(ulong)local_bc,
                 iVar3);
      PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
      iVar3 = (int)pUVar12;
      FUN_05476c50((SurpriseInfo *)&local_110);
      std::string::~string(asStack_118);
      nop();
      std::string::string((string *)&local_110,"TabRank_Mon_Rank");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)&local_110);
      std::string::~string((string *)&local_110);
      nop();
      if (local_98 < 0) {
        TodStringTranslate(L"[MINIGAME_RANK_NOORDER]");
        PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
        FUN_05476c50((SurpriseInfo *)&local_110);
      }
      else {
        std::string::string(asStack_118,"[BOSSCHALLENGE_RANK_USER_DESC]");
        StringHelper::ReplaceNumberString
                  ((StringHelper *)asStack_118,(string *)&DAT_0570d0f8,
                   (wchar_t *)(ulong)(local_98 + 1),iVar3);
        PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
        FUN_05476c50((SurpriseInfo *)&local_110);
        std::string::~string(asStack_118);
        nop();
      }
      std::string::string((string *)&local_110,"TabRank_Mon_Best");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>(in_x0,(string *)&local_110);
      std::string::~string((string *)&local_110);
      nop();
      std::string::string(asStack_118,"[BOSSCHALLENGE_RANK_MONTH_DESC]");
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_118,(string *)&DAT_0570d0f8,(wchar_t *)(ulong)local_94,
                 iVar3);
      PuzzleTip::SetTip(pUVar12,(SurpriseInfo *)&local_110);
      FUN_05476c50((SurpriseInfo *)&local_110);
      std::string::~string(asStack_118);
      nop();
    }
    MiniGameRankItemConfig::~MiniGameRankItemConfig((MiniGameRankItemConfig *)asStack_f8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

