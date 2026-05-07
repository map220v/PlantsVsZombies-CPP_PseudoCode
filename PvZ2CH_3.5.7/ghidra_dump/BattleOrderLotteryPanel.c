// Class: BattleOrderLotteryPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::GetLayoutName() */

void __thiscall BattleOrderLotteryPanel::GetLayoutName(BattleOrderLotteryPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"BattleOrderLotteryPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* BattleOrderLotteryPanel::InitSteps() */

void __thiscall BattleOrderLotteryPanel::InitSteps(BattleOrderLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x17c) = 0;
  iVar3 = FUN_03a2be6c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  *(undefined4 *)(this + 0x180) = 4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0xc / iVar3;
  }
  iVar1 = ((iVar3 * -100 + -0x12) - (0xc - iVar1 * iVar3)) + *(int *)(this + 0x170);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar1 / iVar3;
  }
  iVar1 = iVar1 - iVar2 * iVar3;
  *(int *)(this + 0x188) = iVar1 + 0x10;
  *(int *)(this + 0x184) = iVar1 + 0x1e;
  return;
}


/* BattleOrderLotteryPanel::StartLottery(int) */

void __thiscall BattleOrderLotteryPanel::StartLottery(BattleOrderLotteryPanel *this,int param_1)

{
  InitSteps(this);
  *(int *)(this + 0x170) = param_1;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x1c0) = 1;
  this[0x131] = (BattleOrderLotteryPanel)0x0;
  *(undefined4 *)(this + 0x178) = 0x40400000;
  return;
}


/* BattleOrderLotteryPanel::AlmostThere() */

bool __thiscall BattleOrderLotteryPanel::AlmostThere(BattleOrderLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_03a2be6c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0x184) - *(int *)(this + 0x17c) <= iVar1 >> 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::LotteryEffect() */

void __thiscall BattleOrderLotteryPanel::LotteryEffect(BattleOrderLotteryPanel *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  long *plVar2;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x131] = (BattleOrderLotteryPanel)0x1;
  Sexy::StrFormat("Widget_LotteryItem%d",asStack_50,(ulong)*(uint *)(this + 0x170));
  this_00 = (EffectAnim_UIAnim *)(this + 400);
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  (**(code **)(*plVar2 + 0x48))(&local_60);
  std::string::~string(asStack_50);
  std::string::string(asStack_50,"POPANIM_EFFECTS_LOTTERY_RESULT_BG");
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_68,(float)(local_60 + local_58 / 2),
             (float)(local_5c + local_54 / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f800000,local_68,local_64,this_00,asStack_50,1);
  std::string::~string(asStack_50);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string((string *)&local_68,"icon_on");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,LotteryEffectFinish);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<BattleOrderLotteryPanel,void(BattleOrderLotteryPanel::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    EffectAnim_UIAnim::PlayOnceThen(this_00,(FastCurve *)&local_68,aDStack_38);
    std::string::~string((string *)&local_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
BattleOrderLotteryPanel::DrawAll
          (BattleOrderLotteryPanel *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  Image *pIVar6;
  ulong uVar7;
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  uVar4 = FUN_03a2be6c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  if (uVar4 != 0) {
    do {
      if (*(int *)(this + 0x174) == (int)uVar7) {
        Sexy::StrFormat("Widget_LotteryItem%d",asStack_20);
        plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
        (**(code **)(*plVar5 + 0x48))(&local_18);
        std::string::~string(asStack_20);
        pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac40a8);
        iVar1 = local_18;
        iVar3 = FUN_03a2d914(10);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar6,iVar1 - iVar3,local_14 - iVar3,iVar3 * 2 + local_10,
                   iVar3 * 2 + local_c);
        uVar4 = FUN_03a2be6c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 400));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 400),param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BattleOrderLotteryPanel::BattleOrderLotteryPanel() */

void __thiscall BattleOrderLotteryPanel::BattleOrderLotteryPanel(BattleOrderLotteryPanel *this)

{
  UISingletonDialog<BattleOrderLotteryPanel>::UISingletonDialog
            ((UISingletonDialog<BattleOrderLotteryPanel> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_067033f0;
  *(undefined **)(this + 0xd8) = &DAT_06703740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x174) = 0xffffffff;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 400));
  *(undefined4 *)(this + 0x1c0) = 0;
  return;
}


