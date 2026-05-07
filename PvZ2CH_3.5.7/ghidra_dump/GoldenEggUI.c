// Class: GoldenEggUI


/* GoldenEggUI::ConfirmToPay() */

void GoldenEggUI::ConfirmToPay(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* GoldenEggUI::IsConnecting() */

GoldenEggUI __thiscall GoldenEggUI::IsConnecting(GoldenEggUI *this)

{
  return this[0x32];
}


/* GoldenEggUI::IsOpening() */

GoldenEggUI __thiscall GoldenEggUI::IsOpening(GoldenEggUI *this)

{
  return this[0x33];
}


/* GoldenEggUI::GetDrawOffsetPoint() */

void GoldenEggUI::GetDrawOffsetPoint(void)

{
  long in_x0;
  Point *in_x8;
  
  if (*(long **)(in_x0 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x20) + 0xd0))();
    return;
  }
  Sexy::Point::Point(in_x8);
  return;
}


/* GoldenEggUI::GetBonusRect(int) */

void GoldenEggUI::GetBonusRect(int param_1)

{
  char cVar1;
  ulong uVar2;
  int in_w1;
  Insets *in_x8;
  
  uVar2 = (ulong)(uint)param_1;
  if (in_w1 == 2) {
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(uVar2 + 0x100));
    if (cVar1 != '\0') {
      Sexy::Insets::Insets
                (in_x8,*(int *)(uVar2 + 0x80),*(int *)(uVar2 + 0x84),*(int *)(uVar2 + 0x88),
                 *(int *)(uVar2 + 0x8c));
      return;
    }
  }
  else if (in_w1 == 3) {
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(uVar2 + 0x160));
    if (cVar1 != '\0') {
      Sexy::Insets::Insets
                (in_x8,*(int *)(uVar2 + 0x90),*(int *)(uVar2 + 0x94),*(int *)(uVar2 + 0x98),
                 *(int *)(uVar2 + 0x9c));
      return;
    }
  }
  else if ((in_w1 == 1) && (cVar1 = GoldenEgg::Valid((GoldenEgg *)(uVar2 + 0xa0)), cVar1 != '\0')) {
    Sexy::Insets::Insets
              (in_x8,*(int *)(uVar2 + 0x70),*(int *)(uVar2 + 0x74),*(int *)(uVar2 + 0x78),
               *(int *)(uVar2 + 0x7c));
    return;
  }
  Sexy::Insets::Insets(in_x8);
  return;
}


/* GoldenEggUI::SetConnecting(bool) */

