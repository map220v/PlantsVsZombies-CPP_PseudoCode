// Class: HintUI


/* HintUI::SetTitleImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall HintUI::SetTitleImage(HintUI *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x300),param_2);
  return;
}


/* HintUI::SetCloseButtonVisible(bool) */

void __thiscall HintUI::SetCloseButtonVisible(HintUI *this,bool param_1)

{
  this[0x191] = (HintUI)param_1;
  return;
}


/* HintUI::CheckboxChecked(int, bool) */

int HintUI::CheckboxChecked(int param_1,bool param_2)

{
  return param_1;
}


/* non-virtual thunk to HintUI::CheckboxChecked(int, bool) */

void __thiscall HintUI::CheckboxChecked(HintUI *this,int param_1,bool param_2)

{
  CheckboxChecked((int)this + -0x128,SUB41(param_1,0));
  return;
}


/* HintUI::HideAllButtonAndAnims() */

void __thiscall HintUI::HideAllButtonAndAnims(HintUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x238);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x228);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x230);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* HintUI::KillHintUI() */

void __thiscall HintUI::KillHintUI(HintUI *this)

{
  char cVar1;
  
  cVar1 = LawnApp::IsHintUIValid(gLawnApp,*(int *)(this + 0x198));
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  LawnApp::KillHintUI(gLawnApp,*(int *)(this + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetButtonString(std::wstring const&) */

void __thiscall HintUI::SetButtonString(HintUI *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x218,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetButton2String(std::wstring const&) */

void __thiscall HintUI::SetButton2String(HintUI *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x220,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetTitleString(std::wstring const&) */

void __thiscall HintUI::SetTitleString(HintUI *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x208,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetContentString(std::wstring const&) */

void __thiscall HintUI::SetContentString(HintUI *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x210,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HintUI::SetButtonPressedEvent(Sexy::Delegate0) */

void __thiscall HintUI::SetButtonPressedEvent(HintUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x268),param_2);
  return;
}


/* HintUI::SetButton2PressedEvent(Sexy::Delegate0) */

void __thiscall HintUI::SetButton2PressedEvent(HintUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x298),param_2);
  return;
}


/* HintUI::SetClosePressedEvent(Sexy::Delegate0) */

void __thiscall HintUI::SetClosePressedEvent(HintUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x2c8),param_2);
  return;
}


/* HintUI::SetButtonColor(ButtonColor) */

void __thiscall HintUI::SetButtonColor(HintUI *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x2f8) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::InitShiningAnims() */

void __thiscall HintUI::InitShiningAnims(HintUI *this)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x310);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x1a8) + *(int *)(this + 0x1b0) / 2),
             (float)(*(int *)(this + 0x1ac) + *(int *)(this + 0x1b4) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar1,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x340);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetNeedLight(bool) */

void __thiscall HintUI::SetNeedLight(HintUI *this,bool param_1)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x193] != (HintUI)param_1) {
    this[0x193] = (HintUI)param_1;
    this_00 = gLawnApp;
    if (param_1) {
      std::string::string(asStack_10,"Sales_Effect");
      LawnApp::LoadGroup(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_10,"Sales_Effect");
      LawnApp::DeleteGroup(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HintUI::GetContentRect() */

Insets * HintUI::GetContentRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x1c8));
  return in_x8;
}


/* HintUI::ButtonDepress(int) */

void __thiscall HintUI::ButtonDepress(HintUI *this,int param_1)

{
  bool bVar1;
  HintUI *pHVar2;
  long lVar3;
  
  if (param_1 == 0xffff) {
    return;
  }
  if (*(int *)(this + 0x19c) == param_1) {
    pHVar2 = this + 0x268;
  }
  else {
    if (*(int *)(this + 0x1a0) == param_1) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x298));
      lVar3 = *(long *)(this + 0x240);
      if (lVar3 != 0) {
        bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x248));
        if (bVar1) {
          bVar1 = (bool)FUN_04bde09c(*(undefined1 *)(lVar3 + 0x198));
          std::function<void(bool)>::operator()((function<void(bool)> *)(this + 0x248),bVar1);
        }
      }
      goto LAB_04bde95c;
    }
    if (*(int *)(this + 0x1a4) != param_1) {
      return;
    }
    pHVar2 = this + 0x2c8;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)pHVar2);
LAB_04bde95c:
  KillHintUI(this);
  return;
}


/* non-virtual thunk to HintUI::ButtonDepress(int) */

