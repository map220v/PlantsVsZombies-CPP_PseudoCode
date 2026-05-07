// Class: AdaptorTabbedInterface


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorTabbedInterface::StaticClassInit() */

void AdaptorTabbedInterface::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorTabbedInterface");
    (*pcVar2)(plVar1,asStack_10,FUN_0366f068,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorTabbedInterface::StaticGetClass() */

long * AdaptorTabbedInterface::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorTabbedInterface",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorTabbedInterface::GetClass() const */

long * AdaptorTabbedInterface::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorTabbedInterface",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorTabbedInterface::ShowTips() */

void __thiscall AdaptorTabbedInterface::ShowTips(AdaptorTabbedInterface *this)

{
  AdaptorPerkLibraryTips *this_00;
  
  this_00 = ::operator_new(0x120);
  AdaptorPerkLibraryTips::AdaptorPerkLibraryTips(this_00);
  *(AdaptorPerkLibraryTips **)(this + 400) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorTabbedInterface::updateTabImages(int) */

void __thiscall AdaptorTabbedInterface::updateTabImages(AdaptorTabbedInterface *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  ulong uVar4;
  undefined8 uVar5;
  HotUIButton *pHVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x158);
    uVar1 = FUN_0366ec98(uVar5,*(undefined8 *)(this + 0x160));
    if (uVar1 <= uVar4) break;
    if (param_1 == (int)uVar4) {
      puVar2 = (undefined8 *)FUN_0366eca4(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_0366ecac(*(undefined8 *)(this + 0x140),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_0366eca4(*(undefined8 *)(this + 0x158),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x140);
    }
    else {
      puVar2 = (undefined8 *)FUN_0366eca4(uVar5,uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      pRVar3 = (RtWeakPtrBase *)FUN_0366ecac(*(undefined8 *)(this + 0x128),uVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      HotUIButton::SetUpImage(pHVar6,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar2 = (undefined8 *)FUN_0366eca4(*(undefined8 *)(this + 0x158),uVar4);
      pHVar6 = (HotUIButton *)*puVar2;
      uVar5 = *(undefined8 *)(this + 0x128);
    }
    pRVar3 = (RtWeakPtrBase *)FUN_0366ecac(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
    HotUIButton::SetDownImage(pHVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    puVar2 = (undefined8 *)FUN_0366eca4(*(undefined8 *)(this + 0x158),uVar4);
    (**(code **)(*(long *)*puVar2 + 0xd8))((long *)*puVar2);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorTabbedInterface::Close() */

void __thiscall AdaptorTabbedInterface::Close(AdaptorTabbedInterface *this)

{
  bool bVar1;
  
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x170));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x170));
  return;
}


/* AdaptorTabbedInterface::ButtonDepress(int) */

void __thiscall AdaptorTabbedInterface::ButtonDepress(AdaptorTabbedInterface *this,int param_1)

{
  if (param_1 == 0) {
    Close(this);
    return;
  }
  if (param_1 != 1000) {
    return;
  }
  ShowTips(this);
  return;
}


/* non-virtual thunk to AdaptorTabbedInterface::ButtonDepress(int) */

void __thiscall AdaptorTabbedInterface::ButtonDepress(AdaptorTabbedInterface *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorTabbedInterface::OnBackButtonPressed() */

undefined8 __thiscall AdaptorTabbedInterface::OnBackButtonPressed(AdaptorTabbedInterface *this)

{
  Close(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorTabbedInterface::showTab(int) */

void __thiscall AdaptorTabbedInterface::showTab(AdaptorTabbedInterface *this,int param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)(this + 0x120),false);
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_1);
  std::operator+((string *)&DAT_06aaa9d0,asStack_10);
  std::string::~string(asStack_10);
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_18,true);
  thunk_FUN_05475e00((string *)(this + 0x120),asStack_18);
  updateTabImages(this,param_1 + -1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorTabbedInterface::setup() */

void __thiscall AdaptorTabbedInterface::setup(AdaptorTabbedInterface *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366ec8c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"TipsButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,1000,(ButtonListener *)(this + 0xd8));
    *(undefined8 *)(this + 400) = 0;
    Sexy::StrFormat("%d",asStack_18,1);
    std::operator+((string *)&DAT_06aaa9d0,asStack_18);
    FUN_05474278((string *)(this + 0x120),asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)(this + 0x120),true);
    updateTabImages(this,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorTabbedInterface::onLinkToUIViewCreated() */

void __thiscall AdaptorTabbedInterface::onLinkToUIViewCreated(AdaptorTabbedInterface *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366ec8c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"CloseButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
    std::string::string(asStack_10,"TipsButton");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar1,1000,(ButtonListener *)(this + 0xd8));
    *(undefined8 *)(this + 400) = 0;
    Sexy::StrFormat("%d",asStack_18,1);
    std::operator+((string *)&DAT_06aaa9d0,asStack_18);
    FUN_05474278((string *)(this + 0x120),asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)(this + 0x120),true);
    updateTabImages(this,0);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorTabbedInterface::SetOnCloseAction(std::function<void ()>) */

void __thiscall
AdaptorTabbedInterface::SetOnCloseAction(AdaptorTabbedInterface *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x170),param_2);
  return;
}


/* AdaptorTabbedInterface::AdaptorTabbedInterface() */

void __thiscall AdaptorTabbedInterface::AdaptorTabbedInterface(AdaptorTabbedInterface *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06678520;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06678880;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066788c8;
  Set8BytesTo0(this + 0x120);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x170));
  return;
}


/* AdaptorTabbedInterface::StaticNew() */

AdaptorTabbedInterface * AdaptorTabbedInterface::StaticNew(void)

{
  AdaptorTabbedInterface *this;
  
  this = ::operator_new(0x198);
  AdaptorTabbedInterface(this);
  return this;
}


/* AdaptorTabbedInterface::~AdaptorTabbedInterface() */

void __thiscall AdaptorTabbedInterface::~AdaptorTabbedInterface(AdaptorTabbedInterface *this)

{
  *(undefined ***)this = &PTR_GetClass_06678520;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06678880;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066788c8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x170));
  std::vector<HotUIButton*,std::allocator<HotUIButton*>>::~vector
            ((vector<HotUIButton*,std::allocator<HotUIButton*>> *)(this + 0x158));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x140));
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x128));
  std::string::~string((string *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorTabbedInterface::~AdaptorTabbedInterface() */

void __thiscall AdaptorTabbedInterface::~AdaptorTabbedInterface(AdaptorTabbedInterface *this)

{
  ~AdaptorTabbedInterface(this);
  AK::FreeHook(this);
  return;
}

