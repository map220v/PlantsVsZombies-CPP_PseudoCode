// Class: AdaptorPerkSelectionDialog


/* AdaptorPerkSelectionDialog::SetOnCloseAction(std::function<void ()>) */

void __thiscall
AdaptorPerkSelectionDialog::SetOnCloseAction(AdaptorPerkSelectionDialog *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x120),param_2);
  return;
}


/* AdaptorPerkSelectionDialog::onRepickButtonPressed() */

void AdaptorPerkSelectionDialog::onRepickButtonPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::StaticClassInit() */

void AdaptorPerkSelectionDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPerkSelectionDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_036da5d8,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkSelectionDialog::StaticGetClass() */

long * AdaptorPerkSelectionDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkSelectionDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPerkSelectionDialog::GetClass() const */

long * AdaptorPerkSelectionDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPerkSelectionDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::showGemBank(bool) */

void __thiscall
AdaptorPerkSelectionDialog::showGemBank(AdaptorPerkSelectionDialog *this,bool param_1)

{
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIGemBank");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::onLayoutFinished() */

void __thiscall AdaptorPerkSelectionDialog::onLayoutFinished(AdaptorPerkSelectionDialog *this)

{
  HotUIFile *this_00;
  AdaptorSelectedPerksWidget *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036da280(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SelectedPerksWidget");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  AdaptorSelectedPerksWidget::OnLayoutFinalized(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkSelectionDialog::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorPerkSelectionDialog::OnBackButtonPressed(AdaptorPerkSelectionDialog *this)

{
  bool bVar1;
  
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::DeselectAllPerks();
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x140));
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)(this + 0x140));
  }
  showGemBank(this,false);
  return 1;
}


/* AdaptorPerkSelectionDialog::AdaptorPerkSelectionDialog() */

void __thiscall
AdaptorPerkSelectionDialog::AdaptorPerkSelectionDialog(AdaptorPerkSelectionDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_06684470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066847d0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684818;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x120));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  *(undefined8 *)(this + 0x178) = 0;
  return;
}


/* AdaptorPerkSelectionDialog::StaticNew() */

AdaptorPerkSelectionDialog * AdaptorPerkSelectionDialog::StaticNew(void)

{
  AdaptorPerkSelectionDialog *this;
  
  this = ::operator_new(0x180);
  AdaptorPerkSelectionDialog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::onLoadUIView() */

void __thiscall AdaptorPerkSelectionDialog::onLoadUIView(AdaptorPerkSelectionDialog *this)

{
  undefined *puVar1;
  char cVar2;
  HotUIManager *this_00;
  HotUIFile *pHVar3;
  char *__s;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = RiftUtils::IsPlayingZombossLevel();
  if (cVar2 == '\0') {
    __s = "PerkSelectionDialog";
  }
  else {
    __s = "PerkSelectionDialogZomboss";
  }
  std::string::string(asStack_40,__s);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkSelected);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<std::string&,bool,Sexy::Point&,Sexy::CBMemberTranslatorX<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)(std::string,bool,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PerkSelected,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkSelectionChanged);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<std::string&,Sexy::CBMemberTranslatorX<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)(std::string)>>
            ((MessageRouter *)puVar1,Message::PerkDeselected,&local_80);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::refresh() */

void __thiscall AdaptorPerkSelectionDialog::refresh(AdaptorPerkSelectionDialog *this)

{
  uint uVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  PennyPerkMgr *this_02;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036da280(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"ContinueButton");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_02 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar1 = PennyPerkMgr::GetTotalCostOfSelectedPerks(this_02);
    if ((int)uVar1 < 1) {
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_01);
      FUN_05478178(asStack_10,L"[PAY_YET_PLAY]",auStack_18);
      HotUIButton::SetLabel((HotUIButton *)this_01,asStack_10);
      FUN_05476c50(asStack_10);
      nop();
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aade68);
      HotUIButton::SetUpImage((HotUIButton *)this_01,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadfb0);
      HotUIButton::SetDownImage((HotUIButton *)this_01,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    else {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadec8);
      HotUIButton::SetUpImage((HotUIButton *)this_01,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadf38);
      HotUIButton::SetDownImage((HotUIButton *)this_01,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_01);
      Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar1);
      HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)this_01,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::onPerkSelected(std::string, bool, Sexy::Point&) */

void AdaptorPerkSelectionDialog::onPerkSelected(long param_1)

