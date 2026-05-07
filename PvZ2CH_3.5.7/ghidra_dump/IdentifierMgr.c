// Class: IdentifierMgr


/* IdentifierMgr::onNotifyUUIDLogin(bool) */

undefined1 IdentifierMgr::onNotifyUUIDLogin(bool param_1)

{
  return param_1;
}


/* IdentifierMgr::~IdentifierMgr() */

void __thiscall IdentifierMgr::~IdentifierMgr(IdentifierMgr *this)

{
  *(undefined ***)this = &PTR__IdentifierMgr_06733e80;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<IdentifierMgr>::~LazySingleton((LazySingleton<IdentifierMgr> *)this);
  return;
}


/* IdentifierMgr::~IdentifierMgr() */

void __thiscall IdentifierMgr::~IdentifierMgr(IdentifierMgr *this)

{
  ~IdentifierMgr(this);
  AK::FreeHook(this);
  return;
}


/* IdentifierMgr::onRestartApp() */

void IdentifierMgr::onRestartApp(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x100));
    return;
  }
  return;
}


/* IdentifierMgr::onBindDialogClosed() */

void IdentifierMgr::onBindDialogClosed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* IdentifierMgr::setBindTip() */

void __thiscall IdentifierMgr::setBindTip(IdentifierMgr *this)

{
  this[0x48] = (IdentifierMgr)0x1;
  return;
}


/* IdentifierMgr::IsRequestFinished() */

bool __thiscall IdentifierMgr::IsRequestFinished(IdentifierMgr *this)

{
  return *(int *)(this + 0x24) == 6;
}


/* IdentifierMgr::IsRequestInit() */

bool __thiscall IdentifierMgr::IsRequestInit(IdentifierMgr *this)

{
  return *(int *)(this + 0x24) == 2;
}


/* IdentifierMgr::IsRequestCheck() */

bool __thiscall IdentifierMgr::IsRequestCheck(IdentifierMgr *this)

{
  return *(int *)(this + 0x24) == 1;
}


/* IdentifierMgr::IsRequestTimeOut() */

bool __thiscall IdentifierMgr::IsRequestTimeOut(IdentifierMgr *this)

