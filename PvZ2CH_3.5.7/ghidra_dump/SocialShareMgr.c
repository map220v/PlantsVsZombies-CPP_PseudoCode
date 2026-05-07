// Class: SocialShareMgr


/* SocialShareMgr::saveResultDialogClose() */

void __thiscall SocialShareMgr::saveResultDialogClose(SocialShareMgr *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x59] = (SocialShareMgr)0x0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::saveScreenImageToLocal(ScreenInfo) */

void __thiscall SocialShareMgr::saveScreenImageToLocal(undefined8 param_1,SurpriseInfo *param_2)

{
  ShareDriverMgr *pSVar1;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (ShareDriverMgr *)Sexy::LazySingleton<ShareDriverMgr>::GetInstance();
  SurpriseInfo::SurpriseInfo(aSStack_20,param_2);
  ShareDriverMgr::SaveScreenImageToLocal(pSVar1,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::SaveCallback(int) */

void __thiscall SocialShareMgr::SaveCallback(SocialShareMgr *this,int param_1)

{
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_68,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SAVE_GALLERY_TITLE]",aCStack_50);
  nop();
  FUN_05476574(awStack_60);
  if (param_1 == 0) {
    FUN_054772c4(awStack_60,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SAVE_GALLERY_SUCCESS]");
  }
  else if (param_1 == 1) {
    FUN_054772c4(awStack_60,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SAVE_GALLERY_FAILED]");
  }
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(gLawnApp,awStack_68,awStack_60);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,saveResultDialogClose);
  Sexy::Delegate0::Delegate0<SocialShareMgr,void(SocialShareMgr::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
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


/* SocialShareMgr::~SocialShareMgr() */

void __thiscall SocialShareMgr::~SocialShareMgr(SocialShareMgr *this)

{
  *(undefined ***)this = &PTR__SocialShareMgr_06615ad0;
  std::map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::~map
            ((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
              *)(this + 0x28));
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)(this + 8));
  Sexy::LazySingleton<SocialShareMgr>::~LazySingleton((LazySingleton<SocialShareMgr> *)this);
  return;
}


/* SocialShareMgr::~SocialShareMgr() */

void __thiscall SocialShareMgr::~SocialShareMgr(SocialShareMgr *this)

{
  ~SocialShareMgr(this);
  AK::FreeHook(this);
  return;
}


/* SocialShareMgr::SocialShareMgr() */

void __thiscall SocialShareMgr::SocialShareMgr(SocialShareMgr *this)

