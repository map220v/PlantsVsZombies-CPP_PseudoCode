// Class: ActiveSummery


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::GetLayoutName() */

void __thiscall ActiveSummery::GetLayoutName(ActiveSummery *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ActiveSummery");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::onPlantAnimStopped(std::string const&) */

void ActiveSummery::onPlantAnimStopped(string *param_1)

{
  long *plVar1;
  code *pcVar2;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(param_1 + 0x278) + 0x158))(*(long **)(param_1 + 0x278),0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x278) + 0x20);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  Sexy::Color::Color(aCStack_18,0);
  (*pcVar2)(plVar1,0,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::IsInBossBattle() */

void ActiveSummery::IsInBossBattle(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
    bVar1 = false;
  }
  else {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_10,uVar2);
    lVar3 = FUN_05474374(asStack_10,"vacation_boss",0);
    bVar1 = lVar3 != -1;
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::setButtonsDisabled(bool) */

void __thiscall ActiveSummery::setButtonsDisabled(ActiveSummery *this,bool param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  this[0x300] = (ActiveSummery)param_1;
  local_8 = ___stack_chk_guard;
  iVar4 = 1;
  do {
    iVar1 = iVar4 + 1;
    lVar2 = UITabControl::GetTab(*(UITabControl **)(this + 0x270),iVar4);
    plVar3 = (long *)FUN_04b91f60(*(undefined8 *)(lVar2 + 0xd8));
    (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
    iVar4 = iVar1;
  } while (iVar1 != 5);
  std::string::string(asStack_10,"Tab1_DrawFire_StartBtn");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Tab2_DrawFire_StartBtn");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::refreshRemainDays(ActiveItem const*, std::string const&) */

void __thiscall
ActiveSummery::refreshRemainDays(ActiveSummery *this,ActiveItem *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  UIWidgetText *pUVar4;
  int iVar5;
  long lVar6;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (ActiveItem *)0x0) goto LAB_04b938d8;
  lVar6 = ___stack_chk_guard;
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,param_2);
  iVar5 = (int)lVar6;
  cVar1 = FUN_04b91ed8(*(undefined4 *)(param_1 + 8));
  if (cVar1 == '\0') {
    if (param_1[0x18] != (ActiveItem)0x0) {
LAB_04b93858:
      iVar2 = ActiveItem::GetLeftTimes(param_1);
      std::string::string(asStack_18,"[ACTIVITY_SUMMERY_END_HOUR_TIPS]");
      iVar5 = (int)((ulong)((long)iVar2 * 0x91a2b3c5) >> 0x20);
      uVar3 = iVar2 / 0xe10;
      goto LAB_04b938b0;
    }
LAB_04b93950:
    std::string::string(asStack_18,"[ACTIVITY_CLOSED]");
    StringHelper::ToStringValue(asStack_18);
  }
  else {
    uVar3 = ActiveItem::GetLeftDays(param_1);
    if (param_1[0x18] == (ActiveItem)0x0) goto LAB_04b93950;
    if (uVar3 == 0) goto LAB_04b93858;
    std::string::string(asStack_18,"[ACTIVITY_SUMMERY_END_TIPS]");
LAB_04b938b0:
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar3,iVar5);
  }
  PuzzleTip::SetTip(pUVar4,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
LAB_04b938d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::showTip(std::wstring const&) */

void ActiveSummery::showTip(wstring *param_1)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(param_1);
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    UIMessageBox::SetBackgroundDarken(this,true,0.5);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::confirmBuy(UIMessageBox*, int) */

void __thiscall ActiveSummery::confirmBuy(ActiveSummery *this,UIMessageBox *param_1,int param_2)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) && (*(int **)(this + 0x318) != (int *)0x0)) {
    if (**(int **)(this + 0x318) == 0x296d) {
      __s = "fireCrystal";
    }
    else {
      __s = "iceCrystal";
    }
    std::string::string(asStack_10,__s);
    nop();
    UIBuyCrystal::create(asStack_10,true);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::onNetworkError(int, std::string const&) */

void __thiscall ActiveSummery::onNetworkError(ActiveSummery *this,int param_1,string *param_2)

{
  char cVar1;
  LotterySelectFrame *this_00;
  undefined1 auStack_cf8 [8];
  wstring awStack_cf0 [8];
  _PacketId a_Stack_ce8 [544];
  string asStack_ac8 [624];
  string asStack_858 [2128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_858);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_2,asStack_ac8);
    if (cVar1 != '\0') {
      FUN_05478178(awStack_cf0,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_cf8);
      showTip(awStack_cf0);
      FUN_05476c50(awStack_cf0);
      nop();
    }
  }
  else if (((*(long *)(this + 0x318) != 0) &&
           (this_00 = *(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90),
           this_00 != (LotterySelectFrame *)0x0)) &&
          (cVar1 = LotterySelectFrame::IsStop(this_00), cVar1 == '\0')) {
    FUN_05478178(awStack_cf0,L"[SUMMERY_LOTTERY_NET_ERROR]",auStack_cf8);
    showTip(awStack_cf0);
    FUN_05476c50(awStack_cf0);
    nop();
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90));
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::Update() */

