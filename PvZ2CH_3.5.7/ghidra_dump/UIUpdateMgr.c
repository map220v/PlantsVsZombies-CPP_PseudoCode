// Class: UIUpdateMgr


/* UIUpdateMgr::onWaitingDialogClose() */

void __thiscall UIUpdateMgr::onWaitingDialogClose(UIUpdateMgr *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* UIUpdateMgr::~UIUpdateMgr() */

void __thiscall UIUpdateMgr::~UIUpdateMgr(UIUpdateMgr *this)

{
  *(undefined ***)this = &PTR__UIUpdateMgr_068479f0;
  *(undefined ***)(this + 8) = &PTR__UIUpdateMgr_06847a18;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x50))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x28));
  Sexy::LazySingleton<UIUpdateMgr>::~LazySingleton((LazySingleton<UIUpdateMgr> *)this);
  return;
}


/* non-virtual thunk to UIUpdateMgr::~UIUpdateMgr() */

void __thiscall UIUpdateMgr::~UIUpdateMgr(UIUpdateMgr *this)

{
  ~UIUpdateMgr(this + -8);
  return;
}


/* UIUpdateMgr::~UIUpdateMgr() */

void __thiscall UIUpdateMgr::~UIUpdateMgr(UIUpdateMgr *this)

{
  ~UIUpdateMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUpdateMgr::~UIUpdateMgr() */

void __thiscall UIUpdateMgr::~UIUpdateMgr(UIUpdateMgr *this)

{
  ~UIUpdateMgr(this + -8);
  return;
}


/* UIUpdateMgr::GetRSBFileName() const */

char * UIUpdateMgr::GetRSBFileName(void)

{
  return "update.rsb";
}


/* UIUpdateMgr::CheckUpdate() */

void __thiscall UIUpdateMgr::CheckUpdate(UIUpdateMgr *this)

{
  char cVar1;
  AssetsManagerManifest *this_00;
  
  if (*(string **)(this + 0x10) == (string *)0x0) {
    return;
  }
  AssetsManagerEx::setRsbVersion(*(string **)(this + 0x10));
  this_00 = (AssetsManagerManifest *)
            AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(this + 0x10));
  cVar1 = AssetsManagerManifest::isLoaded(this_00);
  if (cVar1 != '\0') {
    AssetsManagerEx::checkUpdate(*(AssetsManagerEx **)(this + 0x10));
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"Fail to update assets, step skipped.\n");
  return;
}


/* UIUpdateMgr::onUIUpdateUpdateCancel() */

void __thiscall UIUpdateMgr::onUIUpdateUpdateCancel(UIUpdateMgr *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x30] = (UIUpdateMgr)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::UIUpdateMgr() */

void __thiscall UIUpdateMgr::UIUpdateMgr(UIUpdateMgr *this)

{
  string *psVar1;
  undefined **__n;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<UIUpdateMgr>::LazySingleton((LazySingleton<UIUpdateMgr> *)this);
  AssetsManagerDelegateProtocol::AssetsManagerDelegateProtocol
            ((AssetsManagerDelegateProtocol *)(this + 8));
  __n = &PTR__UIUpdateMgr_06847a18;
  *(undefined ***)this = &PTR__UIUpdateMgr_068479f0;
  *(undefined ***)(this + 8) = &PTR__UIUpdateMgr_06847a18;
  Set8BytesTo0(psVar1);
  Set8BytesTo0((string *)(this + 0x38));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x30] = (UIUpdateMgr)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  std::string::append((string *)(this + 0x38),"",(size_t)__n);
  this[0x40] = (UIUpdateMgr)0x0;
  std::string::string(asStack_20,"");
  nop();
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  thunk_FUN_05475e00(asStack_20,asStack_18);
  Sexy::SexyAppBase::SetResumeCachedFolder((string *)gLawnApp);
  FUN_05475ad8(asStack_20,"update/");
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
/* UIUpdateMgr::GetPackageRSBFilePath() */

void __thiscall UIUpdateMgr::GetPackageRSBFilePath(UIUpdateMgr *this)

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
      goto LAB_04400db4;
    }
  }
  FUN_05474148();
LAB_04400db4:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::Init() */

void __thiscall UIUpdateMgr::Init(UIUpdateMgr *this)

