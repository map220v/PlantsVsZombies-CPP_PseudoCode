// Class: DefineIDMgr


/* DefineIDMgr::~DefineIDMgr() */

void __thiscall DefineIDMgr::~DefineIDMgr(DefineIDMgr *this)

{
  *(undefined ***)this = &PTR__DefineIDMgr_06733e40;
  Sexy::LazySingleton<DefineIDMgr>::~LazySingleton((LazySingleton<DefineIDMgr> *)this);
  return;
}


/* DefineIDMgr::~DefineIDMgr() */

void __thiscall DefineIDMgr::~DefineIDMgr(DefineIDMgr *this)

{
  ~DefineIDMgr(this);
  AK::FreeHook(this);
  return;
}


/* DefineIDMgr::DefineIDMgr() */

void __thiscall DefineIDMgr::DefineIDMgr(DefineIDMgr *this)

{
  Sexy::LazySingleton<DefineIDMgr>::LazySingleton((LazySingleton<DefineIDMgr> *)this);
  *(undefined ***)this = &PTR__DefineIDMgr_06733e40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefineIDMgr::ClearSaveDefineID() */

void DefineIDMgr::ClearSaveDefineID(void)

{
  char cVar1;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"");
  nop();
  std::string::string(asStack_28,"");
  nop();
  Android::Resources::GetUserDataFolder(gLawnApp);
  FUN_05474278(asStack_30,asStack_10);
  std::string::~string(asStack_10);
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  FUN_05474278(asStack_28,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_30,"/");
  std::operator+(asStack_10,"phoneid.dat");
  std::string::~string(asStack_10);
  std::operator+(asStack_28,"/");
  std::operator+(asStack_10,"sdcardid.dat");
  std::string::~string(asStack_10);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_20);
  if (cVar1 != '\0') {
    Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
  }
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_18);
  if (cVar1 != '\0') {
    Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DefineIDMgr::GetSignature() */

void __thiscall DefineIDMgr::GetSignature(DefineIDMgr *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this_00);
  PurchaseBroker::GetSignature();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefineIDMgr::GetNewUserDefineID() */

void __thiscall DefineIDMgr::GetNewUserDefineID(DefineIDMgr *this)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar3;
  string *__n;
  string *in_x8;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_80;
  std::string::string(in_x8,"");
  nop();
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this_00);
  PurchaseBroker::GetDeviceID();
  lVar3 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = FUN_03b601cc(*(undefined1 *)(lVar3 + 0x1d));
  if ((cVar1 == '\0') || (bVar2 = std::operator==(asStack_98,""), !bVar2)) {
    LawnApp::GetAppNameForiCloud();
    std::operator+(asStack_98,asStack_90);
    MD5::MD5(aMStack_78,asStack_88);
    MD5::toString();
    FUN_05474278();
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
  }
  else {
    std::string::append(in_x8,"cd47ff5aa7491de630bcb042304d2d76",(size_t)__n);
  }
  std::string::~string(asStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefineIDMgr::GetUserDefineID() */

void __thiscall DefineIDMgr::GetUserDefineID(DefineIDMgr *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  NetworkMgr *pNVar4;
  string *psVar5;
  uchar *puVar6;
  ulong uVar7;
  string asStack_130 [8];
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  string asStack_108 [8];
  string asStack_100 [8];
  string asStack_f8 [8];
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [48];
  string asStack_a8 [48];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_130);
  Set8BytesTo0(asStack_128);
  iVar2 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
  if ((iVar2 == 1) && (iVar2 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar2 == 0)) {
    Android::Diag::GetDeviceIMEI(asStack_130);
    Android::Diag::GetPrimaryMACAddress(asStack_128);
  }
  FUN_031dcc6c(asStack_e0,asStack_130,asStack_128);
  LawnApp::GetAppNameForiCloud();
  std::operator+(asStack_e0,asStack_d8);
  MD5::MD5(aMStack_78,asStack_a8);
  MD5::toString();
  std::string::~string(asStack_a8);
  std::string::~string(asStack_d8);
  std::string::~string(asStack_e0);
  cVar1 = FUN_0547419c(asStack_130);
  if (cVar1 != '\0') {
    FUN_05474ff8(asStack_120);
  }
  lVar3 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = FUN_03b601cc(*(undefined1 *)(lVar3 + 0x1d));
  if (cVar1 != '\0') {
    FUN_05474148();
    goto LAB_03b6071c;
  }
  std::string::string(asStack_118,"");
  nop();
  std::string::string(asStack_110,"");
  nop();
  Android::Resources::GetUserDataFolder((AndroidAppDriver *)gLawnApp);
  FUN_05474278(asStack_118,asStack_a8);
  std::string::~string(asStack_a8);
  Android::Resources::GetExternalFilesDirectory((AndroidAppDriver *)gLawnApp);
  FUN_05474278(asStack_110,asStack_a8);
  std::string::~string(asStack_a8);
  lVar3 = FUN_05474178(asStack_118);
  if ((lVar3 == 0) || (lVar3 = FUN_05474178(asStack_110), lVar3 == 0)) {
LAB_03b60700:
    FUN_05474148();
  }
  else {
    pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
    lVar3 = NetworkMgr::GetNewNetWorkProcess(pNVar4);
    if ((lVar3 == 0) ||
       (psVar5 = (string *)INetworkMsgProcess::GetNetworkCacheQueue(), psVar5 == (string *)0x0))
    goto LAB_03b60700;
    std::operator+(asStack_118,"/");
    std::operator+(asStack_a8,"phoneid.dat");
    std::string::~string(asStack_a8);
    std::operator+(asStack_110,"/");
    std::operator+(asStack_a8,"sdcardid.dat");
    std::string::~string(asStack_a8);
    cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_108);
    if ((cVar1 == '\0') ||
       (cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_100), cVar1 == '\0')) {
LAB_03b60830:
      AuthMgr::SetCharacterId(psVar5);
      pNVar4 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar4);
      INetworkMsgProcess::SaveCache();
      Sexy::Buffer::Buffer((Buffer *)asStack_a8);
      puVar6 = (uchar *)FUN_0547429c(asStack_120);
      uVar7 = FUN_05474184(asStack_120);
      Sexy::Buffer::WriteBytes((Buffer *)asStack_a8,puVar6,uVar7);
      cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_108);
      if (cVar1 != '\0') {
        Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
      }
      cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_100);
      if (cVar1 != '\0') {
        Sexy::SexyAppBase::EraseFile((string *)Sexy::gSexyAppBase);
      }
      Sexy::SexyAppBase::WriteBufferToFile(Sexy::gSexyAppBase,asStack_108,(Buffer *)asStack_a8);
      Sexy::SexyAppBase::WriteBufferToFile(Sexy::gSexyAppBase,asStack_100,(Buffer *)asStack_a8);
      FUN_05474148();
      Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
    }
    else {
      DiscountShopActivityManager::GetBannerImageName();
      lVar3 = FUN_05474178(asStack_a8);
      std::string::~string(asStack_a8);
      if (lVar3 == 0) goto LAB_03b60830;
      Sexy::Buffer::Buffer((Buffer *)asStack_d8);
      cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                        ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_108,SUB81(asStack_d8,0));
      if (cVar1 == '\0') {
        FUN_05474148();
      }
      else {
        Sexy::Buffer::ReadLine();
        Sexy::Buffer::Buffer((Buffer *)asStack_a8);
        cVar1 = Sexy::SexyAppBase::ReadBufferFromFile
                          ((string *)Sexy::gSexyAppBase,(Buffer *)asStack_100,SUB81(asStack_a8,0));
        if (cVar1 != '\0') {
          Sexy::Buffer::ReadLine();
          lVar3 = FUN_05474178(asStack_f8);
          if ((lVar3 != 0) && (lVar3 = FUN_05474178(asStack_f0), lVar3 != 0)) {
            DiscountShopActivityManager::GetBannerImageName();
            cVar1 = std::operator==(asStack_f8,asStack_e8);
            if (cVar1 == '\0') {
              std::string::~string(asStack_e8);
            }
            else {
              DiscountShopActivityManager::GetBannerImageName();
              cVar1 = std::operator==(asStack_f0,asStack_e0);
              std::string::~string(asStack_e0);
              std::string::~string(asStack_e8);
              if (cVar1 != '\0') {
                DiscountShopActivityManager::GetBannerImageName();
                std::string::~string(asStack_f0);
                goto LAB_03b60a44;
              }
            }
          }
          std::string::~string(asStack_f0);
          Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
          std::string::~string(asStack_f8);
          Sexy::Buffer::~Buffer((Buffer *)asStack_d8);
          goto LAB_03b60830;
        }
        FUN_05474148();
LAB_03b60a44:
        Sexy::Buffer::~Buffer((Buffer *)asStack_a8);
        std::string::~string(asStack_f8);
      }
      Sexy::Buffer::~Buffer((Buffer *)asStack_d8);
    }
    std::string::~string(asStack_100);
    std::string::~string(asStack_108);
  }
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
LAB_03b6071c:
  std::string::~string(asStack_120);
  std::string::~string(asStack_128);
  std::string::~string(asStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

