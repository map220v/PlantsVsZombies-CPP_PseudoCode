// Class: AdaptorPerkLibraryTabbedDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryTabbedDialog::StaticClassInit() */

void AdaptorPerkLibraryTabbedDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkLibraryTabbedDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_0366f4c4,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkLibraryTabbedDialog::StaticGetClass() */

long * AdaptorPerkLibraryTabbedDialog::StaticGetClass(void)

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
  uVar2 = AdaptorTabbedInterface::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPerkLibraryTabbedDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkLibraryTabbedDialog::GetClass() const */

long * AdaptorPerkLibraryTabbedDialog::GetClass(void)

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
  uVar2 = AdaptorTabbedInterface::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorPerkLibraryTabbedDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryTabbedDialog::onLoadUIView() */

void __thiscall AdaptorPerkLibraryTabbedDialog::onLoadUIView(AdaptorPerkLibraryTabbedDialog *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"PerkLibraryTabbedDialog");
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
/* AdaptorPerkLibraryTabbedDialog::AdaptorPerkLibraryTabbedDialog() */

void __thiscall
AdaptorPerkLibraryTabbedDialog::AdaptorPerkLibraryTabbedDialog(AdaptorPerkLibraryTabbedDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdaptorTabbedInterface::AdaptorTabbedInterface((AdaptorTabbedInterface *)this);
  *(undefined ***)this = &PTR_GetClass_06678cc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06679020;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679068;
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


/* AdaptorPerkLibraryTabbedDialog::StaticNew() */

AdaptorPerkLibraryTabbedDialog * AdaptorPerkLibraryTabbedDialog::StaticNew(void)

{
  AdaptorPerkLibraryTabbedDialog *this;
  
  this = ::operator_new(0x198);
  AdaptorPerkLibraryTabbedDialog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkLibraryTabbedDialog::~AdaptorPerkLibraryTabbedDialog() */

void __thiscall
AdaptorPerkLibraryTabbedDialog::~AdaptorPerkLibraryTabbedDialog
          (AdaptorPerkLibraryTabbedDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06678cc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06679020;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679068;
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
  AdaptorTabbedInterface::~AdaptorTabbedInterface((AdaptorTabbedInterface *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkLibraryTabbedDialog::~AdaptorPerkLibraryTabbedDialog() */

void __thiscall
AdaptorPerkLibraryTabbedDialog::~AdaptorPerkLibraryTabbedDialog
          (AdaptorPerkLibraryTabbedDialog *this)

{
  ~AdaptorPerkLibraryTabbedDialog(this);
  AK::FreeHook(this);
  return;
}