{
  int iVar1;
  AssetsManagerEx *this_00;
  FilesystemSaveGameContext *this_01;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_10,*(long **)(gLawnApp + 0x28));
  std::operator+(asStack_10,"UpdateManifest.json");
  std::string::~string(asStack_10);
  this_00 = ::operator_new(0x1c8,(nothrow_t *)&std::nothrow);
  if (this_00 != (AssetsManagerEx *)0x0) {
    AssetsManagerEx::AssetsManagerEx(this_00,asStack_18,(string *)(this + 0x28));
  }
  *(AssetsManagerEx **)(this + 0x10) = this_00;
  Sexy::PrimeGlyphMesh::SetLineLayout((PrimeGlyphMesh *)this_00,(LineLayout *)(this + 8));
  this_01 = (FilesystemSaveGameContext *)
            AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(this + 0x10));
  uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer(this_01);
  FUN_05475d88(asStack_10,uVar2);
  iVar1 = AssetsManagerManifest::getVersionToInt(asStack_10);
  std::string::~string(asStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)(gLawnApp + 0x2980) = 1;
  }
  else {
    *(int *)(gLawnApp + 0x2980) = iVar1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::onUIUpdateUpdateOK() */

void __thiscall UIUpdateMgr::onUIUpdateUpdateOK(UIUpdateMgr *this)

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
  if (*(AssetsManagerEx **)(this + 0x10) != (AssetsManagerEx *)0x0) {
    AssetsManagerEx::update(*(AssetsManagerEx **)(this + 0x10));
  }
  this_00 = gLawnApp;
  TodStringTranslate(L"[LUA_UPDATE_TIP]");
  uVar1 = LawnApp::ShowWaitingDialog(this_00,(wstring *)aIStack_50,0x3c,0xfa,400);
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
  Sexy::Delegate0::Delegate0<UIUpdateMgr,void(UIUpdateMgr::*)()>(aDStack_38,aIStack_50);
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
/* UIUpdateMgr::DoUpdate() */

void __thiscall UIUpdateMgr::DoUpdate(UIUpdateMgr *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  PrimeTypeface *pPVar2;
  PVZ2WaitingDialog *pPVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(AssetsManagerEx **)(this + 0x10) != (AssetsManagerEx *)0x0) {
    AssetsManagerEx::update(*(AssetsManagerEx **)(this + 0x10));
  }
  this_00 = gLawnApp;
  TodStringTranslate(L"[LUA_UPDATE_TIP]");
  uVar1 = LawnApp::ShowWaitingDialog(this_00,(wstring *)aIStack_50,0x3c,0xfa,400);
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
  Sexy::Delegate0::Delegate0<UIUpdateMgr,void(UIUpdateMgr::*)()>(aDStack_38,aIStack_50);
  PVZ2WaitingDialog::SetCloseCallBack(pPVar3,aDStack_38);
  pPVar4 = *(PVZ2UIDialog **)(this + 0x18);
  FUN_05478178(aIStack_50,L"[DIALOG_WAITING]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(pPVar4,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::RequestUpdate() */

void __thiscall UIUpdateMgr::RequestUpdate(UIUpdateMgr *this)

{
  ulong uVar1;
  undefined8 uVar2;
  DNetwork *this_00;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1440];
  string asStack_748 [1856];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d48,"");
  nop();
  uVar1 = Android::Info::SysGetProductVersionCode();
  Sexy::StrFormat("%d",asStack_ce8,uVar1 & 0xffffffff);
  FUN_05474278(asStack_d48,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::string(asStack_ce8,"pv");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar2,asStack_d48);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_044005ac(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_748,(map *)amStack_d18,30.0,(function *)afStack_d38,true,false,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::string::~string(asStack_d48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::LoadUIUpdateRSB() */

void __thiscall UIUpdateMgr::LoadUIUpdateRSB(UIUpdateMgr *this)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
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
  std::operator+(asStack_160,"UpdateManifest.json");
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
    std::string::string(asStack_170,"UIUpdateNewVersion");
    std::string::string(asStack_168,"");
    UserPrefs::GetString(aUStack_180,asStack_170,asStack_168);
    std::string::~string(asStack_168);
    nop();
    std::string::~string(asStack_170);
    nop();
    GetPackageRSBFilePath(this);
    lVar3 = FUN_05474184(asStack_178);
    if (lVar3 != 0) {
      __s = (char *)GetRSBFileName();
      std::string::string(asStack_170,__s);
      nop();
      FUN_05475ad8(asStack_170,&DAT_05607bd0);
      this_00 = *(ResourceManager **)(gLawnApp + 0x848);
      std::string::string(asStack_168,"properties\\resourcesUpdate.rton");
      Sexy::ResourceManager::AddDLCRsb(this_00,asStack_178,asStack_170,asStack_168);
      std::string::~string(asStack_168);
      nop();
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float, std::string const&,
   std::string const&, int, int) */

void UIUpdateMgr::dispatchEvent
               (UIUpdateMgr *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               Sexy *param_5)

{
  string *psVar1;
  LawnApp *pLVar2;
  SexyAppBase *pSVar3;
  string *psVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  PVZ2UIDialog *pPVar9;
  PrimeTypeface *pPVar10;
  AssetsManagerManifest *pAVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  string *extraout_x1;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    std::string::string(asStack_58,"No local manifest file found");
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    goto LAB_0440181c;
  case 2:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    std::string::string(asStack_58,"Fail to parse manifest file");
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    LoadUIUpdateRSB(param_1);
    break;
  case 3:
    Sexy::OutputDebugStrF((wchar_t *)"new version found. \n");
    param_1[0x30] = (UIUpdateMgr)0x1;
    pAVar11 = (AssetsManagerManifest *)
              AssetsManagerEx::getRemoteManifest(*(AssetsManagerEx **)(param_1 + 0x10));
    if ((pAVar11 != (AssetsManagerManifest *)0x0) &&
       (cVar5 = AssetsManagerManifest::isVersionLoaded(pAVar11), cVar5 != '\0')) {
      uVar8 = AssetsManagerManifest::getTotalFileSize(pAVar11);
      *(undefined4 *)(param_1 + 0x34) = uVar8;
    }
    cVar5 = AssetsManagerEx::isWaitToUpdate(*(AssetsManagerEx **)(param_1 + 0x10));
    if (cVar5 == '\0') {
      DoUpdate(param_1);
    }
    break;
  case 4:
    uVar13 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Already up to date. %s \n",uVar13);
  case 1:
    param_1[0x30] = (UIUpdateMgr)0x0;
    goto LAB_0440181c;
  case 5:
    pPVar9 = *(PVZ2UIDialog **)(param_1 + 0x18);
    if (pPVar9 != (PVZ2UIDialog *)0x0) {
      FUN_05478178((wstring *)asStack_58,L"[LUA_UPDATE_DOWNLOADING]",asStack_68);
      Sexy::UTF8StringToWString(param_5,extraout_x1);
      TodReplaceString((wstring *)asStack_58,L"{NUMBER}",(wstring *)asStack_60);
      PVZ2UIDialog::SetFooterLabel(pPVar9,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_60);
      FUN_05476c50((wstring *)asStack_58);
      nop();
    }
    break;
  case 7:
    uVar13 = FUN_0547429c(param_4);
    uVar14 = FUN_0547429c(param_5);
    Sexy::StrFormat("ERROR_UPDATING Asset %s_%s",asStack_58,uVar13,uVar14);
    goto LAB_04401cf8;
  case 8:
    uVar13 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Update finished. %s \n",uVar13);
    param_1[0x30] = (UIUpdateMgr)0x0;
    LawnApp::KillWaitingDialog(gLawnApp);
    *(undefined8 *)(param_1 + 0x18) = 0;
    pLVar2 = gLawnApp;
    iVar6 = FUN_04400608(400);
    iVar7 = FUN_04400608(0xfa);
    pPVar9 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
    FUN_05478178((Insets *)asStack_50,L"[LUA_UPDATE_TIP]",asStack_58);
    PVZ2UIDialog::SetHeaderLabel(pPVar9,(wstring *)asStack_50);
    FUN_05476c50((Insets *)asStack_50);
    nop();
    FUN_05478178((Insets *)asStack_50,L"[LUA_UPDATE_SUCCEED]",asStack_58);
    PVZ2UIDialog::SetFooterLabel(pPVar9,(wstring *)asStack_50);
    FUN_05476c50((Insets *)asStack_50);
    nop();
    pPVar10 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    Sexy::Color::Color((Color *)asStack_50,1);
    PVZ2UIDialog::SetHeaderFont(pPVar9,pPVar10,(Color *)asStack_50);
    pPVar10 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Insets::Insets((Insets *)asStack_50,0x61,0x34,0,0xff);
    PVZ2UIDialog::SetFooterFont(pPVar9,pPVar10,(Color *)asStack_50);
    FUN_05478178(asStack_58,L"[DIALOG_STRING_OK]",asStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(Insets *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar9,asStack_58,aDStack_38,0);
    FUN_05476c50(asStack_58);
    nop();
    if ((((*(AssetsManagerEx **)(param_1 + 0x10) != (AssetsManagerEx *)0x0) &&
         (pAVar11 = (AssetsManagerManifest *)
                    AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(param_1 + 0x10)),
         pAVar11 != (AssetsManagerManifest *)0x0)) &&
        (cVar5 = AssetsManagerManifest::isLoaded(pAVar11), cVar5 != '\0')) &&
       (cVar5 = AssetsManagerManifest::isVersionLoaded(pAVar11), cVar5 != '\0')) {
      uVar13 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)pAVar11);
      FUN_05475d88(asStack_60,uVar13);
      pLVar2 = gLawnApp;
      FUN_05475d88((Insets *)asStack_50,asStack_60);
      uVar8 = AssetsManagerManifest::getVersionToInt((Insets *)asStack_50);
      *(undefined4 *)(pLVar2 + 0x2980) = uVar8;
      std::string::~string(asStack_50);
      std::string::string(asStack_58,"UIUpdateNewVersion");
      FUN_05475d88((Insets *)asStack_50,asStack_60);
      UserPrefs::SetString(asStack_58,(Insets *)asStack_50);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      nop();
      nop();
      std::string::~string(asStack_60);
    }
    pSVar3 = Sexy::gSexyAppBase;
    psVar1 = (string *)(param_1 + 0x28);
    std::operator+(psVar1,"download/");
    pcVar12 = (char *)GetRSBFileName();
    std::operator+(asStack_58,pcVar12);
    cVar5 = Sexy::SexyAppBase::FileExists(pSVar3,asStack_50);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    pSVar3 = Sexy::gSexyAppBase;
    if (cVar5 != '\0') {
      std::operator+(psVar1,"rsb/");
      pcVar12 = (char *)GetRSBFileName();
      std::operator+(asStack_58,pcVar12);
      cVar5 = Sexy::SexyAppBase::FileExists(pSVar3,asStack_50);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      psVar4 = (string *)Sexy::gSexyAppBase;
      if (cVar5 != '\0') {
        std::operator+(psVar1,"rsb/");
        pcVar12 = (char *)GetRSBFileName();
        std::operator+(asStack_58,pcVar12);
        Sexy::SexyAppBase::EraseFile(psVar4);
        std::string::~string(asStack_50);
        std::string::~string(asStack_58);
      }
      psVar4 = (string *)Sexy::gSexyAppBase;
      std::operator+(psVar1,"download/");
      pcVar12 = (char *)GetRSBFileName();
      std::operator+(asStack_68,pcVar12);
      std::operator+(psVar1,"rsb/");
      pcVar12 = (char *)GetRSBFileName();
      std::operator+(asStack_58,pcVar12);
      Sexy::SexyAppBase::RenameFile(psVar4,asStack_60);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
    }
LAB_0440181c:
    LoadUIUpdateRSB(param_1);
    break;
  case 9:
  case 10:
    uVar13 = FUN_0547429c(param_5);
    Sexy::StrFormat("Update Failed %s",asStack_60,uVar13);
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
      param_1[0x30] = (UIUpdateMgr)0x0;
      LawnApp::KillWaitingDialog(gLawnApp);
      *(undefined8 *)(param_1 + 0x18) = 0;
      pLVar2 = gLawnApp;
      iVar6 = FUN_04400608(400);
      iVar7 = FUN_04400608(0xfa);
      pPVar9 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar6,(float)iVar7,(PVZ2UIDialog *)0x0);
      FUN_05478178(asStack_50,L"[LUA_UPDATE_TIP]",asStack_58);
      PVZ2UIDialog::SetHeaderLabel(pPVar9,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      FUN_05478178(asStack_50,L"[LUA_UPDATE_FAIL]",asStack_58);
      PVZ2UIDialog::SetFooterLabel(pPVar9,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      pPVar10 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      Sexy::Color::Color((Color *)asStack_50,1);
      PVZ2UIDialog::SetHeaderFont(pPVar9,pPVar10,(Color *)asStack_50);
      pPVar10 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
      Sexy::Insets::Insets((Insets *)asStack_50,0x61,0x34,0,0xff);
      PVZ2UIDialog::SetFooterFont(pPVar9,pPVar10,(Color *)asStack_50);
      FUN_05478178(asStack_58,L"[DIALOG_STRING_OK]",asStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
      PVZ2UIDialog::AddButton(pPVar9,asStack_58,aDStack_38,0);
      FUN_05476c50(asStack_58);
      nop();
      LoadUIUpdateRSB(param_1);
    }
    std::string::~string(asStack_60);
    break;
  case 0xb:
    uVar13 = FUN_0547429c(param_5);
    Sexy::StrFormat("ERROR_DECOMPRESS %s",asStack_58,uVar13);
LAB_04401cf8:
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string(asStack_50,"PvZ2Debug");
    nop();
    std::string::~string(asStack_50);
    nop();
    LoadUIUpdateRSB(param_1);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float,
   std::string const&, std::string const&, int, int) */

void __thiscall UIUpdateMgr::dispatchEvent(UIUpdateMgr *this)

{
  dispatchEvent(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUpdateMgr::onMsgErrorRequest(int, std::string const&) */

void __thiscall UIUpdateMgr::onMsgErrorRequest(UIUpdateMgr *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1440];
  string asStack_748 [1856];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_748);
  _PacketId::~_PacketId(a_Stack_ce8);
  if (cVar1 != '\0') {
    LoadUIUpdateRSB(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

