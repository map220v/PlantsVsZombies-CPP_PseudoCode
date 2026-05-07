// Class: LotteryUI


/* LotteryUI::onLotteryDisabled() */

void LotteryUI::onLotteryDisabled(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::~LotteryUI() */

void __thiscall LotteryUI::~LotteryUI(LotteryUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06931358;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06931030;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 0x18))();
    *(undefined8 *)(this + 0x120) = 0;
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Lottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotteryUI::~LotteryUI() */

void __thiscall LotteryUI::~LotteryUI(LotteryUI *this)

{
  ~LotteryUI(this);
  AK::FreeHook(this);
  return;
}


/* LotteryUI::GetCols() */

int LotteryUI::GetCols(void)

{
  int iVar1;
  
  iVar1 = gPrizePool;
  if (gPrizePool < 0) {
    iVar1 = 0;
  }
  if (iVar1 < DAT_06b79548) {
    iVar1 = DAT_06b79548;
  }
  if (iVar1 < DAT_06b79570) {
    iVar1 = DAT_06b79570;
  }
  if (iVar1 < DAT_06b79598) {
    iVar1 = DAT_06b79598;
  }
  if (iVar1 < DAT_06b795c0) {
    iVar1 = DAT_06b795c0;
  }
  if (iVar1 < DAT_06b795e8) {
    iVar1 = DAT_06b795e8;
  }
  if (iVar1 < DAT_06b79610) {
    iVar1 = DAT_06b79610;
  }
  if (iVar1 < DAT_06b79638) {
    iVar1 = DAT_06b79638;
  }
  if (iVar1 < DAT_06b79660) {
    iVar1 = DAT_06b79660;
  }
  if (iVar1 < DAT_06b79688) {
    iVar1 = DAT_06b79688;
  }
  if (iVar1 < DAT_06b796b0) {
    iVar1 = DAT_06b796b0;
  }
  if (iVar1 < DAT_06b796d8) {
    iVar1 = DAT_06b796d8;
  }
  return iVar1 + 1;
}


/* LotteryUI::GetRows() */

int LotteryUI::GetRows(void)

{
  int iVar1;
  
  iVar1 = DAT_06b79524;
  if (DAT_06b79524 < 0) {
    iVar1 = 0;
  }
  if (iVar1 < DAT_06b7954c) {
    iVar1 = DAT_06b7954c;
  }
  if (iVar1 < DAT_06b79574) {
    iVar1 = DAT_06b79574;
  }
  if (iVar1 < DAT_06b7959c) {
    iVar1 = DAT_06b7959c;
  }
  if (iVar1 < DAT_06b795c4) {
    iVar1 = DAT_06b795c4;
  }
  if (iVar1 < DAT_06b795ec) {
    iVar1 = DAT_06b795ec;
  }
  if (iVar1 < DAT_06b79614) {
    iVar1 = DAT_06b79614;
  }
  if (iVar1 < DAT_06b7963c) {
    iVar1 = DAT_06b7963c;
  }
  if (iVar1 < DAT_06b79664) {
    iVar1 = DAT_06b79664;
  }
  if (iVar1 < DAT_06b7968c) {
    iVar1 = DAT_06b7968c;
  }
  if (iVar1 < DAT_06b796b4) {
    iVar1 = DAT_06b796b4;
  }
  if (iVar1 < DAT_06b796dc) {
    iVar1 = DAT_06b796dc;
  }
  return iVar1 + 1;
}


/* LotteryUI::getLotteryCardPosX(int) */

undefined4 __thiscall LotteryUI::getLotteryCardPosX(LotteryUI *this,int param_1)

{
  long lVar1;
  
  if (DAT_06b79538 == param_1) {
    lVar1 = 0;
  }
  else if (DAT_06b79560 == param_1) {
    lVar1 = 1;
  }
  else if (DAT_06b79588 == param_1) {
    lVar1 = 2;
  }
  else if (DAT_06b795b0 == param_1) {
    lVar1 = 3;
  }
  else if (DAT_06b795d8 == param_1) {
    lVar1 = 4;
  }
  else if (DAT_06b79600 == param_1) {
    lVar1 = 5;
  }
  else if (DAT_06b79628 == param_1) {
    lVar1 = 6;
  }
  else if (DAT_06b79650 == param_1) {
    lVar1 = 7;
  }
  else if (DAT_06b79678 == param_1) {
    lVar1 = 8;
  }
  else if (DAT_06b796a0 == param_1) {
    lVar1 = 9;
  }
  else if (DAT_06b796c8 == param_1) {
    lVar1 = 10;
  }
  else {
    if (DAT_06b796f0 != param_1) {
      return 0;
    }
    lVar1 = 0xb;
  }
  return (&gPrizePool)[lVar1 * 10];
}


/* LotteryUI::getLotteryCardPosY(int) */

undefined4 __thiscall LotteryUI::getLotteryCardPosY(LotteryUI *this,int param_1)

