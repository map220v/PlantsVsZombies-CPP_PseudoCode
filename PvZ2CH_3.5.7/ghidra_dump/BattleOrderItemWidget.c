// Class: BattleOrderItemWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::SetAwarded() */

void __thiscall BattleOrderItemWidget::SetAwarded(BattleOrderItemWidget *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  UIRewardFrame *pUVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0xe5] = (BattleOrderItemWidget)0x1;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x140);
    uVar1 = FUN_03a2bf0c(uVar4,*(undefined8 *)(this + 0x148));
    if (uVar1 <= uVar3) break;
    puVar2 = (undefined8 *)FUN_03a2bf18(uVar4,uVar3);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,0);
    uVar3 = uVar3 + 1;
  }
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x128);
    uVar1 = FUN_03a2bf20(uVar4,*(undefined8 *)(this + 0x130));
    if (uVar1 <= uVar3) break;
    puVar2 = (undefined8 *)FUN_03a2bef8(uVar4,uVar3);
    pUVar5 = (UIRewardFrame *)*puVar2;
    std::string::string(asStack_10,"IMAGE_UI_GENERIC_CHECK_MARK");
    UIRewardFrame::SetLockString(pUVar5,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::SelectAndRequest() */

void __thiscall BattleOrderItemWidget::SelectAndRequest(BattleOrderItemWidget *this)

{
  UICommonItemSelect *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
  (**(code **)(*(long *)this_00 + 0x350))(this_00,this + 0x108);
  FUN_03a2d85c(afStack_28,this);
  UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderItemWidget::BattleOrderItemWidget() */

void __thiscall BattleOrderItemWidget::BattleOrderItemWidget(BattleOrderItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (BattleOrderItemWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06703080;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067033a8;
  this[0xe5] = (BattleOrderItemWidget)0x0;
  BattleOrderAward::BattleOrderAward((BattleOrderAward *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* BattleOrderItemWidget::~BattleOrderItemWidget() */

void __thiscall BattleOrderItemWidget::~BattleOrderItemWidget(BattleOrderItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06703080;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067033a8;
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x140));
  std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::~vector
            ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x128));
  InvitationLottery::~InvitationLottery((InvitationLottery *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BattleOrderItemWidget::~BattleOrderItemWidget() */

void __thiscall BattleOrderItemWidget::~BattleOrderItemWidget(BattleOrderItemWidget *this)

{
  ~BattleOrderItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::RequestReward(int) */

void __thiscall BattleOrderItemWidget::RequestReward(BattleOrderItemWidget *this,int param_1)

{
  char cVar1;
  string *this_00;
  undefined8 uVar2;
  DNetwork *this_01;
  char *__s;
  string *__n;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1600];
  string asStack_6a8 [1696];
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
  if (this[0xe4] == (BattleOrderItemWidget)0x0) {
    __s = "1";
  }
  else {
    __s = "0";
  }
  std::string::append(this_00,__s,(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"ai");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x108));
  if (cVar1 == '\0') {
    std::string::string(asStack_d40,"bai");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
    FUN_05474278(uVar2,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
  }
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a2d6ec(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_6a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* BattleOrderItemWidget::ButtonDepress(int) */

void __thiscall BattleOrderItemWidget::ButtonDepress(BattleOrderItemWidget *this,int param_1)

{
  char cVar1;
  
  if ((param_1 == 0x4d2) && (this[0xe5] == (BattleOrderItemWidget)0x0)) {
    cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x108));
    if (cVar1 == '\0') {
      SelectAndRequest(this);
      return;
    }
    RequestReward(this,0);
    return;
  }
  return;
}


/* non-virtual thunk to BattleOrderItemWidget::ButtonDepress(int) */

void __thiscall BattleOrderItemWidget::ButtonDepress(BattleOrderItemWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* BattleOrderItemWidget::DetermineSelect(UIMessageBox*, int) */

void __thiscall
BattleOrderItemWidget::DetermineSelect
          (BattleOrderItemWidget *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  UICustomVoting *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(),
     this_00 != (UICustomVoting *)0x0)) {
    iVar1 = UICustomVoting::GetVotedTickets(this_00);
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
    RequestReward(this,iVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::CheckCanReceive() */

void __thiscall BattleOrderItemWidget::CheckCanReceive(BattleOrderItemWidget *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UIBattleOrder *pUVar7;
  PVZ2UIButton *pPVar8;
  undefined8 *puVar9;
  ulong uVar10;
  UIRewardFrame *pUVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_88 [8];
  PVZ2UIButton *local_80;
  string asStack_78 [56];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe5] != (BattleOrderItemWidget)0x0) goto LAB_03a36174;
  pUVar7 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  iVar4 = UIBattleOrder::GetCurrentLevel(pUVar7);
  if (*(int *)(this + 0xe0) < iVar4) {
    if (this[0xe4] == (BattleOrderItemWidget)0x0) {
      pUVar7 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
      cVar3 = UIBattleOrder::HasPrivilege(pUVar7);
      if (cVar3 == '\0') goto LAB_03a36384;
    }
    for (uVar13 = 0;
        uVar10 = FUN_03a2bf20(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130)),
        uVar13 < uVar10; uVar13 = uVar13 + 1) {
      FUN_05478178(asStack_78,&DAT_056f11a8,auStack_88);
      Sexy::Color::Color((Color *)&local_40,1);
      pPVar8 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar8,0x4d2,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                 (Color *)&local_40);
      local_80 = pPVar8;
      FUN_05476c50(asStack_78);
      nop();
      pPVar8 = local_80;
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac41a0,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac41a0,2);
      PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
      puVar9 = (undefined8 *)FUN_03a2bef8(*(undefined8 *)(this + 0x128),uVar13);
      (**(code **)(*(long *)*puVar9 + 0x48))((PVZ2UIImage *)&local_40,(long *)*puVar9);
      iVar1 = local_40;
      pPVar8 = local_80;
      iVar5 = FUN_03a2d914(5);
      iVar2 = local_38;
      iVar4 = local_3c - iVar5;
      iVar6 = FUN_03a2d914(10);
      (**(code **)(*(long *)pPVar8 + 0x198))
                (pPVar8,iVar1 - iVar5,iVar4,iVar2 + iVar6,iVar6 + local_34);
      (**(code **)(*(long *)this + 0x60))(this,local_80);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x140),&local_80);
      puVar9 = (undefined8 *)FUN_03a2bef8(*(undefined8 *)(this + 0x128),uVar13);
      pUVar11 = (UIRewardFrame *)*puVar9;
      std::string::string(asStack_78,"");
      UIRewardFrame::SetLockString(pUVar11,asStack_78);
      std::string::~string(asStack_78);
      nop();
    }
  }
  else {
LAB_03a36384:
    uVar13 = 0;
    while( true ) {
      uVar12 = *(undefined8 *)(this + 0x128);
      uVar10 = FUN_03a2bf20(uVar12,*(undefined8 *)(this + 0x130));
      if (uVar10 <= uVar13) break;
      puVar9 = (undefined8 *)FUN_03a2bef8(uVar12,uVar13);
      pUVar11 = (UIRewardFrame *)*puVar9;
      std::string::string((string *)&local_40,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
      UIRewardFrame::SetLockString(pUVar11,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      uVar13 = uVar13 + 1;
    }
  }
LAB_03a36174:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::InitData(BattleOrderAward const&, int, bool) */

void __thiscall
BattleOrderItemWidget::InitData
          (BattleOrderItemWidget *this,BattleOrderAward *param_1,int param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  CUILabel *pCVar10;
  undefined4 *puVar11;
  PrimeTypeface *pPVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  CUILabel *local_18;
  UIRewardFrameSelect *local_10;
  long local_8;
  
  iVar3 = *(int *)(param_1 + 0x38);
  *(int *)(this + 0xe0) = param_2;
  this[0xe5] = (BattleOrderItemWidget)(iVar3 != 0);
  local_8 = ___stack_chk_guard;
  this[0xe4] = (BattleOrderItemWidget)param_3;
  BattleOrderAward::operator=((BattleOrderAward *)(this + 0xe8),param_1);
  iVar3 = FUN_03a2d914(0x14);
  iVar4 = FUN_03a2d914(0x1e);
  iVar5 = FUN_03a2d914(10);
  if (param_3) {
    iVar4 = FUN_03a2d914(0x2d);
  }
  iVar6 = FUN_03a2d914(0x37);
  bVar1 = *(int *)(param_1 + 0x18) != 0;
  if (bVar1) {
    local_18 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(param_1 + 0x18),true)
    ;
    (**(code **)(*(long *)local_18 + 0x198))(local_18,iVar3,iVar4,iVar6,iVar6);
    pCVar10 = local_18;
    pPVar12 = (PrimeTypeface *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4128);
    Lua::CUILabel::SetTypeface(pCVar10,pPVar12);
    pCVar10 = local_18;
    TodStringTranslate(L"[BATTLE_ORDER_INTERGAL]");
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pCVar10);
    FUN_05476c50(&local_10);
    (**(code **)(*(long *)this + 0x60))(this,local_18);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x128),
               (UIRewardFrameSelect **)&local_18);
  }
  uVar17 = (ulong)bVar1;
  uVar15 = uVar17;
  while( true ) {
    uVar16 = *(undefined8 *)param_1;
    lVar9 = FUN_03a2bd04(uVar16,*(undefined8 *)(param_1 + 8));
    if (lVar9 + uVar17 <= uVar15) break;
    piVar8 = (int *)FUN_03a2bf00(uVar16,uVar15 - uVar17);
    local_10 = (UIRewardFrameSelect *)
               UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
    uVar13 = uVar15 >> 1;
    uVar14 = (uint)uVar15;
    uVar15 = uVar15 + 1;
    (**(code **)(*(long *)local_10 + 0x198))
              (local_10,iVar3 + (iVar6 + iVar5) * (int)uVar13,iVar4 + (uVar14 & 1) * (iVar6 + iVar5)
               ,iVar6,iVar6);
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x128),
               &local_10);
  }
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    iVar7 = FUN_03a2bd04(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    lVar9 = FUN_03a2bf00(*(undefined8 *)(param_1 + 0x20),0);
    pCVar10 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(lVar9 + 4),true);
    local_18 = pCVar10;
    puVar11 = (undefined4 *)FUN_03a2bf00(*(undefined8 *)(param_1 + 0x20),0);
    pPVar12 = (PrimeTypeface *)FUN_03a3385c(*puVar11);
    Lua::CUILabel::SetTypeface(pCVar10,pPVar12);
    pCVar10 = local_18;
    puVar11 = (undefined4 *)FUN_03a2bf00(*(undefined8 *)(param_1 + 0x20),0);
    FUN_03a339ec(&local_10,*puVar11);
    LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)pCVar10);
    FUN_05476c50(&local_10);
    (**(code **)(*(long *)local_18 + 0x198))
              (local_18,iVar3 + ((int)((uint)bVar1 + iVar7) / 2) * (iVar6 + iVar5),
               iVar4 + (iVar6 + iVar5) * ((int)((uint)bVar1 + iVar7) % 2),iVar6,iVar6);
    (**(code **)(*(long *)this + 0x60))(this,local_18);
    std::vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>>::push_back
              ((vector<UIRewardFrameSelect*,std::allocator<UIRewardFrameSelect*>> *)(this + 0x128),
               (UIRewardFrameSelect **)&local_18);
  }
  if (this[0xe5] != (BattleOrderItemWidget)0x0) {
    SetAwarded(this);
  }
  CheckCanReceive(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BattleOrderItemWidget::Update() */

void __thiscall BattleOrderItemWidget::Update(BattleOrderItemWidget *this)

{
  char cVar1;
  int iVar2;
  UIBattleOrder *this_00;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  if ((this[0xe5] == (BattleOrderItemWidget)0x0) &&
     (cVar1 = std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::empty
                        ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x140)),
     cVar1 != '\0')) {
    this_00 = (UIBattleOrder *)UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
    iVar2 = UIBattleOrder::GetCurrentLevel(this_00);
    if (*(int *)(this + 0xe0) < iVar2) {
      CheckCanReceive(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderItemWidget::Draw(Sexy::Graphics*) */

void __thiscall BattleOrderItemWidget::Draw(BattleOrderItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  int local_3c;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0xe4] != (BattleOrderItemWidget)0x0) {
    iVar2 = FUN_03a2d914(0x14);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03a2d914(3);
    iVar4 = FUN_03a2d914(0x28);
    Sexy::Insets::Insets((Insets *)&local_28,iVar1 / 2 - iVar2,iVar3,iVar4,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4228);
    Sexy::Graphics::DrawImage(param_1,pIVar5,local_28,local_24,local_20,local_1c);
    local_3c = *(int *)(this + 0xe0) + 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    Sexy::ToWString(asStack_38);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
  }
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_28,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Color::Color(aCStack_18,-0x324366);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3e88);
  iVar2 = FUN_03a2d914(5);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03a2d914(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1 - iVar2,iVar3,iVar2,*(int *)(this + 0x54));
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

