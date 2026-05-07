// Class: RechargeGiftUI


/* RechargeGiftUI::SetPurchaseSuccess(bool) */

void __thiscall RechargeGiftUI::SetPurchaseSuccess(RechargeGiftUI *this,bool param_1)

{
  this[0x174] = (RechargeGiftUI)param_1;
  return;
}


/* RechargeGiftUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void RechargeGiftUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeGiftUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall RechargeGiftUI::ScrollTargetReached(RechargeGiftUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* RechargeGiftUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RechargeGiftUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeGiftUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall RechargeGiftUI::ScrollTargetInterrupted(RechargeGiftUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::IsCanRecharge() */

void RechargeGiftUI::IsCanRecharge(void)

{
  bool bVar1;
  int iVar2;
  FilesystemSaveGameContext *this;
  undefined8 *puVar3;
  string *psVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"");
  this = (FilesystemSaveGameContext *)RechargeGiftConfig::GetConfig((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  bVar1 = false;
  if (this != (FilesystemSaveGameContext *)0x0) {
    puVar3 = (undefined8 *)Sexy::FilesystemSaveGameContext::GetBuffer(this);
    local_18 = FUN_049ddbf8(*puVar3);
    while( true ) {
      local_10 = FUN_049ddc48(puVar3[1]);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar2 = RechargePlantItem::GetPlantState(psVar4);
      if (iVar2 != 5) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::~RechargeGiftUI() */

void __thiscall RechargeGiftUI::~RechargeGiftUI(RechargeGiftUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0692a2d8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06929fa0;
  *(undefined ***)(this + 0xe0) = &PTR__RechargeGiftUI_0692a320;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantGift");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RechargeGift");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::
  map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
  ::~map((map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
          *)(this + 0x130));
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeGiftUI::~RechargeGiftUI() */

void __thiscall RechargeGiftUI::~RechargeGiftUI(RechargeGiftUI *this)

{
  ~RechargeGiftUI(this + -0xe0);
  return;
}


/* RechargeGiftUI::~RechargeGiftUI() */

void __thiscall RechargeGiftUI::~RechargeGiftUI(RechargeGiftUI *this)

{
  ~RechargeGiftUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargeGiftUI::~RechargeGiftUI() */

void __thiscall RechargeGiftUI::~RechargeGiftUI(RechargeGiftUI *this)

{
  ~RechargeGiftUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::GetSelectedPlantItem() */

void __thiscall RechargeGiftUI::GetSelectedPlantItem(RechargeGiftUI *this)

{
  map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             ::find(this_00,(int *)(this + 0x160));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined8 *)
             std::
             map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             ::operator[](this_00,(int *)(this + 0x160));
    uVar3 = *puVar2;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::ShowPlantItems(Sexy::Widget*) */

void __thiscall RechargeGiftUI::ShowPlantItems(RechargeGiftUI *this,Widget *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  RechargePlantItem *this_00;
  int iVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  int local_24;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Widget *)0x0) && (*(long *)(this + 0xe8) != 0)) {
    *(undefined4 *)(this + 0x160) = 0xffffffff;
    std::
    map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
    ::clear((map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             *)(this + 0x130));
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1,1);
    local_24 = 1000;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    iVar3 = FUN_049dd124(0);
    iVar4 = FUN_049dd124(5);
    puVar8 = (undefined8 *)
             Sexy::FilesystemSaveGameContext::GetBuffer
                       (*(FilesystemSaveGameContext **)(this + 0xe8));
    local_18 = FUN_049ddbf8(*puVar8);
    iVar10 = iVar3;
    while( true ) {
      lVar9 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0xe8));
      local_10 = FUN_049ddc48(*(undefined8 *)(lVar9 + 8));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      auVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Magento::GetPlantLevelUpPlant(auVar12._0_8_,auVar12._8_8_);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_20);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
        this_00 = ::operator_new(0x328);
        RechargePlantItem::RechargePlantItem
                  (this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10,local_24,this + 0xd8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        pcVar11 = *(code **)(*(long *)this_00 + 0x198);
        uVar5 = RechargePlantItem::GetWidth(this_00);
        uVar6 = RechargePlantItem::GetHeight(this_00);
        (*pcVar11)(this_00,iVar3,iVar10,uVar5,uVar6);
        puVar8 = (undefined8 *)
                 std::
                 map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
                 ::operator[]((map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
                               *)(this + 0x130),&local_24);
        *puVar8 = this_00;
        (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
        iVar7 = RechargePlantItem::GetHeight(this_00);
        local_24 = local_24 + 1;
        iVar10 = iVar10 + iVar7 + iVar4;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    *(int *)(param_1 + 0x54) = iVar10;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::InitView() */

void __thiscall RechargeGiftUI::InitView(RechargeGiftUI *this)

{
  RechargeGiftUI *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  ResourceInfo *pRVar14;
  PVZ2UIButton *pPVar15;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar16;
  code *pcVar17;
  long *plVar18;
  undefined1 auStack_80 [8];
  Insets aIStack_78 [56];
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76c78);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76c78);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x50) - iVar2 >> 1,
             *(int *)(this + 0x54) - iVar3 >> 1,iVar2,iVar3);
  uVar13 = local_40;
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = local_38;
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
  if ((int)((ulong)uVar13 >> 0x20) - iVar2 < 0) {
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    *(undefined4 *)(this + 0xf4) = uVar8;
  }
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76aa8);
  *(undefined8 *)(this + 0x118) = uVar13;
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0xe8));
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_40);
  *(ResourceInfo **)(this + 0x110) = pRVar14;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  FUN_05478178(aIStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,0,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,(Color *)&local_40);
  FUN_05476c50(aIStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b76a80,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76af8,1);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)&local_40);
  iVar2 = *(int *)(this + 0xf0);
  iVar3 = *(int *)(this + 0xf8);
  pcVar17 = *(code **)(*(long *)pPVar15 + 0x198);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar5 = FUN_049dd124(0x5f);
  iVar6 = FUN_049dd124(0x4b);
  iVar10 = *(int *)(this + 0xf4);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76a80);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar17)(pPVar15,((iVar2 + iVar3) - iVar4) - iVar5,(iVar6 + iVar10) - iVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,pPVar15);
  FUN_05478178(aIStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,1,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x168) = pPVar15;
  FUN_05476c50(aIStack_78);
  nop();
  plVar18 = *(long **)(this + 0x168);
  iVar2 = *(int *)(this + 0xf8);
  iVar3 = *(int *)(this + 0xf0);
  pcVar17 = *(code **)(*plVar18 + 0x198);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76d98);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar10 = *(int *)(this + 0xfc);
  iVar4 = *(int *)(this + 0xf4);
  iVar6 = FUN_049dd124(0x5a);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76d98);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76d98);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar17)(plVar18,iVar3 + (iVar2 - iVar5 >> 1),(iVar4 + iVar10) - iVar6,uVar8,uVar9);
  pPVar15 = *(PVZ2UIButton **)(this + 0x168);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b76d98,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76d98,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)&local_40);
  if (*(int *)(this + 0x170) == 0) {
    pPVar15 = *(PVZ2UIButton **)(this + 0x168);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76d70,1);
    PVZ2UIButton::AddImage(pPVar15,(Insets *)&local_40,0);
    lVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76cc8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,lVar16,1);
    pPVar15 = *(PVZ2UIButton **)(this + 0x168);
    iVar3 = FUN_049dd124(0x1e);
    iVar2 = *(int *)(pPVar15 + 0x50);
    iVar10 = FUN_049dd124(10);
    Sexy::Insets::Insets
              (aIStack_78,iVar2 - iVar3,-iVar10,*(int *)(lVar16 + 0x38),*(int *)(lVar16 + 0x3c));
    PVZ2UIButton::AddImage(pPVar15,(PVZ2UIImage *)&local_40,(TRect *)aIStack_78);
  }
  else {
    pPVar15 = *(PVZ2UIButton **)(this + 0x168);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b769d8,1);
    PVZ2UIButton::AddImage(pPVar15,(Insets *)&local_40,0);
  }
  lVar16 = *(long *)(this + 0x168);
  pRVar1 = this + 0x100;
  pcVar17 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar16 + 0x59) = 0;
  (*pcVar17)(this,lVar16);
  iVar10 = FUN_049dd124(0x46);
  iVar2 = *(int *)(this + 0xf0);
  iVar4 = FUN_049dd124(0x8c);
  iVar3 = *(int *)(this + 0xf4);
  iVar5 = FUN_049dd124(100);
  iVar6 = FUN_049dd124(300);
  Sexy::Insets::Insets((Insets *)&local_40,iVar10 + iVar2,iVar4 + iVar3,iVar5,iVar6);
  *(undefined8 *)pRVar1 = local_40;
  *(undefined8 *)(this + 0x108) = local_38;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,pRVar1);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,0);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,pRVar1);
  ShowPlantItems(this,this_01);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  TodStringTranslate(L"[RECHARGE_GIFT_DATA]");
  FUN_054766c8(this + 0x128,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  lVar16 = *(long *)(this + 0xe8);
  iVar2 = FUN_049dd050(*(undefined4 *)(lVar16 + 0x40));
  iVar3 = FUN_049dd054(*(undefined4 *)(lVar16 + 0x44));
  Sexy::StrFormat(L": %d.%d.%d-%d.%d.%d",(Insets *)&local_40,(ulong)(uint)(iVar2 / 10000),
                  (ulong)(uint)((iVar2 % 10000) / 100),(ulong)(uint)((iVar2 % 10000) % 100),
                  (ulong)(uint)(iVar3 / 10000),(ulong)(uint)((iVar3 % 10000) / 100),
                  (ulong)(uint)((iVar3 % 10000) % 100));
  thunk_FUN_05477668(this + 0x128,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::SelectPlant(int) */

void __thiscall RechargeGiftUI::SelectPlant(RechargeGiftUI *this,int param_1)

{
  map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
  *this_00;
  char cVar1;
  undefined4 uVar2;
  RechargePlantItem *pRVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  string *extraout_x1;
  int local_24;
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = param_1;
  pRVar3 = (RechargePlantItem *)GetSelectedPlantItem(this);
  if (pRVar3 != (RechargePlantItem *)0x0) {
    RechargePlantItem::SetSelect(pRVar3,false);
    *(undefined4 *)(this + 0x160) = 0xffffffff;
  }
  this_00 = (map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             *)(this + 0x130);
  local_18 = std::
             map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             ::find(this_00,&local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)
             std::
             map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             ::operator[](this_00,&local_24);
    pRVar3 = (RechargePlantItem *)*puVar4;
    if (pRVar3 == (RechargePlantItem *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
      (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
    }
    else {
      RechargePlantItem::SetSelect(pRVar3,true);
      *(int *)(this + 0x160) = local_24;
      uVar2 = RechargePlantItem::GetPlantState(pRVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar3 + 0x300));
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::UTF8StringToWString((Sexy *)&local_18,extraout_x1);
      TodStringTranslate((wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      std::string::~string((string *)&local_18);
      TodStringTranslate(L"[RECHARGE_GIFT_ACTIVITY_DESC]");
      TodReplaceString((wstring *)&local_18,L"{NAME}",awStack_20);
      FUN_054766c8(this + 0x120,(wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      FUN_05476c50((exception_ptr *)&local_18);
      FUN_05476c50(awStack_20);
      (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
      switch(uVar2) {
      case 1:
      case 4:
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76cf0);
        *(undefined8 *)(this + 0x118) = uVar5;
        break;
      case 2:
      case 3:
        uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76aa8);
        *(undefined8 *)(this + 0x118) = uVar5;
        break;
      default:
        (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
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
/* RechargeGiftUI::RechargeGiftUI(std::string const&) */

void __thiscall RechargeGiftUI::RechargeGiftUI(RechargeGiftUI *this,string *param_1)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  undefined *this_01;
  LawnApp *pLVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ProfileMgr *this_02;
  long lVar6;
  int *piVar7;
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x130);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06929fa0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0692a2d8;
  *(undefined ***)(this + 0xe0) = &PTR__RechargeGiftUI_0692a320;
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  this[0x174] = (RechargeGiftUI)0x0;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_Store");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_PlantGift");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)local_50,"UI_RechargeGift");
  LawnApp::LoadGroup(pLVar1,(string *)local_50);
  std::string::~string((string *)local_50);
  nop();
  uVar5 = RechargeGiftConfig::GetConfig(param_1);
  *(undefined8 *)(this + 0xe8) = uVar5;
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_02);
  uVar3 = FUN_049dd040(*(undefined1 *)(lVar6 + 0xf8e));
  *(uint *)(this + 0x170) = uVar3 & 0xff;
  InitView(this);
  local_58 = std::
             map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
             ::begin((map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
                      *)this_00);
  do {
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if (!bVar2) {
      iVar4 = *(int *)(this + 0x160);
joined_r0x049e015c:
      if (iVar4 == -1) {
        SelectPlant(this,1000);
      }
      this_01 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnPurchaseDialogClosed);
      Sexy::Delegate0::Delegate0<RechargeGiftUI,void(RechargeGiftUI::*)()>
                (aDStack_38,(string *)local_50);
      MessageRouter::Subscribe((MessageRouter *)this_01,Message::PurchaseDialogClosed,aDStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
    iVar4 = RechargePlantItem::GetPlantState(*(RechargePlantItem **)(lVar6 + 8));
    if (iVar4 < 5) {
      piVar7 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
      SelectPlant(this,*piVar7);
      iVar4 = *(int *)(this + 0x160);
      goto joined_r0x049e015c;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::RechargeSuccessed() */

void __thiscall RechargeGiftUI::RechargeSuccessed(RechargeGiftUI *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  RechargePlantItem *this_00;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  undefined8 uVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[0x174] = (RechargeGiftUI)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (RechargePlantItem *)GetSelectedPlantItem(this);
  if (this_00 != (RechargePlantItem *)0x0) {
    RechargePlantItem::LevelUp(this_00);
    SelectPlant(this,*(int *)(this_00 + 0xd4));
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    PlayerInfo::AddRechargeGiftTimes(pPVar5);
    puVar2 = gMessageRouter;
    uVar1 = *(undefined4 *)(this_00 + 0xd4);
    uVar3 = RechargePlantItem::GetPlantState(this_00);
    MessageRouter::Post<int,int,int,RechargePlantItem::PlantState>
              ((MessageRouter *)puVar2,Message::Charge10Reward,uVar1,uVar3);
  }
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  PlayerInfo::SetRechargeGiftCached(pPVar5,false);
  (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),1);
  RechargePlantItem::GetItemName();
  puVar2 = gMessageRouter;
  FUN_05475d88(asStack_10,asStack_18);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar2,Message::ChargeReward,asStack_10);
  std::string::~string(asStack_10);
  puVar2 = gMessageRouter;
  uVar6 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_rightmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0xe8));
  FUN_05475d88(asStack_10,uVar6);
  MessageRouter::
  Post<std::string_const&,std::string_const&,std::string_const&,char_const*,char_const*,std::string>
            ((MessageRouter *)puVar2,Message::GameCharge,"RechargeGift_10yuan",&DAT_055923fe,
             asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeGiftUI::OnPurchaseDialogClosed() */

void __thiscall RechargeGiftUI::OnPurchaseDialogClosed(RechargeGiftUI *this)

{
  if (this[0x174] == (RechargeGiftUI)0x0) {
    return;
  }
  RechargeSuccessed(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::ButtonDepress(int) */

void __thiscall RechargeGiftUI::ButtonDepress(RechargeGiftUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  string *psVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 - 1000U < 1000) {
    SelectPlant(this,param_1);
  }
  else if (param_1 == 0) {
    LawnApp::KillRechargeGiftUI(gLawnApp);
  }
  else if (param_1 == 1) {
    this[0x174] = (RechargeGiftUI)0x0;
    if (*(int *)(this + 0x170) == 1) {
      RechargeSuccessed(this);
    }
    else {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar3 = ProfileMgr::GetCurrentProfile(this_01);
      if ((lVar3 == 0) ||
         (iVar2 = FUN_049dd038(*(undefined1 *)(lVar3 + 0xf8d)), this_00 = gLawnApp, iVar2 < 1)) {
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_rightmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(this + 0xe8));
        cVar1 = FUN_0547419c();
        if ((cVar1 == '\0') && (lVar3 = GetSelectedPlantItem(this), lVar3 != 0)) {
          this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_03 = (PurchaseBroker *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_rightmost(this_02);
          psVar5 = (string *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0xe8));
          PurchaseBroker::RequestPayment(this_03,psVar5,0);
        }
      }
      else {
        FUN_05478178(awStack_58,L"[SPRINGACTIVITYREWARDERROR]",auStack_68);
        FUN_05478178(awStack_50,&DAT_056f11a8,auStack_60);
        pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeGiftUI::ButtonDepress(int) */

void __thiscall RechargeGiftUI::ButtonDepress(RechargeGiftUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeGiftUI::Draw(Sexy::Graphics*) */

void __thiscall RechargeGiftUI::Draw(RechargeGiftUI *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  RechargePlantItem *this_00;
  undefined8 uVar13;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76c78);
  iVar2 = FUN_049dd124(0x28);
  Sexy::Graphics::DrawImage
            (param_1,pIVar9,*(int *)(this + 0xf0) - iVar2,*(int *)(this + 0xf4),
             *(int *)(this + 0xf8),*(int *)(this + 0xfc));
  nop();
  local_28[0] = std::
                map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
                ::begin((map<int,RechargePlantItem*,std::less<int>,std::allocator<std::pair<int_const,RechargePlantItem*>>>
                         *)(this + 0x130));
  while( true ) {
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x130));
    bVar1 = eastl::operator!=((rbtree_iterator *)local_28,(rbtree_iterator *)local_18);
    if (!bVar1) break;
    lVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_28);
    RechargePlantItem::DrawIcon
              (*(RechargePlantItem **)(lVar10 + 8),param_1,*(int *)(this + 0x100),
               *(int *)(this + 0x104));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_28);
  }
  iVar3 = FUN_049dd124(0x19);
  iVar2 = *(int *)(this + 0xf0);
  iVar4 = FUN_049dd124(0x78);
  iVar8 = *(int *)(this + 0xf4);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76bb0);
  iVar5 = FUN_049dd124(0xaa);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76bb0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76bb0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar9,iVar5 + (iVar2 - iVar3),iVar4 + iVar8,iVar6,iVar7);
  this_00 = (RechargePlantItem *)GetSelectedPlantItem(this);
  if (this_00 != (RechargePlantItem *)0x0) {
    iVar8 = FUN_049dd124(0xdc);
    iVar2 = *(int *)(this + 0xf0);
    iVar3 = FUN_049dd124(0x87);
    RechargePlantItem::DrawPreview
              (this_00,param_1,iVar8 + iVar2,iVar3 + *(int *)(this + 0xf4),
               *(int *)(this + 0x170) == 1);
  }
  pLVar11 = *(LotteryResultProgressBar **)(this + 0x118);
  if (pLVar11 != (LotteryResultProgressBar *)0x0) {
    iVar3 = FUN_049dd124(0xaa);
    iVar2 = *(int *)(this + 0xf0);
    iVar4 = FUN_049dd124(0x82);
    iVar8 = *(int *)(this + 0xf4);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    pSVar12 = *(SalesProgressBar **)(this + 0x118);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar12,iVar3 + iVar2,iVar4 + iVar8,iVar5,iVar6);
  }
  iVar5 = FUN_049dd124(0xb4);
  iVar2 = *(int *)(this + 0xf0);
  iVar8 = *(int *)(this + 0xfc);
  iVar3 = *(int *)(this + 0xf4);
  iVar4 = FUN_049dd124(0xaa);
  iVar4 = (iVar3 + iVar8) - iVar4;
  iVar8 = FUN_049dd124(400);
  iVar3 = FUN_049dd124(0x50);
  Sexy::Insets::Insets((Insets *)local_28,iVar5 + iVar2,iVar4,iVar8,iVar3);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Insets::Insets((Insets *)local_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0x120,
                  (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_28,uVar13,
                  (Insets *)local_18,0,1);
  iVar8 = FUN_049dd124(100);
  iVar3 = FUN_049dd124(0x32);
  iVar6 = FUN_049dd124(300);
  iVar7 = FUN_049dd124(0x1e);
  Sexy::Insets::Insets((Insets *)local_28,iVar5 + iVar2 + iVar8,iVar4 + iVar3,iVar6,iVar7);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28);
  Sexy::Insets::Insets((Insets *)local_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0x128,
                  (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_28,uVar13,
                  (Insets *)local_18,1,1);
  if (*(LotteryResultProgressBar **)(this + 0x110) != (LotteryResultProgressBar *)0x0) {
    iVar2 = *(int *)(this + 0xf8);
    iVar8 = *(int *)(this + 0xf0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x110));
    iVar5 = FUN_049dd124(0x14);
    iVar3 = *(int *)(this + 0xf4);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x110));
    pSVar12 = *(SalesProgressBar **)(this + 0x110);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar12,iVar8 + (iVar2 - iVar4 >> 1),iVar5 + iVar3,iVar6,iVar7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

