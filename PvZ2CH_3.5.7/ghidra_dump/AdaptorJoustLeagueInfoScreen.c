// Class: AdaptorJoustLeagueInfoScreen


/* AdaptorJoustLeagueInfoScreen::AdaptorJoustLeagueInfoScreen() */

void __thiscall
AdaptorJoustLeagueInfoScreen::AdaptorJoustLeagueInfoScreen(AdaptorJoustLeagueInfoScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066aa4a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa800;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa848;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  return;
}


/* AdaptorJoustLeagueInfoScreen::onClose() */

void __thiscall AdaptorJoustLeagueInfoScreen::onClose(AdaptorJoustLeagueInfoScreen *this)

{
  char cVar1;
  PrimeText *this_00;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 != (long *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,this), cVar1 != '\0')
     ) {
    (**(code **)(**(long **)(this + 0x18) + 0x68))(*(long **)(this + 0x18),this);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)this);
    this_00 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_00);
    return;
  }
  return;
}


/* AdaptorJoustLeagueInfoScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorJoustLeagueInfoScreen::OnBackButtonPressed(AdaptorJoustLeagueInfoScreen *this)

{
  onClose(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoScreen::StaticClassInit() */

void AdaptorJoustLeagueInfoScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustLeagueInfoScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03862b0c,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeagueInfoScreen::StaticGetClass() */

long * AdaptorJoustLeagueInfoScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeagueInfoScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeagueInfoScreen::GetClass() const */

long * AdaptorJoustLeagueInfoScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustLeagueInfoScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustLeagueInfoScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustLeagueInfoScreen::ButtonDepress(AdaptorJoustLeagueInfoScreen *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  onClose(this);
  return;
}


/* non-virtual thunk to AdaptorJoustLeagueInfoScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustLeagueInfoScreen::ButtonDepress(AdaptorJoustLeagueInfoScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoScreen::refresh() */

void __thiscall AdaptorJoustLeagueInfoScreen::refresh(AdaptorJoustLeagueInfoScreen *this)

{
  int iVar1;
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorJoustLeagueInfoEntry *this_01;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038629b0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"LeagueListInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  iVar1 = JoustUtils::GetLeagueCount();
  iVar2 = iVar1 + -1;
  if (-1 < iVar1 + -1) {
    do {
      this_01 = ::operator_new(0x130);
      AdaptorJoustLeagueInfoEntry::AdaptorJoustLeagueInfoEntry(this_01);
      std::vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>::clear
                ((vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>
                  *)(this + 0x120));
      iVar1 = iVar2 + -1;
      AdaptorJoustLeagueInfoEntry::Configure(this_01,extraout_x0,iVar2,0);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_01);
      iVar2 = iVar1;
    } while (iVar1 != -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustLeagueInfoScreen::onLinkToUIViewCreated(AdaptorJoustLeagueInfoScreen *this)

{
  int iVar1;
  HotUIFile *this_00;
  WidgetContainer *extraout_x0;
  AdaptorJoustLeagueInfoEntry *this_01;
  int iVar2;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038629b0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"LeagueListInnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  iVar1 = JoustUtils::GetLeagueCount();
  iVar2 = iVar1 + -1;
  if (-1 < iVar1 + -1) {
    do {
      this_01 = ::operator_new(0x130);
      AdaptorJoustLeagueInfoEntry::AdaptorJoustLeagueInfoEntry(this_01);
      std::vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>::clear
                ((vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>
                  *)(this + 0x120));
      iVar1 = iVar2 + -1;
      AdaptorJoustLeagueInfoEntry::Configure(this_01,extraout_x0,iVar2,0);
      HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_01);
      iVar2 = iVar1;
    } while (iVar1 != -1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoScreen::onLoadUIView() */

void __thiscall AdaptorJoustLeagueInfoScreen::onLoadUIView(AdaptorJoustLeagueInfoScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustLeagueInfoScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  std::string::string(asStack_10,"CloseButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeagueInfoScreen::StaticNew() */

AdaptorJoustLeagueInfoScreen * AdaptorJoustLeagueInfoScreen::StaticNew(void)

{
  AdaptorJoustLeagueInfoScreen *this;
  
  this = ::operator_new(0x138);
  AdaptorJoustLeagueInfoScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustLeagueInfoScreen::~AdaptorJoustLeagueInfoScreen() */

void __thiscall
AdaptorJoustLeagueInfoScreen::~AdaptorJoustLeagueInfoScreen(AdaptorJoustLeagueInfoScreen *this)

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
             *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066aa4a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066aa800;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066aa848;
  this_01 = (HotUIFile *)FUN_038629b0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"LeagueListInnerScrollArea");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
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
  std::vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>::clear
            ((vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>> *)
             this_00);
  std::vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>>::~vector
            ((vector<AdaptorJoustLeagueInfoEntry*,std::allocator<AdaptorJoustLeagueInfoEntry*>> *)
             this_00);
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustLeagueInfoScreen::~AdaptorJoustLeagueInfoScreen() */

void __thiscall
AdaptorJoustLeagueInfoScreen::~AdaptorJoustLeagueInfoScreen(AdaptorJoustLeagueInfoScreen *this)

{
  ~AdaptorJoustLeagueInfoScreen(this);
  AK::FreeHook(this);
  return;
}