{
  long lVar1;
  
  if (DAT_06b79538 == param_1) {
    lVar1 = 0;
  }
  else if (DAT_06b79560 == param_1) {
    lVar1 = 1;
  }
  else if (DAT_06b79588 == param_1) {
    lVar1 = 2;
  }
  else if (DAT_06b795b0 == param_1) {
    lVar1 = 3;
  }
  else if (DAT_06b795d8 == param_1) {
    lVar1 = 4;
  }
  else if (DAT_06b79600 == param_1) {
    lVar1 = 5;
  }
  else if (DAT_06b79628 == param_1) {
    lVar1 = 6;
  }
  else if (DAT_06b79650 == param_1) {
    lVar1 = 7;
  }
  else if (DAT_06b79678 == param_1) {
    lVar1 = 8;
  }
  else if (DAT_06b796a0 == param_1) {
    lVar1 = 9;
  }
  else if (DAT_06b796c8 == param_1) {
    lVar1 = 10;
  }
  else {
    if (DAT_06b796f0 != param_1) {
      return 0;
    }
    lVar1 = 0xb;
  }
  return (&DAT_06b79524)[lVar1 * 10];
}


/* LotteryUI::getLotteryResult() */

undefined4 LotteryUI::getLotteryResult(void)

{
  int iVar1;
  time_t tVar2;
  long lVar3;
  
  tVar2 = time((time_t *)0x0);
  srand((uint)tVar2);
  iVar1 = Sexy::Rand(10000);
  if ((iVar1 < DAT_06b7953c) || (DAT_06b79540 <= iVar1)) {
    if ((iVar1 < DAT_06b79564) || (DAT_06b79568 <= iVar1)) {
      if ((iVar1 < DAT_06b7958c) || (DAT_06b79590 <= iVar1)) {
        if ((iVar1 < DAT_06b795b4) || (DAT_06b795b8 <= iVar1)) {
          if ((iVar1 < DAT_06b795dc) || (DAT_06b795e0 <= iVar1)) {
            if ((iVar1 < DAT_06b79604) || (DAT_06b79608 <= iVar1)) {
              if ((iVar1 < DAT_06b7962c) || (DAT_06b79630 <= iVar1)) {
                if ((iVar1 < DAT_06b79654) || (DAT_06b79658 <= iVar1)) {
                  if ((iVar1 < DAT_06b7967c) || (DAT_06b79680 <= iVar1)) {
                    if ((iVar1 < DAT_06b796a4) || (DAT_06b796a8 <= iVar1)) {
                      if ((iVar1 < DAT_06b796cc) || (DAT_06b796d0 <= iVar1)) {
                        if ((iVar1 < DAT_06b796f4) || (DAT_06b796f8 <= iVar1)) {
                          return 0xffffffff;
                        }
                        lVar3 = 0xb;
                      }
                      else {
                        lVar3 = 10;
                      }
                    }
                    else {
                      lVar3 = 9;
                    }
                  }
                  else {
                    lVar3 = 8;
                  }
                }
                else {
                  lVar3 = 7;
                }
              }
              else {
                lVar3 = 6;
              }
            }
            else {
              lVar3 = 5;
            }
          }
          else {
            lVar3 = 4;
          }
        }
        else {
          lVar3 = 3;
        }
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  return (&DAT_06b79538)[lVar3 * 10];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::doHintDialog() */

void __thiscall LotteryUI::doHintDialog(LotteryUI *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),0);
  this_00 = gLawnApp;
  iVar1 = FUN_04a2e2e4(400);
  iVar2 = FUN_04a2e2e4(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  TodStringTranslate(L"[LOTTERY_RESULT_DESC]");
  Sexy::StrFormat(L"[LOTTERY_RESULT_%d]",awStack_20,(ulong)(*(int *)(this + 0xf4) + 1));
  TodStringTranslate(awStack_20);
  std::operator+(awStack_28,awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  FUN_05478178(awStack_18,L"[LOTTERY_PRESENT]",awStack_20);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_18);
  FUN_05476c50(awStack_18);
  nop();
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_30);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_18,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_18);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(awStack_18,L"[MAINMENU_SAVE]",awStack_20);
  PVZ2UIDialog::AddButton(this_01,100,awStack_18,this + 0xd8,0);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::doTimesHintDialog() */

void __thiscall LotteryUI::doTimesHintDialog(LotteryUI *this)

{
  LawnApp *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  long lVar4;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar5;
  wchar_t *pwVar6;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_01);
  uVar1 = FUN_04a2e254(*(undefined4 *)(lVar4 + 0xa18));
  FUN_05476574(awStack_20);
  switch(uVar1) {
  case 1:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_1]";
    break;
  default:
    goto switchD_04a2eabc_caseD_2;
  case 5:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_2]";
    break;
  case 10:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_3]";
    break;
  case 0x14:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_4]";
    break;
  case 0x1e:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_5]";
    break;
  case 0x32:
    pwVar6 = L"[LOTTERY_TIMES_RESULT_6]";
  }
  TodStringTranslate(pwVar6);
  FUN_054766c8(awStack_20,awStack_18);
  FUN_05476c50(awStack_18);
  this_00 = gLawnApp;
  iVar2 = FUN_04a2e2e4(0x1c2);
  iVar3 = FUN_04a2e2e4(300);
  this_02 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_18,L"[LOTTERY_PRESENT]",auStack_28);
  PVZ2UIDialog::SetHeaderLabel(this_02,awStack_18);
  FUN_05476c50(awStack_18);
  nop();
  PVZ2UIDialog::SetFooterLabel(this_02,awStack_20);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_02,pPVar5,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_18,1);
  PVZ2UIDialog::SetFooterFont(this_02,pPVar5,(Color *)awStack_18);
  PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
  FUN_05478178(awStack_18,L"[MAINMENU_SAVE]",auStack_28);
  PVZ2UIDialog::AddButton(this_02,0x65,awStack_18,this + 0xd8,0);
  FUN_05476c50(awStack_18);
  nop();
