// Class: AdaptorNewPVPTrainingScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::StaticClassInit() */

void AdaptorNewPVPTrainingScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPTrainingScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034be228,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::StaticGetClass() */

long * AdaptorNewPVPTrainingScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPTrainingScreen::GetClass() const */

long * AdaptorNewPVPTrainingScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPTrainingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onShowInfo() */

void AdaptorNewPVPTrainingScreen::onShowInfo(void)

{
  long lVar1;
  AdaptorNewPvPHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0xd0));
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  AdaptorNewPvPHowToPlayScreen::AdaptorNewPvPHowToPlayScreen(this);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::RepositionBoard() */

void __thiscall AdaptorNewPVPTrainingScreen::RepositionBoard(AdaptorNewPVPTrainingScreen *this)

{
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x140) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::RepositionEntries(*(AdaptorNewPVPTrainingBoard **)(this + 0x140));
    return;
  }
  return;
}


/* AdaptorNewPVPTrainingScreen::~AdaptorNewPVPTrainingScreen() */

void __thiscall
AdaptorNewPVPTrainingScreen::~AdaptorNewPVPTrainingScreen(AdaptorNewPVPTrainingScreen *this)

{
  long *plVar1;
  
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664af58;
  *(undefined ***)this = &PTR_GetClass_0664abb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664af10;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long *)(this + 0x140) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x140) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x140) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x140) + 0x18))();
    }
    *(undefined8 *)(this + 0x140) = 0;
  }
  if (*(long *)(this + 0x148) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x148) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x148) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x148) + 0x18))();
    }
    *(undefined8 *)(this + 0x148) = 0;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x158));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPTrainingScreen::~AdaptorNewPVPTrainingScreen() */

void __thiscall
AdaptorNewPVPTrainingScreen::~AdaptorNewPVPTrainingScreen(AdaptorNewPVPTrainingScreen *this)

{
  ~AdaptorNewPVPTrainingScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPTrainingScreen::onLoadUIView(AdaptorNewPVPTrainingScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"NewPVPTrainingScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::enableFuncBtns(bool) */

void __thiscall
AdaptorNewPVPTrainingScreen::enableFuncBtns(AdaptorNewPVPTrainingScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"InfoBtn");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x188))(pHVar1,!param_1);
  std::string::string(asStack_10,"BackToMenu");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x188))(pHVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::IsWaitingForEdit() */

void __thiscall AdaptorNewPVPTrainingScreen::IsWaitingForEdit(AdaptorNewPVPTrainingScreen *this)

{
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x140) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::IsWaitingForEdit(*(AdaptorNewPVPTrainingBoard **)(this + 0x140));
    return;
  }
  return;
}


/* AdaptorNewPVPTrainingScreen::UnlockBtns(bool) */

void __thiscall
AdaptorNewPVPTrainingScreen::UnlockBtns(AdaptorNewPVPTrainingScreen *this,bool param_1)

{
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x140) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(this + 0x140),param_1);
    return;
  }
  return;
}


/* AdaptorNewPVPTrainingScreen::onLevelUpBack() */

void __thiscall AdaptorNewPVPTrainingScreen::onLevelUpBack(AdaptorNewPVPTrainingScreen *this)

{
  enableFuncBtns(this,true);
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x140) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::Unselect(*(AdaptorNewPVPTrainingBoard **)(this + 0x140));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::UpdateCacheBattleInfos(int, int) */

