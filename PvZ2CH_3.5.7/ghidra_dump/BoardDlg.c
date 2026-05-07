// Class: BoardDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::GetLayoutName() */

void __thiscall BoardDlg::GetLayoutName(BoardDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"board");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::OnCreate() */

void __thiscall BoardDlg::OnCreate(BoardDlg *this)

{
  int iVar1;
  LawnApp *this_00;
  char cVar2;
  UIScrollControl *pUVar3;
  long lVar4;
  UIWidgetText *pUVar5;
  UIWidgetImage *pUVar6;
  undefined8 uVar7;
  ScrollWidget *pSVar8;
  long *plVar9;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = gLawnApp;
  std::string::string((string *)&local_18,"LUA_UI_Board");
  cVar2 = LawnApp::CanLoadGroup(this_00,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"LUA_UI_Board");
    UI::Dialog::AddResGroup((Dialog *)this,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
  }
  std::string::string((string *)&local_18,"UIScroll_Content");
  pUVar3 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  *(UIScrollControl **)(this + 0x148) = pUVar3;
  std::string::~string((string *)&local_18);
  nop();
  lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  pSVar8 = *(ScrollWidget **)(this + 0x148);
  *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(pSVar8 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar8,2);
  std::string::string((string *)&local_18,"Content_Text");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_18);
  *(UIWidgetText **)(this + 0x158) = pUVar5;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"Content_Image");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  *(UIWidgetImage **)(this + 0x160) = pUVar6;
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"UIImage_2");
  uVar7 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_18);
  *(undefined8 *)(this + 0x168) = uVar7;
  std::string::~string((string *)&local_18);
  nop();
  plVar9 = *(long **)(*(long *)(this + 0x158) + 0x20);
  (**(code **)(*plVar9 + 0x68))(plVar9,*(long *)(this + 0x158));
  (**(code **)(**(long **)(this + 0x148) + 0x60))
            (*(long **)(this + 0x148),*(undefined8 *)(this + 0x158));
  (**(code **)(**(long **)(this + 0x158) + 0x198))
            (*(long **)(this + 0x158),0,0,*(undefined4 *)(*(long *)(this + 0x148) + 0x50),
             *(undefined4 *)(*(long *)(this + 0x148) + 0x54));
  UIScrollControl::Layout(*(UIScrollControl **)(this + 0x148));
  std::string::string((string *)&local_18,"UIScroll_Tab");
  pUVar3 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_18);
  *(UIScrollControl **)(this + 0x140) = pUVar3;
  std::string::~string((string *)&local_18);
  nop();
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(*(long *)(this + 0x140) + 0x50);
  Sexy::Insets::Insets(aIStack_28);
  FUN_04a4f844((string *)&local_18,this,"UIImage_4",aIStack_28);
  *(undefined8 *)(this + 0x18c) = local_18;
  *(undefined8 *)(this + 0x194) = uStack_10;
  FUN_04a4f844((string *)&local_18,this,"Cfg_BgMore",this + 0x18c);
  *(undefined8 *)(this + 0x19c) = local_18;
  *(undefined8 *)(this + 0x1a4) = uStack_10;
  FUN_04a4f844((string *)&local_18,this,"UIScroll_Content",aIStack_28);
  *(undefined8 *)(this + 0x1ac) = local_18;
  *(undefined8 *)(this + 0x1b4) = uStack_10;
  FUN_04a4f844((string *)&local_18,this,"Cfg_ContentMore",this + 0x1ac);
  *(undefined8 *)(this + 0x1bc) = local_18;
  *(undefined8 *)(this + 0x1c4) = uStack_10;
  FUN_04a4f844((string *)&local_18,this,"Cfg_BoardTabBtn",aIStack_28);
  *(undefined8 *)(this + 0x1cc) = local_18;
  *(undefined8 *)(this + 0x1d4) = uStack_10;
  FUN_04a4ef4c(this,"Cfg_BgMore");
  FUN_04a4ef4c(this,"Cfg_ContentMore");
  std::string::string((string *)&local_18,"WidgetBack");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  iVar1 = *(int *)(this + 0x54);
  *(int *)(pUVar6 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar6 + 0x50)) / 2;
  *(int *)(pUVar6 + 0x4c) = (iVar1 - *(int *)(pUVar6 + 0x54)) / 2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardDlg::ButtonDepress(int) */

