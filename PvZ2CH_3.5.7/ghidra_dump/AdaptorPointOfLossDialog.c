// Class: AdaptorPointOfLossDialog


/* AdaptorPointOfLossDialog::onGemCurrencyChanged(int) */

void __thiscall
AdaptorPointOfLossDialog::onGemCurrencyChanged(AdaptorPointOfLossDialog *this,int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)this + 0x350);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) + param_1;
  (*pcVar1)();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPointOfLossDialog::StaticClassInit() */

void AdaptorPointOfLossDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorPointOfLossDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_0385b98c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPointOfLossDialog::StaticGetClass() */

long * AdaptorPointOfLossDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPointOfLossDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPointOfLossDialog::GetClass() const */

long * AdaptorPointOfLossDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorPointOfLossDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorPointOfLossDialog::~AdaptorPointOfLossDialog() */

void __thiscall AdaptorPointOfLossDialog::~AdaptorPointOfLossDialog(AdaptorPointOfLossDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_066a85d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a8938;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a8980;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x208));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x1c0));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x178));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x130));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorPointOfLossDialog::~AdaptorPointOfLossDialog() */

void __thiscall AdaptorPointOfLossDialog::~AdaptorPointOfLossDialog(AdaptorPointOfLossDialog *this)

{
  ~AdaptorPointOfLossDialog(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorPointOfLossDialog::AdaptorPointOfLossDialog() */

void __thiscall AdaptorPointOfLossDialog::AdaptorPointOfLossDialog(AdaptorPointOfLossDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066a85d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a8938;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066a8980;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x130));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x178));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x1c0));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x208));
  return;
}


/* AdaptorPointOfLossDialog::StaticNew() */

AdaptorPointOfLossDialog * AdaptorPointOfLossDialog::StaticNew(void)

{
  AdaptorPointOfLossDialog *this;
  
  this = ::operator_new(0x250);
  AdaptorPointOfLossDialog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPointOfLossDialog::refresh() */

void __thiscall AdaptorPointOfLossDialog::refresh(AdaptorPointOfLossDialog *this)

{
  ButtonListener *pBVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0385b7dc(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_10,"AcceptGemsButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,2,pBVar1);
    Sexy::StrFormat(L"%d ",asStack_10,(ulong)*(uint *)(this + 0x120));
    HotUIPurchaseButton::SetCostLabel((HotUIPurchaseButton *)pHVar2,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"AcceptAdButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,3,pBVar1);
    if ((this[0x128] == (AdaptorPointOfLossDialog)0x0) &&
       (plVar3 = *(long **)(pHVar2 + 0x20), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,pHVar2);
    }
    std::string::string(asStack_10,"DeclineButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar2,1,pBVar1);
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
    HotUIButton::SetListener((HotUIButton *)pHVar2,4,pBVar1);
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x124));
    HotUIButton::SetLabel((HotUIButton *)pHVar2,asStack_10);
    FUN_05476c50(asStack_10);
    HotUIAdaptor::SetDarkenBackground((HotUIAdaptor *)this,0.75);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorPointOfLossDialog::Setup(int, int, bool, RtReflectionDelegate<Sexy::Delegate0> const&,
   RtReflectionDelegate<Sexy::Delegate0> const&, RtReflectionDelegate<Sexy::Delegate0> const&,
   RtReflectionDelegate<Sexy::Delegate0> const&) */

void __thiscall
AdaptorPointOfLossDialog::Setup
          (AdaptorPointOfLossDialog *this,int param_1,int param_2,bool param_3,
          RtReflectionDelegate *param_4,RtReflectionDelegate *param_5,RtReflectionDelegate *param_6,
          RtReflectionDelegate *param_7)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(int *)(this + 0x124) = param_2;
  *(int *)(this + 0x120) = param_1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x130),param_4);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x178),param_5);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x1c0),param_6);
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x208),param_7);
  this[0x128] = (AdaptorPointOfLossDialog)param_3;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGemCurrencyChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AdaptorPointOfLossDialog,void(AdaptorPointOfLossDialog::*)(int)>>
            ((MessageRouter *)puVar1,Message::GemCurrencyChanged,&local_40);
  (**(code **)(*(long *)this + 0x350))(this);
  return;
}


/* AdaptorPointOfLossDialog::ButtonDepress(int) */

void __thiscall AdaptorPointOfLossDialog::ButtonDepress(AdaptorPointOfLossDialog *this,int param_1)

{
  RtInvokeVariant *pRVar1;
  
  if ((param_1 == 1000) || (param_1 == 1)) {
    pRVar1 = (RtInvokeVariant *)
             RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                       ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x1c0));
    if (pRVar1 != (RtInvokeVariant *)0x0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
    }
    if (param_1 == 1000) {
      AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
      return;
    }
  }
  else {
    if (param_1 == 2) {
      pRVar1 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x130));
    }
    else if (param_1 == 3) {
      pRVar1 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x178));
    }
    else {
      if (param_1 != 4) {
        return;
      }
      pRVar1 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x208));
    }
    if (pRVar1 != (RtInvokeVariant *)0x0) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to AdaptorPointOfLossDialog::ButtonDepress(int) */

void __thiscall AdaptorPointOfLossDialog::ButtonDepress(AdaptorPointOfLossDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorPointOfLossDialog::onLoadUIView() */

void __thiscall AdaptorPointOfLossDialog::onLoadUIView(AdaptorPointOfLossDialog *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  char *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"PointOfLossDialog");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  (**(code **)(*(long *)this + 0x350))(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Pause");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