void __thiscall
AdaptorNewPVPTrainingScreen::UpdateCacheBattleInfos
          (AdaptorNewPVPTrainingScreen *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034cef3c(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *piVar4 = param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::IsInCacheBattleInfos(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::IsInCacheBattleInfos(AdaptorNewPVPTrainingScreen *this,int param_1)

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
             *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034cf1cc(uVar2,uVar3,param_1);
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
/* AdaptorNewPVPTrainingScreen::ApplyTrainingPacketMotion(HotUIWidgetTrainingPacket*,
   HotUIWidgetTrainingPacket*) */

void __thiscall
AdaptorNewPVPTrainingScreen::ApplyTrainingPacketMotion
          (AdaptorNewPVPTrainingScreen *this,HotUIWidgetTrainingPacket *param_1,
          HotUIWidgetTrainingPacket *param_2)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  NewPVPTrainingPacketInfo *pNVar2;
  float fVar3;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  undefined1 local_40 [8];
  int local_38 [2];
  string asStack_30 [4];
  int local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  (**(code **)(*(long *)param_2 + 0xd0))(local_38,param_2);
  fVar3 = (float)local_38[0];
  (**(code **)(*(long *)param_2 + 0xd0))(asStack_30,param_2);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,fVar3,(float)local_2c);
  (**(code **)(*(long *)param_1 + 0xd0))(local_38,param_1);
  (**(code **)(*(long *)param_1 + 0xd0))(asStack_30,param_1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)local_38[0],(float)local_2c);
  std::string::string(asStack_30,"TrainingPacketLowerSwitchMotion");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
  std::string::~string(asStack_30);
  nop();
  pNVar2 = (NewPVPTrainingPacketInfo *)HotUIWidgetTrainingPacket::GetInfo(param_2);
  HotUIWidgetTrainingPacket::SetInfo((HotUIWidgetTrainingPacket *)pHVar1,pNVar2);
  (**(code **)(*(long *)pHVar1 + 0x1a8))(pHVar1,(int)local_50,(int)fStack_4c);
  HotUIWidgetTrainingPacketMotion::SetMotionInterpolate
            ((HotUIWidgetTrainingPacketMotion *)0x3f000000,pHVar1,param_2,(FastCurve *)&local_50,
             local_40,5);
  FUN_034b6878(afStack_28,this,pHVar1);
  HotUIWidgetTrainingPacketMotion::SetOnFinishAction
            ((HotUIWidgetTrainingPacketMotion *)pHVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::string(asStack_30,"TrainingPacketUpperSwitchMotion");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_30);
  std::string::~string(asStack_30);
  nop();
  pNVar2 = (NewPVPTrainingPacketInfo *)HotUIWidgetTrainingPacket::GetInfo(param_1);
  HotUIWidgetTrainingPacket::SetInfo((HotUIWidgetTrainingPacket *)pHVar1,pNVar2);
  (**(code **)(*(long *)pHVar1 + 0x1a8))(pHVar1,(int)local_48,(int)fStack_44);
  HotUIWidgetTrainingPacketMotion::SetMotionInterpolate
            ((HotUIWidgetTrainingPacketMotion *)0x3f000000,pHVar1,param_1,(FastCurve *)&local_48,
             local_38,5);
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::AdaptorNewPVPTrainingScreen() */

void __thiscall
AdaptorNewPVPTrainingScreen::AdaptorNewPVPTrainingScreen(AdaptorNewPVPTrainingScreen *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0664abb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664af10;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664af58;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x120));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPNetworkResponseReceived);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTraingingPacketSelected);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,bool,Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(bool,int,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyTraingingPacketSelected,&local_70);
  return;
}


/* AdaptorNewPVPTrainingScreen::StaticNew() */

AdaptorNewPVPTrainingScreen * AdaptorNewPVPTrainingScreen::StaticNew(void)

{
  AdaptorNewPVPTrainingScreen *this;
  
  this = ::operator_new(0x170);
  AdaptorNewPVPTrainingScreen(this);
  return this;
}


/* AdaptorNewPVPTrainingScreen::GetUpperSelectedEntry() */

void __thiscall
AdaptorNewPVPTrainingScreen::GetUpperSelectedEntry(AdaptorNewPVPTrainingScreen *this)

{
  AdaptorNewPVPTrainingBoard::GetUpperSelectedEntry(*(AdaptorNewPVPTrainingBoard **)(this + 0x148));
  return;
}


/* AdaptorNewPVPTrainingScreen::GetEntryConfigById(int) */

