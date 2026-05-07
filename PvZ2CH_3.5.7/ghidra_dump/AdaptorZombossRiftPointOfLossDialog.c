// Class: AdaptorZombossRiftPointOfLossDialog


/* AdaptorZombossRiftPointOfLossDialog::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorZombossRiftPointOfLossDialog::OnBackButtonPressed(AdaptorZombossRiftPointOfLossDialog *this)

{
  (**(code **)(*(long *)this + 0x318))(this,1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZombossRiftPointOfLossDialog::StaticClassInit() */

void AdaptorZombossRiftPointOfLossDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorZombossRiftPointOfLossDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_0369b1d0,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorZombossRiftPointOfLossDialog::StaticGetClass() */

long * AdaptorZombossRiftPointOfLossDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorZombossRiftPointOfLossDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorZombossRiftPointOfLossDialog::GetClass() const */

long * AdaptorZombossRiftPointOfLossDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorZombossRiftPointOfLossDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorZombossRiftPointOfLossDialog::~AdaptorZombossRiftPointOfLossDialog() */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::~AdaptorZombossRiftPointOfLossDialog
          (AdaptorZombossRiftPointOfLossDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0667e770;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667ead0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667eb18;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x168));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorZombossRiftPointOfLossDialog::~AdaptorZombossRiftPointOfLossDialog() */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::~AdaptorZombossRiftPointOfLossDialog
          (AdaptorZombossRiftPointOfLossDialog *this)

{
  ~AdaptorZombossRiftPointOfLossDialog(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorZombossRiftPointOfLossDialog::AdaptorZombossRiftPointOfLossDialog() */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::AdaptorZombossRiftPointOfLossDialog
          (AdaptorZombossRiftPointOfLossDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0667e770;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0667ead0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0667eb18;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x128));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x168));
  return;
}


/* AdaptorZombossRiftPointOfLossDialog::StaticNew() */

AdaptorZombossRiftPointOfLossDialog * AdaptorZombossRiftPointOfLossDialog::StaticNew(void)

{
  AdaptorZombossRiftPointOfLossDialog *this;
  
  this = ::operator_new(400);
  AdaptorZombossRiftPointOfLossDialog(this);
  return this;
}


/* AdaptorZombossRiftPointOfLossDialog::ButtonDepress(int) */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::ButtonDepress
          (AdaptorZombossRiftPointOfLossDialog *this,int param_1)

{
  bool bVar1;
  function *this_00;
  
  if (param_1 == 1) {
    this_00 = (function *)(this + 0x148);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (!bVar1) {
      return;
    }
  }
  else if (param_1 == 2) {
    this_00 = (function *)(this + 0x128);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (!bVar1) {
      return;
    }
  }
  else {
    if (param_1 != 3) {
      return;
    }
    this_00 = (function *)(this + 0x168);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (!bVar1) {
      return;
    }
  }
  std::function<void()>::operator()((function<void()> *)this_00);
  return;
}


/* non-virtual thunk to AdaptorZombossRiftPointOfLossDialog::ButtonDepress(int) */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::ButtonDepress
          (AdaptorZombossRiftPointOfLossDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZombossRiftPointOfLossDialog::isLossFromZombie() */

void AdaptorZombossRiftPointOfLossDialog::isLossFromZombie(void)

{
  char cVar1;
  undefined8 uVar2;
  Zombie *this;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x29);
  do {
    cVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!(bool)cVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_0369b4fc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    cVar1 = Zombie::IsWinningZombie(this);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0369b4fc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZombossRiftPointOfLossDialog::refresh() */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::refresh(AdaptorZombossRiftPointOfLossDialog *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  wchar_t *pwVar4;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0369b090(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_10,"DeclineButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,pBVar1);
    std::string::string(asStack_10,"AcceptButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,2,pBVar1);
    Sexy::StrFormat(L"%d ",asStack_10,(ulong)*(uint *)(this + 0x120));
    HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)pHVar3,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"AddMoreCurrencyButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,3,pBVar1);
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x124));
    HotUIButton::SetLabel((HotUIButton *)pHVar3,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05478178(awStack_30,L"[ZOMBOSS_RIFT_POL_USES]",asStack_10);
    nop();
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x188));
    TodReplaceString(awStack_30,L"{USED}",(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x18c));
    TodReplaceString(awStack_28,L"{TOTAL}",(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"UsageLabel");
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_20);
    std::string::~string(asStack_10);
    nop();
    cVar2 = isLossFromZombie();
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"DialogTitle");
      TodStringTranslate(L"[ZOMBOSS_RIFT_POL_DIALOG_TITLE_TIME]");
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
      FUN_05476c50(awStack_18);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"DialogContentsLabel");
      pwVar4 = L"[ZOMBOSS_RIFT_POL_DIALOG_BODY_TIME]";
    }
    else {
      std::string::string(asStack_10,"DialogTitle");
      TodStringTranslate(L"[ZOMBOSS_RIFT_POL_DIALOG_TITLE_ZOMBIE]");
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
      FUN_05476c50(awStack_18);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"DialogContentsLabel");
      pwVar4 = L"[ZOMBOSS_RIFT_POL_DIALOG_BODY_ZOMBIE]";
    }
    TodStringTranslate(pwVar4);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,asStack_10,awStack_18);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_10);
    nop();
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorZombossRiftPointOfLossDialog::Setup(int, int, std::function<void ()> const&,
   std::function<void ()> const&, std::function<void ()> const&, int, int) */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::Setup
          (AdaptorZombossRiftPointOfLossDialog *this,int param_1,int param_2,function *param_3,
          function *param_4,function *param_5,int param_6,int param_7)

{
  *(int *)(this + 0x124) = param_2;
  *(int *)(this + 0x120) = param_1;
  std::function<void()>::operator=((function<void()> *)(this + 0x128),param_3);
  std::function<void()>::operator=((function<void()> *)(this + 0x148),param_4);
  std::function<void()>::operator=((function<void()> *)(this + 0x168),param_5);
  *(int *)(this + 0x188) = param_6;
  *(int *)(this + 0x18c) = param_7;
  refresh(this);
  return;
}


/* AdaptorZombossRiftPointOfLossDialog::onGemCurrencyChanged(int, bool) */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::onGemCurrencyChanged
          (AdaptorZombossRiftPointOfLossDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    return;
  }
  *(int *)(this + 0x124) = *(int *)(this + 0x124) + param_1;
  refresh(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorZombossRiftPointOfLossDialog::onLoadUIView() */

void __thiscall
AdaptorZombossRiftPointOfLossDialog::onLoadUIView(AdaptorZombossRiftPointOfLossDialog *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"ZombossRiftPointOfLossDialog");
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

