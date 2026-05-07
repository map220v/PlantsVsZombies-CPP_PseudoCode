// Class: UISettingHeadshot


/* UISettingHeadshot::UISettingHeadshot() */

void __thiscall UISettingHeadshot::UISettingHeadshot(UISettingHeadshot *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06770880;
  Set8BytesTo0(this + 0x140);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  *(undefined4 *)(this + 0x160) = 0;
  return;
}


/* UISettingHeadshot::create(bool) */

UISettingHeadshot * UISettingHeadshot::create(bool param_1)

{
  UISettingHeadshot *this;
  
  if (s_pSingleton != (UISettingHeadshot *)0x0) {
    return s_pSingleton;
  }
  this = ::operator_new(0x168);
  memset(this,0,0x168);
  UISettingHeadshot(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pSingleton = this;
  return this;
}


/* UISettingHeadshot::isActive() */

bool UISettingHeadshot::isActive(void)

{
  return s_pSingleton != 0;
}


/* UISettingHeadshot::remove() */

void UISettingHeadshot::remove(void)

{
  if (s_pSingleton != (long *)0x0) {
    (**(code **)(*s_pSingleton + 0x348))();
    s_pSingleton = (long *)0x0;
  }
  return;
}


/* UISettingHeadshot::buyName() */

undefined8 UISettingHeadshot::buyName(void)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  MonthlyCardMgr *this_01;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    return 0;
  }
  this_01 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
  iVar1 = MonthlyCardMgr::GetChangeNameCost(this_01);
  iVar2 = PlayerInfo::GetNumGems(this_00,true);
  if (iVar1 <= iVar2) {
    return 1;
  }
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::checkNameIsVaild(std::string const&) */

