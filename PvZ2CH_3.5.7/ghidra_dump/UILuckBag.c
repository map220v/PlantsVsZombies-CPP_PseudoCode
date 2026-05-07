// Class: UILuckBag


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::GetLayoutName() */

void __thiscall UILuckBag::GetLayoutName(UILuckBag *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILuckBag");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILuckBag::~UILuckBag() */

void __thiscall UILuckBag::~UILuckBag(UILuckBag *this)

{
  *(undefined ***)this = &PTR_GetClass_06716d20;
  *(undefined **)(this + 0xd8) = &DAT_06717070;
  UISingletonDialog<UILuckBag>::~UISingletonDialog((UISingletonDialog<UILuckBag> *)this);
  return;
}


/* UILuckBag::~UILuckBag() */

void __thiscall UILuckBag::~UILuckBag(UILuckBag *this)

{
  ~UILuckBag(this);
  AK::FreeHook(this);
  return;
}


/* UILuckBag::showDescription() */

void __thiscall UILuckBag::showDescription(UILuckBag *this)

{
  ShowLuckBagDescriptionUI *this_00;
  
  if (*(long *)(this + 0x138) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  ShowLuckBagDescriptionUI::ShowLuckBagDescriptionUI(this_00);
  *(ShowLuckBagDescriptionUI **)(this + 0x138) = this_00;
  ShowLuckBagDescriptionUI::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x138));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::selectFinish() */

void __thiscall UILuckBag::selectFinish(UILuckBag *this)

{
  PVZ2UIButton *this_00;
  string asStack_10 [8];
  long local_8;
  
  this[0x131] = (UILuckBag)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Select");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[LUCKBAG_RESELECT_PLANT]");
    PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::updateTimer() */

void __thiscall UILuckBag::updateTimer(UILuckBag *this)

{
  UIWidgetText *pUVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Time");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)TimeUtil::GetTimeCountdown(3,0x2a1b);
  iVar2 = (int)fVar3;
  FUN_05476574(auStack_20);
  if (iVar2 == 0x7fffffff) {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    if (iVar2 < 0x15181) {
      if (iVar2 < 0xe11) {
        if (iVar2 < 1) goto LAB_03abc000;
        FUN_05478178(asStack_10,L"[MIN_SEC]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x3c);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = iVar2 % 0x3c;
      }
      else {
        FUN_05478178(asStack_10,L"[HOUR_MIN]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0xe10);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = (iVar2 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178(asStack_10,L"[DAY_HOUR]",auStack_28);
      TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x15180);
      FUN_05476c50(asStack_10);
      nop();
      iVar2 = (iVar2 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString(awStack_18,L"{NUM2}",iVar2);
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
LAB_03abc000:
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,auStack_20);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILuckBag::Update() */

void __thiscall UILuckBag::Update(UILuckBag *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  updateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::updateButton() */

void __thiscall UILuckBag::updateButton(UILuckBag *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIButton *this_02;
  wchar_t *pwVar2;
  UIWidgetText *pUVar3;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_redpacket_ticket");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Buy");
  this_02 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (iVar1 < 1) {
    this[0x132] = (UILuckBag)0x0;
    pwVar2 = L"[LUCKBAG_BUY]";
  }
  else {
    pwVar2 = L"[LUCKBAG_TICKET]";
    this[0x132] = (UILuckBag)0x1;
  }
  TodStringTranslate(pwVar2);
  PVZ2UIButton::SetLabelText(this_02,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  std::string::string(asStack_10,"UIText_Limit");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05478178(awStack_18,L"[MAZE_STATUE_LIFE_LABEL]",auStack_20);
  TodReplaceNumberString(awStack_18,L"{NUMBER}",iVar1);
  PuzzleTip::SetTip(pUVar3,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILuckBag::UILuckBag() */

void __thiscall UILuckBag::UILuckBag(UILuckBag *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UILuckBag>::UISingletonDialog((UISingletonDialog<UILuckBag> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06716d20;
  *(undefined **)(this + 0xd8) = &DAT_06717070;
  this[0x131] = (UILuckBag)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBillingReward);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_BillingReward_const*,Sexy::CBMemberTranslatorX<UILuckBag,void(UILuckBag::*)(bool,S2C_BillingReward_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBillingReward,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::ButtonDepress(int) */

void __thiscall UILuckBag::ButtonDepress(UILuckBag *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UILuckBag>::CloseDialog();
    goto LAB_03abc918;
  }
  if (param_1 < 0x59) {
    if (param_1 != 0x1e) goto LAB_03abc918;
    if (this[0x131] != (UILuckBag)0x0) {
      nop();
      if (this[0x132] == (UILuckBag)0x0) {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_02 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(this_01);
        std::string::string(asStack_50,"com.popcap.ios.chs.PVZ2.NewYearLuckyBag45");
        PurchaseBroker::RequestPayment(this_02,asStack_50,0);
        std::string::~string(asStack_50);
        nop();
      }
      else {
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_00 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(this_00,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[LUCKBAG_TICKET_BUY]");
          UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(this_00,pIVar1);
          std::string::~string(asStack_50);
          nop();
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,BuyByTicket);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<UILuckBag,void(UILuckBag::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
          UIMessageBox::SetCallback(this_00,aDStack_38);
          FUN_05476c50(awStack_58);
          FUN_05476c50(awStack_60);
        }
      }
      goto LAB_03abc918;
    }
  }
  else {
    if (param_1 != 100) {
      if (param_1 == 200) {
        nop();
        showDescription(this);
      }
      goto LAB_03abc918;
    }
    nop();
  }
  UISingletonDialog<UILuckBagSelect>::ShowDialog();
LAB_03abc918:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILuckBag::ButtonDepress(int) */

void __thiscall UILuckBag::ButtonDepress(UILuckBag *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::BuyByTicket(UIMessageBox*, int) */

void __thiscall UILuckBag::BuyByTicket(UILuckBag *this,UIMessageBox *param_1,int param_2)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a1b;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"t");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03abb544(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::OnNotifyBillingReward(bool, S2C_BillingReward const*) */

void __thiscall
UILuckBag::OnNotifyBillingReward(UILuckBag *this,bool param_1,S2C_BillingReward *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  NameMapperBase *pNVar5;
  int *piVar6;
  undefined4 *puVar7;
  UIChestAward *this_02;
  ulong uVar8;
  undefined4 local_50;
  undefined4 local_4c;
  string asStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  updateButton(this);
  if ((param_1) &&
     (lVar3 = FUN_03abac24(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)),
     lVar3 == 2)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar8 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
    while (uVar4 = FUN_03abac24(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)),
          uVar8 < uVar4) {
      pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      piVar6 = (int *)FUN_03abac44(*(undefined8 *)(param_2 + 0x18),uVar8);
      cVar1 = NameMapperBase::ContainsId(pNVar5,*piVar6);
      if (cVar1 == '\0') {
        uVar8 = uVar8 + 1;
      }
      else {
        iVar2 = PlantNameMapperServerID::GetInstance();
        FUN_03abac44(*(undefined8 *)(param_2 + 0x18),uVar8);
        NameMapperBase::GetNameForId(iVar2);
        cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_48);
        if (cVar1 == '\0') {
          puVar7 = (undefined4 *)FUN_03abac44(*(undefined8 *)(param_2 + 0x18),uVar8);
          local_50 = *puVar7;
          local_4c = 1;
        }
        else {
          pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          local_50 = NameMapperBase::GetIdForName(pNVar5,asStack_48);
          local_4c = 10;
        }
        uVar8 = uVar8 + 1;
        std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                  ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40,
                   (ChestAwardContent *)&local_50);
        std::string::~string(asStack_48);
      }
    }
    std::string::string(asStack_48,"effects/redpacket_luckbag");
    this_02 = (UIChestAward *)UIChestAward::create(avStack_40,asStack_48);
    std::string::~string(asStack_48);
    nop();
    FUN_03abb5fc(afStack_28,this_02);
    UIChestAward::setEndCallBack(this_02,(function *)afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::init() */

void __thiscall UILuckBag::init(UILuckBag *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  TGALogMgr *pTVar5;
  PVZ2UIButton *this_00;
  undefined1 *in_x2;
  undefined1 auStack_180 [8];
  string asStack_178 [8];
  LuckBagData aLStack_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 local_138;
  TGAAnniversaryTreasureData aTStack_128 [80];
  TGALuckBagData aTStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03abaa54(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LuckBagData::LuckBagData(aLStack_170);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_170);
    if (cVar1 != '\0') {
      lVar3 = FUN_03abac24(local_158,local_150);
      if ((lVar3 == 0) || (lVar4 = FUN_03abac50(local_140,local_138), lVar3 != lVar4)) {
        this[0x131] = (UILuckBag)0x0;
      }
      else {
        in_x2 = auStack_180;
        this[0x131] = (UILuckBag)0x1;
        std::string::string(asStack_178,"UIButton_Select");
        this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_178);
        std::string::~string(asStack_178);
        nop();
        if (this_00 != (PVZ2UIButton *)0x0) {
          TodStringTranslate(L"[LUCKBAG_RESELECT_PLANT]");
          PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_178);
          FUN_05476c50(asStack_178);
        }
      }
      updateButton(this);
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_128);
      std::string::append((string *)aTStack_128,"1",(size_t)in_x2);
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALuckBagData::TGALuckBagData(aTStack_d8,(TGALuckBagData *)aTStack_128);
      TGALogMgr::LogLuckBag(pTVar5,aTStack_d8);
      TGALuckBagData::~TGALuckBagData(aTStack_d8);
      TGALuckBagData::~TGALuckBagData((TGALuckBagData *)aTStack_128);
    }
    LuckBagData::~LuckBagData(aLStack_170);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckBag::OnCreate() */

void __thiscall UILuckBag::OnCreate(UILuckBag *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

