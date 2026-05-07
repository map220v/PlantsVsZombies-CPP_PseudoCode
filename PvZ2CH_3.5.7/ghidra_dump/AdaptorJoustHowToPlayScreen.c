// Class: AdaptorJoustHowToPlayScreen


/* AdaptorJoustHowToPlayScreen::AdaptorJoustHowToPlayScreen() */

void __thiscall
AdaptorJoustHowToPlayScreen::AdaptorJoustHowToPlayScreen(AdaptorJoustHowToPlayScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066a94d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9830;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9878;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  JoustHowToPlayScreenData::JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0x150));
  *(undefined4 *)(this + 0x180) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustHowToPlayScreen::onLoadUIView() */

void __thiscall AdaptorJoustHowToPlayScreen::onLoadUIView(AdaptorJoustHowToPlayScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustHowToPlayScreen");
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
/* AdaptorJoustHowToPlayScreen::StaticClassInit() */

void AdaptorJoustHowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustHowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_0385dcc0,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustHowToPlayScreen::StaticGetClass() */

long * AdaptorJoustHowToPlayScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustHowToPlayScreen::GetClass() const */

long * AdaptorJoustHowToPlayScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustHowToPlayScreen::ShowPage(int) */

void __thiscall AdaptorJoustHowToPlayScreen::ShowPage(AdaptorJoustHowToPlayScreen *this,int param_1)

{
  long lVar1;
  string *extraout_x1;
  HotUIImage *pHVar2;
  long *plVar3;
  undefined1 auStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0385d784(*(undefined8 *)(this + 0x160),(long)param_1);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pHVar2 = *(HotUIImage **)(this + 0x130);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_30);
  HotUIImage::SetImage(pHVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::UTF8StringToWString((Sexy *)(lVar1 + 8),extraout_x1);
  TodStringTranslate((wstring *)aRStack_10);
  FUN_05476c50(aRStack_10);
  (**(code **)(**(long **)(this + 0x138) + 0x360))(*(long **)(this + 0x138),auStack_28);
  FUN_05478178(aRStack_10,L"[STEP_NUMBER]",auStack_38);
  Sexy::StrFormat(L"%d",awStack_18,(ulong)(param_1 + 1));
  TodReplaceString((wstring *)aRStack_10,L"{NUMBER}",awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(aRStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x360))(*(long **)(this + 0x140),auStack_20);
  AdaptorCarouselDots::SetFilledDot((int)*(undefined8 *)(this + 0x148));
  (**(code **)(**(long **)(this + 0x120) + 0x158))(*(long **)(this + 0x120),param_1 != 0);
  plVar3 = *(long **)(this + 0x128);
  lVar1 = FUN_0385d75c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  (**(code **)(*plVar3 + 0x158))(plVar3,(long)param_1 != lVar1 + -1);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustHowToPlayScreen::ButtonDepress(AdaptorJoustHowToPlayScreen *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (0 < *(int *)(this + 0x180)) {
        iVar1 = *(int *)(this + 0x180) + -1;
        *(int *)(this + 0x180) = iVar1;
        ShowPage(this,iVar1);
        return;
      }
    }
    else if (param_1 == 3) goto LAB_0385e010;
    return;
  }
  iVar1 = *(int *)(this + 0x180);
  lVar2 = FUN_0385d75c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  if (lVar2 + -1 != (long)iVar1) {
    iVar1 = iVar1 + 1;
    *(int *)(this + 0x180) = iVar1;
    ShowPage(this,iVar1);
    return;
  }
LAB_0385e010:
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  return;
}


/* non-virtual thunk to AdaptorJoustHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustHowToPlayScreen::ButtonDepress(AdaptorJoustHowToPlayScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorJoustHowToPlayScreen::StaticNew() */

AdaptorJoustHowToPlayScreen * AdaptorJoustHowToPlayScreen::StaticNew(void)

{
  AdaptorJoustHowToPlayScreen *this;
  
  this = ::operator_new(0x188);
  AdaptorJoustHowToPlayScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustHowToPlayScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustHowToPlayScreen::onLinkToUIViewCreated(AdaptorJoustHowToPlayScreen *this)

{
  ButtonListener *pBVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  WidgetContainer *pWVar3;
  AdaptorCarouselDots *this_01;
  ulong uVar4;
  string asStack_10 [8];
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0385d700(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ContinueButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x128) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener(*(HotUIButton **)(this + 0x128),1,pBVar1);
  std::string::string(asStack_10,"PreviousButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x120) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener(*(HotUIButton **)(this + 0x120),2,pBVar1);
  std::string::string(asStack_10,"CloseButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar2,3,pBVar1);
  std::string::string(asStack_10,"HowToPlayEntryImage");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x130) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"HowToPlayEntryDescription");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x138) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"StepNumberLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x140) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  pWVar3 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,(string *)&DAT_06ab4b98);
  this_01 = ::operator_new(0x148);
  memset(this_01,0,0x148);
  AdaptorCarouselDots::AdaptorCarouselDots(this_01);
  *(AdaptorCarouselDots **)(this + 0x148) = this_01;
  uVar4 = FUN_0385d75c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  AdaptorCarouselDots::Configure(this_01,pWVar3,uVar4);
  HotUIAdaptor::LoadWidget(*(HotUIAdaptor **)(this + 0x148));
  AdaptorCarouselDots::SetFilledDot((int)*(undefined8 *)(this + 0x148));
  HotUIAdaptor::SetDarkenBackground((HotUIAdaptor *)this,0.75);
  *(undefined4 *)(this + 0x180) = 0;
  ShowPage(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustHowToPlayScreen::~AdaptorJoustHowToPlayScreen() */

void __thiscall
AdaptorJoustHowToPlayScreen::~AdaptorJoustHowToPlayScreen(AdaptorJoustHowToPlayScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_066a94d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9830;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9878;
  this_00 = (HotUIFile *)FUN_0385d700(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,(string *)&DAT_06ab4b98);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,0);
  HotUIAdaptor::DeleteWidget(*(HotUIAdaptor **)(this + 0x148));
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData((JoustHowToPlayScreenData *)(this + 0x150));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustHowToPlayScreen::~AdaptorJoustHowToPlayScreen() */

void __thiscall
AdaptorJoustHowToPlayScreen::~AdaptorJoustHowToPlayScreen(AdaptorJoustHowToPlayScreen *this)

{
  ~AdaptorJoustHowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustHowToPlayScreen::SetData(JoustHowToPlayScreenData const&) */

void __thiscall
AdaptorJoustHowToPlayScreen::SetData
          (AdaptorJoustHowToPlayScreen *this,JoustHowToPlayScreenData *param_1)

{
  JoustHowToPlayScreenData::operator=((JoustHowToPlayScreenData *)(this + 0x150),param_1);
  return;
}