void __thiscall UISettingHeadshot::checkNameIsVaild(UISettingHeadshot *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x148));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x148));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar3 = 1;
LAB_03d7a904:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar2 = FUN_05474368(param_1,uVar3,0);
    if (lVar2 != -1) {
      uVar3 = 0;
      goto LAB_03d7a904;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::changeName(std::string const&) */

void __thiscall UISettingHeadshot::changeName(UISettingHeadshot *this,string *param_1)

{
  char cVar1;
  PVZ2UIDialog *pPVar2;
  UserInfo *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  ICloudRequestSTDCallbackFunction *this_03;
  wchar_t *pwVar3;
  ReceivedDataCallback *this_04;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_04 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    pwVar3 = L"[NETWORK_NOT_CONNECTED_TEXT]";
    cVar1 = '\0';
  }
  else {
    cVar1 = checkNameIsVaild(this,param_1);
    this_04 = gLawnApp;
    if (cVar1 != '\0') {
      this_00 = (UserInfo *)DSingleton<UserInfo>::getInstance();
      UserInfo::setName(this_00,param_1);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      FUN_03d7a314((function *)aDStack_38,this);
      this_03 = ::operator_new(0x30);
      ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
                (this_03,(function *)aDStack_38);
      DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)awStack_50,(DTouchLayer *)this_03);
      INetworkMsgProcess::RequestUserName(this_02,(DRefPtr *)awStack_50);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)awStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      goto LAB_03d7aa6c;
    }
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    pwVar3 = L"[FILTER_WARNING]";
  }
  FUN_05478178(awStack_50,pwVar3,auStack_60);
  pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog((LawnApp *)this_04,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
LAB_03d7aa6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* UISettingHeadshot::~UISettingHeadshot() */

void __thiscall UISettingHeadshot::~UISettingHeadshot(UISettingHeadshot *this)

{
  *(undefined ***)this = &PTR_GetClass_06770880;
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 0x18))();
    *(undefined8 *)(this + 0x138) = 0;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x148));
  std::string::~string((string *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISettingHeadshot::~UISettingHeadshot() */

void __thiscall UISettingHeadshot::~UISettingHeadshot(UISettingHeadshot *this)

{
  ~UISettingHeadshot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::getFilterString() */

void __thiscall UISettingHeadshot::getFilterString(UISettingHeadshot *this)

{
  char cVar1;
  GenericResFile *this_00;
  char *__s;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong uVar5;
  bool bVar6;
  wstring *extraout_x1;
  string *psVar7;
  ulong uVar8;
  RtMixedPtrBase aRStack_58 [8];
  Sexy aSStack_50 [8];
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_38,"RESFILE_PROPERTIES_FILTERSTRINGS");
  bVar6 = SUB81(asStack_38,0);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>(psVar7,bVar6);
  std::string::~string(asStack_38);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 != '\0') {
    Sexy::Buffer::Buffer((Buffer *)asStack_38);
    psVar7 = Sexy::gSexyAppBase;
    this_00 = (GenericResFile *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    __s = (char *)Sexy::GenericResFile::GetFilePath(this_00);
    std::string::string(asStack_40,__s);
    Sexy::SexyAppBase::ReadBufferFromFile(psVar7,(Buffer *)asStack_40,bVar6);
    std::string::~string(asStack_40);
    nop();
    cVar1 = Sexy::Buffer::AtEnd((Buffer *)asStack_38);
    while (cVar1 == '\0') {
      uVar8 = 0;
      FUN_05476574(aSStack_50);
      Sexy::Buffer::ReadUTF8Line();
      lVar2 = FUN_054765d0(auStack_48);
      if (lVar2 != 0) {
        do {
          piVar3 = (int *)FUN_05476f5c(auStack_48,uVar8);
          if (((*piVar3 != 0xd) && (piVar3 = (int *)FUN_05476f5c(auStack_48,uVar8), *piVar3 != 10))
             && (piVar3 = (int *)FUN_05476f5c(auStack_48,uVar8), *piVar3 != 9)) {
            puVar4 = (undefined4 *)FUN_05476f5c(auStack_48,uVar8);
            FUN_054778bc(aSStack_50,1,*puVar4);
          }
          uVar8 = uVar8 + 1;
          uVar5 = FUN_054765d0(auStack_48);
        } while (uVar8 < uVar5);
      }
      cVar1 = FUN_054765e8(aSStack_50);
      if (cVar1 == '\0') {
        Sexy::WStringToUTF8String(aSStack_50,extraout_x1);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x148),asStack_40);
        std::string::~string(asStack_40);
      }
      FUN_05476c50(auStack_48);
      FUN_05476c50(aSStack_50);
      cVar1 = Sexy::Buffer::AtEnd((Buffer *)asStack_38);
    }
    Sexy::Buffer::~Buffer((Buffer *)asStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::Initialize() */

void __thiscall UISettingHeadshot::Initialize(UISettingHeadshot *this)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  DRefPtr<DLayer> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  pcVar3 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(asStack_10,this);
  plVar1 = (long *)(*pcVar3)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*(long *)this + 0x370))(this,uVar2);
  std::string::string(asStack_10,"UISettingHeadshot");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  getFilterString(this);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::updateName() */

void __thiscall UISettingHeadshot::updateName(UISettingHeadshot *this)

{
  char cVar1;
  uint uVar2;
  MonthlyCardMgr *this_00;
  string *psVar3;
  DTouchLayer *pDVar4;
  char *pcVar5;
  long lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wstring *extraout_x1;
  code *pcVar9;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
  uVar2 = MonthlyCardMgr::GetChangeNameCost(this_00);
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"textSave");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_18);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,uVar2 != 0);
    pcVar9 = *(code **)(*(long *)pDVar4 + 0x338);
    DString::Format(&DAT_055fe4c8,asStack_18,(ulong)uVar2);
    pcVar5 = DString::operator_cast_to_char_((DString *)asStack_18);
    (*pcVar9)(pDVar4,pcVar5);
    DString::~DString((DString *)asStack_18);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"textSave2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string(asStack_18);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar4 + 0xd8))(pDVar4,uVar2 == 0);
    lVar6 = DSingleton<UserInfo>::getInstance();
    cVar1 = FUN_03d78e64(*(undefined1 *)(lVar6 + 0x21));
    if (cVar1 == '\0') {
      pwVar7 = L"[SETTINGHEADSHOT_6]";
    }
    else {
      pwVar7 = L"[SETTINGHEADSHOT_5]";
    }
    TodStringTranslate(pwVar7);
    Sexy::SexyStringToUTF8String((Sexy *)asStack_18,extraout_x1);
    FUN_05476c50(asStack_18);
    uVar8 = FUN_0547429c(asStack_20);
    (**(code **)(*(long *)pDVar4 + 0x338))(pDVar4,uVar8);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISettingHeadshot::UserInit() */