/* BattleOrderLotteryPanel::~BattleOrderLotteryPanel() */

void __thiscall BattleOrderLotteryPanel::~BattleOrderLotteryPanel(BattleOrderLotteryPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_067033f0;
  *(undefined **)(this + 0xd8) = &DAT_06703740;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 400));
  std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::~vector
            ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x158));
  std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::~vector
            ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x140));
  UISingletonDialog<BattleOrderLotteryPanel>::~UISingletonDialog
            ((UISingletonDialog<BattleOrderLotteryPanel> *)this);
  return;
}


/* BattleOrderLotteryPanel::~BattleOrderLotteryPanel() */

void __thiscall BattleOrderLotteryPanel::~BattleOrderLotteryPanel(BattleOrderLotteryPanel *this)

{
  ~BattleOrderLotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::SelectNext() */

void __thiscall BattleOrderLotteryPanel::SelectNext(BattleOrderLotteryPanel *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03a2be6c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0x174) + 1) / uVar3);
  }
  *(int *)(this + 0x174) = (*(int *)(this + 0x174) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_03a3331c,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar6 = *(float *)(this + 0x178);
  fVar5 = (float)PVZ_T();
  lVar2 = ___stack_chk_guard;
  *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
  *(float *)(this + 0x18c) = fVar5 + 1.0 / fVar6;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderLotteryPanel::TryToSelectNext() */

char __thiscall BattleOrderLotteryPanel::TryToSelectNext(BattleOrderLotteryPanel *this)

{
  char cVar1;
  
  cVar1 = InvitationLotteryPanel::CanSelectNext((InvitationLotteryPanel *)this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* BattleOrderLotteryPanel::UpdateSelectFrame() */

void __thiscall BattleOrderLotteryPanel::UpdateSelectFrame(BattleOrderLotteryPanel *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x1c0);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x174) == *(int *)(this + 0x170))) {
      *(undefined4 *)(this + 0x1c0) = 2;
      return;
    }
    cVar2 = TryToSelectNext(this);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x17c);
      if (*(int *)(this + 0x180) < iVar1) {
        if (iVar1 <= *(int *)(this + 0x188)) {
          *(undefined4 *)(this + 0x178) = 0x41f00000;
          return;
        }
        fVar3 = *(float *)(this + 0x178);
        if (iVar1 < *(int *)(this + 0x184)) {
          fVar3 = fVar3 - 2.0;
          *(float *)(this + 0x178) = fVar3;
        }
      }
      else {
        fVar3 = *(float *)(this + 0x178) + 6.0;
        *(float *)(this + 0x178) = fVar3;
      }
      if (fVar3 <= 30.0) {
        if (fVar3 < 1.0) {
          *(undefined4 *)(this + 0x178) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(this + 0x178) = 0x41f00000;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0x174) = 0xffffffff;
      return;
    }
    if ((iVar1 == 2) &&
       (*(undefined4 *)(this + 0x174) = *(undefined4 *)(this + 0x170),
       this[0x131] == (BattleOrderLotteryPanel)0x0)) {
      LotteryEffect(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::Update() */

void __thiscall BattleOrderLotteryPanel::Update(BattleOrderLotteryPanel *this)

{
  char cVar1;
  UIWidgetText *this_00;
  UIBattleOrder *pUVar2;
  UIWidgetAnim *pUVar3;
  PVZ2UIButton *pPVar4;
  long lVar5;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 400));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 400));
  }
  std::string::string(asStack_18,"UIText_Material_Number");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  pUVar2 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  local_1c = UIBattleOrder::GetCurrentGemCost(pUVar2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
  UIWidgetText::SetString(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  pUVar2 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  cVar1 = UIBattleOrder::IsLotteryMax(pUVar2);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UIButton_Lottery");
    pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,1);
    std::string::~string(asStack_10);
    nop();
  }
  pUVar2 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  cVar1 = UIBattleOrder::CanLottery(pUVar2);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UIAnim_Shining");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
    lVar5 = *(long *)pUVar3;
  }
  else {
    std::string::string(asStack_10,"UIAnim_Shining");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
    lVar5 = *(long *)pUVar3;
  }
  (**(code **)(lVar5 + 0x158))(pUVar3,cVar1 != '\0');
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::RequestLottery() */

