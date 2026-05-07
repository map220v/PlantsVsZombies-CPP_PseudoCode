// Class: UIGachaDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::Initialize() */

void __thiscall UIGachaDetail::Initialize(UIGachaDetail *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPennyGachaDetail");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::getInfoAliases(int) */

void UIGachaDetail::getInfoAliases(int param_1)

{
  undefined4 in_w1;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"WinneTreasureConfig_Normal");
  nop();
  switch(in_w1) {
  case 0:
    std::string::append(in_x8,"WinneTreasureConfig_Normal",(size_t)__n);
    break;
  case 1:
    std::string::append(in_x8,"WinneTreasureConfig_Rare",(size_t)__n);
    break;
  case 2:
    std::string::append(in_x8,"WinneTreasureConfig_Legend",(size_t)__n);
    break;
  case 3:
    std::string::append(in_x8,"WinneTreasureConfig_Avatar",(size_t)__n);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::UserInit() */

void __thiscall UIGachaDetail::UserInit(UIGachaDetail *this)

{
  exception_ptr *this_00;
  string *psVar1;
  DTouchLayer *pDVar2;
  code *pcVar3;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu/btnClose");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d8ae9c(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnPlant");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d8aef8(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnPlantPiece");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d8af54(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu2/btnInfo");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar3 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d8afb0(afStack_28,this);
    (*pcVar3)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::changeIndex3Title() */

void __thiscall UIGachaDetail::changeIndex3Title(UIGachaDetail *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"btnReleaseImg1");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  FUN_03d89604(pDVar2);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"btnPressImg1");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  FUN_03d89604(pDVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::createWithNetwork() */

void UIGachaDetail::createWithNetwork(void)

{
  LawnApp *this;
  char cVar1;
  DTimerManager *this_00;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)afStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,(Delegate0 *)afStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    s_isActive = 1;
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_50,"UIGachaDetail");
    FUN_03d8adf4(afStack_38);
    DTimerManager::addTimer(this_00,asStack_50,(function *)afStack_38,5.0,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::setUnactive() */

void UIGachaDetail::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UIGachaDetail");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIGachaDetail::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UIGachaDetail");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIGachaDetail::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UIGachaDetail");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::onMsgErrorRequest(int, std::string const&) */

void UIGachaDetail::onMsgErrorRequest(int param_1,string *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  DTimerManager *this;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  this = (DTimerManager *)DTimerManager::getInstane();
  std::string::string(asStack_10,"UIGachaDetail");
  DTimerManager::removeTimer(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  s_isActive = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::~UIGachaDetail() */

void __thiscall UIGachaDetail::~UIGachaDetail(UIGachaDetail *this)

{
  DNetwork *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06771e70;
  setUnactive();
  s_pWidgetHandler = 0;
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_10,"V333");
  DNetwork::removeRequestMsg(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x198))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x180));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x150))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIGachaDetail::~UIGachaDetail() */

void __thiscall UIGachaDetail::~UIGachaDetail(UIGachaDetail *this)

{
  ~UIGachaDetail(this);
  AK::FreeHook(this);
  return;
}


/* UIGachaDetail::UIGachaDetail() */

void __thiscall UIGachaDetail::UIGachaDetail(UIGachaDetail *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06771e70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x198));
  *(undefined4 *)(this + 0x1c8) = 0;
  this[0x1cd] = (UIGachaDetail)0x0;
  this[0x1cc] = (UIGachaDetail)0x1;
  return;
}


/* UIGachaDetail::create(bool) */

UIGachaDetail * UIGachaDetail::create(bool param_1)