switchD_04a2eabc_caseD_2:
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::processLotteryResult(int) */

void LotteryUI::processLotteryResult(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar4;
  int in_w1;
  long lVar5;
  string *in_x4;
  char *__s;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    uVar4 = 0;
    goto LAB_04a2ef30;
  }
  iVar2 = FUN_04a2e254(*(undefined4 *)(this_00 + 0xa18));
  iVar2 = iVar2 + 1;
  FUN_04a2e24c(this_00 + 0xa18,iVar2);
  iVar3 = FUN_04a2e260(*(undefined4 *)(this_00 + 0xa24));
  FUN_04a2e258(this_00 + 0xa24,iVar3 + 1);
  if (iVar2 == 1) {
    PlayerInfo::AddCoins(this_00,5000);
  }
  else if (iVar2 == 5) {
    std::string::string(asStack_10,"egypt");
    PlayerInfo::AddKeys(this_00,asStack_10,3);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"pirate");
    PlayerInfo::AddKeys(this_00,asStack_10,3);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"cowboy");
    PlayerInfo::AddKeys(this_00,asStack_10,3);
    std::string::~string(asStack_10);
    nop();
  }
  else if (iVar2 == 10) {
    PlayerInfo::AddCoins(this_00,20000);
  }
  else if (iVar2 == 0x14) {
    PlayerInfo::AddGems(this_00,0x32,true);
  }
  else if (iVar2 == 0x1e) {
    PlayerInfo::AddCoins(this_00,50000);
  }
  else if (iVar2 == 0x32) {
    PlayerInfo::AddGems(this_00,100,true);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  lVar5 = (long)in_w1;
  switch((&DAT_06b79530)[lVar5 * 10]) {
  case 0:
    PlayerInfo::AddGems(this_00,(&DAT_06b79534)[lVar5 * 10],true);
    break;
  case 1:
    PlayerInfo::AddCoins(this_00,(&DAT_06b79534)[lVar5 * 10]);
    break;
  case 2:
  case 5:
    __s = "peapod";
    goto LAB_04a2ed8c;
  case 3:
  case 6:
    __s = "coconutcannon";
    goto LAB_04a2ed8c;
  case 4:
  case 7:
    __s = "imitater";
LAB_04a2ed8c:
    std::string::string(asStack_10,__s);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 == '\0') {
      std::string::string(asStack_30,"iOS PvZ2 Plant Store");
      std::string::string(asStack_28,"Plant Pieces");
      std::string::string(asStack_20,"plant");
      std::string::string(asStack_18,__s);
      Magento::FindStoreProduct((Magento *)asStack_30,asStack_28,asStack_20,asStack_18,in_x4);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      std::string::~string(asStack_30);
      nop();
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_38);
      if (cVar1 == '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
        iVar2 = *(int *)(lVar5 + 0x90);
        std::string::string(asStack_10,__s);
        iVar3 = PlayerInfo::GetPlantPieceCount(this_00,asStack_10,false);
        std::string::~string(asStack_10);
        nop();
        if (iVar2 <= iVar3) goto LAB_04a2ef10;
        std::string::string(asStack_10,__s);
        PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_10,true);
        std::string::~string(asStack_10);
        nop();
      }
    }
    else {
LAB_04a2ef10:
      PlayerInfo::AddCoins(this_00,0x5dc);
    }
  }
  PlayerInfo::SAVE_PROFILE(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  uVar4 = 1;
LAB_04a2ef30:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::InitView() */

void __thiscall LotteryUI::InitView(LotteryUI *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  PVZ2UIButton *pPVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  long *plVar15;
  code *pcVar16;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar12;
  FUN_05476c50(awStack_78);
  nop();
  plVar15 = *(long **)(this + 0xe0);
  pcVar16 = *(code **)(*plVar15 + 0x198);
  uVar1 = FUN_04a2e2e4(0x1e);
  uVar2 = FUN_04a2e2e4(10);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794d0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794d0);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar16)(plVar15,uVar1,uVar2,uVar3,uVar4);
  pPVar12 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b794d0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b79850,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  iVar5 = FUN_04a2e2e4(0x262);
  iVar6 = FUN_04a2e2e4(0x46);
  iVar9 = *(int *)(this + 0x54);
  iVar7 = FUN_04a2e2e4(100);
  iVar8 = FUN_04a2e2e4(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar5) / 2,iVar6,iVar5,
             ((iVar9 - iVar6) - iVar7) + iVar8);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  iVar9 = FUN_04a2e2e4(0x262);
  iVar5 = FUN_04a2e2e4(100);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar9) / 2,*(int *)(this + 0x54) - iVar5,
             iVar9,iVar5);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar5 = FUN_04a2e2e4(0x208);
  iVar6 = FUN_04a2e2e4(100);
  iVar9 = *(int *)(this + 0x54);
  iVar7 = FUN_04a2e2e4(200);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar5) / 2,iVar6,iVar5,
             (iVar9 - iVar6) - iVar7);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = *(int *)(this + 0x150);
  iVar8 = GetCols();
  iVar10 = GetCols();
  iVar11 = FUN_04a2e2e4(0x14);
  iVar5 = *(int *)(this + 0x154);
  iVar10 = (int)((((float)iVar9 - (float)iVar6 * (float)iVar8) - (float)((iVar10 + -1) * iVar11)) *
                0.5);
  iVar9 = GetRows();
  iVar6 = GetRows();
  iVar8 = FUN_04a2e2e4(10);
  iVar9 = (int)((((float)iVar5 - (float)iVar7 * (float)iVar9) - (float)((iVar6 + -1) * iVar8)) * 0.5
               );
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 + *(int *)(this + 0x148),iVar9 + *(int *)(this + 0x14c),
             *(int *)(this + 0x150) + iVar10 * -2,*(int *)(this + 0x154) + iVar9 * -2);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  iVar6 = getLotteryCardPosX(this,*(int *)(this + 0xf0));
  iVar7 = getLotteryCardPosY(this,*(int *)(this + 0xf0));
  iVar9 = *(int *)(this + 0x158);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar10 = FUN_04a2e2e4(0x14);
  iVar11 = FUN_04a2e2e4(5);
  iVar5 = *(int *)(this + 0x15c);
  *(int *)(this + 0x110) = (iVar9 + (iVar8 + iVar10) * iVar6) - iVar11;
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar6 = FUN_04a2e2e4(10);
  iVar8 = FUN_04a2e2e4(7);
  *(int *)(this + 0x114) = (iVar5 + (iVar9 + iVar6) * iVar7) - iVar8;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79228);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79228);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = *(int *)(this + 0x150);
  iVar5 = *(int *)(this + 0x154);
  iVar6 = *(int *)(this + 0x148);
  iVar7 = *(int *)(this + 0x14c);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar12;
  FUN_05476c50(awStack_78);
  nop();
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),(int)((float)iVar6 + ((float)iVar9 - (float)iVar8) * 0.5),
             (int)((float)iVar7 + ((float)iVar5 - (float)iVar10) * 0.5),(int)(float)iVar8,
             (int)(float)iVar10);
  pPVar12 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b79228,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b79a00,1);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::LotteryUI(bool) */

