// Class: PlantTrialViewUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::GetNeedTotalPiece(std::string const&, int) */

void __thiscall
PlantTrialViewUI::GetNeedTotalPiece(PlantTrialViewUI *this,string *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  MagentoProductProps *this_00;
  string *psVar4;
  int iVar5;
  int iVar6;
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [4];
  int local_1c;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = ___stack_chk_guard;
  std::string::string(asStack_30,"iOS PvZ2 Plant Store");
  std::string::string(asStack_28,"Plant Pieces");
  std::string::string(asStack_20,"plant");
  Magento::FindStoreProduct((Magento *)asStack_30,asStack_28,asStack_20,param_1,psVar4);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar2 == '\0') {
    iVar6 = -1;
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar6 = *(int *)(lVar3 + 0x90);
    GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_20);
    if (1 < param_2) {
      iVar5 = 1;
      do {
        this_00 = (MagentoProductProps *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        iVar1 = iVar5 + 1;
        MagentoProductProps::GetCurrentLevelPriceData(this_00,iVar5,(LevelUpPriceData *)asStack_20);
        iVar6 = iVar6 + local_1c;
        iVar5 = iVar1;
      } while (iVar1 != param_2);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* PlantTrialViewUI::BuyWithMoney(std::string const&) */

void __thiscall PlantTrialViewUI::BuyWithMoney(PlantTrialViewUI *this,string *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,param_1,0);
  return;
}


/* PlantTrialViewUI::Update() */

void __thiscall PlantTrialViewUI::Update(PlantTrialViewUI *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x120));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PlantTrialViewUI::DrawAll(PlantTrialViewUI *this,ModalFlags *param_1,Graphics *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_2,0xff,aIStack_18);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::CancelBuy() */

void PlantTrialViewUI::CancelBuy(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PlantTrialViewUI::onCloseDialog() */

void PlantTrialViewUI::onCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* PlantTrialViewUI::EnableInput(bool) */

void __thiscall PlantTrialViewUI::EnableInput(PlantTrialViewUI *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x10;
  if (param_1) {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::UpdateBuyText() */

void __thiscall PlantTrialViewUI::UpdateBuyText(PlantTrialViewUI *this)

{
  wchar_t *pwVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_28);
  if (*(int *)(*(long *)(this + 0xf0) + 0x4c) == 0) {
    pwVar1 = L"[PLANTTRIAL_BUY_BUTTON_NAME_1]";
  }
  else {
    pwVar1 = L"[PLANTTRIAL_BUY_BUTTON_NAME_2]";
  }
  TodStringTranslate(pwVar1);
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(*(long *)(this + 0xf0) + 0x50));
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_18);
  FUN_054766c8(auStack_28,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  TodStringTranslate(L"[PLANTTRIAL_BUY_PRODUCT]");
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(*(long *)(this + 0xf0) + 0x48));
  TodReplaceString(awStack_20,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  thunk_FUN_05477668(auStack_28,awStack_18);
  thunk_FUN_05477b9c(*(long *)(this + 0x128) + 0xd8,auStack_28);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::DrawTimeLimitNumber(Sexy::Graphics*, int, int, int) */

void __thiscall
PlantTrialViewUI::DrawTimeLimitNumber
          (PlantTrialViewUI *this,Graphics *param_1,int param_2,int param_3,int param_4)

{
  Image *pIVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_UI_PLANTTRIAL_LIMIT_%d",asStack_10,(ulong)(uint)param_2);
  pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
  if (pIVar1 != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,pIVar1,param_3,param_4);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::GetPlantIndex(std::string const&) */

ulong __thiscall PlantTrialViewUI::GetPlantIndex(PlantTrialViewUI *this,string *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar2;
  ulong uVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  puVar2 = (undefined8 *)PlayerInfo::GetPlantTrialRecord(this_01);
  uVar6 = *puVar2;
  uVar3 = FUN_04967574(uVar6,puVar2[1]);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xffffffff;
    if (uVar5 == uVar3) {
      return 0xffffffff;
    }
    psVar4 = (string *)FUN_0496756c(uVar6,uVar5);
    cVar1 = std::operator==(psVar4,param_1);
    uVar5 = uVar5 + 1;
  } while (cVar1 == '\0');
  return uVar7;
}


/* PlantTrialViewUI::GetPlantCount() */

void PlantTrialViewUI::GetPlantCount(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 *puVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  puVar1 = (undefined8 *)PlayerInfo::GetPlantTrialRecord(this_00);
  FUN_04967574(*puVar1,puVar1[1]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::UpdateView() */

void __thiscall PlantTrialViewUI::UpdateView(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  PlantLevelUpListView *pPVar6;
  string *extraout_x1;
  string *psVar7;
  string *extraout_x1_00;
  code *pcVar8;
  long *plVar9;
  string asStack_20 [8];
  string asStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetPlantCount();
  if (iVar1 != 0) {
    Sexy::StrFormat("IMAGE_UI_UI_PLANTTRIAL_%d",asStack_20,
                    (ulong)*(uint *)(*(long *)(this + 0xf0) + 0x68));
    lVar4 = StringHelper::ToImage(asStack_20,false);
    if (lVar4 == 0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x148));
      psVar7 = extraout_x1_00;
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x148),aRStack_10);
      Sexy::RtId::~RtId(aRStack_10);
      psVar7 = extraout_x1;
    }
    Sexy::StringToUpper((Sexy *)(*(long *)(this + 0xf0) + 8),psVar7);
    uVar5 = FUN_0547429c((string *)aRStack_10);
    Sexy::StrFormat("IMAGE_UI_UI_PLANTTRIAL_%s",asStack_18,uVar5);
    std::string::~string((string *)aRStack_10);
    lVar4 = StringHelper::ToImage(asStack_18,false);
    if (lVar4 == 0) {
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x148));
    }
    else {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x150),aRStack_10);
      Sexy::RtId::~RtId(aRStack_10);
    }
    UpdateBuyText(this);
    if (*(long *)(this + 0x158) != 0) {
      (**(code **)(*(long *)this + 0x68))(this);
      if (*(long **)(this + 0x158) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x158) + 0x18))();
      }
    }
    FUN_05475d88((string *)aRStack_10,*(long *)(this + 0xf0) + 8);
    pPVar6 = ::operator_new(0x1e0);
    PlantLevelUpListView::PlantLevelUpListView(pPVar6,(string *)aRStack_10,1);
    *(PlantLevelUpListView **)(this + 0x158) = pPVar6;
    std::string::~string((string *)aRStack_10);
    lVar4 = *(long *)(this + 0x158);
    pcVar8 = *(code **)(*(long *)this + 0x60);
    *(undefined4 *)(lVar4 + 0x90) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined1 *)(lVar4 + 0x59) = 0;
    (*pcVar8)(this,lVar4);
    (**(code **)(*(long *)this + 0xc0))
              (this,*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x140));
    plVar9 = *(long **)(this + 0x158);
    iVar2 = FUN_049676e0(0x8c);
    lVar4 = plVar9[10];
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_049676e0(0xffffffd3);
    (**(code **)(*plVar9 + 0x1a8))
              (plVar9,(iVar1 - (int)lVar4) / 2 - iVar2,iVar3 + *(int *)(this + 0xe4));
    iVar1 = GetPlantCount();
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),1 < iVar1);
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1 < iVar1);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::BuyWithGem(int) */

