// Class: DailySignReward


/* DailySignReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void DailySignReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall DailySignReward::ScrollTargetReached(DailySignReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* DailySignReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DailySignReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
DailySignReward::ScrollTargetInterrupted(DailySignReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* DailySignReward::onADFinished(int) */

void __thiscall DailySignReward::onADFinished(DailySignReward *this,int param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if (param_1 != 0x13) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 0x360))(plVar1,4);
  LawnApp::KillDailySignReward(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::IsDaySignCountAvaliable() */

void __thiscall DailySignReward::IsDaySignCountAvaliable(DailySignReward *this)

{
  long lVar1;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetRealBeijingTime(gLawnApp);
  local_10 = FUN_04a3ad84();
  lVar1 = LawnApp::BeijingTime(gLawnApp,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(this + 0xf8) < *(int *)(lVar1 + 0xc));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::GetSupplementarySignDaysCount() */

void __thiscall DailySignReward::GetSupplementarySignDaysCount(DailySignReward *this)

{
  int iVar1;
  long lVar2;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetRealBeijingTime(gLawnApp);
  local_10 = FUN_04a3ad84();
  lVar2 = LawnApp::BeijingTime(gLawnApp,&local_10);
  iVar1 = *(int *)(lVar2 + 0xc) - *(int *)(this + 0xf8);
  if (*(int *)(lVar2 + 0xc) <= *(int *)(this + 0xf8)) {
    iVar1 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* DailySignReward::GetSupplementarySignGems(int) */

int __thiscall DailySignReward::GetSupplementarySignGems(DailySignReward *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (param_1 != 1) {
    iVar6 = 9999;
    if (param_1 == 0) {
      iVar2 = GetSupplementarySignDaysCount(this);
      uVar7 = *(undefined8 *)(this + 0x150);
      iVar3 = FUN_04a3ad48(uVar7,*(undefined8 *)(this + 0x158));
      if (iVar2 < 1) {
        iVar6 = 0;
      }
      else {
        lVar5 = 0;
        iVar6 = 0;
        do {
          if ((int)lVar5 < iVar3) {
            piVar4 = (int *)FUN_04a3ad60(uVar7,lVar5);
            iVar1 = *piVar4;
          }
          else {
            piVar4 = (int *)FUN_04a3ad60(uVar7,(long)(iVar3 + -1));
            iVar1 = *piVar4;
          }
          iVar6 = iVar6 + iVar1;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar2);
      }
    }
    return iVar6;
  }
  piVar4 = (int *)FUN_04a3ad60(*(undefined8 *)(this + 0x150),0);
  return *piVar4;
}


/* DailySignReward::IsAdvertisementEnable() */

byte __thiscall DailySignReward::IsAdvertisementEnable(DailySignReward *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  long lVar6;
  long *plVar7;
  
  if (((DAT_06b7ab48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b7ab48), iVar4 != 0)) {
    DAT_06b7ac61 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b7ab48);
  }
  if (((DAT_06b7b110 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b7b110), iVar4 != 0)) {
    plVar7 = (long *)EASquared::Instance();
    DAT_06b7ac60 = (**(code **)(*plVar7 + 0xb8))(plVar7,0x2a98);
    __cxa_guard_release(&DAT_06b7b110);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar6 = PlayerInfo::GetAdvertisementWatchTime(pPVar5,6);
  bVar2 = TimeUtil::IsToday(lVar6);
  bVar3 = IsDaySignCountAvaliable(this);
  bVar1 = 0;
  if (DAT_06b7ac61 != '\0') {
    bVar1 = bVar2 < bVar3 & DAT_06b7ac60;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::getReward(int, int) */

void __thiscall DailySignReward::getReward(DailySignReward *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  char *__s;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Set8BytesTo0(asStack_18);
  this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_01,param_1);
  if (cVar1 == '\0') {
    OtherServerNameMapper::GetInstance();
    cVar1 = FUN_04a3ad30(param_1);
    if (cVar1 == '\0') {
      OtherServerNameMapper::GetInstance();
      cVar1 = FUN_04a3ad10(param_1);
      if (cVar1 != '\0') {
        PlayerInfo::AddCoins(this_00,param_2);
      }
    }
    else {
      if (param_1 == 0x961) {
        __s = "egypt";
      }
      else if (param_1 == 0x962) {
        __s = "pirate";
      }
      else if (param_1 == 0x963) {
        __s = "cowboy";
      }
      else if (param_1 == 0x964) {
        __s = "kongfu";
      }
      else if (param_1 == 0x965) {
        __s = "future";
      }
      else if (param_1 == 0x966) {
        __s = "dark";
      }
      else if (param_1 == 0x967) {
        __s = "beach";
      }
      else {
        if (param_1 != 0x968) goto LAB_04a3b988;
        __s = "iceage";
      }
      std::string::string(asStack_10,__s);
      PlayerInfo::AddKeys(this_00,asStack_10,param_2);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::string(asStack_10,"plant");
    PlayerInfo::AddRewardByTypeName(this_00,asStack_10,asStack_18,1,false);
    std::string::~string(asStack_10);
    nop();
  }
LAB_04a3b988:
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(pPVar3,false,false);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignReward::ConfirmWatchAD(UIMessageBox*, int) */

void __thiscall
DailySignReward::ConfirmWatchAD(DailySignReward *this,UIMessageBox *param_1,int param_2)

{
  ADManager *pAVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x13);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::CreateSupplementarySignPanel() */

void __thiscall DailySignReward::CreateSupplementarySignPanel(DailySignReward *this)

{
  ADManager *pAVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::GetLeftADWatchCount(pAVar1,0x13);
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[DAILY_SIGN_CONFIRM_AD]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string(asStack_50);
    nop();
    lVar3 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmWatchAD);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<DailySignReward,void(DailySignReward::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::ButtonDepress(int) */

void __thiscall DailySignReward::ButtonDepress(DailySignReward *this,int param_1)

{
  char cVar1;
  long *plVar2;
  TGALogMgr *pTVar3;
  code *pcVar4;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 999) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      plVar2 = (long *)EASquared::Instance();
      pcVar4 = *(code **)(*plVar2 + 0x28);
      std::string::string(asStack_58,"DailySignAdvertisement");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAdsFinish);
      Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
      Delegate1<DailySignReward,void(DailySignReward::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                (aDStack_38,asStack_50);
      (*pcVar4)(plVar2,asStack_58,aDStack_38,0,3,0x2a98);
      std::string::~string(asStack_58);
      nop();
      pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      std::string::string(asStack_68,"1");
      std::string::string(asStack_60,"");
      std::string::string(asStack_58,"");
      std::string::string(asStack_50,"");
      TGALogMgr::LogAD(pTVar3,asStack_68,asStack_60,0x2a98,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
      std::string::~string(asStack_68);
      nop();
    }
  }
  else if (param_1 == 1000) {
    CreateSupplementarySignPanel(this);
  }
  else if (param_1 == 0) {
    LawnApp::KillDailySignReward(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignReward::ButtonDepress(int) */

void __thiscall DailySignReward::ButtonDepress(DailySignReward *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall DailySignReward::onAdsFinish(DailySignReward *this,int param_2)

{
  TGALogMgr *pTVar1;
  long *plVar2;
  NetworkMgr *this_00;
  undefined8 uVar3;
  ProfileMgr *this_01;
  PlayerInfo *pPVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"DailySignReward::onAdsFinish %d");
  if (param_2 == 0) {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_28,"2");
    std::string::string(asStack_20,"");
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    TGALogMgr::LogAD(pTVar1,asStack_28,asStack_20,0x2a98,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    plVar2 = *(long **)(this + 0x118);
    this[0x128] = (DailySignReward)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
    }
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    (**(code **)(*plVar2 + 0x360))(plVar2,4);
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar4,6,uVar3,1);
    LawnApp::KillDailySignReward(gLawnApp);
  }
  else {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_28,"4");
    std::string::string(asStack_20,"");
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    TGALogMgr::LogAD(pTVar1,asStack_28,asStack_20,0x2a98,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::~DailySignReward() */

void __thiscall DailySignReward::~DailySignReward(DailySignReward *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR__DailySignReward_06932ec8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06932b90;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06932f10;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_signReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationDay_Award");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Ads");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignReward::~DailySignReward() */

void __thiscall DailySignReward::~DailySignReward(DailySignReward *this)

{
  ~DailySignReward(this + -0xd8);
  return;
}


/* DailySignReward::~DailySignReward() */

void __thiscall DailySignReward::~DailySignReward(DailySignReward *this)

{
  ~DailySignReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DailySignReward::~DailySignReward() */

void __thiscall DailySignReward::~DailySignReward(DailySignReward *this)

{
  ~DailySignReward(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::CreateSupplementarySignDescription(int) */

void DailySignReward::CreateSupplementarySignDescription(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  ADManager *pAVar10;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  PVZ2UIButton *pPVar11;
  uint in_w1;
  LineBreakCategory *pLVar12;
  long lVar13;
  LineBreakCategory *pLVar14;
  code *pcVar15;
  LineBreakCategory *in_x4;
  long *plVar16;
  undefined1 auVar17 [16];
  string asStack_80 [8];
  string asStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  plVar9 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"[DAILYSIGN_SUPPLYMENTARY_TEXT1]");
  StringHelper::ToStringValue(asStack_78);
  FUN_054766c8(plVar9 + 0x26,aPStack_40);
  FUN_05476c50(aPStack_40);
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_80,"[DAILYSIGN_SUPPLYMENTARY_TEXT2]");
  StringHelper::ToStringValue(asStack_80);
  pLVar12 = (LineBreakCategory *)(ulong)in_w1;
  TodReplaceNumberString((wstring *)asStack_78,L"{NUM}",in_w1);
  FUN_054766c8(plVar9 + 0x27,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50(asStack_78);
  std::string::~string(asStack_80);
  nop();
  pAVar10 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  bVar2 = ADManager::CanWatchAD(pAVar10,0x13);
  plVar16 = (long *)plVar9[0x28];
  if (plVar16 == (long *)0x0) {
    iVar4 = FUN_04a3aff4(0x2d0);
    lVar13 = plVar9[10];
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a7f0);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this);
    uVar1 = ((int)lVar13 - iVar4) / 2 + iVar5;
    pLVar14 = (LineBreakCategory *)(ulong)uVar1;
    auVar17 = FUN_04a3aff4(0x28);
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar17._0_8_,auVar17._8_8_,pLVar12,pLVar14,in_x4);
    iVar4 = *(int *)((long)plVar9 + 0x54);
    uVar7 = 0xe;
    if (cVar3 != '\0') {
      uVar7 = 0xb;
    }
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aae8);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar6 = FUN_04a3aff4(uVar7);
    FUN_05478178(asStack_78,L"[DAILYSIGN_SUPPLEMENTARY_SIGN_BUTTON]",asStack_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,1000,(ButtonListener *)(plVar9 + 0x1c),(wstring *)asStack_78,
               (Color *)aPStack_40);
    plVar9[0x28] = (long)pPVar11;
    FUN_05476c50(asStack_78);
    nop();
    plVar16 = (long *)plVar9[0x28];
    uVar7 = FUN_04a3aff4(0x5a);
    uVar8 = FUN_04a3aff4(0x32);
    (**(code **)(*plVar16 + 0x198))
              (plVar16,uVar1 + auVar17._0_4_,((iVar4 - auVar17._0_4_) - iVar5) + iVar6,uVar7,uVar8);
    pPVar11 = (PVZ2UIButton *)plVar9[0x28];
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b7ac08,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b7ac08,2);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)asStack_78,aPStack_40);
    (**(code **)(*(long *)plVar9[0x28] + 0x158))((long *)plVar9[0x28],bVar2 & 0 < (int)in_w1);
    lVar13 = plVar9[0x28];
    pcVar15 = *(code **)(*plVar9 + 0x60);
    *(undefined1 *)(lVar13 + 0x59) = 0;
    (*pcVar15)(plVar9,lVar13);
  }
  else {
    (**(code **)(*plVar16 + 0x158))(plVar16,bVar2 & 0 < (int)in_w1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DailySignReward::DrawAll(DailySignReward *this,ModalFlags *param_1,Graphics *param_2)

{
  DailySignReward DVar1;
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
  int iVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  Image *pIVar16;
  string *extraout_x1;
  Sexy aSStack_78 [8];
  wstring awStack_70 [8];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [2];
  int local_50;
  int local_48 [2];
  int local_40;
  int local_38 [4];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar2 = FUN_04a3aff4(0x2d0);
  iVar3 = FUN_04a3aff4(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_68,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,
             *(int *)(this + 0x54) + iVar3 * -2);
  iVar2 = local_68;
  iVar4 = FUN_04a3aff4(10);
  iVar3 = local_64;
  iVar5 = FUN_04a3aff4(0x32);
  iVar8 = local_60;
  iVar6 = FUN_04a3aff4(0x14);
  iVar7 = FUN_04a3aff4(100);
  Sexy::Insets::Insets
            ((Insets *)local_58,iVar2 + iVar4,iVar3 + iVar5,iVar8 - iVar6,local_5c - iVar7);
  iVar3 = FUN_04a3aff4(10);
  iVar8 = FUN_04a3aff4(0x5a);
  iVar4 = FUN_04a3aff4(0x19);
  iVar5 = FUN_04a3aff4(0x14);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_04a3aff4(0x32);
  iVar7 = FUN_04a3aff4(0x28);
  Sexy::Insets::Insets
            ((Insets *)local_48,local_58[0] + iVar3,iVar8 + iVar4,local_50 - iVar5,
             ((iVar2 - iVar8) - iVar6) + iVar7 * -2);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ac38);
  LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ac38);
  SalesProgressBar::GetCurrentLevel(pSVar14);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_68);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7acb8);
  Draw9SliceImage(param_2,aIStack_18,uVar15);
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_48);
  uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ac68);
  Draw9SliceImage(param_2,aIStack_18,uVar15);
  iVar2 = FUN_04a3aff4(0x10);
  iVar3 = FUN_04a3aff4(0x28);
  Sexy::Insets::Insets(aIStack_28,local_68,local_64 + iVar2,local_60,iVar3);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0x108,aIStack_28,uVar15,aIStack_18,2,1);
  if (this[0x128] == (DailySignReward)0x0) {
    if (((DAT_06b7ae40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7ae40), iVar2 != 0)) {
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a878);
      DAT_06b7ad48 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      __cxa_guard_release(&DAT_06b7ae40);
    }
    if (((DAT_06b7b120 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7b120), iVar2 != 0)) {
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a878);
      DAT_06b7b100 = SalesProgressBar::GetCurrentLevel(pSVar14);
      __cxa_guard_release(&DAT_06b7b120);
    }
    if (((DAT_06b7a9f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7a9f0), iVar2 != 0)) {
      iVar2 = (local_48[0] + local_40) - DAT_06b7ad48;
      iVar3 = FUN_04a3aff4(10);
      DAT_06b7ab40 = iVar2 - iVar3;
      __cxa_guard_release(&DAT_06b7a9f0);
    }
    if (((DAT_06b7b0a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7b0a0), iVar2 != 0)) {
      iVar2 = FUN_04a3aff4(0x28);
      iVar2 = (*(int *)(this + 0x54) - iVar2) - DAT_06b7b100;
      iVar3 = FUN_04a3aff4(0xf);
      DAT_06b7aa98 = iVar2 - iVar3;
      __cxa_guard_release(&DAT_06b7b0a0);
    }
    pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a878);
    Sexy::Graphics::DrawImage(param_2,pIVar16,DAT_06b7ab40,DAT_06b7aa98);
    TodStringTranslate(L"[DAILY_SIGN_REWARD_TOTAL]");
    iVar2 = DAT_06b7ab40;
    iVar3 = FUN_04a3aff4(0x78);
    Sexy::Insets::Insets(aIStack_28,iVar2 - iVar3,DAT_06b7aa98,iVar3,DAT_06b7b100);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_2,local_38,aIStack_28,uVar15,aIStack_18,5,1);
    FUN_05476c50(local_38);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf8));
    Sexy::ToSexyString(aSStack_78,extraout_x1);
    TodStringTranslate(awStack_70);
    iVar2 = FUN_04a3aff4(7);
    iVar3 = DAT_06b7aa98;
    iVar2 = iVar2 + DAT_06b7ab40;
    iVar8 = FUN_04a3aff4(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar8,DAT_06b7b100);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_2,local_38,aIStack_28,uVar15,aIStack_18,5,1);
    FUN_05476c50(local_38);
    FUN_05476c50(awStack_70);
    std::string::~string((string *)aSStack_78);
    DVar1 = this[0x129];
  }
  else {
    DVar1 = this[0x129];
  }
  if (DVar1 != (DailySignReward)0x0) {
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a7f0);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    iVar3 = FUN_04a3aff4(0x97);
    iVar8 = FUN_04a3aff4(10);
    iVar4 = FUN_04a3aff4(0x32);
    if (((DAT_06b7ace8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b7ace8), iVar5 != 0)) {
      iVar7 = FUN_04a3aff4(0x2d0);
      iVar9 = FUN_04a3aff4(0x1e);
      iVar5 = *(int *)(this + 0x50);
      iVar10 = FUN_04a3aff4(0x28);
      iVar6 = *(int *)(this + 0x54);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aae8);
      iVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
      iVar12 = FUN_04a3aff4(0x12);
      Sexy::Insets::Insets
                ((Insets *)&DAT_06b7aad8,iVar9 + (iVar5 - iVar7) / 2,
                 ((iVar6 - iVar10) - iVar11) + iVar12,(iVar2 + iVar3) - iVar8,iVar4);
      __cxa_guard_release(&DAT_06b7ace8);
    }
    pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a7f0);
    Sexy::Graphics::DrawImage(param_2,pIVar16,DAT_06b7aad8,DAT_06b7aadc);
  }
  TodStringTranslate(L"[TOTAL_LOGIN_DAYS]");
  TodReplaceNumberString((wstring *)aIStack_18,L"{DAY_COUNT}",*(int *)(this + 0xf8));
  FUN_05476c50(aIStack_18);
  iVar2 = FUN_04a3aff4(0x1be);
  iVar3 = FUN_04a3aff4(0x1e7);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aae8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar4 = FUN_04a3aff4(100);
  Sexy::Insets::Insets((Insets *)local_38,iVar2,iVar3,iVar8 / 3,iVar4);
  local_38[0] = FUN_04a3aff4(0xb);
  local_38[0] = local_38[0] + *(int *)(this + 0x50) / 2;
  if (this[0x128] != (DailySignReward)0x0) {
    if (((DAT_06b7a750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7a750), iVar2 != 0)) {
      DAT_06b7ac30 = FUN_04a3aff4(0x1e);
      __cxa_guard_release(&DAT_06b7a750);
    }
    if (((DAT_06b7a758 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7a758), iVar2 != 0)) {
      DAT_06b7ac34 = FUN_04a3aff4(0xfffffffb);
      __cxa_guard_release(&DAT_06b7a758);
    }
    if (((DAT_06b7afc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7afc8), iVar2 != 0)) {
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
      DAT_06b7ab44 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      __cxa_guard_release(&DAT_06b7afc8);
    }
    if (((DAT_06b7b058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7b058), iVar2 != 0)) {
      iVar2 = *(int *)(this + 0x50);
      pLVar13 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
      iVar8 = FUN_04a3aff4(100);
      DAT_06b7a958 = iVar8 + (iVar2 - iVar3) / 2;
      __cxa_guard_release(&DAT_06b7b058);
    }
    iVar2 = DAT_06b7a95c;
    if (((DAT_06b7b060 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&DAT_06b7b060), iVar2 = DAT_06b7a95c, iVar3 != 0)) {
      iVar8 = FUN_04a3aff4(0x28);
      iVar3 = *(int *)(this + 0x54);
      pSVar14 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar14);
      iVar2 = FUN_04a3aff4(0xf);
      iVar2 = ((iVar3 - iVar8) - iVar4) - iVar2;
      DAT_06b7a95c = iVar2;
      __cxa_guard_release(&DAT_06b7b060);
    }
    iVar3 = DAT_06b7a958;
    iVar8 = FUN_04a3aff4(200);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar14);
    Sexy::Insets::Insets(aIStack_18,iVar3,iVar2,iVar8,iVar4);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    WriteWordInRect(param_2,this + 0x120,aIStack_18,uVar15,aIStack_28,5,1);
  }
  if (this[0x129] != (DailySignReward)0x0) {
    iVar8 = FUN_04a3aff4(0x2d0);
    iVar4 = FUN_04a3aff4(0x99);
    iVar2 = *(int *)(this + 0x50);
    iVar5 = FUN_04a3aff4(0x28);
    iVar3 = *(int *)(this + 0x54);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aae8);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
    iVar7 = FUN_04a3aff4(0x14);
    iVar9 = FUN_04a3aff4(0x96);
    iVar10 = FUN_04a3aff4(0x32);
    Sexy::Insets::Insets
              (aIStack_28,iVar4 + (iVar2 - iVar8) / 2,((iVar3 - iVar5) - iVar6) + iVar7,iVar9,iVar10
              );
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    Sexy::Color::Color((Color *)aIStack_18,2);
    WriteWordInRect(param_2,this + 0x138,aIStack_28,uVar15,aIStack_18,0,1);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  FUN_05476c50(awStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignReward::InitializeSupplementaryGemsArray(std::vector<int, std::allocator<int> >) */

void __thiscall
DailySignReward::InitializeSupplementaryGemsArray
          (DailySignReward *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x150));
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
            ((vector<int,std::allocator<int>> *)(this + 0x150),uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::InitView() */

void __thiscall DailySignReward::InitView(DailySignReward *this)

{
  uint uVar1;
  vector<int,std::allocator<int>> *this_00;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ProfileMgr *this_01;
  long lVar16;
  PVZ2UIScrollingWidget *this_02;
  SignRewardScrollPanel *this_03;
  SalesProgressBar *pSVar17;
  PVZ2UIButton *pPVar18;
  LotteryResultProgressBar *pLVar19;
  string *extraout_x1;
  code *pcVar20;
  ScrollWidget *this_04;
  long *plVar21;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  uint local_e4;
  long local_e0;
  string asStack_d8 [8];
  string asStack_d0 [8];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  Sexy aSStack_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProcessSignRewardResult);
  local_100 = local_98;
  local_110 = local_a8;
  uStack_108 = uStack_a0;
  MessageRouter::
  Subscribe<S2C_ICloud_DailySignInfo_const*,Sexy::CBMemberTranslatorX<DailySignReward,void(DailySignReward::*)(S2C_ICloud_DailySignInfo_const*)>>
            ((MessageRouter *)puVar2,Message::ProcessSignRewardResult,&local_110);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_130 = local_90;
  uStack_128 = uStack_88;
  local_120 = local_80;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DailySignReward,void(DailySignReward::*)(int)>>
            ((MessageRouter *)puVar2,Message::NotifyADWatchFinish,&local_130);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar16 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar16 != 0) {
    uVar4 = FUN_04a3ad40(*(undefined4 *)(lVar16 + 0xa48));
    *(undefined4 *)(this + 0xf8) = uVar4;
  }
  local_e0 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar16 = LawnApp::BeijingTime(gLawnApp,&local_e0);
  uVar1 = *(int *)(lVar16 + 0x10) + 1;
  Sexy::StrFormat("IMAGE_UI_SIGNREWARD_TITLE_%d",asStack_d8,(ulong)uVar1);
  local_e4 = uVar1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_e4);
  std::operator+("[DAILY_SIGN_REWARD_TITLE_",asStack_d0);
  std::operator+((string *)&local_c8,"]");
  Sexy::ToSexyString(aSStack_b8,extraout_x1);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x108,(Point *)local_40);
  FUN_05476c50((Point *)local_40);
  FUN_05476c50(awStack_78);
  std::string::~string((string *)aSStack_b8);
  std::string::~string((string *)&local_c8);
  std::string::~string(asStack_d0);
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  iVar5 = FUN_04a3aff4(0x41);
  iVar6 = FUN_04a3aff4(0x5a);
  iVar7 = FUN_04a3aff4(0x1e);
  iVar8 = FUN_04a3aff4(0x82);
  iVar13 = *(int *)(this + 0x50);
  iVar9 = FUN_04a3aff4(0x14);
  iVar14 = *(int *)(this + 0x54);
  iVar10 = FUN_04a3aff4(0x32);
  iVar11 = FUN_04a3aff4(0x28);
  iVar12 = FUN_04a3aff4(0x37);
  Sexy::Insets::Insets
            ((Insets *)&local_c8,iVar5,iVar6 + iVar7,(iVar13 - iVar8) - iVar9,
             (((iVar14 - iVar6) - iVar10) - iVar11) - iVar12);
  LawnApp::GetPlatformName();
  bVar3 = std::operator==((string *)awStack_78,"ipad3");
  if (bVar3) {
    std::string::~string((string *)awStack_78);
  }
  else {
    LawnApp::GetPlatformName();
    bVar3 = std::operator==((string *)local_40,"ipad2");
    std::string::~string((string *)local_40);
    std::string::~string((string *)awStack_78);
    if (!bVar3) goto LAB_04a3fa7c;
  }
  iVar13 = FUN_04a3aff4(0x23);
  local_c8 = local_c8 - iVar13;
  iVar13 = FUN_04a3aff4(0x46);
  local_c0 = local_c0 + iVar13;
