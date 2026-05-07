// Class: AdaptorMultiPurchaseItemSpacer


/* AdaptorMultiPurchaseItemSpacer::~AdaptorMultiPurchaseItemSpacer() */

void __thiscall
AdaptorMultiPurchaseItemSpacer::~AdaptorMultiPurchaseItemSpacer
          (AdaptorMultiPurchaseItemSpacer *this)

{
  *(undefined ***)this = &PTR_GetClass_06676230;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676590;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066765d8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorMultiPurchaseItemSpacer::~AdaptorMultiPurchaseItemSpacer() */

void __thiscall
AdaptorMultiPurchaseItemSpacer::~AdaptorMultiPurchaseItemSpacer
          (AdaptorMultiPurchaseItemSpacer *this)

{
  ~AdaptorMultiPurchaseItemSpacer(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorMultiPurchaseItemSpacer::AdaptorMultiPurchaseItemSpacer() */

void __thiscall
AdaptorMultiPurchaseItemSpacer::AdaptorMultiPurchaseItemSpacer(AdaptorMultiPurchaseItemSpacer *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_06676230;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06676590;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066765d8;
  return;
}


/* AdaptorMultiPurchaseItemSpacer::StaticNew() */

AdaptorMultiPurchaseItemSpacer * AdaptorMultiPurchaseItemSpacer::StaticNew(void)

{
  AdaptorMultiPurchaseItemSpacer *this;
  
  this = ::operator_new(0x128);
  AdaptorMultiPurchaseItemSpacer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItemSpacer::StaticClassInit() */

void AdaptorMultiPurchaseItemSpacer::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorMultiPurchaseItemSpacer");
    (*pcVar2)(plVar1,asStack_10,FUN_0366958c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorMultiPurchaseItemSpacer::StaticGetClass() */

long * AdaptorMultiPurchaseItemSpacer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorMultiPurchaseItemSpacer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorMultiPurchaseItemSpacer::GetClass() const */

long * AdaptorMultiPurchaseItemSpacer::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorMultiPurchaseItemSpacer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorMultiPurchaseItemSpacer::onLoadUIView() */

void __thiscall AdaptorMultiPurchaseItemSpacer::onLoadUIView(AdaptorMultiPurchaseItemSpacer *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"MultiPurchaseItemSpacer");
  pHVar2 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar1,(map *)asStack_40,(WidgetContainer *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