void __thiscall GoldenEggUI::SetConnecting(GoldenEggUI *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  this[0x32] = (GoldenEggUI)param_1;
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


/* GoldenEggUI::SetOpening(bool) */

void __thiscall GoldenEggUI::SetOpening(GoldenEggUI *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  this[0x33] = (GoldenEggUI)param_1;
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::OnGoldenEggOpened(bool) */

void __thiscall GoldenEggUI::OnGoldenEggOpened(GoldenEggUI *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_UNCONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_UNCONNECTED]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    SetOpening(this,param_1);
  }
  SetConnecting(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::ButtonDepress(int) */

void __thiscall GoldenEggUI::ButtonDepress(GoldenEggUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ActivityConfig *pAVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar6;
  NetworkMgr *pNVar7;
  long *plVar8;
  wchar_t *pwVar9;
  LawnApp *pLVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) == 0) ||
     (cVar1 = FUN_04beaa00(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 == '\0'))
  goto switchD_04bebdc0_default;
  pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
  cVar1 = ActivityConfig::IsGoldenEggActived(pAVar5);
  pLVar10 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_CLOSED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_CLOSED]",auStack_60);
    pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar10,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  }
  else {
    cVar1 = IsConnecting(this);
    pLVar10 = gLawnApp;
    if (cVar1 == '\0') {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if (this_01 == (PlayerInfo *)0x0) {
LAB_04bebcd0:
        pLVar10 = gLawnApp;
        FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_NO_BONUS_TITLE]",auStack_68);
        pwVar9 = L"[CHRISTMAS_GOLDEN_EGG_NO_BONUS]";
LAB_04bebd08:
        FUN_05478178(awStack_50,pwVar9,auStack_60);
        pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar10,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        iVar2 = PlayerInfo::GetGoldenEggsObjectId(this_01);
        if (iVar2 == 0) goto LAB_04bebcd0;
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar3 = ActivityConfig::GetGoldenEggEggOpenGemCost(pAVar5);
        switch(param_1) {
        case 0xbb9:
          cVar1 = IsOpening(this);
          if ((cVar1 != '\0') ||
             (cVar1 = GoldenEgg::IsEggOpened((GoldenEgg *)(this + 0xa0)), cVar1 != '\0'))
          goto switchD_04bebdc0_default;
          iVar4 = PlayerInfo::GetGoldenEggHammers(this_01);
          if (iVar4 < 1) {
LAB_04bebfc8:
            iVar2 = PlayerInfo::GetGoldenEggHammersLeft(this_01);
            pLVar10 = gLawnApp;
            if (iVar2 < 1) {
              FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER_TITLE]",auStack_68);
              FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER_LEFT]",auStack_60);
              pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar10,awStack_58,awStack_50);
              FUN_05476c50(awStack_50);
              nop();
              FUN_05476c50(awStack_58);
              nop();
              FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
              Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
              PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
              FUN_05476c50(awStack_58);
              nop();
            }
            else {
              FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER_TITLE]",auStack_68);
              FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER]",auStack_60);
              pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar10,awStack_58,awStack_50);
              FUN_05476c50(awStack_50);
              nop();
              FUN_05476c50(awStack_58);
              nop();
              FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_BUY_BUTTON]",auStack_60);
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)this,ConfirmToPay);
              Sexy::Delegate0::Delegate0<GoldenEggUI,void(GoldenEggUI::*)()>(aDStack_38,awStack_50);
              PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
              FUN_05476c50(awStack_58);
              nop();
              FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_NOT_BUY_BUTTON]",auStack_60);
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
              Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
              PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
              FUN_05476c50(awStack_58);
              nop();
            }
            goto switchD_04bebdc0_default;
          }
          iVar4 = PlayerInfo::GetNumGems(this_01,true);
          if (iVar3 <= iVar4) {
            iVar3 = PlayerInfo::SubtractGems
                              (this_01,iVar3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
            if (-1 < iVar3) {
              SetOpening(this,true);
              pNVar7 = (NetworkMgr *)NetworkMgr::Instance();
              plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar7);
              (**(code **)(*plVar8 + 0x2b0))(plVar8,1,iVar2);
            }
            goto switchD_04bebdc0_default;
          }
          break;
        case 0xbba:
          cVar1 = IsOpening(this);
          if ((cVar1 != '\0') ||
             (cVar1 = GoldenEgg::IsEggOpened((GoldenEgg *)(this + 0x100)), cVar1 != '\0'))
          goto switchD_04bebdc0_default;
          iVar4 = PlayerInfo::GetGoldenEggHammers(this_01);
          if (iVar4 < 1) goto LAB_04bebfc8;
          iVar4 = PlayerInfo::GetNumGems(this_01,true);
          if (iVar3 <= iVar4) {
            iVar3 = PlayerInfo::SubtractGems
                              (this_01,iVar3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
            if (-1 < iVar3) {
              SetOpening(this,true);
              pNVar7 = (NetworkMgr *)NetworkMgr::Instance();
              plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar7);
              (**(code **)(*plVar8 + 0x2b0))(plVar8,2,iVar2);
            }
            goto switchD_04bebdc0_default;
          }
          break;
        case 0xbbb:
          cVar1 = IsOpening(this);
          if ((cVar1 != '\0') ||
             (cVar1 = GoldenEgg::IsEggOpened((GoldenEgg *)(this + 0x160)), cVar1 != '\0'))
          goto switchD_04bebdc0_default;
          iVar4 = PlayerInfo::GetGoldenEggHammers(this_01);
          if (iVar4 < 1) goto LAB_04bebfc8;
          iVar4 = PlayerInfo::GetNumGems(this_01,true);
          if (iVar3 <= iVar4) {
            iVar3 = PlayerInfo::SubtractGems
                              (this_01,iVar3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
            if (-1 < iVar3) {
              SetOpening(this,true);
              pNVar7 = (NetworkMgr *)NetworkMgr::Instance();
              plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar7);
              (**(code **)(*plVar8 + 0x2b0))(plVar8,3,iVar2);
            }
            goto switchD_04bebdc0_default;
          }
          break;
        case 0xbbc:
          iVar2 = PlayerInfo::GetGoldenEggHammersLeft(this_01);
          pLVar10 = gLawnApp;
          if (0 < iVar2) {
            cVar1 = IsOpening(this);
            if ((cVar1 == '\0') && (cVar1 = IsConnecting(this), cVar1 == '\0')) {
              ConfirmToPay();
            }
            goto switchD_04bebdc0_default;
          }
          FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER_TITLE]",auStack_68);
          pwVar9 = L"[CHRISTMAS_GOLDEN_EGG_NOT_ENOUGH_HAMMER_LEFT]";
          goto LAB_04bebd08;
        default:
          goto switchD_04bebdc0_default;
        }
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      }
      goto switchD_04bebdc0_default;
    }
    FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_CONNECTING_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_CONNECTING]",auStack_60);
    pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar10,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  }
  PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