undefined * __thiscall
AdaptorNewPVPTrainingScreen::GetEntryConfigById(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  undefined *puVar1;
  
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x140) != (AdaptorNewPVPTrainingBoard *)0x0) {
    puVar1 = (undefined *)
             AdaptorNewPVPTrainingBoard::GetEntryConfigById
                       (*(AdaptorNewPVPTrainingBoard **)(this + 0x140),param_1);
    return puVar1;
  }
  return &DAT_06aa3ca0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::createLevelUpScreen(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::createLevelUpScreen(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  AdaptorNewPVPLevelUpScreen *this_00;
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  *(int *)(this + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x160);
  AdaptorNewPVPLevelUpScreen::AdaptorNewPVPLevelUpScreen(this_00);
  puVar1 = (undefined8 *)GetEntryConfigById(this,param_1);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_38 = puVar1[2];
  uStack_30 = puVar1[3];
  AdaptorNewPVPLevelUpResultScreen::SetConfig
            ((AdaptorNewPVPLevelUpResultScreen *)this_00,
             (AdaptorNewPVPTrainingEntryConfig *)&local_48);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorNewPVPLevelUpResultScreen::ApplyPacketInfo((AdaptorNewPVPLevelUpResultScreen *)this_00);
  FUN_034b68d4(afStack_28,this);
  AdaptiveMessageBox::SetConfirmFunction((AdaptiveMessageBox *)this_00,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  enableFuncBtns(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::onNotifyTraingingPacketSelected(bool, int, bool) */

void AdaptorNewPVPTrainingScreen::onNotifyTraingingPacketSelected
               (bool param_1,int param_2,bool param_3)

{
  char cVar1;
  
  if (((param_2 & 0xffU) == 0) &&
     (cVar1 = IsWaitingForEdit((AdaptorNewPVPTrainingScreen *)(ulong)param_1), cVar1 == '\0')) {
    createLevelUpScreen((AdaptorNewPVPTrainingScreen *)(ulong)param_1,(uint)param_3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::createLevelUpResultScreen(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::createLevelUpResultScreen
          (AdaptorNewPVPTrainingScreen *this,int param_1)

{
  AdaptorNewPVPLevelUpResultScreen *this_00;
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x140);
  AdaptorNewPVPLevelUpResultScreen::AdaptorNewPVPLevelUpResultScreen(this_00);
  puVar1 = (undefined8 *)GetEntryConfigById(this,param_1);
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  local_18 = puVar1[2];
  uStack_10 = puVar1[3];
  AdaptorNewPVPLevelUpResultScreen::SetConfig(this_00,(AdaptorNewPVPTrainingEntryConfig *)&local_28)
  ;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  AdaptorNewPVPLevelUpResultScreen::ApplyPacketInfo(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::GetUpperEntryConfigById(int) */

undefined * __thiscall
AdaptorNewPVPTrainingScreen::GetUpperEntryConfigById(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  undefined *puVar1;
  
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    puVar1 = (undefined *)
             AdaptorNewPVPTrainingBoard::GetEntryConfigById
                       (*(AdaptorNewPVPTrainingBoard **)(this + 0x148),param_1);
    return puVar1;
  }
  return &DAT_06aa3ca0;
}


/* AdaptorNewPVPTrainingScreen::onPacketMotionFinished(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::onPacketMotionFinished(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),true);
    AdaptorNewPVPTrainingBoard::SelectEntryById
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x148),param_1);
    return;
  }
  return;
}


/* AdaptorNewPVPTrainingScreen::SetCacheBattleInfos(std::vector<int, std::allocator<int> > const&)
    */

void __thiscall
AdaptorNewPVPTrainingScreen::SetCacheBattleInfos(AdaptorNewPVPTrainingScreen *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x158),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onEdit() */

void __thiscall AdaptorNewPVPTrainingScreen::onEdit(AdaptorNewPVPTrainingScreen *this)

{
  NewPVPMgr *this_00;
  vector *pvVar1;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar1 = (vector *)NewPVPMgr::GetInBattleZombies(this_00);
  SetCacheBattleInfos(this,pvVar1);
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::WaitingForEdit(*(AdaptorNewPVPTrainingBoard **)(this + 0x148));
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),true);
    AdaptorNewPVPTrainingBoard::SelectEntry(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),0);
  }
  this_01 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"SaveButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
  std::string::string(asStack_10,"EditButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::addTrainingEntry(AdaptorNewPVPTrainingConfig&) */

void __thiscall
AdaptorNewPVPTrainingScreen::addTrainingEntry
          (AdaptorNewPVPTrainingScreen *this,AdaptorNewPVPTrainingConfig *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  NewPVPMgr *pNVar4;
  vector *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> avStack_40 [24];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar5 = (vector *)NewPVPMgr::GetZombiePacketInfos(pNVar4);
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::vector
            (avStack_40,pvVar5);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    iVar1 = *piVar6;
    if (iVar1 != -1) {
      pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      iVar3 = NewPVPMgr::GetZombieRarityById(pNVar4,iVar1);
      if (iVar3 != -1) {
        AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
                  ((AdaptorNewPVPTrainingEntryConfig *)&local_28);
        local_28 = iVar1;
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_20 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar4,iVar1);
        local_c = NewPVPUtils::GetZombieCost(iVar1,local_20);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_24 = NewPVPMgr::GetZombieRarityById(pNVar4,iVar1);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_18 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar4,iVar1);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_14 = NewPVPMgr::GetLevelUpPieceRequired(pNVar4,local_24,local_20 + 1);
        puVar7 = (undefined4 *)FUN_034b0538(*(undefined8 *)(piVar6 + 2),0);
        local_1c = *puVar7;
        local_10 = 0 < local_20;
        std::
        vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>::
        push_back((vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
                   *)param_1,(AdaptorNewPVPTrainingEntryConfig *)&local_28);
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
  }
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::buildTrainingInfo() */

void AdaptorNewPVPTrainingScreen::buildTrainingInfo(void)

{
  AdaptorNewPVPTrainingScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addTrainingEntry(in_x0,(AdaptorNewPVPTrainingConfig *)in_x8);
  AdaptorNewPVPTrainingConfig::Order((AdaptorNewPVPTrainingConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onEditBack() */

void __thiscall AdaptorNewPVPTrainingScreen::onEditBack(AdaptorNewPVPTrainingScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  AdaptorNewPVPTrainingConfig aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 0x350))();
    buildTrainingInfo();
    AdaptorNewPVPTrainingBoard::SetConfig(*(AdaptorNewPVPTrainingBoard **)(this + 0x140),aAStack_20)
    ;
    AdaptorNewPVPTrainingBoard::FinishEdit(*(AdaptorNewPVPTrainingBoard **)(this + 0x140));
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_20);
  }
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::Unselect(*(AdaptorNewPVPTrainingBoard **)(this + 0x148));
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),false);
  }
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)aAStack_20,"SaveButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)aAStack_20);
  std::string::~string((string *)aAStack_20);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
  std::string::string((string *)aAStack_20,"EditButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)aAStack_20);
  std::string::~string((string *)aAStack_20);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::onConfirmSavedResult() */

void __thiscall AdaptorNewPVPTrainingScreen::onConfirmSavedResult(AdaptorNewPVPTrainingScreen *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  onEditBack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::addUpperTrainingEntry(AdaptorNewPVPTrainingConfig&) */

void __thiscall
AdaptorNewPVPTrainingScreen::addUpperTrainingEntry
          (AdaptorNewPVPTrainingScreen *this,AdaptorNewPVPTrainingConfig *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  NewPVPMgr *pNVar4;
  vector *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> avStack_40 [24];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar5 = (vector *)NewPVPMgr::GetZombiePacketInfos(pNVar4);
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::vector
            (avStack_40,pvVar5);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    iVar1 = *piVar6;
    if (iVar1 != -1) {
      pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      cVar3 = NewPVPMgr::IsInCurrentBattleInfo(pNVar4,iVar1);
      if (cVar3 != '\0') {
        AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
                  ((AdaptorNewPVPTrainingEntryConfig *)&local_28);
        local_28 = iVar1;
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_20 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar4,iVar1);
        local_c = NewPVPUtils::GetZombieCost(iVar1,local_20);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_24 = NewPVPMgr::GetZombieRarityById(pNVar4,iVar1);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_18 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar4,iVar1);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        local_14 = NewPVPMgr::GetLevelUpPieceRequired(pNVar4,local_24,local_20);
        puVar7 = (undefined4 *)FUN_034b0538(*(undefined8 *)(piVar6 + 2),0);
        local_1c = *puVar7;
        local_10 = 0 < local_20;
        std::
        vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>::
        push_back((vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
                   *)param_1,(AdaptorNewPVPTrainingEntryConfig *)&local_28);
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
  }
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::buildUpperTrainingInfo() */

void AdaptorNewPVPTrainingScreen::buildUpperTrainingInfo(void)

{
  AdaptorNewPVPTrainingScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addUpperTrainingEntry(in_x0,(AdaptorNewPVPTrainingConfig *)in_x8);
  AdaptorNewPVPTrainingConfig::Order((AdaptorNewPVPTrainingConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::Reload() */

void __thiscall AdaptorNewPVPTrainingScreen::Reload(AdaptorNewPVPTrainingScreen *this)

{
  AdaptorNewPVPTrainingConfig aAStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 0x350))();
    buildTrainingInfo();
    AdaptorNewPVPTrainingBoard::SetConfig(*(AdaptorNewPVPTrainingBoard **)(this + 0x140),aAStack_20)
    ;
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_20);
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 0x350))();
    buildUpperTrainingInfo();
    AdaptorNewPVPTrainingBoard::SetConfig(*(AdaptorNewPVPTrainingBoard **)(this + 0x148),aAStack_20)
    ;
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::setup() */

void __thiscall AdaptorNewPVPTrainingScreen::setup(AdaptorNewPVPTrainingScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  WidgetContainer *pWVar4;
  AdaptorNewPVPTrainingBoard *this_01;
  AdaptorNewPVPUpperTrainingBoard *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  AdaptorNewPVPTrainingConfig aAStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_20,"BackToMenu");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0,pBVar1);
    std::string::string(asStack_20,"EditButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,pBVar1);
    std::string::string(asStack_20,"InfoBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,3,pBVar1);
    std::string::string(asStack_20,"SaveButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,2,pBVar1);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
    std::string::string(asStack_20,"TrainingBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_01 = ::operator_new(0x160);
    AdaptorNewPVPTrainingBoard::AdaptorNewPVPTrainingBoard(this_01);
    *(AdaptorNewPVPTrainingBoard **)(this + 0x140) = this_01;
    FUN_034ad878(this_01 + 0x158,this);
    buildTrainingInfo();
    AdaptorNewPVPTrainingBoard::Configure
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x140),pWVar4,aAStack_38);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x140));
    std::string::string(asStack_20,"UpperTrainingBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_02 = ::operator_new(0x160);
    AdaptorNewPVPUpperTrainingBoard::AdaptorNewPVPUpperTrainingBoard(this_02);
    *(AdaptorNewPVPUpperTrainingBoard **)(this + 0x148) = this_02;
    FUN_034ad878(this_02 + 0x158,this);
    buildUpperTrainingInfo();
    AdaptorNewPVPTrainingBoard::Configure
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x148),pWVar4,
               (AdaptorNewPVPTrainingConfig *)asStack_20);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x148));
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    if ((this_04 != (PlayerInfo *)0x0) &&
       (cVar2 = PlayerInfo::GetNewPVPTrainingFirstEntered(this_04), cVar2 == '\0')) {
      NewPVPUtils::ShowArmyHowToPlay();
      PlayerInfo::SetNewPVPTrainingFirstEntered(this_04,true);
    }
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig
              ((AdaptorNewPVPTrainingConfig *)asStack_20);
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPTrainingScreen::onLinkToUIViewCreated(AdaptorNewPVPTrainingScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  WidgetContainer *pWVar4;
  AdaptorNewPVPTrainingBoard *this_01;
  AdaptorNewPVPUpperTrainingBoard *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  AdaptorNewPVPTrainingConfig aAStack_38 [24];
  string asStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_20,"BackToMenu");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0,pBVar1);
    std::string::string(asStack_20,"EditButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,pBVar1);
    std::string::string(asStack_20,"InfoBtn");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,3,pBVar1);
    std::string::string(asStack_20,"SaveButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,2,pBVar1);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
    std::string::string(asStack_20,"TrainingBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_01 = ::operator_new(0x160);
    AdaptorNewPVPTrainingBoard::AdaptorNewPVPTrainingBoard(this_01);
    *(AdaptorNewPVPTrainingBoard **)(this + 0x140) = this_01;
    FUN_034ad878(this_01 + 0x158,this);
    buildTrainingInfo();
    AdaptorNewPVPTrainingBoard::Configure
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x140),pWVar4,aAStack_38);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x140));
    std::string::string(asStack_20,"UpperTrainingBoardHolder");
    pWVar4 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_20);
    std::string::~string(asStack_20);
    nop();
    this_02 = ::operator_new(0x160);
    AdaptorNewPVPUpperTrainingBoard::AdaptorNewPVPUpperTrainingBoard(this_02);
    *(AdaptorNewPVPUpperTrainingBoard **)(this + 0x148) = this_02;
    FUN_034ad878(this_02 + 0x158,this);
    buildUpperTrainingInfo();
    AdaptorNewPVPTrainingBoard::Configure
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x148),pWVar4,
               (AdaptorNewPVPTrainingConfig *)asStack_20);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x148));
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    if ((this_04 != (PlayerInfo *)0x0) &&
       (cVar2 = PlayerInfo::GetNewPVPTrainingFirstEntered(this_04), cVar2 == '\0')) {
      NewPVPUtils::ShowArmyHowToPlay();
      PlayerInfo::SetNewPVPTrainingFirstEntered(this_04,true);
    }
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig
              ((AdaptorNewPVPTrainingConfig *)asStack_20);
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_38);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::addUnlockedTrainingEntry(AdaptorNewPVPTrainingConfig&, int) */

