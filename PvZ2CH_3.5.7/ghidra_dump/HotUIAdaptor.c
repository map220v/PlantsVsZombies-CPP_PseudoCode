// Class: HotUIAdaptor


/* HotUIAdaptor::ButtonPress(int) */

int HotUIAdaptor::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to HotUIAdaptor::ButtonPress(int) */

void __thiscall HotUIAdaptor::ButtonPress(HotUIAdaptor *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* HotUIAdaptor::ButtonDepress(int) */

int HotUIAdaptor::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to HotUIAdaptor::ButtonDepress(int) */

void __thiscall HotUIAdaptor::ButtonDepress(HotUIAdaptor *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* HotUIAdaptor::SliderVal(int, double) */

int HotUIAdaptor::SliderVal(int param_1,double param_2)

{
  return param_1;
}


/* non-virtual thunk to HotUIAdaptor::SliderVal(int, double) */

void __thiscall HotUIAdaptor::SliderVal(HotUIAdaptor *this,int param_1,double param_2)

{
  SliderVal((int)this + -0xe0,param_2);
  return;
}


/* HotUIAdaptor::SliderReleased(int, double) */

int HotUIAdaptor::SliderReleased(int param_1,double param_2)

{
  return param_1;
}


/* non-virtual thunk to HotUIAdaptor::SliderReleased(int, double) */

void __thiscall HotUIAdaptor::SliderReleased(HotUIAdaptor *this,int param_1,double param_2)

{
  SliderReleased((int)this + -0xe0,param_2);
  return;
}


/* HotUIAdaptor::onLayoutFinished() */

void HotUIAdaptor::onLayoutFinished(void)

{
  return;
}


/* HotUIAdaptor::onLoadUIView() */

void HotUIAdaptor::onLoadUIView(void)

{
  return;
}


/* HotUIAdaptor::onLinkToUIViewCreated() */

void HotUIAdaptor::onLinkToUIViewCreated(void)

{
  return;
}


/* HotUIAdaptor::IsVisible() */

HotUIAdaptor __thiscall HotUIAdaptor::IsVisible(HotUIAdaptor *this)

{
  return this[0x6c];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::StaticClassInit() */

void HotUIAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_0361cebc,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAdaptor::StaticGetClass() */

long * HotUIAdaptor::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAdaptor::GetClass() const */

long * HotUIAdaptor::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAdaptor::SetParentAndFile(HotUIWidget*, std::string const&) */

void __thiscall
HotUIAdaptor::SetParentAndFile(HotUIAdaptor *this,HotUIWidget *param_1,string *param_2)

{
  thunk_FUN_05475e00(this + 0xf0,param_2);
  *(HotUIWidget **)(this + 0xe8) = param_1;
  return;
}


/* HotUIAdaptor::DeleteWidget() */

void __thiscall HotUIAdaptor::DeleteWidget(HotUIAdaptor *this)

{
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  return;
}


/* HotUIAdaptor::RemoveAndDeleteWidget() */

void __thiscall HotUIAdaptor::RemoveAndDeleteWidget(HotUIAdaptor *this)

{
  char cVar1;
  PrimeText *this_00;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 != (long *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,this), cVar1 != '\0')
     ) {
    (**(code **)(**(long **)(this + 0x18) + 0x68))(*(long **)(this + 0x18),this);
    DeleteWidget(this);
    this_00 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_00);
    return;
  }
  return;
}


/* HotUIAdaptor::addLinkToUIFile(HotUIFile*) */

void __thiscall HotUIAdaptor::addLinkToUIFile(HotUIAdaptor *this,HotUIFile *param_1)

{
  long *plVar1;
  
  *(HotUIFile **)(this + 0xf8) = param_1;
  if (*(code **)(*(long *)this + 0x340) != onLinkToUIViewCreated) {
    (**(code **)(*(long *)this + 0x340))();
    param_1 = *(HotUIFile **)(this + 0xf8);
  }
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(param_1);
  (**(code **)(*plVar1 + 0x158))(plVar1,this[0x6c]);
  return;
}


/* HotUIAdaptor::setWidgetVisibility(std::string const&, bool) */

undefined8 __thiscall
HotUIAdaptor::setWidgetVisibility(HotUIAdaptor *this,string *param_1,bool param_2)

{
  HotUIFile *this_00;
  long *plVar1;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
    return 1;
  }
  return 0;
}


/* HotUIAdaptor::SetDarkenBackground(float) */

void __thiscall HotUIAdaptor::SetDarkenBackground(HotUIAdaptor *this,float param_1)

{
  HotUIFile *this_00;
  Creature *this_01;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (Creature *)HotUIFile::GetEntryPointWidget(this_00);
  Creature::setStateMachineTimeScale(this_01,param_1);
  return;
}


/* HotUIAdaptor::GetEntryPointWidget() const */

void __thiscall HotUIAdaptor::GetEntryPointWidget(HotUIAdaptor *this)

{
  HotUIFile *this_00;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    HotUIFile::GetEntryPointWidget(this_00);
    return;
  }
  return;
}


