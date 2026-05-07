// Class: ZMatchShopDlg


/* ZMatchShopDlg::getMatchCoin() const */

undefined4 __thiscall ZMatchShopDlg::getMatchCoin(ZMatchShopDlg *this)

{
  return *(undefined4 *)(this + 0x178);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::GetLayoutName() */

void __thiscall ZMatchShopDlg::GetLayoutName(ZMatchShopDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ZMatchShopDlg");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZMatchShopDlg::~ZMatchShopDlg() */

void __thiscall ZMatchShopDlg::~ZMatchShopDlg(ZMatchShopDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_066c3440;
  *(undefined **)(this + 0xd8) = &DAT_066c3790;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x180);
  UISingletonDialog<ZMatchShopDlg>::~UISingletonDialog((UISingletonDialog<ZMatchShopDlg> *)this);
  return;
}


/* ZMatchShopDlg::~ZMatchShopDlg() */

void __thiscall ZMatchShopDlg::~ZMatchShopDlg(ZMatchShopDlg *this)

{
  ~ZMatchShopDlg(this);
  AK::FreeHook(this);
  return;
}


/* ZMatchShopDlg::ZMatchShopDlg() */

void __thiscall ZMatchShopDlg::ZMatchShopDlg(ZMatchShopDlg *this)

{
  UISingletonDialog<ZMatchShopDlg>::UISingletonDialog((UISingletonDialog<ZMatchShopDlg> *)this);
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR_GetClass_066c3440;
  *(undefined **)(this + 0xd8) = &DAT_066c3790;
  FUN_05476574(this + 0x180);
  this[0x188] = (ZMatchShopDlg)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::UpdateTimeLabel() */

void __thiscall ZMatchShopDlg::UpdateTimeLabel(ZMatchShopDlg *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar8;
  int *piVar9;
  NetworkMgr *pNVar10;
  long *plVar11;
  long local_20;
  long local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = LawnApp::GetRealServerTime(gLawnApp);
  if (local_20 < 1) {
    TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_18 = PlayerInfo::getLastZmatchShopRefrashTime(this_01);
    lVar8 = LawnApp::BeijingTime(gLawnApp,&local_18);
    iVar1 = *(int *)(lVar8 + 8);
    iVar2 = *(int *)(lVar8 + 0xc);
    iVar3 = *(int *)(lVar8 + 0x10);
    iVar4 = *(int *)(lVar8 + 0x14);
    piVar9 = (int *)LawnApp::BeijingTime(gLawnApp,&local_20);
    iVar5 = piVar9[2];
    iVar6 = *piVar9;
    iVar7 = piVar9[1];
    if (iVar5 < 9) {
      if (local_18 < local_20 - (iVar7 * 0x3c + iVar5 * 0xe10 + iVar6 + 54000)) {
        pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
        plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
        (**(code **)(*plVar11 + 400))(plVar11,1,0,0);
        PlayerInfo::setLastZmatchShopRefrashTime(this_01,local_20);
      }
      lVar8 = (long)(((iVar5 * -0xe10 + iVar7 * -0x3c) - iVar6) + 0x7e90);
    }
    else if ((iVar2 < piVar9[3] || (iVar4 < piVar9[5] || iVar3 < piVar9[4])) || (iVar1 < 9)) {
      pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
      plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
      (**(code **)(*plVar11 + 400))(plVar11,1,0,0);
      PlayerInfo::setLastZmatchShopRefrashTime(this_01,local_20);
      lVar8 = (long)(((iVar5 * -0xe10 + iVar7 * -0x3c) - iVar6) + 0x1d010);
    }
    else {
      lVar8 = (long)(((iVar5 * -0xe10 + iVar7 * -0x3c) - iVar6) + 0x1d010);
    }
    iVar1 = (int)(lVar8 / 0x3c);
    Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,lVar8 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar8 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar8 + iVar1 * -0x3c));
  }
  FUN_054766c8(this + 0x180,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x170),this + 0x180);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::Update() */

void __thiscall ZMatchShopDlg::Update(ZMatchShopDlg *this)