void __thiscall LotteryUI::LotteryUI(LotteryUI *this,bool param_1)

{
  int iVar1;
  int iVar2;
  LawnApp *pLVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Effect_PopAnim *pEVar7;
  ResourceInfo *pRVar8;
  SalesProgressBar *this_00;
  StandaloneEffect *pSVar9;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06931030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06931358;
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 4;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  this[0x101] = (LotteryUI)0x0;
  this[0x100] = (LotteryUI)0x0;
  this[0x10c] = (LotteryUI)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  pLVar3 = gLawnApp;
  std::string::string(asStack_10,"UI_Lottery");
  LawnApp::LoadGroup(pLVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar3 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery");
  LawnApp::LoadGroup(pLVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  pEVar7 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x118) = pEVar7;
  std::string::string(asStack_10,"POPANIM_EFFECTS_LOTTERY_DRAGON");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x118),(PopAnim *)pRVar8,(RtClass *)0x0);
  pSVar9 = *(StandaloneEffect **)(this + 0x118);
  iVar4 = FUN_04a2e2e4(0xf);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79228);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar6 = FUN_04a2e2e4(0x14);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)(iVar4 + iVar2 / 2),(float)(iVar6 + (iVar1 - iVar5) / 2)
            );
  StandaloneEffect::SetScreenSpaceOrigin(pSVar9,(SexyVector2 *)asStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x118),true);
  pEVar7 = *(Effect_PopAnim **)(this + 0x118);
  std::string::string(asStack_10,"fireidle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar7,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pEVar7 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x120) = pEVar7;
  std::string::string(asStack_10,"POPANIM_EFFECTS_LOTTERY_BACKGROUND");
  GetPAMByName(asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x120),(PopAnim *)pRVar8,(RtClass *)0x0);
  pSVar9 = *(StandaloneEffect **)(this + 0x120);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)*(int *)(this + 0x110),(float)*(int *)(this + 0x114));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar9,(SexyVector2 *)asStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x120),false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::moveSelector() */

