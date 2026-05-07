// Class: ActionLostPurchaseOrders


/* ActionLostPurchaseOrders::OnNotifyRetreiveLostOrderEnd() */

void __thiscall
ActionLostPurchaseOrders::OnNotifyRetreiveLostOrderEnd(ActionLostPurchaseOrders *this)

{
  this[9] = (ActionLostPurchaseOrders)0x1;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionLostPurchaseOrders::~ActionLostPurchaseOrders() */

void __thiscall ActionLostPurchaseOrders::~ActionLostPurchaseOrders(ActionLostPurchaseOrders *this)

{
  *(undefined ***)this = &PTR_GetClass_06859440;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionLostPurchaseOrders::~ActionLostPurchaseOrders() */

void __thiscall ActionLostPurchaseOrders::~ActionLostPurchaseOrders(ActionLostPurchaseOrders *this)

{
  ~ActionLostPurchaseOrders(this);
  AK::FreeHook(this);
  return;
}


/* ActionLostPurchaseOrders::StaticGetClass() */

long * ActionLostPurchaseOrders::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionLostPurchaseOrders",uVar2,StaticNew);
  return sClass;
}


/* ActionLostPurchaseOrders::GetClass() const */

long * ActionLostPurchaseOrders::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionLostPurchaseOrders",uVar2,StaticNew);
  return sClass;
}


/* ActionLostPurchaseOrders::ActionLostPurchaseOrders() */

void __thiscall ActionLostPurchaseOrders::ActionLostPurchaseOrders(ActionLostPurchaseOrders *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859440;
  return;
}


/* ActionLostPurchaseOrders::StaticNew() */

ActionLostPurchaseOrders * ActionLostPurchaseOrders::StaticNew(void)

{
  ActionLostPurchaseOrders *this;
  
  this = ::operator_new(0x18);
  ActionLostPurchaseOrders(this);
  return this;
}


/* ActionLostPurchaseOrders::CreateIfNeed(bool&) */

ActionLostPurchaseOrders * ActionLostPurchaseOrders::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ActionLostPurchaseOrders *this;
  
  cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
  if (cVar1 != '\0') {
    this = ::operator_new(0x18);
    *(undefined8 *)this = 0;
    this[8] = (ActionLostPurchaseOrders)0x0;
    this[9] = (ActionLostPurchaseOrders)0x0;
    this[10] = (ActionLostPurchaseOrders)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    ActionLostPurchaseOrders(this);
    return this;
  }
  return (ActionLostPurchaseOrders *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionLostPurchaseOrders::Start() */

void __thiscall ActionLostPurchaseOrders::Start(ActionLostPurchaseOrders *this)

{
  undefined *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  long lVar3;
  PurchaseBroker *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gMessageRouter;
  if (cVar1 == '\0') {
    OnNotifyRetreiveLostOrderEnd(this);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnNotifyRetreiveLostOrderEnd);
    Sexy::Delegate0::Delegate0<ActionLostPurchaseOrders,void(ActionLostPurchaseOrders::*)()>
              (aDStack_38,aCStack_50);
    MessageRouter::Subscribe
              ((MessageRouter *)this_00,Message::NotifyRetreiveLostOrderEnd,aDStack_38);
    p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(p_Var2);
    if (lVar3 != 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      PurchaseBroker::requestLostPayment(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

