// Class: AdaptorJoustWinStreakDialog


/* AdaptorJoustWinStreakDialog::Close() */

void __thiscall AdaptorJoustWinStreakDialog::Close(AdaptorJoustWinStreakDialog *this)

{
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustWinStreakDialog::~AdaptorJoustWinStreakDialog() */

void __thiscall
AdaptorJoustWinStreakDialog::~AdaptorJoustWinStreakDialog(AdaptorJoustWinStreakDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_066acff0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ad350;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ad398;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustWinStreakDialog::~AdaptorJoustWinStreakDialog() */

void __thiscall
AdaptorJoustWinStreakDialog::~AdaptorJoustWinStreakDialog(AdaptorJoustWinStreakDialog *this)

{
  ~AdaptorJoustWinStreakDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDialog::StaticClassInit() */

void AdaptorJoustWinStreakDialog::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustWinStreakDialog");
    (*pcVar2)(plVar1,asStack_10,FUN_03875930,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDialog::StaticGetClass() */

long * AdaptorJoustWinStreakDialog::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustWinStreakDialog::GetClass() const */

long * AdaptorJoustWinStreakDialog::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustWinStreakDialog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustWinStreakDialog::Setup(RtReflectionDelegate<Sexy::Delegate0> const&) */

void __thiscall
AdaptorJoustWinStreakDialog::Setup(AdaptorJoustWinStreakDialog *this,RtReflectionDelegate *param_1)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x120),param_1);
  return;
}


/* AdaptorJoustWinStreakDialog::AdaptorJoustWinStreakDialog() */

void __thiscall
AdaptorJoustWinStreakDialog::AdaptorJoustWinStreakDialog(AdaptorJoustWinStreakDialog *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066acff0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ad350;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066ad398;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x120));
  return;
}


/* AdaptorJoustWinStreakDialog::StaticNew() */

AdaptorJoustWinStreakDialog * AdaptorJoustWinStreakDialog::StaticNew(void)

{
  AdaptorJoustWinStreakDialog *this;
  
  this = ::operator_new(0x168);
  AdaptorJoustWinStreakDialog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDialog::refresh() */

void __thiscall AdaptorJoustWinStreakDialog::refresh(AdaptorJoustWinStreakDialog *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_03875784(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"ContinueButton");
    this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)this_01,1,(ButtonListener *)(this + 0xd8));
    HotUIAdaptor::SetDarkenBackground((HotUIAdaptor *)this,0.75);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustWinStreakDialog::ButtonDepress(int) */

void __thiscall
AdaptorJoustWinStreakDialog::ButtonDepress(AdaptorJoustWinStreakDialog *this,int param_1)

{
  RtInvokeVariant *pRVar1;
  
  if ((param_1 == 1) &&
     (pRVar1 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x120)),
     pRVar1 != (RtInvokeVariant *)0x0)) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorJoustWinStreakDialog::ButtonDepress(int) */

void __thiscall
AdaptorJoustWinStreakDialog::ButtonDepress(AdaptorJoustWinStreakDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustWinStreakDialog::onLoadUIView() */

void __thiscall AdaptorJoustWinStreakDialog::onLoadUIView(AdaptorJoustWinStreakDialog *this)

{
  HotUIManager *this_00;
  HotUIFile *this_01;
  AdaptorJoustWinStreakDisplay *this_02;
  undefined1 auVar1 [12];
  string asStack_48 [56];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_48,"JoustResultsScreenWinStreak");
  this_01 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_48);
  std::string::~string(asStack_48);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_01);
  std::string::string(asStack_48,"WinStreakHolder");
  HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_48);
  nop();
  std::string::~string(asStack_48);
  nop();
  AdaptorJoustWinStreakDisplay::ShowCheckmarkAnimation(this_02);
  auVar1 = JoustUtils::GetCurrentWinStreak();
  JoustUtils::GetNetworkWinStreakReward(auVar1._0_8_,auVar1._8_4_);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::BattleVictory,auVar1._0_4_,local_10);
  refresh(this);
  LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
            ((LevelOfTheDay_RewardItemType *)asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

