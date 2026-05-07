// Class: AdaptorCarouselDots


/* AdaptorCarouselDots::AdaptorCarouselDots() */

void __thiscall AdaptorCarouselDots::AdaptorCarouselDots(AdaptorCarouselDots *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066a90a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9400;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9448;
  *(undefined8 *)(this + 0x128) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDots::StaticClassInit() */

void AdaptorCarouselDots::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorCarouselDots");
    (*pcVar2)(plVar1,asStack_10,FUN_0385cf48,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorCarouselDots::StaticGetClass() */

long * AdaptorCarouselDots::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorCarouselDots",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorCarouselDots::GetClass() const */

long * AdaptorCarouselDots::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorCarouselDots",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorCarouselDots::Configure(Sexy::WidgetContainer*, unsigned long) */

void __thiscall
AdaptorCarouselDots::Configure(AdaptorCarouselDots *this,WidgetContainer *param_1,ulong param_2)

{
  *(WidgetContainer **)(this + 0x120) = param_1;
  *(ulong *)(this + 0x128) = param_2;
  return;
}


/* AdaptorCarouselDots::SetFilledDot(int) */

void AdaptorCarouselDots::SetFilledDot(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)((ulong)(uint)param_1 + 0x130);
    uVar2 = FUN_0385cd90(uVar4,*(undefined8 *)((ulong)(uint)param_1 + 0x138));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0385cd9c(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    AdaptorCarouselDotEntry::SetFilled(SUB81(*puVar1,0));
  }
  return;
}


/* AdaptorCarouselDots::StaticNew() */

AdaptorCarouselDots * AdaptorCarouselDots::StaticNew(void)

{
  AdaptorCarouselDots *this;
  
  this = ::operator_new(0x148);
  AdaptorCarouselDots(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDots::~AdaptorCarouselDots() */

void __thiscall AdaptorCarouselDots::~AdaptorCarouselDots(AdaptorCarouselDots *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066a90a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a9400;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a9448;
  this_01 = (HotUIFile *)FUN_0385cd84(*(undefined8 *)(this + 0xf8));
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&DAT_06ab4b80);
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>>::clear
            ((vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>> *)this_00);
  std::vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>>::~vector
            ((vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>> *)this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorCarouselDots::~AdaptorCarouselDots() */

void __thiscall AdaptorCarouselDots::~AdaptorCarouselDots(AdaptorCarouselDots *this)

{
  ~AdaptorCarouselDots(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDots::onLoadUIView() */

void __thiscall AdaptorCarouselDots::onLoadUIView(AdaptorCarouselDots *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"HotUICarouselDots");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorCarouselDots::onLinkToUIViewCreated() */

void __thiscall AdaptorCarouselDots::onLinkToUIViewCreated(AdaptorCarouselDots *this)

{
  bool bVar1;
  HotUIFile *this_00;
  Image *extraout_x0;
  AdaptorCarouselDotEntry *this_01;
  ulong uVar2;
  AdaptorCarouselDotEntry *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0385cd84(*(undefined8 *)(this + 0xf8));
  HotUIFile::GetWidgetByName(this_00,(string *)&DAT_06ab4b80);
  nop();
  if (*(long *)(this + 0x128) != 0) {
    uVar2 = 1;
    do {
      this_01 = ::operator_new(0x130);
      memset(this_01,0,0x130);
      AdaptorCarouselDotEntry::AdaptorCarouselDotEntry(this_01);
      local_10 = this_01;
      CommonRewardItemWidget::SetCurrencyImage((CommonRewardItemWidget *)this_01,extraout_x0);
      std::vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>>::push_back
                ((vector<AdaptorCarouselDotEntry*,std::allocator<AdaptorCarouselDotEntry*>> *)
                 (this + 0x130),&local_10);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)local_10);
      bVar1 = uVar2 < *(ulong *)(this + 0x128);
      uVar2 = uVar2 + 1;
    } while (bVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

