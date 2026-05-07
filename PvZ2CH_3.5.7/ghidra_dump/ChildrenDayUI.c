// Class: ChildrenDayUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::GetLayoutName() */

void __thiscall ChildrenDayUI::GetLayoutName(ChildrenDayUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChildrenDay");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ChildrenDayUI::Draw(Sexy::Graphics*) */

void __thiscall ChildrenDayUI::Draw(ChildrenDayUI *this,Graphics *param_1)

{
  UI::Dialog::Draw((Dialog *)this,param_1);
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  return;
}


/* ChildrenDayUI::RequestRefresh() */

void __thiscall ChildrenDayUI::RequestRefresh(ChildrenDayUI *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActiveActivityStates(this_01,5);
  this[0x131] = (ChildrenDayUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::GetItem(int) */

void ChildrenDayUI::GetItem(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("UIButton_Item%d",asStack_10);
  uVar1 = UI::Dialog::GetWidget((Dialog *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::InitListButton() */

void __thiscall ChildrenDayUI::InitListButton(ChildrenDayUI *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ItemListButton *this_00;
  long *plVar5;
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_20);
  Sexy::Color::Color((Color *)asStack_18,1);
  this_00 = ::operator_new(0x338);
  ItemListButton::ItemListButton
            (this_00,0x3e9,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)asStack_18);
  *(ItemListButton **)(this + 0x178) = this_00;
  FUN_05476c50(awStack_20);
  plVar5 = *(long **)(this + 0x178);
  uVar1 = FUN_04a7adc0(0x1fb);
  uVar2 = FUN_04a7adc0(0x43);
  uVar3 = FUN_04a7adc0(0x75);
  uVar4 = FUN_04a7adc0(0x5c);
  (**(code **)(*plVar5 + 0x198))(plVar5,uVar1,uVar2,uVar3,uVar4);
  *(undefined1 *)(*(long *)(this + 0x178) + 0x59) = 0;
  std::string::string(asStack_18,"UIImageBackground");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x178));
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::InitBuyButton() */

void __thiscall ChildrenDayUI::InitBuyButton(ChildrenDayUI *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BuyButton *this_00;
  long *plVar5;
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_20);
  Sexy::Color::Color((Color *)asStack_18,1);
  this_00 = ::operator_new(0x330);
  BuyButton::BuyButton(this_00,0x3ea,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)asStack_18)
  ;
  *(BuyButton **)(this + 0x180) = this_00;
  FUN_05476c50(awStack_20);
  plVar5 = *(long **)(this + 0x180);
  uVar1 = FUN_04a7adc0(0x10f);
  uVar2 = FUN_04a7adc0(0x145);
  uVar3 = FUN_04a7adc0(0xbd);
  uVar4 = FUN_04a7adc0(0x60);
  (**(code **)(*plVar5 + 0x198))(plVar5,uVar1,uVar2,uVar3,uVar4);
  plVar5 = *(long **)(this + 0x180);
  *(undefined1 *)((long)plVar5 + 0x59) = 0;
  (**(code **)(*plVar5 + 0x158))(plVar5);
  std::string::string(asStack_18,"UIImageBackground");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x180));
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIImageBackground");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  (**(code **)(*plVar5 + 0xb8))(plVar5,*(undefined8 *)(this + 0x180));
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::SelectItem(int) */