void __thiscall
AdaptorNewPVPTrainingScreen::addUnlockedTrainingEntry
          (AdaptorNewPVPTrainingScreen *this,AdaptorNewPVPTrainingConfig *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  NewPVPMgr *pNVar6;
  vector *pvVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 local_50;
  undefined8 local_48;
  vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> avStack_40 [24];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar7 = (vector *)NewPVPMgr::GetZombiePacketInfos(pNVar6);
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::vector
            (avStack_40,pvVar7);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar3) {
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    iVar1 = *piVar8;
    if (iVar1 != -1) {
      pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      iVar4 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar6,iVar1);
      cVar2 = IsInCacheBattleInfos(this,iVar1);
      if ((cVar2 == '\0') &&
         (piVar9 = (int *)FUN_034b0538(*(undefined8 *)(piVar8 + 2),0), *piVar9 == param_2)) {
        pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        iVar5 = NewPVPMgr::GetZombieRarityById(pNVar6,iVar1);
        if (iVar5 != -1) {
          AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
                    ((AdaptorNewPVPTrainingEntryConfig *)&local_28);
          local_28 = iVar1;
          local_20 = iVar4;
          local_c = NewPVPUtils::GetZombieCost(iVar1,iVar4);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_24 = NewPVPMgr::GetZombieRarityById(pNVar6,iVar1);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_18 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar6,iVar1);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_14 = NewPVPMgr::GetLevelUpPieceRequired(pNVar6,local_24,local_20 + 1);
          puVar10 = (undefined4 *)FUN_034b0538(*(undefined8 *)(piVar8 + 2),0);
          local_1c = *puVar10;
          local_10 = 0 < local_20;
          std::
          vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
          ::push_back((vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
                       *)param_1,(AdaptorNewPVPTrainingEntryConfig *)&local_28);
        }
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
  }
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::buildUnlockedTrainingInfo(int) */

