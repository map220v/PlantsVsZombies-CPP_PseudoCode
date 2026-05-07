// Class: AdaptorSecurityGourdDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSecurityGourdDialog::StaticClassInit() */

void AdaptorSecurityGourdDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorSecurityGourdDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_0366da9c,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSecurityGourdDialog::StaticGetClass() */

long * AdaptorSecurityGourdDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSecurityGourdDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSecurityGourdDialog::GetClass() const */

long * AdaptorSecurityGourdDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorSecurityGourdDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorSecurityGourdDialog::~AdaptorSecurityGourdDialog() */

void __thiscall
AdaptorSecurityGourdDialog::~AdaptorSecurityGourdDialog(AdaptorSecurityGourdDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_066779b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677d10;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677d58;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x168));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorSecurityGourdDialog::~AdaptorSecurityGourdDialog() */

void __thiscall
AdaptorSecurityGourdDialog::~AdaptorSecurityGourdDialog(AdaptorSecurityGourdDialog *this)

{
  ~AdaptorSecurityGourdDialog(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorSecurityGourdDialog::AdaptorSecurityGourdDialog() */

void __thiscall
AdaptorSecurityGourdDialog::AdaptorSecurityGourdDialog(AdaptorSecurityGourdDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066779b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06677d10;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06677d58;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x128));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x168));
  return;
}


/* AdaptorSecurityGourdDialog::StaticNew() */

AdaptorSecurityGourdDialog * AdaptorSecurityGourdDialog::StaticNew(void)

{
  AdaptorSecurityGourdDialog *this;
  
  this = ::operator_new(0x188);
  AdaptorSecurityGourdDialog(this);
  return this;
}


/* AdaptorSecurityGourdDialog::ButtonDepress(int) */

void __thiscall
AdaptorSecurityGourdDialog::ButtonDepress(AdaptorSecurityGourdDialog *this,int param_1)

{
  bool bVar1;
  function *this_00;
  
  if ((param_1 == 1000) || (param_1 == 1)) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x148));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x148));
    }
    if (param_1 == 1000) {
      AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
      return;
    }
  }
  else if (param_1 == 2) {
    this_00 = (function *)(this + 0x128);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (bVar1) {
LAB_0366dd00:
      std::function<void()>::operator()((function<void()> *)this_00);
      return;
    }
  }
  else if (param_1 == 3) {
    this_00 = (function *)(this + 0x168);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (bVar1) goto LAB_0366dd00;
  }
  return;
}


/* non-virtual thunk to AdaptorSecurityGourdDialog::ButtonDepress(int) */

void __thiscall
AdaptorSecurityGourdDialog::ButtonDepress(AdaptorSecurityGourdDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSecurityGourdDialog::refresh() */

void __thiscall AdaptorSecurityGourdDialog::refresh(AdaptorSecurityGourdDialog *this)

{
  ButtonListener *pBVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0366d95c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_10,"DeclineButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,1,pBVar1);
    std::string::string(asStack_10,"AcceptButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,2,pBVar1);
    Sexy::StrFormat(L"%d ",asStack_10,(ulong)*(uint *)(this + 0x120));
    HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)pHVar2,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"DialogDismiss");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetInvisible((HotUIButton *)pHVar2,true);
    std::string::string(asStack_10,"DialogXButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,1000,pBVar1);
    HotUIButton::SetInvisible((HotUIButton *)pHVar2,true);
    std::string::string(asStack_10,"AddMoreCurrencyButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,3,pBVar1);
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x124));
    HotUIButton::SetLabel((HotUIButton *)pHVar2,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSecurityGourdDialog::onGemCurrencyChanged(int, bool) */

void __thiscall
AdaptorSecurityGourdDialog::onGemCurrencyChanged
          (AdaptorSecurityGourdDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    return;
  }
  *(int *)(this + 0x124) = *(int *)(this + 0x124) + param_1;
  refresh(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorSecurityGourdDialog::onLoadUIView() */

void __thiscall AdaptorSecurityGourdDialog::onLoadUIView(AdaptorSecurityGourdDialog *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"SecurityGourdDialog");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorSecurityGourdDialog::Setup(int, int, std::function<void ()> const&, std::function<void ()>
   const&, std::function<void ()> const&) */

void __thiscall
AdaptorSecurityGourdDialog::Setup
          (AdaptorSecurityGourdDialog *this,int param_1,int param_2,function *param_3,
          function *param_4,function *param_5)

{
  *(int *)(this + 0x124) = param_2;
  *(int *)(this + 0x120) = param_1;
  std::function<void()>::operator=((function<void()> *)(this + 0x128),param_3);
  std::function<void()>::operator=((function<void()> *)(this + 0x148),param_4);
  std::function<void()>::operator=((function<void()> *)(this + 0x168),param_5);
  refresh(this);
  return;
}