{
  UIGachaDetail *this;
  
  if (s_pWidgetHandler != (UIGachaDetail *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x1d0);
  memset(this,0,0x1d0);
  UIGachaDetail(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void UIGachaDetail::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  LawnApp *this;
  DTimerManager *this_00;
  long lVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_50,"UIGachaDetail");
    DTimerManager::removeTimer(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    lVar1 = create(true);
    if (lVar1 != 0) {
      nop();
    }
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[REWARD_GET_TIP_FAILED]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    setUnactive();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::getGachaDetailFromNetwork(std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIGachaDetail::getGachaDetailFromNetwork
          (UIGachaDetail *this,vector *param_1,vector *param_2,vector *param_3,vector *param_4,
          vector *param_5,vector *param_6)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x138),param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x180),param_4);
  local_18 = FUN_03d8cdd0(*(undefined8 *)param_2);
  local_10 = FUN_03d8ce20(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x150),piVar2);
    *puVar3 = 1;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  local_18 = FUN_03d8cdd0(*(undefined8 *)param_3);
  local_10 = FUN_03d8ce20(*(undefined8 *)(param_3 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x150),piVar2);
    *puVar3 = 2;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  local_18 = FUN_03d8cdd0(*(undefined8 *)param_5);
  local_10 = FUN_03d8ce20(*(undefined8 *)(param_5 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x198),piVar2);
    *puVar3 = 1;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  local_18 = FUN_03d8cdd0(*(undefined8 *)param_6);
  local_10 = FUN_03d8ce20(*(undefined8 *)(param_6 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x198),piVar2);
    *puVar3 = 2;
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::updateInfo() */

