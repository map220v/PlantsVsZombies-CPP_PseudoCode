// Class: OfflineBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoard::GetLayoutName() */

void __thiscall OfflineBoard::GetLayoutName(OfflineBoard *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"board_offline");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoard::OnCreate() */

void __thiscall OfflineBoard::OnCreate(OfflineBoard *this)

{
  LawnApp *this_00;
  char cVar1;
  UIScrollControl *pUVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  UIWidgetImage *pUVar5;
  Widget *pWVar6;
  ScrollWidget *pSVar7;
  long *plVar8;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = gLawnApp;
  std::string::string((string *)&local_18,"LUA_UI_Board");
  cVar1 = LawnApp::CanLoadGroup(this_00,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 != '\0') {
    std::string::string((string *)&local_18,"LUA_UI_Board");
    UI::Dialog::AddResGroup((Dialog *)this,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
  }
  std::string::string((string *)&local_18,"UIScroll_Content");
  pUVar2 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  *(UIScrollControl **)(this + 0x148) = pUVar2;
  std::string::~string((string *)&local_18);
  nop();
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  pSVar7 = *(ScrollWidget **)(this + 0x148);
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(pSVar7 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar7,2);
  std::string::string((string *)&local_18,"Content_Text");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_18);
  *(UIWidgetText **)(this + 0x158) = pUVar4;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"Content_Title");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_18);
  *(UIWidgetText **)(this + 0x150) = pUVar4;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"Content_Image");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  *(UIWidgetImage **)(this + 0x160) = pUVar5;
  std::string::~string((string *)&local_18);
  nop();
  plVar8 = *(long **)(*(long *)(this + 0x158) + 0x20);
  (**(code **)(*plVar8 + 0x68))(plVar8,*(long *)(this + 0x158));
  (**(code **)(**(long **)(this + 0x148) + 0x60))
            (*(long **)(this + 0x148),*(undefined8 *)(this + 0x158));
  (**(code **)(**(long **)(this + 0x158) + 0x198))
            (*(long **)(this + 0x158),0,0,*(undefined4 *)(*(long *)(this + 0x148) + 0x50),
             *(undefined4 *)(*(long *)(this + 0x148) + 0x54));
  UIScrollControl::Layout(*(UIScrollControl **)(this + 0x148));
  std::string::string((string *)&local_18,"UIScroll_Tab");
  pUVar2 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  *(UIScrollControl **)(this + 0x140) = pUVar2;
  std::string::~string((string *)&local_18);
  nop();
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(*(long *)(this + 0x140) + 0x50);
  Sexy::Insets::Insets(aIStack_28);
  FUN_04a52cdc((string *)&local_18,this,"UIImage_4",aIStack_28);
  *(undefined8 *)(this + 0x184) = local_18;
  *(undefined8 *)(this + 0x18c) = uStack_10;
  FUN_04a52cdc((string *)&local_18,this,"Cfg_BgMore",this + 0x184);
  *(undefined8 *)(this + 0x194) = local_18;
  *(undefined8 *)(this + 0x19c) = uStack_10;
  FUN_04a52cdc((string *)&local_18,this,"UIScroll_Content",aIStack_28);
  *(undefined8 *)(this + 0x1a4) = local_18;
  *(undefined8 *)(this + 0x1ac) = uStack_10;
  FUN_04a52cdc((string *)&local_18,this,"Cfg_ContentMore",this + 0x1a4);
  *(undefined8 *)(this + 0x1b4) = local_18;
  *(undefined8 *)(this + 0x1bc) = uStack_10;
  FUN_04a52cdc((string *)&local_18,this,"Cfg_BoardTabBtn",aIStack_28);
  *(undefined8 *)(this + 0x1c4) = local_18;
  *(undefined8 *)(this + 0x1cc) = uStack_10;
  FUN_04a526d8(this,"Cfg_BgMore");
  FUN_04a526d8(this,"Cfg_ContentMore");
  std::string::string((string *)&local_18,"WidgetBack");
  pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  UI::Dialog::SetCenter((Dialog *)this,pWVar6,false);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* OfflineBoard::ButtonDepress(int) */

void __thiscall OfflineBoard::ButtonDepress(OfflineBoard *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<OfflineBoard>::CloseDialog();
  return;
}


/* non-virtual thunk to OfflineBoard::ButtonDepress(int) */