{
  Sexy::LazySingleton<SocialShareMgr>::LazySingleton((LazySingleton<SocialShareMgr> *)this);
  *(undefined ***)this = &PTR__SocialShareMgr_06615ad0;
  ScreenInfo::ScreenInfo((ScreenInfo *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  this[0x58] = (SocialShareMgr)0x0;
  this[0x59] = (SocialShareMgr)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::HasShareCode(std::string const&) */

void __thiscall SocialShareMgr::HasShareCode(SocialShareMgr *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_033b8704(DAT_06a9d258);
  uVar3 = FUN_033b8754(DAT_06a9d260);
  local_18 = FUN_033b9128(uVar2,uVar3,param_1);
  local_10 = FUN_033b8754(DAT_06a9d260);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::GetShareRewardCount(ShareType) */

void __thiscall SocialShareMgr::GetShareRewardCount(SocialShareMgr *this,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
             ::find((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
                     *)(this + 0x28),(ShareType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x28));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* SocialShareMgr::HasShareReward(ShareType) */

bool SocialShareMgr::HasShareReward(void)

{
  int iVar1;
  
  iVar1 = GetShareRewardCount();
  return 0 < iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::InitShareInfoMaps(std::vector<S2C_ShareInfo, std::allocator<S2C_ShareInfo> >
   const&) */

void __thiscall SocialShareMgr::InitShareInfoMaps(SocialShareMgr *this,vector *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::clear
            ((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
              *)(this + 0x28));
  local_20 = FUN_033b87a4(*(undefined8 *)param_1);
  local_18 = FUN_033b87f4(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_24 = *puVar2;
    local_10 = std::make_pair<ShareType,int_const&>((ShareType *)&local_24,puVar2 + 1);
    std::map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::
    insert<std::pair<ShareType,int>,void>
              ((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
                *)(this + 0x28),(pair *)&local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::InitDefaultShareInfoMaps() */

void __thiscall SocialShareMgr::InitDefaultShareInfoMaps(SocialShareMgr *this)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = 1;
  local_14 = 1;
  local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                       ((FestivalTab *)&local_18,(ActivityTypeID *)&local_14);
  std::map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::
  insert<std::pair<ShareType,int>,void>
            ((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
              *)(this + 0x28),(pair *)&local_10);
  local_14 = 1;
  local_18 = 2;
  local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                       ((FestivalTab *)&local_18,(ActivityTypeID *)&local_14);
  std::map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::
  insert<std::pair<ShareType,int>,void>
            ((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
              *)(this + 0x28),(pair *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SocialShareMgr::SetShareRewardCount(ShareType, int) */

void __thiscall
SocialShareMgr::SetShareRewardCount(SocialShareMgr *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>::
           operator[]((map<ShareType,int,std::less<ShareType>,std::allocator<std::pair<ShareType_const,int>>>
                       *)(this + 0x28),(ShareType *)&local_4);
  *puVar1 = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::gatherScreenInfo(int, int, int, int) */

void __thiscall
SocialShareMgr::gatherScreenInfo
          (SocialShareMgr *this,int param_1,int param_2,int param_3,int param_4)

{
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  DString aDStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"");
  nop();
  std::string::string(asStack_48,"");
  nop();
  Android::Resources::GetUserDataFolder(gLawnApp);
  FUN_05474278(asStack_50,asStack_20);
  std::string::~string(asStack_20);
  Android::Resources::GetExternalFilesDirectory(gLawnApp);
  FUN_05474278(asStack_48,asStack_20);
  std::string::~string(asStack_20);
  time((time_t *)0x0);
  FUN_033b759c(aDStack_30);
  std::operator+(asStack_48,"/");
  std::operator+(asStack_38,(string *)&DAT_06a9d0f0);
  std::operator+(asStack_20,".png");
  std::string::~string(asStack_20);
  std::string::~string(asStack_38);
  ScreenInfo::ScreenInfo((ScreenInfo *)asStack_20,param_1,param_2,param_3,param_4,asStack_40);
  ScreenInfo::operator=((ScreenInfo *)(this + 8),(ScreenInfo *)asStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)asStack_20);
  std::string::~string(asStack_40);
  DString::~DString(aDStack_30);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::SaveScreenImageToLocal(int, int, int, int) */

void __thiscall
SocialShareMgr::SaveScreenImageToLocal
          (SocialShareMgr *this,int param_1,int param_2,int param_3,int param_4)

{
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  gatherScreenInfo(this,param_1,param_2,param_3,param_4);
  SurpriseInfo::SurpriseInfo(aSStack_20,(SurpriseInfo *)(this + 8));
  saveScreenImageToLocal(this,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::SaveScreenImageToGallery(int, int, int, int) */

void __thiscall
SocialShareMgr::SaveScreenImageToGallery
          (SocialShareMgr *this,int param_1,int param_2,int param_3,int param_4)

{
  ShareDriverMgr *pSVar1;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x59] == (SocialShareMgr)0x0) {
    this[0x59] = (SocialShareMgr)0x1;
    MessageRouter::Post((_func_void *)gMessageRouter);
    SaveScreenImageToLocal(this,param_1,param_2,param_3,param_4);
    pSVar1 = (ShareDriverMgr *)Sexy::LazySingleton<ShareDriverMgr>::GetInstance();
    SurpriseInfo::SurpriseInfo(aSStack_20,(SurpriseInfo *)(this + 8));
    ShareDriverMgr::SaveScreenImageToGallery(pSVar1,aSStack_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)aSStack_20);
    pSVar1 = (ShareDriverMgr *)Sexy::LazySingleton<ShareDriverMgr>::GetInstance();
    SurpriseInfo::SurpriseInfo(aSStack_20,(SurpriseInfo *)(this + 8));
    ShareDriverMgr::DeleteLocalImage(pSVar1,aSStack_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)aSStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::ShareWithImage(SharePlatform, int, int, int, int) */

void __thiscall
SocialShareMgr::ShareWithImage
          (SocialShareMgr *this,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  ShareDriverMgr *pSVar2;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SaveScreenImageToLocal(this,param_3,param_4,param_5,param_6);
  cVar1 = FUN_0547419c(this + 0x18);
  if (cVar1 == '\0') {
    pSVar2 = (ShareDriverMgr *)Sexy::LazySingleton<ShareDriverMgr>::GetInstance();
    SurpriseInfo::SurpriseInfo(aSStack_20,(SurpriseInfo *)(this + 8));
    ShareDriverMgr::Share(pSVar2,param_2,aSStack_20);
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)aSStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::ShareCallback(int, std::string const&) */

void __thiscall SocialShareMgr::ShareCallback(SocialShareMgr *this,int param_1,string *param_2)

{
  int iVar1;
  char *__s;
  TGALogMgr *pTVar2;
  PVZ2UIDialog *pPVar3;
  TGASecretStore *__n;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  DString aDStack_78 [16];
  TGASecretStore aTStack_68 [8];
  string asStack_60 [16];
  undefined1 auStack_50 [8];
  string asStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aTStack_68;
  FUN_05478178(awStack_88,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SHARE_TITLE]");
  nop();
  FUN_05476574(awStack_80);
  if (param_1 == 0) {
    FUN_054772c4(awStack_80,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SHARE_SUCCESS]");
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogSegments(pTVar2,0x277e,0,param_2);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(gLawnApp,awStack_88,awStack_80);
  }
  else {
    if (param_1 == 1) {
      FUN_054772c4(awStack_80,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SHARE_FAILED]");
    }
    else if (param_1 == 2) {
      FUN_054772c4(awStack_80,L"[CUSTOM_LEVEL_LEVEL_DETAIL_SHARE_SHARE_CANCELED]");
    }
    TGASecretStore::TGASecretStore(aTStack_68);
    std::string::append((string *)aTStack_68,"4",(size_t)__n);
    std::string::append(asStack_48,"0",(size_t)__n);
    thunk_FUN_05475e00(auStack_50,param_2);
    iVar1 = CustomLevelUtils::GetLevelDetailsLevelID();
    DString::DString(aDStack_78,iVar1);
    __s = (char *)DString::c_str(aDStack_78);
    std::string::append(asStack_60,__s,(size_t)__n);
    DString::~DString(aDStack_78);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevelShare(pTVar2,(TGACustomLevelShareData *)aTStack_68);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(gLawnApp,awStack_88,awStack_80);
    if (*(int *)(this + 0x20) != 2) {
      FUN_05478178(aDStack_78,L"[BUTTON_OK]",auStack_90);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aTStack_68);
      PVZ2UIDialog::AddButton(pPVar3,aDStack_78,aDStack_38,1);
      FUN_05476c50(aDStack_78);
      nop();
      goto LAB_033baa5c;
    }
  }
  FUN_05478178(aDStack_78,L"[BUTTON_OK]",auStack_90);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,shareResultDialogClose);
  Sexy::Delegate0::Delegate0<SocialShareMgr,void(SocialShareMgr::*)()>(aDStack_38,aTStack_68);
  PVZ2UIDialog::AddButton(pPVar3,aDStack_78,aDStack_38,1);
  FUN_05476c50(aDStack_78);
  nop();
LAB_033baa5c:
  FUN_05476c50(awStack_80);
  FUN_05476c50(awStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::RequestReward() */

void __thiscall SocialShareMgr::RequestReward(SocialShareMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *pDVar1;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2608];
  string asStack_2b8 [688];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  if (*(int *)(this + 0x20) == 2) {
    pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    std::string::string(asStack_d40,"V875");
    FUN_033b7dec(afStack_d38,this);
    std::string::string((string *)aDStack_ce8,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (pDVar1,asStack_d40,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               (string *)aDStack_ce8,0);
    std::string::~string((string *)aDStack_ce8);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::string::~string(asStack_d40);
    nop();
  }
  else {
    __n = auStack_d48;
    std::string::string(asStack_d40,"id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x20));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    pDVar1 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_033b7e48(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (pDVar1,asStack_2b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SocialShareMgr::shareResultDialogClose() */

void __thiscall SocialShareMgr::shareResultDialogClose(SocialShareMgr *this)

{
  byte bVar1;
  int iVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t __n;
  string asStack_50 [8];
  DString aDStack_48 [16];
  TGASecretStore aTStack_38 [8];
  string asStack_30 [16];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  bVar1 = HasShareReward(this,*(undefined4 *)(this + 0x20));
  __n = (size_t)bVar1;
  if (bVar1 == 0) {
    iVar2 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar2,0x277e);
    TGASecretStore::TGASecretStore(aTStack_38);
    std::string::append((string *)aTStack_38,"4",__n);
    std::string::append(asStack_18,"1",__n);
    thunk_FUN_05475e00(auStack_20,asStack_50);
    iVar2 = CustomLevelUtils::GetLevelDetailsLevelID();
    DString::DString(aDStack_48,iVar2);
    __s = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_30,__s,__n);
    DString::~DString(aDStack_48);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevelShare(pTVar3,(TGACustomLevelShareData *)aTStack_38);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar3,0x277e);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
    std::string::~string(asStack_50);
  }
  else {
    RequestReward(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