/* HotUIAdaptor::Update() */

void __thiscall HotUIAdaptor::Update(HotUIAdaptor *this)

{
  char cVar1;
  HotUIWidget *this_00;
  
  if (((this[0x100] == (HotUIAdaptor)0x0) &&
      (this_00 = (HotUIWidget *)GetEntryPointWidget(this), this_00 != (HotUIWidget *)0x0)) &&
     (cVar1 = HotUIWidget::IsDirty(this_00), cVar1 == '\0')) {
    this[0x100] = (HotUIAdaptor)0x1;
    if (*(code **)(*(long *)this + 0x348) != onLayoutFinished) {
      (**(code **)(*(long *)this + 0x348))(this);
      return;
    }
  }
  return;
}


/* HotUIAdaptor::setWidgetDisabled(std::string const&, bool) */

void __thiscall HotUIAdaptor::setWidgetDisabled(HotUIAdaptor *this,string *param_1,bool param_2)

{
  HotUIFile *this_00;
  long *plVar1;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetWidgetByName(this_00,param_1);
  (**(code **)(*plVar1 + 0x188))(plVar1,param_2);
  return;
}


/* HotUIAdaptor::setLabelWidgetText(std::string const&, std::wstring const&) */

undefined1 __thiscall
HotUIAdaptor::setLabelWidgetText(HotUIAdaptor *this,string *param_1,wstring *param_2)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  long *extraout_x0;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUILabel>(this_01);
    if (bVar1) {
      nop();
      (**(code **)(*extraout_x0 + 0x360))();
      return 1;
    }
  }
  return 0;
}


/* HotUIAdaptor::setLabelWidgetTextColor(std::string const&, Sexy::Color const&) */