void __thiscall PlantTrialViewUI::BuyWithGem(PlantTrialViewUI *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    return;
  }
  iVar1 = PlayerInfo::GetNumGems(this_01,true);
  if ((param_1 <= iVar1) &&
     (iVar1 = PlayerInfo::SubtractGems
                        (this_01,param_1,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false),
     -1 < iVar1)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::ShowOwnPlantTip() */

void __thiscall PlantTrialViewUI::ShowOwnPlantTip(PlantTrialViewUI *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[SUMMARY_NOTICE]",auStack_68);
  FUN_05478178(awStack_50,L"[ALREADY_HAVE_PLANT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCloseDialog);
  Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::CreateCurtain() */

void __thiscall PlantTrialViewUI::CreateCurtain(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ResourceInfo *pRVar7;
  RtClass *pRVar8;
  undefined8 uVar9;
  long lVar10;
  UIWidgetAnim *this_00;
  long *plVar11;
  RtWeakPtr aRStack_28 [8];
  FastCurve aFStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_PLANTTRIAL_CURTAIN");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
  pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
  uVar9 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar8);
  *(undefined8 *)(this + 0x118) = uVar9;
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)(lVar10 + 0x34));
  Sexy::FastCurve::SetOutRange(aFStack_20,1.22,1.21);
  this_00 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_00);
  *(UIWidgetAnim **)(this + 0x140) = this_00;
  UIWidgetAnim::SetAnimRig(this_00,*(PopAnimRig **)(this + 0x118));
  FUN_04967560(*(long *)(this + 0x140) + 0xe0,aFStack_20);
  plVar11 = *(long **)(this + 0x140);
  iVar3 = FUN_049676e0(0x87);
  iVar1 = *(int *)(this + 0xe0);
  iVar4 = FUN_049676e0(0x21);
  iVar2 = *(int *)(this + 0xe4);
  uVar5 = FUN_049676e0(0x1b8);
  uVar6 = FUN_049676e0(0xfa);
  (**(code **)(*plVar11 + 0x198))(plVar11,iVar3 + iVar1,iVar4 + iVar2,uVar5,uVar6);
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::OnAnimationFinish(std::string const&) */

