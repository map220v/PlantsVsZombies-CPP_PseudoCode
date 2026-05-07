// Class: AdaptorNewPVPAreaHowToPlayScreen


/* AdaptorNewPVPAreaHowToPlayScreen::~AdaptorNewPVPAreaHowToPlayScreen() */

void __thiscall
AdaptorNewPVPAreaHowToPlayScreen::~AdaptorNewPVPAreaHowToPlayScreen
          (AdaptorNewPVPAreaHowToPlayScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_0664c930;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664cc90;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664ccd8;
  AdaptorJoustHowToPlayScreen::~AdaptorJoustHowToPlayScreen((AdaptorJoustHowToPlayScreen *)this);
  return;
}


/* AdaptorNewPVPAreaHowToPlayScreen::~AdaptorNewPVPAreaHowToPlayScreen() */

void __thiscall
AdaptorNewPVPAreaHowToPlayScreen::~AdaptorNewPVPAreaHowToPlayScreen
          (AdaptorNewPVPAreaHowToPlayScreen *this)

{
  ~AdaptorNewPVPAreaHowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPAreaHowToPlayScreen::StaticClassInit() */

void AdaptorNewPVPAreaHowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPAreaHowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034c041c,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPAreaHowToPlayScreen::StaticGetClass() */

long * AdaptorNewPVPAreaHowToPlayScreen::StaticGetClass(void)

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
  uVar2 = AdaptorJoustHowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPAreaHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPAreaHowToPlayScreen::GetClass() const */

long * AdaptorNewPVPAreaHowToPlayScreen::GetClass(void)

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
  uVar2 = AdaptorJoustHowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPAreaHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPAreaHowToPlayScreen::onLoadUIView() */

void __thiscall
AdaptorNewPVPAreaHowToPlayScreen::onLoadUIView(AdaptorNewPVPAreaHowToPlayScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"NewPVPAreaHowToPlayScreen");
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


/* AdaptorNewPVPAreaHowToPlayScreen::AdaptorNewPVPAreaHowToPlayScreen() */

void __thiscall
AdaptorNewPVPAreaHowToPlayScreen::AdaptorNewPVPAreaHowToPlayScreen
          (AdaptorNewPVPAreaHowToPlayScreen *this)

{
  AdaptorJoustHowToPlayScreen::AdaptorJoustHowToPlayScreen((AdaptorJoustHowToPlayScreen *)this);
  *(undefined ***)this = &PTR_GetClass_0664c930;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664cc90;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664ccd8;
  return;
}


/* AdaptorNewPVPAreaHowToPlayScreen::StaticNew() */

AdaptorNewPVPAreaHowToPlayScreen * AdaptorNewPVPAreaHowToPlayScreen::StaticNew(void)

{
  AdaptorNewPVPAreaHowToPlayScreen *this;
  
  this = ::operator_new(0x188);
  AdaptorNewPVPAreaHowToPlayScreen(this);
  return this;
}