void __thiscall BattleOrderLotteryPanel::RequestLottery(BattleOrderLotteryPanel *this)

{
  string *this_00;
  undefined8 uVar1;
  UIInvitation *this_01;
  DNetwork *this_02;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1592];
  string asStack_6b0 [1704];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"type");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"ln");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  this_01 = (UIInvitation *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  local_d48[0] = UIInvitation::GetCurrentGemCost(this_01);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a2d748(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_6b0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* BattleOrderLotteryPanel::ButtonDepress(int) */

void __thiscall BattleOrderLotteryPanel::ButtonDepress(BattleOrderLotteryPanel *this,int param_1)

{
  char cVar1;
  int iVar2;
  UIBattleOrder *pUVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    pUVar3 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
    cVar1 = UIBattleOrder::CanLottery(pUVar3);
    if (cVar1 == '\0') {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar4);
        std::string::~string(asStack_10);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      RequestLottery(this);
      pUVar3 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
      iVar2 = UIBattleOrder::GetCurrentGemCost(pUVar3);
      UIBattleOrder::AddIntegral(pUVar3,-iVar2);
      pUVar3 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
      UIBattleOrder::AddDrawTimes(pUVar3);
      UISingletonDialog<EmptyDialog>::ShowDialog();
      pUVar3 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
      UIBattleOrder::LockButton(pUVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BattleOrderLotteryPanel::ButtonDepress(int) */

void __thiscall BattleOrderLotteryPanel::ButtonDepress(BattleOrderLotteryPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::RequestChest(int) */

void __thiscall BattleOrderLotteryPanel::RequestChest(BattleOrderLotteryPanel *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1592];
  string asStack_6b0 [1704];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"type");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"gi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x170));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"bai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a2d7a4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_6b0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* BattleOrderLotteryPanel::DetermineSelect(UIMessageBox*, int) */

void __thiscall
BattleOrderLotteryPanel::DetermineSelect
          (BattleOrderLotteryPanel *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  UICustomVoting *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(),
     this_00 != (UICustomVoting *)0x0)) {
    iVar1 = UICustomVoting::GetVotedTickets(this_00);
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
    RequestChest(this,iVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::ShowBonusUI() */

void __thiscall BattleOrderLotteryPanel::ShowBonusUI(BattleOrderLotteryPanel *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  char *pcVar5;
  PopingBonusUI *pPVar6;
  pair<wchar_t_const,wchar_t> apStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x138) == 0) {
    pPVar6 = ::operator_new(0x1d0);
    PopingBonusUI::PopingBonusUI(pPVar6);
    *(PopingBonusUI **)(this + 0x138) = pPVar6;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x138));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    if (*(long *)(this + 0x138) == 0) goto LAB_03a36c34;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  puVar2 = (undefined8 *)FUN_03a2be58(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x170));
  pwVar3 = (wchar_t *)FUN_03a2be60(*puVar2,0);
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,pwVar3,pwVar3 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
             (pair *)apStack_48);
  PopingBonusUI::InitBonus(*(PopingBonusUI **)(this + 0x138),(vector *)avStack_40);
  uVar4 = operator|(0x10,0x20);
  uVar4 = operator|(uVar4,0x1000);
  uVar1 = operator|(uVar4,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0x138),uVar1);
  (**(code **)(**(long **)(this + 0x138) + 0x310))(*(long **)(this + 0x138));
  pPVar6 = *(PopingBonusUI **)(this + 0x138);
  FUN_03a2d800(afStack_28,this);
  PopingBonusUI::SetCloseFuction(pPVar6,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40);
LAB_03a36c34:
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_PlantLevelUp");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::LotteryEffectFinish(std::string const&) */

void BattleOrderLotteryPanel::LotteryEffectFinish(string *param_1)

