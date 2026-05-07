// Class: LuaUpdateMgr


/* LuaUpdateMgr::onWaitingDialogClose() */

void __thiscall LuaUpdateMgr::onWaitingDialogClose(LuaUpdateMgr *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* LuaUpdateMgr::~LuaUpdateMgr() */

void __thiscall LuaUpdateMgr::~LuaUpdateMgr(LuaUpdateMgr *this)

{
  *(undefined ***)this = &PTR__LuaUpdateMgr_068478f0;
  *(undefined ***)(this + 8) = &PTR__LuaUpdateMgr_06847918;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x50))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::string::~string((string *)(this + 0x28));
  Sexy::LazySingleton<LuaUpdateMgr>::~LazySingleton((LazySingleton<LuaUpdateMgr> *)this);
  return;
}


/* non-virtual thunk to LuaUpdateMgr::~LuaUpdateMgr() */

void __thiscall LuaUpdateMgr::~LuaUpdateMgr(LuaUpdateMgr *this)

{
  ~LuaUpdateMgr(this + -8);
  return;
}


/* LuaUpdateMgr::~LuaUpdateMgr() */

void __thiscall LuaUpdateMgr::~LuaUpdateMgr(LuaUpdateMgr *this)

{
  ~LuaUpdateMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LuaUpdateMgr::~LuaUpdateMgr() */

void __thiscall LuaUpdateMgr::~LuaUpdateMgr(LuaUpdateMgr *this)

{
  ~LuaUpdateMgr(this + -8);
  return;
}


/* LuaUpdateMgr::onLuaUpdateCancel() */

void __thiscall LuaUpdateMgr::onLuaUpdateCancel(LuaUpdateMgr *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x30] = (LuaUpdateMgr)0x0;
  return;
}


/* LuaUpdateMgr::GetRSBFileName() const */

char * LuaUpdateMgr::GetRSBFileName(void)

