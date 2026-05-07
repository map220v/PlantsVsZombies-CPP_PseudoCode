// Class: ArtifactBlessWidget


/* ArtifactBlessWidget::~ArtifactBlessWidget() */

void __thiscall ArtifactBlessWidget::~ArtifactBlessWidget(ArtifactBlessWidget *this)

{
  ArtifactBlessWidget *pAVar1;
  ArtifactBlessWidget *pAVar2;
  
  pAVar1 = this + 0x168;
  pAVar2 = this + 0x178;
  *(undefined ***)this = &PTR_GetClass_066975d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066978f8;
  do {
    pAVar2 = pAVar2 + -8;
    FUN_05476c50(pAVar2);
  } while (pAVar1 != pAVar2);
  do {
    pAVar1 = pAVar1 + -8;
    FUN_05476c50(pAVar1);
  } while (this + 0x158 != pAVar1);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactBlessWidget::~ArtifactBlessWidget() */

void __thiscall ArtifactBlessWidget::~ArtifactBlessWidget(ArtifactBlessWidget *this)

{
  ~ArtifactBlessWidget(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactBlessWidget::closeDescriptionWidget() */

void __thiscall ArtifactBlessWidget::closeDescriptionWidget(ArtifactBlessWidget *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* ArtifactBlessWidget::ArtifactBlessWidget() */

void __thiscall ArtifactBlessWidget::ArtifactBlessWidget(ArtifactBlessWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066975d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066978f8;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x150] = (ArtifactBlessWidget)0x0;
  this[0x151] = (ArtifactBlessWidget)0x0;
  FUN_05476574(this + 0x158);
  FUN_05476574(this + 0x160);
  FUN_05476574(this + 0x168);
  FUN_05476574(this + 0x170);
  return;
}


/* ArtifactBlessWidget::onButtonDepressed() */

void __thiscall ArtifactBlessWidget::onButtonDepressed(ArtifactBlessWidget *this)

{
  long *plVar1;
  
  if ((this[0x150] == (ArtifactBlessWidget)0x0) && (this[0x151] == (ArtifactBlessWidget)0x0)) {
    if (*(long **)(this + 0x108) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x108) + 0x188))();
      return;
    }
  }
  else {
    plVar1 = *(long **)(this + 0x108);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1,1);
    }
  }
  return;
}


/* ArtifactBlessWidget::BuyMaterial(UIMessageBox*, int) */

void __thiscall
ArtifactBlessWidget::BuyMaterial(ArtifactBlessWidget *this,UIMessageBox *param_1,int param_2)