void __thiscall ActiveSummery::Update(ActiveSummery *this)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  Color *pCVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  Color aCStack_18 [16];
  long local_8;
  
  plVar3 = *(long **)(this + 0x290);
  local_8 = ___stack_chk_guard;
  if (plVar3 != (long *)0x0) {
    if (*(float *)(this + 0x298) <= 0.0) {
      uVar9 = PVZ_T();
      lVar6 = **(long **)(this + 0x290);
      *(undefined4 *)(this + 0x298) = uVar9;
      puVar5 = (undefined8 *)(**(code **)(lVar6 + 0x178))(*(long **)(this + 0x290),0);
      plVar3 = *(long **)(this + 0x290);
      uVar1 = puVar5[1];
      lVar6 = *plVar3;
      *(undefined8 *)(this + 0x2a0) = *puVar5;
      *(undefined8 *)(this + 0x2a8) = uVar1;
      pcVar7 = *(code **)(lVar6 + 0x170);
      Sexy::Color::Color(aCStack_18,2);
      (*pcVar7)(plVar3,0,aCStack_18);
      *(undefined4 *)(this + 0x29c) = 6;
    }
    else if (*(int *)(this + 0x29c) < 1) {
      (**(code **)(*plVar3 + 0x170))(plVar3,0,this + 0x2a0);
      *(undefined8 *)(this + 0x290) = 0;
      *(undefined4 *)(this + 0x298) = 0xbf800000;
    }
    else {
      fVar8 = (float)PVZ_T();
      if (0.2 <= fVar8 - *(float *)(this + 0x298)) {
        uVar9 = PVZ_T();
        lVar6 = **(long **)(this + 0x290);
        *(undefined4 *)(this + 0x298) = uVar9;
        pCVar4 = (Color *)(**(code **)(lVar6 + 0x178))(*(long **)(this + 0x290),0);
        cVar2 = Sexy::operator==(pCVar4,(Color *)(this + 0x2a0));
        if (cVar2 == '\0') {
          (**(code **)(**(long **)(this + 0x290) + 0x170))
                    (*(long **)(this + 0x290),0,(Color *)(this + 0x2a0));
        }
        else {
          plVar3 = *(long **)(this + 0x290);
          pcVar7 = *(code **)(*plVar3 + 0x170);
          Sexy::Color::Color(aCStack_18,2);
          (*pcVar7)(plVar3,0,aCStack_18);
        }
        *(int *)(this + 0x29c) = *(int *)(this + 0x29c) + -1;
      }
    }
  }
  LuckyProgressUtil::Update((LuckyProgressUtil *)(this + 0x2c0));
  LuckyProgressUtil::Update((LuckyProgressUtil *)(this + 0x2e0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::setPlantPiece(int, int, int&) */

void __thiscall
ActiveSummery::setPlantPiece(ActiveSummery *this,int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = PlayerInfo::GetPlantPieceCount(this_01,asStack_10,false);
    if (param_2 < 1) {
      if (param_2 != 0) {
        PlayerInfo::SubPlantPieceCount(this_01,asStack_10,-param_2);
      }
    }
    else {
      PlayerInfo::AddPlantPieceCount((string *)this_01,(int)asStack_10,SUB41(param_2,0));
    }
    iVar3 = PlayerInfo::GetPlantPieceCount(this_01,asStack_10,false);
    *param_3 = iVar3 - iVar2;
    std::string::~string(asStack_10);
  }
  else {
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::addItem(int, int) */

void __thiscall ActiveSummery::addItem(ActiveSummery *this,int param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == 0x59db) {
    iVar1 = *(int *)(this + 0x2b4);
    *(int *)(this + 0x2b4) = param_2 + iVar1;
    PlayerInfo::SetMaterialNum(this_01,0x59db,param_2 + iVar1);
    goto LAB_04b945ac;
  }
  if (param_1 < 0x59dc) {
    if (param_1 == 0xbc0) {
      PlayerInfo::AddGems(this_01,param_2,true);
      goto LAB_04b945ac;
    }
    if (param_1 == 0xfad) {
      PlayerInfo::AddCoins(this_01,param_2);
      goto LAB_04b945ac;
    }
  }
  else if (((param_1 == 0x59ee) || (param_1 == 0x59f4)) || (param_1 == 0x59ea)) {
    iVar1 = PlayerInfo::GetMaterialNum(this_01,param_1);
    PlayerInfo::SetMaterialNum(this_01,param_1,iVar1 + param_2);
    goto LAB_04b945ac;
  }
  ProfileChangeItemAmount(param_1,param_2,false);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
LAB_04b945ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::showLackMaterial(std::wstring) */

void __thiscall ActiveSummery::showLackMaterial(ActiveSummery *this,wstring *param_2)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[SUMMERY_LOTTERY_LACK_MATERIAL]");
    TodReplaceString(awStack_60,L"{ITEM}",param_2);
    FUN_054766c8(awStack_60,asStack_50);
    FUN_05476c50(asStack_50);
    TodStringTranslate(L"[GET_CRYSTAL]");
    TodReplaceString(awStack_58,L"{ITEM}",param_2);
    FUN_054766c8(awStack_58,asStack_50);
    FUN_05476c50(asStack_50);
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,awStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,confirmBuy);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<ActiveSummery,void(ActiveSummery::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveSummery::ActiveSummery() */

void __thiscall ActiveSummery::ActiveSummery(ActiveSummery *this)

{
  UISingletonDialog<ActiveSummery>::UISingletonDialog((UISingletonDialog<ActiveSummery> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069738e0;
  *(undefined **)(this + 0xd8) = &DAT_06973c38;
  *(undefined **)(this + 0x138) = &DAT_06973c80;
  ActiveSummeryConfig::ActiveSummeryConfig((ActiveSummeryConfig *)(this + 0x140));
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x298) = 0xbf800000;
  Sexy::Color::Color((Color *)(this + 0x2a0));
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  LuckyProgressUtil::LuckyProgressUtil((LuckyProgressUtil *)(this + 0x2c0));
  LuckyProgressUtil::LuckyProgressUtil((LuckyProgressUtil *)(this + 0x2e0));
  this[0x300] = (ActiveSummery)0x0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::onSelectFrameStop(LotterySelectFrame*) */

void __thiscall ActiveSummery::onSelectFrameStop(ActiveSummery *this,LotterySelectFrame *param_1)

{
  int iVar1;
  char *pcVar2;
  LotteryPanelData *this_00;
  UISummeryLotteryItem *pUVar3;
  PVZ2UILotteryResult *this_01;
  string asStack_80 [8];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  Vec3 aVStack_68 [16];
  LotteryResultIconInfo aLStack_58 [8];
  SexyVector3 aSStack_50 [32];
  Vec3 aVStack_30 [8];
  SexyVector3 aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setButtonsDisabled(this,false);
  iVar1 = LotterySelectFrame::GetDestIndex(param_1);
  if (iVar1 != -1) {
    LotteryPanelData::updateLuckUI
              (*(LotteryPanelData **)(this + 0x318),
               *(int *)(*(LotteryPanelData **)(this + 0x318) + 0x40) != 0);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_FoodArm");
    addItem(this,*(int *)(*(long *)(this + 0x318) + 0x4c),*(int *)(*(long *)(this + 0x318) + 0x50));
    this_00 = *(LotteryPanelData **)(this + 0x318);
    if (*(int *)(this_00 + 0x54) == 0) {
      pUVar3 = (UISummeryLotteryItem *)
               LotteryPanelData::GetLotteryItem(this_00,*(int *)(this_00 + 0x4c));
    }
    else {
      addItem(this,*(int *)(this_00 + 0x54),*(int *)(this_00 + 0x58));
      pUVar3 = (UISummeryLotteryItem *)
               LotteryPanelData::GetLotteryItem
                         (*(LotteryPanelData **)(this + 0x318),
                          *(int *)(*(LotteryPanelData **)(this + 0x318) + 0x4c));
    }
    if (pUVar3 != (UISummeryLotteryItem *)0x0) {
      iVar1 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar1);
      std::operator==(asStack_80,"matchflower");
      LotteryResultIconInfo::LotteryResultIconInfo(aLStack_58);
      UIBossMedalLottery::getLotteryResultInfo
                ((UIBossMedalLottery *)this,pUVar3,*(int *)(*(long *)(this + 0x318) + 0x50),
                 aLStack_58);
      (**(code **)(*(long *)pUVar3 + 0xd0))(&local_78,pUVar3);
      iVar1 = FUN_04b9259c(0);
      EATextSquish::Vec3::Vec3(aVStack_30,(float)local_78,(float)local_74,(float)iVar1);
      Sexy::SexyVector3::operator=(aSStack_50,(SexyVector3 *)aVStack_30);
      this_01 = (PVZ2UILotteryResult *)LawnApp::ShowLotteryResultUI(gLawnApp);
      PVZ2UILotteryResult::SetLotteryInfo(this_01,0,aLStack_58);
      if (*(int *)(*(long *)(this + 0x318) + 0x54) != 0) {
        iVar1 = PlantNameMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar1);
        FUN_05474278(asStack_80,aVStack_30);
        std::string::~string((string *)aVStack_30);
        std::operator==(asStack_80,"matchflower");
        pUVar3 = ::operator_new(0x358);
        UISummeryLotteryItem::UISummeryLotteryItem
                  (pUVar3,*(int *)(*(long *)(this + 0x318) + 0x54),
                   *(int *)(*(long *)(this + 0x318) + 0x58));
        LotteryResultIconInfo::LotteryResultIconInfo((LotteryResultIconInfo *)aVStack_30);
        UIBossMedalLottery::getLotteryResultInfo
                  ((UIBossMedalLottery *)this,pUVar3,*(int *)(*(long *)(this + 0x318) + 0x58),
                   (LotteryResultIconInfo *)aVStack_30);
        (**(code **)(*(long *)pUVar3 + 0x18))(pUVar3);
        (**(code **)(**(long **)(*(long *)(this + 0x318) + 0x60) + 0xd0))
                  (&local_70,*(long **)(*(long *)(this + 0x318) + 0x60));
        iVar1 = FUN_04b9259c(0);
        EATextSquish::Vec3::Vec3(aVStack_68,(float)local_70,(float)local_6c,(float)iVar1);
        Sexy::SexyVector3::operator=(aSStack_28,(SexyVector3 *)aVStack_68);
        PVZ2UILotteryResult::SetLotteryInfo(this_01,1,aVStack_30);
        LotteryResultIconInfo::~LotteryResultIconInfo((LotteryResultIconInfo *)aVStack_30);
      }
      nop();
      PVZ2UILotteryResult::InitViews
                (this_01,*(int *)(*(long *)(this + 0x270) + 0x48),
                 *(int *)(*(long *)(this + 0x270) + 0x50));
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Lottery_Normal");
      LotteryResultIconInfo::~LotteryResultIconInfo(aLStack_58);
      std::string::~string(asStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::onNotifySummeryMaterialBuy(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*,
   S2C_PlayerInfo const*) */

void __thiscall
ActiveSummery::onNotifySummeryMaterialBuy
          (ActiveSummery *this,MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,
          S2C_PlayerInfo *param_3)

{
  LotteryPanelData *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  NameMapperBase *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  vector *pvVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  LogGameItemData aLStack_30 [12];
  undefined4 local_24;
  wstring awStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MsgResultInfo *)0x0) {
    if (*(int *)param_1 == 0) {
      if (param_2 != (S2C_ICloud_GetConsumeGemInfo *)0x0) {
        this_01 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(this_01,*(int *)(param_2 + 0x6c));
        if (cVar2 != '\0') {
          this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
          iVar1 = *(int *)(param_2 + 0x88);
          iVar3 = PlayerInfo::GetMaterialNum(this_03,*(int *)(param_2 + 0x84));
          PlayerInfo::SetMaterialNum(this_03,*(int *)(param_2 + 0x84),*(int *)(param_2 + 0x88));
          this_00 = *(LotteryPanelData **)(this + 0x310);
          if (*(int *)(param_2 + 0x84) == 0x59d9) {
            this_00 = *(LotteryPanelData **)(this + 0x308);
          }
          *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(param_2 + 0x88);
          LotteryPanelData::updateMaterialUI(this_00);
          FUN_05478178(awStack_20,L"[PURCHASE_DIALOG_CONFIRMED_HEADER]",aLStack_30);
          showTip(awStack_20);
          FUN_05476c50(awStack_20);
          nop();
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_20);
          LogGameItemData::LogGameItemData(aLStack_30,*(int *)(param_2 + 0x84),iVar1 - iVar3);
          std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
                    ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)awStack_20,
                     aLStack_30);
          if (param_3 == (S2C_PlayerInfo *)0x0) {
            LogGameItemData::LogGameItemData(aLStack_30,0xbc0,0);
            local_24 = 0;
          }
          else {
            LogGameItemData::LogGameItemData(aLStack_30,0xbc0,*(int *)(param_3 + 0x34));
            local_24 = *(undefined4 *)(param_3 + 0x40);
          }
          std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
                    ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)awStack_20,
                     aLStack_30);
          pvVar4 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
          MetricsCollector::GetGameItemChangedLog(pvVar4);
          std::string::string(asStack_40,"Store");
          std::string::string(asStack_38,"Buy_Crystal");
          BehaviorLog::itemPurchase(asStack_40,asStack_38,asStack_48);
          std::string::~string(asStack_38);
          nop();
          std::string::~string(asStack_40);
          nop();
          std::string::~string(asStack_48);
          std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
                    ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)awStack_20);
        }
      }
    }
    else {
      FUN_05478178(awStack_20,L"[DANGERROOM_BUYLIFE_FAILED_TITLE]",aLStack_30);
      showTip(awStack_20);
      FUN_05476c50(awStack_20);
      nop();
      param_1[4] = (MsgResultInfo)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::RequestDatas() */

void ActiveSummery::RequestDatas(void)

{
  wchar_t *pwVar1;
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pwVar1 = local_30 + 1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⥬';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⥭';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⥮';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⥯';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,pwVar1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveSummery::~ActiveSummery() */

void __thiscall ActiveSummery::~ActiveSummery(ActiveSummery *this)

{
  LotteryPanelData *pLVar1;
  
  *(undefined **)(this + 0x138) = &DAT_06973c80;
  *(undefined ***)this = &PTR_GetClass_069738e0;
  *(undefined **)(this + 0xd8) = &DAT_06973c38;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = *(LotteryPanelData **)(this + 0x308);
  if (pLVar1 != (LotteryPanelData *)0x0) {
    LotteryPanelData::~LotteryPanelData(pLVar1);
    AK::FreeHook(pLVar1);
  }
  pLVar1 = *(LotteryPanelData **)(this + 0x310);
  if (pLVar1 != (LotteryPanelData *)0x0) {
    LotteryPanelData::~LotteryPanelData(pLVar1);
    AK::FreeHook(pLVar1);
  }
  ActiveSummeryConfig::~ActiveSummeryConfig((ActiveSummeryConfig *)(this + 0x140));
  UISingletonDialog<ActiveSummery>::~UISingletonDialog((UISingletonDialog<ActiveSummery> *)this);
  return;
}


/* ActiveSummery::~ActiveSummery() */

void __thiscall ActiveSummery::~ActiveSummery(ActiveSummery *this)

{
  ~ActiveSummery(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::refreshTabPlantComposit() */

void __thiscall ActiveSummery::refreshTabPlantComposit(ActiveSummery *this)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIButton *pPVar5;
  PVZ2UIButton *pPVar6;
  char *pcVar7;
  long *plVar8;
  uint uVar9;
  undefined1 auStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  FUN_05476574(auStack_a0);
  uVar4 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(this + 400),false);
  Sexy::StrFormat(L"(%d/%d)",asStack_90,(ulong)uVar4,(ulong)*(uint *)(this + 0x1a0));
  FUN_054766c8(auStack_a0,asStack_90);
  FUN_05476c50(asStack_90);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x280),auStack_a0);
  Sexy::StrFormat(L"(%d/%d)",asStack_90,(ulong)*(uint *)(this + 0x2b4),
                  (ulong)*(uint *)(this + 0x2b8));
  FUN_054766c8(auStack_a0,asStack_90);
  FUN_05476c50(asStack_90);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x288),auStack_a0);
  bVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(this + 400));
  uVar9 = (uint)bVar2;
  std::string::string(asStack_90,"Tab3_Btn_Up1");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_90,"Tab3_Btn_Up10");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  std::string::string(asStack_98,"[ACTIVITY_SUMMERY_PLANT_BTN]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_98,(string *)L"{NUMBER}",(wchar_t *)0x1,uVar9);
  FUN_054766c8(pPVar5 + 0xd8,asStack_90);
  FUN_05476c50(asStack_90);
  std::string::~string(asStack_98);
  nop();
  std::string::string(asStack_98,"[ACTIVITY_SUMMERY_PLANT_BTN]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_98,(string *)L"{NUMBER}",(wchar_t *)0xa,uVar9);
  FUN_054766c8(pPVar6 + 0xd8,asStack_90);
  FUN_05476c50(asStack_90);
  std::string::~string(asStack_98);
  nop();
  if (bVar2 == 0) {
    FUN_04b91f58(pPVar5 + 0x2c8,1);
    FUN_04b91f58(pPVar6 + 0x2c8,1);
    goto LAB_04b98c00;
  }
  if (((local_70 == '\0') || ((int)uVar4 < *(int *)(this + 0x1a0))) ||
     (*(int *)(this + 0x2b4) < *(int *)(this + 0x2b8))) {
    FUN_04b91f58(pPVar5 + 0x2c8,1);
    if ((local_70 == '\0') || ((int)uVar4 < *(int *)(this + 0x1a0) * 10)) {
      FUN_04b91f58(pPVar6 + 0x2c8,1);
      goto LAB_04b98c00;
    }
    bVar1 = false;
    if (*(int *)(this + 0x2b8) * 10 <= *(int *)(this + 0x2b4)) {
      FUN_04b91f58(pPVar6 + 0x2c8,0);
      goto LAB_04b98c00;
    }
LAB_04b98d10:
    FUN_04b91f58(pPVar6 + 0x2c8);
    if (!bVar1) goto LAB_04b98c00;
  }
  else {
    FUN_04b91f58(pPVar5 + 0x2c8,0);
    if ((local_70 == '\0') || ((int)uVar4 < *(int *)(this + 0x1a0) * 10)) {
      FUN_04b91f58(pPVar6 + 0x2c8,1);
    }
    else {
      bVar1 = true;
      if (*(int *)(this + 0x2b4) < *(int *)(this + 0x2b8) * 10) goto LAB_04b98d10;
      FUN_04b91f58(pPVar6 + 0x2c8,0);
    }
  }
  pcVar7 = (char *)FUN_0547429c(&DAT_06b88d60);
  Sexy::StrFormat(pcVar7,asStack_90,4);
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_90);
  (**(code **)(*plVar8 + 0x158))(plVar8,1);
  std::string::~string(asStack_90);
LAB_04b98c00:
  std::string::string(asStack_90,"Tab3_EndTips");
  refreshRemainDays(this,aAStack_88,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476c50(auStack_a0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveSummery::TabSelectionChanged(int) */

void __thiscall ActiveSummery::TabSelectionChanged(ActiveSummery *this,int param_1)

{
  if (param_1 == 3) {
    *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0x310);
    return;
  }
  if (param_1 != 4) {
    if (param_1 != 2) {
      *(undefined8 *)(this + 0x318) = 0;
      return;
    }
    *(undefined8 *)(this + 0x318) = *(undefined8 *)(this + 0x308);
    return;
  }
  refreshTabPlantComposit(this);
  return;
}


/* non-virtual thunk to ActiveSummery::TabSelectionChanged(int) */

void __thiscall ActiveSummery::TabSelectionChanged(ActiveSummery *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::initTabPlantComposit() */

void __thiscall ActiveSummery::initTabPlantComposit(ActiveSummery *this)

{
  int iVar1;
  UIWidgetAnim *pUVar2;
  UIWidgetText *pUVar3;
  string asStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_98,"UIAnim_4");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_98);
  *(UIWidgetAnim **)(this + 0x278) = pUVar2;
  std::string::~string(asStack_98);
  nop();
  (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),0);
  std::string::string(asStack_98,"UIText_3");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_98);
  *(UIWidgetText **)(this + 0x280) = pUVar3;
  std::string::~string(asStack_98);
  nop();
  std::string::string(asStack_98,"UIText_6");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_98);
  *(UIWidgetText **)(this + 0x288) = pUVar3;
  std::string::~string(asStack_98);
  nop();
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  SummerPlantCompositData::SummerPlantCompositData((SummerPlantCompositData *)asStack_98);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_98);
  *(undefined4 *)(this + 0x2b4) = local_90;
  *(undefined4 *)(this + 0x2b8) = local_8c;
  refreshTabPlantComposit(this);
  SummerPlantCompositData::~SummerPlantCompositData((SummerPlantCompositData *)asStack_98);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::IsOpened() */

