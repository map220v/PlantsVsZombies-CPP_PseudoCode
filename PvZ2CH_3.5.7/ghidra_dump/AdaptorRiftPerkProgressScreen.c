// Class: AdaptorRiftPerkProgressScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::StaticClassInit() */

void AdaptorRiftPerkProgressScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftPerkProgressScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_0366d294,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressScreen::StaticGetClass() */

long * AdaptorRiftPerkProgressScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftPerkProgressScreen::GetClass() const */

long * AdaptorRiftPerkProgressScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftPerkProgressScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::~AdaptorRiftPerkProgressScreen() */

void __thiscall
AdaptorRiftPerkProgressScreen::~AdaptorRiftPerkProgressScreen(AdaptorRiftPerkProgressScreen *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066775e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677940;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677988;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Perks");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Perk_Progression");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::_Destroy<RtReflectionDelegate<Sexy::Delegate1<bool>>>((RtReflectionDelegate *)(this + 0x120))
  ;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressScreen::~AdaptorRiftPerkProgressScreen() */

void __thiscall
AdaptorRiftPerkProgressScreen::~AdaptorRiftPerkProgressScreen(AdaptorRiftPerkProgressScreen *this)

{
  ~AdaptorRiftPerkProgressScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorRiftPerkProgressScreen::SetParams(AdaptorRiftPerkProgressScreenParams const&) */

void __thiscall
AdaptorRiftPerkProgressScreen::SetParams
          (AdaptorRiftPerkProgressScreen *this,AdaptorRiftPerkProgressScreenParams *param_1)

{
  AdaptorRiftPerkProgressScreenParams::operator=
            ((AdaptorRiftPerkProgressScreenParams *)(this + 0x120),param_1);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::AdaptorRiftPerkProgressScreen() */

void __thiscall
AdaptorRiftPerkProgressScreen::AdaptorRiftPerkProgressScreen(AdaptorRiftPerkProgressScreen *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066775e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677940;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677988;
  AdaptorRiftPerkProgressScreenParams::AdaptorRiftPerkProgressScreenParams
            ((AdaptorRiftPerkProgressScreenParams *)(this + 0x120));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Perks");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Perk_Progression");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressScreen::StaticNew() */

AdaptorRiftPerkProgressScreen * AdaptorRiftPerkProgressScreen::StaticNew(void)

{
  AdaptorRiftPerkProgressScreen *this;
  
  this = ::operator_new(0x168);
  AdaptorRiftPerkProgressScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::onLoadUIView() */

void __thiscall AdaptorRiftPerkProgressScreen::onLoadUIView(AdaptorRiftPerkProgressScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"RiftPerkProgressScreen");
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
/* AdaptorRiftPerkProgressScreen::setup() */

void __thiscall AdaptorRiftPerkProgressScreen::setup(AdaptorRiftPerkProgressScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366cf40(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ContinueButton");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)this_01,0,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftPerkProgressScreen::onLinkToUIViewCreated(AdaptorRiftPerkProgressScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366cf40(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ContinueButton");
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)this_01,0,(ButtonListener *)(this + 0xd8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftPerkProgressScreen::AnimateProgressBar() */

void __thiscall
AdaptorRiftPerkProgressScreen::AnimateProgressBar(AdaptorRiftPerkProgressScreen *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PerkProgressContainer");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  AdaptorPerkProgressionWidget::ShowProgressAnimation();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftPerkProgressScreen::onContinueClick() */

void __thiscall AdaptorRiftPerkProgressScreen::onContinueClick(AdaptorRiftPerkProgressScreen *this)

{
  RtInvokeVariant *pRVar1;
  
  pRVar1 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x120));
  if (pRVar1 != (RtInvokeVariant *)0x0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* AdaptorRiftPerkProgressScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorRiftPerkProgressScreen::OnBackButtonPressed(AdaptorRiftPerkProgressScreen *this)

{
  onContinueClick(this);
  return 1;
}


/* AdaptorRiftPerkProgressScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftPerkProgressScreen::ButtonDepress(AdaptorRiftPerkProgressScreen *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  onContinueClick(this);
  return;
}


/* non-virtual thunk to AdaptorRiftPerkProgressScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftPerkProgressScreen::ButtonDepress(AdaptorRiftPerkProgressScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

