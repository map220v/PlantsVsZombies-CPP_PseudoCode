// Class: UIHeadshot


/* UIHeadshot::~UIHeadshot() */

void __thiscall UIHeadshot::~UIHeadshot(UIHeadshot *this)

{
  *(undefined ***)this = &PTR_GetClass_0676fd00;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIHeadshotIcon::~UIHeadshotIcon((UIHeadshotIcon *)this);
  return;
}


/* UIHeadshot::~UIHeadshot() */

void __thiscall UIHeadshot::~UIHeadshot(UIHeadshot *this)

{
  ~UIHeadshot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshot::Initialize() */

void __thiscall UIHeadshot::Initialize(UIHeadshot *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x328))(this,0,0,0xfa,0xfa);
  FUN_03d72a7c(this + 0x138);
  std::string::string(asStack_10,"UIHeadshot");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"animHeadshotEffect");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar2 + 0xd8))(pDVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshot::onNotifyColorChanged() */

void __thiscall UIHeadshot::onNotifyColorChanged(UIHeadshot *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  MonthlyCardMgr *this_00;
  int *piVar3;
  code *pcVar4;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"textName");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_18);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    this_00 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
    piVar3 = (int *)MonthlyCardMgr::GetColor(this_00);
    pcVar4 = *(code **)(*(long *)pDVar2 + 0x268);
    Sexy::Insets::Insets((Insets *)asStack_18,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
    (*pcVar4)(pDVar2,asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshot::UIHeadshot() */

void __thiscall UIHeadshot::UIHeadshot(UIHeadshot *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIHeadshotIcon::UIHeadshotIcon((UIHeadshotIcon *)this);
  *(undefined ***)this = &PTR_GetClass_0676fd00;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyColorChanged);
  Sexy::Delegate0::Delegate0<UIHeadshot,void(UIHeadshot::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyColorChanged,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIHeadshot::create(int) */

UIHeadshot * UIHeadshot::create(int param_1)

{
  UIHeadshot *this;
  
  this = ::operator_new(0x148);
  UIHeadshot(this);
  *(int *)(this + 0x134) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshot::UserInit() */

void __thiscall UIHeadshot::UserInit(UIHeadshot *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  undefined8 uVar3;
  MonthlyCardMgr *this_00;
  int *piVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"textName");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_38);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar2 + 0x338);
    DSingleton<UserInfo>::getInstance();
    nop();
    uVar3 = FUN_0547429c();
    (*pcVar6)(pDVar2,uVar3);
    this_00 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
    piVar4 = (int *)MonthlyCardMgr::GetColor(this_00);
    pcVar6 = *(code **)(*(long *)pDVar2 + 0x268);
    Sexy::Insets::Insets((Insets *)asStack_38,*piVar4,piVar4[1],piVar4[2],piVar4[3]);
    (*pcVar6)(pDVar2,asStack_38);
    DRefPtr<DUpdateAction>::DRefPtr((DRefPtr<DUpdateAction> *)asStack_38);
    plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
    pcVar6 = *(code **)(*plVar5 + 0x40);
    FUN_03d72e00(afStack_28,this,pDVar2);
    (*pcVar6)(plVar5,0,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
    (**(code **)(*(long *)pDVar2 + 0x298))(pDVar2,uVar3);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_38);
  }
  UIHeadshotIcon::changeHeadshot((UIHeadshotIcon *)this,*(int *)(this + 0x134));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

