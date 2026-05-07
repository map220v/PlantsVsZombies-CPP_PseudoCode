// Class: VaseBreakerVictoryOutroModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroModule::onResultClosed() */

void __thiscall VaseBreakerVictoryOutroModule::onResultClosed(VaseBreakerVictoryOutroModule *this)

{
  bool bVar1;
  UIWidget *this_00;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 200) != VictoryOutroModule::giveCustomRewards) {
    (**(code **)(*(long *)this + 200))();
  }
  if (*(int *)(this + 0x18) != 3) {
    *(undefined4 *)(this + 0x18) = 3;
    std::string::string(asStack_10,"UIPauseButton");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      UIWidget::SetVisible(this_00,false);
    }
    VictoryOutroModule::awardAllRewards((VictoryOutroModule *)this);
    (**(code **)(*(long *)this + 0xa8))(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroModule::StaticClassInit() */

void VaseBreakerVictoryOutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerVictoryOutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_049808d8,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerVictoryOutroModule::StaticGetClass() */

long * VaseBreakerVictoryOutroModule::StaticGetClass(void)

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
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerVictoryOutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroModule::registerForEvents() */

void __thiscall
VaseBreakerVictoryOutroModule::registerForEvents(VaseBreakerVictoryOutroModule *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  VictoryOutroModule::registerForEvents((VictoryOutroModule *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onResultClosed);
  Sexy::Delegate0::Delegate0<VaseBreakerVictoryOutroModule,void(VaseBreakerVictoryOutroModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ResultClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerVictoryOutroModule::VaseBreakerVictoryOutroModule() */

void __thiscall
VaseBreakerVictoryOutroModule::VaseBreakerVictoryOutroModule(VaseBreakerVictoryOutroModule *this)

{
  VictoryOutroModule::VictoryOutroModule((VictoryOutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06918a40;
  return;
}


/* VaseBreakerVictoryOutroModule::StaticNew() */

VaseBreakerVictoryOutroModule * VaseBreakerVictoryOutroModule::StaticNew(void)

{
  VaseBreakerVictoryOutroModule *this;
  
  this = ::operator_new(0x90);
  VaseBreakerVictoryOutroModule(this);
  return this;
}


/* VaseBreakerVictoryOutroModule::~VaseBreakerVictoryOutroModule() */

void __thiscall
VaseBreakerVictoryOutroModule::~VaseBreakerVictoryOutroModule(VaseBreakerVictoryOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06918a40;
  VictoryOutroModule::~VictoryOutroModule((VictoryOutroModule *)this);
  return;
}


/* VaseBreakerVictoryOutroModule::~VaseBreakerVictoryOutroModule() */

void __thiscall
VaseBreakerVictoryOutroModule::~VaseBreakerVictoryOutroModule(VaseBreakerVictoryOutroModule *this)

{
  ~VaseBreakerVictoryOutroModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroModule::requestGiftBoxReward() */

void __thiscall
VaseBreakerVictoryOutroModule::requestGiftBoxReward(VaseBreakerVictoryOutroModule *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1472];
  string asStack_728 [1824];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a8f);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_0497fce0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_728,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,5);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroModule::onCollectableFinishCollected(Collectable*) */

void VaseBreakerVictoryOutroModule::onCollectableFinishCollected(Collectable *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==((string *)(lVar2 + 8),"giftbox");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (bVar1) {
    requestGiftBoxReward((VaseBreakerVictoryOutroModule *)param_1);
  }
  else {
    VictoryOutroModule::onEndOfLevelRewardCollected((VictoryOutroModule *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