switchD_04bebdc0_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to GoldenEggUI::ButtonDepress(int) */

void __thiscall GoldenEggUI::ButtonDepress(GoldenEggUI *this,int param_1)

{
  ButtonDepress(this + -0x28,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::~GoldenEggUI() */

void __thiscall GoldenEggUI::~GoldenEggUI(GoldenEggUI *this)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x28) = &PTR_ButtonPress_0697dc20;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__GoldenEggUI_0697dbc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Christmas_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1e8));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x1c8));
  GoldenEgg::~GoldenEgg((GoldenEgg *)(this + 0x160));
  GoldenEgg::~GoldenEgg((GoldenEgg *)(this + 0x100));
  GoldenEgg::~GoldenEgg((GoldenEgg *)(this + 0xa0));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggUI::~GoldenEggUI() */

void __thiscall GoldenEggUI::~GoldenEggUI(GoldenEggUI *this)

{
  ~GoldenEggUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::AddBonus(int, int, int, bool) */

void __thiscall
GoldenEggUI::AddBonus(GoldenEggUI *this,int param_1,int param_2,int param_3,bool param_4)

{
  GoldenEgg *this_00;
  undefined *puVar1;
  char cVar2;
  int iVar3;
  NameMapperBase *this_01;
  LawnApp *pLVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsGoldenEggOpenUIValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::KillGoldenEggOpenUI(pLVar4);
    pLVar4 = gLawnApp;
  }
  LawnApp::CreateGoldenEggOpenUI(pLVar4);
  std::string::string(asStack_20,"");
  nop();
  this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(this_01,param_2);
  if (cVar2 == '\0') {
    *(int *)(this + 0x34) = param_1;
    if (param_1 != 2) goto LAB_04bec7b8;
LAB_04bec904:
    this_00 = (GoldenEgg *)(this + 0x100);
    cVar2 = GoldenEgg::Valid(this_00);
  }
  else {
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    std::operator+("plant_piece_",asStack_18);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    pLVar4 = gLawnApp;
    FUN_05475d88(asStack_10,asStack_20);
    LawnApp::GoldenEggOpenUIAddBonus(pLVar4,asStack_10,(ulong)(uint)param_3,param_1);
    std::string::~string(asStack_10);
    Sexy::StrFormat("%d:%d",asStack_18,(ulong)(uint)param_2,(ulong)(uint)param_3);
    puVar1 = gMessageRouter;
    FUN_05475d88(asStack_10,asStack_18);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar1,Message::ActiveNewYearFinish,1,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    *(int *)(this + 0x34) = param_1;
    if (param_1 == 2) goto LAB_04bec904;
LAB_04bec7b8:
    if (param_1 == 3) {
      this_00 = (GoldenEgg *)(this + 0x160);
      cVar2 = GoldenEgg::Valid(this_00);
    }
    else {
      if (param_1 != 1) goto LAB_04bec7c8;
      this_00 = (GoldenEgg *)(this + 0xa0);
      cVar2 = GoldenEgg::Valid(this_00);
    }
  }
  if (cVar2 != '\0') {
    GoldenEgg::SetRefresh(this_00,param_4);
    GoldenEgg::OpenEgg(this_00);
  }
LAB_04bec7c8:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggUI::GetRefreshEggsStat() */

vector<int,std::allocator<int>> * GoldenEggUI::GetRefreshEggsStat(void)

{
  long in_x0;
  vector<int,std::allocator<int>> *in_x8;
  
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(in_x0 + 0x1e8));
  return in_x8;
}


