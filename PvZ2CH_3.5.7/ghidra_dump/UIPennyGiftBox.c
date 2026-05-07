// Class: UIPennyGiftBox


/* UIPennyGiftBox::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPennyGiftBox::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyGiftBox::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPennyGiftBox::ScrollTargetReached(UIPennyGiftBox *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIPennyGiftBox::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPennyGiftBox::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyGiftBox::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIPennyGiftBox::ScrollTargetInterrupted(UIPennyGiftBox *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBox::GetLayoutName() */

void __thiscall UIPennyGiftBox::GetLayoutName(UIPennyGiftBox *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyGiftBox");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPennyGiftBox::closeDescriptionWidget() */

void __thiscall UIPennyGiftBox::closeDescriptionWidget(UIPennyGiftBox *this)

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
/* UIPennyGiftBox::showDescriptionWidget() */

void __thiscall UIPennyGiftBox::showDescriptionWidget(UIPennyGiftBox *this)

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
    Sexy::Delegate0::Delegate0<UIPennyGiftBox,void(UIPennyGiftBox::*)()>(aDStack_38,awStack_50);
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


/* UIPennyGiftBox::UIPennyGiftBox() */

void __thiscall UIPennyGiftBox::UIPennyGiftBox(UIPennyGiftBox *this)

{
  UISingletonDialog<UIPennyGiftBox>::UISingletonDialog((UISingletonDialog<UIPennyGiftBox> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_069e7e20;
  *(undefined **)(this + 0xd8) = &DAT_069e8180;
  *(undefined **)(this + 0x138) = &DAT_069e81c8;
  *(undefined ***)(this + 0x140) = &PTR__UIPennyGiftBox_069e81e0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x150));
  *(undefined8 *)(this + 0x180) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBox::~UIPennyGiftBox() */

void __thiscall UIPennyGiftBox::~UIPennyGiftBox(UIPennyGiftBox *this)

{
  map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069e7e20;
  *(undefined **)(this + 0xd8) = &DAT_069e8180;
  *(undefined **)(this + 0x138) = &DAT_069e81c8;
  *(undefined ***)(this + 0x140) = &PTR__UIPennyGiftBox_069e81e0;
  local_18 = std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
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
  map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
  ::clear(this_00);
  std::
  map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<UIPennyGiftBox>::~UISingletonDialog((UISingletonDialog<UIPennyGiftBox> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPennyGiftBox::~UIPennyGiftBox() */

void __thiscall UIPennyGiftBox::~UIPennyGiftBox(UIPennyGiftBox *this)

{
  ~UIPennyGiftBox(this + -0x140);
  return;
}


/* UIPennyGiftBox::~UIPennyGiftBox() */

void __thiscall UIPennyGiftBox::~UIPennyGiftBox(UIPennyGiftBox *this)

{
  ~UIPennyGiftBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPennyGiftBox::~UIPennyGiftBox() */

void __thiscall UIPennyGiftBox::~UIPennyGiftBox(UIPennyGiftBox *this)

{
  ~UIPennyGiftBox(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBox::SetCurrentTab(int) */

void __thiscall UIPennyGiftBox::SetCurrentTab(UIPennyGiftBox *this,int param_1)

{
  map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  PennyGiftBoxBundle *this_01;
  UIPennyGiftBoxReward *this_02;
  PennyGiftBoxPage *this_03;
  long lVar5;
  undefined8 uVar6;
  TGALogMgr *pTVar7;
  code *__n;
  undefined8 local_50;
  undefined8 local_48 [6];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x148) == param_1) goto switchD_04e88f38_default;
  this_00 = (map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             *)(this + 0x150);
  *(int *)(this + 0x148) = param_1;
  local_50 = std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_48[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)local_48);
    if (!bVar1) break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    if (*piVar2 != *(int *)(this + 0x148)) {
      PennyGiftBoxTabBase::SetSelect(*(PennyGiftBoxTabBase **)(piVar2 + 2),false);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
  }
  plVar3 = (long *)std::
                   map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
                   ::operator[](this_00,(int *)(this + 0x148));
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,(int *)(this + 0x148));
    PennyGiftBoxTabBase::SetSelect((PennyGiftBoxTabBase *)*puVar4,true);
  }
  switch(param_1) {
  case 1:
    this_03 = (PennyGiftBoxPage *)UISingletonDialog<PennyGiftBoxPage>::GetSingletonPtr();
    if (this_03 == (PennyGiftBoxPage *)0x0) {
      UISingletonDialog<PennyGiftBoxPage>::ShowDialog();
    }
    else {
      PennyGiftBoxPage::RefreshWidget(this_03);
    }
    local_48[0] = CONCAT44(local_48[0]._4_4_,1);
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,(int *)local_48);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<PennyGiftBoxPage>::GetSingletonPtr();
    break;
  case 2:
    this_02 = (UIPennyGiftBoxReward *)UISingletonDialog<UIPennyGiftBoxReward>::GetSingletonPtr();
    if (this_02 == (UIPennyGiftBoxReward *)0x0) {
      UISingletonDialog<UIPennyGiftBoxReward>::ShowDialog();
    }
    else {
      UIPennyGiftBoxReward::Refresh(this_02);
    }
    local_48[0] = CONCAT44(local_48[0]._4_4_,2);
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,(int *)local_48);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<UIPennyGiftBoxReward>::GetSingletonPtr();
    break;
  case 3:
    this_01 = (PennyGiftBoxBundle *)UISingletonDialog<PennyGiftBoxBundle>::GetSingletonPtr();
    if (this_01 == (PennyGiftBoxBundle *)0x0) {
      UISingletonDialog<PennyGiftBoxBundle>::ShowDialog();
    }
    else {
      PennyGiftBoxBundle::Refresh(this_01);
    }
    local_48[0] = CONCAT44(local_48[0]._4_4_,3);
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,(int *)local_48);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<PennyGiftBoxBundle>::GetSingletonPtr();
    break;
  case 4:
    lVar5 = UISingletonDialog<PennyGiftBoxRank>::GetSingletonPtr();
    if (lVar5 == 0) {
      UISingletonDialog<PennyGiftBoxRank>::ShowDialog();
    }
    else {
      PennyGiftBoxRank::Refresh();
    }
    local_48[0] = CONCAT44(local_48[0]._4_4_,4);
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,(int *)local_48);
    plVar3 = (long *)*puVar4;
    uVar6 = UISingletonDialog<PennyGiftBoxRank>::GetSingletonPtr();
    __n = *(code **)(*plVar3 + 0x10);
    (*__n)(plVar3,uVar6);
    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)local_48);
    std::string::append((string *)local_48,"9",(size_t)__n);
    lVar5 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0xb8));
    FUN_05474278(auStack_18,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    std::string::~string((string *)&local_50);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPennyGiftBox(pTVar7,(TGAPennyGiftBoxData *)local_48);
    lVar5 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0xbc));
    FUN_05474278(auStack_18,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    std::string::~string((string *)&local_50);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPennyGiftBox(pTVar7,(TGAPennyGiftBoxData *)local_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)local_48);
  default:
    goto switchD_04e88f38_default;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar6);
