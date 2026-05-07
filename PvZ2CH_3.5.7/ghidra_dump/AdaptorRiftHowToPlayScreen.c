// Class: AdaptorRiftHowToPlayScreen


/* AdaptorRiftHowToPlayScreen::AdaptorRiftHowToPlayScreen() */

void __thiscall
AdaptorRiftHowToPlayScreen::AdaptorRiftHowToPlayScreen(AdaptorRiftHowToPlayScreen *this)

{
  HowToPlayScreen::HowToPlayScreen((HowToPlayScreen *)this);
  *(undefined ***)this = &PTR_GetClass_066828e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06682c40;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06682c88;
  return;
}


/* AdaptorRiftHowToPlayScreen::~AdaptorRiftHowToPlayScreen() */

void __thiscall
AdaptorRiftHowToPlayScreen::~AdaptorRiftHowToPlayScreen(AdaptorRiftHowToPlayScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_066828e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06682c40;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06682c88;
  HowToPlayScreen::~HowToPlayScreen((HowToPlayScreen *)this);
  return;
}


/* AdaptorRiftHowToPlayScreen::~AdaptorRiftHowToPlayScreen() */

void __thiscall
AdaptorRiftHowToPlayScreen::~AdaptorRiftHowToPlayScreen(AdaptorRiftHowToPlayScreen *this)

{
  ~AdaptorRiftHowToPlayScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftHowToPlayScreen::StaticClassInit() */

void AdaptorRiftHowToPlayScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftHowToPlayScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_036d2b7c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftHowToPlayScreen::StaticGetClass() */

long * AdaptorRiftHowToPlayScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftHowToPlayScreen::GetClass() const */

long * AdaptorRiftHowToPlayScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftHowToPlayScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftHowToPlayScreen::onLoadUIView() */

void __thiscall AdaptorRiftHowToPlayScreen::onLoadUIView(AdaptorRiftHowToPlayScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"RiftHowToPlayScreen");
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
/* AdaptorRiftHowToPlayScreen::onLayoutFinished() */

void __thiscall AdaptorRiftHowToPlayScreen::onLayoutFinished(AdaptorRiftHowToPlayScreen *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar3 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x2a);
    if ((cVar1 == '\0') && (iVar2 = FUN_036d2a30(*(undefined4 *)(pPVar3 + 0x40)), iVar2 == 0x2a)) {
      this_01 = (HotUIFile *)FUN_036d2a24(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_10,"CloseButton");
      pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      (**(code **)(*(long *)pHVar4 + 0x158))(pHVar4,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftHowToPlayScreen::ButtonDepress(AdaptorRiftHowToPlayScreen *this,int param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    iVar1 = *(int *)(this + 0x180);
    lVar3 = FUN_036d2a34(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    if (lVar3 + -1 != (long)iVar1) {
      iVar1 = iVar1 + 1;
      *(int *)(this + 0x180) = iVar1;
      HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
      lVar3 = FUN_036d2a34(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
      if ((long)*(int *)(this + 0x180) == lVar3 + -1) {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        if ((pPVar4 != (PlayerInfo *)0x0) &&
           (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar4,0x2a), cVar2 == '\0')) {
          PlayerInfo::CompleteTutorial(pPVar4,0x2a);
          this_01 = (HotUIFile *)FUN_036d2a24(*(undefined8 *)(this + 0xf8));
          std::string::string(asStack_10,"CloseButton");
          pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
          std::string::~string(asStack_10);
          nop();
          (**(code **)(*(long *)pHVar5 + 0x158))(pHVar5,1);
        }
      }
      goto LAB_036d2e28;
    }
  }
  else {
    if (param_1 == 2) {
      if (0 < *(int *)(this + 0x180)) {
        iVar1 = *(int *)(this + 0x180) + -1;
        *(int *)(this + 0x180) = iVar1;
        HowToPlayScreen::ShowPage((HowToPlayScreen *)this,iVar1);
      }
      goto LAB_036d2e28;
    }
    if (param_1 != 3) goto LAB_036d2e28;
  }
  HowToPlayScreen::Close((HowToPlayScreen *)this);
LAB_036d2e28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorRiftHowToPlayScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftHowToPlayScreen::ButtonDepress(AdaptorRiftHowToPlayScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorRiftHowToPlayScreen::StaticNew() */

AdaptorRiftHowToPlayScreen * AdaptorRiftHowToPlayScreen::StaticNew(void)

{
  AdaptorRiftHowToPlayScreen *this;
  
  this = ::operator_new(0x1a8);
  AdaptorRiftHowToPlayScreen(this);
  return this;
}

