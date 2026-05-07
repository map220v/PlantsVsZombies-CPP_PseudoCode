// Class: UILimitedSummon


/* UILimitedSummon::ScrollTargetReached(Sexy::ScrollWidget*) */

void UILimitedSummon::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UILimitedSummon::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UILimitedSummon::ScrollTargetReached(UILimitedSummon *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UILimitedSummon::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UILimitedSummon::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UILimitedSummon::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UILimitedSummon::ScrollTargetInterrupted(UILimitedSummon *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::GetLayoutName() */

void __thiscall UILimitedSummon::GetLayoutName(UILimitedSummon *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitedSummon");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILimitedSummon::closeDescriptionWidget() */

void __thiscall UILimitedSummon::closeDescriptionWidget(UILimitedSummon *this)

{
  if (*(long *)(this + 0x180) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x180))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x180));
    *(undefined8 *)(this + 0x180) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::showDescriptionWidget() */

void __thiscall UILimitedSummon::showDescriptionWidget(UILimitedSummon *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x180) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x180) = this_00;
    TodStringTranslate(L"[LIMITED_SUMMON_WISH_DESCRIPTION]");
    TodStringTranslate(L"[LIMITED_SUMMON_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x180);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UILimitedSummon,void(UILimitedSummon::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x180));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x180));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x180));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x180));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitedSummon::UILimitedSummon() */

void __thiscall UILimitedSummon::UILimitedSummon(UILimitedSummon *this)

{
  UISingletonDialog<UILimitedSummon>::UISingletonDialog((UISingletonDialog<UILimitedSummon> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_066e1770;
  *(undefined **)(this + 0xd8) = &DAT_066e1ad0;
  *(undefined **)(this + 0x138) = &DAT_066e1b18;
  *(undefined ***)(this + 0x140) = &PTR__UILimitedSummon_066e1b30;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x150));
  *(undefined8 *)(this + 0x180) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::~UILimitedSummon() */

void __thiscall UILimitedSummon::~UILimitedSummon(UILimitedSummon *this)

{
  map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066e1770;
  *(undefined **)(this + 0xd8) = &DAT_066e1ad0;
  *(undefined **)(this + 0x138) = &DAT_066e1b18;
  *(undefined ***)(this + 0x140) = &PTR__UILimitedSummon_066e1b30;
  local_18 = std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(long **)(lVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 8) + 8))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
  ::clear(this_00);
  std::
  map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<UILimitedSummon>::~UISingletonDialog((UISingletonDialog<UILimitedSummon> *)this)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILimitedSummon::~UILimitedSummon() */

void __thiscall UILimitedSummon::~UILimitedSummon(UILimitedSummon *this)

{
  ~UILimitedSummon(this + -0x140);
  return;
}


/* UILimitedSummon::~UILimitedSummon() */

void __thiscall UILimitedSummon::~UILimitedSummon(UILimitedSummon *this)

{
  ~UILimitedSummon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UILimitedSummon::~UILimitedSummon() */

void __thiscall UILimitedSummon::~UILimitedSummon(UILimitedSummon *this)

{
  ~UILimitedSummon(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::SetCurrentTab(int) */

void __thiscall UILimitedSummon::SetCurrentTab(UILimitedSummon *this,int param_1)

{
  map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  LimitedSummonAddUp *this_01;
  LimitedSummonBundle *this_02;
  LimitedSummonVIP *this_03;
  LimitedSummonPage *this_04;
  long lVar5;
  undefined8 uVar6;
  TGALogMgr *pTVar7;
  code *pcVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x148) == param_1) goto switchD_039a0e2c_default;
  this_00 = (map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             *)(this + 0x150);
  *(int *)(this + 0x148) = param_1;
  local_40 = std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_38 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38);
    if (!bVar1) break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    if (*piVar2 != *(int *)(this + 0x148)) {
      LimitedSummonTabBase::SetSelect(*(LimitedSummonTabBase **)(piVar2 + 2),false);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
  }
  plVar3 = (long *)std::
                   map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
                   ::operator[](this_00,(int *)(this + 0x148));
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)(this + 0x148));
    LimitedSummonTabBase::SetSelect((LimitedSummonTabBase *)*puVar4,true);
  }
  switch(param_1) {
  case 1:
    this_04 = (LimitedSummonPage *)UISingletonDialog<LimitedSummonPage>::GetSingletonPtr();
    if (this_04 == (LimitedSummonPage *)0x0) {
      UISingletonDialog<LimitedSummonPage>::ShowDialog();
    }
    else {
      LimitedSummonPage::Refresh(this_04);
    }
    local_38 = CONCAT44(local_38._4_4_,1);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)&local_38);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<LimitedSummonPage>::GetSingletonPtr();
    pcVar8 = *(code **)(*plVar3 + 0x10);
    (*pcVar8)(plVar3,uVar6);
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_38);
    std::string::append((string *)&local_38,"6",(size_t)pcVar8);
    goto LAB_039a0f1c;
  case 2:
    this_03 = (LimitedSummonVIP *)UISingletonDialog<LimitedSummonVIP>::GetSingletonPtr();
    if (this_03 == (LimitedSummonVIP *)0x0) {
      UISingletonDialog<LimitedSummonVIP>::ShowDialog();
    }
    else {
      LimitedSummonVIP::Refresh(this_03);
    }
    local_38 = CONCAT44(local_38._4_4_,2);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)&local_38);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<LimitedSummonVIP>::GetSingletonPtr();
    break;
  case 3:
    this_02 = (LimitedSummonBundle *)UISingletonDialog<LimitedSummonBundle>::GetSingletonPtr();
    if (this_02 == (LimitedSummonBundle *)0x0) {
      UISingletonDialog<LimitedSummonBundle>::ShowDialog();
    }
    else {
      LimitedSummonBundle::Refresh(this_02);
    }
    local_38 = CONCAT44(local_38._4_4_,3);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)&local_38);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<LimitedSummonBundle>::GetSingletonPtr();
    break;
  case 4:
    this_01 = (LimitedSummonAddUp *)UISingletonDialog<LimitedSummonAddUp>::GetSingletonPtr();
    if (this_01 == (LimitedSummonAddUp *)0x0) {
      UISingletonDialog<LimitedSummonAddUp>::ShowDialog();
    }
    else {
      LimitedSummonAddUp::Refresh(this_01);
    }
    local_38 = CONCAT44(local_38._4_4_,4);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)&local_38);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<LimitedSummonAddUp>::GetSingletonPtr();
    break;
  case 5:
    lVar5 = UISingletonDialog<LimitedSummonRank>::GetSingletonPtr();
    if (lVar5 == 0) {
      UISingletonDialog<LimitedSummonRank>::ShowDialog();
    }
    else {
      nop();
    }
    local_38 = CONCAT44(local_38._4_4_,5);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,(int *)&local_38);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<LimitedSummonRank>::GetSingletonPtr();
    pcVar8 = *(code **)(*plVar3 + 0x10);
    (*pcVar8)(plVar3,uVar6);
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_38);
    std::string::append((string *)&local_38,"5",(size_t)pcVar8);
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0x110));
    FUN_05474278(auStack_30,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    std::string::~string((string *)&local_40);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogLimitedSummon(pTVar7,(TGALimitedSummonData *)&local_38);
    lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0x114));
    FUN_05474278(auStack_30,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    std::string::~string((string *)&local_40);
LAB_039a0f1c:
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogLimitedSummon(pTVar7,(TGALimitedSummonData *)&local_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_38);
  default:
    goto switchD_039a0e2c_default;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar6);
