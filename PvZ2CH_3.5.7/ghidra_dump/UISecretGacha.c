// Class: UISecretGacha


/* UISecretGacha::~UISecretGacha() */

void __thiscall UISecretGacha::~UISecretGacha(UISecretGacha *this)

{
  *(undefined ***)this = &PTR_GetClass_0677ef90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  s_pWidgetHandler = 0;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISecretGacha::~UISecretGacha() */

void __thiscall UISecretGacha::~UISecretGacha(UISecretGacha *this)

{
  ~UISecretGacha(this);
  AK::FreeHook(this);
  return;
}


/* UISecretGacha::CancelBuy() */

void UISecretGacha::CancelBuy(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UISecretGacha::get() */

undefined8 UISecretGacha::get(void)

{
  return s_pWidgetHandler;
}


/* UISecretGacha::removeFromParent() */

void __thiscall UISecretGacha::removeFromParent(UISecretGacha *this)

{
  (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20),this);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::Update() */

void __thiscall UISecretGacha::Update(UISecretGacha *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auVar6 [12];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  auVar6 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar5 - auVar6._0_8_),auVar6._8_4_);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"textRefreshTime");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar4 = *(code **)(*(wstring **)pDVar2 + 0x338);
    Sexy::SexyStringToUTF8String(aSStack_18,*(wstring **)pDVar2);
    uVar3 = FUN_0547429c(asStack_10);
    (*pcVar4)(pDVar2,uVar3);
    std::string::~string(asStack_10);
  }
  FUN_05476c50(aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::canGacha(bool) */

void __thiscall UISecretGacha::canGacha(UISecretGacha *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  if (this_00 == (PlayerInfo *)0x0) {
    bVar1 = false;
  }
  else {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    std::string::string(asStack_10,"mat_secret_gacha_ticket");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (param_1) {
      bVar1 = true;
      if (0 < iVar2) goto LAB_03de7104;
    }
    else {
      bVar1 = true;
      if (9 < iVar2) goto LAB_03de7104;
    }
    iVar2 = PlayerInfo::GetNumGems(this_00,true);
    bVar1 = *(int *)(this + 0x140) <= iVar2;
  }
LAB_03de7104:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::DoConfirmDialog(float, bool) */

void __thiscall UISecretGacha::DoConfirmDialog(UISecretGacha *this,float param_1,bool param_2)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  int iVar2;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    FUN_05478178(awStack_68,L"[LIMITED_GACHA_CONFIRM_TEXT_2]",awStack_50);
    nop();
    TodStringTranslate(awStack_68);
    TodReplaceNumberString(awStack_50,L"{PRICE}",(int)param_1);
    FUN_05476c50(awStack_50);
  }
  else {
    iVar2 = (int)param_1;
    FUN_05478178(awStack_68,L"[LIMITED_GACHA_CONFIRM_TEXT]",awStack_50);
    nop();
    TodStringTranslate(awStack_68);
    TodReplaceNumberString(awStack_50,L"{PRICE}",iVar2);
    FUN_05476c50(awStack_50);
    if (iVar2 == 0xdc) {
      iVar2 = 1;
    }
    else {
      if (iVar2 != 0x7c6) goto LAB_03de7310;
      iVar2 = 10;
    }
    TodReplaceNumberString(awStack_60,L"{NUM}",iVar2);
    FUN_054766c8(awStack_60,awStack_50);
    FUN_05476c50(awStack_50);
  }
LAB_03de7310:
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[LIMITED_GACHA_CONFIRM_TITLE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[LIMITED_GACHA_CONFIRM_BUY]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ConfirmBuyGacha);
  Sexy::Delegate0::Delegate0<UISecretGacha,void(UISecretGacha::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[LIMITED_GACHA_CONFIRM_BUY_CANCEL]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::showOverview() */

void UISecretGacha::showOverview(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_03de64f0(0x352);
    iVar3 = FUN_03de64f0(0x226);
  }
  else {
    iVar2 = FUN_03de64f0(800);
    iVar3 = FUN_03de64f0(0x226);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[SECRET_GACHA_OVERVIEW_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[SECRET_GACHA_OVERVIEW_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03de64f0(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretGacha::UISecretGacha() */

void __thiscall UISecretGacha::UISecretGacha(UISecretGacha *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_0677ef90;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySecretGachaChangePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<UISecretGacha,void(UISecretGacha::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifySecretGachaChangePlant,&local_40);
  return;
}


/* UISecretGacha::create(Sexy::TRect<int> const&) */

UISecretGacha * UISecretGacha::create(TRect *param_1)

{
  UISecretGacha *this;
  
  if (s_pWidgetHandler != (UISecretGacha *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x150);
  UISecretGacha(this);
  (**(code **)(*(long *)this + 0x328))
            (this,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::Initialize() */

void __thiscall UISecretGacha::Initialize(UISecretGacha *this)

{
  SecretGachaMgr *this_00;
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SecretGachaMgr *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  SecretGachaMgr::GetScreenType(this_00);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("UISecretGacha_%s",asStack_10,uVar1);
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::syncActivity() */

void __thiscall UISecretGacha::syncActivity(UISecretGacha *this)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  NetworkSecretGachaInfo *pNVar1;
  NetworkSecretGachaInfo aNStack_58 [72];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  pNVar1 = (NetworkSecretGachaInfo *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_58,pNVar1);
  *(long *)(this + 0x138) = (long)local_10;
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::getLists(std::vector<int, std::allocator<int> >&, std::vector<int,
   std::allocator<int> >&) */

void __thiscall UISecretGacha::getLists(UISecretGacha *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  NetworkSecretGachaInfo *pNVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  NetworkSecretGachaInfo aNStack_58 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_48 [32];
  vector avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  pNVar2 = (NetworkSecretGachaInfo *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_58,pNVar2);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_48);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_48);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    local_70 = *puVar3;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_2,(int *)&local_70);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)param_1,avStack_28);
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::gachaAgain() */

void __thiscall UISecretGacha::gachaAgain(UISecretGacha *this)

{
  int iVar1;
  int iVar2;
  LawnApp *this_00;
  char cVar3;
  PVZ2UIDialog *pPVar4;
  TGALogMgr *this_01;
  char *__s;
  ProfileMgr *this_02;
  long lVar5;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  ICloudRequestSTDCallbackFunction *this_05;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = canGacha(this,(*(uint *)(this + 0x144) & 0xfffffffd) == 0);
  if (cVar3 == '\0') {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
    cVar3 = '\0';
  }
  else {
    cVar3 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar3 == '\0') {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,CancelBuy);
      Sexy::Delegate0::Delegate0<UISecretGacha,void(UISecretGacha::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      iVar1 = *(int *)(this + 0x144);
      this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      DString::DString((DString *)awStack_50,iVar1);
      __s = (char *)DString::c_str((DString *)awStack_50);
      std::string::string((string *)awStack_58,__s);
      TGALogMgr::LogSegments(this_01,0x274a,0,(string *)awStack_58);
      std::string::~string((string *)awStack_58);
      nop();
      DString::~DString((DString *)awStack_50);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar5 = ProfileMgr::GetCurrentProfile(this_02);
      FUN_03de42cc(lVar5 + 0x10f1,0);
      this_03 = (NetworkMgr *)NetworkMgr::Instance();
      this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
      iVar2 = *(int *)(this + 0x144);
      FUN_03de6494((function *)aDStack_38,iVar1,this);
      this_05 = ::operator_new(0x30);
      ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
                (this_05,(function *)aDStack_38);
      DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)awStack_50,(DTouchLayer *)this_05);
      INetworkMsgProcess::RequestDoSecretGacha(this_04,iVar2,(DRefPtr *)awStack_50);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)awStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      FUN_03de42cc(lVar5 + 0x10f1,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::ConfirmBuyGacha() */

void __thiscall UISecretGacha::ConfirmBuyGacha(UISecretGacha *this)

{
  UISecretGacha *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  local_10 = this;
  FUN_03dec2fc((float)*(int *)(this + 0x148),&local_10,*(undefined4 *)(this + 0x14c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::refreshTicket() */

void __thiscall UISecretGacha::refreshTicket(UISecretGacha *this)

{
  uint uVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar4;
  code *pcVar5;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"ticket_info");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_18);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_18,"mat_secret_gacha_ticket");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    if ((int)uVar1 < 1) {
      (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3,0);
    }
    else {
      (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3,1);
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
      DString::Format(&DAT_056012a8,asStack_18,(ulong)uVar1);
      pcVar4 = DString::operator_cast_to_char_((DString *)asStack_18);
      (*pcVar5)(pDVar3,pcVar4);
      DString::~DString((DString *)asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::createBtns(bool) */

void __thiscall UISecretGacha::createBtns(UISecretGacha *this,bool param_1)

{
  exception_ptr *this_00;
  int iVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  DTouchLayer *pDVar6;
  char *pcVar7;
  long lVar8;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var9;
  NetworkSecretGachaInfo *pNVar10;
  code *pcVar11;
  DString aDStack_98 [16];
  DString aDStack_88 [16];
  function<bool(Sexy::Touch_const&)> afStack_78 [32];
  string asStack_58 [40];
  int local_30;
  int local_2c;
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_58,"btnGreenBtn_Gacha_1");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
    std::string::~string(asStack_58);
    nop();
    if (pDVar3 == (DTouchLayer *)0x0) goto LAB_03dec7a4;
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    std::string::string(asStack_58,"mat_secret_gacha_ticket");
    iVar1 = PlayerInfo::GetMaterialNum(pPVar5,asStack_58);
    std::string::~string(asStack_58);
    nop();
    if (0 < iVar1) {
      std::string::string(asStack_58,"imgTicket");
      pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
      std::string::~string(asStack_58);
      nop();
      if (pDVar6 != (DTouchLayer *)0x0) {
        (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
      }
      std::string::string(asStack_58,"textPrice_ticket_1");
      pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
      std::string::~string(asStack_58);
      nop();
      if (pDVar6 != (DTouchLayer *)0x0) {
        iVar1 = 1;
LAB_03dec618:
        DString::DString((DString *)asStack_58,iVar1);
        pcVar7 = (char *)DString::c_str((DString *)asStack_58);
        DString::DString(aDStack_88,pcVar7);
        DString::~DString((DString *)asStack_58);
        pcVar11 = *(code **)(*(long *)pDVar6 + 0x338);
        pcVar7 = DString::operator_cast_to_char_(aDStack_88);
        (*pcVar11)(pDVar6,pcVar7);
        (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
        DString::~DString(aDStack_88);
      }
      goto LAB_03dec670;
    }
    std::string::string(asStack_58,"imgTicket");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string(asStack_58);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
    }
    std::string::string(asStack_58,"textPrice_1");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string(asStack_58);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      p_Var9 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
      pNVar10 = (NetworkSecretGachaInfo *)
                std::
                _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                ::_M_root(p_Var9);
      NetworkSecretGachaInfo::NetworkSecretGachaInfo((NetworkSecretGachaInfo *)asStack_58,pNVar10);
LAB_03dec71c:
      DString::DString(aDStack_88,local_30);
      pcVar7 = (char *)DString::c_str(aDStack_88);
      DString::DString(aDStack_98,pcVar7);
      DString::~DString(aDStack_88);
      pcVar11 = *(code **)(*(long *)pDVar6 + 0x338);
      pcVar7 = DString::operator_cast_to_char_(aDStack_98);
      (*pcVar11)(pDVar6,pcVar7);
      DString::~DString(aDStack_98);
      NetworkSecretGachaInfo::~NetworkSecretGachaInfo((NetworkSecretGachaInfo *)asStack_58);
    }
LAB_03dec768:
    lVar8 = 0;
  }
  else {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_58,"btnGreenBtn_Gacha_10");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
    std::string::~string(asStack_58);
    nop();
    if (pDVar3 == (DTouchLayer *)0x0) goto LAB_03dec7a4;
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    std::string::string(asStack_58,"mat_secret_gacha_ticket");
    iVar1 = PlayerInfo::GetMaterialNum(pPVar5,asStack_58);
    std::string::~string(asStack_58);
    nop();
    if (iVar1 < 10) {
      std::string::string(asStack_58,"imgTicket2");
      pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
      std::string::~string(asStack_58);
      nop();
      if (pDVar6 != (DTouchLayer *)0x0) {
        (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
      }
      std::string::string(asStack_58,"textPrice_10");
      pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
      std::string::~string(asStack_58);
      nop();
      if (pDVar6 != (DTouchLayer *)0x0) {
        p_Var9 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                  *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
        pNVar10 = (NetworkSecretGachaInfo *)
                  std::
                  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                  ::_M_root(p_Var9);
        NetworkSecretGachaInfo::NetworkSecretGachaInfo((NetworkSecretGachaInfo *)asStack_58,pNVar10)
        ;
        local_30 = local_2c;
        goto LAB_03dec71c;
      }
      goto LAB_03dec768;
    }
    std::string::string(asStack_58,"imgTicket2");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string(asStack_58);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
    }
    std::string::string(asStack_58,"textPrice_ticket_10");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar3);
    std::string::~string(asStack_58);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      iVar1 = 10;
      goto LAB_03dec618;
    }
LAB_03dec670:
    lVar8 = 1;
  }
  pcVar11 = *(code **)(*(long *)pDVar3 + 0x350);
  FUN_03de62c8(afStack_78,this,(ulong)param_1 | lVar8 << 8);
  (*pcVar11)(pDVar3,afStack_78);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
LAB_03dec7a4:
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_58,"btnChangePlant");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_58);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar11 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03de6324(afStack_78,this);
    (*pcVar11)(pDVar3,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_58,"btnCheck");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_58);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar11 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03de6380(afStack_78,this);
    (*pcVar11)(pDVar3,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_58,"btnInfo");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_58);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar11 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03de63dc(afStack_78,this);
    (*pcVar11)(pDVar3,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::refreshBtns(bool) */

void __thiscall UISecretGacha::refreshBtns(UISecretGacha *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  DTouchLayer *pDVar4;
  ProfileMgr *pPVar5;
  PlayerInfo *pPVar6;
  DTouchLayer *pDVar7;
  DTouchLayer *pDVar8;
  DTouchLayer *pDVar9;
  DTouchLayer *pDVar10;
  char *pcVar11;
  code *pcVar12;
  DString aDStack_48 [16];
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    std::string::string(asStack_38,"btnGreenBtn_Gacha_1");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_38);
    nop();
    if (pDVar4 == (DTouchLayer *)0x0) goto LAB_03decd74;
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    std::string::string(asStack_38,"mat_secret_gacha_ticket");
    iVar2 = PlayerInfo::GetMaterialNum(pPVar6,asStack_38);
    std::string::~string(asStack_38);
    nop();
    bVar1 = 0 < iVar2;
    std::string::string(asStack_38,"imgTicket");
    pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"textPrice_ticket_1");
    pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"imgGem");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    pcVar11 = "textPrice_1";
  }
  else {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    std::string::string(asStack_38,"btnGreenBtn_Gacha_10");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
    std::string::~string(asStack_38);
    nop();
    if (pDVar4 == (DTouchLayer *)0x0) goto LAB_03decd74;
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
    std::string::string(asStack_38,"mat_secret_gacha_ticket");
    iVar2 = PlayerInfo::GetMaterialNum(pPVar6,asStack_38);
    std::string::~string(asStack_38);
    nop();
    bVar1 = 9 < iVar2;
    std::string::string(asStack_38,"imgTicket2");
    pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"textPrice_ticket_10");
    pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"imgGem2");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
    std::string::~string(asStack_38);
    nop();
    pcVar11 = "textPrice_10";
  }
  std::string::string(asStack_38,pcVar11);
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar4);
  std::string::~string(asStack_38);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar7 + 0xd8))(pDVar7,1);
  }
  if (pDVar8 != (DTouchLayer *)0x0) {
    if (param_1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 10;
    }
    DString::DString((DString *)asStack_38,iVar2);
    pcVar11 = (char *)DString::c_str((DString *)asStack_38);
    DString::DString(aDStack_48,pcVar11);
    DString::~DString((DString *)asStack_38);
    pcVar12 = *(code **)(*(long *)pDVar8 + 0x338);
    pcVar11 = DString::operator_cast_to_char_(aDStack_48);
    (*pcVar12)(pDVar8,pcVar11);
    (**(code **)(*(long *)pDVar8 + 0xd8))(pDVar8,1);
    DString::~DString(aDStack_48);
  }
  if (pDVar9 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
  }
  if (pDVar10 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar10 + 0xd8))(pDVar10,0);
  }
  pcVar12 = *(code **)(*(long *)pDVar4 + 0x350);
  FUN_03de6438(afStack_28,this,CONCAT11(bVar1,param_1));
  (*pcVar12)(pDVar4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
LAB_03decd74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::createIcons(bool) */

void __thiscall UISecretGacha::createIcons(UISecretGacha *this,bool param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  NetworkSecretGachaInfo *pNVar8;
  long lVar9;
  int *piVar10;
  string *psVar11;
  DTouchLayer *pDVar12;
  DTouchLayer *pDVar13;
  DNodeLoaderConfig *pDVar14;
  ulong uVar15;
  SeedPacketUtils *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ResourceInfo *pRVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  DTransformNode *this_03;
  code *pcVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  int iStack_84;
  string asStack_78 [16];
  undefined1 auStack_68 [16];
  NetworkSecretGachaInfo aNStack_58 [8];
  int aiStack_50 [2];
  vector avStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  pNVar8 = (NetworkSecretGachaInfo *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(this_00);
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_58,pNVar8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0);
  if (param_1) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_a0,aiStack_50);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_a0,aiStack_50);
  }
  else {
    std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::vector
              ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)&local_88,avStack_48);
    uVar18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_88);
    uVar19 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_88);
    local_c8 = FUN_03de8134(uVar18,uVar19);
    local_b0[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_88);
    bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_c8,(__normal_iterator *)local_b0);
    if (bVar5) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_b8,(__normal_iterator *)&local_c8);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_88);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_b0,(__normal_iterator *)&local_c0);
      std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::erase
                ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)&local_88,local_b8,
                 local_b0[0]);
    }
    uVar18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_88);
    uVar19 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_88);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::SexyVector2*,std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>>>
              (uVar18,uVar19);
    lVar9 = 0;
    do {
      lVar1 = lVar9 + 1;
      piVar10 = (int *)FUN_03de4488(CONCAT44(iStack_84,local_88),lVar9);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_a0,piVar10);
      lVar9 = lVar1;
    } while (lVar1 != 6);
    std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::~vector
              ((vector<SecretGachaItem,std::allocator<SecretGachaItem>> *)&local_88);
  }
  uVar18 = local_a0;
  uVar21 = 0;
  uVar22 = 1;
  lVar9 = FUN_03de4324(local_a0,local_98);
  if (lVar9 != 0) {
    do {
      piVar10 = (int *)FUN_03de4490(uVar18,uVar21);
      GetGameItemInfo(*piVar10,0x7fffffff,0);
      if (param_1) {
        psVar11 = (string *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
        DString::Format("mainRewardImg_%d",(DString *)local_b0,uVar22);
        DString::operator_cast_to_string((DString *)local_b0);
        pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar11);
        std::string::~string((string *)&local_b8);
        DString::~DString((DString *)local_b0);
        if (pDVar12 != (DTouchLayer *)0x0) {
          std::string::string((string *)local_b0,"img");
          pDVar13 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar12);
          std::string::~string((string *)local_b0);
          nop();
          goto LAB_03ded2b0;
        }
      }
      else {
        psVar11 = (string *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
        pDVar12 = (DTouchLayer *)0x0;
        DString::Format("subRewardImg_%d",(DString *)local_b0,uVar22);
        DString::operator_cast_to_string((DString *)local_b0);
        pDVar13 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar11);
        std::string::~string((string *)&local_b8);
        DString::~DString((DString *)local_b0);
LAB_03ded2b0:
        if (pDVar13 != (DTouchLayer *)0x0) {
          if (iStack_84 == 1) {
            psVar11 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
            bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_c8);
            if ((bVar5) && (pDVar12 != (DTouchLayer *)0x0)) {
              pcVar20 = *(code **)(*(long *)pDVar12 + 0x2e8);
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
              DString::Format("UI/Dialog_Asset/frame_tool%d",(DString *)local_b0,
                              (ulong)(*(int *)(lVar9 + 0xd0) + 1));
              DString::operator_cast_to_string((DString *)local_b0);
              (*pcVar20)(pDVar12,(string *)&local_b8);
              std::string::~string((string *)&local_b8);
              DString::~DString((DString *)local_b0);
            }
            std::string::string((string *)local_b0,"plant_icon");
            pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar13);
            std::string::~string((string *)local_b0);
            nop();
            if (pDVar12 == (DTouchLayer *)0x0) {
              DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)&local_c0);
              plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_c0);
              pcVar20 = *(code **)(*plVar17 + 0x338);
              FUN_031f5e7c((string *)&local_b8,"UI/headshot/plant/",asStack_78);
              plVar17 = (long *)(*pcVar20)(plVar17,(string *)&local_b8,1);
              pcVar20 = *(code **)(*plVar17 + 0x108);
              DVec2::DVec2((DVec2 *)local_b0,0.0,0.0);
              plVar17 = (long *)(*pcVar20)(plVar17,(DString *)local_b0);
              (**(code **)(*plVar17 + 0x130))(0,0);
              std::string::~string((string *)&local_b8);
              this_03 = (DTransformNode *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
              std::string::string((string *)local_b0,"plant_icon");
              DTransformNode::setName(this_03,(string *)local_b0);
              std::string::~string((string *)local_b0);
              nop();
              plVar17 = (long *)(**(code **)(*(long *)pDVar13 + 0x110))
                                          (0xc0a00000,0xc0a00000,pDVar13);
              (**(code **)(*plVar17 + 0x130))(0,0);
              uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
              (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13,uVar18);
              DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                        ((DRefPtr<UIAccumulatedLoginButton> *)&local_c0);
            }
            else {
              pcVar20 = *(code **)(*(long *)pDVar12 + 0x338);
              FUN_031f5e7c((string *)&local_b8,"UI/headshot/plant/",asStack_78);
              plVar17 = (long *)(*pcVar20)(pDVar12,(string *)&local_b8,1);
              pcVar20 = *(code **)(*plVar17 + 0x108);
              DVec2::DVec2((DVec2 *)local_b0,0.0,0.0);
              plVar17 = (long *)(*pcVar20)(plVar17,(DString *)local_b0);
              (**(code **)(*plVar17 + 0x130))(0,0);
              std::string::~string((string *)&local_b8);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_c8);
          }
          else if (iStack_84 == 2) {
            this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
            this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_78);
            DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)&local_c8);
            plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_c8);
            pcVar20 = *(code **)(*plVar17 + 0x340);
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                ((RtWeakPtr *)(this_02 + 0x170));
            plVar17 = (long *)(*pcVar20)(plVar17,pRVar16,this_02 + 0x20);
            plVar17 = (long *)(**(code **)(*plVar17 + 0x110))(0,0);
            (**(code **)(*plVar17 + 0x130))(0,0);
            iVar6 = *(int *)(this_02 + 0x30);
            iVar7 = *(int *)(this_02 + 0x34);
            iVar2 = *(int *)(this_02 + 0x18);
            iVar3 = *(int *)(this_02 + 0x1c);
            DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)&local_c0);
            plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_c0);
            pcVar20 = *(code **)(*plVar17 + 0x340);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
            plVar17 = (long *)(*pcVar20)(plVar17,pRVar16,this_02 + 8);
            pcVar20 = *(code **)(*plVar17 + 0x108);
            fVar25 = (float)FUN_03de6518((float)(iVar2 - iVar6));
            fVar26 = (float)FUN_03de6518((float)(iVar3 - iVar7));
            DVec2::DVec2((DVec2 *)local_b0,fVar25,fVar26);
            plVar17 = (long *)(*pcVar20)(plVar17,(DString *)local_b0);
            (**(code **)(*plVar17 + 0x130))(0,0);
            uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
            (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13,uVar18);
            uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13,uVar18);
            pcVar20 = *(code **)(*(long *)pDVar13 + 0x210);
            iVar6 = FUN_03de6504(*(undefined4 *)(this_02 + 0x28));
            iVar7 = FUN_03de6504(*(undefined4 *)(this_02 + 0x2c));
            DVec2::DVec2((DVec2 *)local_b0,(float)iVar6,(float)iVar7);
            (*pcVar20)(pDVar13,(DString *)local_b0);
            pDVar14 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
            std::string::string((string *)local_b0,"subBubbleImg");
            DNodeLoaderConfig::loadNode<DTouchLayer>
                      (pDVar14,(string *)local_b0,(DTransformNode *)0x0);
            std::string::~string((string *)local_b0);
            nop();
            cVar4 = Sexy::CompiledMap::Initialized((CompiledMap *)&local_b8);
            if (cVar4 != '\0') {
              plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_b8);
              pcVar20 = *(code **)(*plVar17 + 0x108);
              DVec2::DVec2((DVec2 *)local_b0,-50.0,-50.0);
              (*pcVar20)(plVar17,(DString *)local_b0);
              plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_b8);
              (**(code **)(*plVar17 + 0x130))(0,0);
              uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
              (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13,uVar18);
            }
            pcVar20 = *(code **)(*(long *)pDVar13 + 0x148);
            uVar23 = (**(code **)(*(long *)pDVar13 + 0x1d0))(pDVar13);
            uVar24 = (**(code **)(*(long *)pDVar13 + 0x1d8))(pDVar13);
            (*pcVar20)(uVar23,uVar24,pDVar13);
            DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                      ((DRefPtr<UIAccumulatedLoginButton> *)&local_b8);
            DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                      ((DRefPtr<UIAccumulatedLoginButton> *)&local_c0);
            DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                      ((DRefPtr<UIAccumulatedLoginButton> *)&local_c8);
          }
          else {
            (**(code **)(*(long *)pDVar13 + 0x2e8))(pDVar13,auStack_68);
            pDVar14 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
            std::string::string((string *)local_b0,"subBubbleImg");
            DNodeLoaderConfig::loadNode<DTouchLayer>
                      (pDVar14,(string *)local_b0,(DTransformNode *)0x0);
            std::string::~string((string *)local_b0);
            nop();
            cVar4 = Sexy::CompiledMap::Initialized((CompiledMap *)&local_b8);
            if (cVar4 != '\0') {
              plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_b8);
              pcVar20 = *(code **)(*plVar17 + 0x108);
              DVec2::DVec2((DVec2 *)local_b0,-35.0,-35.0);
              (*pcVar20)(plVar17,(DString *)local_b0);
              plVar17 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_b8);
              (**(code **)(*plVar17 + 0x130))(0,0);
              uVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
              (**(code **)(*(long *)pDVar13 + 0x30))(pDVar13,uVar18);
            }
            pcVar20 = *(code **)(*(long *)pDVar13 + 0x148);
            uVar23 = (**(code **)(*(long *)pDVar13 + 0x1d0))(pDVar13);
            uVar24 = (**(code **)(*(long *)pDVar13 + 0x1d8))(pDVar13);
            (*pcVar20)(uVar23,uVar24,pDVar13);
            DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                      ((DRefPtr<UIAccumulatedLoginButton> *)&local_b8);
          }
        }
      }
      uVar21 = uVar21 + 1;
      uVar22 = (ulong)((int)uVar22 + 1);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_88);
      uVar18 = local_a0;
      uVar15 = FUN_03de4324(local_a0,local_98);
    } while (uVar21 < uVar15);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_a0);
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretGacha::onNotifySecretGachaChangePlant(int) */