void __thiscall HintUI::ButtonDepress(HintUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::RecoverAllButtonAndAnims() */

void __thiscall HintUI::RecoverAllButtonAndAnims(HintUI *this)

{
  bool bVar1;
  long *plVar2;
  string *psVar3;
  EffectAnim_UIAnim *pEVar4;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(this + 0x238);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,this[0x191]);
  }
  plVar2 = *(long **)(this + 0x228);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,this[0x192]);
  }
  plVar2 = *(long **)(this + 0x230);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x160));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x160));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar1 = std::operator==("",psVar3);
    if (bVar1) {
      EffectAnim_UIAnim::PlayIdleLoop(*(EffectAnim_UIAnim **)(psVar3 + 8));
    }
    else {
      pEVar4 = *(EffectAnim_UIAnim **)(psVar3 + 8);
      FUN_05475d88(asStack_10,psVar3);
      EffectAnim_UIAnim::PlayLoop(pEVar4,asStack_10);
      std::string::~string(asStack_10);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::KillMySelf() */

void HintUI::KillMySelf(void)

{
  ReceivedDataCallback *in_x0;
  Delegate0 *in_x8;
  CBMemberTranslatorX aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (in_x0,KillHintUI);
  Sexy::Delegate0::Delegate0<HintUI,void(HintUI::*)()>(in_x8,aCStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::HintUI() */

void __thiscall HintUI::HintUI(HintUI *this)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  Sexy::CheckboxListener::CheckboxListener((CheckboxListener *)(this + 0x128));
  *(undefined ***)this = &PTR_GetClass_0697c160;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697c4a8;
  *(undefined **)(this + 0x128) = &DAT_0697c4f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  this[400] = (HintUI)0x0;
  this[0x191] = (HintUI)0x0;
  this[0x192] = (HintUI)0x0;
  this[0x193] = (HintUI)0x0;
  this[0x194] = (HintUI)0x0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  Sexy::Insets::Insets((Insets *)(this + 0x1c8));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x1f8));
  FUN_05478178(this + 0x208,&DAT_056f11a8,auStack_10);
  nop();
  FUN_05478178(this + 0x210,&DAT_056f11a8,auStack_10);
  nop();
  FUN_05478178(this + 0x218,&DAT_056f11a8,auStack_10);
  nop();
  FUN_05478178(this + 0x220,&DAT_056f11a8,auStack_10);
  nop();
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x248));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x268),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x298),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x2c8),(DummyInit *)0x0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x308));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x310));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x340));
  uVar1 = LawnApp::GetNewHintUIIndex(gLawnApp,this);
  *(undefined4 *)(this + 0x198) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::InitButton(PVZ2UIButton*, ButtonColor) */

void __thiscall HintUI::InitButton(undefined8 param_1_00,PVZ2UIButton *param_1,int param_3)

{
  CachedUIResourcePtr *this;
  ResourceInfo *pRVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_88);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_80);
  if (param_3 == 0) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b680);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_88,(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    this = (CachedUIResourcePtr *)&DAT_06b8b720;
  }
  else if (param_3 == 1) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b658);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_88,(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    this = (CachedUIResourcePtr *)&DAT_06b8b6a8;
  }
  else {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b5d0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_88,(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    this = (CachedUIResourcePtr *)&DAT_06b8b600;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_80,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_88);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,pRVar1,3);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_80);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,pRVar1,3);
  PVZ2UIButton::SetDialogStates(param_1,aPStack_78,(PVZ2UIImage *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::DefaultInit() */

void __thiscall HintUI::DefaultInit(HintUI *this)

{
  undefined1 auStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_TITLE]",auStack_48);
  SetTitleString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_CONTENT]",auStack_48);
  SetContentString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_BUTTON1]",auStack_48);
  SetButtonString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_BUTTON2]",auStack_48);
  SetButton2String(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  SetButtonColor(this,1);
  CardGameDeckButton::SetIndex((CardGameDeckButton *)this,0);
  SetCloseButtonVisible(this,false);
  SetNeedLight(this,false);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b518);
  PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps
            ((PVZ2UnchartedModeAnniversaryChallengeWidget *)this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  KillMySelf();
  SetButtonPressedEvent(this,auStack_38);
  KillMySelf();
  SetButton2PressedEvent(this,auStack_38);
  KillMySelf();
  SetClosePressedEvent(this,auStack_38);
  (**(code **)(*(long *)this + 0x158))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HintUI::Default1Init() */

void __thiscall HintUI::Default1Init(HintUI *this)

{
  this[0x192] = (HintUI)0x0;
  DefaultInit(this);
  return;
}


/* HintUI::Default2Init() */

void __thiscall HintUI::Default2Init(HintUI *this)

{
  this[0x192] = (HintUI)0x1;
  DefaultInit(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::BonusInit() */

void __thiscall HintUI::BonusInit(HintUI *this)

{
  undefined1 auStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined1 auStack_38 [48];
  long local_8;
  
  this[0x192] = (HintUI)0x0;
  local_8 = ___stack_chk_guard;
  SetButtonColor(this,1);
  CardGameDeckButton::SetIndex((CardGameDeckButton *)this,0);
  SetCloseButtonVisible(this,false);
  SetNeedLight(this,false);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b568);
  PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps
            ((PVZ2UnchartedModeAnniversaryChallengeWidget *)this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b590);
  SetTitleImage(this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  KillMySelf();
  SetButtonPressedEvent(this,auStack_38);
  KillMySelf();
  SetButton2PressedEvent(this,auStack_38);
  KillMySelf();
  SetClosePressedEvent(this,auStack_38);
  this[0x194] = (HintUI)0x1;
  FUN_05478178(aRStack_40,L"[GEILIVABLE_LOTTERY_BONUS_TITLE]",auStack_48);
  SetTitleString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[SALES_REWARD_BOX_CLOSE]",auStack_48);
  SetButton2String(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,&DAT_05744760,auStack_48);
  SetContentString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  SetNeedLight(this,true);
  (**(code **)(*(long *)this + 0x158))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::DefaultUnconnectInit() */

void __thiscall HintUI::DefaultUnconnectInit(HintUI *this)

{
  undefined1 auStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x192] = (HintUI)0x0;
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_UNCONNECTED_TITLE]",auStack_48);
  SetTitleString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_UNCONNECTED]",auStack_48);
  SetContentString(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  FUN_05478178(aRStack_40,L"[HINT_DEFAULT_BUTTON2]",auStack_48);
  SetButton2String(this,(wstring *)aRStack_40);
  FUN_05476c50(aRStack_40);
  nop();
  CardGameDeckButton::SetIndex((CardGameDeckButton *)this,0);
  SetCloseButtonVisible(this,false);
  SetNeedLight(this,false);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b518);
  PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps
            ((PVZ2UnchartedModeAnniversaryChallengeWidget *)this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  KillMySelf();
  SetButtonPressedEvent(this,auStack_38);
  KillMySelf();
  SetButton2PressedEvent(this,auStack_38);
  KillMySelf();
  SetClosePressedEvent(this,auStack_38);
  (**(code **)(*(long *)this + 0x158))(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::Draw(Sexy::Graphics*) */

void __thiscall HintUI::Draw(HintUI *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x340));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x340),param_1);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x308));
  if (bVar2) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x308));
    PopingWidget::GetMainRect();
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,pRVar3,&local_40);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x300));
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x300));
  }
  if (bVar2) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
    Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(this + 0x1a8));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,(Insets *)&local_40);
  }
  cVar1 = FUN_04bde0a0(this[0x115]);
  if (cVar1 == '\0') {
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow);
    Sexy::Color::Color((Color *)&local_40,1);
    WriteWordInRect(param_1,this + 0x208,this + 0x1b8,uVar5,(Color *)&local_40,5,1);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)&local_40,0x50,0x22,1);
    WriteWordInRect(param_1,this + 0x210,this + 0x1c8,uVar5,(Color *)&local_40,5,1);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x130));
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x130));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar2)
    {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(this_00 + 8));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,(Color *)&local_40);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
    }
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x148));
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x148));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)local_50), bVar2)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(lVar4 + 0x20));
      WriteWordInRect(param_1,lVar4,lVar4 + 8,uVar5,(Color *)&local_40,*(undefined4 *)(lVar4 + 0x30)
                      ,1);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_58);
    }
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x160));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x160));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_50,(__normal_iterator *)&local_40), bVar2)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      cVar1 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(lVar4 + 8));
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::OnDraw(*(EffectAnim_UIAnim **)(lVar4 + 8),param_1);
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)local_50);
    }
  }
  else {
    if (this[0x191] != (HintUI)0x0) {
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b4f0);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(this + 0x1f8));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar5,(Color *)&local_40);
    }
    if (this[0x192] != (HintUI)0x0) {
      PVZ2UIButton::GetImageNormal();
      uVar5 = local_38;
      Sexy::Insets::Insets((Insets *)local_50,(Insets *)(this + 0x1d8));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar5,(Insets *)local_50);
    }
    PVZ2UIButton::GetImageNormal();
    Sexy::Insets::Insets((Insets *)local_50,(Insets *)(this + 0x1e8));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,(Insets *)local_50);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x310));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x310),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetCheckBoxTips(std::wstring, std::function<void (bool)>) */