switchD_039a0e2c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::InitView() */

void __thiscall UILimitedSummon::InitView(UILimitedSummon *this)

{
  map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  LimitedSummonTabBase *this_01;
  undefined8 *puVar4;
  uint *puVar5;
  PVZ2UIButton *this_02;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  PVZ2UIScrollingWidget *this_03;
  long *plVar9;
  int iVar10;
  undefined8 local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  int local_78 [14];
  undefined8 local_40 [7];
  long local_8;
  
  this_00 = (map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  local_78[0] = 1;
  do {
    this_01 = ::operator_new(0x30);
    LimitedSummonTabBase::LimitedSummonTabBase(this_01,local_78[0],(Dialog *)this);
    puVar4 = (undefined8 *)
             std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::operator[](this_00,local_78);
    *puVar4 = this_01;
    local_40[0] = FUN_039994c8(*(undefined8 *)(this_01 + 0x10));
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
               (PVZ2UIButton **)local_40);
    local_78[0] = local_78[0] + 1;
  } while (local_78[0] < 6);
  uVar2 = FUN_0399a924(8);
  iVar3 = FUN_0399a924(0x5e);
  local_98 = std::
             map<int,LimitedSummonTabBase*,std::less<int>,std::allocator<std::pair<int_const,LimitedSummonTabBase*>>>
             ::begin(this_00);
  iVar10 = 0;
  while( true ) {
    local_40[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)local_40);
    if (!bVar1) break;
    puVar5 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    this_02 = (PVZ2UIButton *)FUN_039994c8(*(undefined8 *)(*(long *)(puVar5 + 2) + 0x10));
    Sexy::StrFormat("IMAGE_UI_LIMITEDSUMMON_TABBTN%d_N",(string *)local_40,(ulong)*puVar5);
    uVar6 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    puVar5 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_LIMITEDSUMMON_TABBTN%d_D",(string *)local_40,(ulong)*puVar5);
    uVar7 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,uVar6,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar7,2);
    PVZ2UIButton::SetRadioStates(this_02,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,(vector *)avStack_90)
    ;
    PVZ2UIButton::LinkRadioButtons(this_02,(string *)local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    FUN_03999aa0(this_02 + 0x2c0);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar2,iVar10,iVar3,iVar3);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    iVar10 = iVar10 + iVar3;
  }
  std::string::string((string *)local_40,"Widget_TabPannel");
  lVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::Insets::Insets
            ((Insets *)local_40,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c),*(int *)(lVar8 + 0x50)
             ,*(int *)(lVar8 + 0x54));
  (**(code **)(**(long **)(lVar8 + 0x20) + 0x68))(*(long **)(lVar8 + 0x20),lVar8);
  *(int *)(lVar8 + 0x54) = iVar10;
  this_03 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,(string *)local_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_03,2);
  std::string::string((string *)local_78,"UIImage_Tabs");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_78);
  std::string::~string((string *)local_78);
  nop();
  (**(code **)(*plVar9 + 0x60))(plVar9,this_03);
  (**(code **)(*(long *)this_03 + 0x60))(this_03,lVar8);
  SetCurrentTab(this,1);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitedSummon::ButtonDepress(int) */