void ActiveSummery::IsOpened(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  string asStack_210 [8];
  ActiveItem aAStack_208 [24];
  char local_1f0;
  ActiveItem aAStack_188 [24];
  char local_170;
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_210,"egypt3");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = ProfileUtils::HasCompletedLevel(asStack_210,false,pPVar3);
  std::string::~string(asStack_210);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_1f0 == '\0') {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    if (local_170 == '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      if (local_f0 == '\0') {
        iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar2);
        bVar1 = bVar1 & local_70;
        ActiveItem::~ActiveItem(aAStack_88);
      }
      ActiveItem::~ActiveItem(aAStack_108);
    }
    ActiveItem::~ActiveItem(aAStack_188);
  }
  ActiveItem::~ActiveItem(aAStack_208);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::checkPlantComposit(int) */

void __thiscall ActiveSummery::checkPlantComposit(ActiveSummery *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar3;
  char *__s;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 == '\0') {
    __s = "Tab3_EndTips";
    cVar1 = '\0';
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(this + 400));
    if (cVar1 != '\0') {
      iVar2 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(this + 400),false);
      if (iVar2 < param_1 * *(int *)(this + 0x1a0)) {
        cVar1 = '\0';
        *(undefined8 *)(this + 0x290) = *(undefined8 *)(this + 0x280);
      }
      else if (*(int *)(this + 0x2b4) < param_1 * *(int *)(this + 0x2b8)) {
        cVar1 = '\0';
        *(undefined8 *)(this + 0x290) = *(undefined8 *)(this + 0x288);
      }
      goto LAB_04b99158;
    }
    __s = "Tab3_Desc";
  }
  std::string::string(asStack_90,__s);
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  *(UIWidgetText **)(this + 0x290) = pUVar3;
  std::string::~string(asStack_90);
  nop();