/* GoldenEggUI::KillBonusUI() */

void __thiscall GoldenEggUI::KillBonusUI(GoldenEggUI *this)

{
  int iVar1;
  char cVar2;
  GoldenEgg *this_00;
  
  LawnApp::KillGoldenEggOpenUI(gLawnApp);
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 == 2) {
    this_00 = (GoldenEgg *)(this + 0x100);
    cVar2 = GoldenEgg::Valid(this_00);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x34) = 0;
      return;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 1) {
        this_00 = (GoldenEgg *)(this + 0xa0);
        cVar2 = GoldenEgg::Valid(this_00);
        if (cVar2 != '\0') goto LAB_04becdfc;
      }
      *(undefined4 *)(this + 0x34) = 0;
      return;
    }
    this_00 = (GoldenEgg *)(this + 0x160);
    cVar2 = GoldenEgg::Valid(this_00);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x34) = 0;
      return;
    }
  }
LAB_04becdfc:
  GoldenEgg::OnEggOpened(this_00);
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::InitView() */

void __thiscall GoldenEggUI::InitView(GoldenEggUI *this)

{
  ButtonListener *pBVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  GoldenEggBackgroundWidget *this_00;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long *plVar11;
  PVZ2UIButton *pPVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  Dialog *this_01;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_b0 [8];
  string asStack_a8 [8];
  Insets aIStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wstring local_78 [16];
  undefined8 local_68;
  int local_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x31] = (GoldenEggUI)0x0;
  this[0x32] = (GoldenEggUI)0x0;
  this[0x30] = (GoldenEggUI)0x0;
  this[0x33] = (GoldenEggUI)0x0;
  pBVar1 = (ButtonListener *)(this + 0x28);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this_00 = ::operator_new(0x218);
  GoldenEggBackgroundWidget::GoldenEggBackgroundWidget(this_00);
  lVar15 = *(long *)(this + 0x20);
  *(GoldenEggBackgroundWidget **)(this + 0x1e0) = this_00;
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(lVar15 + 0x48),*(int *)(lVar15 + 0x4c),
             *(int *)(lVar15 + 0x50),*(int *)(lVar15 + 0x54));
  *(ulong *)(this + 0x50) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x58) = uStack_38;
  *(undefined1 *)(*(long *)(this + 0x20) + 0x59) = 0;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c3b0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c3b0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  plVar11 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar11 + 0x48))((Insets *)&local_40);
  iVar7 = local_40;
  plVar11 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar11 + 0x48))((Insets *)&local_40);
  iVar8 = iStack_3c;
  iVar5 = FUN_04beab84(0x1e);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar8 + iVar5,iVar3,iVar4);
  *(ulong *)(this + 0x40) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x48) = uStack_38;
  plVar11 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar11 + 0x60))(plVar11,*(undefined8 *)(this + 0x20));
  (**(code **)(**(long **)(this + 0x20) + 0x198))(*(long **)(this + 0x20),0,0,iVar3,iVar4);
  plVar11 = *(long **)(this + 0x1e0);
  pcVar16 = *(code **)(*plVar11 + 0x1a0);
  Sexy::Insets::Insets((Insets *)&local_40,0,0,iVar3,iVar4);
  (*pcVar16)(plVar11,(Insets *)&local_40);
  GoldenEggBackgroundWidget::InitView(*(GoldenEggBackgroundWidget **)(this + 0x1e0));
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x1e0));
  iVar4 = FUN_04beab84(0x14);
  iVar3 = iVar4 << 2;
  iVar5 = FUN_04beab84(0xa0);
  iVar7 = iVar5 + (*(int *)(this + 0x48) + iVar4 * -2 + iVar5 * -3) / 2;
  iVar6 = FUN_04beab84(200);
  iVar8 = iVar4 + iVar7;
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar3,iVar5,iVar6);
  *(ulong *)(this + 0x70) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x78) = uStack_38;
  iVar4 = FUN_04beab84(0xa0);
  iVar5 = FUN_04beab84(200);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8,iVar3,iVar4,iVar5);
  *(ulong *)(this + 0x80) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x88) = uStack_38;
  iVar4 = FUN_04beab84(0xa0);
  iVar5 = FUN_04beab84(200);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 + iVar7,iVar3,iVar4,iVar5);
  *(ulong *)(this + 0x90) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x98) = uStack_38;
  FUN_05478178(local_78,&DAT_056f11a8,&local_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0xbb9,pBVar1,local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x210) = pPVar12;
  FUN_05476c50(local_78);
  nop();
  (**(code **)(**(long **)(this + 0x210) + 0x1a0))(*(long **)(this + 0x210),this + 0x70);
  (**(code **)(**(long **)(this + 0x210) + 0x188))(*(long **)(this + 0x210),0);
  plVar11 = *(long **)(this + 0x20);
  lVar15 = *(long *)(this + 0x210);
  lVar14 = *plVar11;
  *(undefined1 *)(lVar15 + 0x59) = 0;
  (**(code **)(lVar14 + 0x60))(plVar11,lVar15);
  FUN_05478178(local_78,&DAT_056f11a8,&local_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0xbba,pBVar1,local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x218) = pPVar12;
  FUN_05476c50(local_78);
  nop();
  (**(code **)(**(long **)(this + 0x218) + 0x1a0))(*(long **)(this + 0x218),this + 0x80);
  (**(code **)(**(long **)(this + 0x218) + 0x188))(*(long **)(this + 0x218),0);
  plVar11 = *(long **)(this + 0x20);
  lVar15 = *(long *)(this + 0x218);
  lVar14 = *plVar11;
  *(undefined1 *)(lVar15 + 0x59) = 0;
  (**(code **)(lVar14 + 0x60))(plVar11,lVar15);
  FUN_05478178(local_78,&DAT_056f11a8,&local_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0xbbb,pBVar1,local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x220) = pPVar12;
  FUN_05476c50(local_78);
  nop();
  (**(code **)(**(long **)(this + 0x220) + 0x1a0))(*(long **)(this + 0x220),this + 0x90);
  (**(code **)(**(long **)(this + 0x220) + 0x188))(*(long **)(this + 0x220),0);
  plVar11 = *(long **)(this + 0x20);
  lVar15 = *(long *)(this + 0x220);
  lVar14 = *plVar11;
  *(undefined1 *)(lVar15 + 0x59) = 0;
  (**(code **)(lVar14 + 0x60))(plVar11,lVar15);
  TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_BUY_BUTTON]");
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c170);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar7 = (iVar7 * 3) / 2;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c170);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x48) - iVar7) / 2,
             *(int *)(this + 0x4c) - iVar8 / 2,iVar7,iVar8);
  *(ulong *)(this + 0x60) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x68) = uStack_38;
  uVar13 = FUN_054766ec(auStack_b0);
  FUN_05478178(local_78,uVar13,&local_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0xbbc,pBVar1,local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x200) = pPVar12;
  FUN_05476c50(local_78);
  nop();
  (**(code **)(**(long **)(this + 0x200) + 0x1a0))(*(long **)(this + 0x200),this + 0x60);
  pPVar12 = *(PVZ2UIButton **)(this + 0x200);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b8c170,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8c288,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),0);
  plVar11 = *(long **)(this + 0x20);
  lVar15 = *(long *)(this + 0x200);
  lVar14 = *plVar11;
  *(undefined1 *)(lVar15 + 0x59) = 0;
  (**(code **)(lVar14 + 0x60))(plVar11,lVar15);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotGoldenEggStat);
  local_e0 = local_90;
  uStack_d8 = uStack_88;
  local_d0 = local_80;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<GoldenEggUI,void(GoldenEggUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::GotGoldenEggStat,&local_e0);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshGoldenEggStat);
  local_d0 = local_68;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<GoldenEggUI,void(GoldenEggUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::RefreshGoldenEggStat,&local_e0);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGoldenEggOpened);
  uStack_d8 = uStack_38;
  local_d0 = local_30;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<GoldenEggUI,void(GoldenEggUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::GoldenEggOpen,&local_e0);
  std::string::string(asStack_a8,"POPANIM_EFFECTS_CHRISTMAS_EGG1");
  Sexy::Insets::Insets
            (aIStack_a0,*(int *)(this + 0x70),*(int *)(this + 0x74),*(int *)(this + 0x78),
             *(int *)(this + 0x7c));
  GoldenEgg::InitGoldenEgg((GoldenEgg *)(this + 0xa0),0,asStack_a8,aIStack_a0);
  std::string::~string(asStack_a8);
  nop();
  std::string::string(asStack_a8,"POPANIM_EFFECTS_CHRISTMAS_EGG2");
  Sexy::Insets::Insets
            (aIStack_a0,*(int *)(this + 0x80),*(int *)(this + 0x84),*(int *)(this + 0x88),
             *(int *)(this + 0x8c));
  GoldenEgg::InitGoldenEgg((GoldenEgg *)(this + 0x100),1,asStack_a8,aIStack_a0);
  std::string::~string(asStack_a8);
  nop();
  std::string::string(asStack_a8,"POPANIM_EFFECTS_CHRISTMAS_EGG3");
  Sexy::Insets::Insets
            (aIStack_a0,*(int *)(this + 0x90),*(int *)(this + 0x94),*(int *)(this + 0x98),
             *(int *)(this + 0x9c));
  GoldenEgg::InitGoldenEgg((GoldenEgg *)(this + 0x160),2,asStack_a8,aIStack_a0);
  std::string::~string(asStack_a8);
  nop();
  LawnApp::SetGoldenEggUI(gLawnApp,this);
  this_01 = *(Dialog **)(this + 0x10);
  std::string::string((string *)aIStack_a0,"buttonClose");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>(this_01,(string *)aIStack_a0);
  *(PVZ2UIButton **)(this + 0x208) = pPVar12;
  std::string::~string((string *)aIStack_a0);
  nop();
  uVar13 = UISingletonDialog<ActiveCenter>::GetSingletonPtr();
  *(undefined8 *)(this + 0x1c0) = uVar13;
  FUN_05476c50(auStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::GoldenEggUI(int, UI::Dialog*) */

void __thiscall GoldenEggUI::GoldenEggUI(GoldenEggUI *this,int param_1,Dialog *param_2)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x28));
  *(undefined ***)this = &PTR__GoldenEggUI_0697dbc0;
  *(undefined ***)(this + 0x28) = &PTR_ButtonPress_0697dc20;
  Sexy::Insets::Insets((Insets *)(this + 0x40));
  Sexy::Insets::Insets((Insets *)(this + 0x50));
  Sexy::Insets::Insets((Insets *)(this + 0x60));
  Sexy::Insets::Insets((Insets *)(this + 0x70));
  Sexy::Insets::Insets((Insets *)(this + 0x80));
  Sexy::Insets::Insets((Insets *)(this + 0x90));
  GoldenEgg::GoldenEgg((GoldenEgg *)(this + 0xa0));
  GoldenEgg::GoldenEgg((GoldenEgg *)(this + 0x100));
  GoldenEgg::GoldenEgg((GoldenEgg *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Christmas_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::OnGotGoldenEggStat(bool) */

void __thiscall GoldenEggUI::OnGotGoldenEggStat(GoldenEggUI *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    GoldenEggBackgroundWidget::ResetRewardImage(*(GoldenEggBackgroundWidget **)(this + 0x1e0));
  }
  else {
    FUN_05478178(awStack_58,L"[CHRISTMAS_GOLDEN_EGG_CONNECTING_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[CHRISTMAS_GOLDEN_EGG_CONNECTING]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  SetConnecting(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggUI::OnRefreshGoldenEggStat(bool) */

void __thiscall GoldenEggUI::OnRefreshGoldenEggStat(GoldenEggUI *this,bool param_1)

{
  if (param_1) {
    GoldenEggBackgroundWidget::ResetRewardImage(*(GoldenEggBackgroundWidget **)(this + 0x1e0));
  }
  SetConnecting(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::SetRefreshStat(std::vector<int, std::allocator<int> >) */

void __thiscall
GoldenEggUI::SetRefreshStat
          (GoldenEggUI *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  int *piVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1e8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_1c = *piVar2;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0x1e8),&local_1c);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::Update() */

void __thiscall GoldenEggUI::Update(GoldenEggUI *this)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  NetworkMgr *this_01;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  GoldenEggInfo local_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsOpening(this);
  if ((cVar1 != '\0') &&
     (fVar4 = *(float *)(this + 0x38), fVar5 = (float)PVZ_T(), fVar4 + 3.0 <= fVar5)) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x38) = uVar6;
    *(undefined4 *)(this + 0x3c) = uVar6;
    SetOpening(this,false);
  }
  cVar1 = IsConnecting(this);
  if ((cVar1 != '\0') &&
     (fVar4 = *(float *)(this + 0x3c), fVar5 = (float)PVZ_T(), fVar4 + 3.0 <= fVar5)) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x3c) = uVar6;
    SetConnecting(this,false);
  }
  if ((*(long *)(this + 0x18) == 0) ||
     (cVar1 = FUN_04beaa00(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 == '\0')) {
LAB_04bef800:
    cVar1 = IsOpening(this);
  }
  else {
    if (this[0x31] == (GoldenEggUI)0x0) {
      this[0x31] = (GoldenEggUI)0x1;
      if (*(ActiveCenter **)(this + 0x1c0) != (ActiveCenter *)0x0) {
        ActiveCenter::EnabledAllButtons(*(ActiveCenter **)(this + 0x1c0));
      }
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar2 = ProfileMgr::GetCurrentProfile(this_00);
      if (lVar2 != 0) {
        PlayerInfo::GetGoldenEggInfo();
        GoldenEggInfo::~GoldenEggInfo(local_58);
        if (local_58[0] == (GoldenEggInfo)0x0) {
          SetConnecting(this,true);
          this_01 = (NetworkMgr *)NetworkMgr::Instance();
          plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
          if (*(code **)(*plVar3 + 0x2a8) != INetworkMsgProcess::ICloudRequestGetGoldenEggStat) {
            (**(code **)(*plVar3 + 0x2a8))(plVar3,1);
          }
          goto LAB_04bef84c;
        }
      }
    }
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0xa0));
    if (cVar1 == '\0') {
      cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x100));
      if (cVar1 != '\0') goto LAB_04bef9dc;