{
  uint uVar1;
  HotUIFile *this;
  HotUISeedPacketList *this_00;
  PennyPerkMgr *this_01;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_036da280(*(undefined8 *)(param_1 + 0xf8));
  if (this != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"ContinueButton");
    this_00 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_01 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar1 = PennyPerkMgr::GetTotalCostOfSelectedPerks(this_01);
    if ((int)uVar1 < 1) {
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_00);
      FUN_05478178(asStack_10,L"[PAY_YET_PLAY]",auStack_18);
      HotUIButton::SetLabel((HotUIButton *)this_00,asStack_10);
      FUN_05476c50(asStack_10);
      nop();
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aade68);
      HotUIButton::SetUpImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadfb0);
      HotUIButton::SetDownImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    else {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadec8);
      HotUIButton::SetUpImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadf38);
      HotUIButton::SetDownImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_00);
      Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar1);
      HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::onPerkSelectionChanged(std::string) */

void AdaptorPerkSelectionDialog::onPerkSelectionChanged(long param_1)

{
  uint uVar1;
  HotUIFile *this;
  HotUISeedPacketList *this_00;
  PennyPerkMgr *this_01;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (HotUIFile *)FUN_036da280(*(undefined8 *)(param_1 + 0xf8));
  if (this != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"ContinueButton");
    this_00 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_01 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar1 = PennyPerkMgr::GetTotalCostOfSelectedPerks(this_01);
    if ((int)uVar1 < 1) {
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_00);
      FUN_05478178(asStack_10,L"[PAY_YET_PLAY]",auStack_18);
      HotUIButton::SetLabel((HotUIButton *)this_00,asStack_10);
      FUN_05476c50(asStack_10);
      nop();
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aade68);
      HotUIButton::SetUpImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadfb0);
      HotUIButton::SetDownImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    else {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadec8);
      HotUIButton::SetUpImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aadf38);
      HotUIButton::SetDownImage((HotUIButton *)this_00,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      HotUIPurchaseButton::ClearCostLabel((HotUIPurchaseButton *)this_00);
      Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar1);
      HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)this_00,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::finalizePerks() */

void __thiscall AdaptorPerkSelectionDialog::finalizePerks(AdaptorPerkSelectionDialog *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PennyPerkMgr *this_00;
  ProfileMgr *pPVar4;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar5;
  long lVar6;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  ICloudRequestSTDCallbackFunction *this_05;
  AdaptorPerkSelectionDialog *local_60;
  wstring awStack_58 [8];
  code *local_50;
  undefined8 local_48;
  string asStack_40 [24];
  function afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  iVar2 = PennyPerkMgr::GetTotalCostOfSelectedPerks(this_00);
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  iVar3 = PlayerInfo::GetNumGems(this_01,false);
  if (iVar3 < iVar2) {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_58,(wstring *)&local_60);
      std::string::string(asStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar5 = (Image *)StringHelper::ToImage(asStack_40,false);
      UIMessageBox::SetBackground(this_02,pIVar5);
      std::string::~string(asStack_40);
      nop();
      lVar6 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar6 + 0xd8,&local_50);
      FUN_05476c50(&local_50);
      FUN_05476c50(awStack_58);
      FUN_05476c50((wstring *)&local_60);
    }
  }
  else if (iVar2 / 5 - 1U < 2) {
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
    local_50 = OnServerGemCallBack;
    local_48 = 0;
    local_60 = this;
    std::
    bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
              ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_60,
               (_Placeholder *)&DAT_0576d300);
    std::function<void(bool)>::
    function<std::_Bind<std::_Mem_fn<void(AdaptorPerkSelectionDialog::*)(bool_const&)>(AdaptorPerkSelectionDialog*,std::_Placeholder<1>)>,void>
              ((function<void(bool)> *)afStack_28,asStack_40);
    this_05 = ::operator_new(0x30);
    ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(this_05,afStack_28);
    DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)awStack_58,(DTouchLayer *)this_05);
    INetworkMsgProcess::ICloudRequestUseGem(this_04,0xcc51,iVar2 / 5,(DRefPtr *)awStack_58,1,false);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)awStack_58);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  }
  else {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::RequestSave(pPVar4);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    (**(code **)(*(long *)this + 0x158))(this,0);
    HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x120));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x120));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkSelectionDialog::onPlayButtonPressed() */