switchD_04e88f38_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIPennyGiftBox::ButtonDepress(int) */

void __thiscall UIPennyGiftBox::ButtonDepress(UIPennyGiftBox *this,int param_1)

{
  char cVar1;
  
  cVar1 = FUN_04e76788();
  if (cVar1 == '\0') {
    if (param_1 - 1U < 4) {
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
  UISingletonDialog<UIPennyGiftBox>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPennyGiftBox::ButtonDepress(int) */

void __thiscall UIPennyGiftBox::ButtonDepress(UIPennyGiftBox *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBox::InitView() */

void __thiscall UIPennyGiftBox::InitView(UIPennyGiftBox *this)

{
  map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  PennyGiftBoxTabBase *this_01;
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
  
  this_00 = (map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  local_78[0] = 1;
  do {
    this_01 = ::operator_new(0x30);
    PennyGiftBoxTabBase::PennyGiftBoxTabBase(this_01,local_78[0],(Dialog *)this);
    puVar4 = (undefined8 *)
             std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
             ::operator[](this_00,local_78);
    *puVar4 = this_01;
    local_40[0] = FUN_04e76c74(*(undefined8 *)(this_01 + 0x10));
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
               (PVZ2UIButton **)local_40);
    local_78[0] = local_78[0] + 1;
  } while (local_78[0] < 5);
  uVar2 = FUN_04e790b0(8);
  iVar3 = FUN_04e790b0(0x5e);
  local_98 = std::
             map<int,PennyGiftBoxTabBase*,std::less<int>,std::allocator<std::pair<int_const,PennyGiftBoxTabBase*>>>
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
    this_02 = (PVZ2UIButton *)FUN_04e76c74(*(undefined8 *)(*(long *)(puVar5 + 2) + 0x10));
    Sexy::StrFormat("IMAGE_UI_PENNYGIFTBOX_TABBTN%d_N",(string *)local_40,(ulong)*puVar5);
    uVar6 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    puVar5 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_PENNYGIFTBOX_TABBTN%d_D",(string *)local_40,(ulong)*puVar5);
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
    FUN_04e77640(this_02 + 0x2c0);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBox::OnCreate() */

void __thiscall UIPennyGiftBox::OnCreate(UIPennyGiftBox *this)

{
  LawnApp *this_00;
  undefined4 uVar1;
  UIWidgetBackground *pUVar2;
  PennyGiftBoxManager *this_01;
  long lVar3;
  undefined8 uVar4;
  char *__s;
  TGALogMgr *this_02;
  DString *__n;
  DString aDStack_1c8 [16];
  string asStack_1b8 [8];
  undefined1 auStack_1b0 [56];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1b8,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(this_00,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_1b8,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  this_01 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  PennyGiftBoxManager::LoadData(this_01);
  InitView(this);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  __n = aDStack_1c8;
  std::string::string(asStack_1b8,"");
  FUN_05462980(auStack_178,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  lVar3 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  uVar4 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar3 + 200));
  uVar4 = FUN_054603b8(uVar4,&DAT_05697700);
  lVar3 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  uVar4 = FUN_0546065c(uVar4,*(undefined4 *)(lVar3 + 200));
  FUN_054603b8(uVar4,&DAT_05594620);
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  DString::DString(aDStack_1c8,1);
  __s = (char *)DString::c_str(aDStack_1c8);
  std::string::append(asStack_1b8,__s,(size_t)__n);
  DString::~DString(aDStack_1c8);
  FUN_05462824(aDStack_1c8,auStack_178);
  FUN_05474278(auStack_1b0,aDStack_1c8);
  std::string::~string((string *)aDStack_1c8);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPennyGiftBox(this_02,(TGAPennyGiftBoxData *)asStack_1b8);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_1b8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