void __thiscall BoardDlg::ButtonDepress(BoardDlg *this,int param_1)

{
  INetworkMsgProcess *this_00;
  
  if (param_1 == 0) {
    UISingletonDialog<BoardDlg>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestBoardInfoGet(this_00,*(int *)(this + 0x188),2);
    return;
  }
  return;
}


/* non-virtual thunk to BoardDlg::ButtonDepress(int) */

void __thiscall BoardDlg::ButtonDepress(BoardDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::RefreshTabList() */

void __thiscall BoardDlg::RefreshTabList(BoardDlg *this)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  BoardTabBtn *this_00;
  undefined1 auVar5 [16];
  undefined8 local_20;
  undefined8 local_18;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  (**(code **)(*plVar3 + 0x80))(plVar3,0,0);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x170));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x170));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2) {
    auVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    piVar4 = auVar5._0_8_;
    Sexy::ToWString((Sexy *)(piVar4 + 2),auVar5._8_8_);
    this_00 = ::operator_new(0x1e0);
    BoardTabBtn::BoardTabBtn(this_00,*piVar4 + 100,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_00);
    iVar1 = piVar4[8];
    *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(this + 0x1cc);
    FUN_04a4f17c(this_00 + 0x1b8,iVar1 == 0);
    FUN_04a4f184(this_00 + 0x1b9,piVar4[9] == 0);
    *(BoardDlg **)(this_00 + 0x1b0) = this + 0x138;
    std::move_iterator<GridItemZombieMirrorQueenMirrorUnit*>::operator++
              ((move_iterator<GridItemZombieMirrorQueenMirrorUnit*> *)&local_20);
  }
  UIScrollControl::Layout(*(UIScrollControl **)(this + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::hideAllRewards(Sexy::Widget*) */

void __thiscall BoardDlg::hideAllRewards(BoardDlg *this,Widget *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Widget *)0x0) {
    local_18 = FUN_04a50078(*(undefined8 *)(param_1 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(param_1 + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      puVar2 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,0);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::layoutAllRewards(Sexy::Widget*) */

void __thiscall BoardDlg::layoutAllRewards(BoardDlg *this,Widget *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Widget *)0x0) {
    iVar8 = 0;
    local_18 = FUN_04a50078(*(undefined8 *)(param_1 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(param_1 + 8));
    while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar3) {
      plVar9 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if ((*plVar9 != 0) && (*(char *)(*plVar9 + 0x6c) != '\0')) {
        iVar8 = iVar8 + 1;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    if (iVar8 != 0) {
      iVar4 = FUN_04a4f3a4(0x3f);
      iVar5 = FUN_04a4f3a4(10);
      iVar1 = *(int *)(param_1 + 0x54);
      iVar2 = *(int *)(param_1 + 0x50);
      local_18 = FUN_04a50078(*(undefined8 *)(param_1 + 8));
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(param_1 + 8));
      iVar8 = (iVar2 - (iVar4 + iVar5) * iVar8) / 2;
      while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
            bVar3) {
        puVar7 = (undefined8 *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        plVar9 = (long *)*puVar7;
        if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6c) != '\0')) {
          uVar6 = FUN_04a4f3a4(0x3f);
          (**(code **)(*plVar9 + 0x198))(plVar9,iVar8,(iVar1 - iVar4) / 2,uVar6,uVar6);
          iVar8 = iVar8 + iVar4 + iVar5;
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::getNewReward(Sexy::Widget*) */

void __thiscall BoardDlg::getNewReward(BoardDlg *this,Widget *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  BoardRewardIcon *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Widget *)0x0) {
    this_00 = (BoardRewardIcon *)0x0;
  }
  else {
    local_18 = FUN_04a50078(*(undefined8 *)(param_1 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(param_1 + 8));
    while( true ) {
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      this_00 = (BoardRewardIcon *)*puVar3;
      if ((this_00 != (BoardRewardIcon *)0x0) && (this_00[0x6c] == (BoardRewardIcon)0x0)) {
        (**(code **)(*(long *)this_00 + 0x158))(this_00,1);
        goto LAB_04a503f0;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    this_00 = ::operator_new(0xe8);
    memset(this_00,0,0xe8);
    BoardRewardIcon::BoardRewardIcon(this_00);
    (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
    (**(code **)(*(long *)this_00 + 0x158))(this_00,1);
    uVar2 = FUN_04a4f3a4(0x3f);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,bVar1,bVar1,uVar2,uVar2);
  }
LAB_04a503f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* BoardDlg::setReward(Sexy::Widget*, Sexy::Image*, int) */

void __thiscall BoardDlg::setReward(BoardDlg *this,Widget *param_1,Image *param_2,int param_3)

{
  BoardRewardIcon *this_00;
  
  if (((param_1 != (Widget *)0x0) && (0 < param_3)) &&
     (this_00 = (BoardRewardIcon *)getNewReward(this,param_1), this_00 != (BoardRewardIcon *)0x0)) {
    BoardRewardIcon::SetReward(this_00,param_2,param_3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::getTabBtn(int) */

void __thiscall BoardDlg::getTabBtn(BoardDlg *this,int param_1)

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
  uVar3 = FUN_04a50078(*ppTVar6);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    (ppTVar6);
  local_18 = FUN_04a4feec(uVar3,uVar4,local_24);
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


/* BoardDlg::BoardDlg() */

void __thiscall BoardDlg::BoardDlg(BoardDlg *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<BoardDlg>::UISingletonDialog((UISingletonDialog<BoardDlg> *)this);
  UI::RadioListener::RadioListener((RadioListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06934f30;
  *(undefined **)(this + 0xd8) = &DAT_06935288;
  *(undefined **)(this + 0x138) = &DAT_069352d0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  *(undefined4 *)(this + 0x188) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x18c));
  Sexy::Insets::Insets((Insets *)(this + 0x19c));
  Sexy::Insets::Insets((Insets *)(this + 0x1ac));
  Sexy::Insets::Insets((Insets *)(this + 0x1bc));
  Sexy::Insets::Insets((Insets *)(this + 0x1cc));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBoardInfoGetReward);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<S2C_NoticeInfoGet_const*,Sexy::CBMemberTranslatorX<BoardDlg,void(BoardDlg::*)(S2C_NoticeInfoGet_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyBoardInfoGetReward,&local_40);
  s_NeedShow = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::showReward(Sexy::Widget*, S2C_CurrencyInfo const&) */

void __thiscall BoardDlg::showReward(BoardDlg *this,Widget *param_1,S2C_CurrencyInfo *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  Image *pIVar4;
  int *piVar5;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [32];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideAllRewards(this,param_1);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c358);
  setReward(this,param_1,pIVar4,*(int *)param_2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c3f8);
  setReward(this,param_1,pIVar4,*(int *)(param_2 + 8));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c330);
  setReward(this,param_1,pIVar4,*(int *)(param_2 + 0x10));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c4c0);
  setReward(this,param_1,pIVar4,*(int *)(param_2 + 0x14));
  cVar2 = std::vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>>::empty
                    ((vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>> *)(param_2 + 0x18));
  if (cVar2 == '\0') {
    std::string::string(asStack_38,"UI_Fragment_Material");
    UI::Dialog::AddResGroup((Dialog *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"UI_Fragment_Pieces");
    UI::Dialog::AddResGroup((Dialog *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    local_48 = FUN_04a50540(*(undefined8 *)(param_2 + 0x18));
    local_40 = FUN_04a50590(*(undefined8 *)(param_2 + 0x20));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar3)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      iVar1 = piVar5[1];
      if (0 < iVar1) {
        GetGameItemInfo(*piVar5,0x7fffffff,0);
        pIVar4 = (Image *)StringHelper::ToImage(asStack_18,false);
        setReward(this,param_1,pIVar4,iVar1);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  layoutAllRewards(this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::RefreshContent() */

void __thiscall BoardDlg::RefreshContent(BoardDlg *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  Image *pIVar5;
  PVZ2UIButton *pPVar6;
  char *__s;
  long *plVar7;
  ScrollWidget *pSVar8;
  undefined1 auVar9 [16];
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_04a510a0(uVar2,uVar3,this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (!bVar1) {
    uVar2 = *(undefined8 *)(this + 0x158);
    auVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::ToWString((Sexy *)(auVar9._0_8_ + 0x10),auVar9._8_8_);
    PuzzleTip::SetTip(uVar2,(DVec2 *)&local_10);
    FUN_05476c50((DVec2 *)&local_10);
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pIVar5 = (Image *)StringHelper::ToImage((string *)(lVar4 + 0x18),bVar1);
    if (pIVar5 == (Image *)0x0) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7c420);
    }
    UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x160),pIVar5);
    UIWidgetText::FormatByWidth(*(UIWidgetText **)(this + 0x158));
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*(int *)(lVar4 + 0x24) == -1) {
      FUN_04a4eff4(this,"UIImage_4",this + 0x19c);
      FUN_04a4eff4(this,"UIScroll_Content",this + 0x1bc);
    }
    else {
      FUN_04a4eff4(this,"UIImage_4",this + 0x18c);
      FUN_04a4eff4(this,"UIScroll_Content",this + 0x1ac);
    }
    pSVar8 = *(ScrollWidget **)(this + 0x148);
    DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
    Sexy::ScrollWidget::SetScrollOffset(pSVar8,(DVec2 *)&local_10,0);
    UIScrollControl::Layout(*(UIScrollControl **)(this + 0x148));
    std::string::string((string *)&local_10,"UIButton_1");
    pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (pPVar6 != (PVZ2UIButton *)0x0) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      (**(code **)(*(long *)pPVar6 + 0x158))(pPVar6,*(int *)(lVar4 + 0x24) != -1);
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,*(int *)(lVar4 + 0x24) == 1);
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*(int *)(lVar4 + 0x24) == 1) {
        __s = "[PLANT_OBTAINED]";
      }
      else {
        __s = "[PLANT_OBTAIN]";
      }
      std::string::string(asStack_18,__s);
      nop();
      StringHelper::ToStringValue(asStack_18);
      FUN_054766c8(pPVar6 + 0xd8,(DVec2 *)&local_10);
      FUN_05476c50((DVec2 *)&local_10);
      std::string::~string(asStack_18);
    }
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    plVar7 = *(long **)(this + 0x168);
    if (*(int *)(lVar4 + 0x24) == -1) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
    else {
      (**(code **)(*plVar7 + 0x158))(plVar7,1);
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      showReward(this,*(Widget **)(this + 0x168),(S2C_CurrencyInfo *)(lVar4 + 0x28));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall BoardDlg::RadioSelectionChanged(BoardDlg *this,UIWidgetRadio *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  INetworkMsgProcess *this_01;
  int *piVar6;
  PrimeText *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (UIWidgetRadio *)0x0) {
    cVar1 = UIWidgetRadio::IsSelected(param_1);
    if (cVar1 != '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x170);
      *(int *)(this + 0x188) = *(int *)(param_1 + 0xd4) + -100;
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = FUN_04a50ecc(uVar3,uVar4,this);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if ((bVar2) &&
         (lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
         *(int *)(lVar5 + 0x20) == 0)) {
        this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        INetworkMsgProcess::RequestBoardInfoGet(this_01,*piVar6,1);
      }
      this_02 = (PrimeText *)Sexy::PrimeText::Instance();
      Sexy::PrimeText::ClearGlyphCache(this_02);
      if (local_8 == ___stack_chk_guard) {
        RefreshContent(this);
        return;
      }
      goto LAB_04a51500;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_04a51500:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardDlg::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall BoardDlg::RadioSelectionChanged(BoardDlg *this,UIWidgetRadio *param_1)

{
  RadioSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardDlg::onNotifyBoardInfoGetReward(S2C_NoticeInfoGet const*) */

void __thiscall BoardDlg::onNotifyBoardInfoGetReward(BoardDlg *this,S2C_NoticeInfoGet *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  UIMessageBox *this_01;
  Widget *pWVar7;
  int local_24;
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (S2C_NoticeInfoGet *)0x0) {
    local_24 = *(int *)(param_1 + 0x14);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x170);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_20 = FUN_04a516a8(uVar4,uVar5,&local_24);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (bVar3) {
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_1 + 0x18);
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(lVar6 + 0x24);
      *(int *)(lVar6 + 0x24) = iVar1;
      lVar6 = getTabBtn(this,local_24 + 100);
      if (lVar6 != 0) {
        FUN_04a4f17c(lVar6 + 0x1b8,*(int *)(param_1 + 0x18) == 0);
        FUN_04a4f184(lVar6 + 0x1b9,*(int *)(param_1 + 0x1c) == 0);
      }
      RefreshContent(this);
      if ((iVar2 != iVar1 && iVar1 == 1) &&
         (this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
         this_01 != (UIMessageBox *)0x0)) {
        std::string::string(asStack_18,"");
        std::string::string((string *)&local_10,"[AWARD_SCREEN_NEW_BONUS]");
        UIMessageBox::SetMessage(this_01,asStack_18,(string *)&local_10);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        UIMessageBox::SetShowType(this_01,2);
        UIMessageBox::SetBackgroundDarken(this_01,true,0.5);
        pWVar7 = (Widget *)FUN_04a4f18c(*(undefined8 *)(this_01 + 0x138));
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        showReward(this,pWVar7,(S2C_CurrencyInfo *)(lVar6 + 0x28));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardDlg::~BoardDlg() */

void __thiscall BoardDlg::~BoardDlg(BoardDlg *this)

{
  PrimeText *this_00;
  
  *(undefined **)(this + 0xd8) = &DAT_06935288;
  *(undefined ***)this = &PTR_GetClass_06934f30;
  *(undefined **)(this + 0x138) = &DAT_069352d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>>::~vector
            ((vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>> *)(this + 0x170));
  UISingletonDialog<BoardDlg>::~UISingletonDialog((UISingletonDialog<BoardDlg> *)this);
  return;
}


/* BoardDlg::~BoardDlg() */

void __thiscall BoardDlg::~BoardDlg(BoardDlg *this)

{
  ~BoardDlg(this);
  AK::FreeHook(this);
  return;
}


/* BoardDlg::InitInfoList(S2C_NoticeInfoList const&) */

void __thiscall BoardDlg::InitInfoList(BoardDlg *this,S2C_NoticeInfoList *param_1)

{
  vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>> *this_00;
  char cVar1;
  int *piVar2;
  UIWidgetRadio *this_01;
  
  this_00 = (vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>> *)(this + 0x170);
  std::vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>>::clear(this_00);
  std::vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>>::operator=
            (this_00,(vector *)(param_1 + 0x18));
  RefreshTabList(this);
  cVar1 = std::vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>>::empty(this_00);
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_04a4f2c8(*(undefined8 *)(this + 0x170));
    this_01 = (UIWidgetRadio *)getTabBtn(this,*piVar2 + 100);
    if (this_01 != (UIWidgetRadio *)0x0) {
      UIWidgetRadio::SetSelected(this_01,true);
      return;
    }
  }
  return;
}

