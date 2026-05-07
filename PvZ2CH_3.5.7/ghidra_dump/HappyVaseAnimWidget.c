// Class: HappyVaseAnimWidget


/* HappyVaseAnimWidget::onVaseAnimStartOrEnd(bool) */

void __thiscall HappyVaseAnimWidget::onVaseAnimStartOrEnd(HappyVaseAnimWidget *this,bool param_1)

{
  this[0xd9] = (HappyVaseAnimWidget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseAnimWidget::Init(int, bool) */

void __thiscall HappyVaseAnimWidget::Init(HappyVaseAnimWidget *this,int param_1,bool param_2)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  char *__s;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (EffectAnim_UIAnim *)(this + 0xe8);
  std::string::string(asStack_18,"POPANIM_UI_HAPPYVASEBREAKER_EFFECT_VASE");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f333333,local_10,local_c,this_00,asStack_18,1);
  std::string::~string(asStack_18);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    if (param_2) {
      *(undefined4 *)(this + 0xe0) = 2;
      __s = "broken";
    }
    else {
      *(undefined4 *)(this + 0xe0) = 0;
      __s = "normal";
    }
    std::string::string((string *)&local_10,__s);
    EffectAnim_UIAnim::PlayOnce(this_00,(FastCurve *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseAnimWidget::HappyVaseAnimWidget() */

void __thiscall HappyVaseAnimWidget::HappyVaseAnimWidget(HappyVaseAnimWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  this[0xd8] = (HappyVaseAnimWidget)0x0;
  this[0xd9] = (HappyVaseAnimWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_066fb0b0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onVaseAnimStartOrEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<HappyVaseAnimWidget,void(HappyVaseAnimWidget::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BreakVaseStartOrEnd,&local_40);
  return;
}


/* HappyVaseAnimWidget::~HappyVaseAnimWidget() */

void __thiscall HappyVaseAnimWidget::~HappyVaseAnimWidget(HappyVaseAnimWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066fb0b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x118));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HappyVaseAnimWidget::~HappyVaseAnimWidget() */

void __thiscall HappyVaseAnimWidget::~HappyVaseAnimWidget(HappyVaseAnimWidget *this)

{
  ~HappyVaseAnimWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseAnimWidget::StartBreak() */

void __thiscall HappyVaseAnimWidget::StartBreak(HappyVaseAnimWidget *this)

{
  char cVar1;
  UIHappyVaseBreaker *this_00;
  char *__s;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe8));
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0xe0) = 1;
    this_00 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
    UIHappyVaseBreaker::LockOperation(this_00);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::BreakVaseStartOrEnd,true);
    if (this[0xd8] == (HappyVaseAnimWidget)0x0) {
      __s = "open_blue";
    }
    else {
      __s = "open_orange";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnBroken);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<HappyVaseAnimWidget,void(HappyVaseAnimWidget::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(this + 0xe8),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseAnimWidget::OnBroken(std::string const&) */

void HappyVaseAnimWidget::OnBroken(string *param_1)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  UIHappyVaseBreaker *pUVar4;
  ulong uVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = FUN_03a0ebcc(uVar6,*(undefined8 *)(param_1 + 0x120));
    if (uVar1 <= uVar5) break;
    pUVar4 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
    piVar2 = (int *)FUN_03a0ebd8(uVar6,uVar5);
    UIHappyVaseBreaker::SetRewardGet(pUVar4,*piVar2);
    uVar5 = uVar5 + 1;
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = FUN_03a0ebcc(uVar6,*(undefined8 *)(param_1 + 0x120));
    if (uVar1 <= uVar5) break;
    piVar2 = (int *)FUN_03a0ebd8(uVar6,uVar5);
    piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_38,piVar2);
    piVar3 = (int *)FUN_03a0ebd8(*(undefined8 *)(param_1 + 0x118),uVar5);
    *piVar2 = piVar3[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,piVar3);
    uVar5 = uVar5 + 1;
  }
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BreakVaseStartOrEnd,false)
  ;
  pUVar4 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
  UIHappyVaseBreaker::CheckReset(pUVar4);
  pUVar4 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
  UIHappyVaseBreaker::UnlockOperation(pUVar4);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseAnimWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall HappyVaseAnimWidget::TouchEnded(HappyVaseAnimWidget *this,Touch *param_1)

{
  int iVar1;
  UIHappyVaseBreaker *this_00;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0xd9] == (HappyVaseAnimWidget)0x0) && (*(int *)(this + 0xe0) == 0)) &&
     (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1)) {
    this_00 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
    iVar1 = UIHappyVaseBreaker::GetVaseBreakHammerNeed(this_00);
    if (iVar1 < 0) {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[HAPPY_VASE_BREAKER_HAMMER_ERROR]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_50);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
        thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
    }
    else {
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar2,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[HAPPY_VASE_BREAKER_HAMMER_CONFIRM]");
        TodReplaceNumberString(awStack_58,L"{NUM}",iVar1);
        FUN_054766c8(awStack_58,asStack_50);
        FUN_05476c50(asStack_50);
        UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_60);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,BreakConfirm);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<HappyVaseAnimWidget,void(HappyVaseAnimWidget::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(pUVar2,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseAnimWidget::BreakConfirm(UIMessageBox*, int) */

void __thiscall
HappyVaseAnimWidget::BreakConfirm(HappyVaseAnimWidget *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  UIHappyVaseBreaker *pUVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  undefined8 uVar6;
  DNetwork *this_01;
  wstring awStack_d48 [8];
  wstring awStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1952];
  string asStack_548 [1344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    pUVar3 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
    iVar1 = UIHappyVaseBreaker::GetVaseBreakHammerNeed(pUVar3);
    pUVar3 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr();
    iVar2 = UIHappyVaseBreaker::GetHammerNum(pUVar3);
    if (iVar2 < iVar1) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[HAPPY_VASE_BREAKER_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_d40,awStack_d48);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_00,pIVar4);
        std::string::~string(asStack_ce8);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar5 + 0xd8,amStack_d18);
        FUN_05476c50(amStack_d18);
        FUN_05476c50(awStack_d40);
        FUN_05476c50(awStack_d48);
      }
    }
    else {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string((string *)awStack_d40,"i");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,(string *)awStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd4));
      FUN_05474278(uVar6,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string((string *)awStack_d40);
      nop();
      this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_03a0f928(afStack_d38,this,iVar1);
      std::string::string((string *)awStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_01,asStack_548,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 (string *)awStack_d40,0);
      std::string::~string((string *)awStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

