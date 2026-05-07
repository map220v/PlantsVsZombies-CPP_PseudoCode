// Class: AdaptorJoustResultsScreen


/* AdaptorJoustResultsScreen::onContinueClick() */

void __thiscall AdaptorJoustResultsScreen::onContinueClick(AdaptorJoustResultsScreen *this)

{
  RtInvokeVariant *pRVar1;
  
  pRVar1 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x128));
  if (pRVar1 != (RtInvokeVariant *)0x0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* AdaptorJoustResultsScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorJoustResultsScreen::OnBackButtonPressed(AdaptorJoustResultsScreen *this)

{
  onContinueClick(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::StaticClassInit() */

void AdaptorJoustResultsScreen::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AdaptorJoustResultsScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_038698e8,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustResultsScreen::StaticGetClass() */

long * AdaptorJoustResultsScreen::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustResultsScreen::GetClass() const */

long * AdaptorJoustResultsScreen::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::EnableFullScreenDismiss(bool) */

void __thiscall
AdaptorJoustResultsScreen::EnableFullScreenDismiss(AdaptorJoustResultsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"DialogDismiss");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::setup() */

void __thiscall AdaptorJoustResultsScreen::setup(AdaptorJoustResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorJoustResultsScreen::onLinkToUIViewCreated(AdaptorJoustResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::onLoadUIView() */

void __thiscall AdaptorJoustResultsScreen::onLoadUIView(AdaptorJoustResultsScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustResultsScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::startShieldBreak(float) */

void AdaptorJoustResultsScreen::startShieldBreak(float param_1)

{
  long in_x0;
  HotUIFile *this;
  HotUISeedPacketList *pHVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_03868f48(*(undefined8 *)(in_x0 + 0xf8));
  std::string::string(asStack_40,"ShieldAnim");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"break");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  HotUIAnim::PlayAndStop((HotUIAnim *)pHVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::startCrownFill(float) */

void __thiscall
AdaptorJoustResultsScreen::startCrownFill(AdaptorJoustResultsScreen *this,float param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  PopAnimRig *pPVar2;
  RtClass *pRVar3;
  long lVar4;
  long extraout_x0;
  HotUIJoustCrownCollectionEffect *this_01;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_50,"CrownIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pPVar2 = (PopAnimRig *)FUN_03868f88(*(undefined8 *)(pHVar1 + 0x238));
  std::string::string(asStack_58,"intro");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCrownIntroAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(this + 0x230) = *(undefined4 *)(this + 0x124);
  pRVar3 = (RtClass *)HotUIJoustCrownCollectionEffect::StaticGetClass();
  lVar4 = HotUIFile::GetWidgetByType(this_00,pRVar3);
  if (lVar4 != 0) {
    HotUIFile::GetEntryPointWidget(this_00);
    HotUIWidget::GetProps();
    nop();
    nop();
    HotUIJoustCrownCollectionEffect::StartEffects
              (this_01,*(int *)(this + 0x124),*(float *)(extraout_x0 + 0x13c));
  }
  *(float *)(this + 0x22c) = param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::onCrownIntroAnimStopped(std::string const&) */

void AdaptorJoustResultsScreen::onCrownIntroAnimStopped(string *param_1)

{
  HotUIFile *this;
  HotUISeedPacketList *pHVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_03868f48(*(undefined8 *)(param_1 + 0xf8));
  std::string::string(asStack_50,"CrownIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pPVar2 = (PopAnimRig *)FUN_03868f88(*(undefined8 *)(pHVar1 + 0x238));
  std::string::string(asStack_58,"bump");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onCrownBumpAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::onCrownBumpAnimStopped(std::string const&) */

void AdaptorJoustResultsScreen::onCrownBumpAnimStopped(string *param_1)

{
  int iVar1;
  HotUIFile *this;
  HotUISeedPacketList *pHVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_03868f48(*(undefined8 *)(param_1 + 0xf8));
  std::string::string(asStack_50,"CrownIcon");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pPVar3 = (PopAnimRig *)FUN_03868f88(*(undefined8 *)(pHVar2 + 0x238));
  iVar1 = *(int *)(param_1 + 0x230);
  *(int *)(param_1 + 0x230) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    std::string::string(asStack_50,"idle");
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndStop(pPVar3,asStack_50,0,(DummyInit *)aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  else {
    std::string::string(asStack_58,"bump");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onCrownBumpAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::getJoustMeterAdaptor() const */

void __thiscall AdaptorJoustResultsScreen::getJoustMeterAdaptor(AdaptorJoustResultsScreen *this)

{
  HotUIFile *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"JoustMeter");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    nop();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustResultsScreen::startWinScoreFillFirstHalf(float) */

void __thiscall
AdaptorJoustResultsScreen::startWinScoreFillFirstHalf(AdaptorJoustResultsScreen *this,float param_1)

{
  AdaptorJoustPlayMeterHUD *this_00;
  
  this_00 = (AdaptorJoustPlayMeterHUD *)getJoustMeterAdaptor(this);
  AdaptorJoustPlayMeterHUD::SetLeftScoreTarget(this_00,*(int *)(this + 0x1a0));
  AdaptorJoustPlayMeterHUD::SetLerpCurveType(this_00,2);
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(this + 0x1a0);
  *(float *)(this + 0x220) = param_1;
  return;
}


/* AdaptorJoustResultsScreen::startWinScoreFillSecondHalf(float) */

void __thiscall
AdaptorJoustResultsScreen::startWinScoreFillSecondHalf
          (AdaptorJoustResultsScreen *this,float param_1)

{
  AdaptorJoustPlayMeterHUD *this_00;
  
  this_00 = (AdaptorJoustPlayMeterHUD *)getJoustMeterAdaptor(this);
  AdaptorJoustPlayMeterHUD::SetLeftScoreTarget(this_00,*(int *)(this + 0x178));
  AdaptorJoustPlayMeterHUD::SetLerpCurveType(this_00,3);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(this + 0x1a0);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(this + 0x178);
  *(float *)(this + 0x220) = param_1;
  return;
}


/* AdaptorJoustResultsScreen::startLossScoreFill(float) */

void __thiscall
AdaptorJoustResultsScreen::startLossScoreFill(AdaptorJoustResultsScreen *this,float param_1)

{
  AdaptorJoustPlayMeterHUD *this_00;
  
  this_00 = (AdaptorJoustPlayMeterHUD *)getJoustMeterAdaptor(this);
  AdaptorJoustPlayMeterHUD::SetLeftScoreTarget(this_00,*(int *)(this + 0x178));
  AdaptorJoustPlayMeterHUD::SetLerpCurveType(this_00,4);
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(this + 0x178);
  *(float *)(this + 0x220) = param_1;
  return;
}


/* AdaptorJoustResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustResultsScreen::ButtonDepress(AdaptorJoustResultsScreen *this,int param_1)

{
  if (param_1 == 0) {
    AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
    return;
  }
  if (param_1 == 1) {
    onContinueClick(this);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorJoustResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustResultsScreen::ButtonDepress(AdaptorJoustResultsScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorJoustResultsScreen::AdaptorJoustResultsScreen() */

void __thiscall
AdaptorJoustResultsScreen::AdaptorJoustResultsScreen(AdaptorJoustResultsScreen *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066ac460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ac7c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ac808;
  AdaptorJoustResultsScreenParams::AdaptorJoustResultsScreenParams
            ((AdaptorJoustResultsScreenParams *)(this + 0x120));
  TimeLine::TimeLine((TimeLine *)(this + 0x1c0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x220) = uVar1;
  *(undefined4 *)(this + 0x22c) = uVar1;
  return;
}


/* AdaptorJoustResultsScreen::StaticNew() */

AdaptorJoustResultsScreen * AdaptorJoustResultsScreen::StaticNew(void)

{
  AdaptorJoustResultsScreen *this;
  
  this = ::operator_new(0x238);
  AdaptorJoustResultsScreen(this);
  return this;
}


/* AdaptorJoustResultsScreen::sendBarFillStartAudio(float) */

void AdaptorJoustResultsScreen::sendBarFillStartAudio(float param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Joust_Results_meter");
  return;
}


/* AdaptorJoustResultsScreen::sendBarFillStopAudio(float) */

void AdaptorJoustResultsScreen::sendBarFillStopAudio(float param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Joust_Results_meter");
  return;
}


/* AdaptorJoustResultsScreen::sendCrownFillOnWinAudio(float) */

void AdaptorJoustResultsScreen::sendCrownFillOnWinAudio(float param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Joust_Crowncollect_win");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::getWinLossAnimLabelSuffix() const */

void __thiscall
AdaptorJoustResultsScreen::getWinLossAnimLabelSuffix(AdaptorJoustResultsScreen *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"");
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)&DAT_06ab5168,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  Set8BytesTo0();
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)&DAT_06ab5168);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    thunk_FUN_05475e00();
  }
  else {
    local_10 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)&DAT_06ab5168,(string *)&DAT_06ab5118);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_10);
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustResultsScreen::~AdaptorJoustResultsScreen() */

void __thiscall
AdaptorJoustResultsScreen::~AdaptorJoustResultsScreen(AdaptorJoustResultsScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_066ac460;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ac7c0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ac808;
  sendBarFillStopAudio(0.0);
  TimeLine::~TimeLine((TimeLine *)(this + 0x1c0));
  AdaptorJoustResultsScreenParams::~AdaptorJoustResultsScreenParams
            ((AdaptorJoustResultsScreenParams *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustResultsScreen::~AdaptorJoustResultsScreen() */

void __thiscall
AdaptorJoustResultsScreen::~AdaptorJoustResultsScreen(AdaptorJoustResultsScreen *this)

{
  ~AdaptorJoustResultsScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustResultsScreen::refresh() */

void __thiscall AdaptorJoustResultsScreen::refresh(AdaptorJoustResultsScreen *this)

{
  TimeLine *this_00;
  TimeLine *pTVar9;
  bool bVar1;
  HotUIFile *this_01;
  long extraout_x0;
  AdaptorJoustPlayMeterHUD *this_02;
  HotUISeedPacketList *pHVar2;
  PopAnimRig *this_03;
  long lVar3;
  int extraout_w1;
  int extraout_w1_00;
  undefined *puVar4;
  string *psVar5;
  string *psVar6;
  float fVar7;
  float fVar8;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  if (this_01 != (HotUIFile *)0x0) {
    HotUIFile::GetEntryPointWidget(this_01);
    HotUIWidget::GetProps();
    nop();
    std::string::string(asStack_50,"PlayerScore");
    Sexy::CommaSeparate(*(int *)(this + 0x178));
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)&local_58);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"OpponentScore");
    Sexy::CommaSeparate(*(int *)(this + 0x1a0));
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)&local_58);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"PlayerName");
    TodStringTranslate((wstring *)(this + 0x170));
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)&local_58);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"OpponentName");
    TodStringTranslate((wstring *)(this + 0x198));
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)&local_58);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"EarnedCrowns");
    FUN_05476574((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_50,(wstring *)&local_58);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"PlayerAvatar");
    JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x17c),extraout_w1);
    HotUIAdaptor::setImageWidgetImage
              ((HotUIAdaptor *)this,asStack_50,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_50,"OpponentAvatar");
    JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x1a4),extraout_w1_00);
    HotUIAdaptor::setImageWidgetImage
              ((HotUIAdaptor *)this,asStack_50,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    std::string::~string(asStack_50);
    nop();
    this_02 = (AdaptorJoustPlayMeterHUD *)getJoustMeterAdaptor(this);
    AdaptorJoustPlayMeterHUD::SetTimerVisible(this_02,false);
    AdaptorJoustPlayMeterHUD::SetAvatarsVisible(this_02,false);
    AdaptorJoustPlayMeterHUD::SetLeftScore(this_02,0);
    AdaptorJoustPlayMeterHUD::SetRightScore(this_02,*(int *)(this + 0x1a0));
    AdaptorJoustPlayMeterHUD::SnapScoresToCurrentValues(this_02);
    AdaptorJoustPlayMeterHUD::SetScoreLerpDelay(this_02,*(float *)(extraout_x0 + 300));
    std::string::string(asStack_50,"PlayerPlantSelection");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    HotUISeedPacketList::SetSeedTypes(pHVar2,(vector *)(this + 0x180),0);
    std::string::string(asStack_50,"OpponentPlantSelection");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_50);
    std::string::~string(asStack_50);
    nop();
    HotUISeedPacketList::SetSeedTypes(pHVar2,(vector *)(this + 0x1a8),0);
    if (this[0x120] == (AdaptorJoustResultsScreen)0x0) {
      psVar5 = (string *)&DAT_06ab5100;
      psVar6 = (string *)&DAT_06ab5108;
    }
    else {
      psVar5 = (string *)&DAT_06ab5108;
      psVar6 = (string *)&DAT_06ab5100;
    }
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar5,true);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar6,false);
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,psVar5);
    this_03 = (PopAnimRig *)FUN_03868f88(*(undefined8 *)(pHVar2 + 0x238));
    if (this[0x120] == (AdaptorJoustResultsScreen)0x0) {
      puVar4 = &DAT_06ab51c0;
    }
    else {
      puVar4 = &DAT_06ab5128;
    }
    FUN_05475d88(asStack_78,puVar4);
    getWinLossAnimLabelSuffix(this);
    FUN_031dcc6c(asStack_68,asStack_78,asStack_70);
    local_60 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)&DAT_06ab5168);
    local_58 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&DAT_06ab5168);
    while( true ) {
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58);
      if (!bVar1) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60);
      FUN_031dcc6c(asStack_50,asStack_78,lVar3 + 8);
      PopAnimRig::SetLayerVisibility(this_03,asStack_50,false);
      std::string::~string(asStack_50);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_60);
    }
    this_00 = (TimeLine *)(this + 0x1c0);
    PopAnimRig::SetLayerVisibility(this_03,asStack_68,true);
    HotUIAnim::GetDefaultAnimation();
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    HotUIAnim::PlayAndStop((HotUIAnim *)pHVar2,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    fVar7 = (float)PVZ_RealT();
    TimeLine::Initialize(this_00,fVar7);
    if (this[0x120] == (AdaptorJoustResultsScreen)0x0) {
      PVZ_RealT();
      fVar7 = (float)PVZ_RealT();
      pTVar9._0_4_ = (TimeLine *)(fVar7 + *(float *)(extraout_x0 + 0x128));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startLossScoreFill);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,sendBarFillStartAudio);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      fVar7 = *(float *)(extraout_x0 + 300);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,sendBarFillStopAudio);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent((TimeLine *)((float)pTVar9._0_4_ + fVar7),this_00,aDStack_38);
      fVar8 = *(float *)(extraout_x0 + 300);
      fVar7 = *(float *)(extraout_x0 + 0x134);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startCrownFill);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent((TimeLine *)((float)pTVar9._0_4_ + fVar7 + fVar8),this_00,aDStack_38);
    }
    else {
      PVZ_RealT();
      fVar7 = (float)PVZ_RealT();
      pTVar9._0_4_ = (TimeLine *)(fVar7 + *(float *)(extraout_x0 + 0x128));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startWinScoreFillFirstHalf);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,sendBarFillStartAudio);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      pTVar9._0_4_ = (TimeLine *)((float)pTVar9._0_4_ + *(float *)(extraout_x0 + 300));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startShieldBreak);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,sendCrownFillOnWinAudio);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      pTVar9._0_4_ = (TimeLine *)((float)pTVar9._0_4_ + *(float *)(extraout_x0 + 0x130));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startWinScoreFillSecondHalf);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent(pTVar9._0_4_,this_00,aDStack_38);
      fVar7 = *(float *)(extraout_x0 + 300);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,sendBarFillStopAudio);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent((TimeLine *)((float)pTVar9._0_4_ + fVar7),this_00,aDStack_38);
      fVar8 = *(float *)(extraout_x0 + 300);
      fVar7 = *(float *)(extraout_x0 + 0x134);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startCrownFill);
      Sexy::Delegate1<float>::
      Delegate1<AdaptorJoustResultsScreen,void(AdaptorJoustResultsScreen::*)(float)>
                ((Delegate1<float> *)aDStack_38,asStack_50);
      TimeLine::AddEvent((TimeLine *)((float)pTVar9._0_4_ + fVar7 + fVar8),this_00,aDStack_38);
    }
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustResultsScreen::SetParams(AdaptorJoustResultsScreenParams const&) */