{
  return *(int *)(this + 0x24) == 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::IdentifierMgr() */

void __thiscall IdentifierMgr::IdentifierMgr(IdentifierMgr *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = asStack_10;
  Sexy::LazySingleton<IdentifierMgr>::LazySingleton((LazySingleton<IdentifierMgr> *)this);
  *(undefined ***)this = &PTR__IdentifierMgr_06733e80;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0((string *)(this + 0x50));
  std::string::append((string *)(this + 8),"",(size_t)psVar1);
  std::string::append((string *)(this + 0x10),"",(size_t)psVar1);
  std::string::append((string *)(this + 0x18),"",(size_t)psVar1);
  this[0x20] = (IdentifierMgr)0x0;
  this[0x21] = (IdentifierMgr)0x0;
  this[0x48] = (IdentifierMgr)0x0;
  std::string::append((string *)(this + 0x50),"yes",(size_t)psVar1);
  *(undefined4 *)(this + 0x24) = 0;
  std::string::append((string *)(this + 0x30),"",(size_t)psVar1);
  psVar1 = std::string::append((string *)(this + 0x38),"",(size_t)psVar1);
  Android::Util::GetPackageName((Util *)psVar1);
  FUN_05474278(this + 0x40,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::VerifyMD5() */

void __thiscall IdentifierMgr::VerifyMD5(IdentifierMgr *this)

{
  undefined1 uVar1;
  long lVar2;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05474184(this + 8);
  if (lVar2 != 0) {
    lVar2 = FUN_05474184(this + 0x10);
    if (lVar2 != 0) {
      FUN_031dcc6c(asStack_90,this + 8,this + 0x10);
      std::operator+(asStack_90,(string *)&DAT_06acc0d8);
      MD5::MD5(aMStack_78,asStack_88);
      MD5::toString();
      uVar1 = std::operator==((string *)(this + 0x18),asStack_80);
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
      std::string::~string(asStack_90);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::ResetKeychain() */

void __thiscall IdentifierMgr::ResetKeychain(IdentifierMgr *this)

{
  string *psVar1;
  IdentifierMgr *pIVar2;
  IdentifierMgr *pIVar3;
  SexyAppBase *pSVar4;
  string *psVar5;
  char cVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"BindTip");
  psVar1 = (string *)(this + 0x40);
  UserPrefs::SetBool(asStack_10,false);
  pIVar2 = this + 0x30;
  std::string::~string(asStack_10);
  nop();
  FUN_031dcc6c(asStack_18,&DAT_06acc0d0,psVar1);
  std::string::string(asStack_10,"");
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  FUN_031dcc6c(asStack_18,&DAT_06acc0e0,psVar1);
  std::string::string(asStack_10,"");
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  FUN_031dcc6c(asStack_18,&DAT_06acc1d8,psVar1);
  std::string::string(asStack_10,"");
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  FUN_031dcc6c(asStack_18,&DAT_06acc0e8,psVar1);
  std::string::string(asStack_10,"");
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  FUN_031dcc6c(asStack_18,&DAT_06acc180,psVar1);
  std::string::string(asStack_10,"yes");
  UserPrefs::SetString(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc0f0);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc0f0);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  pIVar3 = this + 0x38;
  FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc0f0);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc0f0);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc1d0);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc1d0);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc1d0);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc1d0);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc188);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc188);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc188);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc188);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc158);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc158);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc158);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc158);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc098);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar2,&DAT_06acc098);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  pSVar4 = Sexy::gSexyAppBase;
  FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc098);
  std::operator+(asStack_18,psVar1);
  cVar6 = Sexy::SexyAppBase::FileExists(pSVar4,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  psVar5 = (string *)Sexy::gSexyAppBase;
  if (cVar6 != '\0') {
    FUN_031dcc6c(asStack_18,pIVar3,&DAT_06acc098);
    std::operator+(asStack_18,psVar1);
    Sexy::SexyAppBase::EraseFile(psVar5);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IdentifierMgr::NeedUUIDLogin() */

bool __thiscall IdentifierMgr::NeedUUIDLogin(IdentifierMgr *this)

{
  bool bVar1;
  
  bVar1 = std::operator==((string *)(this + 0x50),"yes");
  return bVar1;
}


/* IdentifierMgr::Update() */

void __thiscall IdentifierMgr::Update(IdentifierMgr *this)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 0x24);
  if (iVar1 == 1) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x28) + 12.0 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      *(undefined4 *)(this + 0x24) = 5;
      return;
    }
    iVar1 = *(int *)(this + 0x24);
  }
  if ((iVar1 == 2) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x28) + 12.0 < fVar2)) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x24) = 4;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* IdentifierMgr::TryIdentifierInit() */

void __thiscall IdentifierMgr::TryIdentifierInit(IdentifierMgr *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  undefined4 uVar2;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (*(code **)(*plVar1 + 0x3c8) != INetworkMsgProcess::RequestUUIDInit) {
    (**(code **)(*plVar1 + 0x3c8))();
  }
  *(undefined4 *)(this + 0x24) = 2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onBindDoubleTipOK() */

void __thiscall IdentifierMgr::onBindDoubleTipOK(IdentifierMgr *this)

{
  LawnApp *this_00;
  long lVar1;
  NetworkMgr *pNVar2;
  long *plVar3;
  undefined4 uVar4;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x21] = (IdentifierMgr)0x0;
  lVar1 = FUN_05474184(this + 8);
  if ((lVar1 == 0) || (lVar1 = FUN_05474184(this + 0x10), lVar1 == 0)) {
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    if (*(code **)(*plVar3 + 0x3c8) != INetworkMsgProcess::RequestUUIDInit) {
      (**(code **)(*plVar3 + 0x3c8))();
    }
    *(undefined4 *)(this + 0x24) = 2;
    this[0x21] = (IdentifierMgr)0x1;
  }
  else {
    pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
    if (*(code **)(*plVar3 + 0x3b8) != INetworkMsgProcess::RequestUUIDBind) {
      (**(code **)(*plVar3 + 0x3b8))();
    }
  }
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar4;
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_10,0x1e,300,400);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IdentifierMgr::TryIdentifierCheck() */

void __thiscall IdentifierMgr::TryIdentifierCheck(IdentifierMgr *this)