void __thiscall UISecretGacha::onNotifySecretGachaChangePlant(UISecretGacha *this,int param_1)

{
  SecretGachaMgr *this_00;
  
  this_00 = (SecretGachaMgr *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  SecretGachaMgr::SetSelectId(this_00,param_1);
  createIcons(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretGacha::UserInit() */

void __thiscall UISecretGacha::UserInit(UISecretGacha *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *__s;
  TGALogMgr *pTVar2;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_50 [8];
  TGAAccumulatedLoginData aTStack_48 [24];
  string asStack_30 [8];
  string asStack_28 [32];
  size_t local_8;
  
  __n_00 = auStack_50;
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  createIcons(this,true);
  createIcons(this,false);
  createBtns(this,true);
  createBtns(this,false);
  refreshTicket(this);
  syncActivity(this);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
  std::string::append((string *)aTStack_48,"1",__n);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_28,"mat_secret_gacha_ticket");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_28);
  std::string::~string(asStack_28);
  nop();
  DString::DString((DString *)asStack_28,iVar1);
  __s = (char *)DString::c_str((DString *)asStack_28);
  std::string::append(asStack_30,__s,(size_t)__n_00);
  DString::~DString((DString *)asStack_28);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)asStack_28,(InvitationPlayerInfo *)aTStack_48);
  TGALogMgr::LogSecretGacha(pTVar2,asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