void __thiscall UISettingHeadshot::UserInit(UISettingHeadshot *this)

{
  uint uVar1;
  exception_ptr *this_00;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  string *psVar9;
  DTouchLayer *pDVar10;
  long lVar11;
  UIHeadshotIcon *this_01;
  DTouchLayer *pDVar12;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  long *plVar13;
  undefined8 uVar14;
  undefined8 extraout_x0;
  MonthlyCardMgr *this_04;
  int *piVar15;
  DTouchLayer *pDVar16;
  uint uVar17;
  code *pcVar18;
  UISettingHeadshot *local_90;
  undefined8 uStack_88;
  DTouchLayer *local_80;
  string asStack_70 [8];
  DRefPtr<DSpriteNode> aDStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  UISettingHeadshot *local_38;
  uint local_30;
  undefined4 uStack_2c;
  DTouchLayer *local_28;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  updateName(this);
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"btnHeadshot");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    lVar11 = DSingleton<UserInfo>::getInstance();
    iVar5 = FUN_03d78e68(*(undefined4 *)(lVar11 + 0x24));
    this_01 = (UIHeadshotIcon *)UIHeadshotIcon::create(iVar5);
    *(UIHeadshotIcon **)(this + 0x138) = this_01;
    pDVar12 = (DTouchLayer *)UIHeadshotIcon::getHeadshotIcon(this_01);
    DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)&local_38,pDVar12);
    (**(code **)(*(long *)pDVar12 + 0x60))(pDVar12,1);
    (**(code **)(*(long *)pDVar10 + 0x388))(pDVar10,pDVar12);
    pcVar18 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d79f78(afStack_58,this);
    (*pcVar18)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_38);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"btnRankAvatar");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    iVar5 = PlayerInfo::GetCurrentRankAvatar(this_03);
    iVar6 = 61000;
    if (iVar5 != 0) {
      iVar6 = PlayerInfo::GetCurrentRankAvatar(this_03);
    }
    GetGameItemInfo(iVar6,0x7fffffff,0);
    std::string::string(asStack_70,"");
    nop();
    if ((int)local_38 != 0) {
      std::operator+(asStack_18,"_DISPLAY");
      FUN_05474278(asStack_70,aDStack_68);
      std::string::~string((string *)aDStack_68);
    }
    DRefPtr<DSpriteNode>::DRefPtr(aDStack_68);
    plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
    (**(code **)(*plVar13 + 0x2e8))(plVar13,asStack_70);
    uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_68);
    (**(code **)(*(long *)pDVar10 + 0x388))(pDVar10,uVar14);
    pcVar18 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d79fd4(afStack_58,this);
    (*pcVar18)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_68);
    std::string::~string(asStack_70);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  }
  DSingleton<UserInfo>::getInstance();
  nop();
  thunk_FUN_05475e00(this + 0x140,extraout_x0);
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"textName");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar10 + 0x398))(pDVar10,this + 0x140);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"root/menu/btnGreenBtn_Save");
  pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar12 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar12 + 0x350);
    FUN_03d7a030(afStack_58,this,pDVar10);
    (*pcVar18)(pDVar12,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"root/menu/btnGiftBtn");
  pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar12 != (DTouchLayer *)0x0) {
    cVar4 = LawnApp::IsServiceAvailable(gLawnApp,0x400);
    if (cVar4 == '\0') {
      (**(code **)(*(long *)pDVar12 + 0xd8))();
    }
    else {
      (**(code **)(*(long *)pDVar12 + 0xd8))(pDVar12,1);
    }
    pcVar18 = *(code **)(*(long *)pDVar12 + 0x350);
    FUN_03d7a08c(afStack_58,this);
    (*pcVar18)(pDVar12,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"root/menu/btnAccumulatedLoginRewardBtn");
  pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar12 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar12 + 0x350);
    FUN_03d7a0e8(afStack_58,this);
    (*pcVar18)(pDVar12,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_38,"root/menu3/btnPrivacy");
  pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)&local_38);
  nop();
  if (pDVar12 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar12 + 0x350);
    FUN_03d7a144(afStack_58,this);
    (*pcVar18)(pDVar12,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
  cVar4 = MonthlyCardMgr::CanChangeColor();
  if (cVar4 == '\0') {
    if (pDVar10 != (DTouchLayer *)0x0) {
      this_04 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      piVar15 = (int *)MonthlyCardMgr::GetColor(this_04);
      iVar5 = *piVar15;
      iVar6 = piVar15[1];
      iVar2 = piVar15[2];
      iVar3 = piVar15[3];
      pcVar18 = *(code **)(*(long *)pDVar10 + 0x3f0);
      Sexy::Insets::Insets((Insets *)&local_38,iVar5,iVar6,iVar2,iVar3);
      (*pcVar18)(pDVar10,(string *)&local_38);
      pcVar18 = *(code **)(*(long *)pDVar10 + 0x268);
      Sexy::Insets::Insets((Insets *)&local_38,iVar5,iVar6,iVar2,iVar3);
      (*pcVar18)(pDVar10,(string *)&local_38);
    }
  }
  else {
    psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_38,"menu2");
    pDVar12 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
    std::string::~string((string *)&local_38);
    nop();
    if (pDVar12 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar12 + 0xd8))(pDVar12,1);
    }
    psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string((string *)&local_38,"textColor");
    pDVar16 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
    std::string::~string((string *)&local_38);
    nop();
    if (pDVar16 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar16 + 0xd8))(pDVar16,1);
    }
    lVar11 = Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
    uVar7 = FUN_03d78e78(*(undefined4 *)(lVar11 + 0x20));
    *(undefined4 *)(this + 0x160) = uVar7;
    uVar17 = 0;
    do {
      uVar1 = uVar17 + 1;
      psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
      DString::Format("root/menu2/btn%d",aDStack_68,(ulong)uVar1);
      DString::operator_cast_to_string((DString *)aDStack_68);
      pDVar16 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
      std::string::~string(asStack_70);
      DString::~DString((DString *)aDStack_68);
      if (pDVar16 != (DTouchLayer *)0x0) {
        pcVar18 = *(code **)(*(long *)pDVar16 + 0x350);
        uStack_88 = CONCAT44(uStack_2c,uVar17);
        local_90 = this;
        local_80 = pDVar10;
        local_38 = this;
        local_30 = uVar17;
        local_28 = pDVar10;
        FUN_03d7a1a0(afStack_58,&local_90);
        (*pcVar18)(pDVar16,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        lVar11 = Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
        uVar8 = FUN_03d78e78(*(undefined4 *)(lVar11 + 0x20));
        if (uVar17 == uVar8) {
          (**(code **)(*(long *)pDVar12 + 0x390))(pDVar12,pDVar16);
          (**(code **)(*(long *)pDVar16 + 1000))(pDVar16);
        }
      }
      uVar17 = uVar1;
    } while (uVar1 != 6);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_68,"root/menu/btnClose");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)aDStack_68);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d7a200(afStack_58,this);
    (*pcVar18)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_68,"root/menu/btnReturnMenu");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)aDStack_68);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d7a25c(afStack_58,this);
    (*pcVar18)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_68,"root/menu/btnShowInfo");
  pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar9);
  std::string::~string((string *)aDStack_68);
  nop();
  if (pDVar10 != (DTouchLayer *)0x0) {
    pcVar18 = *(code **)(*(long *)pDVar10 + 0x350);
    FUN_03d7a2b8(afStack_58,this);
    (*pcVar18)(pDVar10,afStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