void AdaptorNewPVPTrainingScreen::buildUnlockedTrainingInfo(int param_1)

{
  int in_w1;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addUnlockedTrainingEntry
            ((AdaptorNewPVPTrainingScreen *)(ulong)(uint)param_1,
             (AdaptorNewPVPTrainingConfig *)in_x8,in_w1);
  AdaptorNewPVPTrainingConfig::Order((AdaptorNewPVPTrainingConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::BuildUnlockedTrainingInfo(int) */

void AdaptorNewPVPTrainingScreen::BuildUnlockedTrainingInfo(int param_1)

{
  ulong uVar1;
  AdaptorNewPVPTrainingConfig aAStack_20 [24];
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(long **)(uVar1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(uVar1 + 0x140) + 0x350))();
    buildUnlockedTrainingInfo(param_1);
    AdaptorNewPVPTrainingBoard::SetConfig
              (*(AdaptorNewPVPTrainingBoard **)(uVar1 + 0x140),aAStack_20);
    AdaptorNewPVPTrainingBoard::WaitingForEdit(*(AdaptorNewPVPTrainingBoard **)(uVar1 + 0x140));
    AdaptorNewPVPTrainingBoard::UnlockBtns(*(AdaptorNewPVPTrainingBoard **)(uVar1 + 0x140),true);
    AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(aAStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::addUnlockedTrainingEntry(AdaptorNewPVPTrainingConfig&) */

void __thiscall
AdaptorNewPVPTrainingScreen::addUnlockedTrainingEntry
          (AdaptorNewPVPTrainingScreen *this,AdaptorNewPVPTrainingConfig *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  NewPVPMgr *pNVar6;
  vector *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 local_50;
  undefined8 local_48;
  vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> avStack_40 [24];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar7 = (vector *)NewPVPMgr::GetZombiePacketInfos(pNVar6);
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::vector
            (avStack_40,pvVar7);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    iVar1 = *piVar8;
    if (iVar1 != -1) {
      pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      iVar4 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar6,iVar1);
      pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      cVar3 = NewPVPMgr::IsInCurrentBattleInfo(pNVar6,iVar1);
      if (cVar3 == '\0') {
        pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        iVar5 = NewPVPMgr::GetZombieRarityById(pNVar6,iVar1);
        if (iVar5 != -1) {
          AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
                    ((AdaptorNewPVPTrainingEntryConfig *)&local_28);
          local_28 = iVar1;
          local_20 = iVar4;
          local_c = NewPVPUtils::GetZombieCost(iVar1,iVar4);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_24 = NewPVPMgr::GetZombieRarityById(pNVar6,iVar1);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_18 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar6,iVar1);
          pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          local_14 = NewPVPMgr::GetLevelUpPieceRequired(pNVar6,local_24,local_20 + 1);
          puVar9 = (undefined4 *)FUN_034b0538(*(undefined8 *)(piVar8 + 2),0);
          local_1c = *puVar9;
          local_10 = 0 < local_20;
          std::
          vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
          ::push_back((vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
                       *)param_1,(AdaptorNewPVPTrainingEntryConfig *)&local_28);
        }
      }
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_50);
  }
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::buildUnlockedTrainingInfo() */

void AdaptorNewPVPTrainingScreen::buildUnlockedTrainingInfo(void)

{
  AdaptorNewPVPTrainingScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addUnlockedTrainingEntry(in_x0,(AdaptorNewPVPTrainingConfig *)in_x8);
  AdaptorNewPVPTrainingConfig::Order((AdaptorNewPVPTrainingConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onSavedResult(bool) */

void __thiscall
AdaptorNewPVPTrainingScreen::onSavedResult(AdaptorNewPVPTrainingScreen *this,bool param_1)

{
  LawnApp *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  char *__s;
  NewPVPMgr *this_01;
  vector *pvVar3;
  undefined4 *puVar4;
  ulong uVar5;
  TGALogMgr *pTVar6;
  PVZ2UIDialog *pPVar7;
  undefined1 *__n;
  ulong uVar8;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  string asStack_240 [8];
  wstring awStack_238 [8];
  undefined8 local_230;
  undefined8 local_228;
  Delegate0 aDStack_218 [48];
  TGALuckyChestData aTStack_1e8 [32];
  undefined1 auStack_1c8 [24];
  DString aDStack_1b0 [56];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    TGALuckyChestData::TGALuckyChestData(aTStack_1e8);
    __n = auStack_168;
    DString::DString(aDStack_1b0,4);
    __s = (char *)DString::c_str(aDStack_1b0);
    std::string::append((string *)aTStack_1e8,__s,(size_t)__n);
    DString::~DString(aDStack_1b0);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pvVar3 = (vector *)NewPVPMgr::GetInBattleZombies(this_01);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_230,pvVar3);
    std::string::string(asStack_240,"");
    nop();
    std::string::string((string *)aDStack_1b0,"");
    FUN_05462980(auStack_178,aDStack_1b0);
    std::string::~string((string *)aDStack_1b0);
    nop();
    uVar8 = 0;
    while( true ) {
      uVar1 = local_230;
      uVar5 = FUN_034ad994(local_230,local_228);
      if (uVar5 <= uVar8) break;
      puVar4 = (undefined4 *)FUN_034ad9ac(uVar1,uVar8);
      FUN_0546065c(auStack_168,*puVar4);
      FUN_05462824(aDStack_1b0,auStack_178);
      thunk_FUN_054757c0(asStack_240,aDStack_1b0);
      std::string::~string((string *)aDStack_1b0);
      std::string::string((string *)aDStack_1b0,"");
      FUN_05462980(auStack_178,aDStack_1b0);
      std::string::~string((string *)aDStack_1b0);
      nop();
      FUN_05475ad8(asStack_240,&DAT_05594620);
      uVar8 = uVar8 + 1;
    }
    thunk_FUN_05475e00(auStack_1c8,asStack_240);
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)aDStack_1b0,(TGAPlantSpecialOfferData *)aTStack_1e8);
    TGALogMgr::LogNewPVPPlus(pTVar6,aDStack_1b0);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aDStack_1b0);
    this_00 = gLawnApp;
    FUN_05478178(awStack_238,L"[NEW_PVP_TRAINING_SAVE_SUCCESS_TITLE]",auStack_250);
    FUN_05478178(aDStack_1b0,L"[NEW_PVP_TRAINING_SAVE_SUCCESS_TEXT]",auStack_248);
    pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_238,(wstring *)aDStack_1b0);
    FUN_05476c50(aDStack_1b0);
    nop();
    FUN_05476c50(awStack_238);
    nop();
    FUN_05478178(awStack_238,L"[BUTTON_OK]",auStack_248);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onConfirmSavedResult);
    Sexy::Delegate0::Delegate0<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)()>
              (aDStack_218,aDStack_1b0);
    PVZ2UIDialog::AddButton(pPVar7,awStack_238,aDStack_218,0);
    FUN_05476c50(awStack_238);
    nop();
    std::string::~string(asStack_240);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_230);
    FUN_054617bc(auStack_178);
    TGALuckyChestData::~TGALuckyChestData(aTStack_1e8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onLevelUpResult(bool) */

void __thiscall
AdaptorNewPVPTrainingScreen::onLevelUpResult(AdaptorNewPVPTrainingScreen *this,bool param_1)

{
  int iVar1;
  NewPVPMgr *this_00;
  char *pcVar2;
  TGALogMgr *pTVar3;
  size_t in_x2;
  TGALuckyChestData aTStack_78 [40];
  string asStack_50 [8];
  string asStack_48 [8];
  DString aDStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar1 = NewPVPMgr::GetCurrentZombiePacketLevel(this_00,*(int *)(this + 0x150));
    TGALuckyChestData::TGALuckyChestData(aTStack_78);
    DString::DString(aDStack_40,5);
    pcVar2 = (char *)DString::c_str(aDStack_40);
    std::string::append((string *)aTStack_78,pcVar2,in_x2);
    DString::~DString(aDStack_40);
    DString::DString(aDStack_40,*(int *)(this + 0x150));
    pcVar2 = (char *)DString::c_str(aDStack_40);
    std::string::append(asStack_50,pcVar2,in_x2);
    DString::~DString(aDStack_40);
    DString::DString(aDStack_40,iVar1);
    pcVar2 = (char *)DString::c_str(aDStack_40);
    std::string::append(asStack_48,pcVar2,in_x2);
    DString::~DString(aDStack_40);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
              ((TGAPlantSpecialOfferData *)aDStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
    TGALogMgr::LogNewPVPPlus(pTVar3,aDStack_40);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aDStack_40);
    Reload(this);
    createLevelUpResultScreen(this,*(int *)(this + 0x150));
    TGALuckyChestData::~TGALuckyChestData(aTStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
AdaptorNewPVPTrainingScreen::onNewPVPNetworkResponseReceived
          (AdaptorNewPVPTrainingScreen *this,int param_1,int param_2)

{
  if (param_1 == 8) {
    if (param_2 == 2) {
      onSavedResult(this,true);
      return;
    }
  }
  else if ((param_1 == 9) && (param_2 == 2)) {
    onLevelUpResult(this,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPTrainingScreen::onSave() */

void __thiscall AdaptorNewPVPTrainingScreen::onSave(AdaptorNewPVPTrainingScreen *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  NewPVPMgr *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  if (*(AdaptorNewPVPTrainingBoard **)(this + 0x148) != (AdaptorNewPVPTrainingBoard *)0x0) {
    AdaptorNewPVPTrainingBoard::GetEntriesIds
              (*(AdaptorNewPVPTrainingBoard **)(this + 0x148),(vector *)avStack_38);
  }
  uVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)avStack_38);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = NewPVPMgr::GetCurrentBattleIndex(this_00);
  NewPVPMgr::RequestSaveZombieBattleInfo(uVar2,avStack_20,uVar1);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPTrainingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::ButtonDepress(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  bool bVar1;
  
  switch(param_1) {
  case 0:
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x120));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x120));
      return;
    }
    break;
  case 1:
    onEdit(this);
    return;
  case 2:
    onSave(this);
    return;
  case 3:
    onShowInfo();
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPTrainingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPTrainingScreen::ButtonDepress(AdaptorNewPVPTrainingScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