LAB_04b99158:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::ButtonDepress(int) */

void __thiscall ActiveSummery::ButtonDepress(ActiveSummery *this,int param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  WorldMap *this_00;
  WorldMapActionManager *this_01;
  NetworkMgr *pNVar4;
  INetworkMsgProcess *pIVar5;
  char *__s;
  LotteryPanelData *this_02;
  wchar_t *pwVar6;
  ActiveSummery *pAVar7;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x300] != (ActiveSummery)0x0) goto switchD_04b99230_default;
  *(int *)(this + 0x2b0) = param_1;
  switch(param_1) {
  case 0:
    UISingletonDialog<ActiveSummery>::CloseDialog();
    break;
  case 1:
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 == '\0') {
LAB_04b9943c:
      pwVar6 = L"[ACTIVITY_SUMMERY_LEVEL_ERROR_DESC]";
      goto LAB_04b99450;
    }
    FUN_04b92200(gGameStateMgr + 0x1eb1);
    pAVar7 = this + 0x150;
    goto LAB_04b993e0;
  case 2:
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 == '\0') goto LAB_04b9943c;
    FUN_04b92200(gGameStateMgr + 0x1eb1);
    pAVar7 = this + 0x158;
LAB_04b993e0:
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b88ee8,pAVar7,0xffffffff,1,1,0);
    UISingletonDialog<ActiveSummery>::CloseDialog();
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    if (this_00 != (WorldMap *)0x0) {
      this_01 = (WorldMapActionManager *)WorldMap::GetActionsMgr(this_00);
      WorldMapActionManager::StopActions(this_01);
    }
    break;
  case 3:
  case 4:
    if (*(int *)(*(long *)(this + 0x318) + 0x38) < *(int *)(this + 0x1a8)) {
      FUN_05477b24(asStack_10,*(long *)(this + 0x318) + 0x18);
      showLackMaterial(this,asStack_10);
      FUN_05476c50(asStack_10);
      break;
    }
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 != '\0') {
      this_02 = *(LotteryPanelData **)(this + 0x318);
      *(int *)(this_02 + 0x38) = *(int *)(this_02 + 0x38) - *(int *)(this + 0x1a8);
      LotteryPanelData::updateMaterialUI(this_02);
      lVar3 = *(long *)(this + 0x318);
      iVar1 = *(int *)(this + 0x1a8);
      *(undefined4 *)(lVar3 + 0x4c) = 0;
      *(undefined4 *)(lVar3 + 0x50) = 0;
      *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + iVar1;
      *(undefined4 *)(lVar3 + 0x54) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
      INetworkMsgProcess::RequestSummeryLottery(pIVar5,*(int *)(*(long *)(this + 0x318) + 0x48),1);
      LotterySelectFrame::Start(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90));
      LotterySelectFrame::SetDest(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90),-1,0);
      setButtonsDisabled(this,true);
      break;
    }
    pwVar6 = L"[SUMMERY_LOTTERY_NET_ERROR]";
LAB_04b99450:
    FUN_05478178((wstring *)asStack_10,pwVar6,auStack_18);
    showTip((wstring *)asStack_10);
    FUN_05476c50((wstring *)asStack_10);
    nop();
    break;
  case 5:
  case 6:
    if (param_1 == 5) {
      __s = "fireCrystal";
    }
    else {
      __s = "iceCrystal";
    }
    std::string::string(asStack_10,__s);
    nop();
    UIBuyCrystal::create(asStack_10,true);
    std::string::~string(asStack_10);
    break;
  case 7:
    cVar2 = checkPlantComposit(this,1);
    if (cVar2 != '\0') {
      pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
      INetworkMsgProcess::RequestSummerPlantComposit(pIVar5,1);
    }
    break;
  case 8:
    cVar2 = checkPlantComposit(this,10);
    if (cVar2 != '\0') {
      pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar5 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar4);
      INetworkMsgProcess::RequestSummerPlantComposit(pIVar5,10);
    }
  }
switchD_04b99230_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ActiveSummery::ButtonDepress(int) */