void __thiscall HintUI::SetCheckBoxTips(HintUI *this,wstring *param_2,function *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  SalesProgressBar *this_00;
  PVZ2UICheckBox *this_01;
  Image *pIVar8;
  Image *pIVar9;
  UIWidgetText *this_02;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04bde324(500);
  iVar3 = FUN_04bde324(0x15e);
  iVar6 = *(int *)(this + 0x54);
  iVar1 = *(int *)(this + 0x50) - iVar2 >> 1;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b5d0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  std::function<void(bool)>::operator=((function<void(bool)> *)(this + 0x248),param_3);
  iVar5 = FUN_04bde324(0x46);
  iVar5 = (((iVar6 - iVar3 >> 1) + iVar3) - (int)((double)iVar4 * 0.8)) - iVar5;
  this_01 = ::operator_new(0x1b0);
  PVZ2UICheckBox::PVZ2UICheckBox
            (this_01,0x7534,(ButtonListener *)(this + 0x120),(CheckboxListener *)(this + 0x128));
  *(PVZ2UICheckBox **)(this + 0x240) = this_01;
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b6d0);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b628);
  PVZ2UICheckBox::SetCheckboxStates(this_01,pIVar8,pIVar9,false,0,0);
  plVar12 = *(long **)(this + 0x240);
  iVar6 = FUN_04bde324(0xaa);
  iVar3 = FUN_04bde324(2);
  uVar7 = FUN_04bde324(0x1a);
  (**(code **)(*plVar12 + 0x198))(plVar12,iVar6 + iVar1,iVar3 + iVar5,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x240));
  this_02 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_02,param_2);
  iVar6 = FUN_04bde324(0xd2);
  iVar3 = FUN_04bde324(200);
  uVar7 = FUN_04bde324(0x1e);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar6 + iVar1,iVar5,iVar2 - iVar3,uVar7);
  pcVar11 = *(code **)(*(long *)this_02 + 0x170);
  Sexy::Color::Color(aCStack_18,0);
  (*pcVar11)(this_02,0,aCStack_18);
  FUN_04bde2b0(this_02 + 0xe0);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  FUN_04bde0a4(this_02 + 0xe8,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::~HintUI() */

void __thiscall HintUI::~HintUI(HintUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  LawnApp *this_01;
  bool bVar1;
  char cVar2;
  long lVar3;
  EffectAnim_UIAnim *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697c160;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697c4a8;
  *(undefined **)(this + 0x128) = &DAT_0697c4f0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(lVar3 + 8));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::SafeRelease(*(EffectAnim_UIAnim **)(lVar3 + 8));
      this_02 = *(EffectAnim_UIAnim **)(lVar3 + 8);
      if (this_02 != (EffectAnim_UIAnim *)0x0) {
        EffectAnim_UIAnim::~EffectAnim_UIAnim(this_02);
        AK::FreeHook(this_02);
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_01 = gLawnApp;
  if (this[0x193] != (HintUI)0x0) {
    std::string::string((string *)&local_10,"Sales_Effect");
    LawnApp::DeleteGroup(this_01,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x340));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x310));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x248));
  FUN_05476c50(this + 0x220);
  FUN_05476c50(this + 0x218);
  FUN_05476c50(this + 0x210);
  FUN_05476c50(this + 0x208);
  std::vector<HintBonusInfo,std::allocator<HintBonusInfo>>::~vector
            ((vector<HintBonusInfo,std::allocator<HintBonusInfo>> *)(this + 0x178));
  std::vector<HintAnim,std::allocator<HintAnim>>::~vector
            ((vector<HintAnim,std::allocator<HintAnim>> *)this_00);
  std::vector<HintWord,std::allocator<HintWord>>::~vector
            ((vector<HintWord,std::allocator<HintWord>> *)(this + 0x148));
  std::vector<HintImage,std::allocator<HintImage>>::~vector
            ((vector<HintImage,std::allocator<HintImage>> *)(this + 0x130));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HintUI::~HintUI() */