void __thiscall LotteryUI::moveSelector(LotteryUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  StandaloneEffect *this_02;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = *(int *)(this + 0xf0) + 1;
  if (0xb < iVar7) {
    iVar7 = *(int *)(this + 0xf0) + -0xb;
  }
  *(int *)(this + 0xf0) = iVar7;
  iVar2 = getLotteryCardPosX(this,iVar7);
  iVar3 = getLotteryCardPosY(this,*(int *)(this + 0xf0));
  iVar7 = *(int *)(this + 0x158);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_04a2e2e4(0x14);
  iVar6 = FUN_04a2e2e4(5);
  iVar1 = *(int *)(this + 0x15c);
  *(int *)(this + 0x110) = (iVar7 + (iVar4 + iVar5) * iVar2) - iVar6;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_04a2e2e4(10);
  iVar7 = FUN_04a2e2e4(7);
  iVar7 = (iVar1 + (iVar2 + iVar4) * iVar3) - iVar7;
  *(int *)(this + 0x114) = iVar7;
  this_02 = *(StandaloneEffect **)(this + 0x120);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)*(int *)(this + 0x110),(float)iVar7);
  StandaloneEffect::SetScreenSpaceOrigin(this_02,(SexyVector2 *)aFStack_10,900000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::DrawCard(Sexy::Graphics*) */

void __thiscall LotteryUI::DrawCard(LotteryUI *this,Graphics *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *this_00;
  Image *pIVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68[0] = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79278);
  local_68[1] = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79820);
  local_68[2] = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792b0);
  local_68[3] = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b793b0);
  local_48 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79300);
  local_40 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b798a0);
  local_38 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79360);
  local_30 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b798d0);
  local_28 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b793d8);
  local_20 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79360);
  local_18 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b798d0);
  local_10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b793d8);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(this + 0x158);
  iVar3 = *(int *)(this + 0x15c);
  iVar8 = FUN_04a2e2e4(0x14);
  iVar9 = FUN_04a2e2e4(10);
  StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x120),param_1);
  piVar14 = &gPrizePool;
  puVar15 = local_68;
  do {
    iVar4 = *piVar14;
    piVar1 = piVar14 + 1;
    piVar14 = piVar14 + 10;
    iVar4 = iVar2 + (iVar6 + iVar8) * iVar4;
    iVar5 = iVar3 + (iVar7 + iVar9) * *piVar1;
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b792d8);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar4,iVar5);
    pLVar12 = (LotteryResultProgressBar *)*puVar15;
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar11 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar12,iVar4 + (iVar6 - iVar10) / 2,iVar5 + (iVar7 - iVar11) / 2);
    puVar15 = puVar15 + 1;
  } while (piVar14 != (int *)&DAT_06b79700);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::DrawDecoration(Sexy::Graphics*) */

void __thiscall LotteryUI::DrawDecoration(LotteryUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a2e2e4(0x208);
  iVar2 = FUN_04a2e2e4(0x2d);
  iVar8 = *(int *)(this + 0x50);
  iVar3 = FUN_04a2e2e4(100);
  iVar4 = FUN_04a2e2e4(0x1e);
  iVar5 = FUN_04a2e2e4(0x32);
  iVar9 = *(int *)(this + 0x54);
  iVar6 = FUN_04a2e2e4(200);
  iVar7 = FUN_04a2e2e4(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(iVar8 - iVar1) / 2 - iVar2,iVar3 - iVar4,iVar1 + iVar5,
             ((iVar9 - iVar3) - iVar6) + iVar7);
  iVar8 = FUN_04a2e2e4(0x208);
  iVar1 = (*(int *)(this + 0x50) - iVar8) / 2;
  iVar8 = FUN_04a2e2e4(0xf);
  iVar8 = iVar1 - iVar8;
  iVar9 = FUN_04a2e2e4(100);
  iVar2 = FUN_04a2e2e4(0x14);
  if (iVar8 < local_18 + local_10) {
    do {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79700);
      Sexy::Graphics::DrawImage(param_1,pIVar10,iVar8,iVar9 - iVar2);
      iVar1 = FUN_04a2e2e4(0x14);
      iVar8 = iVar8 + iVar1;
      iVar3 = local_18 + local_10;
    } while (iVar8 < iVar3);
    iVar8 = FUN_04a2e2e4(0x208);
    iVar1 = (*(int *)(this + 0x50) - iVar8) / 2;
    iVar8 = FUN_04a2e2e4(0xf);
    iVar8 = iVar1 - iVar8;
    iVar2 = FUN_04a2e2e4(200);
    iVar9 = *(int *)(this + 0x54);
    if (iVar8 < iVar3) {
      do {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79700);
        Sexy::Graphics::DrawImage(param_1,pIVar10,iVar8,iVar9 - iVar2);
        iVar1 = FUN_04a2e2e4(0x14);
        iVar8 = iVar8 + iVar1;
      } while (iVar8 < local_18 + local_10);
      iVar8 = FUN_04a2e2e4(0x208);
      iVar1 = (*(int *)(this + 0x50) - iVar8) / 2;
      iVar9 = FUN_04a2e2e4(100);
    }
    else {
      iVar9 = FUN_04a2e2e4(100);
    }
  }
  iVar8 = FUN_04a2e2e4(0x19);
  if (iVar9 < local_14 + local_c) {
    do {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79700);
      Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1 - iVar8,iVar9);
      iVar2 = FUN_04a2e2e4(0x14);
      iVar9 = iVar9 + iVar2;
      iVar2 = local_14 + local_c;
    } while (iVar9 < iVar2);
    iVar1 = FUN_04a2e2e4(0x208);
    iVar3 = FUN_04a2e2e4(5);
    iVar9 = *(int *)(this + 0x50);
    iVar8 = FUN_04a2e2e4(100);
    if (iVar8 < iVar2) {
      do {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79700);
        Sexy::Graphics::DrawImage(param_1,pIVar10,iVar3 + (iVar1 + iVar9) / 2,iVar8);
        iVar2 = FUN_04a2e2e4(0x14);
        iVar8 = iVar8 + iVar2;
      } while (iVar8 < local_14 + local_c);
    }
  }
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a58);
  Sexy::Graphics::DrawImage(param_1,pIVar10,local_18,local_14);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a58);
  Sexy::Graphics::DrawImage(param_1,pIVar10,local_18,local_14 + local_c);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79780);
  Sexy::Graphics::DrawImage(param_1,pIVar10,local_18 + local_10,local_14);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79780);
  Sexy::Graphics::DrawImage(param_1,pIVar10,local_18 + local_10,local_14 + local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::DrawBottomPrize(Sexy::Graphics*) */

void __thiscall LotteryUI::DrawBottomPrize(LotteryUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  long lVar7;
  Image *pIVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a2e2e4(0xe1);
  iVar2 = FUN_04a2e2e4(0x20d);
  iVar3 = FUN_04a2e2e4(0x50);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = FUN_04a2e254(*(undefined4 *)(lVar7 + 0xa18));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79450);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
  if (iVar4 < 1) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 + iVar3,iVar2);
