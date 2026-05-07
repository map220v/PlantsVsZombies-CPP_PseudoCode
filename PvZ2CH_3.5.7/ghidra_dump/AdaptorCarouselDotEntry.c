// Class: AdaptorCarouselDotEntry


/* AdaptorCarouselDotEntry::~AdaptorCarouselDotEntry() */

void __thiscall AdaptorCarouselDotEntry::~AdaptorCarouselDotEntry(AdaptorCarouselDotEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066a8cd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9030;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9078;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorCarouselDotEntry::~AdaptorCarouselDotEntry() */

void __thiscall AdaptorCarouselDotEntry::~AdaptorCarouselDotEntry(AdaptorCarouselDotEntry *this)

{
  ~AdaptorCarouselDotEntry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDotEntry::onLinkToUIViewCreated() */

void __thiscall AdaptorCarouselDotEntry::onLinkToUIViewCreated(AdaptorCarouselDotEntry *this)

{
  HotUIFile *this_00;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0385c96c(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DotFill");
  uVar1 = HotUIFile::GetWidgetByName(this_00,asStack_10);
  *(undefined8 *)(this + 0x128) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorCarouselDotEntry::AdaptorCarouselDotEntry() */

void __thiscall AdaptorCarouselDotEntry::AdaptorCarouselDotEntry(AdaptorCarouselDotEntry *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066a8cd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9030;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9078;
  *(undefined8 *)(this + 0x128) = 0;
  return;
}


/* AdaptorCarouselDotEntry::StaticNew() */

AdaptorCarouselDotEntry * AdaptorCarouselDotEntry::StaticNew(void)

{
  AdaptorCarouselDotEntry *this;
  
  this = ::operator_new(0x130);
  AdaptorCarouselDotEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDotEntry::StaticClassInit() */

void AdaptorCarouselDotEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorCarouselDotEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_0385cbb8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorCarouselDotEntry::StaticGetClass() */

long * AdaptorCarouselDotEntry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorCarouselDotEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorCarouselDotEntry::GetClass() const */

long * AdaptorCarouselDotEntry::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorCarouselDotEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorCarouselDotEntry::SetFilled(bool) */

void AdaptorCarouselDotEntry::SetFilled(bool param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x128) + 0x158))(*(long **)((ulong)param_1 + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDotEntry::onLoadUIView() */

void __thiscall AdaptorCarouselDotEntry::onLoadUIView(AdaptorCarouselDotEntry *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"HotUICarouselDotEntry");
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  pHVar2 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar1,(map *)asStack_40,(WidgetContainer *)amStack_38);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