void __thiscall HintUI::~HintUI(HintUI *this)

{
  ~HintUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::AddWordInRect(std::wstring, Sexy::TRect<int>, Sexy::PrimeTypeface*, Sexy::Color,
   DrawStringJustification) */

void __thiscall
HintUI::AddWordInRect
          (HintUI *this,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5,undefined4 param_6)

{
  HintWord aHStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HintWord::HintWord(aHStack_40);
  thunk_FUN_05477b9c(aHStack_40,param_2);
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_20 = *param_5;
  uStack_18 = param_5[1];
  local_28 = param_4;
  local_10 = param_6;
  std::vector<HintWord,std::allocator<HintWord>>::push_back
            ((vector<HintWord,std::allocator<HintWord>> *)(this + 0x148),aHStack_40);
  std::pair<std::wstring_const,Sexy::DataElement*>::~pair
            ((pair<std::wstring_const,Sexy::DataElement*> *)aHStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::AddImageInRect(Sexy::RtWeakPtr<Sexy::Image>, Sexy::TRect<int>) */

void __thiscall HintUI::AddImageInRect(HintUI *this,RtWeakPtr *param_2,undefined8 *param_3)

{
  HintImage aHStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HintImage::HintImage(aHStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aHStack_20,param_2);
  local_18 = *param_3;
  uStack_10 = param_3[1];
  std::vector<HintImage,std::allocator<HintImage>>::push_back
            ((vector<HintImage,std::allocator<HintImage>> *)(this + 0x130),aHStack_20);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aHStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::AddAnimInRect(std::string, Sexy::TRect<int>, std::string, float, bool, bool) */

void __thiscall
HintUI::AddAnimInRect
          (undefined4 param_1,HintUI *this,undefined8 param_3,int *param_4,undefined8 param_5,
          char param_6,char param_7)

{
  EffectAnim_UIAnim *this_00;
  undefined8 local_28;
  undefined8 local_20;
  TGABagData aTStack_18 [8];
  EffectAnim_UIAnim *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_18);
  this_00 = ::operator_new(0x30);
  EffectAnim_UIAnim::EffectAnim_UIAnim(this_00);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_28)
  ;
  if (param_6 == '\0') {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)*param_4,(float)param_4[1]);
    local_28 = local_20;
  }
  else {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)*param_4 + (float)param_4[2] * 0.5,
               (float)param_4[1] + (float)param_4[3] * 0.5);
    local_28 = local_20;
  }
  if (param_7 == '\0') {
    FUN_05475d88((string *)&local_20,param_3);
    EffectAnim_UIAnim::InitUIAnim
              (param_1,(undefined4)local_28,local_28._4_4_,this_00,(string *)&local_20,param_6);
    std::string::~string((string *)&local_20);
  }
  else {
    FUN_05475d88((string *)&local_20,param_3);
    EffectAnim_UIAnim::InitPlantUIAnim
              (param_1,(undefined4)local_28,local_28._4_4_,this_00,(string *)&local_20,param_6);
    std::string::~string((string *)&local_20);
  }
  thunk_FUN_05475e00(aTStack_18,param_5);
  local_10 = this_00;
  std::vector<HintAnim,std::allocator<HintAnim>>::push_back
            ((vector<HintAnim,std::allocator<HintAnim>> *)(this + 0x160),(HintAnim *)aTStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::InitView() */

void __thiscall HintUI::InitView(HintUI *this)

{
  RtWeakPtr *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  int *piVar14;
  NameMapperBase *this_01;
  PVZ2UIButton *pPVar15;
  int iVar16;
  long *plVar17;
  code *pcVar18;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  string asStack_a0 [8];
  int local_98 [4];
  int local_88 [2];
  int local_80;
  string asStack_78 [4];
  int local_74;
  int local_70;
  undefined4 local_40;
  int iStack_3c;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (HintUI)0x0;
  this_00 = (RtWeakPtr *)(this + 0x300);
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::vector<HintImage,std::allocator<HintImage>>::clear
            ((vector<HintImage,std::allocator<HintImage>> *)(this + 0x130));
  std::vector<HintWord,std::allocator<HintWord>>::clear
            ((vector<HintWord,std::allocator<HintWord>> *)(this + 0x148));
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pLVar11 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = (int)((double)iVar6 * 0.7);
    pSVar12 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = iVar5 / 2;
  }
  else {
    iVar4 = FUN_04bde324(0x3c);
    iVar5 = FUN_04bde324(0x78);
    iVar6 = FUN_04bde324(0x46);
    iVar7 = FUN_04bde324(10);
    iVar6 = iVar6 + iVar7;
  }
  *(undefined4 *)(this + 0x19c) = 0xffff;
  *(undefined4 *)(this + 0x1a0) = 0xffff;
  *(undefined4 *)(this + 0x1a4) = 0xffff;
  iVar8 = FUN_04bde324(500);
  iVar9 = FUN_04bde324(0x15e);
  iVar10 = *(int *)(this + 0x50) - iVar8 >> 1;
  iVar7 = *(int *)(this + 0x54) - iVar9 >> 1;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    iVar7 = iVar7 + iVar6;
    iVar9 = iVar9 - iVar6;
  }
  Sexy::Insets::Insets((Insets *)&local_40,iVar10,iVar7,iVar8,iVar9);
  iVar1 = iVar10 + iVar8 / 2;
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    iVar10 = FUN_04bde324(3);
    Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar4 / 2) - iVar10,iVar7 - iVar6,iVar4,iVar5)
    ;
    *(ulong *)(this + 0x1a8) = CONCAT44(iStack_3c,local_40);
    *(undefined8 *)(this + 0x1b0) = uStack_38;
    iVar8 = FUN_04bde324(5);
    iVar10 = *(int *)(this + 0x1a8);
    iVar16 = *(int *)(this + 0x1ac) - iVar8;
    iVar8 = iVar4;
  }
  else {
    iVar5 = FUN_04bde324(0x46);
    iVar16 = iVar7;
  }
  Sexy::Insets::Insets((Insets *)&local_40,iVar10,iVar16,iVar8,iVar5);
  *(ulong *)(this + 0x1b8) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b5d0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar5 = (int)((double)iVar4 * 2.5);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b5d0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar4 = (int)((double)iVar4 * 0.8);
  if (this[0x192] == (HintUI)0x0) {
    iVar8 = -(iVar5 / 2);
    iVar10 = FUN_04bde324(0x14);
    iVar10 = ((iVar7 + iVar9) - iVar4) - iVar10;
  }
  else {
    iVar10 = (iVar7 + iVar9) - iVar4;
    iVar9 = FUN_04bde324(0x14);
    Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar5) - iVar9,iVar10 - iVar9,iVar5,iVar4);
    pPVar15 = *(PVZ2UIButton **)(this + 0x228);
    *(ulong *)(this + 0x1d8) = CONCAT44(iStack_3c,local_40);
    *(undefined8 *)(this + 0x1e0) = uStack_38;
    if (pPVar15 == (PVZ2UIButton *)0x0) {
      *(int *)(this + 0x19c) = *(int *)(this + 0x198) * 10 + 0x7531;
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar15 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar15,*(int *)(this + 0x19c),(ButtonListener *)(this + 0x120),
                 (wstring *)(this + 0x218),(Color *)&local_40);
      *(PVZ2UIButton **)(this + 0x228) = pPVar15;
    }
    InitButton(this,pPVar15,*(undefined4 *)(this + 0x2f8));
    (**(code **)(**(long **)(this + 0x228) + 0x1a0))(*(long **)(this + 0x228),this + 0x1d8);
    plVar17 = *(long **)(this + 0x228);
    pcVar18 = *(code **)(*plVar17 + 800);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar18)(plVar17,uVar13);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x228));
    iVar8 = FUN_04bde324(0x14);
    iVar10 = iVar10 - iVar8;
  }
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 + iVar8,iVar10,iVar5,iVar4);
  *(ulong *)(this + 0x1e8) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x1f0) = uStack_38;
  pPVar15 = *(PVZ2UIButton **)(this + 0x230);
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    *(int *)(this + 0x1a0) = *(int *)(this + 0x198) * 10 + 0x7532;
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,*(int *)(this + 0x1a0),(ButtonListener *)(this + 0x120),
               (wstring *)(this + 0x220),(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x230) = pPVar15;
  }
  InitButton(this,pPVar15,*(undefined4 *)(this + 0x2fc));
  (**(code **)(**(long **)(this + 0x230) + 0x1a0))(*(long **)(this + 0x230),this + 0x1e8);
  plVar17 = *(long **)(this + 0x230);
  pcVar18 = *(code **)(*plVar17 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  (*pcVar18)(plVar17,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x230));
  if (this[0x194] == (HintUI)0x0) {
    iVar7 = iVar7 + iVar6;
    PopingWidget::GetMainRect();
    iVar6 = local_88[0];
    iVar4 = FUN_04bde324(0x14);
    iVar6 = iVar6 + iVar4;
    PopingWidget::GetMainRect();
    iVar5 = local_70;
    iVar4 = FUN_04bde324(0x28);
    iVar5 = iVar5 - iVar4;
    iVar4 = *(int *)(this + 0x1ec);
    iVar10 = FUN_04bde324(10);
    iVar10 = (iVar4 - iVar7) - iVar10;
  }
  else {
    PopingWidget::GetMainRect();
    iVar6 = local_88[0];
    iVar4 = FUN_04bde324(0x14);
    iVar6 = iVar6 + iVar4;
    iVar7 = FUN_04bde324(0x32);
    iVar7 = *(int *)(this + 0x1ec) - iVar7;
    PopingWidget::GetMainRect();
    iVar5 = local_70;
    iVar10 = FUN_04bde324(0x28);
    iVar5 = iVar5 - iVar10;
  }
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar7,iVar5,iVar10);
  *(ulong *)(this + 0x1c8) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x1d0) = uStack_38;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b4f0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b4f0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar5 = FUN_04bde324(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar7 = FUN_04bde324(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98[0] + local_80) - iVar6 / 2) + iVar5,
             (local_74 - iVar4 / 2) + iVar7,iVar6,iVar4);
  pPVar15 = *(PVZ2UIButton **)(this + 0x238);
  *(ulong *)(this + 0x1f8) = CONCAT44(iStack_3c,local_40);
  *(undefined8 *)(this + 0x200) = uStack_38;
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    *(int *)(this + 0x1a4) = *(int *)(this + 0x198) * 10 + 0x7533;
    FUN_05478178(asStack_78,&DAT_056f11a8,(string *)local_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,*(int *)(this + 0x1a4),(ButtonListener *)(this + 0x120),(wstring *)asStack_78
               ,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x238) = pPVar15;
    FUN_05476c50(asStack_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x238);
    if (pPVar15 == (PVZ2UIButton *)0x0) goto LAB_04be1104;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8b4f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b540,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x238) + 0x1a0))(*(long **)(this + 0x238),this + 0x1f8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x238));