LAB_04a305d4:
    iVar1 = iVar1 + iVar3 * 2;
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b797a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
LAB_04a305f8:
    iVar6 = iVar1 + iVar3;
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b799d8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6,iVar2);
LAB_04a3061c:
    iVar1 = iVar6 + iVar3;
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79388);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
  }
  else {
    iVar6 = iVar1 + iVar3;
    Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79450);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
    iVar5 = FUN_04a2e2e4(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 + iVar1,iVar2 + iVar5);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6,iVar2);
    if (iVar4 < 5) goto LAB_04a305d4;
    iVar1 = iVar6 + iVar3;
    Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6,iVar2);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
    iVar5 = FUN_04a2e2e4(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 + iVar6,iVar2 + iVar5);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b797a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
    if (iVar4 < 10) goto LAB_04a305f8;
    iVar6 = iVar1 + iVar3;
    Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b797a8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
    iVar5 = FUN_04a2e2e4(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 + iVar1,iVar2 + iVar5);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b799d8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6,iVar2);
    if (iVar4 < 0x14) goto LAB_04a3061c;
    iVar1 = iVar6 + iVar3;
    Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b799d8);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6,iVar2);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
    iVar5 = FUN_04a2e2e4(0x14);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 + iVar6,iVar2 + iVar5);
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79388);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
    if (0x1d < iVar4) {
      iVar3 = iVar1 + iVar3;
      Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79388);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1,iVar2);
      Sexy::Graphics::SetColorizeImages(param_1,false);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
      iVar6 = FUN_04a2e2e4(0x14);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar6 + iVar1,iVar2 + iVar6);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a28);
      iVar1 = FUN_04a2e2e4(5);
      Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar2 - iVar1);
      if (0x31 < iVar4) {
        Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
        Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
        Sexy::Graphics::SetColorizeImages(param_1,true);
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a28);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar2);
        Sexy::Graphics::SetColorizeImages(param_1,false);
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79730);
        iVar1 = FUN_04a2e2e4(0x14);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 + iVar3,iVar2 + iVar1);
      }
      goto LAB_04a30670;
    }
  }
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79a28);
  iVar4 = FUN_04a2e2e4(5);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar1 + iVar3,iVar2 - iVar4);
LAB_04a30670:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::EnableToLottery() */