LAB_04bef8e0:
      cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x160));
    }
    else {
      GoldenEgg::OnUpdate((GoldenEgg *)(this + 0xa0));
      cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x100));
      if (cVar1 == '\0') goto LAB_04bef8e0;
LAB_04bef9dc:
      GoldenEgg::OnUpdate((GoldenEgg *)(this + 0x100));
      cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x160));
    }
    if (cVar1 == '\0') goto LAB_04bef800;
    GoldenEgg::OnUpdate((GoldenEgg *)(this + 0x160));
    cVar1 = IsOpening(this);
  }
  if ((cVar1 == '\0') && (cVar1 = IsConnecting(this), cVar1 == '\0')) {
    (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200));
    (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),0);
    if (*(ActiveCenter **)(this + 0x1c0) != (ActiveCenter *)0x0) {
      ActiveCenter::EnabledAllButtons(*(ActiveCenter **)(this + 0x1c0));
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x200) + 0x188))(*(long **)(this + 0x200),1);
    (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),1);
    if (*(ActiveCenter **)(this + 0x1c0) != (ActiveCenter *)0x0) {
      ActiveCenter::DisabledAllButtons(*(ActiveCenter **)(this + 0x1c0));
    }
  }
LAB_04bef84c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::SetSelect(bool) */