void __thiscall UIGachaDetail::updateInfo(UIGachaDetail *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  ProbabilityConfig *pPVar6;
  undefined8 uVar7;
  char *pcVar8;
  string *extraout_x1;
  wstring *extraout_x1_00;
  wstring *extraout_x1_01;
  code *pcVar9;
  uint uVar10;
  float local_34;
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  Sexy aSStack_20 [8];
  ProbabilityConfig aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getInfoAliases((int)this);
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  ProbabilityConfig::GetProbabilityConfig(aPStack_18,extraout_x1_00);
  FUN_05476c50(aPStack_18);
  std::string::~string((string *)aSStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar1) {
    pPVar6 = (ProbabilityConfig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar3 = ProbabilityConfig::GetSize(pPVar6);
    if (iVar3 != 0) {
      uVar10 = 1;
      do {
        Set8BytesTo0(asStack_28);
        pPVar6 = (ProbabilityConfig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = ProbabilityConfig::GetKeyValue(pPVar6,uVar10 - 1,asStack_28,&local_34);
        if (cVar2 != '\0') {
          psVar4 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
          Sexy::StrFormat("text_%d",aPStack_18,(ulong)uVar10);
          pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
          std::string::~string((string *)aPStack_18);
          if (pDVar5 != (DTouchLayer *)0x0) {
            Sexy::UTF8StringToSexyString(asStack_28);
            TodStringTranslate((wstring *)aPStack_18);
            FUN_05476c50(aPStack_18);
            Sexy::SexyStringToUTF8String(aSStack_20,extraout_x1_01);
            uVar7 = FUN_0547429c(aPStack_18);
            (**(code **)(*(long *)pDVar5 + 0x338))(pDVar5,uVar7);
            (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
            std::string::~string((string *)aPStack_18);
            FUN_05476c50(aSStack_20);
          }
          psVar4 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
          Sexy::StrFormat("text_v_%d",aPStack_18,(ulong)uVar10);
          pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
          std::string::~string((string *)aPStack_18);
          if (pDVar5 != (DTouchLayer *)0x0) {
            DString::DString((DString *)aPStack_18);
            DString::format((char *)aPStack_18,(double)local_34,"%.1f%%");
            pcVar9 = *(code **)(*(long *)pDVar5 + 0x338);
            pcVar8 = DString::operator_cast_to_char_((DString *)aPStack_18);
            (*pcVar9)(pDVar5,pcVar8);
            (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
            DString::~DString((DString *)aPStack_18);
          }
        }
        uVar10 = uVar10 + 1;
        std::string::~string(asStack_28);
      } while (uVar10 != iVar3 + 1U);
    }
  }
  this[0x1cd] = (UIGachaDetail)0x1;
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string((string *)aPStack_18,"scrollView");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aPStack_18);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string((string *)aPStack_18,"infoImg");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aPStack_18);
  nop();
  if (pDVar5 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::updateItems(std::vector<int, std::allocator<int> > const&, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > > const&) */

void __thiscall UIGachaDetail::updateItems(UIGachaDetail *this,vector *param_1,map *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  DTouchLayer *pDVar8;
  DNodeLoaderConfig *pDVar9;
  DTouchLayer *pDVar10;
  GachaDetailCacheMgr *this_00;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  DMenu *this_01;
  SeedPacketUtils *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  ResourceInfo *pRVar15;
  wstring *extraout_x1;
  code *pcVar16;
  float fVar17;
  float fVar18;
  CompiledMap aCStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  CompiledMap aCStack_a8 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_a0 [8];
  undefined8 local_98;
  RtWeakPtr aRStack_90 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_88 [8];
  DString aDStack_80 [16];
  UIGachaDetail *local_70;
  DString aDStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  string asStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"infoImg");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar8 + 0xd8))(pDVar8,0);
  }
  pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized(aCStack_c0);
  if (cVar3 != '\0') {
    local_b8 = FUN_03d8cdd0(*(undefined8 *)param_1);
    local_b0 = FUN_03d8ce20(*(undefined8 *)(param_1 + 8));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar4)
    {
      piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
      GetGameItemInfo(*piVar11,0x7fffffff,0);
      pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&local_70,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,(string *)&local_70,(DTransformNode *)0x0);
      std::string::~string((string *)&local_70);
      nop();
      pDVar9 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string((string *)&local_70,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar9,(string *)&local_70,(DTransformNode *)0x0);
      std::string::~string((string *)&local_70);
      nop();
      local_98 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            param_2,piVar11);
      local_70 = (UIGachaDetail *)
                 std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
      bVar4 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_70);
      if (bVar4) {
        lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
        if (*(int *)(lVar12 + 4) == 1) {
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0)
          ;
          pcVar16 = *(code **)(*plVar13 + 0x58);
          std::string::string((string *)&local_70,"newImg");
          plVar13 = (long *)(*pcVar16)(plVar13,(string *)&local_70);
          std::string::~string((string *)&local_70);
          nop();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0xd8))(plVar13,1);
          }
        }
        else {
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0)
          ;
          pcVar16 = *(code **)(*plVar13 + 0x58);
          std::string::string((string *)&local_70,"limitedImg");
          plVar13 = (long *)(*pcVar16)(plVar13,(string *)&local_70);
          std::string::~string((string *)&local_70);
          nop();
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0xd8))(plVar13,1);
          }
        }
      }
      cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_a0);
      if (cVar3 == '\0') {
LAB_03d92ae8:
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a8);
      }
      else {
        psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
        std::string::string((string *)&local_70,"img");
        pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
        std::string::~string((string *)&local_70);
        nop();
        if (local_34 == 1) {
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
          if (bVar4) {
            plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_a0);
            pcVar16 = *(code **)(*plVar13 + 0x2e8);
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            DString::Format("UI/Dialog_Asset/frame_tool%d",(string *)&local_70,
                            (ulong)(*(int *)(lVar12 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)&local_70);
            (*pcVar16)(plVar13,aDStack_80);
            std::string::~string((string *)aDStack_80);
            DString::~DString((DString *)&local_70);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar16 = *(code **)(*plVar13 + 0x338);
          FUN_031f5e7c(aDStack_80,"UI/headshot/plant/",asStack_28);
          plVar13 = (long *)(*pcVar16)(plVar13,aDStack_80,1);
          pcVar16 = *(code **)(*plVar13 + 0x108);
          DVec2::DVec2((DVec2 *)&local_70,0.0,0.0);
          plVar13 = (long *)(*pcVar16)(plVar13,(string *)&local_70);
          (**(code **)(*plVar13 + 0x130))(0,0);
          std::string::~string((string *)aDStack_80);
          plVar13 = (long *)(**(code **)(*(long *)pDVar8 + 0x110))(0xc0a00000,0xc0a00000,pDVar8);
          (**(code **)(*plVar13 + 0x130))(0,0);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          goto LAB_03d92ae8;
        }
        if (local_34 == 2) {
          this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_02,asStack_28);
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_88);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88)
          ;
          pcVar16 = *(code **)(*plVar13 + 0x340);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_03 + 0x170));
          plVar13 = (long *)(*pcVar16)(plVar13,pRVar15,this_03 + 0x20);
          plVar13 = (long *)(**(code **)(*plVar13 + 0x110))(0,0);
          (**(code **)(*plVar13 + 0x130))(0,0);
          iVar5 = *(int *)(this_03 + 0x30);
          iVar6 = *(int *)(this_03 + 0x34);
          iVar1 = *(int *)(this_03 + 0x18);
          iVar2 = *(int *)(this_03 + 0x1c);
          DRefPtr<DAtlasSpriteNode>::DRefPtr((DRefPtr<DAtlasSpriteNode> *)aDStack_80);
          plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80)
          ;
          pcVar16 = *(code **)(*plVar13 + 0x340);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
          pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x48));
          plVar13 = (long *)(*pcVar16)(plVar13,pRVar15,this_03 + 8);
          pcVar16 = *(code **)(*plVar13 + 0x108);
          fVar17 = (float)FUN_03d8b364((float)(iVar1 - iVar5));
          fVar18 = (float)FUN_03d8b364((float)(iVar2 - iVar6));
          DVec2::DVec2((DVec2 *)&local_70,fVar17,fVar18);
          plVar13 = (long *)(*pcVar16)(plVar13,(string *)&local_70);
          (**(code **)(*plVar13 + 0x130))(0,0);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_80);
          (**(code **)(*(long *)pDVar8 + 0x30))(pDVar8,uVar14);
          pcVar16 = *(code **)(*(long *)pDVar8 + 0x210);
          iVar5 = FUN_03d8b350(*(undefined4 *)(this_03 + 0x28));
          iVar6 = FUN_03d8b350(*(undefined4 *)(this_03 + 0x2c));
          DVec2::DVec2((DVec2 *)&local_70,(float)iVar5,(float)iVar6);
          (*pcVar16)(pDVar8,(string *)&local_70);
          (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_80);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_88);
          goto LAB_03d92ae8;
        }
        (**(code **)(*(long *)pDVar8 + 0x2e8))(pDVar8,auStack_18);
        (**(code **)(*(long *)pDVar8 + 0x170))(0x42be0000,pDVar8);
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_a8);
      }
      if (cVar3 != '\0') {
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_a0);
        (**(code **)(*plVar13 + 0x388))(plVar13,uVar14);
        Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
        DString::DString(aDStack_80,(string *)&local_70);
        std::string::~string((string *)&local_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        pcVar16 = *(code **)(*plVar13 + 0x360);
        local_70 = this;
        DString::DString(aDStack_68,aDStack_80);
        FUN_03d8b00c(afStack_58,(string *)&local_70);
        (*pcVar16)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        FUN_035590e8((string *)&local_70);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        pcVar16 = *(code **)(*plVar13 + 0x380);
        FUN_03d8b06c(afStack_58,this);
        (*pcVar16)(plVar13,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar13 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c0);
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        (**(code **)(*plVar13 + 0x30))(plVar13,uVar14);
        DString::~DString(aDStack_80);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_a0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a8);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b8);
    }
    this_01 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c0);
    DMenu::align(this_01,5,100.0,100.0,10.0,10.0);
  }
  psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar7);
  std::string::~string(asStack_38);
  nop();
  if (pDVar8 != (DTouchLayer *)0x0) {
    pDVar10 = (DTouchLayer *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_c0);
    DScrollView::setContainer((DScrollView *)pDVar8,pDVar10);
    (**(code **)(*(long *)pDVar8 + 0xd8))(pDVar8,1);
  }
  this_00 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
  GachaDetailCacheMgr::clean(this_00,*(int *)(this + 0x1c8),(bool)this[0x1cc]);
  if (*(int *)(this + 0x1c8) == 3) {
    changeIndex3Title(this);
  }
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_c0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaDetail::setGachaInfo(int) */

