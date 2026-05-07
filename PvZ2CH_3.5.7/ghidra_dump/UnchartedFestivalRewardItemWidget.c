// Class: UnchartedFestivalRewardItemWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::SetAwarded() */

void __thiscall
UnchartedFestivalRewardItemWidget::SetAwarded(UnchartedFestivalRewardItemWidget *this)

{
  UIRewardFrame *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  pUVar1 = *(UIRewardFrame **)(this + 0x140);
  this[0xe5] = (UnchartedFestivalRewardItemWidget)0x1;
  local_8 = ___stack_chk_guard;
  if (pUVar1 != (UIRewardFrame *)0x0) {
    std::string::string(asStack_10,"IMAGE_UI_GENERIC_CHECK_MARK");
    UIRewardFrame::SetLockString(pUVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::SelectAndRequest() */

void __thiscall
UnchartedFestivalRewardItemWidget::SelectAndRequest(UnchartedFestivalRewardItemWidget *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BATTLE_ORDER_SELECT_CONFIRM]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DetermineSelect);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UnchartedFestivalRewardItemWidget,void(UnchartedFestivalRewardItemWidget::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedFestivalRewardItemWidget::ButtonDepress(int) */

void __thiscall
UnchartedFestivalRewardItemWidget::ButtonDepress
          (UnchartedFestivalRewardItemWidget *this,int param_1)

{
  if (((param_1 == 0x3eb) && (this[0xe5] == (UnchartedFestivalRewardItemWidget)0x0)) &&
     (*(int *)(this + 0xe8) != 0)) {
    SelectAndRequest(this);
    return;
  }
  return;
}


/* non-virtual thunk to UnchartedFestivalRewardItemWidget::ButtonDepress(int) */

void __thiscall
UnchartedFestivalRewardItemWidget::ButtonDepress
          (UnchartedFestivalRewardItemWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UnchartedFestivalRewardItemWidget::UnchartedFestivalRewardItemWidget() */

void __thiscall
UnchartedFestivalRewardItemWidget::UnchartedFestivalRewardItemWidget
          (UnchartedFestivalRewardItemWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xe4] = (UnchartedFestivalRewardItemWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0677d180;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677d4a8;
  this[0xe5] = (UnchartedFestivalRewardItemWidget)0x0;
  *(undefined4 *)(this + 0xe8) = 0;
  FUN_05476574(this + 0xf8);
  UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData
            ((UnchartedModeFestivalRewardData *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  return;
}


/* UnchartedFestivalRewardItemWidget::~UnchartedFestivalRewardItemWidget() */

void __thiscall
UnchartedFestivalRewardItemWidget::~UnchartedFestivalRewardItemWidget
          (UnchartedFestivalRewardItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0677d180;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677d4a8;
  UnchartedModeFestivalRewardData::~UnchartedModeFestivalRewardData
            ((UnchartedModeFestivalRewardData *)(this + 0x100));
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UnchartedFestivalRewardItemWidget::~UnchartedFestivalRewardItemWidget() */

void __thiscall
UnchartedFestivalRewardItemWidget::~UnchartedFestivalRewardItemWidget
          (UnchartedFestivalRewardItemWidget *this)

{
  ~UnchartedFestivalRewardItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::RequestReward(int) */

void __thiscall
UnchartedFestivalRewardItemWidget::RequestReward
          (UnchartedFestivalRewardItemWidget *this,int param_1)

{
  string *this_00;
  undefined8 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  undefined8 uVar2;
  DNetwork *this_02;
  char *__s;
  string *psVar3;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2680];
  string asStack_270 [616];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar3 = asStack_d40;
  if (param_1 == -1) {
    std::string::string(asStack_ce8,"type");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    __s = "2";
  }
  else {
    std::string::string(asStack_ce8,"type");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    if (this[0xe4] == (UnchartedFestivalRewardItemWidget)0x0) {
      __s = "1";
    }
    else {
      __s = "0";
    }
  }
  std::string::append(this_00,__s,(size_t)psVar3);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"world");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_01);
  thunk_FUN_05475e00(uVar1,uVar2);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"index");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03dcc268(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_270,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* UnchartedFestivalRewardItemWidget::DetermineSelect(UIMessageBox*, int) */

void __thiscall
UnchartedFestivalRewardItemWidget::DetermineSelect
          (UnchartedFestivalRewardItemWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  RequestReward(this,*(int *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::InitData(UnchartedModeFestivalRewardData const&, int, bool) */

void __thiscall
UnchartedFestivalRewardItemWidget::InitData
          (UnchartedFestivalRewardItemWidget *this,UnchartedModeFestivalRewardData *param_1,
          int param_2,bool param_3)

{
  bool bVar1;
  UnchartedFestivalRewardItemWidget *pUVar2;
  UnchartedFestivalRewardItemWidget UVar3;
  int iVar4;
  int iVar5;
  PVZ2UnchartedModeUtils *this_00;
  undefined8 uVar6;
  int *piVar7;
  PVZ2UIButton *this_01;
  UnchartedModeNetworkMgr *this_02;
  UnchartedModeWorldData *pUVar8;
  code *pcVar9;
  UIRewardFrame *pUVar10;
  undefined1 auStack_140 [8];
  string asStack_138 [8];
  string asStack_130 [8];
  wstring awStack_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  int local_e0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_2;
  this[0xe4] = (UnchartedFestivalRewardItemWidget)param_3;
  if (param_3) {
    this[0xe5] = (UnchartedFestivalRewardItemWidget)(*(int *)(param_1 + 0x38) != 0);
    iVar4 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    UVar3 = this[0xe4];
    bVar1 = *(int *)param_1 <= iVar4;
  }
  else {
    this[0xe5] = (UnchartedFestivalRewardItemWidget)(*(int *)(param_1 + 0x3c) != 0);
    iVar4 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    UVar3 = this[0xe4];
    bVar1 = *(int *)param_1 <= iVar4;
  }
  if (UVar3 == (UnchartedFestivalRewardItemWidget)0x0) {
    this_02 = (UnchartedModeNetworkMgr *)
              Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    pUVar8 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_02);
    UnchartedModeWorldData::UnchartedModeWorldData((UnchartedModeWorldData *)&local_120,pUVar8);
    *(uint *)(this + 0xe8) = (uint)((uint)(byte)this[0xe5] < (uint)bVar1 && local_e0 != 0);
    UnchartedModeWorldData::~UnchartedModeWorldData((UnchartedModeWorldData *)&local_120);
  }
  else {
    *(uint *)(this + 0xe8) = (uint)bVar1 & ((byte)this[0xe5] ^ 1);
  }
  UnchartedModeFestivalRewardData::operator=
            ((UnchartedModeFestivalRewardData *)(this + 0x100),param_1);
  iVar4 = FUN_03dcc2c4(0x14);
  iVar5 = FUN_03dcc2c4(0x1e);
  if (param_3) {
    iVar5 = FUN_03dcc2c4(0x2d);
  }
  this_00 = (PVZ2UnchartedModeUtils *)FUN_03dcc2c4(0x37);
  PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix(this_00);
  std::operator+(asStack_138,"_HUD_WORLDMAP_STAR");
  uVar6 = StringHelper::ToImage(asStack_130,false);
  *(undefined8 *)(this + 0xf0) = uVar6;
  Sexy::StrFormat(L"X%d",(Insets *)&local_120,(ulong)(param_2 + 1));
  FUN_054766c8(this + 0xf8,(Insets *)&local_120);
  FUN_05476c50((Insets *)&local_120);
  if (this[0xe4] == (UnchartedFestivalRewardItemWidget)0x0) {
    uVar6 = *(undefined8 *)(this + 0x120);
  }
  else {
    uVar6 = *(undefined8 *)(this + 0x108);
  }
  pUVar2 = this + 0x150;
  piVar7 = (int *)FUN_03dcb86c(uVar6,0);
  uVar6 = UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],true);
  *(undefined8 *)(this + 0x140) = uVar6;
  Sexy::Insets::Insets((Insets *)&local_120,iVar4,iVar5,(int)this_00,(int)this_00);
  pcVar9 = *(code **)(**(long **)(this + 0x140) + 0x1a0);
  *(undefined8 *)pUVar2 = local_120;
  *(undefined8 *)(this + 0x158) = uStack_118;
  (*pcVar9)(*(long **)(this + 0x140),pUVar2);
  if ((*(int *)(this + 0xe8) == 0) && (this[0xe5] == (UnchartedFestivalRewardItemWidget)0x0)) {
    pUVar10 = *(UIRewardFrame **)(this + 0x140);
    std::string::string((string *)&local_120,"IMAGE_UI_GENERIC_LOCKED_FOR_FRAME");
    UIRewardFrame::SetLockString(pUVar10,(Insets *)&local_120);
    std::string::~string((string *)&local_120);
    nop();
  }
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  FUN_05478178(awStack_128,&DAT_056f11a8,auStack_140);
  Sexy::Color::Color((Color *)&local_120,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x3eb,(ButtonListener *)(this + 0xd8),awStack_128,(Color *)&local_120);
  *(PVZ2UIButton **)(this + 0x148) = this_01;
  FUN_05476c50(awStack_128);
  nop();
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),pUVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x148));
  if (this[0xe5] != (UnchartedFestivalRewardItemWidget)0x0) {
    SetAwarded(this);
  }
  std::string::~string(asStack_130);
  std::string::~string(asStack_138);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::UpdateData(UnchartedModeFestivalRewardData const&) */

void __thiscall
UnchartedFestivalRewardItemWidget::UpdateData
          (UnchartedFestivalRewardItemWidget *this,UnchartedModeFestivalRewardData *param_1)

{
  UnchartedFestivalRewardItemWidget UVar1;
  int iVar2;
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar3;
  char *__s;
  UIRewardFrame *pUVar4;
  uint uVar5;
  uint uVar6;
  UnchartedModeWorldData aUStack_120 [64];
  int local_e0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe4] == (UnchartedFestivalRewardItemWidget)0x0) {
    this[0xe5] = (UnchartedFestivalRewardItemWidget)(*(int *)(param_1 + 0x3c) != 0);
    iVar2 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    uVar6 = (uint)(*(int *)param_1 <= iVar2);
    uVar5 = (uint)(*(int *)param_1 <= iVar2);
    if (this[0xe4] == (UnchartedFestivalRewardItemWidget)0x0) goto LAB_03dd0b40;
LAB_03dd0ab4:
    *(uint *)(this + 0xe8) = uVar5 & ((byte)this[0xe5] ^ 1);
    UnchartedModeFestivalRewardData::operator=
              ((UnchartedModeFestivalRewardData *)(this + 0x100),param_1);
    pUVar4 = *(UIRewardFrame **)(this + 0x140);
    if (pUVar4 != (UIRewardFrame *)0x0) goto LAB_03dd0ad8;
LAB_03dd0b90:
    UVar1 = this[0xe5];
joined_r0x03dd0b94:
    if (UVar1 == (UnchartedFestivalRewardItemWidget)0x0) goto LAB_03dd0af0;
  }
  else {
    this[0xe5] = (UnchartedFestivalRewardItemWidget)(*(int *)(param_1 + 0x38) != 0);
    iVar2 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
    uVar5 = (uint)(*(int *)param_1 <= iVar2);
    uVar6 = uVar5;
    if (this[0xe4] != (UnchartedFestivalRewardItemWidget)0x0) goto LAB_03dd0ab4;
LAB_03dd0b40:
    this_00 = (UnchartedModeNetworkMgr *)
              Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    pUVar3 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_00);
    UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar3);
    *(uint *)(this + 0xe8) = (uint)((byte)this[0xe5] < uVar6 && local_e0 != 0);
    UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
    UnchartedModeFestivalRewardData::operator=
              ((UnchartedModeFestivalRewardData *)(this + 0x100),param_1);
    pUVar4 = *(UIRewardFrame **)(this + 0x140);
    if (pUVar4 == (UIRewardFrame *)0x0) goto LAB_03dd0b90;
LAB_03dd0ad8:
    if (*(int *)(this + 0xe8) == 0) {
      if (this[0xe5] == (UnchartedFestivalRewardItemWidget)0x0) {
        __s = "IMAGE_UI_GENERIC_LOCKED_FOR_FRAME";
        goto LAB_03dd0bbc;
      }
    }
    else if (this[0xe5] == (UnchartedFestivalRewardItemWidget)0x0) {
      __s = "";
LAB_03dd0bbc:
      std::string::string((string *)aUStack_120,__s);
      UIRewardFrame::SetLockString(pUVar4,(string *)aUStack_120);
      std::string::~string((string *)aUStack_120);
      nop();
      UVar1 = this[0xe5];
      goto joined_r0x03dd0b94;
    }
  }
  SetAwarded(this);
LAB_03dd0af0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedFestivalRewardItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
UnchartedFestivalRewardItemWidget::Draw(UnchartedFestivalRewardItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((this[0xe4] == (UnchartedFestivalRewardItemWidget)0x0) || (*(long *)(this + 0xf0) == 0)) {
    iVar1 = *(int *)(this + 0xe8);
  }
  else {
    iVar2 = FUN_03dcc2c4(0x28);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03dcc2c4(3);
    Sexy::Insets::Insets((Insets *)&local_38,iVar1 / 2 - iVar2,iVar3,iVar2,iVar2);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),local_38,local_34,local_30,local_2c);
    iVar2 = FUN_03dcc2c4(3);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03dcc2c4(0x28);
    Sexy::Insets::Insets(aIStack_28,iVar1 / 2,iVar2,iVar1 / 2,iVar3);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar4,aCStack_18,3,1);
    iVar1 = *(int *)(this + 0xe8);
  }
  if ((iVar1 == 0) && (this[0xe5] == (UnchartedFestivalRewardItemWidget)0x0)) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada640);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,*(int *)(this + 0x150),*(int *)(this + 0x154),*(int *)(this + 0x158),
               *(int *)(this + 0x15c));
  }
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_28,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Color::Color(aCStack_18,-0x12154b);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada970);
  iVar2 = FUN_03dcc2c4(5);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03dcc2c4(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1 - iVar2,iVar3,iVar2,*(int *)(this + 0x54));
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

