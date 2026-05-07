// Class: HowToPlayScreen


/* HowToPlayScreen::HowToPlayScreen() */

void __thiscall HowToPlayScreen::HowToPlayScreen(HowToPlayScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06682d10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683070;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066830b8;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  HowToPlayScreenData::HowToPlayScreenData((HowToPlayScreenData *)(this + 0x150));
  *(undefined4 *)(this + 0x180) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x188));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HowToPlayScreen::StaticClassInit() */

void HowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"HowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_036d35ec,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HowToPlayScreen::StaticGetClass() */

long * HowToPlayScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HowToPlayScreen::GetClass() const */

long * HowToPlayScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"HowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HowToPlayScreen::ShowPage(int) */

void __thiscall HowToPlayScreen::ShowPage(HowToPlayScreen *this,int param_1)

{
  long lVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  long *plVar2;
  HotUIImage *pHVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_036d3038(*(undefined8 *)(this + 0x160),(long)param_1);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pHVar3 = *(HotUIImage **)(this + 0x130);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
  HotUIImage::SetImage(pHVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::UTF8StringToWString((Sexy *)(lVar1 + 0x10),extraout_x1);
  TodStringTranslate((wstring *)aRStack_10);
  FUN_05476c50(aRStack_10);
  (**(code **)(**(long **)(this + 0x138) + 0x360))(*(long **)(this + 0x138),auStack_20);
  Sexy::UTF8StringToWString((Sexy *)(lVar1 + 8),extraout_x1_00);
  TodStringTranslate((wstring *)aRStack_10);
  FUN_05476c50(aRStack_10);
  (**(code **)(**(long **)(this + 0x140) + 0x360))(*(long **)(this + 0x140),auStack_18);
  AdaptorCarouselDots::SetFilledDot((int)*(undefined8 *)(this + 0x148));
  (**(code **)(**(long **)(this + 0x120) + 0x158))(*(long **)(this + 0x120),param_1 != 0);
  plVar2 = *(long **)(this + 0x128);
  lVar1 = FUN_036d3008(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  (**(code **)(*plVar2 + 0x158))(plVar2,(long)param_1 != lVar1 + -1);
  FUN_05476c50(auStack_18);
  FUN_05476c50(auStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HowToPlayScreen::Close() */

void __thiscall HowToPlayScreen::Close(HowToPlayScreen *this)

{
  bool bVar1;
  
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x188));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x188));
  return;
}


/* HowToPlayScreen::OnBackButtonPressed() */

undefined8 __thiscall HowToPlayScreen::OnBackButtonPressed(HowToPlayScreen *this)

{
  Close(this);
  return 1;
}


/* HowToPlayScreen::ButtonDepress(int) */

void __thiscall HowToPlayScreen::ButtonDepress(HowToPlayScreen *this,int param_1)

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
    else if (param_1 == 3) goto LAB_036d3960;
    return;
  }
  iVar1 = *(int *)(this + 0x180);
  lVar2 = FUN_036d3008(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  if (lVar2 + -1 != (long)iVar1) {
    iVar1 = iVar1 + 1;
    *(int *)(this + 0x180) = iVar1;
    ShowPage(this,iVar1);
    return;
  }
LAB_036d3960:
  Close(this);
  return;
}


/* non-virtual thunk to HowToPlayScreen::ButtonDepress(int) */

void __thiscall HowToPlayScreen::ButtonDepress(HowToPlayScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* HowToPlayScreen::SetOnCloseAction(std::function<void ()>) */

void __thiscall HowToPlayScreen::SetOnCloseAction(HowToPlayScreen *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x188),param_2);
  return;
}


/* HowToPlayScreen::StaticNew() */

HowToPlayScreen * HowToPlayScreen::StaticNew(void)

{
  HowToPlayScreen *this;
  
  this = ::operator_new(0x1a8);
  HowToPlayScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HowToPlayScreen::onLinkToUIViewCreated() */

void __thiscall HowToPlayScreen::onLinkToUIViewCreated(HowToPlayScreen *this)

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
  this_00 = (HotUIFile *)FUN_036d2fac(*(undefined8 *)(this + 0xf8));
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
  std::string::string(asStack_10,"SubtitleLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  *(HotUISeedPacketList **)(this + 0x140) = pHVar2;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
  pWVar3 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,(string *)&DAT_06aad880);
  this_01 = ::operator_new(0x148);
  memset(this_01,0,0x148);
  AdaptorCarouselDots::AdaptorCarouselDots(this_01);
  *(AdaptorCarouselDots **)(this + 0x148) = this_01;
  uVar4 = FUN_036d3008(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  AdaptorCarouselDots::Configure(this_01,pWVar3,uVar4);
  HotUIAdaptor::LoadWidget(*(HotUIAdaptor **)(this + 0x148));
  AdaptorCarouselDots::SetFilledDot((int)*(undefined8 *)(this + 0x148));
  *(undefined4 *)(this + 0x180) = 0;
  ShowPage(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HowToPlayScreen::~HowToPlayScreen() */

void __thiscall HowToPlayScreen::~HowToPlayScreen(HowToPlayScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_06682d10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06683070;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066830b8;
  this_00 = (HotUIFile *)FUN_036d2fac(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,(string *)&DAT_06aad880);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,0);
  HotUIAdaptor::DeleteWidget(*(HotUIAdaptor **)(this + 0x148));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x188));
  HowToPlayScreenData::~HowToPlayScreenData((HowToPlayScreenData *)(this + 0x150));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* HowToPlayScreen::~HowToPlayScreen() */

void __thiscall HowToPlayScreen::~HowToPlayScreen(HowToPlayScreen *this)

{
  ~HowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* HowToPlayScreen::SetData(HowToPlayScreenData const&) */

void __thiscall HowToPlayScreen::SetData(HowToPlayScreen *this,HowToPlayScreenData *param_1)

{
  HowToPlayScreenData::operator=((HowToPlayScreenData *)(this + 0x150),param_1);
  return;
}