void LotteryUI::EnableToLottery(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  wchar16 *pwVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar6;
  ulong uVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  int iVar9;
  long local_18;
  Sexy *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pLVar8 = (LineBreakCategory *)&local_18;
  std::string::string((string *)&local_10,"EnableLottery");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)&local_10,pLVar8,in_x3,in_x4);
  std::string::~string((string *)&local_10);
  nop();
  if (cVar2 == '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      uVar1 = *(undefined4 *)(this_00 + 0xa20);
      *(undefined1 *)(in_x0 + 0x10c) = 0;
      iVar3 = FUN_04a2e278(uVar1);
      iVar4 = FUN_04a2e26c(*(undefined4 *)(this_00 + 0xa1c));
      local_18 = LawnApp::GetRealBeijingTime(gLawnApp);
      if ((local_18 < 1) || (lVar6 = LawnApp::BeijingTime(gLawnApp,&local_18), lVar6 == 0)) {
        *(undefined1 *)(in_x0 + 0x10c) = 1;
      }
      else {
        if ((iVar3 < *(int *)(lVar6 + 0x14)) || (iVar4 < *(int *)(lVar6 + 0x1c))) {
          FUN_04a2e270(this_00 + 0xa20);
          FUN_04a2e264(this_00 + 0xa1c,*(undefined4 *)(lVar6 + 0x1c));
          PlayerInfo::SAVE_PROFILE(this_00);
          local_10 = (Sexy *)LawnApp::GetRealBeijingTime(gLawnApp);
          if ((long)local_10 < 1) {
            uVar7 = Sexy::SexyTime(local_10);
            local_10 = (Sexy *)(uVar7 / 1000);
            lVar6 = LawnApp::BeijingTime(gLawnApp,(long *)&local_10);
            iVar3 = *(int *)(lVar6 + 0x10);
            iVar4 = *(int *)(lVar6 + 0xc);
            iVar9 = *(int *)(lVar6 + 0x14);
          }
          else {
            lVar6 = LawnApp::BeijingTime(gLawnApp,(long *)&local_10);
            iVar3 = *(int *)(lVar6 + 0x10);
            iVar4 = *(int *)(lVar6 + 0xc);
            iVar9 = *(int *)(lVar6 + 0x14);
          }
          FUN_04a2e258(this_00 + 0xa24,0);
          PlayerInfo::SAVE_PROFILE(this_00);
        }
        else {
          local_10 = (Sexy *)LawnApp::GetRealBeijingTime(gLawnApp);
          if ((long)local_10 < 1) {
            uVar7 = Sexy::SexyTime(local_10);
            local_10 = (Sexy *)(uVar7 / 1000);
            lVar6 = LawnApp::BeijingTime(gLawnApp,(long *)&local_10);
            iVar3 = *(int *)(lVar6 + 0x10);
            iVar4 = *(int *)(lVar6 + 0xc);
            iVar9 = *(int *)(lVar6 + 0x14);
          }
          else {
            lVar6 = LawnApp::BeijingTime(gLawnApp,(long *)&local_10);
            iVar3 = *(int *)(lVar6 + 0x10);
            iVar4 = *(int *)(lVar6 + 0xc);
            iVar9 = *(int *)(lVar6 + 0x14);
          }
        }
        if (((iVar9 == 0x71) && (iVar3 == 9)) && (iVar4 - 1U < 7)) {
          iVar3 = FUN_04a2e260(*(undefined4 *)(this_00 + 0xa24));
          cVar2 = iVar3 < 2;
        }
        else {
          cVar2 = PlayerInfo::IsUnlockRechargeNode(this_00,6);
          iVar3 = 2;
          if (cVar2 == '\0') {
            iVar3 = 1;
          }
          iVar4 = FUN_04a2e260(*(undefined4 *)(this_00 + 0xa24));
          cVar2 = iVar4 < iVar3;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::ButtonDepress(int) */

void __thiscall LotteryUI::ButtonDepress(LotteryUI *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  CrazyNPCManager *pCVar3;
  ResourceInfo *pRVar4;
  char *__s;
  code *pcVar5;
  Effect_PopAnim *pEVar6;
  float fVar7;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    if (this[0x100] == (LotteryUI)0x0) {
      if (*(char *)(*(long *)(this + 0xe8) + 0x6e) == '\0') {
        cVar1 = EnableToLottery();
        if (cVar1 == '\0') {
          if (this[0x10c] == (LotteryUI)0x0) {
            pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
            __s = "ON_LOTTERY";
          }
          else {
            pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
            __s = "SERVER_ERROR";
          }
          std::string::string(asStack_60,__s);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onLotteryDisabled);
          Sexy::Delegate0::Delegate0<LotteryUI,void(LotteryUI::*)()>(aDStack_38,asStack_50);
          std::string::string(asStack_58,"");
          CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
          std::string::~string(asStack_58);
          nop();
          std::string::~string(asStack_60);
          nop();
        }
        else {
          (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
          uVar2 = getLotteryResult();
          *(undefined4 *)(this + 0xf4) = uVar2;
          cVar1 = processLotteryResult((int)this);
          if (cVar1 != '\0') {
            this[0x100] = (LotteryUI)0x1;
            fVar7 = (float)PVZ_T();
            pcVar5 = *(code **)(**(long **)(this + 0xe8) + 0x188);
            *(float *)(this + 0x104) = fVar7 + 1.8;
            (*pcVar5)(*(long **)(this + 0xe8),1);
            pEVar6 = *(Effect_PopAnim **)(this + 0x118);
            std::string::string(asStack_50,"firedragon");
            Effect_PopAnim::PlaySingleAnimation(pEVar6,asStack_50,0);
            std::string::~string(asStack_50);
            nop();
            std::string::string(asStack_50,"POPANIM_EFFECTS_LOTTERY_BACKGROUND");
            GetPAMByName(asStack_50);
            std::string::~string(asStack_50);
            nop();
            pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_58);
            Effect_PopAnim::CreatePopAnimRig
                      (*(Effect_PopAnim **)(this + 0x120),(PopAnim *)pRVar4,(RtClass *)0x0);
            pEVar6 = *(Effect_PopAnim **)(this + 0x120);
            std::string::string(asStack_50,"fireround");
            Effect_PopAnim::PlaySingleAnimation(pEVar6,asStack_50,0);
            std::string::~string(asStack_50);
            nop();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
          }
        }
      }
    }
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      cVar1 = CrazyNPCManager::IsNarrationActive(pCVar3);
      if (cVar1 == '\0') {
        GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      }
    }
  }
  else if (param_1 == 100) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    doTimesHintDialog(this);
  }
  else if (param_1 == 0x65) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LotteryUI::ButtonDepress(int) */

void __thiscall LotteryUI::ButtonDepress(LotteryUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LotteryUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall LotteryUI::DrawAll(LotteryUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x118),param_2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b797d0);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b797d0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04a2e2e4(0x118);
  Sexy::Graphics::DrawImage(param_2,pIVar4,(iVar1 - iVar2) / 2,iVar3);
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::Update() */