void __thiscall UILimitedSummon::ButtonDepress(UILimitedSummon *this,int param_1)

{
  char cVar1;
  
  cVar1 = FUN_039a1f44();
  if (cVar1 == '\0') {
    if (param_1 - 1U < 5) {
      SetCurrentTab(this,param_1);
      return;
    }
    if (param_1 == 0x2c) {
      showDescriptionWidget(this);
      return;
    }
    if (param_1 != 0x58) {
      return;
    }
  }
  UISingletonDialog<UILimitedSummon>::CloseDialog();
  return;
}


/* non-virtual thunk to UILimitedSummon::ButtonDepress(int) */

void __thiscall UILimitedSummon::ButtonDepress(UILimitedSummon *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitedSummon::OnCreate() */

void __thiscall UILimitedSummon::OnCreate(UILimitedSummon *this)

{
  UIWidgetBackground *pUVar1;
  LimitedSummonManager *this_00;
  TGALogMgr *this_01;
  undefined1 *__n;
  undefined1 auStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  __n = auStack_40;
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_38,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  this_00 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  LimitedSummonManager::LoadData(this_00);
  InitView(this);
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_38);
  std::string::append(asStack_38,"1",(size_t)__n);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLimitedSummon(this_01,(TGALimitedSummonData *)asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