{
  char cVar1;
  UIBattleOrder *this;
  long lVar2;
  UICommonItemSelect *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  local_8 = ___stack_chk_guard;
  UISingletonDialog<EmptyDialog>::CloseDialog();
  this = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  UIBattleOrder::UnlockButton(this);
  lVar2 = FUN_03a2be58(*(undefined8 *)(param_1 + 0x140),(long)*(int *)(param_1 + 0x170));
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(lVar2 + 0x20));
  if (cVar1 == '\0') {
    this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
    std::string::string(asStack_30,"[BATTLE_ORDER_SELECT_TITLE]");
    UICommonItemSelect::SetTitle(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"[BATTLE_ORDER_SELECT_DESCRIPTION]");
    UICommonItemSelect::SetDescription(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    UICommonItemSelect::SetCloseButtonVisible(this_00,false);
    lVar2 = FUN_03a2be58(*(undefined8 *)(param_1 + 0x140),(long)*(int *)(param_1 + 0x170));
    (**(code **)(*(long *)this_00 + 0x350))(this_00,lVar2 + 0x20);
    FUN_03a2d8b8(afStack_28,param_1);
    UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  else {
    ShowBonusUI((BattleOrderLotteryPanel *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderLotteryPanel::InitView(std::vector<BattleOrderAward, std::allocator<BattleOrderAward>
   > const&) */

void __thiscall BattleOrderLotteryPanel::InitView(BattleOrderLotteryPanel *this,vector *param_1)

{
  char cVar1;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  UIWidgetAnim *pUVar4;
  undefined8 *puVar5;
  int *piVar6;
  BattleOrderAward *pBVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  CUILabel *this_00;
  undefined4 *puVar11;
  PrimeTypeface *pPVar12;
  int iVar13;
  ulong uVar14;
  bool bVar15;
  UIRewardFrameSelect *pUVar16;
  UIRewardFrameSelect *local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Material");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Material_Number");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Tip");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIAnim_Shining");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
  pUVar4[0x6d] = (UIWidgetAnim)0x0;
  std::string::~string(asStack_10);
  nop();
  std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::clear
            ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x140));
  uVar14 = 0;
  while( true ) {
    uVar8 = FUN_03a2be6c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar8 <= uVar14) break;
    iVar13 = (int)uVar14;
    if ((iVar13 == 7) || (iVar13 == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = iVar13 != 0x11 && iVar13 != 10;
    }
    Sexy::StrFormat("Widget_LotteryItem%d",asStack_10,uVar14 & 0xffffffff);
    plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    local_18 = (UIRewardFrameSelect *)0x0;
    lVar10 = FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
    cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(lVar10 + 0x20));
    if (cVar1 == '\0') {
      lVar10 = FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
      lVar10 = FUN_03a2bf00(*(undefined8 *)(lVar10 + 0x20),0);
      this_00 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(lVar10 + 4),bVar15);
      local_18 = (UIRewardFrameSelect *)this_00;
      lVar10 = FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
      puVar11 = (undefined4 *)FUN_03a2bf00(*(undefined8 *)(lVar10 + 0x20),0);
      pPVar12 = (PrimeTypeface *)FUN_03a3385c(*puVar11);
      Lua::CUILabel::SetTypeface(this_00,pPVar12);
      pUVar16 = local_18;
      lVar10 = FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
      puVar11 = (undefined4 *)FUN_03a2bf00(*(undefined8 *)(lVar10 + 0x20),0);
      FUN_03a339ec(asStack_10,*puVar11);
      LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pUVar16);
      FUN_05476c50(asStack_10);
    }
    else {
      puVar5 = (undefined8 *)FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
      piVar6 = (int *)FUN_03a2bf00(*puVar5,0);
      local_18 = (UIRewardFrameSelect *)
                 UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],bVar15);
    }
    pUVar16 = local_18;
    lVar10 = FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
    if (0 < *(int *)(lVar10 + 0x38)) {
      std::string::string(asStack_10,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
      UIRewardFrame::SetLockString((UIRewardFrame *)pUVar16,asStack_10);
      std::string::~string(asStack_10);
      nop();
      pUVar16 = local_18;
    }
    (**(code **)(*(long *)pUVar16 + 0x198))
              (pUVar16,0,0,(int)plVar9[10],*(undefined4 *)((long)plVar9 + 0x54));
    (**(code **)(*plVar9 + 0x60))(plVar9,local_18);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x158),
               &local_18);
    pBVar7 = (BattleOrderAward *)FUN_03a2bf2c(*(undefined8 *)param_1,uVar14);
    std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::push_back
              ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x140),pBVar7);
    uVar14 = uVar14 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