{
  QuickJumpUtil *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
  QuickJumpUtil::ShowArtifactPresent(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::refreshOthers() */

void ArtifactBlessWidget::refreshOthers(void)

{
  long in_x0;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar1;
  ulong uVar2;
  int in_w3;
  long lVar3;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar3 = *(long *)(in_x0 + 0x130);
  if (lVar3 != 0) {
    std::string::string(asStack_18,"[ARTIFACT_BLESS_LEGEND_TIPS]");
    lVar1 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar2 = FUN_037ac534(*(undefined4 *)(lVar1 + 0x5c));
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)L"{LEFT_COUNT}",(wchar_t *)(uVar2 & 0xffffffff),
               in_w3);
    PuzzleTip::SetTip(lVar3,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  lVar3 = *(long *)(in_x0 + 0x138);
  if (lVar3 != 0) {
    std::string::string(asStack_18,"mat_artifact_bless_normal");
    uVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_18);
    Sexy::StrFormat(L"%d/%d",auStack_10,1,uVar2 & 0xffffffff);
    PuzzleTip::SetTip(lVar3,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  lVar3 = *(long *)(in_x0 + 0x140);
  if (lVar3 != 0) {
    std::string::string(asStack_18,"mat_artifact_bless_advance");
    uVar2 = PlayerInfo::GetMaterialNum(this_00,asStack_18);
    Sexy::StrFormat(L"%d/%d",auStack_10,1,uVar2 & 0xffffffff);
    PuzzleTip::SetTip(lVar3,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::CheckBless(bool) */

void __thiscall ArtifactBlessWidget::CheckBless(ArtifactBlessWidget *this,bool param_1)

{
  undefined1 uVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1) {
    std::string::string(asStack_50,"mat_artifact_bless_normal");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    if (0 < iVar2) goto LAB_037ae944;
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[ARTIFACT_BLESS_MATERIAL_NORMAL_NOT_ENOUGH]");
      UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string(asStack_50);
      nop();
      lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
      thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else {
    std::string::string(asStack_50,"mat_artifact_bless_advance");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    if (0 < iVar2) {
LAB_037ae944:
      uVar1 = 1;
      goto LAB_037ae800;
    }
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[ARTIFACT_BLESS_MATERIAL_ADVANCE_NOT_ENOUGH]");
      UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_60);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,BuyMaterial);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<ArtifactBlessWidget,void(ArtifactBlessWidget::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar3,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      uVar1 = 0;
      goto LAB_037ae800;
    }
  }
  uVar1 = 0;
LAB_037ae800:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::showDescriptionWidget() */

void __thiscall ArtifactBlessWidget::showDescriptionWidget(ArtifactBlessWidget *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x148) = this_00;
    TodStringTranslate(L"[ARTIFACT_BLESS_DESCRIPTION]");
    TodStringTranslate(L"[ARTIFACT_BLESS_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x148);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<ArtifactBlessWidget,void(ArtifactBlessWidget::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::CheckLeftIsBetter(bool) */

void __thiscall ArtifactBlessWidget::CheckLeftIsBetter(ArtifactBlessWidget *this,bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentBoostInfo(iVar4,SUB41(*(undefined4 *)(this + 0xe0),0));
  iVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentBoostInfo(iVar4,SUB41(*(undefined4 *)(this + 0xe0),0));
  if (param_1) {
    param_1 = false;
    uVar5 = FUN_037ac5f0(local_20,local_18);
    if (uVar5 == 0) goto LAB_037b1b3c;
    uVar7 = FUN_037ac5f0(local_38,local_30);
    uVar2 = local_20;
    uVar3 = local_38;
  }
  else {
    uVar5 = FUN_037ac5f0(local_38,local_30);
    if (uVar5 == 0) goto LAB_037b1b3c;
    uVar7 = FUN_037ac5f0(local_20,local_18);
    uVar2 = local_38;
    uVar3 = local_20;
  }
  if (uVar7 != 0) {
    lVar6 = FUN_037ac5fc(uVar2,0);
    iVar4 = *(int *)(lVar6 + 0x14);
    lVar6 = FUN_037ac5fc(uVar3,0);
    bVar1 = *(int *)(lVar6 + 0x14) < iVar4;
    param_1 = bVar1 && 1 < iVar4;
    if (((!bVar1 || 1 >= iVar4) && (1 < uVar5)) && (1 < uVar7)) {
      lVar6 = FUN_037ac5fc(uVar2,1);
      iVar4 = *(int *)(lVar6 + 0x14);
      lVar6 = FUN_037ac5fc(uVar3,1);
      param_1 = *(int *)(lVar6 + 0x14) < iVar4 && 1 < iVar4;
    }
  }
LAB_037b1b3c:
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_20)
  ;
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::SaveBoost(bool) */

void __thiscall ArtifactBlessWidget::SaveBoost(ArtifactBlessWidget *this,bool param_1)

{
  undefined8 uVar1;
  string *this_00;
  DNetwork *this_01;
  char *__s;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3000];
  string asStack_130 [296];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_ce8,"type");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (param_1) {
    __s = "0";
  }
  else {
    __s = "1";
  }
  std::string::append(this_00,__s,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_037ad2fc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_130,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* ArtifactBlessWidget::SaveOldBoost(UIMessageBox*, int) */

void __thiscall
ArtifactBlessWidget::SaveOldBoost(ArtifactBlessWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  SaveBoost(this,true);
  return;
}


/* ArtifactBlessWidget::SaveNewBoost(UIMessageBox*, int) */

void __thiscall
ArtifactBlessWidget::SaveNewBoost(ArtifactBlessWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  SaveBoost(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::Bless(bool) */

void __thiscall ArtifactBlessWidget::Bless(ArtifactBlessWidget *this,bool param_1)

{
  char cVar1;
  undefined8 uVar2;
  string *psVar3;
  DNetwork *this_00;
  char *pcVar4;
  string *psVar5;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2992];
  string asStack_138 [304];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CheckBless(this,param_1);
  if (cVar1 != '\0') {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    FUN_05474278(uVar2,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    psVar5 = asStack_d40;
    std::string::string(asStack_ce8,"type");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_ce8);
    if (param_1) {
      pcVar4 = "0";
    }
    else {
      pcVar4 = "1";
    }
    std::string::append(psVar3,pcVar4,(size_t)psVar5);
    std::string::~string(asStack_ce8);
    nop();
    psVar5 = asStack_d40;
    if (this[0x150] == (ArtifactBlessWidget)0x0) {
      if (this[0x151] == (ArtifactBlessWidget)0x0) {
        std::string::string(asStack_ce8,"lock");
        psVar3 = (string *)
                 std::
                 map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                               *)amStack_d18,asStack_ce8);
        pcVar4 = "[]";
      }
      else {
        std::string::string(asStack_ce8,"lock");
        psVar3 = (string *)
                 std::
                 map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                 ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                               *)amStack_d18,asStack_ce8);
        pcVar4 = "[1]";
      }
    }
    else {
      std::string::string(asStack_ce8,"lock");
      psVar3 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_d18,asStack_ce8);
      pcVar4 = "[0]";
    }
    std::string::append(psVar3,pcVar4,(size_t)psVar5);
    std::string::~string(asStack_ce8);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_037ad358(afStack_d38,this,param_1);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_138,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::ButtonDepress(int) */

void __thiscall ArtifactBlessWidget::ButtonDepress(ArtifactBlessWidget *this,int param_1)

{
  ArtifactBlessWidget AVar1;
  char cVar2;
  ArtifactCultivationListView *this_00;
  UIMessageBox *this_01;
  Image *pIVar3;
  undefined *puVar4;
  code *pcVar5;
  PVZ2UIButton *pPVar6;
  wstring awStack_b0 [8];
  Delegate2<UIMessageBox*,int> aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6a) {
    this_00 = (ArtifactCultivationListView *)LawnApp::GetArtifactCultivationListView(gLawnApp);
    ArtifactCultivationListView::UpdateSkillButtons(this_00);
    ArtifactCultivationListView::UpdateArtifactButton(this_00);
    InvitationLotteryPanel::CloseBonusUI((InvitationLotteryPanel *)this_00);
    goto LAB_037b2414;
  }
  if (param_1 == 0x6f) {
    AVar1 = this[0x150];
    this[0x150] = (ArtifactBlessWidget)((byte)AVar1 ^ 1);
    if ((ArtifactBlessWidget)((byte)AVar1 ^ 1) == (ArtifactBlessWidget)0x0) {
LAB_037b2458:
      pPVar6 = *(PVZ2UIButton **)(this + 0x118);
      goto LAB_037b245c;
    }
    this[0x151] = (ArtifactBlessWidget)0x0;
    pPVar6 = *(PVZ2UIButton **)(this + 0x118);
    puVar4 = &DAT_06ab0768;
  }
  else {
    if (param_1 != 0x70) {
      if (param_1 == 0x71) {
        cVar2 = CheckLeftIsBetter(this,true);
        if (cVar2 == '\0') {
          SaveBoost(this,true);
          goto LAB_037b2414;
        }
        this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_01 == (UIMessageBox *)0x0) goto LAB_037b2414;
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[PLANT_FAMILY_SAVE_NOTICE]");
        UIMessageBox::SetMessage(this_01,(wstring *)aPStack_78,awStack_b0);
        std::string::string((string *)aPStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage((string *)aPStack_40,false);
        UIMessageBox::SetBackground(this_01,pIVar3);
        std::string::~string((string *)aPStack_40);
        nop();
        pcVar5 = SaveOldBoost;
      }
      else if (param_1 == 0x72) {
        cVar2 = CheckLeftIsBetter(this,false);
        if (cVar2 == '\0') {
          SaveBoost(this,false);
          goto LAB_037b2414;
        }
        this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_01 == (UIMessageBox *)0x0) goto LAB_037b2414;
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[PLANT_FAMILY_SAVE_NOTICE]");
        UIMessageBox::SetMessage(this_01,(wstring *)aPStack_78,awStack_b0);
        std::string::string((string *)aPStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage((string *)aPStack_40,false);
        UIMessageBox::SetBackground(this_01,pIVar3);
        std::string::~string((string *)aPStack_40);
        nop();
        pcVar5 = SaveNewBoost;
      }
      else if (param_1 == 0x73) {
        cVar2 = CheckLeftIsBetter(this,true);
        if (cVar2 == '\0') {
          Bless(this,true);
          goto LAB_037b2414;
        }
        this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_01 == (UIMessageBox *)0x0) goto LAB_037b2414;
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[PLANT_FAMILY_SAVE_NOTICE]");
        UIMessageBox::SetMessage(this_01,(wstring *)aPStack_78,awStack_b0);
        std::string::string((string *)aPStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage((string *)aPStack_40,false);
        UIMessageBox::SetBackground(this_01,pIVar3);
        std::string::~string((string *)aPStack_40);
        nop();
        pcVar5 = BlessNormalBoost;
      }
      else {
        if (param_1 != 0x74) {
          if (param_1 == 0x6d) {
            showDescriptionWidget(this);
          }
          goto LAB_037b2414;
        }
        cVar2 = CheckLeftIsBetter(this,true);
        if (cVar2 == '\0') {
          Bless(this,false);
          goto LAB_037b2414;
        }
        this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_01 == (UIMessageBox *)0x0) goto LAB_037b2414;
        UIMessageBox::SetShowType(this_01,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[PLANT_FAMILY_SAVE_NOTICE]");
        UIMessageBox::SetMessage(this_01,(wstring *)aPStack_78,awStack_b0);
        std::string::string((string *)aPStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage((string *)aPStack_40,false);
        UIMessageBox::SetBackground(this_01,pIVar3);
        std::string::~string((string *)aPStack_40);
        nop();
        pcVar5 = BlessAdvanceBoost;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,pcVar5);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<ArtifactBlessWidget,void(ArtifactBlessWidget::*)(UIMessageBox*,int)>
                (aDStack_a8,aPStack_40);
      UIMessageBox::SetCallback(this_01,aDStack_a8);
      FUN_05476c50(aPStack_78);
      FUN_05476c50(awStack_b0);
      goto LAB_037b2414;
    }
    AVar1 = this[0x151];
    this[0x151] = (ArtifactBlessWidget)((byte)AVar1 ^ 1);
    if ((ArtifactBlessWidget)((byte)AVar1 ^ 1) != (ArtifactBlessWidget)0x0) {
      this[0x150] = (ArtifactBlessWidget)0x0;
      goto LAB_037b2458;
    }
    pPVar6 = *(PVZ2UIButton **)(this + 0x118);
    if (this[0x150] != (ArtifactBlessWidget)0x0) {
      puVar4 = &DAT_06ab0768;
      goto LAB_037b2464;
    }
LAB_037b245c:
    puVar4 = &DAT_06ab0670;
  }
LAB_037b2464:
  PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar4,2);
  if (this[0x150] == (ArtifactBlessWidget)0x0) {
    puVar4 = &DAT_06ab0670;
  }
  else {
    puVar4 = &DAT_06ab0768;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar4,2);
  PVZ2UIButton::SetDialogStates(pPVar6,aPStack_78,aPStack_40);
  pPVar6 = *(PVZ2UIButton **)(this + 0x120);
  if (this[0x151] == (ArtifactBlessWidget)0x0) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ab0670,2);
    if (this[0x151] == (ArtifactBlessWidget)0x0) goto LAB_037b24cc;
LAB_037b251c:
    puVar4 = &DAT_06ab0768;
  }
  else {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ab0768,2);
    if (this[0x151] != (ArtifactBlessWidget)0x0) goto LAB_037b251c;
LAB_037b24cc:
    puVar4 = &DAT_06ab0670;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar4,2);
  PVZ2UIButton::SetDialogStates(pPVar6,aPStack_78,aPStack_40);
LAB_037b2414:
  onButtonDepressed(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ArtifactBlessWidget::ButtonDepress(int) */

void __thiscall ArtifactBlessWidget::ButtonDepress(ArtifactBlessWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ArtifactBlessWidget::BlessNormalBoost(UIMessageBox*, int) */

void __thiscall
ArtifactBlessWidget::BlessNormalBoost(ArtifactBlessWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  Bless(this,true);
  return;
}


/* ArtifactBlessWidget::BlessAdvanceBoost(UIMessageBox*, int) */

void __thiscall
ArtifactBlessWidget::BlessAdvanceBoost(ArtifactBlessWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  Bless(this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::Refresh() */

void __thiscall ArtifactBlessWidget::Refresh(ArtifactBlessWidget *this)

{
  char cVar1;
  int iVar2;
  CurrentArtifactBoostInfo *pCVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  refreshOthers();
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentBoostInfo(iVar2,SUB41(*(undefined4 *)(this + 0xe0),0));
  iVar2 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetCurrentBoostInfo(iVar2,SUB41(*(undefined4 *)(this + 0xe0),0));
  cVar1 = std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::empty
                    ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
                     &local_38);
  if (cVar1 == '\0') {
    cVar1 = std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::empty
                      ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
                       &local_20);
    plVar5 = *(long **)(this + 0x118);
    if (cVar1 == '\0') {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
      (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),1);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),0);
      pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,0);
      convertStringValueByBoostInfo(pCVar3);
      FUN_054766c8(this + 0x158,auStack_40);
      FUN_05476c50(auStack_40);
      uVar4 = FUN_037ac5f0(local_38,local_30);
      if (uVar4 < 2) {
        TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      }
      else {
        pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,1);
        convertStringValueByBoostInfo(pCVar3);
      }
      FUN_054766c8(this + 0x160,auStack_40);
      FUN_05476c50(auStack_40);
      pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,0);
      convertStringValueByBoostInfo(pCVar3);
      FUN_054766c8(this + 0x168,auStack_40);
      FUN_05476c50(auStack_40);
      uVar4 = FUN_037ac5f0(local_20,local_18);
      if (uVar4 < 2) {
        TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      }
      else {
        pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,1);
        convertStringValueByBoostInfo(pCVar3);
      }
    }
    else {
      (**(code **)(*plVar5 + 0x188))(plVar5,0);
      (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),0);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
      pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,0);
      convertStringValueByBoostInfo(pCVar3);
      FUN_054766c8(this + 0x158,auStack_40);
      FUN_05476c50(auStack_40);
      uVar4 = FUN_037ac5f0(local_38,local_30);
      if (uVar4 < 2) {
        TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      }
      else {
        pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_38,1);
        convertStringValueByBoostInfo(pCVar3);
      }
      FUN_054766c8(this + 0x160,auStack_40);
      FUN_05476c50(auStack_40);
      if (this[0x150] == (ArtifactBlessWidget)0x0) {
        TodStringTranslate(L"[PLANT_FAMILY_UNLOCK_DESC]");
      }
      else {
        TodStringTranslate(L"[PLANT_FAMILY_DONOT_REFRESH]");
      }
      FUN_054766c8(this + 0x168,auStack_40);
      FUN_05476c50(auStack_40);
      if (this[0x151] == (ArtifactBlessWidget)0x0) {
        TodStringTranslate(L"[PLANT_FAMILY_UNLOCK_DESC]");
      }
      else {
        TodStringTranslate(L"[PLANT_FAMILY_DONOT_REFRESH]");
      }
    }
    FUN_054766c8(this + 0x170,auStack_40);
    FUN_05476c50(auStack_40);
  }
  else {
    cVar1 = std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::empty
                      ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
                       &local_20);
    plVar5 = *(long **)(this + 0x118);
    if (cVar1 == '\0') {
      (**(code **)(*plVar5 + 0x188))(plVar5);
      (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),1);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),0);
      TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      FUN_054766c8(this + 0x158,auStack_40);
      FUN_05476c50(auStack_40);
      TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      FUN_054766c8(this + 0x160,auStack_40);
      FUN_05476c50(auStack_40);
      pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,0);
      convertStringValueByBoostInfo(pCVar3);
      FUN_054766c8(this + 0x168,auStack_40);
      FUN_05476c50(auStack_40);
      uVar4 = FUN_037ac5f0(local_20,local_18);
      if (uVar4 < 2) {
        TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      }
      else {
        pCVar3 = (CurrentArtifactBoostInfo *)FUN_037ac5fc(local_20,1);
        convertStringValueByBoostInfo(pCVar3);
      }
      FUN_054766c8(this + 0x170,auStack_40);
      FUN_05476c50(auStack_40);
    }
    else {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
      (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),1);
      (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
      TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      FUN_054766c8(this + 0x158,auStack_40);
      FUN_05476c50(auStack_40);
      TodStringTranslate(L"[PLANT_FAMILY_NONE_PROPERTY]");
      FUN_054766c8(this + 0x160,auStack_40);
      FUN_05476c50(auStack_40);
      TodStringTranslate(L"[PLANT_FAMILY_UNLOCK_DESC]");
      FUN_054766c8(this + 0x168,auStack_40);
      FUN_05476c50(auStack_40);
      TodStringTranslate(L"[PLANT_FAMILY_UNLOCK_DESC]");
      FUN_054766c8(this + 0x170,auStack_40);
      FUN_05476c50(auStack_40);
    }
  }
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_20)
  ;
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)&local_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::InitView(int) */

