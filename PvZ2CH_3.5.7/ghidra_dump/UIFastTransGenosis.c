// Class: UIFastTransGenosis


/* UIFastTransGenosis::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIFastTransGenosis::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFastTransGenosis::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIFastTransGenosis::ScrollTargetReached(UIFastTransGenosis *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIFastTransGenosis::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIFastTransGenosis::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFastTransGenosis::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIFastTransGenosis::ScrollTargetInterrupted(UIFastTransGenosis *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFastTransGenosis::GetLayoutName() */

void __thiscall UIFastTransGenosis::GetLayoutName(UIFastTransGenosis *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFastTransGenosis");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFastTransGenosis::GetTransList() */

void UIFastTransGenosis::GetTransList(void)

{
  undefined4 uVar1;
  long in_x0;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_054603b8(auStack_168,&DAT_05593308);
  lVar2 = FUN_04bc4a1c(*(undefined8 *)(in_x0 + 0x160),*(undefined8 *)(in_x0 + 0x168));
  if (lVar2 != 0) {
    do {
      uVar6 = 0;
      FUN_054603b8(auStack_168,&DAT_05593308);
      puVar3 = (undefined8 *)FUN_04bc4a30(*(undefined8 *)(in_x0 + 0x160),uVar8);
      uVar7 = *puVar3;
      lVar2 = FUN_04bc4860(uVar7,puVar3[1]);
      if (lVar2 != 0) {
        do {
          puVar4 = (undefined4 *)FUN_04bc486c(uVar7,uVar6);
          FUN_0546065c(auStack_168,*puVar4);
          puVar3 = (undefined8 *)FUN_04bc4a30(*(undefined8 *)(in_x0 + 0x160),uVar8);
          uVar7 = *puVar3;
          uVar5 = FUN_04bc4860(uVar7,puVar3[1]);
          if (uVar6 != uVar5 - 1) {
            FUN_054603b8(auStack_168,&DAT_05593348);
            puVar3 = (undefined8 *)FUN_04bc4a30(*(undefined8 *)(in_x0 + 0x160),uVar8);
            uVar7 = *puVar3;
            uVar5 = FUN_04bc4860(uVar7,puVar3[1]);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      FUN_054603b8(auStack_168,&DAT_05593350);
      uVar6 = FUN_04bc4a1c(*(undefined8 *)(in_x0 + 0x160),*(undefined8 *)(in_x0 + 0x168));
      if (uVar8 != uVar6 - 1) {
        FUN_054603b8(auStack_168,&DAT_05593348);
        uVar6 = FUN_04bc4a1c(*(undefined8 *)(in_x0 + 0x160),*(undefined8 *)(in_x0 + 0x168));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  FUN_054603b8(auStack_168,&DAT_05593350);
  FUN_05462824(auStack_178);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIFastTransGenosis::UIFastTransGenosis() */

void __thiscall UIFastTransGenosis::UIFastTransGenosis(UIFastTransGenosis *this)

{
  UISingletonDialog<UIFastTransGenosis>::UISingletonDialog
            ((UISingletonDialog<UIFastTransGenosis> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_0697bd70;
  *(undefined **)(this + 0xd8) = &DAT_0697c0d0;
  *(undefined ***)(this + 0x138) = &PTR__UIFastTransGenosis_0697c118;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  return;
}


/* UIFastTransGenosis::~UIFastTransGenosis() */

void __thiscall UIFastTransGenosis::~UIFastTransGenosis(UIFastTransGenosis *this)

{
  *(undefined ***)this = &PTR_GetClass_0697bd70;
  *(undefined **)(this + 0xd8) = &DAT_0697c0d0;
  *(undefined ***)(this + 0x138) = &PTR__UIFastTransGenosis_0697c118;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x160));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x148));
  UISingletonDialog<UIFastTransGenosis>::~UISingletonDialog
            ((UISingletonDialog<UIFastTransGenosis> *)this);
  return;
}


/* non-virtual thunk to UIFastTransGenosis::~UIFastTransGenosis() */

void __thiscall UIFastTransGenosis::~UIFastTransGenosis(UIFastTransGenosis *this)

{
  ~UIFastTransGenosis(this + -0x138);
  return;
}


/* UIFastTransGenosis::~UIFastTransGenosis() */

void __thiscall UIFastTransGenosis::~UIFastTransGenosis(UIFastTransGenosis *this)

{
  ~UIFastTransGenosis(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIFastTransGenosis::~UIFastTransGenosis() */

void __thiscall UIFastTransGenosis::~UIFastTransGenosis(UIFastTransGenosis *this)

{
  ~UIFastTransGenosis(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFastTransGenosis::TransGenosis(int) */

void __thiscall UIFastTransGenosis::TransGenosis(UIFastTransGenosis *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  DNetwork *this_02;
  char *pcVar3;
  long lVar4;
  HintUI *this_03;
  wchar_t *pwVar5;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1344];
  string asStack_7a8 [1952];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (local_d54[0] == 0) {
    iVar1 = PlayerInfo::GetNumCoins(this_01,false);
    lVar4 = FUN_04bc4a1c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    if (((ulong)(long)iVar1 <= (ulong)(lVar4 * 5000) && lVar4 * 5000 - (long)iVar1 != 0) &&
       (this_03 = (HintUI *)LawnApp::CreateHintUI(gLawnApp), this_03 != (HintUI *)0x0)) {
      HintUI::Default1Init(this_03);
      FUN_05478178((wstring *)asStack_ce8,L"[SUMMARY_NOTICE]",amStack_d18);
      HintUI::SetTitleString(this_03,(wstring *)asStack_ce8);
      FUN_05476c50((wstring *)asStack_ce8);
      nop();
      pwVar5 = L"[COIN_NOT_ENOUGH_DIALOG_TITLE]";
LAB_04bd38a8:
      FUN_05478178((wstring *)asStack_ce8,pwVar5,amStack_d18);
      HintUI::SetContentString(this_03,(wstring *)asStack_ce8);
      FUN_05476c50((wstring *)asStack_ce8);
      nop();
      HintUI::ShowHintUI(this_03);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
      goto LAB_04bd37ec;
    }
  }
  else if (local_d54[0] == 1) {
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    lVar4 = FUN_04bc4a1c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    if (((ulong)(long)iVar1 <= (ulong)(lVar4 * 0x14) && lVar4 * 0x14 - (long)iVar1 != 0) &&
       (this_03 = (HintUI *)LawnApp::CreateHintUI(gLawnApp), this_03 != (HintUI *)0x0)) {
      HintUI::Default1Init(this_03);
      FUN_05478178((wstring *)asStack_ce8,L"[SUMMARY_NOTICE]",amStack_d18);
      HintUI::SetTitleString(this_03,(wstring *)asStack_ce8);
      FUN_05476c50((wstring *)asStack_ce8);
      nop();
      pwVar5 = L"[ARBORDAY_GEM_NOT_ENOUGH]";
      goto LAB_04bd38a8;
    }
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"l");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  GetTransList();
  FUN_05474278(uVar2,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04bc5508(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_7a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
LAB_04bd37ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIFastTransGenosis::ButtonDepress(int) */

void __thiscall UIFastTransGenosis::ButtonDepress(UIFastTransGenosis *this,int param_1)

{
  if (param_1 == 0x75) {
    TransGenosis(this,0);
    return;
  }
  if (param_1 != 0x76) {
    if (param_1 != 0x58) {
      return;
    }
    UISingletonDialog<UIFastTransGenosis>::CloseDialog();
    return;
  }
  TransGenosis(this,1);
  return;
}


/* non-virtual thunk to UIFastTransGenosis::ButtonDepress(int) */

void __thiscall UIFastTransGenosis::ButtonDepress(UIFastTransGenosis *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIFastTransGenosis::PushItem(int, int) */

void __thiscall UIFastTransGenosis::PushItem(UIFastTransGenosis *this,int param_1,int param_2)

{
  vector<int,std::allocator<int>> *this_00;
  ulong uVar1;
  ulong uVar2;
  int local_4;
  
  uVar2 = 2;
  if (param_2 != 4) {
    uVar2 = 5;
  }
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x148);
  local_4 = param_1;
  if (*(int *)(this + 0x140) != param_2) {
    *(int *)(this + 0x140) = param_2;
    std::vector<int,std::allocator<int>>::clear(this_00);
  }
  std::vector<int,std::allocator<int>>::push_back(this_00,&local_4);
  uVar1 = FUN_04bc4860(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
  if (uVar2 <= uVar1) {
    uVar2 = FUN_04bc4a1c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
    if (uVar2 < (ulong)(long)*(int *)(this + 0x178)) {
      std::
      vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
      ::push_back((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                   *)(this + 0x160),(vector *)this_00);
    }
    std::vector<int,std::allocator<int>>::clear(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFastTransGenosis::InitView(int) */

void __thiscall UIFastTransGenosis::InitView(UIFastTransGenosis *this,int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UIWidgetText *pUVar10;
  UIWidgetImage *pUVar11;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  TransGenosisUI *this_02;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  PVZ2UIButton *pPVar19;
  undefined4 *puVar20;
  code *pcVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x178) = param_1;
  std::string::string((string *)&local_38,"UIText_Coin_Trans");
  iVar9 = 0;
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_38);
  pUVar10[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIImage_Coin_Coin");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  pUVar11[0x6d] = (UIWidgetImage)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIText_Coin_Cost");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_38);
  pUVar10[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIText_Gem_Trans");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_38);
  pUVar10[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIImage_Gem_Gem");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  pUVar11[0x6d] = (UIWidgetImage)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIText_Gem_Cost");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_38);
  pUVar10[0x6d] = (UIWidgetText)0x0;
  std::string::~string((string *)&local_38);
  nop();
  std::string::string((string *)&local_38,"UIImage_Board");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar4 = FUN_04bc5564(0);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar4,uVar4,*(undefined4 *)(pUVar11 + 0x50),*(undefined4 *)(pUVar11 + 0x54));
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04bc5564(0xf);
  iVar6 = FUN_04bc5564(7);
  iVar7 = FUN_04bc5564(10);
  iVar8 = FUN_04bc5564(0x41);
  this_02 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(gLawnApp);
  do {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&local_38);
    TransGenosisUI::CalcBestChipsForASWithRare(this_02,(map *)&local_38,iVar9);
    local_50 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          &local_38);
    local_48 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)&local_38);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48);
    if (bVar3) {
      do {
        piVar12 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                   ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                    &local_50);
        iVar1 = piVar12[1];
        while (0 < iVar1) {
          PushItem(this,*piVar12,iVar9);
          iVar1 = piVar12[1] + -1;
          piVar12[1] = iVar1;
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48);
      } while (bVar3);
    }
    iVar9 = iVar9 + 1;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_38);
  } while (iVar9 != 5);
  uVar27 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar28 = local_30;
  uVar23 = local_38;
  uVar25 = *(undefined8 *)(this + 0x160);
  uVar13 = FUN_04bc4888(local_38,local_30);
  lVar14 = FUN_04bc4a1c(uVar25,*(undefined8 *)(this + 0x168));
  if (lVar14 != 0) {
    do {
      uVar22 = 0;
      puVar15 = (undefined8 *)FUN_04bc4a30(uVar25,uVar27);
      uVar24 = *puVar15;
      uVar16 = FUN_04bc4860(uVar24,puVar15[1]);
      uVar13 = FUN_04bc4888(uVar23,uVar28);
      if (uVar16 != 0) {
        do {
          uVar26 = 0;
          bVar3 = false;
          bVar2 = false;
          if (uVar13 != 0) {
            do {
              bVar3 = bVar2;
              piVar12 = (int *)FUN_04bc489c(uVar23,uVar26);
              piVar17 = (int *)FUN_04bc486c(uVar24,uVar22);
              if (*piVar12 == *piVar17) {
                bVar3 = true;
                piVar12[1] = piVar12[1] + 1;
              }
              uVar26 = uVar26 + 1;
              bVar2 = bVar3;
            } while (uVar26 != uVar13);
          }
          if (!bVar3) {
            Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_48);
            puVar15 = (undefined8 *)FUN_04bc4a30(*(undefined8 *)(this + 0x160),uVar27);
            puVar20 = (undefined4 *)FUN_04bc486c(*puVar15,uVar22);
            local_48 = CONCAT44(1,*puVar20);
            std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_38,
                       (S2C_BonusInfo *)&local_48);
            uVar25 = *(undefined8 *)(this + 0x160);
            puVar15 = (undefined8 *)FUN_04bc4a30(uVar25,uVar27);
            uVar24 = *puVar15;
            uVar16 = FUN_04bc4860(uVar24,puVar15[1]);
            uVar28 = local_30;
            uVar23 = local_38;
            uVar13 = FUN_04bc4888(local_38,local_30);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar16);
      }
      uVar27 = uVar27 + 1;
      uVar16 = FUN_04bc4a1c(uVar25,*(undefined8 *)(this + 0x168));
    } while (uVar27 < uVar16);
  }
  iVar9 = 0;
  uVar27 = 0;
  while( true ) {
    if (uVar13 <= uVar27) break;
    piVar12 = (int *)FUN_04bc489c(uVar23,uVar27);
    plVar18 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,piVar12[1],true);
    (**(code **)(*plVar18 + 0x198))
              (plVar18,iVar5 + (iVar8 + iVar6) * ((uint)uVar27 & 7),
               iVar5 + (iVar7 + iVar8) * ((int)(uint)uVar27 >> 3),iVar8,iVar8);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,plVar18);
    uVar23 = local_38;
    iVar9 = *(int *)((long)plVar18 + 0x4c) + *(int *)((long)plVar18 + 0x54);
    uVar13 = FUN_04bc4888(local_38,local_30);
    uVar27 = uVar27 + 1;
  }
  pcVar21 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = iVar5 + iVar9;
  (*pcVar21)(this_00,this_01);
  (**(code **)(*(long *)pUVar11 + 0x60))(pUVar11,this_00);
  iVar9 = FUN_04bc4a1c(*(undefined8 *)(this + 0x160),*(undefined8 *)(this + 0x168));
  std::string::string((string *)&local_50,"UIText_Coin_Cost");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_50);
  local_54 = iVar9 * 5000;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_54);
  UIWidgetText::SetString(pUVar10,(string *)&local_48);
  std::string::~string((string *)&local_48);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"UIText_Gem_Cost");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_50);
  local_54 = iVar9 * 0x14;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_54);
  UIWidgetText::SetString(pUVar10,(string *)&local_48);
  std::string::~string((string *)&local_48);
  std::string::~string((string *)&local_50);
  nop();
  if (iVar9 == 0) {
    std::string::string((string *)&local_48,"UIButton_Coin");
    pPVar19 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_48);
    (**(code **)(*(long *)pPVar19 + 0x188))(pPVar19,1);
    std::string::~string((string *)&local_48);
    nop();
    std::string::string((string *)&local_48,"UIButton_Gem");
    pPVar19 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_48);
    (**(code **)(*(long *)pPVar19 + 0x188))(pPVar19,1);
    std::string::~string((string *)&local_48);
    nop();
  }
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