void __thiscall
AdaptorJoustResultsScreen::SetParams
          (AdaptorJoustResultsScreen *this,AdaptorJoustResultsScreenParams *param_1)

{
  AdaptorJoustResultsScreenParams::operator=
            ((AdaptorJoustResultsScreenParams *)(this + 0x120),param_1);
  refresh(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0386e0a4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* AdaptorJoustResultsScreen::Update() */

void __thiscall AdaptorJoustResultsScreen::Update(AdaptorJoustResultsScreen *this)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  HotUIFile *this_00;
  long extraout_x0;
  AdaptorJoustPlayMeterHUD *this_01;
  string *extraout_x1;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 extraout_var [12];
  Sexy aSStack_20 [8];
  undefined4 local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  fVar5 = (float)PVZ_RealDt();
  TimeLine::Update((TimeLine *)(this + 0x1c0),fVar5);
  this_00 = (HotUIFile *)FUN_03868f48(*(undefined8 *)(this + 0xf8));
  HotUIFile::GetEntryPointWidget(this_00);
  HotUIWidget::GetProps();
  nop();
  fVar5 = (float)PVZ_RealT();
  if (*(float *)(this + 0x220) < fVar5) {
    this_01 = (AdaptorJoustPlayMeterHUD *)getJoustMeterAdaptor(this);
    fVar5 = (float)PVZ_RealT();
    fVar5 = (fVar5 - *(float *)(this + 0x220)) / *(float *)(extraout_x0 + 300);
    iVar3 = CurveEvaluateClamped<int>(fVar5,this + 0x224,this + 0x228,2);
    AdaptorJoustPlayMeterHUD::SetLeftScoreText(this_01,iVar3);
    if (1.0 <= fVar5) {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x220) = uVar6;
    }
  }
  fVar5 = (float)PVZ_RealT();
  if (*(float *)(this + 0x22c) < fVar5) {
    PVZ_RealT();
    local_10[0] = (float)*(int *)(this + 0x124);
    local_18[0] = 0;
    auVar2._4_12_ = extraout_var;
    auVar2._0_4_ = fVar5;
    fVar5 = CurveEvaluateClamped<float>
                      (auVar2,0,*(undefined4 *)(extraout_x0 + 0x138),(wstring *)local_18,
                       (string *)local_10,2);
    uVar4 = (uint)fVar5;
    std::string::string((string *)local_10,"EarnedCrowns");
    if ((int)uVar4 < 0) {
      puVar1 = &DAT_055cff18;
    }
    else {
      puVar1 = &DAT_055b29c0;
    }
    Sexy::StrFormat("%s%d",aSStack_20,puVar1,(ulong)uVar4);
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)local_10,(wstring *)local_18);
    FUN_05476c50((wstring *)local_18);
    std::string::~string((string *)aSStack_20);
    std::string::~string((string *)local_10);
    nop();
    if (*(int *)(this + 0x124) <= (int)uVar4) {
      *(undefined4 *)(this + 0x230) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

