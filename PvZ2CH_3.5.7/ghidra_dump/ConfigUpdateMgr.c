// Class: ConfigUpdateMgr


/* ConfigUpdateMgr::~ConfigUpdateMgr() */

void __thiscall ConfigUpdateMgr::~ConfigUpdateMgr(ConfigUpdateMgr *this)

{
  *(undefined ***)this = &PTR__ConfigUpdateMgr_06847880;
  *(undefined ***)(this + 8) = &PTR__ConfigUpdateMgr_068478a8;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x50))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::string::~string((string *)(this + 0x20));
  Sexy::LazySingleton<ConfigUpdateMgr>::~LazySingleton((LazySingleton<ConfigUpdateMgr> *)this);
  return;
}


/* non-virtual thunk to ConfigUpdateMgr::~ConfigUpdateMgr() */

void __thiscall ConfigUpdateMgr::~ConfigUpdateMgr(ConfigUpdateMgr *this)

{
  ~ConfigUpdateMgr(this + -8);
  return;
}


/* ConfigUpdateMgr::~ConfigUpdateMgr() */

void __thiscall ConfigUpdateMgr::~ConfigUpdateMgr(ConfigUpdateMgr *this)

{
  ~ConfigUpdateMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConfigUpdateMgr::~ConfigUpdateMgr() */

void __thiscall ConfigUpdateMgr::~ConfigUpdateMgr(ConfigUpdateMgr *this)

{
  ~ConfigUpdateMgr(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfigUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float, std::string const&,
   std::string const&, int, int) */

void ConfigUpdateMgr::dispatchEvent
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  AssetsManagerManifest *this;
  undefined8 uVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_3) {
  case 0:
    Sexy::OutputDebugStrF((wchar_t *)"No local manifest file found, skip assets update.\n");
    break;
  case 1:
  case 2:
    Sexy::OutputDebugStrF((wchar_t *)"Fail to download manifest file, update skipped.\n");
    break;
  case 4:
    uVar3 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Already up to date. %s \n",uVar3);
    break;
  case 7:
    uVar3 = FUN_0547429c(param_4);
    uVar2 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"ERROR_UPDATING Asset %s : %s \n",uVar3,uVar2);
    break;
  case 8:
    uVar3 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Update finished. %s \n",uVar3);
    if ((((*(AssetsManagerEx **)(param_1 + 0x10) != (AssetsManagerEx *)0x0) &&
         (this = (AssetsManagerManifest *)
                 AssetsManagerEx::getLocalManifest(*(AssetsManagerEx **)(param_1 + 0x10)),
         this != (AssetsManagerManifest *)0x0)) &&
        (cVar1 = AssetsManagerManifest::isLoaded(this), cVar1 != '\0')) &&
       (cVar1 = AssetsManagerManifest::isVersionLoaded(this), cVar1 != '\0')) {
      uVar3 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      FUN_05475d88(asStack_20,uVar3);
      std::string::string(asStack_18,"ConfigDLCVersion");
      FUN_05475d88(asStack_10,asStack_20);
      UserPrefs::SetString(asStack_18,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      nop();
      nop();
      *(undefined1 *)(param_1 + 0x28) = 1;
      std::string::~string(asStack_20);
    }
    break;
  case 9:
    uVar3 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"Update failed. %s \n",uVar3);
    break;
  case 0xb:
    uVar3 = FUN_0547429c(param_5);
    Sexy::OutputDebugStrF((wchar_t *)"ERROR_DECOMPRESS %s \n",uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ConfigUpdateMgr::dispatchEvent(AssetsManagerEx*, EventCode, float, float,
   std::string const&, std::string const&, int, int) */

void __thiscall ConfigUpdateMgr::dispatchEvent(ConfigUpdateMgr *this)

{
  dispatchEvent(this + -8);
  return;
}


/* ConfigUpdateMgr::onRestart() */

void ConfigUpdateMgr::onRestart(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Android::Device::ExitApp();
  return;
}


/* ConfigUpdateMgr::GetRSBFileName() const */

char * ConfigUpdateMgr::GetRSBFileName(void)

{
  return "DLCConfig.rsb";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfigUpdateMgr::ConfigUpdateMgr() */

void __thiscall ConfigUpdateMgr::ConfigUpdateMgr(ConfigUpdateMgr *this)

{
  string *psVar1;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ConfigUpdateMgr>::LazySingleton((LazySingleton<ConfigUpdateMgr> *)this);
  AssetsManagerDelegateProtocol::AssetsManagerDelegateProtocol
            ((AssetsManagerDelegateProtocol *)(this + 8));
  *(undefined ***)this = &PTR__ConfigUpdateMgr_06847880;
  *(undefined ***)(this + 8) = &PTR__ConfigUpdateMgr_068478a8;
  Set8BytesTo0(psVar1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x28] = (ConfigUpdateMgr)0x0;
  std::string::string(asStack_20,"");
  nop();
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  thunk_FUN_05475e00(asStack_20,asStack_18);
  Sexy::SexyAppBase::SetResumeCachedFolder((string *)gLawnApp);
  FUN_05475ad8(asStack_20,"config/");
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
/* ConfigUpdateMgr::CheckUpdate() */

void __thiscall ConfigUpdateMgr::CheckUpdate(ConfigUpdateMgr *this)

{
  char cVar1;
  AssetsManagerEx *this_00;
  AssetsManagerManifest *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_10,*(long **)(gLawnApp + 0x28));
    std::operator+(asStack_10,"ConfigManifest.json");
    std::string::~string(asStack_10);
    this_00 = ::operator_new(0x1c8,(nothrow_t *)&std::nothrow);
    if (this_00 != (AssetsManagerEx *)0x0) {
      AssetsManagerEx::AssetsManagerEx(this_00,asStack_18,(string *)(this + 0x20));
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
      AssetsManagerEx::update(*(AssetsManagerEx **)(this + 0x10));
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfigUpdateMgr::ForceRestart() */

void __thiscall ConfigUpdateMgr::ForceRestart(ConfigUpdateMgr *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_043fe098(400);
  iVar2 = FUN_043fe098(0xfa);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(aIStack_50,L"[LUA_UPDATE_TIP]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  nop();
  FUN_05478178(aIStack_50,L"[CONFIG_UPDATE_RESTART]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,(wstring *)aIStack_50);
  FUN_05476c50(aIStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Color::Color((Color *)aIStack_50,1);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)aIStack_50);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
  Sexy::Insets::Insets(aIStack_50,0x61,0x34,0,0xff);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)aIStack_50);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRestart);
  Sexy::Delegate0::Delegate0<ConfigUpdateMgr,void(ConfigUpdateMgr::*)()>(aDStack_38,aIStack_50);
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
/* ConfigUpdateMgr::Init() */

void __thiscall ConfigUpdateMgr::Init(ConfigUpdateMgr *this)

{
  string *psVar1;
  SexyAppBase *pSVar2;
  string *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  ResourceManager *this_00;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  string asStack_178 [8];
  string asStack_170 [8];
  string asStack_168 [8];
  string asStack_160 [344];
  long local_8;
  
  psVar1 = (string *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  std::string::append((string *)(gLawnApp + 0x2970),"1.0.0",gLawnApp + 0x2000);
  pSVar2 = Sexy::gSexyAppBase;
  std::operator+(psVar1,"download/");
  pcVar7 = (char *)GetRSBFileName();
  std::operator+(asStack_168,pcVar7);
  cVar4 = Sexy::SexyAppBase::FileExists(pSVar2,asStack_160);
  std::string::~string(asStack_160);
  std::string::~string(asStack_168);
  pSVar2 = Sexy::gSexyAppBase;
  if (cVar4 != '\0') {
    std::operator+(psVar1,"rsb/");
    pcVar7 = (char *)GetRSBFileName();
    std::operator+(asStack_168,pcVar7);
    cVar4 = Sexy::SexyAppBase::FileExists(pSVar2,asStack_160);
    std::string::~string(asStack_160);
    std::string::~string(asStack_168);
    psVar3 = (string *)Sexy::gSexyAppBase;
    if (cVar4 != '\0') {
      std::operator+(psVar1,"rsb/");
      pcVar7 = (char *)GetRSBFileName();
      std::operator+(asStack_168,pcVar7);
      Sexy::SexyAppBase::EraseFile(psVar3);
      std::string::~string(asStack_160);
      std::string::~string(asStack_168);
    }
    psVar3 = (string *)Sexy::gSexyAppBase;
    std::operator+(psVar1,"download/");
    pcVar7 = (char *)GetRSBFileName();
    std::operator+(asStack_178,pcVar7);
    std::operator+(psVar1,"rsb/");
    pcVar7 = (char *)GetRSBFileName();
    std::operator+(asStack_168,pcVar7);
    Sexy::SexyAppBase::RenameFile(psVar3,asStack_170);
    std::string::~string(asStack_160);
    std::string::~string(asStack_168);
    std::string::~string(asStack_170);
    std::string::~string(asStack_178);
  }
  std::string::string(asStack_168,"ConfigDLCVersion");
  std::string::string(asStack_160,"");
  UserPrefs::GetString((UserPrefs *)asStack_198,asStack_168,asStack_160);
  std::string::~string(asStack_160);
  nop();
  std::string::~string(asStack_168);
  nop();
  lVar8 = FUN_05474184(asStack_198);
  if (lVar8 != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_160,*(long **)(gLawnApp + 0x28));
    std::operator+(asStack_160,"ConfigManifest.json");
    std::string::~string(asStack_160);
    std::string::string(asStack_168,"");
    AssetsManagerManifest::AssetsManagerManifest((AssetsManagerManifest *)asStack_160,asStack_168);
    std::string::~string(asStack_168);
    nop();
    AssetsManagerManifest::parse((AssetsManagerManifest *)asStack_160,asStack_190);
    cVar4 = AssetsManagerManifest::isLoaded((AssetsManagerManifest *)asStack_160);
    if ((cVar4 != '\0') &&
       (cVar4 = AssetsManagerManifest::isVersionLoaded((AssetsManagerManifest *)asStack_160),
       cVar4 != '\0')) {
      uVar9 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)asStack_160);
      FUN_05475d88(asStack_188,uVar9);
      lVar8 = FUN_05474184(asStack_188);
      if (lVar8 != 0) {
        FUN_05475d88(asStack_168,asStack_188);
        iVar5 = AssetsManagerManifest::getVersionToInt(asStack_168);
        std::string::~string(asStack_168);
        FUN_05475d88(asStack_168,asStack_198);
        iVar6 = AssetsManagerManifest::getVersionToInt(asStack_168);
        std::string::~string(asStack_168);
        if (iVar5 < iVar6) {
          std::operator+(psVar1,"rsb/");
          pcVar7 = (char *)GetRSBFileName();
          std::operator+(asStack_168,pcVar7);
          std::string::~string(asStack_168);
          cVar4 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_180);
          if (cVar4 != '\0') {
            thunk_FUN_05475e00(gLawnApp + 0x2970,asStack_198);
            this_00 = *(ResourceManager **)(gLawnApp + 0x848);
            std::operator+(psVar1,"rsb/");
            pcVar7 = (char *)GetRSBFileName();
            std::string::string(asStack_170,pcVar7);
            std::string::string(asStack_168,"properties\\resourcesDLCConfig.rton");
            Sexy::ResourceManager::AddDLCRsb(this_00,asStack_178,asStack_170,asStack_168);
            std::string::~string(asStack_168);
            nop();
            std::string::~string(asStack_170);
            nop();
            std::string::~string(asStack_178);
          }
          std::string::~string(asStack_180);
        }
      }
      std::string::~string(asStack_188);
    }
    AssetsManagerManifest::~AssetsManagerManifest((AssetsManagerManifest *)asStack_160);
    std::string::~string(asStack_190);
  }
  std::string::~string(asStack_198);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