void __thiscall PlantTrialViewUI::OnAnimationFinish(PlantTrialViewUI *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"c");
  if (bVar1) {
    if (*(int *)(this + 0xec) != *(int *)(this + 0xe8)) {
      pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x120));
      std::string::string(asStack_58,"m");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimationFinish);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x120),true);
    }
    pPVar2 = *(PopAnimRig **)(this + 0x118);
    std::string::string(asStack_58,"a");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimationFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&)>(aDStack_38,aCStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"a");
    if (bVar1) {
      pPVar2 = *(PopAnimRig **)(this + 0x118);
      std::string::string(asStack_58,"b");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimationFinish);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      bVar1 = std::operator==(param_1,"b");
      if (bVar1) {
        (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
        EnableInput(this,true);
      }
    }
  }
  bVar1 = std::operator==(param_1,"m");
  if (bVar1) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x120),false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTrialViewUI::BuyWithGem(int, int, int) */

void __thiscall
PlantTrialViewUI::BuyWithGem(PlantTrialViewUI *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar2 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar2 < param_2) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
      return;
    }
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::PlantTrialPay,false);
      return;
    }
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar3 + 0x4b8))(plVar3,param_1,param_2,param_3,3);
  }
  return;
}


/* PlantTrialViewUI::ConfirmBuy() */

void __thiscall PlantTrialViewUI::ConfirmBuy(PlantTrialViewUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar2;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  lVar2 = *(long *)(this + 0xf0);
  if (*(int *)(lVar2 + 0x4c) == 1) {
    this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    iVar1 = NameMapperBase::GetIdForName(this_02,(string *)(lVar2 + 8));
    BuyWithGem(this,iVar1,*(int *)(lVar2 + 0x50),*(int *)(lVar2 + 0x48));
    return;
  }
  if (*(int *)(lVar2 + 0x4c) != 0) {
    return;
  }
  BuyWithMoney(this,(string *)(lVar2 + 0x28));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::AddPurchasedPlantTrialObj(this_01,(string *)(lVar2 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::AddBuyButton() */

void __thiscall PlantTrialViewUI::AddBuyButton(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *this_01;
  code *pcVar8;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(aPStack_78);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x61626364,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
             (Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b724c8,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b724c8,1);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  iVar1 = *(int *)(this + 0x50);
  pcVar8 = *(code **)(*(long *)this_00 + 0x198);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b724c8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar4 = FUN_049676e0(0x69);
  iVar2 = *(int *)(this + 0x54);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b724c8);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b724c8);
  uVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar8)(this_00,(iVar1 - iVar3) / 2,iVar2 - iVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  *(PVZ2UIButton **)(this + 0x128) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::AddSwitchButton() */

void __thiscall PlantTrialViewUI::AddSwitchButton(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PVZ2UIButton *pPVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long *plVar11;
  code *pcVar12;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_78);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar8;
  FUN_05476c50(awStack_78);
  pPVar8 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b723d0,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b72328,1);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar11 = *(long **)(this + 0x130);
  iVar1 = *(int *)(this + 0x50);
  pcVar12 = *(code **)(*plVar11 + 0x198);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723d0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = FUN_049676e0(0x118);
  iVar5 = FUN_049676e0(0x8c);
  iVar2 = *(int *)(this + 0xe4);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723d0);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b723d0);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar12)(plVar11,(iVar1 - iVar3) / 2 - iVar4,iVar5 + iVar2,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  FUN_05476574(awStack_78);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar8;
  FUN_05476c50(awStack_78);
  pPVar8 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b72158,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b72378,1);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar11 = *(long **)(this + 0x138);
  iVar1 = *(int *)(this + 0x50);
  pcVar12 = *(code **)(*plVar11 + 0x198);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72158);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = FUN_049676e0(0x118);
  iVar5 = FUN_049676e0(0x8c);
  iVar2 = *(int *)(this + 0xe4);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72158);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72158);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar12)(plVar11,iVar4 + (iVar1 - iVar3) / 2,iVar5 + iVar2,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::InitView() */

void __thiscall PlantTrialViewUI::InitView(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar3 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72428);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar1 = *(int *)(this + 0x54);
  *(int *)(this + 0xe0) = (iVar3 - iVar2) / 2;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72428);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  *(int *)(this + 0xe4) = (iVar1 - iVar3) / 2;
  AddBuyButton(this);
  AddSwitchButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::DrawPlantDesc(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawPlantDesc(PlantTrialViewUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  GachaConfig *this_00;
  SalesProgressBar *this_01;
  LotteryResultProgressBar *this_02;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  auVar10 = GachaConfig::GetGachaPlantRewardList(this_00);
  Sexy::UTF8StringToWString((Sexy *)(auVar10._0_8_ + 0x18),auVar10._8_8_);
  TodStringTranslate(awStack_38);
  iVar3 = FUN_049676e0(0x46);
  iVar1 = *(int *)(this + 0xe0);
  iVar2 = *(int *)(this + 0xe4);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72428);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_049676e0(0x5f);
  this_02 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72428);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  iVar7 = FUN_049676e0(0x96);
  iVar8 = FUN_049676e0(100);
  Sexy::Insets::Insets(aIStack_28,iVar3 + iVar1,(iVar2 + iVar4) - iVar5,iVar6 - iVar7,iVar8);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_18,2);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aCStack_18,0,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::DrawDot(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawDot(PlantTrialViewUI *this,Graphics *param_1)

{
  CachedUIResourcePtr<Sexy::Image> *this_00;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  Image *pIVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = GetPlantCount();
  if (1 < iVar3) {
    iVar8 = 0;
    iVar4 = FUN_049676e0(10);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72108);
    iVar9 = *(int *)(lVar6 + 0x38);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b721d8);
    iVar9 = (*(int *)(this + 0x50) - ((iVar4 + iVar9) * (iVar3 + -1) + *(int *)(lVar6 + 0x38))) / 2;
    iVar5 = FUN_049676e0(0x10e);
    iVar1 = *(int *)(this + 0xe4);
    do {
      bVar2 = *(int *)(this + 0xe8) != iVar8;
      iVar8 = iVar8 + 1;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b721d8;
      if (bVar2) {
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72108;
      }
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      if (pIVar7 != (Image *)0x0) {
        Sexy::Graphics::DrawImage
                  (param_1,pIVar7,iVar9,(iVar5 + iVar1) - *(int *)(pIVar7 + 0x3c) / 2);
        iVar9 = iVar9 + iVar4 + *(int *)(pIVar7 + 0x38);
      }
    } while (iVar8 != iVar3);
  }
  return;
}