void __thiscall ActiveSummery::ButtonDepress(ActiveSummery *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::initTabZombieBoss() */

void __thiscall ActiveSummery::initTabZombieBoss(ActiveSummery *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  PlantHeadshot *pPVar9;
  UIWidgetText *pUVar10;
  UIWidgetText *pUVar11;
  PVZ2UIButton *pPVar12;
  PVZ2UIButton *pPVar13;
  wchar16 *pwVar14;
  char *pcVar15;
  exception_ptr *this_00;
  LineBreakCategory *pLVar16;
  LineBreakCategory *in_x4;
  string asStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  uint local_90;
  uint local_8c;
  ActiveItem aAStack_88 [24];
  char local_70;
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar16 = ___stack_chk_guard;
  std::string::string(asStack_98,"Widget_0");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_98);
  this_00 = (exception_ptr *)&local_a8;
  std::string::~string(asStack_98);
  nop();
  std::string::string(asStack_98,"Widget_1");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_98);
  std::string::~string(asStack_98);
  nop();
  uVar1 = *(uint *)((long)plVar6 + 0x54);
  iVar4 = FUN_04b9259c(5);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x160));
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x160));
  iVar5 = 0;
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)this_00,(__normal_iterator *)&local_a0),
        bVar2) {
    uVar8 = std::__exception_ptr::exception_ptr::_M_get(this_00);
    FUN_05475d88(asStack_b0,uVar8);
    FUN_05475d88(asStack_98,asStack_b0);
    pPVar9 = ::operator_new(0x138);
    PlantHeadshot::PlantHeadshot(pPVar9,asStack_98);
    std::string::~string(asStack_98);
    pLVar16 = (LineBreakCategory *)(ulong)uVar1;
    in_x4 = (LineBreakCategory *)(ulong)uVar1;
    (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar5,0);
    (**(code **)(*plVar6 + 0x60))(plVar6,pPVar9);
    std::string::~string(asStack_b0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)this_00);
    iVar5 = iVar4 + uVar1 + iVar5;
  }
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x178));
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x178));
  iVar5 = 0;
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)this_00,(__normal_iterator *)&local_a0),
        bVar2) {
    uVar8 = std::__exception_ptr::exception_ptr::_M_get(this_00);
    FUN_05475d88(asStack_b0,uVar8);
    FUN_05475d88(asStack_98,asStack_b0);
    pPVar9 = ::operator_new(0x138);
    PlantHeadshot::PlantHeadshot(pPVar9,asStack_98);
    std::string::~string(asStack_98);
    pLVar16 = (LineBreakCategory *)(ulong)uVar1;
    in_x4 = (LineBreakCategory *)(ulong)uVar1;
    (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar5,0);
    (**(code **)(*plVar7 + 0x60))(plVar7,pPVar9);
    std::string::~string(asStack_b0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)this_00);
    iVar5 = iVar4 + uVar1 + iVar5;
  }
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  SummerBossData::SummerBossData((SummerBossData *)asStack_98);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_98);
  if (local_70 == '\0') {
    local_90 = 0;
    local_8c = 0;
  }
  std::string::string((string *)&local_a0,"UIText_1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  std::string::string((string *)&local_a0,"UIText_2");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  std::string::string((string *)this_00,"[ACTIVITY_SUMMERY_CHALLENGE_NUM]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)this_00,(string *)L"{NUMBER}",(wchar_t *)(ulong)local_90,(int)pLVar16);
  PuzzleTip::SetTip(pUVar10,(string *)&local_a0);
  FUN_05476c50((string *)&local_a0);
  std::string::~string((string *)this_00);
  nop();
  std::string::string((string *)this_00,"[ACTIVITY_SUMMERY_CHALLENGE_NUM]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)this_00,(string *)L"{NUMBER}",(wchar_t *)(ulong)local_8c,(int)pLVar16);
  PuzzleTip::SetTip(pUVar11,(string *)&local_a0);
  FUN_05476c50((string *)&local_a0);
  std::string::~string((string *)this_00);
  nop();
  std::string::string((string *)&local_a0,"UIButton_1");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  std::string::string((string *)&local_a0,"UIButton_2");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  pwVar14 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string((string *)&local_a0,"OpenBossChallenge");
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar14,(wchar16 *)&local_a0,(LineBreakCategory *)this_00,pLVar16,in_x4);
  std::string::~string((string *)&local_a0);
  nop();
  if (cVar3 == '\0') {
    (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,(int)local_90 < 1);
    (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,(int)local_8c < 1);
  }
  if ((0 < (int)local_90) || (0 < (int)local_8c)) {
    pcVar15 = (char *)FUN_0547429c(&DAT_06b88d60);
    Sexy::StrFormat(pcVar15,(string *)&local_a0,1);
    plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_a0);
    (**(code **)(*plVar6 + 0x158))(plVar6,1);
    std::string::~string((string *)&local_a0);
  }
  std::string::string((string *)&local_a0,"Tab0_EndTips");
  refreshRemainDays(this,aAStack_88,(string *)&local_a0);
  std::string::~string((string *)&local_a0);
  nop();
  SummerBossData::~SummerBossData((SummerBossData *)asStack_98);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::initTabLottery(LotteryPanelData*) */

void __thiscall ActiveSummery::initTabLottery(ActiveSummery *this,LotteryPanelData *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  LotterySelectFrame *pLVar4;
  SummeryLotteryMaterialData aSStack_e8 [8];
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  CBMemberTranslatorX aCStack_d0 [24];
  Delegate1<LotterySelectFrame*> aDStack_b8 [48];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  uVar1 = *(undefined4 *)(this + 0x1a8);
  *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x59) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  refreshRemainDays(this,aAStack_88,(string *)(param_1 + 8));
  SummeryLotteryMaterialData::SummeryLotteryMaterialData(aSStack_e8);
  ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aSStack_e8);
  iVar2 = *(int *)(this + 0x1a8);
  lVar3 = **(long **)(param_1 + 0x68);
  *(int *)(param_1 + 0x38) = local_e0;
  (**(code **)(lVar3 + 0x158))(*(long **)(param_1 + 0x68),iVar2 <= local_e0);
  *(undefined4 *)(param_1 + 0x44) = local_d8;
  *(undefined4 *)(param_1 + 0x40) = local_dc;
  LotteryPanelData::updateLuckUI(param_1,false);
  LotteryPanelData::updateMaterialUI(param_1);
  LotteryPanelData::InitLotteryItemUI();
  LotteryPanelData::initSelectFrame(param_1);
  pLVar4 = *(LotterySelectFrame **)(param_1 + 0x90);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSelectFrameStop);
  Sexy::Delegate1<LotterySelectFrame*>::
  Delegate1<ActiveSummery,void(ActiveSummery::*)(LotterySelectFrame*)>(aDStack_b8,aCStack_d0);
  LotterySelectFrame::SetStopCallBack(pLVar4,aDStack_b8);
  SummeryLotteryMaterialData::~SummeryLotteryMaterialData(aSStack_e8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::initTabFireLottery() */

void __thiscall ActiveSummery::initTabFireLottery(ActiveSummery *this)

{
  LotteryPanelData *this_00;
  undefined8 uVar1;
  char *pcVar2;
  UIWidgetText *pUVar3;
  undefined1 *__n;
  long lVar4;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_20;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x100);
  LotteryPanelData::LotteryPanelData(this_00);
  *(LotteryPanelData **)(this + 0x308) = this_00;
  *(undefined4 *)this_00 = 0x296d;
  *(undefined4 *)(this_00 + 0x34) = 0x59d9;
  *(undefined4 *)(this_00 + 0x48) = 0x296d;
  std::string::append((string *)(this_00 + 8),"Tab1_EndTips",0x59d9);
  FUN_054772c4(*(long *)(this + 0x308) + 0x10,L"[ACTIVITY_SUMMERY_FIRE_COST]");
  lVar4 = *(long *)(this + 0x308);
  std::string::string(asStack_18,"[MAT_COIN_FIRE]");
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(lVar4 + 0x18,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::append((string *)(*(long *)(this + 0x308) + 0x20),"mat_coin_fire",(size_t)__n);
  lVar4 = *(long *)(this + 0x308);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88e28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  lVar4 = *(long *)(this + 0x308);
  pcVar2 = (char *)FUN_0547429c(&DAT_06b88d60);
  Sexy::StrFormat(pcVar2,asStack_10,2);
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x68) = uVar1;
  std::string::~string(asStack_10);
  lVar4 = *(long *)(this + 0x308);
  std::string::string(asStack_10,"Tab1_DrawFire_Back");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x60) = uVar1;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x308);
  std::string::string(asStack_10,"Tab1_Progress_Back");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x70) = uVar1;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x308);
  std::string::string(asStack_10,"Tab1_Cost_Text");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(lVar4 + 0x78) = pUVar3;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x308);
  *(ActiveSummery **)(lVar4 + 0x80) = this + 0x2c0;
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::operator=
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(lVar4 + 0xb8),
             (vector *)(this + 0x200));
  S2C_ICloud_IDCount::operator=
            ((S2C_ICloud_IDCount *)(*(long *)(this + 0x308) + 0x98),
             (S2C_ICloud_IDCount *)(this + 0x230));
  initTabLottery(this,*(LotteryPanelData **)(this + 0x308));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::initTabIceLottery() */