void __thiscall ChildrenDayUI::SelectItem(ChildrenDayUI *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar5 = (long *)GetItem((int)this);
  if (plVar5 == (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
    std::string::string(asStack_18,"UIImageSelectFrame");
    plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    (**(code **)(*plVar5 + 0x158))(plVar5,0);
  }
  else {
    lVar7 = *plVar5;
    *(int *)(this + 0x138) = param_1;
    (**(code **)(lVar7 + 0x48))(asStack_18);
    iVar3 = FUN_04a7adc0(0xf);
    iVar1 = *(int *)((long)plVar5 + 0x4c);
    lVar7 = plVar5[9];
    iVar2 = *(int *)((long)plVar5 + 0x54);
    iVar4 = FUN_04a7adc0(0xfffffff0);
    (**(code **)(**(long **)(this + 0x180) + 0x1a8))
              (*(long **)(this + 0x180),iVar3 + (int)lVar7,iVar1 + iVar2 + iVar4);
    (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),1);
    BuyButton::PlaySelect(*(BuyButton **)(this + 0x180));
    std::string::string(asStack_20,"UIImageSelectFrame");
    plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*plVar6 + 0x1a8))(plVar6,(int)plVar5[9],*(undefined4 *)((long)plVar5 + 0x4c));
    (**(code **)(*plVar6 + 0x158))(plVar6,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::CloseActivity() */

void __thiscall ChildrenDayUI::CloseActivity(ChildrenDayUI *this)

{
  long *plVar1;
  int iVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITextTimeLeft");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UITextBuyCount");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x178) + 0x158))(*(long **)(this + 0x178),0);
  plVar1 = *(long **)(this + 0x170);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  iVar2 = 0;
  SelectItem(this,-1);
  do {
    iVar2 = iVar2 + 1;
    plVar1 = (long *)GetItem((int)this);
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  } while (iVar2 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::ShowTip(std::wstring const&) */

void __thiscall ChildrenDayUI::ShowTip(ChildrenDayUI *this,wstring *param_1)

{
  UIMessageBox *this_00;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    TodStringTranslate(param_1);
    TodStringTranslate(L"[SALES_SECOND_CONFIRM_TITLE]");
    UIMessageBox::SetMessage(this_00,awStack_18,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    UIMessageBox::SetShowType(this_00,1);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    UIMessageBox::SetBackground(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::CalcNextRefreshTime(long, int) */

void __thiscall ChildrenDayUI::CalcNextRefreshTime(ChildrenDayUI *this,long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long local_18;
  int local_10 [2];
  long local_8;
  
  local_10[0] = 0;
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  piVar2 = (int *)LawnApp::BeijingTime(gLawnApp,&local_18);
  iVar3 = piVar2[1] * 0x3c + piVar2[2] * 0xe10 + *piVar2;
  if (param_2 < 0x15180) {
    iVar1 = param_2;
    if (0 < iVar3) {
      do {
        local_10[0] = iVar1;
        iVar1 = local_10[0] + param_2;
      } while (local_10[0] < iVar3);
    }
    local_10[1] = 0x15180;
    piVar2 = eastl::min_alt<int>(local_10,local_10 + 1);
    iVar3 = *piVar2 - iVar3;
  }
  else {
    iVar3 = 0x15180 - iVar3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_18 + iVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::SetTimeLeft(int) */

void __thiscall ChildrenDayUI::SetTimeLeft(ChildrenDayUI *this,int param_1)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StringHelper::ToTimeString((StringHelper *)0x0,(float)param_1,(int)___stack_chk_guard);
  std::string::string(asStack_10,"UITextTimeLeft");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::SetBuyCount(int, int) */

void ChildrenDayUI::SetBuyCount(int param_1,int param_2)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d/%d",auStack_18,(ulong)(uint)param_2);
  std::string::string(asStack_10,"UITextBuyCount");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::Update() */

void __thiscall ChildrenDayUI::Update(ChildrenDayUI *this)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  local_10 = 0;
  fVar4 = *(float *)(this + 0x13c);
  fVar3 = (float)PVZ_RealT();
  local_c = (int)(fVar4 - fVar3);
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  iVar1 = *piVar2;
  SetTimeLeft(this,iVar1);
  if ((iVar1 == 0) && (this[0x131] == (ChildrenDayUI)0x0)) {
    if (local_8 == ___stack_chk_guard) {
      RequestRefresh(this);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChildrenDayUI::GetBuyCount() */

void ChildrenDayUI::GetBuyCount(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::GetChildrenDayBuyCount(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::ButtonDepress(int) */

void __thiscall ChildrenDayUI::ButtonDepress(ChildrenDayUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  long lVar3;
  long *plVar4;
  undefined1 auStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    plVar4 = *(long **)(this + 0x170);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x158))(plVar4,0);
    }
  }
  else if (param_1 == 0x3ea) {
    iVar2 = GetBuyCount();
    if (iVar2 < (int)*(uint *)(this + 0x134)) {
      Magento::GetProduct((Magento *)&DAT_06b7e5e0,(string *)(ulong)*(uint *)(this + 0x134));
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar1 != '\0') {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(this_00);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        PurchaseBroker::RequestPayment(this_01,(string *)(lVar3 + 0x10),0);
        PVZ2UIButton::SetDelayDisabled(*(PVZ2UIButton **)(this + 0x180),1.0);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      FUN_05478178(aRStack_10,L"[BUY_COUNT_MAX]",auStack_18);
      ShowTip(this,(wstring *)aRStack_10);
      FUN_05476c50(aRStack_10);
      nop();
    }
  }
  else if (param_1 == 1000) {
    UISingletonDialog<ChildrenDayUI>::CloseDialog();
  }
  else {
    SelectItem(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ChildrenDayUI::ButtonDepress(int) */

void __thiscall ChildrenDayUI::ButtonDepress(ChildrenDayUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::OnConfirmChildDayItem(std::vector<ChildrenDayItem, std::allocator<ChildrenDayItem>
   > const&) */

void __thiscall ChildrenDayUI::OnConfirmChildDayItem(ChildrenDayUI *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  NameMapperBase *pNVar5;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar3 = PlayerInfo::GetChildrenDayBuyCount(this_01);
    PlayerInfo::SetChildrenDayBuyCount(this_01,iVar3 + 1);
    SetBuyCount((int)this,iVar3 + 1);
    local_20 = FUN_04a7bfb4(*(undefined8 *)param_1);
    local_18 = FUN_04a7c004(*(undefined8 *)(param_1 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar5,*(int *)(lVar4 + 0x14));
      if (cVar2 == '\0') {
        pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar5,*(int *)(lVar4 + 0x14));
        if (cVar2 != '\0') {
          iVar3 = AvatarChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar3);
          PlayerInfo::AddAvatarPiecesCount(this_01,asStack_10,0,*(undefined4 *)(lVar4 + 0x18),1);
          std::string::~string(asStack_10);
        }
      }
      else {
        iVar3 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        PlayerInfo::AddPlantPieceCount
                  ((string *)this_01,(int)asStack_10,SUB41(*(undefined4 *)(lVar4 + 0x18),0));
        std::string::~string(asStack_10);
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::DisableUnclickableWidget() */

void __thiscall ChildrenDayUI::DisableUnclickableWidget(ChildrenDayUI *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  do {
    lVar2 = GetItem((int)this);
    local_18 = FUN_04a7c2c4(*(TaskResource **)(lVar2 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar2 + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      plVar3 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar4 = *plVar3;
      if (lVar4 != lVar2) {
        *(uint *)(lVar4 + 0x60) = *(uint *)(lVar4 + 0x60) | 0x10;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::OnCreate() */

void __thiscall ChildrenDayUI::OnCreate(ChildrenDayUI *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImageBackground");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  std::string::~string(asStack_10);
  nop();
  InitBuyButton(this);
  InitListButton(this);
  DisableUnclickableWidget(this);
  CloseActivity(this);
  RequestRefresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::ChildrenDayUI() */

void __thiscall ChildrenDayUI::ChildrenDayUI(ChildrenDayUI *this)

{
  undefined *puVar1;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ChildrenDayUI>::UISingletonDialog((UISingletonDialog<ChildrenDayUI> *)this);
  this[0x131] = (ChildrenDayUI)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_0693d170;
  *(undefined **)(this + 0xd8) = &DAT_0693d4c0;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetChildrenDayReturn);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<ChildrenDayStates_const*,Sexy::CBMemberTranslatorX<ChildrenDayUI,void(ChildrenDayUI::*)(ChildrenDayStates_const*)>>
            ((MessageRouter *)puVar1,Message::GetChildrenDayReturn,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestCharge);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*,Sexy::CBMemberTranslatorX<ChildrenDayUI,void(ChildrenDayUI::*)(std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*)>>
            ((MessageRouter *)puVar1,Message::RequestCharge,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmChildDayItem);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>const&,Sexy::CBMemberTranslatorX<ChildrenDayUI,void(ChildrenDayUI::*)(std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>const&)>>
            ((MessageRouter *)puVar1,Message::ConfirmChildDayItem,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCheatChildrenDayNextItem);
  Sexy::Delegate0::Delegate0<ChildrenDayUI,void(ChildrenDayUI::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CheatChildrenDayNextItem,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChildrenDayUI::~ChildrenDayUI() */

void __thiscall ChildrenDayUI::~ChildrenDayUI(ChildrenDayUI *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0693d4c0;
  *(undefined ***)this = &PTR_GetClass_0693d170;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::~vector
            ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)
             (this + 0x158));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x140));
  UISingletonDialog<ChildrenDayUI>::~UISingletonDialog((UISingletonDialog<ChildrenDayUI> *)this);
  return;
}


/* ChildrenDayUI::~ChildrenDayUI() */

void __thiscall ChildrenDayUI::~ChildrenDayUI(ChildrenDayUI *this)

{
  ~ChildrenDayUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::SetItem(int, int, float, int) */

void __thiscall
ChildrenDayUI::SetItem(ChildrenDayUI *this,int param_1,int param_2,float param_3,int param_4)

{
  Widget *pWVar1;
  UIWidgetImage *this_00;
  ResourceInfo *pRVar2;
  UIWidgetText *pUVar3;
  string *extraout_x1;
  RtWeakPtr aRStack_28 [8];
  undefined1 auStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar1 = (Widget *)GetItem((int)this);
  if (pWVar1 != (Widget *)0x0) {
    DangerRoomSpecialOfferUI::GetImgPtrFromObjectId((int)this);
    std::string::string(asStack_10,"UIImagePlantFragment");
    this_00 = UI::Dialog::GetChildWidget<UIWidgetImage>(pWVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    UIWidgetImage::SetImage(this_00,(Image *)pRVar2);
    Sexy::StrFormat(L"%.2f",auStack_20,(double)param_3);
    std::string::string(asStack_10,"UIText_Price");
    pUVar3 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    PuzzleTip::SetTip(pUVar3,auStack_20);
    std::string::string(asStack_10,"UIText_Count");
    pUVar3 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    Sexy::StrFormat("X %d",aSStack_18,(ulong)(uint)param_4);
    Sexy::ToSexyString(aSStack_18,extraout_x1);
    PuzzleTip::SetTip(pUVar3,asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string((string *)aSStack_18);
    FUN_05476c50(auStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::Refresh() */

void __thiscall ChildrenDayUI::Refresh(ChildrenDayUI *this)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetBuyCount();
  local_18[0] = 0;
  fVar8 = *(float *)(this + 0x13c);
  fVar7 = (float)PVZ_RealT();
  local_10[0] = (int)(fVar8 - fVar7);
  piVar2 = eastl::max_alt<int>(local_18,local_10);
  SetTimeLeft(this,*piVar2);
  SetBuyCount((int)this,iVar1);
  SelectItem(this,*(int *)(this + 0x138));
  Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::Refresh 1");
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x140);
    uVar3 = FUN_04a7aaf0(uVar6,*(undefined8 *)(this + 0x148));
    if (uVar3 <= uVar5) break;
    piVar2 = (int *)FUN_04a7ab14(uVar6,uVar5);
    piVar2 = (int *)FUN_04a7ab1c(*(undefined8 *)(this + 0x158),(long)*piVar2);
    SetItem(this,(int)uVar5,*piVar2,1.0,piVar2[1]);
    uVar5 = uVar5 + 1;
  }
  Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::Refresh 2");
  std::string::string((string *)local_10,"UITextTimeLeft");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
  (**(code **)(*plVar4 + 0x158))(plVar4,1);
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"UITextBuyCount");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_10);
  (**(code **)(*plVar4 + 0x158))(plVar4,1);
  std::string::~string((string *)local_10);
  nop();
  (**(code **)(**(long **)(this + 0x178) + 0x158))(*(long **)(this + 0x178),1);
  if (*(long *)(this + 0x170) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x170) + 0x18))();
    }
    *(undefined8 *)(this + 0x170) = 0;
  }
  iVar1 = 0;
  Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::Refresh 3");
  do {
    iVar1 = iVar1 + 1;
    plVar4 = (long *)GetItem((int)this);
    (**(code **)(*plVar4 + 0x158))(plVar4,1);
  } while (iVar1 != 3);
  Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::Refresh 4");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::OnCheatChildrenDayNextItem() */

void __thiscall ChildrenDayUI::OnCheatChildrenDayNextItem(ChildrenDayUI *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::empty
                    ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)
                     (this + 0x158));
  if (cVar2 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x140));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar5 = FUN_04a7aafc(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
      iVar1 = 0;
      if (uVar5 != 0) {
        iVar1 = (int)((ulong)(long)(*piVar4 + 3) / uVar5);
      }
      *piVar4 = (*piVar4 + 3) - iVar1 * (int)uVar5;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
    Refresh(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::OnRequestCharge(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > >*) */

void __thiscall ChildrenDayUI::OnRequestCharge(ChildrenDayUI *this,string *param_1,map *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::operator==(param_1,(string *)&DAT_06b7e5e0);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FUN_04a7ab14(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x138));
    uVar1 = *puVar4;
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string(asStack_188,"");
    FUN_05462980(auStack_178,asStack_188);
    std::string::~string(asStack_188);
    nop();
    FUN_0546065c(auStack_168,uVar1);
    std::string::string(asStack_198,"2");
    nop();
    std::pair<std::string_const,std::string>::pair<char_const(&)[3],void>
              ((pair<std::string_const,std::string> *)asStack_188,"ai",asStack_198);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_2,(pair *)asStack_188);
    Sexy::PACommand::~PACommand((PACommand *)asStack_188);
    FUN_05462824(asStack_190,auStack_178);
    std::pair<std::string_const,std::string>::pair<char_const(&)[9],std::string,void>
              ((pair<std::string_const,std::string> *)asStack_188,"oi",asStack_190);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)param_2,(pair *)asStack_188);
    Sexy::PACommand::~PACommand((PACommand *)asStack_188);
    std::string::~string(asStack_190);
    std::string::~string(asStack_198);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::GetChildrenDayReturn(ChildrenDayStates const*) */

void __thiscall ChildrenDayUI::GetChildrenDayReturn(ChildrenDayUI *this,ChildrenDayStates *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ProfileMgr *this_00;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  int local_30 [2];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x131] = (ChildrenDayUI)0x0;
  if (param_1 != (ChildrenDayStates *)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar4 != 0) {
      if (*(int *)param_1 == 0) {
        CloseActivity(this);
        FUN_05478178((wstring *)&local_10,L"[ACTIVITY_FINISH]",&local_18);
        ShowTip(this,(wstring *)&local_10);
        FUN_05476c50((wstring *)&local_10);
        nop();
      }
      else {
        Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn, update data");
        lVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
        PlayerInfo::GetChildrenDayVersion();
        Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn, 1");
        local_30[0] = *(int *)(param_1 + 4) * 0xe10;
        local_30[1] = 1;
        piVar5 = eastl::max_alt<int>(local_30,local_30 + 1);
        iVar9 = *piVar5;
        local_30[0] = iVar9;
        Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn, 2");
        lVar6 = CalcNextRefreshTime(this,lVar4,iVar9);
        fVar10 = (float)PVZ_RealT();
        *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 8);
        *(float *)(this + 0x13c) = (float)(lVar6 - lVar4) + fVar10;
        std::vector<int,std::allocator<int>>::clear
                  ((vector<int,std::allocator<int>> *)(this + 0x140));
        std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::clear
                  ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)
                   (this + 0x158));
        uVar7 = FUN_04a7ab08(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        Sexy::OutputDebugStrF
                  ((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn info->m_itemList size : %d",uVar7
                  );
        local_20 = FUN_04a7bfb4(*(undefined8 *)(param_1 + 0x20));
        local_18 = FUN_04a7c004(*(undefined8 *)(param_1 + 0x28));
        while( true ) {
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
          if (!bVar3) break;
          lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          local_10 = *(uint *)(lVar4 + 0x14);
          local_c = *(uint *)(lVar4 + 0x18);
          std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::push_back
                    ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)
                     (this + 0x158),(ItemData *)&local_10);
          Sexy::OutputDebugStrF
                    ((wchar_t *)
                     "ChildrenDayUI::GetChildrenDayReturn ItemData -- id : %d, count : %d,",
                     (ulong)local_10,(ulong)local_c);
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
        }
        Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn, 4");
        iVar9 = 0;
        do {
          uVar8 = FUN_04a7aafc(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
          iVar1 = (*(int *)(param_1 + 0xc) + -1) * 3 + iVar9;
          iVar9 = iVar9 + 1;
          iVar2 = 0;
          if (uVar8 != 0) {
            iVar2 = (int)((ulong)(long)iVar1 / uVar8);
          }
          local_10 = iVar1 - iVar2 * (int)uVar8;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(this + 0x140),(int *)&local_10);
        } while (iVar9 != 3);
        Sexy::OutputDebugStrF((wchar_t *)"ChildrenDayUI::GetChildrenDayReturn, start refresh");
        Refresh(this);
        std::string::~string(asStack_28);
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
/* ChildrenDayUI::RemoveRepeateItem(std::vector<ChildrenDayUI::ItemData,
   std::allocator<ChildrenDayUI::ItemData> > const&) */

void ChildrenDayUI::RemoveRepeateItem(vector *param_1)

{
  bool bVar1;
  ItemData *pIVar2;
  int *piVar3;
  undefined8 *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_28 = FUN_04a7c1c0(*in_x1);
  local_20 = FUN_04a7c210(in_x1[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      pIVar2 = (ItemData *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)in_x8);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)in_x8);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*piVar3 == *(int *)pIVar2) goto LAB_04a7d8e0;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::push_back
                ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)in_x8,
                 pIVar2);
LAB_04a7d8e0:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::InitItemList() */

void __thiscall ChildrenDayUI::InitItemList(ChildrenDayUI *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  Image *pIVar14;
  UIWidgetImage *pUVar15;
  LotteryResultProgressBar *pLVar16;
  SalesProgressBar *pSVar17;
  ulong uVar18;
  ResourceInfo *pRVar19;
  UIWidgetImage *this_00;
  ulong uVar20;
  code *pcVar21;
  undefined4 local_2c;
  RtWeakPtr aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e680);
  if (((lVar13 != 0) &&
      (lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610), lVar13 != 0)) &&
     (*(long *)(this + 0x170) == 0)) {
    pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e680);
    pUVar15 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar15,pIVar14);
    lVar13 = *(long *)pUVar15;
    *(UIWidgetImage **)(this + 0x170) = pUVar15;
    pcVar21 = *(code **)(lVar13 + 0x198);
    uVar2 = FUN_04a7adc0(0x14a);
    uVar3 = FUN_04a7adc0(0xf0);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e680);
    uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e680);
    uVar5 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar21)(pUVar15,uVar2,uVar3,uVar4,uVar5);
    iVar6 = FUN_04a7adc0(6);
    iVar7 = FUN_04a7adc0(10);
    iVar8 = FUN_04a7adc0(0x46);
    iVar1 = *(int *)(*(long *)(this + 0x170) + 0x50);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar10 = FUN_04a7adc0(5);
    RemoveRepeateItem((vector *)this);
    uVar20 = 0;
    do {
      uVar18 = FUN_04a7aafc(local_20,local_18);
      if (uVar20 < uVar18) {
        pLVar16 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
        iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
        pSVar17 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
        iVar12 = SalesProgressBar::GetCurrentLevel(pSVar17);
        pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
        pUVar15 = ::operator_new(0x118);
        UIWidgetImage::UIWidgetImage(pUVar15,pIVar14);
        pcVar21 = *(code **)(*(long *)pUVar15 + 0x198);
        pLVar16 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
        uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
        pSVar17 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e610);
        uVar3 = SalesProgressBar::GetCurrentLevel(pSVar17);
        (*pcVar21)(pUVar15,(iVar1 + iVar9 * -4 + iVar6 * -3) / 2 +
                           (iVar11 + iVar6) * ((uint)uVar20 & 3),
                   iVar8 + (iVar12 + iVar7) * ((int)(uint)uVar20 >> 2),uVar2,uVar3);
        (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pUVar15);
        FUN_04a7ab1c(local_20,uVar20);
        DangerRoomSpecialOfferUI::GetImgPtrFromObjectId((int)this);
        pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
        this_00 = ::operator_new(0x118);
        UIWidgetImage::UIWidgetImage(this_00,(Image *)pRVar19);
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,iVar10,iVar10,iVar10 * -2 + *(int *)(pUVar15 + 0x50),
                   iVar10 * -2 + *(int *)(pUVar15 + 0x54));
        local_2c = 2;
        UIWidgetImage::SetImageType(this_00,(PVZ2UIImageType *)&local_2c,0.0);
        (**(code **)(*(long *)pUVar15 + 0x60))(pUVar15,this_00);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 8);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
    std::vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>>::~vector
              ((vector<ChildrenDayUI::ItemData,std::allocator<ChildrenDayUI::ItemData>> *)&local_20)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChildrenDayUI::ButtonPress(int) */

void __thiscall ChildrenDayUI::ButtonPress(ChildrenDayUI *this,int param_1)

{
  if (param_1 == 0x3e9) {
    InitItemList(this);
    (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),1);
  }
  return;
}


/* non-virtual thunk to ChildrenDayUI::ButtonPress(int) */

void __thiscall ChildrenDayUI::ButtonPress(ChildrenDayUI *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}

