// Class: PvpArmyDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpArmyDlg::GetLayoutName() */

void __thiscall PvpArmyDlg::GetLayoutName(PvpArmyDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PvpSeeArmy");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PvpArmyDlg::~PvpArmyDlg() */

void __thiscall PvpArmyDlg::~PvpArmyDlg(PvpArmyDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694e180;
  *(undefined **)(this + 0xd8) = &DAT_0694e4d0;
  std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)(this + 0x148));
  UISingletonDialog<PvpArmyDlg>::~UISingletonDialog((UISingletonDialog<PvpArmyDlg> *)this);
  return;
}


/* PvpArmyDlg::~PvpArmyDlg() */

void __thiscall PvpArmyDlg::~PvpArmyDlg(PvpArmyDlg *this)

{
  ~PvpArmyDlg(this);
  AK::FreeHook(this);
  return;
}


/* PvpArmyDlg::PvpArmyDlg() */

void __thiscall PvpArmyDlg::PvpArmyDlg(PvpArmyDlg *this)

{
  UISingletonDialog<PvpArmyDlg>::UISingletonDialog((UISingletonDialog<PvpArmyDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_0694e180;
  *(undefined **)(this + 0xd8) = &DAT_0694e4d0;
  S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo((S2C_PVP_PreGardenRankInfo *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpArmyDlg::OnCreate() */

void __thiscall PvpArmyDlg::OnCreate(PvpArmyDlg *this)

{
  UIWidgetText *pUVar1;
  UIScrollControl *pUVar2;
  long lVar3;
  Widget *pWVar4;
  ScrollWidget *pSVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIText_Name");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x138) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  FUN_04aeb8e8(*(long *)(this + 0x138) + 0xe0);
  FUN_04aeb7e4(*(long *)(this + 0x138) + 0xe8,PrimeText_Game::Typeface_FZCuYuan_32_HardShadow);
  std::string::string(asStack_10,"UIScroll_Main");
  pUVar2 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,asStack_10);
  *(UIScrollControl **)(this + 0x140) = pUVar2;
  std::string::~string(asStack_10);
  nop();
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  pSVar5 = *(ScrollWidget **)(this + 0x140);
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(pSVar5 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar5,1);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x140),true);
  std::string::string(asStack_10,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIScroll_Main");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PvpArmyDlg::ButtonDepress(int) */

void PvpArmyDlg::ButtonDepress(int param_1)

{
  if (UISingletonDialog<PvpArmyDlg>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<PvpArmyDlg>::m_pInstance + 0x318))();
    UISingletonDialog<PvpArmyDlg>::m_pInstance = (long *)0x0;
  }
  return;
}


/* non-virtual thunk to PvpArmyDlg::ButtonDepress(int) */

void __thiscall PvpArmyDlg::ButtonDepress(PvpArmyDlg *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpArmyDlg::SetZbList() */

void __thiscall PvpArmyDlg::SetZbList(PvpArmyDlg *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PVPManager *this_00;
  string *psVar5;
  long lVar6;
  int *piVar7;
  AccessoryContent *this_01;
  int iVar8;
  int local_48;
  undefined8 local_40;
  string asStack_38 [8];
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar2 = PVPManager::GetOtherUserZbList(this_00,*(long *)(this + 0x148),(vector *)&local_20);
  if (cVar2 != '\0') {
    psVar5 = (string *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    iVar8 = 0;
    SeedPacketUtils::GetZombiePacketSize(psVar5);
    this_01 = *(AccessoryContent **)(this + 0x140);
    uVar1 = *(undefined4 *)(this_01 + 0x54);
    iVar4 = FUN_04aeb80c(local_20,local_18);
    lVar6 = AccessoryContent::GetDisplayImage(this_01);
    *(int *)(lVar6 + 0x50) = iVar4 * local_48;
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    while( true ) {
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_20);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_30);
      if (!bVar3) break;
      psVar5 = ::operator_new(0x120);
      TrainingItemWidget::TrainingItemWidget((TrainingItemWidget *)psVar5,3);
      (**(code **)(*(long *)psVar5 + 0x198))(psVar5,iVar8,0,local_48,uVar1);
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      ServerZombieID::ServerZombieID((ServerZombieID *)local_30,*piVar7);
      ServerZombieID::ToString();
      ZombieItemWidget::SetType(psVar5);
      std::string::~string(asStack_38);
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      FUN_04aeb7dc(psVar5 + 0x10c,*(undefined4 *)(lVar6 + 4));
      (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),psVar5);
      iVar8 = iVar8 + local_48;
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_40);
    }
  }
  std::vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>>::~vector
            ((vector<S2C_PVP_ZombieInfo,std::allocator<S2C_PVP_ZombieInfo>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpArmyDlg::SetRankInfo(S2C_PVP_RankInfo const&) */

void __thiscall PvpArmyDlg::SetRankInfo(PvpArmyDlg *this,S2C_PVP_RankInfo *param_1)

{
  undefined8 uVar1;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_PVP_RankInfo::operator=((S2C_PVP_RankInfo *)(this + 0x148),param_1);
  uVar1 = *(undefined8 *)(this + 0x138);
  TodStringTranslate(L"[PVP_RANK_OTHERARMYNAME]");
  TodReplaceString(awStack_18,L"{NAME}",(wstring *)(this + 0x150));
  PuzzleTip::SetTip(uVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  SetZbList(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

