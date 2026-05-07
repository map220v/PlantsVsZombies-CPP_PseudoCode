// Class: AdaptorPerkLibraryTips


/* AdaptorPerkLibraryTips::~AdaptorPerkLibraryTips() */

void __thiscall AdaptorPerkLibraryTips::~AdaptorPerkLibraryTips(AdaptorPerkLibraryTips *this)

{
  *(undefined ***)this = &PTR_GetClass_06678150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066784b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066784f8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorPerkLibraryTips::~AdaptorPerkLibraryTips() */

void __thiscall AdaptorPerkLibraryTips::~AdaptorPerkLibraryTips(AdaptorPerkLibraryTips *this)

{
  ~AdaptorPerkLibraryTips(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorPerkLibraryTips::ButtonDepress(int) */

void __thiscall AdaptorPerkLibraryTips::ButtonDepress(AdaptorPerkLibraryTips *this,int param_1)

{
  if (param_1 != 0x3e9) {
    return;
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  return;
}


/* non-virtual thunk to AdaptorPerkLibraryTips::ButtonDepress(int) */

void __thiscall AdaptorPerkLibraryTips::ButtonDepress(AdaptorPerkLibraryTips *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryTips::StaticClassInit() */

void AdaptorPerkLibraryTips::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkLibraryTips");
    (*pcVar2)(plVar1,asStack_10,FUN_0366ede8,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkLibraryTips::StaticGetClass() */

long * AdaptorPerkLibraryTips::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkLibraryTips",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkLibraryTips::GetClass() const */

long * AdaptorPerkLibraryTips::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkLibraryTips",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkLibraryTips::AdaptorPerkLibraryTips() */

void __thiscall AdaptorPerkLibraryTips::AdaptorPerkLibraryTips(AdaptorPerkLibraryTips *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06678150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066784b0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066784f8;
  return;
}


/* AdaptorPerkLibraryTips::StaticNew() */

AdaptorPerkLibraryTips * AdaptorPerkLibraryTips::StaticNew(void)

{
  AdaptorPerkLibraryTips *this;
  
  this = ::operator_new(0x120);
  AdaptorPerkLibraryTips(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryTips::onLoadUIView() */

void __thiscall AdaptorPerkLibraryTips::onLoadUIView(AdaptorPerkLibraryTips *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"PerkLibraryTips");
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
/* AdaptorPerkLibraryTips::onLinkToUIViewCreated() */

void __thiscall AdaptorPerkLibraryTips::onLinkToUIViewCreated(AdaptorPerkLibraryTips *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366ec8c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)this_01,0x3e9,(ButtonListener *)(this + 0xd8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