void __thiscall ArtifactBlessWidget::InitView(ArtifactBlessWidget *this,int param_1)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UIWidgetAnim *this_00;
  ResourceInfo *pRVar13;
  RtClass *pRVar14;
  PopAnimRig *pPVar15;
  PVZ2UIButton *pPVar16;
  UIWidgetImage *pUVar17;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ulong uVar18;
  UIWidgetText *pUVar19;
  string *extraout_x1;
  long lVar20;
  code *pcVar21;
  long lVar22;
  string *psVar23;
  long *plVar24;
  RtWeakPtr aRStack_88 [8];
  Sexy aSStack_80 [8];
  string asStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  this[0x59] = (ArtifactBlessWidget)0x0;
  iVar2 = FUN_037ad3c8(0x2d0);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar3 = FUN_037ad3c8(0x1a4);
  lVar20 = gLawnApp;
  iVar4 = FUN_037ad3c8(10);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar20 + 0xd4) - iVar2) / 2,
             (*(int *)(lVar20 + 0xd8) - iVar3) / 2 - iVar4,iVar2,iVar3);
  this_00 = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this_00);
  *(UIWidgetAnim **)(this + 0xe8) = this_00;
  iVar2 = FUN_037ad3c8(0x50);
  uVar5 = FUN_037ad3c8(0x32);
  uVar6 = FUN_037ad3c8(0x15e);
  uVar7 = FUN_037ad3c8(300);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,-iVar2,uVar5,uVar6,uVar7);
  *(undefined1 *)(*(long *)(this + 0xe8) + 0x59) = 0;
  iVar2 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  Sexy::StringToUpper(aSStack_80,extraout_x1);
  std::operator+("POPANIM_EFFECTS_ARTIFACTCULT_",asStack_78);
  GetPAMByName((string *)local_40);
  std::string::~string((string *)local_40);
  std::string::~string(asStack_78);
  std::string::~string((string *)aSStack_80);
  pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_88);
  pRVar14 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar15 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar13,pRVar14);
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0xe8),pPVar15);
  psVar23 = *(string **)(this + 0xe8);
  std::string::string((string *)local_40,"idle");
  UIWidgetAnim::SetLabel(psVar23);
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x6d,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0448,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0448,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  uVar5 = FUN_037ad3c8(0x1ae);
  uVar6 = FUN_037ad3c8(0x14);
  uVar7 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)pPVar16 + 0x198))(pPVar16,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,pPVar16);
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x6a,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar16;
  FUN_05476c50(asStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab04f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab08b0,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0xf0);
  uVar5 = FUN_037ad3c8(0x2a6);
  uVar6 = FUN_037ad3c8(0xffffffec);
  uVar7 = FUN_037ad3c8(0x42);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  TodStringTranslate(L"[ARTIFACT_BLESS_SAVE_LEFT]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x71,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar16;
  FUN_05476c50(asStack_78);
  pPVar16 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab05c8,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab05a0,5);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0xf8);
  uVar5 = FUN_037ad3c8(300);
  uVar6 = FUN_037ad3c8(0xf3);
  uVar7 = FUN_037ad3c8(0x78);
  uVar8 = FUN_037ad3c8(0x37);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  TodStringTranslate(L"[ARTIFACT_BLESS_SAVE_RIGHT]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x72,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar16;
  FUN_05476c50(asStack_78);
  pPVar16 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab05c8,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab05a0,5);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0x100);
  uVar5 = FUN_037ad3c8(0x21c);
  uVar6 = FUN_037ad3c8(0xf3);
  uVar7 = FUN_037ad3c8(0x78);
  uVar8 = FUN_037ad3c8(0x37);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x6f,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar16;
  FUN_05476c50(asStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0670,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0670,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0x118);
  uVar5 = FUN_037ad3c8(0xff);
  uVar6 = FUN_037ad3c8(0x80);
  uVar7 = FUN_037ad3c8(0x2d);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x70,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar16;
  FUN_05476c50(asStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0670,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0670,2);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0x120);
  uVar5 = FUN_037ad3c8(0xff);
  uVar6 = FUN_037ad3c8(0xbc);
  uVar7 = FUN_037ad3c8(0x2d);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x73,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar16;
  FUN_05476c50(asStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab0548,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab0838,5);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0x108);
  uVar5 = FUN_037ad3c8(400);
  uVar6 = FUN_037ad3c8(0x142);
  uVar7 = FUN_037ad3c8(0xb4);
  uVar8 = FUN_037ad3c8(0x50);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_ARTIFACT_BLESS_NORMAL");
  pUVar17 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar17,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar5 = FUN_037ad3c8(0x26);
  uVar6 = FUN_037ad3c8(8);
  uVar7 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)pUVar17 + 0x198))(pUVar17,uVar5,uVar6,uVar7,uVar7);
  local_40[0] = 9;
  UIWidgetImage::SetImageType(pUVar17,(string *)local_40,0.0);
  plVar24 = *(long **)(this + 0x108);
  pUVar17[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar24 + 0x60))(plVar24,pUVar17);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_78,"mat_artifact_bless_normal");
  uVar18 = PlayerInfo::GetMaterialNum(this_02,asStack_78);
  Sexy::StrFormat(L"%d/%d",(string *)local_40,1,uVar18 & 0xffffffff);
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x138) = pUVar19;
  FUN_05476c50((string *)local_40);
  std::string::~string(asStack_78);
  nop();
  plVar24 = *(long **)(this + 0x138);
  uVar5 = FUN_037ad3c8(0x4d);
  uVar6 = FUN_037ad3c8(9);
  uVar7 = FUN_037ad3c8(0x44);
  uVar8 = FUN_037ad3c8(0x21);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x138),7);
  FUN_037ac564(*(long *)(this + 0x138) + 0xe0,0);
  plVar24 = *(long **)(this + 0x138);
  pcVar21 = *(code **)(*plVar24 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar21)(plVar24,0,(string *)local_40);
  plVar24 = *(long **)(this + 0x108);
  lVar20 = *(long *)(this + 0x138);
  lVar22 = *plVar24;
  *(undefined1 *)(lVar20 + 0x6d) = 0;
  (**(code **)(lVar22 + 0x60))(plVar24,lVar20);
  TodStringTranslate(L"[ARTIFACT_BLESS_NORMAL]");
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,(wstring *)local_40);
  FUN_05476c50((string *)local_40);
  uVar5 = FUN_037ad3c8(0);
  uVar6 = FUN_037ad3c8(0x2a);
  uVar7 = FUN_037ad3c8(0xaf);
  uVar8 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)pUVar19 + 0x198))(pUVar19,uVar5,uVar6,uVar7,uVar8);
  UIWidgetText::SetFontIndex(pUVar19,0x7c);
  FUN_037ac564(pUVar19 + 0xe0,2);
  pUVar19[0x6d] = (UIWidgetText)0x0;
  pcVar21 = *(code **)(*(long *)pUVar19 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar21)(pUVar19,0,(string *)local_40);
  (**(code **)(**(long **)(this + 0x108) + 0x60))(*(long **)(this + 0x108),pUVar19);
  FUN_05478178(asStack_78,&DAT_056f11a8,aSStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar16,0x74,pBVar1,(wstring *)asStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar16;
  FUN_05476c50(asStack_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ab05c8,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab05a0,5);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  plVar24 = *(long **)(this + 0x110);
  uVar5 = FUN_037ad3c8(0x9d);
  uVar6 = FUN_037ad3c8(0x142);
  uVar7 = FUN_037ad3c8(0xb4);
  uVar8 = FUN_037ad3c8(0x50);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_ARTIFACT_BLESS_ADVANCE");
  pUVar17 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar17,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  uVar5 = FUN_037ad3c8(0x26);
  uVar6 = FUN_037ad3c8(8);
  uVar7 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)pUVar17 + 0x198))(pUVar17,uVar5,uVar6,uVar7,uVar7);
  local_40[0] = 9;
  UIWidgetImage::SetImageType(pUVar17,(string *)local_40,0.0);
  plVar24 = *(long **)(this + 0x110);
  pUVar17[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar24 + 0x60))(plVar24,pUVar17);
  std::string::string(asStack_78,"mat_artifact_bless_advance");
  uVar18 = PlayerInfo::GetMaterialNum(this_02,asStack_78);
  Sexy::StrFormat(L"%d/%d",(string *)local_40,1,uVar18 & 0xffffffff);
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x140) = pUVar19;
  FUN_05476c50((string *)local_40);
  std::string::~string(asStack_78);
  nop();
  plVar24 = *(long **)(this + 0x140);
  uVar5 = FUN_037ad3c8(0x4d);
  uVar6 = FUN_037ad3c8(9);
  uVar7 = FUN_037ad3c8(0x44);
  uVar8 = FUN_037ad3c8(0x21);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar5,uVar6,uVar7,uVar8);
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x140),7);
  FUN_037ac564(*(long *)(this + 0x140) + 0xe0,0);
  plVar24 = *(long **)(this + 0x140);
  pcVar21 = *(code **)(*plVar24 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar21)(plVar24,0,(string *)local_40);
  plVar24 = *(long **)(this + 0x110);
  lVar20 = *(long *)(this + 0x140);
  lVar22 = *plVar24;
  *(undefined1 *)(lVar20 + 0x6d) = 0;
  (**(code **)(lVar22 + 0x60))(plVar24,lVar20);
  TodStringTranslate(L"[ARTIFACT_BLESS_ADVANCED]");
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,(wstring *)local_40);
  FUN_05476c50((string *)local_40);
  uVar5 = FUN_037ad3c8(0);
  uVar6 = FUN_037ad3c8(0x2a);
  uVar7 = FUN_037ad3c8(0xaf);
  uVar8 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)pUVar19 + 0x198))(pUVar19,uVar5,uVar6,uVar7,uVar8);
  UIWidgetText::SetFontIndex(pUVar19,0x7c);
  FUN_037ac564(pUVar19 + 0xe0,2);
  pUVar19[0x6d] = (UIWidgetText)0x0;
  pcVar21 = *(code **)(*(long *)pUVar19 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar21)(pUVar19,0,(string *)local_40);
  (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110),pUVar19);
  lVar20 = *(long *)(this + 0x110);
  iVar9 = FUN_037ad3c8(0x1e);
  iVar2 = *(int *)(lVar20 + 0x50);
  iVar10 = FUN_037ad3c8(8);
  iVar3 = *(int *)(lVar20 + 0x48);
  iVar10 = *(int *)(lVar20 + 0x54) - iVar10;
  iVar11 = FUN_037ad3c8(0x19);
  iVar4 = *(int *)(lVar20 + 0x4c);
  iVar12 = FUN_037ad3c8(0xf);
  std::string::string((string *)local_40,"IMAGE_UI_ARTIFACT_BLESS_TIPS");
  pUVar17 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar17,(string *)local_40);
  *(UIWidgetImage **)(this + 0x128) = pUVar17;
  std::string::~string((string *)local_40);
  nop();
  (**(code **)(**(long **)(this + 0x128) + 0x198))
            (*(long **)(this + 0x128),(iVar3 + -iVar9 / 2) - iVar11,(iVar4 - iVar10) + iVar12,
             iVar9 + iVar2,iVar10);
  local_40[0] = 9;
  UIWidgetImage::SetImageType(*(UIWidgetImage **)(this + 0x128),(string *)local_40,0.0);
  lVar20 = *(long *)(this + 0x128);
  pcVar21 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar20 + 0x6d) = 0;
  (*pcVar21)(this,lVar20);
  TodStringTranslate(L"[ARTIFACT_BLESS_LEGEND_TIPS]");
  pUVar19 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar19,(wstring *)local_40);
  *(UIWidgetText **)(this + 0x130) = pUVar19;
  FUN_05476c50((string *)local_40);
  plVar24 = *(long **)(this + 0x130);
  uVar5 = FUN_037ad3c8(0);
  (**(code **)(*plVar24 + 0x198))
            (plVar24,uVar5,uVar5,*(undefined4 *)(*(long *)(this + 0x128) + 0x50),
             *(undefined4 *)(*(long *)(this + 0x128) + 0x54));
  UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x130),0xa7);
  FUN_037ac564(*(long *)(this + 0x130) + 0xe0,5);
  plVar24 = *(long **)(this + 0x130);
  *(undefined1 *)((long)plVar24 + 0x6d) = 0;
  pcVar21 = *(code **)(*plVar24 + 0x170);
  Sexy::Insets::Insets((Insets *)local_40,0x66,0x37,0,0xff);
  (*pcVar21)(plVar24,0,(string *)local_40);
  (**(code **)(**(long **)(this + 0x128) + 0x60))
            (*(long **)(this + 0x128),*(undefined8 *)(this + 0x130));
  Refresh(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlessWidget::Draw(Sexy::Graphics*) */

void __thiscall ArtifactBlessWidget::Draw(ArtifactBlessWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab05f8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[ARTIFACT_BLESS]");
  iVar1 = FUN_037ad3c8(10);
  iVar2 = FUN_037ad3c8(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab06a0);
  iVar1 = FUN_037ad3c8(0x19);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(200);
  iVar4 = FUN_037ad3c8(0xf0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  std::string::string(asStack_38,"30");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_037ad3c8(0xaa);
  iVar2 = FUN_037ad3c8(0x109);
  iVar3 = FUN_037ad3c8(0x32);
  iVar4 = FUN_037ad3c8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0888);
  iVar1 = FUN_037ad3c8(0xaf);
  iVar2 = FUN_037ad3c8(0x50);
  iVar3 = FUN_037ad3c8(0x28);
  iVar4 = FUN_037ad3c8(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  iVar1 = FUN_037ad3c8(0xf0);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(0x1cc);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar1);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[PLANT_FAMILY_CUR_PROPERTY]");
  iVar1 = FUN_037ad3c8(0x10e);
  iVar2 = FUN_037ad3c8(0x52);
  iVar3 = FUN_037ad3c8(200);
  iVar4 = FUN_037ad3c8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,2,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[PLANT_FAMILY_REFRESH_PROPERTY]");
  iVar1 = FUN_037ad3c8(0x1d6);
  iVar2 = FUN_037ad3c8(0x52);
  iVar3 = FUN_037ad3c8(0xe6);
  iVar4 = FUN_037ad3c8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,2,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_037ad3c8(0x118);
  iVar2 = FUN_037ad3c8(0x82);
  iVar3 = FUN_037ad3c8(0xb4);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_037ad3c8(0x1fe);
  iVar2 = FUN_037ad3c8(0x82);
  iVar3 = FUN_037ad3c8(0xaf);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ab0);
  iVar1 = FUN_037ad3c8(0x1d6);
  iVar2 = FUN_037ad3c8(0x88);
  iVar3 = FUN_037ad3c8(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0ab0);
  iVar1 = FUN_037ad3c8(0x1d6);
  iVar2 = FUN_037ad3c8(0xc4);
  iVar3 = FUN_037ad3c8(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_037ad3c8(0x118);
  iVar2 = FUN_037ad3c8(0xbe);
  iVar3 = FUN_037ad3c8(0xb4);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_037ad3c8(0x1fe);
  iVar2 = FUN_037ad3c8(0xbe);
  iVar3 = FUN_037ad3c8(0xaf);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  if (this[0x150] != (ArtifactBlessWidget)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0b58);
    iVar1 = FUN_037ad3c8(0x118);
    iVar2 = FUN_037ad3c8(0x82);
    iVar3 = FUN_037ad3c8(0xb4);
    iVar4 = FUN_037ad3c8(0x2a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  }
  if (this[0x151] != (ArtifactBlessWidget)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0b58);
    iVar1 = FUN_037ad3c8(0x118);
    iVar2 = FUN_037ad3c8(0xbe);
    iVar3 = FUN_037ad3c8(0xb4);
    iVar4 = FUN_037ad3c8(0x2a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  }
  iVar1 = FUN_037ad3c8(300);
  iVar2 = FUN_037ad3c8(0x82);
  iVar3 = FUN_037ad3c8(0xa0);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x158,aIStack_28,uVar5,aIStack_18,5,1);
  iVar1 = FUN_037ad3c8(0x1fe);
  iVar2 = FUN_037ad3c8(0x82);
  iVar3 = FUN_037ad3c8(0xaf);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x168,aIStack_28,uVar5,aIStack_18,5,1);
  iVar1 = FUN_037ad3c8(300);
  iVar2 = FUN_037ad3c8(0xbe);
  iVar3 = FUN_037ad3c8(0xa0);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x160,aIStack_28,uVar5,aIStack_18,5,1);
  iVar1 = FUN_037ad3c8(0x1fe);
  iVar2 = FUN_037ad3c8(0xbe);
  iVar3 = FUN_037ad3c8(0xb4);
  iVar4 = FUN_037ad3c8(0x2a);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x170,aIStack_28,uVar5,aIStack_18,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