void __thiscall UIGachaDetail::setGachaInfo(UIGachaDetail *this,int param_1)

{
  UIGachaDetail UVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  vector *pvVar5;
  vector *pvVar6;
  vector *pvVar7;
  ulong uVar8;
  undefined8 uVar9;
  IteratorStorage aIStack_98 [24];
  vector<int,std::allocator<int>> avStack_80 [24];
  IteratorStorage aIStack_68 [24];
  vector<int,std::allocator<int>> avStack_50 [24];
  IteratorStorage aIStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    changeIndex3Title(this);
  }
  *(int *)(this + 0x1c8) = param_1;
  lVar2 = DSingleton<GachaDetailCacheMgr>::getInstance();
  Sexy::RtDbTable::IteratorStorage::IteratorStorage(aIStack_98);
  Sexy::RtDbTable::IteratorStorage::IteratorStorage(aIStack_68);
  Sexy::RtDbTable::IteratorStorage::IteratorStorage(aIStack_38);
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0xa0);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0xa8));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)aIStack_98,piVar4);
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0xb8);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0xc0));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back(avStack_80,piVar4);
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0x160);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0x168));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)aIStack_68,piVar4);
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0x178);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0x180));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back(avStack_50,piVar4);
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0x220);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0x228));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)aIStack_38,piVar4);
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(lVar2 + 0x238);
    uVar3 = FUN_03d89538(uVar9,*(undefined8 *)(lVar2 + 0x240));
    if (uVar3 <= uVar8) break;
    piVar4 = (int *)FUN_03d89544(uVar9,uVar8);
    std::vector<int,std::allocator<int>>::push_back(avStack_20,piVar4);
    uVar8 = uVar8 + 1;
  }
  switch(param_1) {
  case 0:
    pvVar5 = (vector *)(lVar2 + 0x10);
    pvVar6 = (vector *)(lVar2 + 0xd0);
    pvVar7 = (vector *)(lVar2 + 400);
    break;
  case 1:
    pvVar5 = (vector *)(lVar2 + 0x40);
    pvVar6 = (vector *)(lVar2 + 0x100);
    pvVar7 = (vector *)(lVar2 + 0x1c0);
    break;
  case 2:
    pvVar5 = (vector *)(lVar2 + 0x70);
    pvVar6 = (vector *)(lVar2 + 0x130);
    pvVar7 = (vector *)(lVar2 + 0x1f0);
    break;
  case 3:
    getGachaDetailFromNetwork
              (this,(vector *)aIStack_98,(vector *)aIStack_68,(vector *)aIStack_38,
               (vector *)avStack_80,(vector *)avStack_50,(vector *)avStack_20);
    UVar1 = this[0x1cc];
    goto joined_r0x03d93544;
  default:
    pvVar7 = (vector *)0x0;
    pvVar6 = (vector *)0x0;
    pvVar5 = (vector *)0x0;
  }
  getGachaDetailFromNetwork(this,pvVar5,pvVar6,pvVar7,pvVar5 + 0x18,pvVar6 + 0x18,pvVar7 + 0x18);
  UVar1 = this[0x1cc];