{
  string *extraout_x1;
  undefined8 uVar1;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimeLabel(this);
  uVar1 = *(undefined8 *)(this + 0x168);
  Sexy::StrFormat("%d",aSStack_18,(ulong)*(uint *)(this + 0x178));
  Sexy::ToSexyString(aSStack_18,extraout_x1);
  PuzzleTip::SetTip(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatchShopDlg::ButtonDepress(int) */

void __thiscall ZMatchShopDlg::ButtonDepress(ZMatchShopDlg *this,int param_1)

{
  int iVar1;
  ZShopConfirmDlg *this_00;
  ZMatchShopMgr *this_01;
  
  if (param_1 == 0) {
    UISingletonDialog<ZMatchShopDlg>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    this_00 = (ZShopConfirmDlg *)UISingletonDialog<ZShopConfirmDlg>::ShowDialog();
    this_01 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
    iVar1 = ZMatchShopMgr::getRefrashZMShopCost(this_01);
    if (iVar1 <= *(int *)(this + 0x178)) {
      ZShopConfirmDlg::SetConfirm(this_00,0);
      return;
    }
    ZShopConfirmDlg::SetConfirm(this_00,1);
    return;
  }
  return;
}


/* non-virtual thunk to ZMatchShopDlg::ButtonDepress(int) */

void __thiscall ZMatchShopDlg::ButtonDepress(ZMatchShopDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::SetZMatchShopData() */

void __thiscall ZMatchShopDlg::SetZMatchShopData(ZMatchShopDlg *this)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ZMatch_ShopData *pZVar2;
  undefined8 *puVar3;
  ProfileMgr *this_01;
  ZMatchShopDlg *pZVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ZMatch_ShopData aZStack_60 [48];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_30 [24];
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
  pZVar2 = (ZMatch_ShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  ZMatch_ShopData::ZMatch_ShopData(aZStack_60,pZVar2);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_30);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_30);
  pZVar4 = this + 0x138;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    local_78 = *puVar3;
    uStack_70 = puVar3[1];
    local_68 = puVar3[2];
    (**(code **)(**(long **)pZVar4 + 0x158))(*(long **)pZVar4,1);
    ZShopItemWidget::SetShopData(*(ZShopItemWidget **)pZVar4,(ZMatchShopData *)&local_78);
    ZShopItemWidget::SetZMatchType(*(ZShopItemWidget **)pZVar4,local_68._4_4_);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_88);
    pZVar4 = pZVar4 + 8;
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_01);
  *(undefined4 *)(this + 0x178) = local_18;
  ZMatch_ShopData::~ZMatch_ShopData(aZStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::BuyFinish(int) */

void ZMatchShopDlg::BuyFinish(int param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  ZMatch_ShopData *pZVar2;
  undefined8 *puVar3;
  ProfileMgr *this_00;
  undefined8 *puVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ZMatch_ShopData aZStack_60 [48];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_30 [24];
  undefined4 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
  pZVar2 = (ZMatch_ShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this);
  ZMatch_ShopData::ZMatch_ShopData(aZStack_60,pZVar2);
  uStack_88 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_30);
  uStack_80 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_30);
  puVar4 = (undefined8 *)((ulong)(uint)param_1 + 0x138);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_88,(__normal_iterator *)&uStack_80), bVar1)
  {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_88);
    uStack_78 = *puVar3;
    uStack_70 = puVar3[1];
    uStack_68 = puVar3[2];
    (**(code **)(*(long *)*puVar4 + 0x158))((long *)*puVar4,1);
    ZShopItemWidget::SetShopData((ZShopItemWidget *)*puVar4,(ZMatchShopData *)&uStack_78);
    ZShopItemWidget::SetZMatchType((ZShopItemWidget *)*puVar4,uStack_68._4_4_);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&uStack_88);
    puVar4 = puVar4 + 1;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  *(undefined4 *)((ulong)(uint)param_1 + 0x178) = uStack_18;
  ZMatch_ShopData::~ZMatch_ShopData(aZStack_60);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopDlg::OnCreate() */

void __thiscall ZMatchShopDlg::OnCreate(ZMatchShopDlg *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PrimeText *this_00;
  UIWidgetText *pUVar9;
  Widget *pWVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  ZMatch_ShopData *pZVar11;
  ulong uVar12;
  long lVar13;
  ZShopItemWidget *pZVar14;
  long *plVar15;
  ZMatchShopDlg *pZVar16;
  undefined4 uVar17;
  ulong uVar18;
  string asStack_68 [8];
  string asStack_60 [48];
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  uVar18 = 0;
  std::string::string(asStack_60,"UI_Fragment_Pieces");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_60,"UI_Fragment_Avatar");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_60,"UI_Accessory_Dev2");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::string::string(asStack_60,"UIText_Coin");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
  *(UIWidgetText **)(this + 0x168) = pUVar9;
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_60,"UIText_Time");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_60);
  *(UIWidgetText **)(this + 0x170) = pUVar9;
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_60,"Widget_Items");
  pWVar10 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_60);
  std::string::~string(asStack_60);
  nop();
  iVar5 = FUN_0390e020(0x23);
  iVar6 = FUN_0390e020(0xf);
  iVar7 = FUN_0390e020(0x1e);
  iVar8 = FUN_0390e020(10);
  iVar1 = ((*(int *)(pWVar10 + 0x54) + iVar6 * -2) - iVar8) / 2;
  iVar3 = (*(int *)(pWVar10 + 0x50) + iVar5 * -2 + iVar7 * -2) / 3;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
  pZVar11 = (ZMatch_ShopData *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_01);
  ZMatch_ShopData::ZMatch_ShopData((ZMatch_ShopData *)asStack_60,pZVar11);
  pZVar16 = this + 0x138;
  do {
    uVar4 = local_30;
    iVar2 = (int)uVar18;
    uVar17 = 1;
    uVar12 = FUN_0390db1c(local_30,local_28);
    if (uVar18 < uVar12) {
      lVar13 = FUN_0390db30(uVar4,uVar18);
      uVar17 = *(undefined4 *)(lVar13 + 0x14);
    }
    uVar18 = uVar18 + 1;
    pZVar14 = ::operator_new(0x128);
    ZShopItemWidget::ZShopItemWidget(pZVar14,this,uVar17);
    *(ZShopItemWidget **)pZVar16 = pZVar14;
    (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pZVar14);
    (**(code **)(**(long **)pZVar16 + 0x198))
              (*(long **)pZVar16,iVar5 + (iVar2 % 3) * (iVar7 + iVar3),
               iVar6 + (iVar2 / 3) * (iVar8 + iVar1),iVar3,iVar1);
    (**(code **)(**(long **)pZVar16 + 0x158))(*(long **)pZVar16,0);
    pZVar16 = pZVar16 + 8;
  } while (uVar18 != 6);
  SetZMatchShopData(this);
  std::string::string(asStack_68,"UIImage_BG");
  plVar15 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_68);
  std::string::~string(asStack_68);
  nop();
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x1a8))
              (plVar15,(*(int *)(gLawnApp + 0xd4) - (int)plVar15[10]) / 2,
               *(undefined4 *)((long)plVar15 + 0x4c));
  }
  ZMatch_ShopData::~ZMatch_ShopData((ZMatch_ShopData *)asStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