{
  char cVar1;
  long lVar2;
  NetworkMgr *this_00;
  long *plVar3;
  undefined4 uVar4;
  
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    cVar1 = VerifyMD5(this);
    if (cVar1 == '\0') {
      ResetKeychain(this);
      *(undefined4 *)(this + 0x24) = 4;
      return;
    }
    lVar2 = FUN_05474184(this + 8);
    if (((lVar2 != 0) && (lVar2 = FUN_05474184(this + 0x10), lVar2 != 0)) &&
       (this[0x20] != (IdentifierMgr)0x0)) {
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
      if (*(code **)(*plVar3 + 0x3d0) != INetworkMsgProcess::RequestUUIDCheck) {
        (**(code **)(*plVar3 + 0x3d0))();
      }
      *(undefined4 *)(this + 0x24) = 1;
      uVar4 = PVZ_T();
      *(undefined4 *)(this + 0x28) = uVar4;
      return;
    }
  }
  *(undefined4 *)(this + 0x24) = 4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onBindTipCancel() */

void __thiscall IdentifierMgr::onBindTipCancel(IdentifierMgr *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  FUN_05478178(awStack_58,L"[SETTINGS_UUID_BIND_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[UUID_BIND_CANCEL_SETTING_TIP]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindDialogClosed);
  Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onBindTipOK() */

void __thiscall IdentifierMgr::onBindTipOK(IdentifierMgr *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  iVar1 = FUN_03b60dd0(500);
  iVar2 = FUN_03b60dd0(0xdc);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[SETTINGS_UUID_BIND_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[UUID_BIND_TIP_DOUBLE_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[UUID_BIND_TIP_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindDoubleTipCancel);
  Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[UUID_BIND_DOUBLE_TIP_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindDoubleTipOK);
  Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::TryBind() */

void __thiscall IdentifierMgr::TryBind(IdentifierMgr *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PVZ2UIDialog *pPVar5;
  PrimeTypeface *pPVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsConnectOnWifi();
  if (cVar2 == '\0') {
    cVar2 = LawnApp::IsConnectedOnWWAN();
    if ((cVar2 == '\0') &&
       (iVar3 = (**(code **)(**(long **)(Sexy::gSexyApp + 0x48) + 0x20))
                          (*(long **)(Sexy::gSexyApp + 0x48)), pLVar1 = gLawnApp, iVar3 != 4)) {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onBindDialogClosed);
      Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_03b621a8;
    }
  }
  pLVar1 = gLawnApp;
  iVar3 = FUN_03b60dd0(500);
  iVar4 = FUN_03b60dd0(0xdc);
  pPVar5 = (PVZ2UIDialog *)
           LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[SETTINGS_UUID_BIND_TITLE]",awStack_58);
  PVZ2UIDialog::SetHeaderLabel(pPVar5,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[UUID_BIND_TIP_CONTENT]",awStack_58);
  PVZ2UIDialog::SetFooterLabel(pPVar5,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar6 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(pPVar5,pPVar6,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar6 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(pPVar5,pPVar6,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(pPVar5,true,0.5);
  FUN_05478178(awStack_58,L"[UUID_BIND_TIP_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindTipCancel);
  Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[UUID_BIND_TIP_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBindTipOK);
  Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
LAB_03b621a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IdentifierMgr::onBindDoubleTipCancel() */

void __thiscall IdentifierMgr::onBindDoubleTipCancel(IdentifierMgr *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  TryBind(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::SaveToLoaclFile(std::string const&, std::string const&) */

void __thiscall IdentifierMgr::SaveToLoaclFile(IdentifierMgr *this,string *param_1,string *param_2)

{
  char cVar1;
  uchar *puVar2;
  ulong uVar3;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_38);
  puVar2 = (uchar *)FUN_0547429c(param_2);
  uVar3 = FUN_05474184(param_2);
  Sexy::Buffer::WriteBytes(aBStack_38,puVar2,uVar3);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,param_1);
  if (cVar1 != '\0') {
    Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
  }
  Sexy::SexyAppBase::WriteBufferToFile(Sexy::gSexyAppBase,param_1,aBStack_38);
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::SaveToKeychain() */

void __thiscall IdentifierMgr::SaveToKeychain(IdentifierMgr *this)

{
  string *psVar1;
  long lVar2;
  string *psVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 8);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05474184(psVar1);
  if (lVar2 != 0) {
    psVar3 = (string *)(this + 0x40);
    FUN_031dcc6c(asStack_18,this + 0x30,&DAT_06acc0f0);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,this + 0x38,&DAT_06acc0f0);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,&DAT_06acc0d0,psVar3);
    FUN_05475d88(asStack_10,psVar1);
    UserPrefs::SetString(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  psVar1 = (string *)(this + 0x10);
  lVar2 = FUN_05474184(psVar1);
  if (lVar2 == 0) {
    lVar2 = FUN_05474184(this + 0x18);
  }
  else {
    psVar3 = (string *)(this + 0x40);
    FUN_031dcc6c(asStack_18,this + 0x30,&DAT_06acc1d0);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,this + 0x38,&DAT_06acc1d0);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,&DAT_06acc0e0,psVar3);
    FUN_05475d88(asStack_10,psVar1);
    UserPrefs::SetString(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    lVar2 = FUN_05474184(this + 0x18);
  }
  if (lVar2 != 0) {
    psVar3 = (string *)(this + 0x18);
    psVar1 = (string *)(this + 0x40);
    FUN_031dcc6c(asStack_18,this + 0x30,&DAT_06acc188);
    std::operator+(asStack_18,psVar1);
    SaveToLoaclFile(this,asStack_10,psVar3);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,this + 0x38,&DAT_06acc188);
    std::operator+(asStack_18,psVar1);
    SaveToLoaclFile(this,asStack_10,psVar3);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,&DAT_06acc1d8,psVar1);
    FUN_05475d88(asStack_10,psVar3);
    UserPrefs::SetString(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (this[0x20] != (IdentifierMgr)0x0) {
    psVar1 = (string *)(this + 0x40);
    FUN_031dcc6c(asStack_20,this + 0x30,&DAT_06acc158);
    std::operator+(asStack_20,psVar1);
    std::string::string(asStack_10,"true");
    SaveToLoaclFile(this,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    FUN_031dcc6c(asStack_20,this + 0x38,&DAT_06acc158);
    std::operator+(asStack_20,psVar1);
    std::string::string(asStack_10,"true");
    SaveToLoaclFile(this,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    FUN_031dcc6c(asStack_18,&DAT_06acc0e8,psVar1);
    std::string::string(asStack_10,"true");
    UserPrefs::SetString(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
  }
  psVar1 = (string *)(this + 0x50);
  lVar2 = FUN_05474184(psVar1);
  if (lVar2 != 0) {
    psVar3 = (string *)(this + 0x40);
    FUN_031dcc6c(asStack_18,this + 0x30,&DAT_06acc098);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,this + 0x38,&DAT_06acc098);
    std::operator+(asStack_18,psVar3);
    SaveToLoaclFile(this,asStack_10,psVar1);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    FUN_031dcc6c(asStack_18,&DAT_06acc180,psVar3);
    FUN_05475d88(asStack_10,psVar1);
    UserPrefs::SetString(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::GenerateLocalUUID() */

void IdentifierMgr::GenerateLocalUUID(void)

{
  char cVar1;
  undefined4 uVar2;
  IdentifierMgr *in_x0;
  ulong uVar3;
  time_t tVar4;
  DefineIDMgr *pDVar5;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = time((time_t *)0x0);
  Sexy::SRand(uVar3);
  tVar4 = time((time_t *)0x0);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  thunk_FUN_05460424(auStack_168,tVar4);
  FUN_05462824(asStack_1a0,auStack_178);
  pDVar5 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetUserDefineID(pDVar5);
  cVar1 = FUN_0547419c(asStack_198);
  if (cVar1 != '\0') {
    pDVar5 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
    DefineIDMgr::GetNewUserDefineID(pDVar5);
    FUN_05474278(asStack_198,asStack_180);
    std::string::~string(asStack_180);
  }
  uVar3 = FUN_05474184(asStack_1a0);
  if ((4 < uVar3) && (uVar3 = FUN_05474184(asStack_198), 4 < uVar3)) {
    FUN_05475ffc(asStack_180,asStack_198,0,4);
    FUN_0547635c(asStack_1a0,0,4,asStack_180);
    std::string::~string(asStack_180);
  }
  FUN_031f5e7c(asStack_190,&DAT_0559fa98,asStack_1a0);
  uVar3 = Sexy::Rand();
  Sexy::StrFormat("%08x",asStack_188,uVar3 & 0xffffffff);
  std::operator+(asStack_190,asStack_188);
  FUN_05474278(in_x0 + 8,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  SaveToKeychain(in_x0);
  FUN_05475d88();
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IdentifierMgr::SetUUIDLogin(bool) */

void __thiscall IdentifierMgr::SetUUIDLogin(IdentifierMgr *this,bool param_1)

{
  size_t in_x2;
  
  if (!param_1) {
    std::string::append((string *)(this + 0x50),"no",in_x2);
    SaveToKeychain(this);
    return;
  }
  std::string::append((string *)(this + 0x50),"yes",in_x2);
  SaveToKeychain(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onNotifyUUIDInit(bool, std::string const&, std::string const&) */

void __thiscall
IdentifierMgr::onNotifyUUIDInit(IdentifierMgr *this,bool param_1,string *param_2,string *param_3)

{
  NetworkMgr *this_00;
  long *plVar1;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    *(undefined4 *)(this + 0x24) = 3;
    thunk_FUN_05475e00(this + 8,param_2);
    thunk_FUN_05475e00(this + 0x10,param_3);
    FUN_031dcc6c(asStack_90,this + 8,this + 0x10);
    std::operator+(asStack_90,(string *)&DAT_06acc0d8);
    MD5::MD5(aMStack_78,asStack_88);
    MD5::toString();
    FUN_05474278(this + 0x18,asStack_80);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
    SaveToKeychain(this);
    if (this[0x21] != (IdentifierMgr)0x0) {
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
      if (*(code **)(*plVar1 + 0x3b8) == INetworkMsgProcess::RequestUUIDBind) {
        this[0x21] = (IdentifierMgr)0x0;
      }
      else {
        (**(code **)(*plVar1 + 0x3b8))();
        this[0x21] = (IdentifierMgr)0x0;
      }
    }
  }
  else {
    *(undefined4 *)(this + 0x24) = 4;
    LawnApp::KillWaitingDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onNotifyUUIDCheck(int, std::string const&) */

void __thiscall IdentifierMgr::onNotifyUUIDCheck(IdentifierMgr *this,int param_1,string *param_2)

{
  uint extraout_w1;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 0x4e26) {
    if (0x4e23 < param_1) {
      *(undefined4 *)(this + 0x24) = 4;
      goto LAB_03b63060;
    }
    if (param_1 == 0) {
      thunk_FUN_05475e00(this + 0x10,param_2);
      FUN_031dcc6c(asStack_90,this + 8,this + 0x10);
      std::operator+(asStack_90,(string *)&DAT_06acc0d8);
      MD5::MD5(aMStack_78,asStack_88);
      MD5::toString();
      FUN_05474278(this + 0x18,asStack_80);
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
      std::string::~string(asStack_90);
      SaveToKeychain(this);
      *(undefined4 *)(this + 0x24) = 6;
      goto LAB_03b63060;
    }
  }
  else if (param_1 == 0x4e27) {
    ResetKeychain(this);
    Sexy::LazySingleton<DefineIDMgr>::GetInstance();
    DefineIDMgr::ClearSaveDefineID();
    *(undefined4 *)(this + 0x24) = 4;
    std::string::string(asStack_90,&DAT_055e9df8);
    std::string::string(asStack_88,&DAT_055e9e10);
    std::string::string(asStack_80,&DAT_055e9e50);
    Android::UI::ShowAlertDialog(asStack_90,asStack_88,asStack_80,1);
    std::string::~string(asStack_80);
    nop();
    std::string::~string(asStack_88);
    nop();
    std::string::~string(asStack_90);
    nop();
    Sexy::SexySleep((Sexy *)0x1f40,extraout_w1);
    Android::Device::ExitApp();
    goto LAB_03b63060;
  }
  *(undefined4 *)(this + 0x24) = 6;
LAB_03b63060:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::onNotifyUUIDBind(bool) */

void __thiscall IdentifierMgr::onNotifyUUIDBind(IdentifierMgr *this,bool param_1)

{
  LawnApp *pLVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillWaitingDialog(gLawnApp);
  if (param_1) {
    *(undefined4 *)(this + 0x24) = 6;
    this[0x20] = (IdentifierMgr)0x1;
    SaveToKeychain(this);
    pLVar1 = gLawnApp;
    FUN_05478178(awStack_58,L"[SETTINGS_UUID_BIND_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[UUID_BIND_SUCCEED]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[UUID_BIND_SUCCEED_TIP]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRestartApp);
    Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  }
  else {
    *(undefined4 *)(this + 0x24) = 4;
    pLVar1 = gLawnApp;
    FUN_05478178(awStack_58,L"[SETTINGS_UUID_BIND_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[UUID_BIND_FAIL]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onBindDialogClosed);
    Sexy::Delegate0::Delegate0<IdentifierMgr,void(IdentifierMgr::*)()>(aDStack_38,awStack_50);
  }
  PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::ReadFromSaveFile(std::string const&) */

void IdentifierMgr::ReadFromSaveFile(string *param_1)

{
  char cVar1;
  string *in_x1;
  string *in_x8;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,in_x1);
  if (cVar1 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::Buffer::Buffer(aBStack_38);
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                      ((string *)Sexy::gSexyAppBase,(Buffer *)in_x1,SUB81(aBStack_38,0));
    if (cVar1 == '\0') {
      std::string::string(in_x8,"");
      nop();
    }
    else {
      Sexy::Buffer::ReadLine();
    }
    Sexy::Buffer::~Buffer(aBStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdentifierMgr::Init() */

void __thiscall IdentifierMgr::Init(IdentifierMgr *this)

{
  string *psVar1;
  string *psVar2;
  string *psVar3;
  IdentifierMgr *pIVar4;
  undefined *puVar5;
  SexyAppBase *pSVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Resources::GetExternalStorageDirectory(gLawnApp);
  psVar1 = (string *)(this + 0x30);
  psVar2 = (string *)(this + 0x38);
  std::operator+(asStack_98,"/");
  std::operator+((string *)&local_38,".pzir/");
  FUN_05474278(psVar1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  psVar3 = (string *)(this + 0x40);
  std::operator+(asStack_98,"/");
  std::operator+((string *)&local_38,"Android/data/.zp2ir/");
  FUN_05474278(psVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  DFinder::createDirectory(psVar1);
  DFinder::createDirectory(psVar2);
  cVar7 = LawnApp::IsPlatformHD((LawnApp *)gLawnApp);
  if ((cVar7 != '\0') && (lVar9 = FUN_05474184(psVar3), pSVar6 = Sexy::gSexyAppBase, lVar9 != 0)) {
    FUN_031dcc6c(asStack_88,psVar1,&DAT_06acc0f0);
    std::operator+(asStack_88,psVar3);
    cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,asStack_80);
    pSVar6 = Sexy::gSexyAppBase;
    if (cVar7 == '\0') {
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
    }
    else {
      FUN_031dcc6c(asStack_78,psVar1,&DAT_06acc1d0);
      std::operator+(asStack_78,psVar3);
      cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,asStack_70);
      pSVar6 = Sexy::gSexyAppBase;
      if (cVar7 == '\0') {
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
        std::string::~string(asStack_80);
        std::string::~string(asStack_88);
      }
      else {
        FUN_031dcc6c((string *)&local_68,psVar1,&DAT_06acc188);
        std::operator+((string *)&local_68,psVar3);
        cVar8 = Sexy::SexyAppBase::FileExists(pSVar6,(string *)&local_50);
        pSVar6 = Sexy::gSexyAppBase;
        cVar7 = '\0';
        if (cVar8 != '\0') {
          FUN_031dcc6c((string *)&local_38,psVar1,&DAT_06acc158);
          std::operator+((string *)&local_38,psVar3);
          cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,(string *)&local_20);
          std::string::~string((string *)&local_20);
          std::string::~string((string *)&local_38);
        }
        std::string::~string((string *)&local_50);
        std::string::~string((string *)&local_68);
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
        std::string::~string(asStack_80);
        std::string::~string(asStack_88);
        if (cVar7 != '\0') goto LAB_03b635f0;
      }
    }
    FUN_05475d88(asStack_90,psVar3);
    lVar9 = FUN_05474374(asStack_90,&DAT_055e9e78,0);
    while (pSVar6 = Sexy::gSexyAppBase, lVar9 != -1) {
      FUN_05476368(asStack_90,lVar9,4,&DAT_055923fe);
      lVar9 = FUN_05474374(asStack_90,&DAT_055e9e78,0);
    }
    FUN_031dcc6c(asStack_88,psVar1,&DAT_06acc0f0);
    std::operator+(asStack_88,asStack_90);
    cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,asStack_80);
    pSVar6 = Sexy::gSexyAppBase;
    if (cVar7 == '\0') {
      std::string::~string(asStack_80);
      std::string::~string(asStack_88);
    }
    else {
      FUN_031dcc6c(asStack_78,psVar1,&DAT_06acc1d0);
      std::operator+(asStack_78,asStack_90);
      cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,asStack_70);
      pSVar6 = Sexy::gSexyAppBase;
      if (cVar7 == '\0') {
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
        std::string::~string(asStack_80);
        std::string::~string(asStack_88);
      }
      else {
        FUN_031dcc6c((string *)&local_68,psVar1,&DAT_06acc188);
        std::operator+((string *)&local_68,asStack_90);
        cVar8 = Sexy::SexyAppBase::FileExists(pSVar6,(string *)&local_50);
        pSVar6 = Sexy::gSexyAppBase;
        cVar7 = '\0';
        if (cVar8 != '\0') {
          FUN_031dcc6c((string *)&local_38,psVar1,&DAT_06acc158);
          std::operator+((string *)&local_38,asStack_90);
          cVar7 = Sexy::SexyAppBase::FileExists(pSVar6,(string *)&local_20);
          std::string::~string((string *)&local_20);
          std::string::~string((string *)&local_38);
        }
        std::string::~string((string *)&local_50);
        std::string::~string((string *)&local_68);
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
        std::string::~string(asStack_80);
        std::string::~string(asStack_88);
        if (cVar7 != '\0') {
          thunk_FUN_05475e00(psVar3,asStack_90);
        }
      }
    }
    std::string::~string(asStack_90);
  }
LAB_03b635f0:
  pIVar4 = this + 8;
  FUN_031dcc6c((string *)&local_50,psVar1,&DAT_06acc0f0);
  std::operator+((string *)&local_50,psVar3);
  ReadFromSaveFile((string *)this);
  FUN_05474278(pIVar4,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_50);
  lVar9 = FUN_05474184(pIVar4);
  if (lVar9 == 0) {
    FUN_031dcc6c((string *)&local_50,psVar2,&DAT_06acc0f0);
    std::operator+((string *)&local_50,psVar3);
    ReadFromSaveFile((string *)this);
    FUN_05474278(pIVar4,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::~string((string *)&local_50);
    lVar9 = FUN_05474184(pIVar4);
    if (lVar9 == 0) {
      FUN_031dcc6c((string *)&local_50,&DAT_06acc0d0,psVar3);
      std::string::string((string *)&local_38,"");
      UserPrefs::GetString((UserPrefs *)&local_20,(string *)&local_50,(string *)&local_38);
      thunk_FUN_05475e00(pIVar4,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::~string((string *)&local_50);
    }
  }
  pIVar4 = this + 0x10;
  FUN_031dcc6c((string *)&local_50,psVar1,&DAT_06acc1d0);
  std::operator+((string *)&local_50,psVar3);
  ReadFromSaveFile((string *)this);
  FUN_05474278(pIVar4,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_50);
  lVar9 = FUN_05474184(pIVar4);
  if (lVar9 == 0) {
    FUN_031dcc6c((string *)&local_50,psVar2,&DAT_06acc1d0);
    std::operator+((string *)&local_50,psVar3);
    ReadFromSaveFile((string *)this);
    FUN_05474278(pIVar4,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::~string((string *)&local_50);
    lVar9 = FUN_05474184(pIVar4);
    if (lVar9 == 0) {
      FUN_031dcc6c((string *)&local_50,&DAT_06acc0e0,psVar3);
      std::string::string((string *)&local_38,"");
      UserPrefs::GetString((UserPrefs *)&local_20,(string *)&local_50,(string *)&local_38);
      thunk_FUN_05475e00(pIVar4,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::~string((string *)&local_50);
    }
  }
  pIVar4 = this + 0x18;
  FUN_031dcc6c((string *)&local_50,psVar1,&DAT_06acc188);
  std::operator+((string *)&local_50,psVar3);
  ReadFromSaveFile((string *)this);
  FUN_05474278(pIVar4,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_50);
  lVar9 = FUN_05474184(pIVar4);
  if (lVar9 == 0) {
    FUN_031dcc6c((string *)&local_50,psVar2,&DAT_06acc188);
    std::operator+((string *)&local_50,psVar3);
    ReadFromSaveFile((string *)this);
    FUN_05474278(pIVar4,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::~string((string *)&local_50);
    lVar9 = FUN_05474184(pIVar4);
    if (lVar9 == 0) {
      FUN_031dcc6c((string *)&local_50,&DAT_06acc1d8,psVar3);
      std::string::string((string *)&local_38,"");
      UserPrefs::GetString((UserPrefs *)&local_20,(string *)&local_50,(string *)&local_38);
      thunk_FUN_05475e00(pIVar4,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::~string((string *)&local_50);
    }
  }
  FUN_031dcc6c((string *)&local_38,psVar1,&DAT_06acc158);
  std::operator+((string *)&local_38,psVar3);
  ReadFromSaveFile((string *)this);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  lVar9 = FUN_05474184((string *)&local_68);
  if (lVar9 == 0) {
    FUN_031dcc6c((string *)&local_50,psVar2,&DAT_06acc158);
    std::operator+((string *)&local_50,psVar3);
    ReadFromSaveFile((string *)this);
    FUN_05474278((string *)&local_68,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::~string((string *)&local_50);
    lVar9 = FUN_05474184((string *)&local_68);
    if (lVar9 == 0) {
      FUN_031dcc6c((string *)&local_50,&DAT_06acc0e8,psVar3);
      std::string::string((string *)&local_38,"");
      UserPrefs::GetString((UserPrefs *)&local_20,(string *)&local_50,(string *)&local_38);
      thunk_FUN_05475e00((string *)&local_68,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::~string((string *)&local_50);
      lVar9 = FUN_05474184((string *)&local_68);
      if (lVar9 == 0) goto LAB_03b637a4;
    }
  }
  this[0x20] = (IdentifierMgr)0x1;
LAB_03b637a4:
  pIVar4 = this + 0x50;
  FUN_031dcc6c((string *)&local_50,psVar1,&DAT_06acc098);
  std::operator+((string *)&local_50,psVar3);
  ReadFromSaveFile((string *)this);
  FUN_05474278(pIVar4,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_50);
  lVar9 = FUN_05474184(pIVar4);
  if (lVar9 == 0) {
    FUN_031dcc6c((string *)&local_50,psVar2,&DAT_06acc098);
    std::operator+((string *)&local_50,psVar3);
    ReadFromSaveFile((string *)this);
    FUN_05474278(pIVar4,(string *)&local_20);
    std::string::~string((string *)&local_20);
    std::string::~string((string *)&local_38);
    std::string::~string((string *)&local_50);
    lVar9 = FUN_05474184(pIVar4);
    if (lVar9 == 0) {
      FUN_031dcc6c((string *)&local_50,&DAT_06acc180,psVar3);
      std::string::string((string *)&local_38,"yes");
      UserPrefs::GetString((UserPrefs *)&local_20,(string *)&local_50,(string *)&local_38);
      thunk_FUN_05475e00(pIVar4,(string *)&local_20);
      std::string::~string((string *)&local_20);
      std::string::~string((string *)&local_38);
      nop();
      std::string::~string((string *)&local_50);
    }
  }
  std::string::~string((string *)&local_68);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyUUIDBind);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<IdentifierMgr,void(IdentifierMgr::*)(bool)>>
            ((MessageRouter *)puVar5,Message::NotifyUUIDBind,&local_c0);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyUUIDLogin);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<IdentifierMgr,void(IdentifierMgr::*)(bool)>>
            ((MessageRouter *)puVar5,Message::NotifyUUIDLogin,&local_c0);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyUUIDInit);
  local_d0 = local_28;
  local_e0 = local_38;
  uStack_d8 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::string_const&,std::string_const&,Sexy::CBMemberTranslatorX<IdentifierMgr,void(IdentifierMgr::*)(bool,std::string_const&,std::string_const&)>>
            ((MessageRouter *)puVar5,Message::NotifyUUIDInit,&local_e0);
  puVar5 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyUUIDCheck);
  local_100 = local_20;
  uStack_f8 = uStack_18;
  local_f0 = local_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<IdentifierMgr,void(IdentifierMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar5,Message::NotifyUUIDCheck,&local_100);
  uVar10 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar10;
  std::string::~string(asStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