void __thiscall LotteryUI::Update(LotteryUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  Effect_PopAnim *pEVar5;
  float fVar6;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x118));
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x120));
  fVar6 = (float)PVZ_T();
  if ((*(float *)(this + 0x104) <= fVar6) && (0.0 < *(float *)(this + 0x104))) {
    this[0x101] = (LotteryUI)0x1;
    std::string::string(asStack_10,"POPANIM_EFFECTS_LOTTERY_END");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x120),(PopAnim *)pRVar4,(RtClass *)0x0);
    pEVar5 = *(Effect_PopAnim **)(this + 0x120);
    std::string::string(asStack_10,"fireover");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar5,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (this[0x101] == (LotteryUI)0x0) {
    iVar2 = *(int *)(this + 0xf8);
  }
  else {
    iVar2 = *(int *)(this + 0xf8);
    if (iVar2 == -1) {
      iVar2 = Sexy::Rand(5);
      iVar2 = iVar2 + 0x14;
      *(int *)(this + 0xf8) = iVar2;
    }
  }
  if (iVar2 < 1) {
    iVar2 = *(int *)(this + 0xfc);
    if (iVar2 < 1) {
      if (iVar2 == 0) {
        this[0x100] = (LotteryUI)0x0;
        this[0x101] = (LotteryUI)0x0;
        *(undefined4 *)(this + 0xfc) = 0xfffffffe;
        *(undefined4 *)(this + 0xf8) = 0xffffffff;
        *(undefined4 *)(this + 0x104) = 0xbf800000;
        fVar6 = (float)PVZ_T();
        iVar2 = *(int *)(this + 0xfc);
        *(float *)(this + 0x108) = fVar6 + 1.2;
      }
    }
    else {
      iVar3 = iVar2 + -1;
      *(int *)(this + 0xfc) = iVar3;
      if (iVar3 < 0x5a) {
        iVar1 = (iVar3 / 0xf) * 0xf;
joined_r0x04a30f24:
        iVar2 = iVar3;
        if (iVar3 != iVar1) goto joined_r0x04a30e64;
LAB_04a30ee4:
        moveSelector(this);
        iVar3 = *(int *)(this + 0xfc);
      }
      else {
        if (iVar2 - 0x5cU < 0x4a) {
          iVar1 = (iVar3 / 0xd) * 0xd;
          goto joined_r0x04a30f24;
        }
        if (0x45 < iVar2 - 0xa6U) {
          if (iVar2 - 0xecU < 0x36) {
            iVar1 = (iVar3 / 9) * 9;
          }
          else if (iVar2 - 0x122U < 0x29) {
            iVar1 = (iVar3 / 7) * 7;
          }
          else if (iVar2 - 0x14cU < 0x1e) {
            iVar1 = (iVar3 / 5) * 5;
          }
          else {
            if (0x11 < iVar2 - 0x16aU) {
              if (0x17a < iVar3) goto LAB_04a30ee4;
              goto LAB_04a30ef0;
            }
            iVar1 = (iVar3 / 3) * 3;
          }
          goto joined_r0x04a30f24;
        }
        if (iVar3 == (iVar3 / 0xb) * 0xb) goto LAB_04a30ee4;
      }
LAB_04a30ef0:
      iVar2 = iVar3;
      if (iVar3 == 0xea) {
        *(undefined4 *)(this + 0xfc) = 0xe8;
        goto LAB_04a30e68;
      }
    }
  }
  else {
    *(int *)(this + 0xf8) = iVar2 + -1;
    moveSelector(this);
    if (*(int *)(this + 0xf8) < 1) {
      iVar3 = *(int *)(this + 0xf4) - *(int *)(this + 0xf0);
      iVar2 = iVar3 + 0xc;
      if (*(int *)(this + 0xf0) <= *(int *)(this + 0xf4)) {
        iVar2 = iVar3;
      }
      *(int *)(this + 0xfc) = iVar2 + 0x180;
      iVar2 = iVar2 + 0x180;
    }
    else {
      iVar2 = *(int *)(this + 0xfc);
    }
  }
joined_r0x04a30e64:
  if ((iVar2 == -2) && (fVar6 = (float)PVZ_T(), *(float *)(this + 0x108) <= fVar6)) {
    (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),0);
    doHintDialog(this);
    *(undefined4 *)(this + 0xfc) = 0xffffffff;
  }
LAB_04a30e68:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryUI::Draw(Sexy::Graphics*) */

void __thiscall LotteryUI::Draw(LotteryUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  ProfileMgr *this_00;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,aIStack_18);
  nop();
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79958);
  Draw3SliceImage(param_1,aIStack_18,uVar6);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x128));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79920);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79400);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79400);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_04a2e2e4(0x46);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79400);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_04a2e2e4(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar1 - iVar2) / 2,(iVar3 - iVar4) + iVar5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x148));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79980);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  DrawCard(this,param_1);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b799a8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b799a8);
  iVar3 = FUN_04a2e2e4(0x1c2);
  Sexy::Graphics::DrawImage(param_1,pIVar7,(iVar1 - iVar2) / 2,iVar3);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar10 = ProfileMgr::GetCurrentProfile(this_00);
  uVar11 = FUN_04a2e254(*(undefined4 *)(lVar10 + 0xa18));
  Sexy::StrFormat(L"%d",auStack_30,uVar11 & 0xffffffff);
  iVar2 = FUN_04a2e2e4(0x32);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_04a2e2e4(0x1c2);
  iVar4 = FUN_04a2e2e4(100);
  Sexy::Insets::Insets(aIStack_28,iVar2 + iVar1 / 2,iVar3,iVar4,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,0,0);
  DrawDecoration(this,param_1);
  DrawBottomPrize(this,param_1);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794f8);
  iVar1 = *(int *)(this + 0x54);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b794f8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,iVar1 - iVar2);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79428);
  iVar1 = *(int *)(this + 0x50);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79428);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = *(int *)(this + 0x54);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b79428);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 - iVar3,iVar2 - iVar4);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