/* PlantTrialViewUI::DrawLimitTimeBuy(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawLimitTimeBuy(PlantTrialViewUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72350);
  iVar2 = FUN_049676e0(0);
  iVar1 = *(int *)(this + 0xe0);
  iVar3 = FUN_049676e0(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2 + iVar1,iVar3 + *(int *)(this + 0xe4));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72200);
  iVar2 = FUN_049676e0(0x19);
  iVar1 = *(int *)(this + 0xe0);
  iVar3 = FUN_049676e0(0x20);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2 + iVar1,iVar3 + *(int *)(this + 0xe4));
  return;
}


/* PlantTrialViewUI::DrawDiscount(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawDiscount(PlantTrialViewUI *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  long lVar9;
  ResourceInfo *pRVar10;
  
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72180);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150);
  iVar4 = FUN_049676e0(0x1b4);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_049676e0(0xe6);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4 + iVar1,iVar5 + *(int *)(this + 0xe4));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b721a8);
  iVar4 = FUN_049676e0(0x1e0);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_049676e0(0x136);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4 + iVar1,iVar5 + *(int *)(this + 0xe4));
  iVar6 = FUN_049676e0(0x1a4);
  iVar1 = *(int *)(this + 0xe0);
  lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72180);
  iVar4 = *(int *)(lVar9 + 0x38);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar5 = *(int *)(lVar9 + 0x38);
  iVar7 = FUN_049676e0(0x131);
  iVar2 = *(int *)(this + 0xe4);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = *(int *)(lVar9 + 0x3c);
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar10,iVar6 + iVar1 + (iVar4 - iVar5) / 2,
             (iVar7 + iVar2) - iVar3 / 2);
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x148));
  iVar4 = FUN_049676e0(0x221);
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = FUN_049676e0(300);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,iVar4 + iVar1,iVar5 + *(int *)(this + 0xe4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::DrawRewardValue(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawRewardValue(PlantTrialViewUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b722b0);
  iVar1 = FUN_049676e0(0x7c);
  iVar3 = *(int *)(this + 0xe0);
  iVar2 = FUN_049676e0(0x134);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1 + iVar3,iVar2 + *(int *)(this + 0xe4) + 0x14);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72450);
  iVar3 = FUN_049676e0(0xf9);
  iVar1 = FUN_049676e0(0x131);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,iVar3 + *(int *)(this + 0xe0) + -0x24,
             iVar1 + *(int *)(this + 0xe4) + 0x14);
  Sexy::StrFormat("IMAGE_UI_UI_PLANTTRIAL_X%d",asStack_10,(ulong)*(uint *)(lVar5 + 100));
  pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
  if (pIVar4 != (Image *)0x0) {
    iVar3 = FUN_049676e0(0x121);
    iVar1 = FUN_049676e0(0x134);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,iVar3 + *(int *)(this + 0xe0) + -0x24,
               iVar1 + *(int *)(this + 0xe4) + 0x14);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::DrawTimeLeft(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::DrawTimeLeft(PlantTrialViewUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  time_t tVar7;
  int *piVar8;
  Image *pIVar9;
  undefined8 uVar10;
  int local_10 [2];
  long local_8;
  
  uVar10 = *(undefined8 *)(*(long *)(this + 0xf8) + 8);
  local_8 = ___stack_chk_guard;
  tVar7 = time((time_t *)0x0);
  iVar1 = (int)uVar10 - (int)tVar7;
  if (iVar1 < 0) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    local_10[1] = 9;
    local_10[0] = (iVar1 / 0xe10) / 10;
    iVar2 = (iVar1 % 0xe10) / 0x3c;
    piVar8 = eastl::min_alt<int>(local_10,local_10 + 1);
    iVar5 = *piVar8;
    iVar3 = FUN_049676e0(0x82);
    iVar6 = *(int *)(this + 0xe0);
    iVar4 = FUN_049676e0(0x20);
    iVar4 = iVar4 + *(int *)(this + 0xe4);
    DrawTimeLimitNumber(this,param_1,iVar5,iVar3 + iVar6,iVar4);
    iVar5 = FUN_049676e0(0xf);
    iVar5 = iVar3 + iVar6 + iVar5;
    DrawTimeLimitNumber(this,param_1,(iVar1 / 0xe10) % 10,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    iVar5 = iVar5 + iVar6;
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72250);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    iVar5 = iVar5 + iVar6;
    DrawTimeLimitNumber(this,param_1,iVar2 / 10,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    iVar5 = iVar5 + iVar6;
    DrawTimeLimitNumber(this,param_1,iVar2 % 10,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    iVar5 = iVar5 + iVar6;
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72250);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    iVar5 = iVar5 + iVar6;
    DrawTimeLimitNumber(this,param_1,(iVar1 % 0x3c) / 10,iVar5,iVar4);
    iVar6 = FUN_049676e0(0xf);
    if (local_8 == ___stack_chk_guard) {
      DrawTimeLimitNumber(this,param_1,(iVar1 % 0x3c) % 10,iVar5 + iVar6,iVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::Draw(Sexy::Graphics*) */