void __thiscall ActiveSummery::initTabIceLottery(ActiveSummery *this)

{
  LotteryPanelData *this_00;
  undefined8 uVar1;
  char *pcVar2;
  UIWidgetText *pUVar3;
  undefined1 *__n;
  long lVar4;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_20;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x100);
  LotteryPanelData::LotteryPanelData(this_00);
  *(LotteryPanelData **)(this + 0x310) = this_00;
  *(undefined4 *)this_00 = 0x296e;
  *(undefined4 *)(this_00 + 0x34) = 0x59da;
  *(undefined4 *)(this_00 + 0x48) = 0x296e;
  std::string::append((string *)(this_00 + 8),"Tab2_EndTips",0x59da);
  FUN_054772c4(*(long *)(this + 0x310) + 0x10,L"[ACTIVITY_SUMMERY_ICE_COST]");
  lVar4 = *(long *)(this + 0x310);
  std::string::string(asStack_18,"[MAT_COIN_ICE]");
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(lVar4 + 0x18,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::append((string *)(*(long *)(this + 0x310) + 0x20),"mat_coin_ice",(size_t)__n);
  lVar4 = *(long *)(this + 0x310);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88d00);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  lVar4 = *(long *)(this + 0x310);
  pcVar2 = (char *)FUN_0547429c(&DAT_06b88d60);
  Sexy::StrFormat(pcVar2,asStack_10,3);
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x68) = uVar1;
  std::string::~string(asStack_10);
  lVar4 = *(long *)(this + 0x310);
  std::string::string(asStack_10,"Tab2_DrawFire_Back");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x60) = uVar1;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x310);
  std::string::string(asStack_10,"Tab2_Progress_Back");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(lVar4 + 0x70) = uVar1;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x310);
  std::string::string(asStack_10,"Tab2_Cost_Text");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(lVar4 + 0x78) = pUVar3;
  std::string::~string(asStack_10);
  nop();
  lVar4 = *(long *)(this + 0x310);
  *(ActiveSummery **)(lVar4 + 0x80) = this + 0x2e0;
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::operator=
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(lVar4 + 0xb8),
             (vector *)(this + 0x218));
  S2C_ICloud_IDCount::operator=
            ((S2C_ICloud_IDCount *)(*(long *)(this + 0x310) + 0x98),
             (S2C_ICloud_IDCount *)(this + 0x250));
  initTabLottery(this,*(LotteryPanelData **)(this + 0x310));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::OnCreate() */

void __thiscall ActiveSummery::OnCreate(ActiveSummery *this)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UITabControl *pUVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  Widget *pWVar12;
  Widget *pWVar13;
  UIWidgetAnim *pUVar14;
  size_t __n;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 local_180 [8];
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  string asStack_b8 [8];
  undefined1 auStack_b0 [28];
  undefined1 local_94;
  string asStack_88 [28];
  undefined4 local_6c;
  undefined4 local_68;
  long local_8;
  
  uVar18 = 0;
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  cVar3 = ActiveSummeryConfig::Init((ActiveSummeryConfig *)(this + 0x140));
  if (cVar3 != '\0') {
    uVar17 = 1;
    std::string::string(asStack_b8,"PlantLaserBeanAudio");
    UI::Dialog::AddResGroup((Dialog *)this,asStack_b8);
    std::string::~string(asStack_b8);
    nop();
    std::string::string(asStack_b8,"UITabControl_0");
    pUVar8 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_b8);
    *(UITabControl **)(this + 0x270) = pUVar8;
    std::string::~string(asStack_b8);
    nop();
    UITabControl::SetListener(*(UITabControl **)(this + 0x270),(TabControlListener *)(this + 0x138))
    ;
    UI::Dialog::SetCenter((Dialog *)this,*(Widget **)(this + 0x270),false);
    std::string::string(asStack_b8,"BtnClose");
    plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_b8);
    std::string::~string(asStack_b8);
    nop();
    lVar16 = *(long *)(this + 0x270);
    iVar7 = *(int *)(lVar16 + 0x50);
    iVar6 = *(int *)(lVar16 + 0x48);
    iVar4 = FUN_04b9259c(100);
    iVar5 = FUN_04b9259c(0x69);
    __n = (size_t)(uint)(*(int *)(lVar16 + 0x4c) - iVar5);
    (**(code **)(*plVar9 + 0x1a8))(plVar9,(iVar6 + iVar7) - iVar4);
    UIWidgetType::UIWidgetType((UIWidgetType *)asStack_b8);
    uVar18 = WidgetFactory<UIWidgetAnim*>::GetTypeName();
    thunk_FUN_05475e00(asStack_b8,uVar18);
    std::string::append(asStack_88,"POPANIM_EFFECTS_NEW_TIPS",__n);
    local_94 = 0;
    local_68 = 0x3f19999a;
    local_6c = 0x3f19999a;
    do {
      pcVar10 = (char *)FUN_0547429c(&DAT_06b88d60);
      Sexy::StrFormat(pcVar10,(string *)&local_d0,uVar17);
      FUN_05474278(auStack_b0,(string *)&local_d0);
      std::string::~string((string *)&local_d0);
      iVar7 = (int)uVar17;
      uVar1 = iVar7 + 1;
      uVar17 = (ulong)uVar1;
      lVar16 = UITabControl::GetTab(*(UITabControl **)(this + 0x270),iVar7);
      plVar9 = (long *)FUN_04b91f60(*(undefined8 *)(lVar16 + 0xd8));
      (**(code **)(*plVar9 + 0xd0))((string *)&local_d0);
      plVar11 = (long *)UIWidgetType::ToWidget((UIWidgetType *)asStack_b8,(Widget *)0x0);
      (**(code **)(*(long *)this + 0x60))(this,plVar11);
      iVar7 = local_d0 + (int)plVar9[10];
      iVar6 = FUN_04b9259c(0x37);
      *(int *)(plVar11 + 9) = iVar7 - iVar6;
      iVar7 = FUN_04b9259c(0x1e);
      pcVar15 = *(code **)(*plVar11 + 0x158);
      *(int *)((long)plVar11 + 0x4c) = iStack_cc - iVar7;
      (*pcVar15)(plVar11,0);
    } while (uVar1 != 5);
    initTabZombieBoss(this);
    uVar18 = 1;
    initTabPlantComposit(this);
    std::string::string((string *)&local_100,"Tab1_Progress_Clip");
    pWVar12 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_100);
    std::string::string((string *)&local_e8,"Tab1_Progress");
    pWVar13 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_e8);
    std::string::string((string *)&local_d0,"Tab1_Gift_Anim");
    pUVar14 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_d0);
    LuckyProgressUtil::Init((LuckyProgressUtil *)(this + 0x2c0),pWVar12,pWVar13,pUVar14);
    std::string::~string((string *)&local_d0);
    nop();
    std::string::~string((string *)&local_e8);
    nop();
    std::string::~string((string *)&local_100);
    nop();
    std::string::string((string *)&local_100,"Tab2_Progress_Clip");
    pWVar12 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_100);
    std::string::string((string *)&local_e8,"Tab2_Progress");
    pWVar13 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_e8);
    std::string::string((string *)&local_d0,"Tab2_Gift_Anim");
    pUVar14 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_d0);
    LuckyProgressUtil::Init((LuckyProgressUtil *)(this + 0x2e0),pWVar12,pWVar13,pUVar14);
    std::string::~string((string *)&local_d0);
    nop();
    std::string::~string((string *)&local_e8);
    nop();
    std::string::~string((string *)&local_100);
    nop();
    initTabFireLottery(this);
    initTabIceLottery(this);
    puVar2 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRequestSummeryLottery);
    local_140 = local_100;
    uStack_138 = uStack_f8;
    local_130 = local_f0;
    MessageRouter::
    Subscribe<int,S2C_SummeryLotteryData_const&,Sexy::CBMemberTranslatorX<ActiveSummery,void(ActiveSummery::*)(int,S2C_SummeryLotteryData_const&)>>
              ((MessageRouter *)puVar2,Message::NotifySummeryLottery,&local_140);
    puVar2 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNotifySummeryMaterialBuy);
    local_150 = local_d8;
    local_160 = local_e8;
    uStack_158 = uStack_e0;
    MessageRouter::
    Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<ActiveSummery,void(ActiveSummery::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
              ((MessageRouter *)puVar2,Message::BuyItemFinish,&local_160);
    puVar2 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNetworkError);
    local_170 = local_c0;
    uStack_178 = uStack_c8;
    MessageRouter::
    Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<ActiveSummery,void(ActiveSummery::*)(int,std::string_const&)>>
              ((MessageRouter *)puVar2,Message::MsgErrorRequest,local_180);
    MessageRouter::Post<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::SummerActivity,"Boss_Challenge");
    UIWidgetType::~UIWidgetType((UIWidgetType *)asStack_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::IsHaveNewTips() */

void ActiveSummery::IsHaveNewTips(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  char cVar3;
  string asStack_348 [8];
  int local_340;
  int local_33c;
  ActiveItem aAStack_338 [24];
  char local_320;
  ActiveItem aAStack_2b8 [24];
  char local_2a0;
  ActiveItem aAStack_238 [24];
  char local_220;
  ActiveItem aAStack_1b8 [24];
  char local_1a0;
  SummerBossData aSStack_138 [8];
  int local_130;
  int local_12c;
  string asStack_e8 [16];
  int local_d8;
  int local_d0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_320 != '\0') {
    SummerBossData::SummerBossData(aSStack_138);
    ActiveItem::GetDataSerialized(aAStack_338,(RtObject *)aSStack_138);
    if ((0 < local_130) || (0 < local_12c)) {
      SummerBossData::~SummerBossData(aSStack_138);
      cVar3 = local_320;
      goto LAB_04b9ae14;
    }
    SummerBossData::~SummerBossData(aSStack_138);
  }
  ActiveSummeryConfig::ActiveSummeryConfig((ActiveSummeryConfig *)aSStack_138);
  ActiveSummeryConfig::Init((ActiveSummeryConfig *)aSStack_138);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_2a0 != '\0') {
    std::string::string(asStack_348,"mat_coin_fire");
    iVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_348);
    std::string::~string(asStack_348);
    nop();
    if (local_d0 <= iVar2) {
      ActiveItem::~ActiveItem(aAStack_2b8);
      ActiveSummeryConfig::~ActiveSummeryConfig((ActiveSummeryConfig *)aSStack_138);
      cVar3 = local_2a0;
      goto LAB_04b9ae14;
    }
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_220 == '\0') {
LAB_04b9aef8:
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar3 = local_1a0;
    if (local_1a0 != '\0') {
      SummerPlantCompositData::SummerPlantCompositData((SummerPlantCompositData *)asStack_348);
      ActiveItem::GetDataSerialized(aAStack_1b8,(RtObject *)asStack_348);
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_e8);
      iVar2 = PlayerInfo::GetPlantPieceCount(this_00,asStack_e8,false);
      if (((cVar1 == '\0') || (iVar2 < local_d8)) || (local_340 < local_33c)) {
        cVar3 = '\0';
        SummerPlantCompositData::~SummerPlantCompositData((SummerPlantCompositData *)asStack_348);
      }
      else {
        SummerPlantCompositData::~SummerPlantCompositData((SummerPlantCompositData *)asStack_348);
      }
    }
    ActiveItem::~ActiveItem(aAStack_1b8);
  }
  else {
    std::string::string(asStack_348,"mat_coin_ice");
    iVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_348);
    std::string::~string(asStack_348);
    nop();
    cVar3 = local_220;
    if (iVar2 < local_d0) goto LAB_04b9aef8;
  }
  ActiveItem::~ActiveItem(aAStack_238);
  ActiveItem::~ActiveItem(aAStack_2b8);
  ActiveSummeryConfig::~ActiveSummeryConfig((ActiveSummeryConfig *)aSStack_138);