joined_r0x03d93544:
  if (UVar1 == (UIGachaDetail)0x0) {
    updateItems(this,(vector *)(this + 0x180),(map *)(this + 0x198));
  }
  else {
    updateItems(this,(vector *)(this + 0x138),(map *)(this + 0x150));
  }
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)aIStack_38);
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)aIStack_68);
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)aIStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIGachaDetail::updatePlantsShow() */

void __thiscall UIGachaDetail::updatePlantsShow(UIGachaDetail *this)

{
  if ((this[0x1cc] != (UIGachaDetail)0x0) && (this[0x1cd] == (UIGachaDetail)0x0)) {
    return;
  }
  this[0x1cd] = (UIGachaDetail)0x0;
  this[0x1cc] = (UIGachaDetail)0x1;
  updateItems(this,(vector *)(this + 0x138),(map *)(this + 0x150));
  return;
}


/* UIGachaDetail::updatePlantPiecesShow() */

void __thiscall UIGachaDetail::updatePlantPiecesShow(UIGachaDetail *this)

{
  if ((this[0x1cc] == (UIGachaDetail)0x0) && (this[0x1cd] == (UIGachaDetail)0x0)) {
    return;
  }
  this[0x1cc] = (UIGachaDetail)0x0;
  this[0x1cd] = (UIGachaDetail)0x0;
  updateItems(this,(vector *)(this + 0x180),(map *)(this + 0x198));
  return;
}