{
  return "LuaAct.rsb";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::LuaUpdateMgr() */

void __thiscall LuaUpdateMgr::LuaUpdateMgr(LuaUpdateMgr *this)

{
  string *psVar1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LuaUpdateMgr>::LazySingleton((LazySingleton<LuaUpdateMgr> *)this);
  AssetsManagerDelegateProtocol::AssetsManagerDelegateProtocol
            ((AssetsManagerDelegateProtocol *)(this + 8));
  *(undefined ***)this = &PTR__LuaUpdateMgr_068478f0;
  *(undefined ***)(this + 8) = &PTR__LuaUpdateMgr_06847918;
  Set8BytesTo0(psVar1);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x30] = (LuaUpdateMgr)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  std::string::string(asStack_20,"");
  nop();
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  thunk_FUN_05475e00(asStack_20,asStack_18);
  Sexy::SexyAppBase::SetResumeCachedFolder((string *)gLawnApp);
  FUN_05475ad8(asStack_20,&DAT_05636618);
  DFinder::createDirectory(asStack_20);
  std::operator+(psVar1,"rsb/");
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  std::operator+(psVar1,"download/");
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  thunk_FUN_05475e00(psVar1,asStack_20);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::GetPackageRSBFilePath() */

void __thiscall LuaUpdateMgr::GetPackageRSBFilePath(LuaUpdateMgr *this)

{
  SexyAppBase *pSVar1;
  char cVar2;
  char *pcVar3;
  string *in_x8;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  nop();
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  std::operator+(asStack_18,"/");
  FUN_05474278(asStack_20,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  pSVar1 = Sexy::gSexyAppBase;
  pcVar3 = (char *)GetRSBFileName();
  std::operator+(asStack_20,pcVar3);
  std::operator+(asStack_18,".smf");
  cVar2 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (cVar2 == '\0') {
    Android::Resources::GetUserDataFolder(gLawnApp);
    std::operator+(asStack_18,"/");
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    pSVar1 = Sexy::gSexyAppBase;
    pcVar3 = (char *)GetRSBFileName();
    std::operator+(asStack_20,pcVar3);
    std::operator+(asStack_18,".smf");
    cVar2 = Sexy::SexyAppBase::FileExists(pSVar1,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (cVar2 == '\0') {
      std::string::string(in_x8,"");
      nop();
      goto LAB_043fef80;
    }
  }
  FUN_05474148();
LAB_043fef80:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::CheckUpdate() */

void __thiscall LuaUpdateMgr::CheckUpdate(LuaUpdateMgr *this)

{
  char cVar1;
  AssetsManagerEx *this_00;
  AssetsManagerManifest *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_10,*(long **)(gLawnApp + 0x28));
  std::operator+(asStack_10,"LuaManifest.json");
  std::string::~string(asStack_10);
  this_00 = ::operator_new(0x1c8,(nothrow_t *)&std::nothrow);
  if (this_00 != (AssetsManagerEx *)0x0) {
    AssetsManagerEx::AssetsManagerEx(this_00,asStack_18,(string *)(this + 0x28));
  }
  *(AssetsManagerEx **)(this + 0x10) = this_00;
  Sexy::PrimeGlyphMesh::SetLineLayout((PrimeGlyphMesh *)this_00,(LineLayout *)(this + 8));
  this_01 = (AssetsManagerManifest *)
            AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(this + 0x10));
  cVar1 = AssetsManagerManifest::isLoaded(this_01);
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"Fail to update assets, step skipped.\n");
  }
  else {
    AssetsManagerEx::checkUpdate(*(AssetsManagerEx **)(this + 0x10));
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::DoUpdate() */

void __thiscall LuaUpdateMgr::DoUpdate(LuaUpdateMgr *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_00;
  PrimeTypeface *pPVar4;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_043fec08(400);
  iVar3 = FUN_043fec08(0xfa);
  this_00 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(aIStack_50,L"[LUA_UPDATE_TIP]",awStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  nop();
  FUN_05478178(awStack_58,L"[LUA_UPDATE_CONTENT]",auStack_68);
  Sexy::StrFormat(L"%.1f",awStack_60,(double)*(float *)(this + 0x34));
  TodReplaceString(awStack_58,L"{NUMBER}",awStack_60);
  PVZ2UIDialog::SetFooterLabel(this_00,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_58);
  nop();
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Color::Color((Color *)aIStack_50,1);
  PVZ2UIDialog::SetHeaderFont(this_00,pPVar4,(Color *)aIStack_50);
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Insets::Insets(aIStack_50,0x61,0x34,0,0xff);
  PVZ2UIDialog::SetFooterFont(this_00,pPVar4,(Color *)aIStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,8);
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[LUA_UPDATE_CANCEL]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onLuaUpdateCancel);
    Sexy::Delegate0::Delegate0<LuaUpdateMgr,void(LuaUpdateMgr::*)()>(aDStack_38,aIStack_50);
    PVZ2UIDialog::AddButton(this_00,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  FUN_05478178(awStack_58,L"[LUA_UPDATE_OK]",awStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLuaUpdateOK);
  Sexy::Delegate0::Delegate0<LuaUpdateMgr,void(LuaUpdateMgr::*)()>(aDStack_38,aIStack_50);
  PVZ2UIDialog::AddButton(this_00,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::onLuaUpdateOK() */

void __thiscall LuaUpdateMgr::onLuaUpdateOK(LuaUpdateMgr *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  PrimeTypeface *pPVar2;
  PVZ2WaitingDialog *pPVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (*(AssetsManagerEx **)(this + 0x10) != (AssetsManagerEx *)0x0) {
    AssetsManagerEx::update(*(AssetsManagerEx **)(this + 0x10));
  }
  this_00 = gLawnApp;
  TodStringTranslate(L"[LUA_UPDATE_TIP]");
  uVar1 = LawnApp::ShowWaitingDialog(this_00,(wstring *)aIStack_50,0x78,0xfa,400);
  *(undefined8 *)(this + 0x18) = uVar1;
  FUN_05476c50(aIStack_50);
  pPVar4 = *(PVZ2UIDialog **)(this + 0x18);
  pPVar2 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Color::Color((Color *)aIStack_50,1);
  PVZ2UIDialog::SetHeaderFont(pPVar4,pPVar2,(Color *)aIStack_50);
  pPVar4 = *(PVZ2UIDialog **)(this + 0x18);
  pPVar2 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Insets::Insets(aIStack_50,0x61,0x34,0,0xff);
  PVZ2UIDialog::SetFooterFont(pPVar4,pPVar2,(Color *)aIStack_50);
  PVZ2WaitingDialog::SetShowWaiting(*(PVZ2WaitingDialog **)(this + 0x18),false);
  pPVar3 = *(PVZ2WaitingDialog **)(this + 0x18);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaitingDialogClose);
  Sexy::Delegate0::Delegate0<LuaUpdateMgr,void(LuaUpdateMgr::*)()>(aDStack_38,aIStack_50);
  PVZ2WaitingDialog::SetCloseCallBack(pPVar3,aDStack_38);
  pPVar4 = *(PVZ2UIDialog **)(this + 0x18);
  FUN_05478178(aIStack_50,L"[DIALOG_WAITING]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(pPVar4,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::LoadLuaRSB() */

void __thiscall LuaUpdateMgr::LoadLuaRSB(LuaUpdateMgr *this)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  string *__n;
  ResourceManager *this_00;
  string asStack_190 [8];
  string asStack_188 [8];
  UserPrefs aUStack_180 [8];
  string asStack_178 [8];
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_160,*(long **)(gLawnApp + 0x28));
  std::operator+(asStack_160,"LuaManifest.json");
  std::string::~string(asStack_160);
  std::string::string(asStack_168,"");
  AssetsManagerManifest::AssetsManagerManifest((AssetsManagerManifest *)asStack_160,asStack_168);
  std::string::~string(asStack_168);
  nop();
  AssetsManagerManifest::parse((AssetsManagerManifest *)asStack_160,asStack_190);
  cVar1 = AssetsManagerManifest::isLoaded((AssetsManagerManifest *)asStack_160);
  if ((cVar1 != '\0') &&
     (cVar1 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)asStack_160),
     cVar1 != '\0')) {
    uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)asStack_160);
    FUN_05475d88(asStack_188,uVar2);
    std::string::string(asStack_170,"LuaDLCNewVersion");
    __n = asStack_178;
    std::string::string(asStack_168,"");
    UserPrefs::GetString(aUStack_180,asStack_170,asStack_168);
    std::string::~string(asStack_168);
    nop();
    std::string::~string(asStack_170);
    nop();
    GetPackageRSBFilePath(this);
    lVar3 = FUN_05474184(asStack_178);
    if (lVar3 != 0) {
      std::string::append((string *)(gLawnApp + 0x2978),"Package_RSB",(size_t)__n);
      __s = (char *)GetRSBFileName();
      std::string::string(asStack_170,__s);
      nop();
      FUN_05475ad8(asStack_170,&DAT_05607bd0);
      this_00 = *(ResourceManager **)(gLawnApp + 0x848);
      std::string::string(asStack_168,"properties\\resourcesLuaAct.rton");
      Sexy::ResourceManager::AddDLCRsb(this_00,asStack_178,asStack_170,asStack_168);
      std::string::~string(asStack_168);
      nop();
      Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
      Lua::CLuaEngine::DidFinishPrepair();
      std::string::~string(asStack_170);
    }
    std::string::~string(asStack_178);
    std::string::~string((string *)aUStack_180);
    std::string::~string(asStack_188);
  }
  AssetsManagerManifest::~AssetsManagerManifest((AssetsManagerManifest *)asStack_160);
  std::string::~string(asStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuaUpdateMgr::Init() */

void __thiscall LuaUpdateMgr::Init(LuaUpdateMgr *this)

{
  std::string::append((string *)(gLawnApp + 0x2978),"1.0.0",gLawnApp);
  LoadLuaRSB(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuaUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float, std::string const&,
   std::string const&, int, int) */

void LuaUpdateMgr::dispatchEvent
               (LuaUpdateMgr *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               Sexy *param_5)

{
  string *psVar1;
  LawnApp *pLVar2;
  SexyAppBase *pSVar3;
  string *psVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  AssetsManagerManifest *pAVar10;
  char *pcVar11;
  PVZ2UIDialog *pPVar12;
  PrimeTypeface *pPVar13;
  string *extraout_x1;
  undefined4 uVar14;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    pcVar11 = "No local manifest file found";
    goto LAB_043ff924;
  case 1:
    param_1[0x30] = (LuaUpdateMgr)0x0;
    goto LAB_043ff998;
  case 2:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    pcVar11 = "Fail to parse manifest file";
LAB_043ff924:
    std::string::string(asStack_58,pcVar11);
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    break;
  case 3:
    Sexy::OutputDebugStrF((wchar_t *)"new version found. \n");
    param_1[0x30] = (LuaUpdateMgr)0x1;
    pAVar10 = (AssetsManagerManifest *)
              AssetsManagerEx::getRemoteManifest(*(AssetsManagerEx **)(param_1 + 0x10));
    if ((pAVar10 != (AssetsManagerManifest *)0x0) &&
       (cVar5 = AssetsManagerManifest::isVersionLoaded(pAVar10), cVar5 != '\0')) {
      uVar14 = AssetsManagerManifest::getTotalFileSize(pAVar10);
      *(undefined4 *)(param_1 + 0x34) = uVar14;
    }
    break;
  case 4:
    uVar8 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Already up to date. %s \n",uVar8);
    param_1[0x30] = (LuaUpdateMgr)0x0;
    LoadLuaRSB(param_1);
    break;
  case 5:
    pPVar12 = *(PVZ2UIDialog **)(param_1 + 0x18);
    if (pPVar12 != (PVZ2UIDialog *)0x0) {
      FUN_05478178((wstring *)asStack_58,L"[LUA_UPDATE_DOWNLOADING]",asStack_68);
      Sexy::UTF8StringToWString(param_5,extraout_x1);
      TodReplaceString((wstring *)asStack_58,L"{NUMBER}",awStack_60);
      PVZ2UIDialog::SetFooterLabel(pPVar12,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      FUN_05476c50(awStack_60);
      FUN_05476c50((wstring *)asStack_58);
      nop();
    }
    break;
  case 7:
    uVar8 = FUN_0547429c(param_4);
    uVar9 = FUN_0547429c(param_5);
    Sexy::StrFormat("ERROR_UPDATING Asset %s_%s",asStack_58,uVar8,uVar9);
    goto LAB_043ff874;
  case 8:
    uVar8 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Update finished. %s \n",uVar8);
    param_1[0x30] = (LuaUpdateMgr)0x0;
    LawnApp::KillWaitingDialog(gLawnApp);
    *(undefined8 *)(param_1 + 0x18) = 0;
    pLVar2 = gLawnApp;
    iVar6 = FUN_043fec08(400);
    iVar7 = FUN_043fec08(0xfa);
    pPVar12 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
    FUN_05478178((Insets *)asStack_50,L"[LUA_UPDATE_TIP]",asStack_58);
    PVZ2UIDialog::SetHeaderLabel(pPVar12,(wstring *)asStack_50);
    FUN_05476c50((Insets *)asStack_50);
    nop();
    FUN_05478178((Insets *)asStack_50,L"[LUA_UPDATE_SUCCEED]",asStack_58);
    PVZ2UIDialog::SetFooterLabel(pPVar12,(wstring *)asStack_50);
    FUN_05476c50((Insets *)asStack_50);
    nop();
    pPVar13 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    Sexy::Color::Color((Color *)asStack_50,1);
    PVZ2UIDialog::SetHeaderFont(pPVar12,pPVar13,(Color *)asStack_50);
    pPVar13 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Insets::Insets((Insets *)asStack_50,0x61,0x34,0,0xff);
    PVZ2UIDialog::SetFooterFont(pPVar12,pPVar13,(Color *)asStack_50);
    FUN_05478178(asStack_58,L"[DIALOG_STRING_OK]",(string *)awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(Insets *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar12,asStack_58,aDStack_38,0);
    FUN_05476c50(asStack_58);
    nop();
    if ((((*(AssetsManagerEx **)(param_1 + 0x10) != (AssetsManagerEx *)0x0) &&
         (pAVar10 = (AssetsManagerManifest *)
                    AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(param_1 + 0x10)),
         pAVar10 != (AssetsManagerManifest *)0x0)) &&
        (cVar5 = AssetsManagerManifest::isLoaded(pAVar10), cVar5 != '\0')) &&
       (cVar5 = AssetsManagerManifest::isVersionLoaded(pAVar10), cVar5 != '\0')) {
      uVar8 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pAVar10);
      FUN_05475d88((string *)awStack_60,uVar8);
      std::string::string(asStack_58,"LuaDLCNewVersion");
      FUN_05475d88((Insets *)asStack_50,(string *)awStack_60);
      UserPrefs::SetString(asStack_58,(Insets *)asStack_50);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      nop();
      nop();
      std::string::~string((string *)awStack_60);
    }
    pSVar3 = Sexy::gSexyAppBase;
    psVar1 = (string *)(param_1 + 0x28);
    std::operator+(psVar1,"download/");
    pcVar11 = (char *)GetRSBFileName();
    std::operator+(asStack_58,pcVar11);
    cVar5 = Sexy::SexyAppBase::FileExists(pSVar3,asStack_50);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    pSVar3 = Sexy::gSexyAppBase;
    if (cVar5 != '\0') {
      std::operator+(psVar1,"rsb/");
      pcVar11 = (char *)GetRSBFileName();
      std::operator+(asStack_58,pcVar11);
      cVar5 = Sexy::SexyAppBase::FileExists(pSVar3,asStack_50);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      psVar4 = (string *)Sexy::gSexyAppBase;
      if (cVar5 != '\0') {
        std::operator+(psVar1,"rsb/");
        pcVar11 = (char *)GetRSBFileName();
        std::operator+(asStack_58,pcVar11);
        Sexy::SexyAppBase::EraseFile(psVar4);
        std::string::~string(asStack_50);
        std::string::~string(asStack_58);
      }
      psVar4 = (string *)Sexy::gSexyAppBase;
      std::operator+(psVar1,"download/");
      pcVar11 = (char *)GetRSBFileName();
      std::operator+(asStack_68,pcVar11);
      std::operator+(psVar1,"rsb/");
      pcVar11 = (char *)GetRSBFileName();
      std::operator+(asStack_58,pcVar11);
      Sexy::SexyAppBase::RenameFile(psVar4,(string *)awStack_60);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      std::string::~string((string *)awStack_60);
      std::string::~string(asStack_68);
    }
LAB_043ff998:
    LoadLuaRSB(param_1);
    break;
  case 9:
  case 10:
    uVar8 = FUN_0547429c(param_5);
    Sexy::StrFormat("Update Failed %s",(string *)awStack_60,uVar8);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    iVar6 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    if (iVar6 + 1 < 3) {
      Sexy::LazySingleton<DebugLog>::GetInstancePtr();
      std::string::string(asStack_58,"downloadFailedAssets");
      std::string::string(asStack_50,"PvZ2Debug");
      nop();
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      AssetsManagerEx::downloadFailedAssets(*(AssetsManagerEx **)(param_1 + 0x10));
    }
    else {
      Sexy::LazySingleton<DebugLog>::GetInstancePtr();
      std::string::string(asStack_58,"Reach maximum fail count");
      std::string::string(asStack_50,"PvZ2Debug");
      nop();
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(param_1 + 0x20) = 0;
      param_1[0x30] = (LuaUpdateMgr)0x0;
      LawnApp::KillWaitingDialog(gLawnApp);
      *(undefined8 *)(param_1 + 0x18) = 0;
      pLVar2 = gLawnApp;
      iVar6 = FUN_043fec08(400);
      iVar7 = FUN_043fec08(0xfa);
      pPVar12 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
      FUN_05478178(asStack_50,L"[LUA_UPDATE_TIP]",asStack_58);
      PVZ2UIDialog::SetHeaderLabel(pPVar12,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      FUN_05478178(asStack_50,L"[LUA_UPDATE_FAIL]",asStack_58);
      PVZ2UIDialog::SetFooterLabel(pPVar12,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      pPVar13 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      Sexy::Color::Color((Color *)asStack_50,1);
      PVZ2UIDialog::SetHeaderFont(pPVar12,pPVar13,(Color *)asStack_50);
      pPVar13 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      Sexy::Insets::Insets((Insets *)asStack_50,0x61,0x34,0,0xff);
      PVZ2UIDialog::SetFooterFont(pPVar12,pPVar13,(Color *)asStack_50);
      FUN_05478178(asStack_58,L"[DIALOG_STRING_OK]",asStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
      PVZ2UIDialog::AddButton(pPVar12,asStack_58,aDStack_38,0);
      FUN_05476c50(asStack_58);
      nop();
    }
    std::string::~string((string *)awStack_60);
    break;
  case 0xb:
    uVar8 = FUN_0547429c(param_5);
    Sexy::StrFormat("ERROR_DECOMPRESS %s",asStack_58,uVar8);
LAB_043ff874:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LuaUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float,
   std::string const&, std::string const&, int, int) */

void __thiscall LuaUpdateMgr::dispatchEvent(LuaUpdateMgr *this)

{
  dispatchEvent(this + -8);
  return;
}