void __thiscall PlantTrialViewUI::Draw(PlantTrialViewUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  long lVar5;
  
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72428);
  Sexy::Graphics::DrawImage(param_1,pIVar4,*(int *)(this + 0xe0),*(int *)(this + 0xe4));
  DrawLimitTimeBuy(this,param_1);
  DrawTimeLeft(this,param_1);
  DrawDiscount(this,param_1);
  DrawRewardValue(this,param_1);
  DrawDot(this,param_1);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b724f0);
  iVar1 = *(int *)(this + 0x50);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b724f0);
  iVar2 = FUN_049676e0(100);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,(iVar1 - *(int *)(lVar5 + 0x38)) / 2,*(int *)(this + 0xe4) - iVar2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b72278);
  iVar2 = FUN_049676e0(0);
  iVar1 = *(int *)(this + 0xe0);
  iVar3 = FUN_049676e0(0x10e);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1 - iVar2,iVar3 + *(int *)(this + 0xe4));
  StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x120),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::CreatePageTearEffect() */

void __thiscall PlantTrialViewUI::CreatePageTearEffect(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  TimeChallengeEndLevelUI *this_01;
  RtWeakPtr aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  std::string::string(asStack_50,"POPANIM_EFFECTS_PLANTTRIAL_PAGE_TEAR");
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  iVar1 = FUN_049676e0(0x19a);
  iVar2 = FUN_049676e0(0xe1);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_50,(float)(iVar1 + *(int *)(this + 0xe0)),
             (float)(iVar2 + *(int *)(this + 0xe4)));
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)asStack_50,900000);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  (**(code **)(*(long *)this_00 + 0xb8))(0x3f400000,0x3f400000,this_00);
  this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::~PlantTrialViewUI() */

