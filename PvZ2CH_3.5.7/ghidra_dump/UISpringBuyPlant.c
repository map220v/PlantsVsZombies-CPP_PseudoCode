// Class: UISpringBuyPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringBuyPlant::GetLayoutName() */

void __thiscall UISpringBuyPlant::GetLayoutName(UISpringBuyPlant *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISpringBuyPlant");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISpringBuyPlant::~UISpringBuyPlant() */

void __thiscall UISpringBuyPlant::~UISpringBuyPlant(UISpringBuyPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_066cf980;
  *(undefined **)(this + 0xd8) = &DAT_066cfcd0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UISpringBuyPlant>::~UISingletonDialog
            ((UISingletonDialog<UISpringBuyPlant> *)this);
  return;
}


/* UISpringBuyPlant::~UISpringBuyPlant() */

void __thiscall UISpringBuyPlant::~UISpringBuyPlant(UISpringBuyPlant *this)

{
  ~UISpringBuyPlant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringBuyPlant::OnCreate() */

void __thiscall UISpringBuyPlant::OnCreate(UISpringBuyPlant *this)

{
  long lVar1;
  int iVar2;
  Widget *pWVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,false);
  iVar2 = FUN_03943dd0(0x1e);
  lVar1 = ___stack_chk_guard;
  *(int *)(pWVar3 + 0x4c) = *(int *)(pWVar3 + 0x4c) - iVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringBuyPlant::OnNotifyBuyPlant(bool, int) */

void __thiscall UISpringBuyPlant::OnNotifyBuyPlant(UISpringBuyPlant *this,bool param_1,int param_2)

{
  LawnApp *this_00;
  ProfileMgr *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  UISpringBuyPlant *pUVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  DRefPtr<DTouchLayer> aDStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    Sexy::OutputDebugStrF((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant i_success = %d ",1);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_01);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    pUVar1 = ::operator_new(0x28);
    ICloudRequestCallbackFunction<UISpringBuyPlant,bool>::ICloudRequestCallbackFunction
              (pUVar1,(_func_void_bool_ptr *)this);
    DRefPtr<DTouchLayer>::DRefPtr(aDStack_50,(DTouchLayer *)pUVar1);
    INetworkMsgProcess::ICloudRequestUseGem(this_03,param_2,1,(DRefPtr *)aDStack_50,2,false);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_50);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"UISpringBuyPlant::OnNotifyBuyPlant i_success = %d ",0);
    UISingletonDialog<UISpringBuyPlant>::CloseDialog();
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[EXP_PLANT_ALREADY_BOUGHT_TITLE]",auStack_68);
    FUN_05478178((wstring *)aDStack_50,L"[EXP_PLANT_ALREADY_BOUGHT_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)aDStack_50);
    FUN_05476c50((wstring *)aDStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)aDStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,param_1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringBuyPlant::UISpringBuyPlant() */

void __thiscall UISpringBuyPlant::UISpringBuyPlant(UISpringBuyPlant *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UISpringBuyPlant>::UISingletonDialog
            ((UISingletonDialog<UISpringBuyPlant> *)this);
  *(undefined ***)this = &PTR_GetClass_066cf980;
  *(undefined **)(this + 0xd8) = &DAT_066cfcd0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBuyPlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<UISpringBuyPlant,void(UISpringBuyPlant::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::GLBuyPlantID,&local_40);
  return;
}


/* UISpringBuyPlant::ButtonDepress(int) */

void __thiscall UISpringBuyPlant::ButtonDepress(UISpringBuyPlant *this,int param_1)

{
  int iVar1;
  int iVar2;
  SpringChargeManager *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NetworkMgr *this_03;
  long *plVar3;
  
  if (param_1 == 0) {
    UISingletonDialog<UISpringBuyPlant>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    this_00 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    iVar1 = SpringChargeManager::getExChangePrice(this_00,*(int *)(this + 0x134));
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetNumGems(this_02,true);
    if (iVar2 < iVar1) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      return;
    }
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
    (**(code **)(*plVar3 + 0x178))(plVar3,0x29e6,*(undefined4 *)(this + 0x134),1);
  }
  return;
}


/* non-virtual thunk to UISpringBuyPlant::ButtonDepress(int) */

void __thiscall UISpringBuyPlant::ButtonDepress(UISpringBuyPlant *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringBuyPlant::initUI() */

void __thiscall UISpringBuyPlant::initUI(UISpringBuyPlant *this)

{
  char cVar1;
  int iVar2;
  UIWidgetImage *this_00;
  NameMapperBase *this_01;
  undefined8 uVar3;
  UIWidgetText *pUVar4;
  PlantNameMapperServerID *this_02;
  SpringChargeManager *this_03;
  ulong uVar5;
  string *extraout_x1;
  string asStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_1");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_38,"");
  nop();
  this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_01,*(int *)(this + 0x134));
  if (cVar1 != '\0') {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_05474278(asStack_38,asStack_10);
    std::string::~string(asStack_10);
  }
  cVar1 = FUN_0547419c(asStack_38);
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(asStack_38);
    Sexy::OutputDebugStrF
              ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID = %d, plantName = %s",
               (ulong)*(uint *)(this + 0x134),uVar3);
    Sexy::StringToUpper((Sexy *)asStack_38,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_10);
    std::string::~string(asStack_10);
    UIWidgetImage::SetImage(this_00,asStack_30);
    std::string::string(asStack_10,"UIText_0");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_02 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_02,*(int *)(this + 0x134));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_28);
    Plant::GetFormattedNameString((Plant *)awStack_20,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    TodStringTranslate(L"[BUYPLANT_TITLE]");
    TodReplaceString(awStack_18,L"{PLANTNAME}",awStack_20);
    PuzzleTip::SetTip(pUVar4,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    std::string::string(asStack_10,"UIText_2");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_03 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    uVar5 = SpringChargeManager::getExChangePrice(this_03,*(int *)(this + 0x134));
    Sexy::StrFormat("%d",asStack_10,uVar5 & 0xffffffff);
    UIWidgetText::SetString(pUVar4,asStack_10);
    std::string::~string(asStack_10);
    FUN_05476c50(awStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::string::~string(asStack_30);
  }
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringBuyPlant::onUseGemFinish(bool const&) */

void __thiscall UISpringBuyPlant::onUseGemFinish(UISpringBuyPlant *this,bool *param_1)

{
  char cVar1;
  int iVar2;
  SpringChargeManager *this_00;
  SocialInfo *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UISpringBuyPlant>::CloseDialog();
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    this_00 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    SpringChargeManager::UpdateBehaviorPurchaseLog(this_00,*(int *)(this + 0x134));
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    LawnApp::ShowExpPlantRewardView(gLawnApp,asStack_10);
    this_01 = (SocialInfo *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    SocialInfo::AddBorrowedPlantList(this_01,*(int *)(this + 0x134));
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_03,asStack_10);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlant(this_03,asStack_10,false);
      PlayerInfo::AddPlantStartLevel(this_03,asStack_10,0);
    }
    else {
      PlayerInfo::AddPlantPieceCount((string *)this_03,(int)asStack_10,true);
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