LAB_04a3fa7c:
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  lVar16 = *(long *)this_02;
  *(PVZ2UIScrollingWidget **)(this + 0xe8) = this_02;
  (**(code **)(lVar16 + 0x1a0))(this_02,(string *)&local_c8);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)aSStack_b8,local_c8,local_c4,local_c0,local_bc);
  this_03 = ::operator_new(0xf0);
  SignRewardScrollPanel::SignRewardScrollPanel
            (this_03,(TRect *)aSStack_b8,*(int *)(this + 0xfc),(bool)((byte)this[0x110] ^ 1));
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_03);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
  this_04 = *(ScrollWidget **)(this + 0xe8);
  iVar14 = *(int *)(this + 0xf8) + -1;
  iVar13 = *(int *)(this + 0xf8) + 2;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  Sexy::Point::Point((Point *)local_40,0,(iVar13 >> 2) * iVar5);
  Sexy::ScrollWidget::ScrollToPoint(this_04,(Point *)local_40,false);
  FUN_05478178(awStack_78,&DAT_056f11a8,asStack_d0);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar18 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar18,0,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)local_40)
  ;
  *(PVZ2UIButton **)(this + 0xf0) = pPVar18;
  FUN_05476c50(awStack_78);
  nop();
  plVar21 = *(long **)(this + 0xf0);
  pcVar20 = *(code **)(*plVar21 + 0x198);
  iVar14 = FUN_04a3aff4(0x2d0);
  iVar13 = *(int *)(this + 0x50);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar6 = FUN_04a3aff4(8);
  iVar7 = FUN_04a3aff4(0x28);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar9 = FUN_04a3aff4(8);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab10);
  uVar15 = SalesProgressBar::GetCurrentLevel(pSVar17);
  (*pcVar20)(plVar21,((iVar14 + iVar13) / 2 - iVar5 / 2) - iVar6,(iVar7 - iVar8 / 2) + iVar9,uVar4,
             uVar15);
  pPVar18 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7ab10,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b7af20,1);
  PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
  uVar15 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar13 = *(int *)(this + 0x50);
  pLVar19 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar19);
  iVar14 = *(int *)(this + 0x54);
  iVar6 = FUN_04a3aff4(0x28);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a9c0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar8 = FUN_04a3aff4(0xf);
  if (*(long *)(this + 0x118) == 0) {
    FUN_05478178(awStack_78,L"[DAILYSIGN_SUPPLEMENTARY_SIGN_BUTTON]",asStack_d0);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar18,999,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0x118) = pPVar18;
    FUN_05476c50(awStack_78);
    nop();
    (**(code **)(**(long **)(this + 0x118) + 0x198))
              (*(long **)(this + 0x118),(iVar13 - iVar5) / 2,((iVar14 - iVar6) - iVar7) - iVar8,
               uVar4,uVar15);
    pPVar18 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7ac08,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b7a960,3);
    PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    uVar4 = IsAdvertisementEnable(this);
    this[0x128] = SUB41(uVar4,0);
    (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),uVar4);
    lVar16 = *(long *)(this + 0x118);
    pcVar20 = *(code **)(*(long *)this + 0x60);
    *(undefined1 *)(lVar16 + 0x59) = 0;
    (*pcVar20)(this,lVar16);
  }
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x150);
  iVar13 = GetSupplementarySignDaysCount(this);
  this[0x129] = (DailySignReward)(0 < iVar13);
  CreateSupplementarySignDescription((int)this);
  std::vector<int,std::allocator<int>>::clear(this_00);
  local_40[0] = 10;
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_40);
  local_40[0] = 0xf;
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_40);
  local_40[0] = 0x14;
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_40);
  local_40[0] = 0x19;
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_40);
  std::string::~string(asStack_d8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::DailySignReward(bool) */

void __thiscall DailySignReward::DailySignReward(DailySignReward *this,bool param_1)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  PrimeText *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined8 *puVar3;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06932b90;
  *(undefined ***)(this + 0xd8) = &PTR__DailySignReward_06932ec8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06932f10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x130);
  FUN_05476574(this + 0x138);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  this[0x110] = (DailySignReward)param_1;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_signReward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationDay_Award");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Ads");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  puVar3 = (undefined8 *)PlayerInfo::GetDailySignRewardSheet(this_02);
  uVar2 = FUN_04a3ad54(*puVar3,puVar3[1]);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0xfc) = uVar2;
  std::string::string(asStack_10,"[DAILYSIGN_ADVERTISEMENT]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x120,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  this[0x128] = (DailySignReward)0x0;
  this[0x129] = (DailySignReward)0x0;
  std::string::string(asStack_10,"[DAILYSIGN_SUPPLYMENTARY_TEXT1]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x130,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"[DAILYSIGN_SUPPLYMENTARY_TEXT2]");
  StringHelper::ToStringValue(asStack_10);
  FUN_054766c8(this + 0x138,auStack_18);
  FUN_05476c50(auStack_18);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x150));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignReward::onProcessSignRewardResult(S2C_ICloud_DailySignInfo const*) */

