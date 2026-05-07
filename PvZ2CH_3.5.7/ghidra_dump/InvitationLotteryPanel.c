// Class: InvitationLotteryPanel


/* InvitationLotteryPanel::CanSelectNext() */

bool __thiscall InvitationLotteryPanel::CanSelectNext(InvitationLotteryPanel *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x18c) <= fVar1;
}


/* InvitationLotteryPanel::OnCreate() */

undefined8 __thiscall InvitationLotteryPanel::OnCreate(InvitationLotteryPanel *this)

{
  UI::Dialog::OnCreate((Dialog *)this);
  return 1;
}


/* InvitationLotteryPanel::CloseBonusUI() */

void __thiscall InvitationLotteryPanel::CloseBonusUI(InvitationLotteryPanel *this)

{
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x138))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::GetLayoutName() */

void __thiscall InvitationLotteryPanel::GetLayoutName(InvitationLotteryPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"InvitationLotteryPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* InvitationLotteryPanel::AlmostThere() */

bool __thiscall InvitationLotteryPanel::AlmostThere(InvitationLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_04e66054(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return *(int *)(this + 0x184) - *(int *)(this + 0x17c) <= iVar1 >> 2;
}


/* InvitationLotteryPanel::InitSteps() */

void __thiscall InvitationLotteryPanel::InitSteps(InvitationLotteryPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x17c) = 0;
  iVar3 = FUN_04e66054(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
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


/* InvitationLotteryPanel::StartLottery(int) */

void __thiscall InvitationLotteryPanel::StartLottery(InvitationLotteryPanel *this,int param_1)

{
  InitSteps(this);
  *(int *)(this + 0x170) = param_1;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x1c8) = 1;
  this[0x131] = (InvitationLotteryPanel)0x0;
  *(undefined4 *)(this + 0x178) = 0x40400000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::LotteryEffect() */

void __thiscall InvitationLotteryPanel::LotteryEffect(InvitationLotteryPanel *this)

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
  this[0x131] = (InvitationLotteryPanel)0x1;
  Sexy::StrFormat("Widget_LotteryItem%d",asStack_50,(ulong)*(uint *)(this + 0x170));
  this_00 = (EffectAnim_UIAnim *)(this + 0x198);
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
    Delegate1<InvitationLotteryPanel,void(InvitationLotteryPanel::*)(std::string_const&)>
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
/* InvitationLotteryPanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
InvitationLotteryPanel::DrawAll(InvitationLotteryPanel *this,ModalFlags *param_1,Graphics *param_2)

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
  uVar4 = FUN_04e66054(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  if (uVar4 != 0) {
    do {
      if (*(int *)(this + 0x174) == (int)uVar7) {
        Sexy::StrFormat("Widget_LotteryItem%d",asStack_20);
        plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
        (**(code **)(*plVar5 + 0x48))(&local_18);
        std::string::~string(asStack_20);
        pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fae0);
        iVar1 = local_18;
        iVar3 = FUN_04e67c24(10);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar6,iVar1 - iVar3,local_14 - iVar3,iVar3 * 2 + local_10,
                   iVar3 * 2 + local_c);
        uVar4 = FUN_04e66054(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  cVar2 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar2 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x198),param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* InvitationLotteryPanel::InvitationLotteryPanel() */

void __thiscall InvitationLotteryPanel::InvitationLotteryPanel(InvitationLotteryPanel *this)

{
  UISingletonDialog<InvitationLotteryPanel>::UISingletonDialog
            ((UISingletonDialog<InvitationLotteryPanel> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_069e5040;
  *(undefined **)(this + 0xd8) = &DAT_069e5390;
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
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  *(undefined4 *)(this + 0x1c8) = 0;
  this[0x1cc] = (InvitationLotteryPanel)0x0;
  return;
}


/* InvitationLotteryPanel::~InvitationLotteryPanel() */

void __thiscall InvitationLotteryPanel::~InvitationLotteryPanel(InvitationLotteryPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069e5040;
  *(undefined **)(this + 0xd8) = &DAT_069e5390;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::~vector
            ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x158));
  std::vector<InvitationLottery,std::allocator<InvitationLottery>>::~vector
            ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x140));
  UISingletonDialog<InvitationLotteryPanel>::~UISingletonDialog
            ((UISingletonDialog<InvitationLotteryPanel> *)this);
  return;
}


/* InvitationLotteryPanel::~InvitationLotteryPanel() */

void __thiscall InvitationLotteryPanel::~InvitationLotteryPanel(InvitationLotteryPanel *this)

{
  ~InvitationLotteryPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::SelectNext() */

void __thiscall InvitationLotteryPanel::SelectNext(InvitationLotteryPanel *this)

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
  uVar3 = FUN_04e66054(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  iVar1 = 0;
  if (uVar3 != 0) {
    iVar1 = (int)((ulong)(long)(*(int *)(this + 0x174) + 1) / uVar3);
  }
  *(int *)(this + 0x174) = (*(int *)(this + 0x174) + 1) - iVar1 * (int)uVar3;
  psVar4 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  std::string::string(asStack_10,"Play_Coin");
  AudioMgr::SendEventThrottled(psVar4,_FUN_04e6d7dc,asStack_10);
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


/* InvitationLotteryPanel::TryToSelectNext() */

char __thiscall InvitationLotteryPanel::TryToSelectNext(InvitationLotteryPanel *this)

{
  char cVar1;
  
  cVar1 = CanSelectNext(this);
  if (cVar1 != '\0') {
    SelectNext(this);
  }
  return cVar1;
}


/* InvitationLotteryPanel::UpdateSelectFrame() */

void __thiscall InvitationLotteryPanel::UpdateSelectFrame(InvitationLotteryPanel *this)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x1c8);
  if (iVar1 == 1) {
    cVar2 = AlmostThere(this);
    if ((cVar2 != '\0') && (*(int *)(this + 0x174) == *(int *)(this + 0x170))) {
      *(undefined4 *)(this + 0x1c8) = 2;
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
       this[0x131] == (InvitationLotteryPanel)0x0)) {
      LotteryEffect(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::Update() */

void __thiscall InvitationLotteryPanel::Update(InvitationLotteryPanel *this)

{
  char cVar1;
  UIWidgetText *this_00;
  UIInvitation *pUVar2;
  UIWidgetAnim *pUVar3;
  PVZ2UIButton *pPVar4;
  long lVar5;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateSelectFrame(this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x198));
  }
  std::string::string(asStack_18,"UIText_Material_Number");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  pUVar2 = (UIInvitation *)UISingletonDialog<UIInvitation>::GetSingletonPtr();
  local_1c = UIInvitation::GetCurrentGemCost(pUVar2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
  UIWidgetText::SetString(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (this[0x1cc] != (InvitationLotteryPanel)0x0) {
    std::string::string(asStack_10,"UIButton_Lottery");
    pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,1);
    std::string::~string(asStack_10);
    nop();
  }
  pUVar2 = (UIInvitation *)UISingletonDialog<UIInvitation>::GetSingletonPtr();
  cVar1 = UIInvitation::CanLottery(pUVar2);
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
/* InvitationLotteryPanel::RequestLottery() */

void __thiscall InvitationLotteryPanel::RequestLottery(InvitationLotteryPanel *this)

{
  string *this_00;
  DNetwork *this_01;
  string *__n;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  __n = asStack_68;
  std::string::string(asStack_60,"type");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_60);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_60);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V878");
  FUN_04e67a54(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::ButtonDepress(int) */

void __thiscall InvitationLotteryPanel::ButtonDepress(InvitationLotteryPanel *this,int param_1)

{
  int iVar1;
  char cVar2;
  UIInvitation *this_00;
  UITourismOctober *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    this_00 = (UIInvitation *)UISingletonDialog<UIInvitation>::GetSingletonPtr();
    cVar2 = UIInvitation::CanLottery(this_00);
    if (cVar2 == '\0') {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[MATERIAL_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_02,pIVar3);
        std::string::~string(asStack_10);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      RequestLottery(this);
      UISingletonDialog<EmptyDialog>::ShowDialog();
      this_01 = (UITourismOctober *)UISingletonDialog<UIInvitation>::GetSingletonPtr();
      UITourismOctober::LockButton(this_01);
      iVar1 = *(int *)(this + 400);
      *(int *)(this + 400) = iVar1 + 1;
      if (iVar1 + 1 == *(int *)(this + 0x194)) {
        this[0x1cc] = (InvitationLotteryPanel)0x1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to InvitationLotteryPanel::ButtonDepress(int) */

void __thiscall InvitationLotteryPanel::ButtonDepress(InvitationLotteryPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::RequestChest(int) */

void __thiscall InvitationLotteryPanel::RequestChest(InvitationLotteryPanel *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  string *__n;
  int local_84 [7];
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_84[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  __n = asStack_68;
  std::string::string(asStack_60,"type");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_60);
  std::string::append(this_00,"1",(size_t)__n);
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_68,"gi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x170));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_68,"bai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_84);
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V878");
  FUN_04e67ab0(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationLotteryPanel::DetermineSelect(UIMessageBox*, int) */

void __thiscall
InvitationLotteryPanel::DetermineSelect
          (InvitationLotteryPanel *this,UIMessageBox *param_1,int param_2)

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
/* InvitationLotteryPanel::ShowBonusUI() */

void __thiscall InvitationLotteryPanel::ShowBonusUI(InvitationLotteryPanel *this)

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
    if (*(long *)(this + 0x138) == 0) goto LAB_04e704c0;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
  puVar2 = (undefined8 *)FUN_04e66098(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x170));
  pwVar3 = (wchar_t *)FUN_04e66028(*puVar2,0);
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
  FUN_04e67940(afStack_28,this);
  PopingBonusUI::SetCloseFuction(pPVar6,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40);
LAB_04e704c0:
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_PlantLevelUp");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::LotteryEffectFinish(std::string const&) */

void InvitationLotteryPanel::LotteryEffectFinish(string *param_1)

{
  char cVar1;
  UITourismOctober *this;
  long lVar2;
  UICommonItemSelect *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  local_8 = ___stack_chk_guard;
  UISingletonDialog<EmptyDialog>::CloseDialog();
  this = (UITourismOctober *)UISingletonDialog<UIInvitation>::GetSingletonPtr();
  UITourismOctober::UnlockButton(this);
  lVar2 = FUN_04e66098(*(undefined8 *)(param_1 + 0x140),(long)*(int *)(param_1 + 0x170));
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(lVar2 + 0x20));
  if (cVar1 == '\0') {
    this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
    std::string::string(asStack_30,"[UIINVITATION_REWARD_BOX_0]");
    UICommonItemSelect::SetTitle(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"[SELECT_THE_REWARD_FROM_THESE]");
    UICommonItemSelect::SetDescription(this_00,asStack_30);
    std::string::~string(asStack_30);
    nop();
    UICommonItemSelect::SetCloseButtonVisible(this_00,false);
    lVar2 = FUN_04e66098(*(undefined8 *)(param_1 + 0x140),(long)*(int *)(param_1 + 0x170));
    (**(code **)(*(long *)this_00 + 0x350))(this_00,lVar2 + 0x20);
    FUN_04e67b68(afStack_28,param_1);
    UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  else {
    ShowBonusUI((InvitationLotteryPanel *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationLotteryPanel::InitView(std::vector<InvitationLottery, std::allocator<InvitationLottery>
   > const&) */

void __thiscall InvitationLotteryPanel::InitView(InvitationLotteryPanel *this,vector *param_1)

{
  UIRewardFrameSelect *pUVar1;
  char cVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  UIWidgetAnim *pUVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  InvitationLottery *pIVar9;
  long *plVar10;
  long lVar11;
  CUILabel *this_00;
  PrimeTypeface *pPVar12;
  UICommonItemSelect *this_01;
  int iVar13;
  ulong uVar14;
  bool bVar15;
  UIRewardFrameSelect *local_38;
  string asStack_30 [8];
  function afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIImage_Material");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_Material_Number");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_Tip");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIAnim_Shining");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
  pUVar5[0x6d] = (UIWidgetAnim)0x0;
  std::string::~string(asStack_30);
  nop();
  std::vector<InvitationLottery,std::allocator<InvitationLottery>>::clear
            ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x140));
  *(undefined4 *)(this + 400) = 0;
  uVar6 = FUN_04e66054(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  *(int *)(this + 0x194) = (int)uVar6;
  for (uVar14 = 0; uVar14 < uVar6; uVar14 = uVar14 + 1) {
    iVar13 = (int)uVar14;
    if ((iVar13 == 7) || (iVar13 == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = iVar13 != 0x11 && iVar13 != 10;
    }
    Sexy::StrFormat("Widget_LotteryItem%d",asStack_30);
    plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_30);
    std::string::~string(asStack_30);
    local_38 = (UIRewardFrameSelect *)0x0;
    lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
    cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(lVar11 + 0x20));
    if (cVar2 == '\0') {
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      lVar11 = FUN_04e66600(*(undefined8 *)(lVar11 + 0x20));
      this_00 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(lVar11 + 4),bVar15);
      local_38 = (UIRewardFrameSelect *)this_00;
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      pPVar12 = (PrimeTypeface *)FUN_04e68750(*(undefined4 *)(lVar11 + 0x18));
      Lua::CUILabel::SetTypeface(this_00,pPVar12);
      pUVar1 = local_38;
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      FUN_04e65c8c(asStack_30,*(undefined4 *)(lVar11 + 0x18));
      LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pUVar1);
      FUN_05476c50(asStack_30);
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      iVar13 = *(int *)(lVar11 + 0x38);
    }
    else {
      puVar7 = (undefined8 *)FUN_04e66090(*(undefined8 *)param_1,uVar14);
      piVar8 = (int *)FUN_04e66600(*puVar7);
      local_38 = (UIRewardFrameSelect *)
                 UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],bVar15);
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      iVar13 = *(int *)(lVar11 + 0x38);
    }
    if (iVar13 == 1) {
      this_01 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
      std::string::string(asStack_30,"[UIINVITATION_REWARD_BOX_0]");
      UICommonItemSelect::SetTitle(this_01,asStack_30);
      std::string::~string(asStack_30);
      nop();
      std::string::string(asStack_30,"[SELECT_THE_REWARD_FROM_THESE]");
      UICommonItemSelect::SetDescription(this_01,asStack_30);
      std::string::~string(asStack_30);
      nop();
      UICommonItemSelect::SetCloseButtonVisible(this_01,false);
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      (**(code **)(*(long *)this_01 + 0x350))(this_01,lVar11 + 0x20);
      FUN_04e67b0c(afStack_28,this);
      UICommonItemSelect::registerSelectRecall(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      lVar11 = FUN_04e66090(*(undefined8 *)param_1,uVar14);
      iVar13 = *(int *)(lVar11 + 0x38);
    }
    pUVar1 = local_38;
    if (1 < iVar13) {
      std::string::string(asStack_30,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
      UIRewardFrame::SetLockString((UIRewardFrame *)pUVar1,asStack_30);
      std::string::~string(asStack_30);
      nop();
      *(int *)(this + 400) = *(int *)(this + 400) + 1;
    }
    (**(code **)(*(long *)local_38 + 0x198))
              (local_38,0,0,(int)plVar10[10],*(undefined4 *)((long)plVar10 + 0x54));
    (**(code **)(*plVar10 + 0x60))(plVar10,local_38);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x158),
               &local_38);
    pIVar9 = (InvitationLottery *)FUN_04e66090(*(undefined8 *)param_1,uVar14);
    std::vector<InvitationLottery,std::allocator<InvitationLottery>>::push_back
              ((vector<InvitationLottery,std::allocator<InvitationLottery>> *)(this + 0x140),pIVar9)
    ;
    uVar6 = FUN_04e66054(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  }
  if ((long)*(int *)(this + 400) == uVar6) {
    this[0x1cc] = (InvitationLotteryPanel)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