LAB_04be1104:
  if (this[0x193] != (HintUI)0x0) {
    InitShiningAnims(this);
  }
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x178));
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x178));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar2) {
    piVar14 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar3 = NameMapperBase::ContainsId(this_01,*piVar14);
    if (cVar3 == '\0') {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_a0);
      GetContentRect();
      iVar6 = local_88[0];
      GetContentRect();
      iVar4 = local_70;
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      PopingWidget::GetMainRect();
      iVar5 = iStack_3c;
      iVar10 = FUN_04bde324(0x3c);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Insets::Insets
                ((Insets *)local_98,iVar6 + (iVar4 - iVar7) / 2,iVar5 + iVar10,iVar9,iVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)asStack_a0);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)local_98);
      AddImageInRect(this,asStack_78,(Insets *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
    }
    else {
      GetContentRect();
      iVar6 = local_88[0];
      GetContentRect();
      iVar4 = local_70;
      iVar7 = FUN_04bde324(100);
      PopingWidget::GetMainRect();
      iVar5 = iStack_3c;
      iVar10 = FUN_04bde324(0x3c);
      iVar9 = FUN_04bde324(100);
      Sexy::Insets::Insets
                ((Insets *)local_98,iVar6 + (iVar4 - iVar7) / 2,iVar5 + iVar10,iVar9,iVar9);
      iVar6 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar6);
      FUN_05475d88((string *)local_88,asStack_a0);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)local_98);
      std::string::string(asStack_78,"");
      AddAnimInRect((HintUI *)0x3fc00000,this,(string *)local_88,(Insets *)&local_40,asStack_78,1,1)
      ;
      std::string::~string(asStack_78);
      nop();
      std::string::~string((string *)local_88);
      FUN_05478178((string *)local_88,&DAT_056f11a8,auStack_b8);
      Sexy::Insets::Insets((Insets *)asStack_78,(Insets *)local_98);
      uVar13 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)&local_40,1);
      AddWordInRect(this,(string *)local_88,asStack_78,uVar13,(Insets *)&local_40,5);
      FUN_05476c50((string *)local_88);
      nop();
      std::string::~string(asStack_a0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::Refresh() */

void __thiscall HintUI::Refresh(HintUI *this)

{
  RtWeakPtr *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  int *piVar14;
  NameMapperBase *this_01;
  PVZ2UIButton *pPVar15;
  int iVar16;
  long *plVar17;
  code *pcVar18;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  string asStack_a0 [8];
  int aiStack_98 [4];
  int aiStack_88 [2];
  int iStack_80;
  string asStack_78 [4];
  int iStack_74;
  int iStack_70;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  long lStack_8;
  
  this[0x59] = (HintUI)0x0;
  this_00 = (RtWeakPtr *)(this + 0x300);
  lStack_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  std::vector<HintImage,std::allocator<HintImage>>::clear
            ((vector<HintImage,std::allocator<HintImage>> *)(this + 0x130));
  std::vector<HintWord,std::allocator<HintWord>>::clear
            ((vector<HintWord,std::allocator<HintWord>> *)(this + 0x148));
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pLVar11 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = (int)((double)iVar6 * 0.7);
    pSVar12 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = iVar5 / 2;
  }
  else {
    iVar4 = FUN_04bde324(0x3c);
    iVar5 = FUN_04bde324(0x78);
    iVar6 = FUN_04bde324(0x46);
    iVar7 = FUN_04bde324(10);
    iVar6 = iVar6 + iVar7;
  }
  *(undefined4 *)(this + 0x19c) = 0xffff;
  *(undefined4 *)(this + 0x1a0) = 0xffff;
  *(undefined4 *)(this + 0x1a4) = 0xffff;
  iVar8 = FUN_04bde324(500);
  iVar9 = FUN_04bde324(0x15e);
  iVar10 = *(int *)(this + 0x50) - iVar8 >> 1;
  iVar7 = *(int *)(this + 0x54) - iVar9 >> 1;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    iVar7 = iVar7 + iVar6;
    iVar9 = iVar9 - iVar6;
  }
  Sexy::Insets::Insets((Insets *)&uStack_40,iVar10,iVar7,iVar8,iVar9);
  iVar1 = iVar10 + iVar8 / 2;
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&uStack_40);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    iVar10 = FUN_04bde324(3);
    Sexy::Insets::Insets
              ((Insets *)&uStack_40,(iVar1 - iVar4 / 2) - iVar10,iVar7 - iVar6,iVar4,iVar5);
    *(ulong *)(this + 0x1a8) = CONCAT44(iStack_3c,uStack_40);
    *(undefined8 *)(this + 0x1b0) = uStack_38;
    iVar8 = FUN_04bde324(5);
    iVar10 = *(int *)(this + 0x1a8);
    iVar16 = *(int *)(this + 0x1ac) - iVar8;
    iVar8 = iVar4;
  }
  else {
    iVar5 = FUN_04bde324(0x46);
    iVar16 = iVar7;
  }
  Sexy::Insets::Insets((Insets *)&uStack_40,iVar10,iVar16,iVar8,iVar5);
  *(ulong *)(this + 0x1b8) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b5d0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar5 = (int)((double)iVar4 * 2.5);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b5d0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar4 = (int)((double)iVar4 * 0.8);
  if (this[0x192] == (HintUI)0x0) {
    iVar8 = -(iVar5 / 2);
    iVar10 = FUN_04bde324(0x14);
    iVar10 = ((iVar7 + iVar9) - iVar4) - iVar10;
  }
  else {
    iVar10 = (iVar7 + iVar9) - iVar4;
    iVar9 = FUN_04bde324(0x14);
    Sexy::Insets::Insets((Insets *)&uStack_40,(iVar1 - iVar5) - iVar9,iVar10 - iVar9,iVar5,iVar4);
    pPVar15 = *(PVZ2UIButton **)(this + 0x228);
    *(ulong *)(this + 0x1d8) = CONCAT44(iStack_3c,uStack_40);
    *(undefined8 *)(this + 0x1e0) = uStack_38;
    if (pPVar15 == (PVZ2UIButton *)0x0) {
      *(int *)(this + 0x19c) = *(int *)(this + 0x198) * 10 + 0x7531;
      Sexy::Color::Color((Color *)&uStack_40,1);
      pPVar15 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar15,*(int *)(this + 0x19c),(ButtonListener *)(this + 0x120),
                 (wstring *)(this + 0x218),(Color *)&uStack_40);
      *(PVZ2UIButton **)(this + 0x228) = pPVar15;
    }
    InitButton(this,pPVar15,*(undefined4 *)(this + 0x2f8));
    (**(code **)(**(long **)(this + 0x228) + 0x1a0))(*(long **)(this + 0x228),this + 0x1d8);
    plVar17 = *(long **)(this + 0x228);
    pcVar18 = *(code **)(*plVar17 + 800);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar18)(plVar17,uVar13);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x228));
    iVar8 = FUN_04bde324(0x14);
    iVar10 = iVar10 - iVar8;
  }
  Sexy::Insets::Insets((Insets *)&uStack_40,iVar1 + iVar8,iVar10,iVar5,iVar4);
  *(ulong *)(this + 0x1e8) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(this + 0x1f0) = uStack_38;
  pPVar15 = *(PVZ2UIButton **)(this + 0x230);
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    *(int *)(this + 0x1a0) = *(int *)(this + 0x198) * 10 + 0x7532;
    Sexy::Color::Color((Color *)&uStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,*(int *)(this + 0x1a0),(ButtonListener *)(this + 0x120),
               (wstring *)(this + 0x220),(Color *)&uStack_40);
    *(PVZ2UIButton **)(this + 0x230) = pPVar15;
  }
  InitButton(this,pPVar15,*(undefined4 *)(this + 0x2fc));
  (**(code **)(**(long **)(this + 0x230) + 0x1a0))(*(long **)(this + 0x230),this + 0x1e8);
  plVar17 = *(long **)(this + 0x230);
  pcVar18 = *(code **)(*plVar17 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  (*pcVar18)(plVar17,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x230));
  if (this[0x194] == (HintUI)0x0) {
    iVar7 = iVar7 + iVar6;
    PopingWidget::GetMainRect();
    iVar6 = aiStack_88[0];
    iVar4 = FUN_04bde324(0x14);
    iVar6 = iVar6 + iVar4;
    PopingWidget::GetMainRect();
    iVar5 = iStack_70;
    iVar4 = FUN_04bde324(0x28);
    iVar5 = iVar5 - iVar4;
    iVar4 = *(int *)(this + 0x1ec);
    iVar10 = FUN_04bde324(10);
    iVar10 = (iVar4 - iVar7) - iVar10;
  }
  else {
    PopingWidget::GetMainRect();
    iVar6 = aiStack_88[0];
    iVar4 = FUN_04bde324(0x14);
    iVar6 = iVar6 + iVar4;
    iVar7 = FUN_04bde324(0x32);
    iVar7 = *(int *)(this + 0x1ec) - iVar7;
    PopingWidget::GetMainRect();
    iVar5 = iStack_70;
    iVar10 = FUN_04bde324(0x28);
    iVar5 = iVar5 - iVar10;
  }
  Sexy::Insets::Insets((Insets *)&uStack_40,iVar6,iVar7,iVar5,iVar10);
  *(ulong *)(this + 0x1c8) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(this + 0x1d0) = uStack_38;
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b4f0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b4f0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar5 = FUN_04bde324(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar7 = FUN_04bde324(10);
  Sexy::Insets::Insets
            ((Insets *)&uStack_40,((aiStack_98[0] + iStack_80) - iVar6 / 2) + iVar5,
             (iStack_74 - iVar4 / 2) + iVar7,iVar6,iVar4);
  pPVar15 = *(PVZ2UIButton **)(this + 0x238);
  *(ulong *)(this + 0x1f8) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(this + 0x200) = uStack_38;
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    *(int *)(this + 0x1a4) = *(int *)(this + 0x198) * 10 + 0x7533;
    FUN_05478178(asStack_78,&DAT_056f11a8,(string *)aiStack_88);
    Sexy::Color::Color((Color *)&uStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,*(int *)(this + 0x1a4),(ButtonListener *)(this + 0x120),(wstring *)asStack_78
               ,(Color *)&uStack_40);
    *(PVZ2UIButton **)(this + 0x238) = pPVar15;
    FUN_05476c50(asStack_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x238);
    if (pPVar15 == (PVZ2UIButton *)0x0) goto LAB_04be1104;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8b4f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&uStack_40,&DAT_06b8b540,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&uStack_40);
  (**(code **)(**(long **)(this + 0x238) + 0x1a0))(*(long **)(this + 0x238),this + 0x1f8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x238));