void __thiscall
DailySignReward::onProcessSignRewardResult(DailySignReward *this,S2C_ICloud_DailySignInfo *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  TGALogMgr *pTVar12;
  size_t __n;
  DString *__n_00;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  uint uVar16;
  DString aDStack_100 [16];
  int local_f0;
  int local_ec;
  DString aDStack_e0 [16];
  DString aDStack_d0 [16];
  DString aDStack_c0 [16];
  DString aDStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  DString aDStack_88 [24];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  DString aDStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar7 = (vector *)PlayerInfo::GetDailySignRewardSheet(this_01);
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)&local_a0,pvVar7);
  iVar5 = (int)this_01;
  if (DAT_06a88d70 == '\0') {
    iVar14 = *(int *)(param_1 + 0x14);
    iVar6 = iVar14 - DAT_06b7ace4;
    if (iVar6 < iVar14) {
      lVar8 = (long)iVar6;
      do {
        piVar9 = (int *)FUN_04a3ad68(local_a0,lVar8);
        iVar4 = *piVar9;
        iVar1 = piVar9[1];
        MessageRouter::Post<int,int,int,int>
                  ((MessageRouter *)gMessageRouter,Message::DailySignReward,iVar6,iVar4);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::DailySignRewardReceived,iVar6);
        cVar2 = PlayerInfo::IsMonthlyCardActivated(this_01,4);
        if (cVar2 != '\0') {
          iVar1 = iVar1 << 1;
        }
        uVar16 = (uint)(cVar2 != '\0');
        DString::DString((DString *)&local_f0);
        if (iVar4 - 0x5a00U < 2) {
          uVar13 = 0;
          while( true ) {
            uVar15 = *(undefined8 *)(param_1 + 0x38);
            uVar10 = FUN_04a3ad70(uVar15,*(undefined8 *)(param_1 + 0x40));
            if (uVar10 <= uVar13) break;
            piVar9 = (int *)FUN_04a3ad7c(uVar15,uVar13);
            iVar4 = *piVar9;
            iVar1 = piVar9[1];
            PlayerInfo::AddCommonGachaReward(iVar5,iVar4,SUB41(iVar1,0),false);
            if (iVar4 == 0x5af9) {
              std::string::string((string *)aDStack_58,"mat_avatar_ticket");
              uVar3 = PlayerInfo::GetMaterialNum(this_01,(string *)aDStack_58);
              __n = (size_t)uVar3;
              uVar10 = __n;
              std::string::~string((string *)aDStack_58);
              nop();
              TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                        ((TGAAnniversaryTreasureData *)aDStack_58);
              std::string::append((string *)aDStack_58,"4",uVar10);
              DString::DString(aDStack_88,uVar3);
              pcVar11 = (char *)DString::c_str(aDStack_88);
              std::string::append(asStack_50,pcVar11,__n);
              DString::~DString(aDStack_88);
              DString::DString(aDStack_88,iVar1);
              pcVar11 = (char *)DString::c_str(aDStack_88);
              std::string::append(asStack_48,pcVar11,__n);
              DString::~DString(aDStack_88);
              std::string::append(asStack_40,"daily",__n);
              pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
              TGALogMgr::LogExchangeAvatar(pTVar12,(TGAExchangeAvatarData *)aDStack_58);
              TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                        ((TGAAnniversaryTreasureData *)aDStack_58);
            }
            uVar13 = uVar13 + 1;
            DString::DString(aDStack_d0,iVar4);
            ::operator+(aDStack_d0,",");
            DString::DString(aDStack_b0,iVar1);
            ::operator+(aDStack_c0,aDStack_b0);
            ::operator+(aDStack_88,";");
            DString::operator+=((DString *)&local_f0,aDStack_58);
            DString::~DString(aDStack_58);
            DString::~DString(aDStack_88);
            DString::~DString(aDStack_b0);
            DString::~DString(aDStack_c0);
            DString::~DString(aDStack_d0);
          }
          DString::DString(aDStack_58,uVar16);
          DString::operator+=((DString *)&local_f0,aDStack_58);
          DString::~DString(aDStack_58);
          pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          std::string::string((string *)aDStack_c0,"10009");
          DString::DString(aDStack_b0,*(int *)(param_1 + 0x14));
          pcVar11 = (char *)DString::c_str(aDStack_b0);
          std::string::string(asStack_70,pcVar11);
          iVar4 = FUN_04a3ad54(local_a0,local_98);
          DString::DString(aDStack_88,iVar4);
          pcVar11 = (char *)DString::c_str(aDStack_88);
          std::string::string(asStack_68,pcVar11);
          pcVar11 = (char *)DString::c_str((DString *)&local_f0);
          std::string::string(asStack_60,pcVar11);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)aDStack_58,asStack_70,3,
                     aDStack_d0);
          TGALogMgr::Log(pTVar12,(string *)aDStack_c0,(vector *)aDStack_58);
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)aDStack_58);
          std::string::~string(asStack_60);
          std::string::~string(asStack_68);
          std::string::~string(asStack_70);
          nop();
          nop();
          DString::~DString(aDStack_88);
          nop();
          DString::~DString(aDStack_b0);
          std::string::~string((string *)aDStack_c0);
          nop();
        }
        else {
          PlayerInfo::AddCommonGachaReward(iVar5,iVar4,SUB41(iVar1,0),false);
          DString::DString(aDStack_d0,iVar4);
          ::operator+(aDStack_d0,",");
          DString::DString(aDStack_b0,iVar1);
          ::operator+(aDStack_c0,aDStack_b0);
          DString::DString(aDStack_58,uVar16);
          ::operator+(aDStack_88,aDStack_58);
          DString::~DString(aDStack_58);
          DString::~DString(aDStack_88);
          DString::~DString(aDStack_b0);
          DString::~DString(aDStack_c0);
          DString::~DString(aDStack_d0);
          pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          std::string::string((string *)aDStack_c0,"10009");
          DString::DString(aDStack_b0,*(int *)(param_1 + 0x14));
          pcVar11 = (char *)DString::c_str(aDStack_b0);
          std::string::string(asStack_70,pcVar11);
          iVar4 = FUN_04a3ad54(local_a0,local_98);
          DString::DString(aDStack_88,iVar4);
          pcVar11 = (char *)DString::c_str(aDStack_88);
          std::string::string(asStack_68,pcVar11);
          pcVar11 = (char *)DString::c_str(aDStack_e0);
          std::string::string(asStack_60,pcVar11);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)aDStack_58,asStack_70,3,
                     aDStack_d0);
          TGALogMgr::Log(pTVar12,(string *)aDStack_c0,(vector *)aDStack_58);
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)aDStack_58);
          std::string::~string(asStack_60);
          std::string::~string(asStack_68);
          std::string::~string(asStack_70);
          nop();
          nop();
          DString::~DString(aDStack_88);
          nop();
          DString::~DString(aDStack_b0);
          std::string::~string((string *)aDStack_c0);
          nop();
          DString::~DString(aDStack_e0);
        }
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        DString::~DString((DString *)&local_f0);
      } while (iVar6 != iVar14);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14) + -1;
    piVar9 = (int *)FUN_04a3ad68(local_a0,(long)iVar4);
    iVar6 = *piVar9;
    iVar14 = piVar9[1];
    MessageRouter::Post<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::DailySignReward,iVar4,iVar6);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::DailySignRewardReceived,iVar4);
    cVar2 = PlayerInfo::IsMonthlyCardActivated(this_01,4);
    if (cVar2 != '\0') {
      iVar14 = iVar14 << 1;
    }
    uVar16 = (uint)(cVar2 != '\0');
    DString::DString(aDStack_100);
    if (iVar6 - 0x5a00U < 2) {
      uVar13 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_88);
      while( true ) {
        uVar15 = *(undefined8 *)(param_1 + 0x38);
        uVar10 = FUN_04a3ad70(uVar15,*(undefined8 *)(param_1 + 0x40));
        if (uVar10 <= uVar13) break;
        piVar9 = (int *)FUN_04a3ad7c(uVar15,uVar13);
        local_f0 = *piVar9;
        local_ec = piVar9[1];
        PlayerInfo::AddCommonGachaReward(iVar5,local_f0,SUB41(local_ec,0),false);
        std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                  ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)aDStack_88,
                   (ChestAwardContent *)&local_f0);
        if (local_f0 == 0x5af9) {
          __n_00 = aDStack_b0;
          std::string::string((string *)aDStack_58,"mat_avatar_ticket");
          iVar6 = PlayerInfo::GetMaterialNum(this_01,(string *)aDStack_58);
          std::string::~string((string *)aDStack_58);
          nop();
          TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                    ((TGAAnniversaryTreasureData *)aDStack_58);
          std::string::append((string *)aDStack_58,"4",(size_t)__n_00);
          DString::DString(aDStack_b0,iVar6);
          pcVar11 = (char *)DString::c_str(aDStack_b0);
          std::string::append(asStack_50,pcVar11,(size_t)__n_00);
          DString::~DString(aDStack_b0);
          DString::DString(aDStack_b0,local_ec);
          pcVar11 = (char *)DString::c_str(aDStack_b0);
          std::string::append(asStack_48,pcVar11,(size_t)__n_00);
          DString::~DString(aDStack_b0);
          std::string::append(asStack_40,"daily",(size_t)__n_00);
          pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogExchangeAvatar(pTVar12,(TGAExchangeAvatarData *)aDStack_58);
          TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                    ((TGAAnniversaryTreasureData *)aDStack_58);
        }
        uVar13 = uVar13 + 1;
        DString::DString(aDStack_e0,local_f0);
        ::operator+(aDStack_e0,",");
        DString::DString(aDStack_c0,local_ec);
        ::operator+(aDStack_d0,aDStack_c0);
        ::operator+(aDStack_b0,";");
        DString::operator+=(aDStack_100,aDStack_58);
        DString::~DString(aDStack_58);
        DString::~DString(aDStack_b0);
        DString::~DString(aDStack_c0);
        DString::~DString(aDStack_d0);
        DString::~DString(aDStack_e0);
      }
      DString::DString(aDStack_58,uVar16);
      DString::operator+=(aDStack_100,aDStack_58);
      DString::~DString(aDStack_58);
      pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      std::string::string((string *)aDStack_d0,"10009");
      DString::DString(aDStack_c0,*(int *)(param_1 + 0x14));
      pcVar11 = (char *)DString::c_str(aDStack_c0);
      std::string::string(asStack_70,pcVar11);
      iVar5 = FUN_04a3ad54(local_a0,local_98);
      DString::DString(aDStack_b0,iVar5);
      pcVar11 = (char *)DString::c_str(aDStack_b0);
      std::string::string(asStack_68,pcVar11);
      pcVar11 = (char *)DString::c_str(aDStack_100);
      std::string::string(asStack_60,pcVar11);
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)aDStack_58,asStack_70,3,
                 aDStack_e0);
      TGALogMgr::Log(pTVar12,(string *)aDStack_d0,(vector *)aDStack_58);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)aDStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
      std::string::~string(asStack_70);
      nop();
      nop();
      DString::~DString(aDStack_b0);
      nop();
      DString::~DString(aDStack_c0);
      std::string::~string((string *)aDStack_d0);
      nop();
      std::string::string((string *)aDStack_58,"effects/ChestHardLevel_Chest");
      UIChestAward::create
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_88,
                 aDStack_58);
      std::string::~string((string *)aDStack_58);
      nop();
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)aDStack_88);
    }
    else {
      PlayerInfo::AddCommonGachaReward(iVar5,iVar6,SUB41(iVar14,0),false);
      DString::DString(aDStack_e0,iVar6);
      ::operator+(aDStack_e0,",");
      DString::DString(aDStack_c0,iVar14);
      ::operator+(aDStack_d0,aDStack_c0);
      ::operator+(aDStack_b0,";");
      DString::DString(aDStack_58,uVar16);
      ::operator+(aDStack_88,aDStack_58);
      DString::~DString(aDStack_58);
      DString::~DString(aDStack_88);
      DString::~DString(aDStack_b0);
      DString::~DString(aDStack_c0);
      DString::~DString(aDStack_d0);
      DString::~DString(aDStack_e0);
      pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      std::string::string((string *)aDStack_c0,"10009");
      DString::DString(aDStack_b0,*(int *)(param_1 + 0x14));
      pcVar11 = (char *)DString::c_str(aDStack_b0);
      std::string::string(asStack_70,pcVar11);
      iVar5 = FUN_04a3ad54(local_a0,local_98);
      DString::DString(aDStack_88,iVar5);
      pcVar11 = (char *)DString::c_str(aDStack_88);
      std::string::string(asStack_68,pcVar11);
      pcVar11 = (char *)DString::c_str((DString *)&local_f0);
      std::string::string(asStack_60,pcVar11);
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)aDStack_58,asStack_70,3,
                 aDStack_d0);
      TGALogMgr::Log(pTVar12,(string *)aDStack_c0,(vector *)aDStack_58);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)aDStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
      std::string::~string(asStack_70);
      nop();
      nop();
      DString::~DString(aDStack_88);
      nop();
      DString::~DString(aDStack_b0);
      std::string::~string((string *)aDStack_c0);
      nop();
      DString::~DString((DString *)&local_f0);
    }
    DString::~DString(aDStack_100);
  }
  DAT_06a88d70 = 1;
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::~vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)&local_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