void __thiscall AdaptorPerkSelectionDialog::onPlayButtonPressed(AdaptorPerkSelectionDialog *this)

{
  PrimeText *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  finalizePerks(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::~AdaptorPerkSelectionDialog() */

void __thiscall
AdaptorPerkSelectionDialog::~AdaptorPerkSelectionDialog(AdaptorPerkSelectionDialog *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06684470;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066847d0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06684818;
  if (*(long *)(this + 0x178) != 0) {
    plVar3 = *(long **)(*(long *)(this + 0x178) + 0x20);
    (**(code **)(*plVar3 + 0x68))(plVar3);
    if (*(long **)(this + 0x178) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x178) + 0x18))();
      *(undefined8 *)(this + 0x178) = 0;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  this_01 = (HotUIFile *)FUN_036da280(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"InnerScrollArea");
  plVar3 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  (**(code **)(*plVar3 + 0x80))(plVar3,0,0);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::clear
            ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::~vector
            ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)this_00);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x140));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkSelectionDialog::~AdaptorPerkSelectionDialog() */

void __thiscall
AdaptorPerkSelectionDialog::~AdaptorPerkSelectionDialog(AdaptorPerkSelectionDialog *this)

{
  ~AdaptorPerkSelectionDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::CanEitherPerkInfoWidgetSelectable() */

void __thiscall
AdaptorPerkSelectionDialog::CanEitherPerkInfoWidgetSelectable(AdaptorPerkSelectionDialog *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_036db840(uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::verifySelectedPerksAndContinue() */

void __thiscall
AdaptorPerkSelectionDialog::verifySelectedPerksAndContinue(AdaptorPerkSelectionDialog *this)

{
  LawnApp *this_00;
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  WorldDataManager *this_01;
  long lVar5;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar6;
  char *pcVar7;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_68,uVar4);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar5 = WorldDataManager::FindEventByLevelName(this_01,asStack_68);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar5 + 0x18);
  }
  uVar4 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetSelectedPerkWarnings((PennyPerkMgr *)awStack_60,uVar4,uVar3);
  bVar1 = CanEitherPerkInfoWidgetSelectable(this);
  bVar2 = FUN_054765e8(awStack_60);
  this_00 = gLawnApp;
  if (bVar2 < bVar1) {
    FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
    this_02 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(auStack_58,L"[REPICK_BUTTON]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRepickButtonPressed);
    Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[DIALOG_STRING_YES]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlayButtonPressed);
    Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetHeaderFont(this_02,pPVar6,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Penny_Tech_Warning_Panel");
  }
  else {
    finalizePerks(this);
  }
  FUN_05476c50(awStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPerkSelectionDialog::ButtonDepress(int) */

void __thiscall
AdaptorPerkSelectionDialog::ButtonDepress(AdaptorPerkSelectionDialog *this,int param_1)

{
  AdaptorDifficultyModifierFullScrollWidget *this_00;
  
  if (param_1 == 1) {
    verifySelectedPerksAndContinue(this);
    showGemBank(this,false);
    return;
  }
  if (param_1 == 2) {
    (**(code **)(*(long *)this + 0x148))();
  }
  else if (param_1 == 3) {
    this_00 = ::operator_new(0x140);
    AdaptorDifficultyModifierFullScrollWidget::AdaptorDifficultyModifierFullScrollWidget(this_00);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorPerkSelectionDialog::ButtonDepress(int) */

void __thiscall
AdaptorPerkSelectionDialog::ButtonDepress(AdaptorPerkSelectionDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::Close() */

void __thiscall AdaptorPerkSelectionDialog::Close(AdaptorPerkSelectionDialog *this)

{
  LawnApp *this_00;
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  WorldDataManager *this_01;
  long lVar5;
  PVZ2UIDialog *this_02;
  PrimeTypeface *pPVar6;
  char *pcVar7;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_68,uVar4);
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar5 = WorldDataManager::FindEventByLevelName(this_01,asStack_68);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar5 + 0x18);
  }
  uVar4 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetSelectedPerkWarnings((PennyPerkMgr *)awStack_60,uVar4,uVar3);
  bVar1 = CanEitherPerkInfoWidgetSelectable(this);
  bVar2 = FUN_054765e8(awStack_60);
  this_00 = gLawnApp;
  if (bVar2 < bVar1) {
    FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
    this_02 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(auStack_58,L"[REPICK_BUTTON]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRepickButtonPressed);
    Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[DIALOG_STRING_YES]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlayButtonPressed);
    Sexy::Delegate0::Delegate0<AdaptorPerkSelectionDialog,void(AdaptorPerkSelectionDialog::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_02,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetHeaderFont(this_02,pPVar6,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_02,true,0.5);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_UI_Rift_Penny_Tech_Warning_Panel");
  }
  else {
    finalizePerks(this);
  }
  FUN_05476c50(awStack_60);
  std::string::~string(asStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::createPerkScrollList() */

void __thiscall AdaptorPerkSelectionDialog::createPerkScrollList(AdaptorPerkSelectionDialog *this)

{
  HotUIAdaptor *pHVar1;
  undefined4 uVar2;
  HotUIFile *this_00;
  RiftUtils *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  AdaptorPerkInfoWidget *this_02;
  GridItemPoolEntry *pGVar5;
  ulong uVar6;
  ulong uVar7;
  HotUIAdaptor *local_38;
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036da280(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_20,"InnerScrollArea");
  HotUIFile::GetWidgetByName(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  nop();
  RiftUtils::GetAllCurrentPerkData(this_01);
  uVar2 = RiftUtils::GetCurrentMapEventSubType();
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  FUN_036dcbac(uVar3,uVar4,uVar2);
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_036da298(local_20,local_18);
    if (uVar6 <= uVar7) break;
    this_02 = ::operator_new(0x160);
    AdaptorPerkInfoWidget::AdaptorPerkInfoWidget(this_02);
    local_38 = (HotUIAdaptor *)this_02;
    std::vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>>::push_back
              ((vector<AdaptorPerkInfoWidget*,std::allocator<AdaptorPerkInfoWidget*>> *)
               (this + 0x160),(AdaptorPerkInfoWidget **)&local_38);
    pHVar1 = local_38;
    std::string::string(asStack_30,"PerkInfoWidget");
    HotUIAdaptor::SetParentAndFile(pHVar1,(HotUIWidget *)this_01,asStack_30);
    std::string::~string(asStack_30);
    nop();
    AdaptorPerkInfoWidget::SetInfoType((AdaptorPerkInfoWidget *)local_38,0);
    HotUIAdaptor::LoadWidget(local_38);
    pHVar1 = local_38;
    pGVar5 = (GridItemPoolEntry *)FUN_036da2a4(local_20,uVar7);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)asStack_30,pGVar5);
    AdaptorPerkInfoWidget::SetPerk((AdaptorPerkInfoWidget *)pHVar1,asStack_30);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_30);
    uVar7 = uVar7 + 1;
  }
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::onLinkToUIViewCreated() */

void __thiscall AdaptorPerkSelectionDialog::onLinkToUIViewCreated(AdaptorPerkSelectionDialog *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  undefined4 uVar3;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar4;
  undefined8 uVar5;
  AdaptorRiftDifficultyList *pAVar6;
  undefined8 uVar7;
  WorldDataManager *this_01;
  long lVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036da280(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_10,"ContinueButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,1,pBVar1);
    cVar2 = RiftUtils::IsPlayingZombossLevel();
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"BackButton");
      pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      HotUIButton::SetListener((HotUIButton *)pHVar4,2,pBVar1);
    }
    std::string::string(asStack_10,"DifficultyModifierButton");
    pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar4,3,pBVar1);
    std::string::string(asStack_10,"DifficultyModifierWidget");
    uVar5 = HotUIFile::GetWidgetByName(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pAVar6 = ::operator_new(0x160);
    AdaptorRiftDifficultyList::AdaptorRiftDifficultyList(pAVar6);
    *(AdaptorRiftDifficultyList **)(this + 0x178) = pAVar6;
    uVar7 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_18,uVar7);
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar8 = WorldDataManager::FindEventByLevelName(this_01,asStack_18);
    if (lVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar8 + 0x18);
    }
    pAVar6 = *(AdaptorRiftDifficultyList **)(this + 0x178);
    std::string::string(asStack_10,"RiftDifficultyListNarrow");
    AdaptorRiftDifficultyList::Configure(pAVar6,uVar5,asStack_18,uVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x178));
    createPerkScrollList(this);
    showGemBank(this,true);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPerkSelectionDialog::OnServerGemCallBack(bool const&) */

void __thiscall
AdaptorPerkSelectionDialog::OnServerGemCallBack(AdaptorPerkSelectionDialog *this,bool *param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PennyPerkMgr *this_01;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long lVar9;
  TGALogMgr *pTVar10;
  ulong uVar11;
  size_t __n;
  string asStack_298 [8];
  string asStack_290 [8];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  TGAPennyPursuitData aTStack_258 [32];
  undefined1 auStack_238 [24];
  string asStack_220 [8];
  string asStack_218 [48];
  string asStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 != false) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::RequestSave(this_00);
    this_01 = (PennyPerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar3 = PennyPerkMgr::GetTotalCostOfSelectedPerks(this_01);
    __n = (size_t)uVar3;
    if (0 < (int)uVar3) {
      std::string::string(asStack_298,"");
      nop();
      Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
      PennyPerkMgr::GetSelectedPerks();
      uVar11 = 0;
      while( true ) {
        uVar6 = local_288;
        uVar5 = FUN_036da298(local_288,local_280);
        if (uVar5 <= uVar11) break;
        if (uVar11 != 0) {
          FUN_05475ad8(asStack_298,&DAT_05593348);
          uVar6 = local_288;
        }
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036da2a4(uVar6,uVar11);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        thunk_FUN_054757c0(asStack_298,lVar9 + 0x10);
        uVar11 = uVar11 + 1;
      }
      uVar6 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      FUN_05475d88(asStack_290,uVar6);
      puVar1 = gMessageRouter;
      FUN_05475d88(asStack_1e8,asStack_298);
      uVar6 = FUN_0547429c(asStack_290);
      MessageRouter::Broadcast<int,std::string_const&,char_const*,int,std::string,char_const*>
                ((MessageRouter *)puVar1,Message::PerksPurchased,__n,asStack_1e8,uVar6);
      std::string::~string(asStack_1e8);
      TGAPennyPursuitData::TGAPennyPursuitData(aTStack_258);
      DString::DString((DString *)asStack_1e8,9);
      pcVar7 = (char *)DString::c_str((DString *)asStack_1e8);
      std::string::append((string *)aTStack_258,pcVar7,__n);
      DString::~DString((DString *)asStack_1e8);
      DString::DString((DString *)asStack_1e8,uVar3);
      pcVar7 = (char *)DString::c_str((DString *)asStack_1e8);
      std::string::append(asStack_220,pcVar7,__n);
      DString::~DString((DString *)asStack_1e8);
      DString::DString((DString *)asStack_1e8,0);
      pcVar7 = (char *)DString::c_str((DString *)asStack_1e8);
      std::string::append(asStack_218,pcVar7,__n);
      DString::~DString((DString *)asStack_1e8);
      std::string::string(asStack_1e8,"");
      uVar4 = operator|(0x10,8);
      FUN_05462618(auStack_178,asStack_1e8,uVar4);
      std::string::~string(asStack_1e8);
      nop();
      Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
      PennyPerkMgr::GetSelectedPerks();
      uVar11 = 0;
      while( true ) {
        uVar6 = local_270;
        uVar5 = FUN_036da298(local_270,local_268);
        if (uVar5 <= uVar11) break;
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036da2a4(uVar6,uVar11);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        uVar6 = FUN_0545ec84(auStack_168,lVar9 + 0x10);
        FUN_054603b8(uVar6,&DAT_05593348);
        uVar11 = uVar11 + 1;
      }
      FUN_05462824(asStack_1e8,auStack_178);
      FUN_05474278(auStack_238,asStack_1e8);
      std::string::~string(asStack_1e8);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)asStack_1e8,aTStack_258);
      TGALogMgr::LogPennyPursuit(pTVar10,asStack_1e8);
      TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)asStack_1e8);
      std::vector<PerkData,std::allocator<PerkData>>::~vector
                ((vector<PerkData,std::allocator<PerkData>> *)&local_270);
      FUN_054617bc(auStack_178);
      TGAPennyPursuitData::~TGAPennyPursuitData(aTStack_258);
      std::string::~string(asStack_290);
      std::vector<PerkData,std::allocator<PerkData>>::~vector
                ((vector<PerkData,std::allocator<PerkData>> *)&local_288);
      std::string::~string(asStack_298);
    }
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    (**(code **)(*(long *)this + 0x158))(this,0);
    HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x120));
    if (bVar2) {
      std::function<void()>::operator()((function<void()> *)(this + 0x120));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