LAB_04be1104:
  if (this[0x193] != (HintUI)0x0) {
    InitShiningAnims(this);
  }
  uStack_b0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x178));
  uStack_a8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x178));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_b0,(__normal_iterator *)&uStack_a8), bVar2)
  {
    piVar14 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_b0);
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar3 = NameMapperBase::ContainsId(this_01,*piVar14);
    if (cVar3 == '\0') {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_a0);
      GetContentRect();
      iVar6 = aiStack_88[0];
      GetContentRect();
      iVar4 = iStack_70;
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      PopingWidget::GetMainRect();
      iVar5 = iStack_3c;
      iVar10 = FUN_04bde324(0x3c);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pSVar12 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
      Sexy::Insets::Insets
                ((Insets *)aiStack_98,iVar6 + (iVar4 - iVar7) / 2,iVar5 + iVar10,iVar9,iVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)asStack_a0);
      Sexy::Insets::Insets((Insets *)&uStack_40,(Insets *)aiStack_98);
      AddImageInRect(this,asStack_78,(Insets *)&uStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_a0);
    }
    else {
      GetContentRect();
      iVar6 = aiStack_88[0];
      GetContentRect();
      iVar4 = iStack_70;
      iVar7 = FUN_04bde324(100);
      PopingWidget::GetMainRect();
      iVar5 = iStack_3c;
      iVar10 = FUN_04bde324(0x3c);
      iVar9 = FUN_04bde324(100);
      Sexy::Insets::Insets
                ((Insets *)aiStack_98,iVar6 + (iVar4 - iVar7) / 2,iVar5 + iVar10,iVar9,iVar9);
      iVar6 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar6);
      FUN_05475d88((string *)aiStack_88,asStack_a0);
      Sexy::Insets::Insets((Insets *)&uStack_40,(Insets *)aiStack_98);
      std::string::string(asStack_78,"");
      AddAnimInRect((HintUI *)0x3fc00000,this,(string *)aiStack_88,(Insets *)&uStack_40,asStack_78,1
                    ,1);
      std::string::~string(asStack_78);
      nop();
      std::string::~string((string *)aiStack_88);
      FUN_05478178((string *)aiStack_88,&DAT_056f11a8,auStack_b8);
      Sexy::Insets::Insets((Insets *)asStack_78,(Insets *)aiStack_98);
      uVar13 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)&uStack_40,1);
      AddWordInRect(this,(string *)aiStack_88,asStack_78,uVar13,(Insets *)&uStack_40,5);
      FUN_05476c50((string *)aiStack_88);
      nop();
      std::string::~string(asStack_a0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_b0);
  }
  (**(code **)(*(long *)this + 0x318))(this);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HintUI::ShowHintUI() */

void __thiscall HintUI::ShowHintUI(HintUI *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  InitView(this);
  uVar2 = operator|(0x10,0x20);
  uVar2 = operator|(uVar2,0x1000);
  uVar1 = operator|(uVar2,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,this,uVar1);
  (**(code **)(*(long *)this + 0x158))(this,1);
  (**(code **)(*(long *)this + 0x310))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::SetBonus(int, int) */

void __thiscall HintUI::SetBonus(HintUI *this,int param_1,int param_2)

{
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_1,param_2);
  std::vector<HintBonusInfo,std::allocator<HintBonusInfo>>::push_back
            ((vector<HintBonusInfo,std::allocator<HintBonusInfo>> *)(this + 0x178),
             (HintBonusInfo *)aUStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintUI::Update() */

void __thiscall HintUI::Update(HintUI *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::Update((PopingWidget *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x160));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x160));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = EffectAnim_UIAnim::IsValid(*(EffectAnim_UIAnim **)(lVar3 + 8));
    if (cVar2 != '\0') {
      EffectAnim_UIAnim::OnUpdate(*(EffectAnim_UIAnim **)(lVar3 + 8));
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x340));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x340));
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x310));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x310));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

