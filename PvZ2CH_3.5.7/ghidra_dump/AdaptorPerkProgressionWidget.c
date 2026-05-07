// Class: AdaptorPerkProgressionWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkProgressionWidget::~AdaptorPerkProgressionWidget() */

void __thiscall
AdaptorPerkProgressionWidget::~AdaptorPerkProgressionWidget(AdaptorPerkProgressionWidget *this)

{
  HotUIFile *this_00;
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066774d0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06677170;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677518;
  this_00 = (HotUIFile *)FUN_0366c8c0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ProgressBarInnerScroll");
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  (**(code **)(*plVar1 + 0x80))(plVar1,0,0);
  std::string::~string(asStack_10);
  nop();
  plVar1 = *(long **)(this + 0x120);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,0,0);
    HotUIAdaptor::DeleteWidget(*(HotUIAdaptor **)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
  }
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkProgressionWidget::~AdaptorPerkProgressionWidget() */

void __thiscall
AdaptorPerkProgressionWidget::~AdaptorPerkProgressionWidget(AdaptorPerkProgressionWidget *this)

{
  ~AdaptorPerkProgressionWidget(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorPerkProgressionWidget::AdaptorPerkProgressionWidget() */

void __thiscall
AdaptorPerkProgressionWidget::AdaptorPerkProgressionWidget(AdaptorPerkProgressionWidget *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined ***)this = &PTR_GetClass_06677170;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066774d0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677518;
  return;
}


/* AdaptorPerkProgressionWidget::StaticNew() */

AdaptorPerkProgressionWidget * AdaptorPerkProgressionWidget::StaticNew(void)

{
  AdaptorPerkProgressionWidget *this;
  
  this = ::operator_new(0x130);
  AdaptorPerkProgressionWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkProgressionWidget::StaticClassInit() */

void AdaptorPerkProgressionWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkProgressionWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0366cb94,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkProgressionWidget::StaticGetClass() */

long * AdaptorPerkProgressionWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkProgressionWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkProgressionWidget::GetClass() const */

long * AdaptorPerkProgressionWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkProgressionWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkProgressionWidget::ShowProgressAnimation() */

void AdaptorPerkProgressionWidget::ShowProgressAnimation(void)

{
  AdaptorRiftPerkProgressionDisplay *this;
  
  nop();
  AdaptorRiftPerkProgressionDisplay::ShowProgressAnimation(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkProgressionWidget::onLinkToUIViewCreated() */

void __thiscall
AdaptorPerkProgressionWidget::onLinkToUIViewCreated(AdaptorPerkProgressionWidget *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  AdaptorRiftPerkProgressionDisplay *this_01;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366c8c0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"ProgressBarInnerScroll");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = ::operator_new(0x180);
  AdaptorRiftPerkProgressionDisplay::AdaptorRiftPerkProgressionDisplay(this_01);
  std::string::string(asStack_10,"RiftPerkProgressionDisplay");
  HotUIAdaptor::SetParentAndFile((HotUIAdaptor *)this_01,(HotUIWidget *)pHVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(AdaptorRiftPerkProgressionDisplay **)(this + 0x120) = this_01;
  HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_01);
  fVar2 = (float)AdaptorRiftPerkProgressionDisplay::GetSizeOfPerkRegion();
  (**(code **)(*(long *)pHVar1 + 0x198))
            (pHVar1,*(undefined4 *)(pHVar1 + 0x48),*(undefined4 *)(pHVar1 + 0x4c),(int)fVar2,
             *(undefined4 *)(pHVar1 + 0x54));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkProgressionWidget::onLayoutFinished() */

void __thiscall AdaptorPerkProgressionWidget::onLayoutFinished(AdaptorPerkProgressionWidget *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  ScrollWidget *this_01;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366c8c0(*(undefined8 *)(this + 0xf8));
  Sexy::RtObject::Cast<AdaptorRiftPerkProgressionDisplay>(*(RtObject **)(this + 0x120));
  AdaptorRiftPerkProgressionDisplay::GetScrollPoint();
  std::string::string(asStack_10,"ProgressBarScroll");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (ScrollWidget *)FUN_0366c9ec(*(undefined8 *)(pHVar1 + 0x218));
  Sexy::ScrollWidget::ScrollToPoint(this_01,aPStack_18,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkProgressionWidget::Update() */

void __thiscall AdaptorPerkProgressionWidget::Update(AdaptorPerkProgressionWidget *this)

{
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  if (*(int *)(this + 0x128) < 5) {
    (**(code **)(*(long *)this + 0x348))(this);
    *(int *)(this + 0x128) = *(int *)(this + 0x128) + 1;
  }
  (**(code **)(**(long **)(this + 0x120) + 0x108))(*(long **)(this + 0x120));
  return;
}