void __thiscall OfflineBoard::ButtonDepress(OfflineBoard *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoard::RefreshTabList() */

void __thiscall OfflineBoard::RefreshTabList(OfflineBoard *this)

{
  bool bVar1;
  long *plVar2;
  int *piVar3;
  OfflineBoardTabBtn *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x168));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x168));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = ::operator_new(0x1c8);
    OfflineBoardTabBtn::OfflineBoardTabBtn(this_00,*piVar3 + 100,(wstring *)(piVar3 + 2));
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_00);
    *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(this + 0x1c4);
    *(OfflineBoard **)(this_00 + 0x1b0) = this + 0x138;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  UIScrollControl::Layout(*(UIScrollControl **)(this + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OfflineBoard::OfflineBoard() */

void __thiscall OfflineBoard::OfflineBoard(OfflineBoard *this)

{
  UISingletonDialog<OfflineBoard>::UISingletonDialog((UISingletonDialog<OfflineBoard> *)this);
  UI::RadioListener::RadioListener((RadioListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06935d40;
  *(undefined **)(this + 0xd8) = &DAT_06936098;
  *(undefined **)(this + 0x138) = &DAT_069360e0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x184));
  Sexy::Insets::Insets((Insets *)(this + 0x194));
  Sexy::Insets::Insets((Insets *)(this + 0x1a4));
  Sexy::Insets::Insets((Insets *)(this + 0x1b4));
  Sexy::Insets::Insets((Insets *)(this + 0x1c4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoard::RefreshContent() */

void __thiscall OfflineBoard::RefreshContent(OfflineBoard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  Image *pIVar5;
  ScrollWidget *pSVar6;
  undefined1 auVar7 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04a538a8(uVar2,uVar3,this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x150),lVar4 + 8);
    uVar2 = *(undefined8 *)(this + 0x158);
    auVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::ToWString((Sexy *)(auVar7._0_8_ + 0x10),auVar7._8_8_);
    PuzzleTip::SetTip(uVar2,(DVec2 *)&local_10);
    FUN_05476c50((DVec2 *)&local_10);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c618);
    UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x160),pIVar5);
    UIWidgetText::FormatByWidth(*(UIWidgetText **)(this + 0x158));
    FUN_04a52780(this,"UIImage_4",this + 0x184);
    FUN_04a52780(this,"UIScroll_Content",this + 0x1a4);
    pSVar6 = *(ScrollWidget **)(this + 0x148);
    DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
    Sexy::ScrollWidget::SetScrollOffset(pSVar6,(DVec2 *)&local_10,0);
    UIScrollControl::Layout(*(UIScrollControl **)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OfflineBoard::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall OfflineBoard::RadioSelectionChanged(OfflineBoard *this,UIWidgetRadio *param_1)

{
  char cVar1;
  PrimeText *this_00;
  
  if ((param_1 != (UIWidgetRadio *)0x0) &&
     (cVar1 = UIWidgetRadio::IsSelected(param_1), cVar1 != '\0')) {
    *(int *)(this + 0x180) = *(int *)(param_1 + 0xd4) + -100;
    this_00 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_00);
    RefreshContent(this);
    return;
  }
  return;
}


/* non-virtual thunk to OfflineBoard::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall OfflineBoard::RadioSelectionChanged(OfflineBoard *this,UIWidgetRadio *param_1)

{
  RadioSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoard::getTabBtn(int) */

void __thiscall OfflineBoard::getTabBtn(OfflineBoard *this,int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TaskResource **ppTVar6;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  lVar2 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  ppTVar6 = (TaskResource **)(lVar2 + 8);
  uVar3 = FUN_04a53388(*ppTVar6);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    (ppTVar6);
  local_18 = FUN_04a53b28(uVar3,uVar4,local_24);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       (ppTVar6);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar5 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    uVar3 = *puVar5;
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* OfflineBoard::~OfflineBoard() */

void __thiscall OfflineBoard::~OfflineBoard(OfflineBoard *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06935d40;
  *(undefined **)(this + 0xd8) = &DAT_06936098;
  *(undefined **)(this + 0x138) = &DAT_069360e0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::~vector
            ((vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x168));
  UISingletonDialog<OfflineBoard>::~UISingletonDialog((UISingletonDialog<OfflineBoard> *)this);
  return;
}


/* OfflineBoard::~OfflineBoard() */

void __thiscall OfflineBoard::~OfflineBoard(OfflineBoard *this)

{
  ~OfflineBoard(this);
  AK::FreeHook(this);
  return;
}


/* OfflineBoard::InitInfoList(std::vector<OfflineNoticeInfo, std::allocator<OfflineNoticeInfo> >
   const&) */

void __thiscall OfflineBoard::InitInfoList(OfflineBoard *this,vector *param_1)

{
  vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *this_00;
  char cVar1;
  int *piVar2;
  UIWidgetRadio *this_01;
  
  this_00 = (vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>> *)(this + 0x168);
  std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::clear(this_00);
  std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::operator=(this_00,param_1);
  RefreshTabList(this);
  cVar1 = std::vector<OfflineNoticeInfo,std::allocator<OfflineNoticeInfo>>::empty(this_00);
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_04a52924(*(undefined8 *)(this + 0x168));
    this_01 = (UIWidgetRadio *)getTabBtn(this,*piVar2 + 100);
    if (this_01 != (UIWidgetRadio *)0x0) {
      UIWidgetRadio::SetSelected(this_01,true);
      return;
    }
  }
  return;
}