LAB_04b9ae14:
  ActiveItem::~ActiveItem(aAStack_338);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::RefreshMaterial(std::set<int, std::less<int>, std::allocator<int> > const&) */

void ActiveSummery::RefreshMaterial(set *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  int local_260 [2];
  undefined8 local_258;
  undefined8 local_250;
  int local_248;
  ActiveItem aAStack_238 [128];
  ActiveItem aAStack_1b8 [128];
  ActiveSummeryConfig aAStack_138 [88];
  string asStack_e0 [216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  ActiveItem::ActiveItem(aAStack_238);
  ActiveSummeryConfig::ActiveSummeryConfig(aAStack_138);
  ActiveSummeryConfig::Init(aAStack_138);
  local_260[0] = 0x296f;
  local_258 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_1,local_260);
  local_250 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_258,(rbtree_iterator *)&local_250);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::operator=(aAStack_238,aAStack_1b8);
    ActiveItem::~ActiveItem(aAStack_1b8);
    this_01 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    iVar2 = NameMapperBase::GetIdForName(this_01,asStack_e0);
    SummerPlantCompositData::SummerPlantCompositData((SummerPlantCompositData *)&local_250);
    ActiveItem::GetDataSerialized(aAStack_238,(RtObject *)&local_250);
    PlayerInfo::SetMaterialNum(this_00,iVar2,local_248);
    SummerPlantCompositData::~SummerPlantCompositData((SummerPlantCompositData *)&local_250);
  }
  local_260[0] = 0x296d;
  local_258 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_1,local_260);
  local_250 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_258,(rbtree_iterator *)&local_250);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::operator=(aAStack_238,aAStack_1b8);
    ActiveItem::~ActiveItem(aAStack_1b8);
    SummeryLotteryMaterialData::SummeryLotteryMaterialData((SummeryLotteryMaterialData *)&local_250)
    ;
    ActiveItem::GetDataSerialized(aAStack_238,(RtObject *)&local_250);
    std::string::string((string *)&local_258,"mat_coin_fire");
    PlayerInfo::SetMaterialNum(this_00,(string *)&local_258,local_248);
    std::string::~string((string *)&local_258);
    nop();
    SummeryLotteryMaterialData::~SummeryLotteryMaterialData
              ((SummeryLotteryMaterialData *)&local_250);
  }
  local_260[0] = 0x296e;
  local_258 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_1,local_260);
  local_250 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_1);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_258,(rbtree_iterator *)&local_250);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    ActiveItem::operator=(aAStack_238,aAStack_1b8);
    ActiveItem::~ActiveItem(aAStack_1b8);
    SummeryLotteryMaterialData::SummeryLotteryMaterialData((SummeryLotteryMaterialData *)&local_250)
    ;
    ActiveItem::GetDataSerialized(aAStack_238,(RtObject *)&local_250);
    std::string::string((string *)&local_258,"mat_coin_ice");
    PlayerInfo::SetMaterialNum(this_00,(string *)&local_258,local_248);
    std::string::~string((string *)&local_258);
    nop();
    SummeryLotteryMaterialData::~SummeryLotteryMaterialData
              ((SummeryLotteryMaterialData *)&local_250);
  }
  ActiveSummeryConfig::~ActiveSummeryConfig(aAStack_138);
  ActiveItem::~ActiveItem(aAStack_238);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::ResponsePlantCompositMsg(std::string const&) */