void __thiscall GoldenEggUI::SetSelect(GoldenEggUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::SetSelect((ActiveCenterTabBase *)this,param_1);
  FUN_04bea9f8(*(long *)(this + 0x1e0) + 0xd1,param_1);
  (**(code **)(**(long **)(this + 0x200) + 0x158))(*(long **)(this + 0x200),param_1);
  (**(code **)(**(long **)(this + 0x210) + 0x158))(*(long **)(this + 0x210),param_1);
  (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),param_1);
  (**(code **)(**(long **)(this + 0x220) + 0x158))(*(long **)(this + 0x220),param_1);
  (**(code **)(**(long **)(this + 0x1e0) + 0x158))(*(long **)(this + 0x1e0),param_1);
  (**(code **)(**(long **)(this + 0x1e0) + 0x188))(*(long **)(this + 0x1e0),!param_1);
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,param_1);
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggUI::DrawForeground(Sexy::Graphics*) */

void __thiscall GoldenEggUI::DrawForeground(GoldenEggUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  if ((*(long *)(this + 0x18) == 0) ||
     (cVar1 = FUN_04beaa00(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 == '\0'))
  goto LAB_04bf0768;
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x70),*(int *)(this + 0x74),*(int *)(this + 0x78),
             *(int *)(this + 0x7c));
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,(Color *)&local_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x80),*(int *)(this + 0x84),*(int *)(this + 0x88),
             *(int *)(this + 0x8c));
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,(Color *)&local_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x90),*(int *)(this + 0x94),*(int *)(this + 0x98),
             *(int *)(this + 0x9c));
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,(Color *)&local_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x60),*(int *)(this + 100),*(int *)(this + 0x68),
             *(int *)(this + 0x6c));
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,(Color *)&local_18,3,1);
  FUN_05476c50(auStack_30);
  nop();
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_28,param_1);
  GetDrawOffsetPoint();
  Sexy::Graphics::Translate(param_1,local_18,local_14);
  cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0xa0));
  if (cVar1 == '\0') {
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x100));
    if (cVar1 != '\0') goto LAB_04bf07b8;
LAB_04bf074c:
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x160));
  }
  else {
    GoldenEgg::OnDraw((GoldenEgg *)(this + 0xa0),param_1);
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x100));
    if (cVar1 == '\0') goto LAB_04bf074c;
LAB_04bf07b8:
    GoldenEgg::OnDraw((GoldenEgg *)(this + 0x100),param_1);
    cVar1 = GoldenEgg::Valid((GoldenEgg *)(this + 0x160));
  }
  if (cVar1 != '\0') {
    GoldenEgg::OnDraw((GoldenEgg *)(this + 0x160),param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_28);
LAB_04bf0768:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