undefined1 __thiscall
HotUIAdaptor::setLabelWidgetTextColor(HotUIAdaptor *this,string *param_1,Color *param_2)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  long *extraout_x0;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUILabel>(this_01);
    if (bVar1) {
      nop();
      (**(code **)(*extraout_x0 + 0x368))();
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::replaceImageWidgetImage(std::string const&, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
HotUIAdaptor::replaceImageWidgetImage(HotUIAdaptor *this,string *param_1,RtMixedPtrBase *param_3)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
    HotUIImage::SetImage((HotUIImage *)pHVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::replaceImageWidgetImage(std::string const&, std::string const&) */

void __thiscall
HotUIAdaptor::replaceImageWidgetImage(HotUIAdaptor *this,string *param_1,string *param_2)

{
  char cVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  string *extraout_x1;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,param_1);
  if ((pHVar2 != (HotUISeedPacketList *)0x0) && (cVar1 = FUN_0547419c(param_2), cVar1 == '\0')) {
    HotUIHelpers::GetImageFromStringId((HotUIHelpers *)param_2,extraout_x1);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      HotUIImage::SetImage((HotUIImage *)pHVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::setImageWidgetImage(std::string const&, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
HotUIAdaptor::setImageWidgetImage(HotUIAdaptor *this,string *param_1,RtWeakPtrBase *param_3)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIImage *extraout_x0;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUIImage>(this_01);
    if (bVar1) {
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
      HotUIImage::SetImage(extraout_x0,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar2 = 1;
      goto LAB_0361d56c;
    }
  }
  uVar2 = 0;
LAB_0361d56c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::setImageWidgetImage(std::string const&, std::string const&) */

void __thiscall
HotUIAdaptor::setImageWidgetImage(HotUIAdaptor *this,string *param_1,string *param_2)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIImage *extraout_x0;
  string *extraout_x1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUIImage>(this_01);
    if (bVar1) {
      nop();
      HotUIHelpers::GetImageFromStringId((HotUIHelpers *)param_2,extraout_x1);
      HotUIImage::SetImage(extraout_x0,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar2 = 1;
      goto LAB_0361d624;
    }
  }
  uVar2 = 0;
LAB_0361d624:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* HotUIAdaptor::bindHotUIButtonToTouchID(std::string const&, int) */

void __thiscall
HotUIAdaptor::bindHotUIButtonToTouchID(HotUIAdaptor *this,string *param_1,int param_2)

{
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIButton *this_02;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if ((this_01 != (RtObject *)0x0) &&
     (this_02 = Sexy::RtObject::Cast<HotUIButton>(this_01), this_02 != (HotUIButton *)0x0)) {
    HotUIButton::SetListener(this_02,param_2,(ButtonListener *)(this + 0xd8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::setButtonWidgetImage(std::string const&, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
HotUIAdaptor::setButtonWidgetImage
          (HotUIAdaptor *this,string *param_1,RtWeakPtrBase *param_3,RtWeakPtrBase *param_4)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIButton *extraout_x0;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUIButton>(this_01);
    if (bVar1) {
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
      HotUIButton::SetUpImage(extraout_x0,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_4);
      HotUIButton::SetDownImage(extraout_x0,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar2 = 1;
      goto LAB_0361d7a8;
    }
  }
  uVar2 = 0;
LAB_0361d7a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::setButtonWidgetText(std::string const&, std::wstring const&) */

void __thiscall
HotUIAdaptor::setButtonWidgetText(HotUIAdaptor *this,string *param_1,wstring *param_2)

{
  bool bVar1;
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIButton *extraout_x0;
  undefined1 uVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if (this_01 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HotUIButton>(this_01);
    if (bVar1) {
      nop();
      FUN_05477b24(auStack_10,param_2);
      HotUIButton::SetLabel(extraout_x0,auStack_10);
      FUN_05476c50(auStack_10);
      uVar2 = 1;
      goto LAB_0361d880;
    }
  }
  uVar2 = 0;
LAB_0361d880:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::HotUIAdaptor() */

void __thiscall HotUIAdaptor::HotUIAdaptor(HotUIAdaptor *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0666a000;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0666a360;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0666a3a8;
  std::string::string((string *)(this + 0xf0),"");
  nop();
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (HotUIAdaptor)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAdaptor::StaticNew() */

HotUIAdaptor * HotUIAdaptor::StaticNew(void)

{
  HotUIAdaptor *this;
  
  this = ::operator_new(0x120);
  HotUIAdaptor(this);
  return this;
}


/* HotUIAdaptor::HotUIAdaptor(HotUIWidget*, std::string const&) */

void __thiscall HotUIAdaptor::HotUIAdaptor(HotUIAdaptor *this,HotUIWidget *param_1,string *param_2)

{
  HotUIAdaptor(this);
  SetParentAndFile(this,param_1,param_2);
  return;
}


/* HotUIAdaptor::~HotUIAdaptor() */

void __thiscall HotUIAdaptor::~HotUIAdaptor(HotUIAdaptor *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0666a3a8;
  *(undefined ***)this = &PTR_GetClass_0666a000;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0666a360;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar1 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  HotUIManager::UnloadUIFile(this_00,pHVar1);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  std::string::~string((string *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HotUIAdaptor::~HotUIAdaptor() */

void __thiscall HotUIAdaptor::~HotUIAdaptor(HotUIAdaptor *this)

{
  ~HotUIAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::loadUIView() */

void __thiscall HotUIAdaptor::loadUIView(HotUIAdaptor *this)

{
  char cVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((map *)(this + 0xf0));
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    pHVar3 = (HotUIFile *)
             HotUIManager::LoadUIPrefab(psVar2,(map *)(this + 0xf0),(WidgetContainer *)amStack_38);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
    addLinkToUIFile(this,pHVar3);
  }
  if (*(code **)(*(long *)this + 0x338) != onLoadUIView) {
    (**(code **)(*(long *)this + 0x338))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAdaptor::LoadWidget() */

void __thiscall HotUIAdaptor::LoadWidget(HotUIAdaptor *this)

{
  char cVar1;
  string *psVar2;
  HotUIFile *pHVar3;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((map *)(this + 0xf0));
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    pHVar3 = (HotUIFile *)
             HotUIManager::LoadUIPrefab(psVar2,(map *)(this + 0xf0),(WidgetContainer *)amStack_38);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
    addLinkToUIFile(this,pHVar3);
  }
  if (*(code **)(*(long *)this + 0x338) != onLoadUIView) {
    (**(code **)(*(long *)this + 0x338))(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAdaptor::LoadAndAddWidget() */

void __thiscall HotUIAdaptor::LoadAndAddWidget(HotUIAdaptor *this)

{
  PrimeText *this_00;
  
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  LoadWidget(this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  return;
}


/* HotUIAdaptor::registerButton(std::string const&, int, bool, bool) */

void __thiscall
HotUIAdaptor::registerButton
          (HotUIAdaptor *this,string *param_1,int param_2,bool param_3,bool param_4)

{
  HotUIFile *this_00;
  RtObject *this_01;
  HotUIButton *this_02;
  
  this_00 = (HotUIFile *)FUN_0361cd7c(*(undefined8 *)(this + 0xf8));
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,param_1);
  if ((this_01 != (RtObject *)0x0) &&
     (this_02 = Sexy::RtObject::Cast<HotUIButton>(this_01), this_02 != (HotUIButton *)0x0)) {
    HotUIButton::SetListener(this_02,param_2,(ButtonListener *)(this + 0xd8));
    (**(code **)(*(long *)this_02 + 0x188))(this_02,param_3);
    HotUIButton::SetInvisible(this_02,param_4);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x108),param_1);
    return;
  }
  return;
}


/* HotUIAdaptor::SetVisible(bool) */

void __thiscall HotUIAdaptor::SetVisible(HotUIAdaptor *this,bool param_1)

{
  long *plVar1;
  
  Sexy::Widget::SetVisible((Widget *)this,param_1);
  if (*(HotUIFile **)(this + 0xf8) != (HotUIFile *)0x0) {
    plVar1 = (long *)HotUIFile::GetEntryPointWidget(*(HotUIFile **)(this + 0xf8));
    (**(code **)(*plVar1 + 0x158))(plVar1,this[0x6c]);
  }
  return;
}

