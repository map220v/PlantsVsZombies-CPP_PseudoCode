// Class: AdaptorPVZ1ModeHowToPlayScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPVZ1ModeHowToPlayScreen::onLoadUIView() */

void __thiscall AdaptorPVZ1ModeHowToPlayScreen::onLoadUIView(AdaptorPVZ1ModeHowToPlayScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"PVZ1ModeHowToPlayScreen");
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


/* AdaptorPVZ1ModeHowToPlayScreen::AdaptorPVZ1ModeHowToPlayScreen() */

void __thiscall
AdaptorPVZ1ModeHowToPlayScreen::AdaptorPVZ1ModeHowToPlayScreen(AdaptorPVZ1ModeHowToPlayScreen *this)

{
  HowToPlayScreen::HowToPlayScreen((HowToPlayScreen *)this);
  *(undefined ***)this = &PTR_GetClass_069c91f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c9550;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_069c9598;
  return;
}


/* AdaptorPVZ1ModeHowToPlayScreen::~AdaptorPVZ1ModeHowToPlayScreen() */

void __thiscall
AdaptorPVZ1ModeHowToPlayScreen::~AdaptorPVZ1ModeHowToPlayScreen
          (AdaptorPVZ1ModeHowToPlayScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_069c91f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c9550;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_069c9598;
  HowToPlayScreen::~HowToPlayScreen((HowToPlayScreen *)this);
  return;
}


/* AdaptorPVZ1ModeHowToPlayScreen::~AdaptorPVZ1ModeHowToPlayScreen() */

void __thiscall
AdaptorPVZ1ModeHowToPlayScreen::~AdaptorPVZ1ModeHowToPlayScreen
          (AdaptorPVZ1ModeHowToPlayScreen *this)

{
  ~AdaptorPVZ1ModeHowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPVZ1ModeHowToPlayScreen::StaticClassInit() */

void AdaptorPVZ1ModeHowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPVZ1ModeHowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_04de355c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPVZ1ModeHowToPlayScreen::StaticGetClass() */

long * AdaptorPVZ1ModeHowToPlayScreen::StaticGetClass(void)

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
  uVar2 = HowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPVZ1ModeHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPVZ1ModeHowToPlayScreen::GetClass() const */

long * AdaptorPVZ1ModeHowToPlayScreen::GetClass(void)

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
  uVar2 = HowToPlayScreen::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPVZ1ModeHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPVZ1ModeHowToPlayScreen::doClose() */

void __thiscall AdaptorPVZ1ModeHowToPlayScreen::doClose(AdaptorPVZ1ModeHowToPlayScreen *this)

{
  char cVar1;
  long *plVar2;
  
  HowToPlayScreen::Close((HowToPlayScreen *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  if ((plVar2 != (long *)0x0) &&
     (cVar1 = FUN_04de3410(*(undefined1 *)((long)plVar2 + 0x9dc)), cVar1 != '\0')) {
    (**(code **)(*plVar2 + 800))(plVar2,0);
  }
  return;
}


/* AdaptorPVZ1ModeHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorPVZ1ModeHowToPlayScreen::ButtonDepress(AdaptorPVZ1ModeHowToPlayScreen *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (0 < *(int *)(this + 0x180)) {
        iVar1 = *(int *)(this + 0x180) + -1;
        *(int *)(this + 0x180) = iVar1;
        HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
        return;
      }
    }
    else if (param_1 == 3) goto LAB_04de3730;
    return;
  }
  iVar1 = *(int *)(this + 0x180);
  lVar2 = FUN_04de3414(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  if (lVar2 + -1 != (long)iVar1) {
    iVar1 = iVar1 + 1;
    *(int *)(this + 0x180) = iVar1;
    HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
    return;
  }
LAB_04de3730:
  doClose(this);
  return;
}


/* non-virtual thunk to AdaptorPVZ1ModeHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorPVZ1ModeHowToPlayScreen::ButtonDepress(AdaptorPVZ1ModeHowToPlayScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorPVZ1ModeHowToPlayScreen::StaticNew() */

AdaptorPVZ1ModeHowToPlayScreen * AdaptorPVZ1ModeHowToPlayScreen::StaticNew(void)

{
  AdaptorPVZ1ModeHowToPlayScreen *this;
  
  this = ::operator_new(0x1a8);
  AdaptorPVZ1ModeHowToPlayScreen(this);
  return this;
}