void __thiscall PlantTrialViewUI::~PlantTrialViewUI(PlantTrialViewUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06915dc0;
  *(undefined **)(this + 0xd8) = &DAT_069160f0;
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 0x18))();
    *(undefined8 *)(this + 0x120) = 0;
  }
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0x140),(PopAnimRig *)0x0);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantTrial");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantTrialEffect");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldMap");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelImage");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::~PlantTrialViewUI() */

void __thiscall PlantTrialViewUI::~PlantTrialViewUI(PlantTrialViewUI *this)

{
  ~PlantTrialViewUI(this);
  AK::FreeHook(this);
  return;
}


/* PlantTrialViewUI::ButtonPress(int) */

void PlantTrialViewUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PlantTrialViewUI::ButtonPress(int) */

void __thiscall PlantTrialViewUI::ButtonPress(PlantTrialViewUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::OnPlantTrialPaid(bool) */

void __thiscall PlantTrialViewUI::OnPlantTrialPaid(PlantTrialViewUI *this,bool param_1)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar3;
  undefined8 uVar4;
  PVZ2UIDialog *pPVar5;
  long lVar6;
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  undefined1 auStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar2 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar6 = *(long *)(this + 0xf0);
    if (0 < *(int *)(lVar6 + 100)) {
      PlayerInfo::AddCoins(this_01,*(int *)(lVar6 + 100));
      lVar6 = *(long *)(this + 0xf0);
    }
    if (0 < *(int *)(lVar6 + 0x60)) {
      PlayerInfo::AddKeys(this_01,(string *)(lVar6 + 0x30),*(int *)(lVar6 + 0x60));
      lVar6 = *(long *)(this + 0xf0);
    }
    puVar1 = gMessageRouter;
    FUN_05475d88(asStack_50,lVar6 + 8);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar1,Message::PlantTrialBuy,5,asStack_50);
    std::string::~string(asStack_50);
    TodStringTranslate(L"[PLANTTRIAL_BUY_SUCCESS]");
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    Plant::GetFormattedNameString((Plant *)awStack_58,aRStack_60);
    uVar4 = FUN_054766ec(awStack_58);
    FUN_05478178(asStack_50,uVar4,auStack_78);
    TodReplaceString(awStack_70,L"{PLANT}",(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    pLVar2 = gLawnApp;
    FUN_05478178(awStack_58,L"[PLANTTRIAL_BUY_SUCCESS_TITLE]",auStack_78);
    uVar4 = FUN_054766ec(auStack_68);
    FUN_05478178(asStack_50,uVar4,aRStack_60);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",aRStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialogWithSuccess);
    Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    FUN_05476c50(auStack_68);
    FUN_05476c50(awStack_70);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",aRStack_60);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",aRStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCloseDialog);
    Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>
              (aDStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::AddBuyDialog() */

void __thiscall PlantTrialViewUI::AddBuyDialog(PlantTrialViewUI *this)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_00;
  wchar_t *pwVar3;
  string *psVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  Plant aPStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_049676e0(400);
  lVar6 = *(long *)(this + 0xf0);
  iVar2 = FUN_049676e0(0xfa);
  this_00 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05476574(awStack_70);
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 == 0xb) || (iVar1 == 5)) {
    if (*(int *)(lVar6 + 0x4c) == 0) {
      pwVar3 = L"[PLANTTRIAL_BUY_DIALOG_NAME_MM_1]";
    }
    else {
      pwVar3 = L"[PLANTTRIAL_BUY_DIALOG_NAME_MM_2]";
    }
  }
  else if (*(int *)(lVar6 + 0x4c) == 0) {
    pwVar3 = L"[PLANTTRIAL_BUY_DIALOG_NAME_1]";
  }
  else {
    pwVar3 = L"[PLANTTRIAL_BUY_DIALOG_NAME_2]";
  }
  TodStringTranslate(pwVar3);
  FUN_054766c8(awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  TodReplaceNumberString(awStack_70,L"{COST_NUM}",*(int *)(lVar6 + 0x50));
  FUN_054766c8(awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  TodReplaceNumberString(awStack_70,L"{PLANT_LEVEL}",*(int *)(lVar6 + 0x48));
  FUN_054766c8(awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  Plant::GetFormattedNameString(aPStack_60,aRStack_68);
  uVar5 = FUN_054766ec(aPStack_60);
  FUN_05478178(awStack_58,uVar5,auStack_78);
  TodReplaceString(awStack_70,L"{PLANT_NAME}",awStack_58);
  FUN_054766c8(awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05476c50(aPStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  TodReplaceNumberString(awStack_70,L"{COIN_NUM}",*(int *)(lVar6 + 100));
  FUN_054766c8(awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  PVZ2UIDialog::SetFooterLabel(this_00,awStack_70);
  FUN_05478178(awStack_50,L"[PLANTTRIAL_BUY_DIALOG_TITLE]",awStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",aPStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelBuy);
  Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_00,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",aPStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ConfirmBuy);
  Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_00,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05476c50(awStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::ButtonDepress(int) */

void __thiscall PlantTrialViewUI::ButtonDepress(PlantTrialViewUI *this,int param_1)

{
  string *psVar1;
  undefined *puVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  TGALogMgr *pTVar4;
  int iVar5;
  long lVar6;
  PopAnimRig *pPVar7;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  puVar2 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x61626364) {
    lVar6 = *(long *)(this + 0xf0);
    psVar1 = (string *)(lVar6 + 8);
    FUN_05475d88(asStack_50,psVar1);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar2,Message::PlantTrialBuy,6,asStack_50);
    std::string::~string(asStack_50);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlayerInfo::GetPlantStarLevel(this_01,psVar1,false);
    if (iVar3 < *(int *)(*(long *)(this + 0xf0) + 0x48)) {
      this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      iVar3 = NameMapperBase::GetIdForName(this_02,psVar1);
      AddBuyDialog(this);
      if (*(int *)(lVar6 + 0x4c) == 1) {
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPlantTrial(pTVar4,2,iVar3,0,*(int *)(lVar6 + 0x50),0);
      }
      else if (*(int *)(lVar6 + 0x4c) == 0) {
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPlantTrial(pTVar4,2,iVar3,0,0,*(int *)(lVar6 + 0x50));
      }
    }
    else {
      ShowOwnPlantTip(this);
    }
  }
  else if ((uint)param_1 < 2) {
    iVar3 = GetPlantCount();
    if (param_1 == 0) {
      iVar5 = *(int *)(this + 0xe8) + -1;
      if (iVar5 < 0) {
        iVar5 = iVar3 + -1;
      }
    }
    else {
      iVar5 = *(int *)(this + 0xe8) + 1;
      if (iVar3 + -1 < iVar5) {
        iVar5 = 0;
      }
    }
    *(int *)(this + 0xec) = iVar5;
    pPVar7 = *(PopAnimRig **)(this + 0x118);
    std::string::string(asStack_58,"c");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimationFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantTrialViewUI,void(PlantTrialViewUI::*)(std::string_const&)>(aDStack_38,asStack_50)
    ;
    PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    EnableInput(this,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantTrialViewUI::ButtonDepress(int) */

void __thiscall PlantTrialViewUI::ButtonDepress(PlantTrialViewUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::SetCurrentPlant(int) */

void __thiscall PlantTrialViewUI::SetCurrentPlant(PlantTrialViewUI *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  bool bVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined8 *puVar3;
  undefined8 uVar4;
  PlantTrialConfig *pPVar5;
  undefined8 uVar6;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x100);
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  puVar3 = (undefined8 *)PlayerInfo::GetPlantTrialRecord(this_02);
  uVar4 = FUN_0496756c(*puVar3,(long)param_1);
  FUN_05475d88(asStack_20,uVar4);
  pPVar5 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  FUN_05475d88((string *)&local_10,asStack_20);
  uVar4 = PlantTrialConfig::GetTrialDataByPlantName(pPVar5,(string *)&local_10);
  *(undefined8 *)(this + 0xf0) = uVar4;
  std::string::~string((string *)&local_10);
  uVar4 = PlayerInfo::GetPlantTrialObjInfo(this_02,asStack_20);
  *(undefined8 *)(this + 0xf8) = uVar4;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar6,asStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar2) {
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)this_00,asStack_20);
    puVar1 = gMessageRouter;
    FUN_05475d88((string *)&local_10,*(long *)(this + 0xf0) + 0x28);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar1,Message::PlantTrialBuy,0,(string *)&local_10);
    std::string::~string((string *)&local_10);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::PlantTrialViewUI(std::string const&) */

void __thiscall PlantTrialViewUI::PlantTrialViewUI(PlantTrialViewUI *this,string *param_1)

{
  undefined *this_00;
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int *piVar6;
  NameMapperBase *this_03;
  TGALogMgr *this_04;
  PlantTrialConfig *pPVar7;
  int local_58 [2];
  undefined4 local_50 [6];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06915dc0;
  *(undefined **)(this + 0xd8) = &DAT_069160f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"PlantTrialEffect");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_PlantTrial");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_WorldMap");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"LevelImage");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  InitView(this);
  CreateCurtain(this);
  uVar5 = CreatePageTearEffect(this);
  *(undefined8 *)(this + 0x120) = uVar5;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar2 = PlayerInfo::IsPlantTrialObjExist(this_02,param_1);
  if (cVar2 == '\0') {
    PlayerInfo::AddPlantTrialObj(this_02,param_1);
    PlayerInfo::AddPlantOnlyNameTrial(this_02,param_1);
    pPVar7 = (PlantTrialConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
    FUN_05475d88((string *)local_50,param_1);
    PlantTrialConfig::GetTrialDataByPlantName(pPVar7,(string *)local_50);
    std::string::~string((string *)local_50);
  }
  local_58[0] = GetPlantIndex(this,param_1);
  local_50[0] = 0;
  piVar6 = eastl::max_alt<int>((int *)local_50,local_58);
  local_58[0] = *piVar6;
  SetCurrentPlant(this,local_58[0]);
  this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar4 = NameMapperBase::GetIdForName(this_03,param_1);
  this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPlantTrial(this_04,1,iVar4,0,0,0);
  UpdateView(this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuySuccess);
  Sexy::Delegate0::Delegate0<PlantTrialViewUI,void(PlantTrialViewUI::*)()>
            (aDStack_38,(string *)local_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantTrialPaySuccess,aDStack_38);
  bVar3 = std::operator==(param_1,"bloomerang");
  if (bVar3) {
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0xd);
  }
  else {
    bVar3 = std::operator==(param_1,"bonkchoy");
    if (bVar3) {
      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x15);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::OnPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void PlantTrialViewUI::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"switch");
  if ((bVar1) && (*(int *)(param_1 + 0xec) != *(int *)(param_1 + 0xe8))) {
    SetCurrentPlant((PlantTrialViewUI *)param_1,*(int *)(param_1 + 0xec));
    UpdateView((PlantTrialViewUI *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::RemoveCurrentPlant() */

void __thiscall PlantTrialViewUI::RemoveCurrentPlant(PlantTrialViewUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::RemovePlantTrialObj(this_01,(string *)(*(long *)(this + 0xf0) + 8));
  iVar1 = GetPlantCount();
  if (iVar1 == 0) {
    if (local_8 == ___stack_chk_guard) {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      return;
    }
  }
  else {
    local_c = iVar1 + -1;
    local_10 = *(int *)(this + 0xe8) + 1;
    piVar2 = eastl::min_alt<int>(&local_10,&local_c);
    if (local_8 == ___stack_chk_guard) {
      SetCurrentPlant(this,*piVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTrialViewUI::onCloseDialogWithSuccess() */

void __thiscall PlantTrialViewUI::onCloseDialogWithSuccess(PlantTrialViewUI *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillPlantSkillTipsUI(gLawnApp);
  RemoveCurrentPlant(this);
  UpdateView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTrialViewUI::OnBuySuccess() */

void __thiscall PlantTrialViewUI::OnBuySuccess(PlantTrialViewUI *this)

{
  string *psVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  puVar2 = gMessageRouter;
  if (this_01 != (PlayerInfo *)0x0) {
    lVar6 = *(long *)(this + 0xf0);
    psVar1 = (string *)(lVar6 + 8);
    FUN_05475d88(asStack_10,lVar6 + 0x28);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar2,Message::PlantTrialBuy,5,asStack_10);
    std::string::~string(asStack_10);
    iVar4 = GetNeedTotalPiece(this,psVar1,*(int *)(lVar6 + 0x48));
    if (iVar4 != -1) {
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar1);
      if (cVar3 == '\0') {
        PlayerInfo::UnlockPlant(this_01,psVar1,false);
      }
      else {
        PlayerInfo::AddPlantPieceCount((string *)this_01,(int)psVar1,SUB41(iVar4,0));
        iVar5 = PlayerInfo::GetPlantStarLevel(this_01,psVar1,false);
        iVar5 = GetNeedTotalPiece(this,psVar1,iVar5);
        PlayerInfo::SubPlantPieceCount(this_01,psVar1,iVar4 - iVar5);
      }
      PlayerInfo::PlantLevelUpCurrentLevel(this_01,psVar1,*(int *)(lVar6 + 0x48),false);
      if (0 < *(int *)(lVar6 + 100)) {
        PlayerInfo::AddCoins(this_01,*(int *)(lVar6 + 100));
      }
      if (0 < *(int *)(lVar6 + 0x60)) {
        PlayerInfo::AddKeys(this_01,(string *)(lVar6 + 0x30),*(int *)(lVar6 + 0x60));
      }
      PlayerInfo::RemovePurchasedPlantTrialObj(this_01,psVar1);
      LawnApp::KillPlantSkillTipsUI(gLawnApp);
      RemoveCurrentPlant(this);
      UpdateView(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