void __thiscall ActiveSummery::ResponsePlantCompositMsg(ActiveSummery *this,string *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  PopAnimRig *pPVar6;
  vector *pvVar7;
  long *plVar8;
  code *pcVar9;
  int local_104;
  string asStack_100 [8];
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e0 [24];
  LogGameItemData aLStack_c8 [24];
  Delegate1<std::string_const&> aDStack_b0 [48];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_100);
  Sexy::StructuredData::StructuredData(aSStack_80);
  cVar1 = StringHelper::ReadJson(param_1,aSStack_80);
  if (cVar1 == '\0') {
    Sexy::StructuredData::~StructuredData(aSStack_80);
    std::string::~string(asStack_100);
  }
  else {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_LaserBean_Food");
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_104 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e0);
    iVar2 = Sexy::StructuredData::IntegerForPath(aSStack_80,"$.d.s.i",0);
    iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_80,"$.d.s.q",0);
    setPlantPiece(this,iVar2,iVar3,&local_104);
    LogGameItemData::LogGameItemData(aLStack_c8,iVar2,local_104);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_e0,aLStack_c8);
    iVar2 = Sexy::StructuredData::IntegerForPath(aSStack_80,"$.d.t.i",0);
    iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_80,"$.d.t.q",0);
    setPlantPiece(this,iVar2,iVar3,&local_104);
    LogGameItemData::LogGameItemData(aLStack_c8,iVar2,local_104);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_e0,aLStack_c8);
    iVar2 = *(int *)(this + 0x2b4);
    iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_80,"$.d.fs.q",0);
    if (-1 < iVar3) {
      *(int *)(this + 0x2b4) = iVar3;
      PlayerInfo::SetMaterialNum(this_01,(string *)(this + 0x198),iVar3);
      this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      iVar4 = NameMapperBase::GetIdForName(this_02,(string *)(this + 0x198));
      LogGameItemData::LogGameItemData(aLStack_c8,iVar4,iVar3 - iVar2);
      std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
                ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_e0,aLStack_c8);
    }
    refreshTabPlantComposit(this);
    (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),1);
    pPVar6 = (PopAnimRig *)FUN_04b91f64(*(undefined8 *)(*(long *)(this + 0x278) + 0xd8));
    std::string::string(asStack_e8,"idle");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ActiveSummery,void(ActiveSummery::*)(std::string_const&)>(aDStack_b0,aLStack_c8);
    PopAnimRig::PlayAndStop(pPVar6,asStack_e8,0,aDStack_b0);
    std::string::~string(asStack_e8);
    nop();
    plVar8 = *(long **)(*(long *)(this + 0x278) + 0x20);
    pcVar9 = *(code **)(*plVar8 + 0x170);
    Sexy::Insets::Insets((Insets *)aLStack_c8,0x3c,0x3c,0x3c,0xff);
    (*pcVar9)(plVar8,0,aLStack_c8);
    iVar2 = 10;
    if (*(int *)(this + 0x2b0) == 7) {
      iVar2 = 1;
    }
    pvVar7 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar7);
    std::string::string(asStack_f0,"Plant_Synthesis");
    DString::DString((DString *)aLStack_c8,iVar2);
    DString::operator_cast_to_string((DString *)aLStack_c8);
    BehaviorLog::itemPurchase(asStack_f0,asStack_e8,asStack_f8);
    std::string::~string(asStack_e8);
    DString::~DString((DString *)aLStack_c8);
    std::string::~string(asStack_f0);
    nop();
    std::string::~string(asStack_f8);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)avStack_e0);
    Sexy::StructuredData::~StructuredData(aSStack_80);
    std::string::~string(asStack_100);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveSummery::onRequestSummeryLottery(int, S2C_SummeryLotteryData const&) */

void __thiscall
ActiveSummery::onRequestSummeryLottery
          (ActiveSummery *this,int param_1,S2C_SummeryLotteryData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  wstring awStack_28 [20];
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar12 = *(long *)(this + 0x318);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 0x30);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    uVar4 = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(lVar12 + 0x44) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(lVar12 + 0x4c) = uVar1;
    *(undefined4 *)(lVar12 + 0x50) = uVar9;
    *(undefined4 *)(lVar12 + 0x54) = uVar2;
    *(undefined4 *)(lVar12 + 0x58) = uVar3;
    *(undefined4 *)(lVar12 + 0x40) = uVar4;
    S2C_ICloud_IDCount::S2C_ICloud_IDCount((S2C_ICloud_IDCount *)awStack_28);
    local_14 = *(int *)(*(long *)(this + 0x318) + 0x4c);
    local_10 = *(int *)(*(long *)(this + 0x318) + 0x50);
    cVar5 = S2C_ICloud_IDCount::Find((vector *)(lVar12 + 0xb8),local_14,local_10);
    if (cVar5 == '\0') {
      FUN_05478178((wstring *)local_40,L"[SUMMERY_LOTTERY_UNKONW_BONUS]",local_50);
      showTip((wstring *)local_40);
      FUN_05476c50((wstring *)local_40);
      nop();
      LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90));
    }
    else {
      LotterySelectFrame::SetDest
                (*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90),local_14,local_10);
    }
    iVar7 = PlayerInfo::GetMaterialNum(this_01,*(int *)(*(long *)(this + 0x318) + 0x34));
    local_50[0] = FUN_04b95260(*(undefined8 *)(param_2 + 0x58));
    local_40[0] = FUN_04b952b0(*(undefined8 *)(param_2 + 0x60));
    while (bVar6 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_50,(__normal_iterator *)local_40), bVar6) {
      lVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      PlayerInfo::SetMaterialNum(this_01,*(int *)(lVar12 + 0x14),*(int *)(lVar12 + 0x18));
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)local_50);
    }
    iVar8 = PlayerInfo::GetMaterialNum(this_01,*(int *)(*(long *)(this + 0x318) + 0x34));
    lVar13 = *(long *)(this + 0x318);
    uVar9 = PlayerInfo::GetMaterialNum(this_01,*(int *)(lVar13 + 0x34));
    lVar12 = *(long *)(this + 0x318);
    lVar11 = *(long *)(this + 0x308);
    uVar1 = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(lVar13 + 0x38) = uVar9;
    *(undefined4 *)(lVar12 + 0x44) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(lVar12 + 0x40) = uVar1;
    if (lVar12 == lVar11) {
      iVar14 = 1;
    }
    else {
      iVar14 = 0;
      if (lVar12 == *(long *)(this + 0x310)) {
        iVar14 = 2;
      }
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
    LogGameItemData::LogGameItemData
              ((LogGameItemData *)local_50,*(int *)(param_2 + 0x2c),*(int *)(param_2 + 0x30));
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_40,
               (LogGameItemData *)local_50);
    if (*(int *)(param_2 + 0x4c) != 0) {
      LogGameItemData::LogGameItemData
                ((LogGameItemData *)local_50,*(int *)(param_2 + 0x4c),*(int *)(param_2 + 0x50));
      std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
                ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_40,
                 (LogGameItemData *)local_50);
    }
    LogGameItemData::LogGameItemData
              ((LogGameItemData *)local_50,*(int *)(*(long *)(this + 0x318) + 0x34),iVar8 - iVar7);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::push_back
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_40,
               (LogGameItemData *)local_50);
    pvVar10 = (vector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::GetGameItemChangedLog(pvVar10);
    std::string::string(asStack_60,"Lucky_Gacha");
    DString::DString((DString *)local_50,iVar14);
    DString::operator_cast_to_string((DString *)local_50);
    BehaviorLog::itemPurchase(asStack_60,asStack_58,asStack_68);
    std::string::~string(asStack_58);
    DString::~DString((DString *)local_50);
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    std::vector<LogGameItemData,std::allocator<LogGameItemData>>::~vector
              ((vector<LogGameItemData,std::allocator<LogGameItemData>> *)local_40);
    S2C_ICloud_IDCount::~S2C_ICloud_IDCount((S2C_ICloud_IDCount *)awStack_28);
  }
  else if (param_1 == 0x6d6b) {
    FUN_05477b24(awStack_28,*(long *)(this + 0x318) + 0x18);
    showLackMaterial(this,awStack_28);
    FUN_05476c50(awStack_28);
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90));
  }
  else {
    FUN_05478178(awStack_28,L"[SUMMERY_LOTTERY_NET_ERROR]",local_40);
    showTip(awStack_28);
    FUN_05476c50(awStack_28);
    nop();
    LotterySelectFrame::Stop(*(LotterySelectFrame **)(*(long *)(this + 0x318) + 0x90));
  }
  LotteryPanelData::updateMaterialUI(*(LotteryPanelData **)(this + 0x318));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

