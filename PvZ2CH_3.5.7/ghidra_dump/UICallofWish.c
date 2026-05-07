// Class: UICallofWish


/* UICallofWish::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICallofWish::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICallofWish::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UICallofWish::ScrollTargetReached(UICallofWish *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UICallofWish::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICallofWish::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICallofWish::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UICallofWish::ScrollTargetInterrupted(UICallofWish *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICallofWish::GetLayoutName() */

void __thiscall UICallofWish::GetLayoutName(UICallofWish *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICallofWish");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICallofWish::closeDescriptionWidget() */

void __thiscall UICallofWish::closeDescriptionWidget(UICallofWish *this)

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
/* UICallofWish::showDescriptionWidget() */

void __thiscall UICallofWish::showDescriptionWidget(UICallofWish *this)

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
    TodStringTranslate(L"[CALL_OF_WISH_DESCRIPTION]");
    TodStringTranslate(L"[CALL_OF_WISH_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x180);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UICallofWish,void(UICallofWish::*)()>(aDStack_38,awStack_50);
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


/* UICallofWish::UICallofWish() */

void __thiscall UICallofWish::UICallofWish(UICallofWish *this)

{
  UISingletonDialog<UICallofWish>::UISingletonDialog((UISingletonDialog<UICallofWish> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_066f17e0;
  *(undefined **)(this + 0xd8) = &DAT_066f1b40;
  *(undefined **)(this + 0x138) = &DAT_066f1b88;
  *(undefined ***)(this + 0x140) = &PTR__UICallofWish_066f1ba0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x150));
  *(undefined8 *)(this + 0x180) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICallofWish::~UICallofWish() */

void __thiscall UICallofWish::~UICallofWish(UICallofWish *this)

{
  map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066f17e0;
  *(undefined **)(this + 0xd8) = &DAT_066f1b40;
  *(undefined **)(this + 0x138) = &DAT_066f1b88;
  *(undefined ***)(this + 0x140) = &PTR__UICallofWish_066f1ba0;
  local_18 = std::
             map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
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
  map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
  ::clear(this_00);
  std::
  map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<UICallofWish>::~UISingletonDialog((UISingletonDialog<UICallofWish> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICallofWish::~UICallofWish() */

void __thiscall UICallofWish::~UICallofWish(UICallofWish *this)

{
  ~UICallofWish(this + -0x140);
  return;
}


/* UICallofWish::~UICallofWish() */

void __thiscall UICallofWish::~UICallofWish(UICallofWish *this)

{
  ~UICallofWish(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICallofWish::~UICallofWish() */

void __thiscall UICallofWish::~UICallofWish(UICallofWish *this)

{
  ~UICallofWish(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICallofWish::SetCurrentTab(int) */

void __thiscall UICallofWish::SetCurrentTab(UICallofWish *this,int param_1)

{
  map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  CallofWishBundlePage *pCVar10;
  CallofWishTaskPage *this_01;
  CallofWishPage *this_02;
  undefined8 uVar11;
  long lVar12;
  RtObject *pRVar13;
  UIBossMedalLottery *pUVar14;
  ulong uVar15;
  CallofWishTrainPage *pCVar16;
  TGALogMgr *pTVar17;
  code *in_x2;
  code *__n;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x148) != param_1) {
    this_00 = (map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
               *)(this + 0x150);
    *(int *)(this + 0x148) = param_1;
    local_48 = std::
               map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
               ::begin(this_00);
    while( true ) {
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
      if (!bVar1) break;
      piVar7 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
      if (*piVar7 != *(int *)(this + 0x148)) {
        CallofWishTabBase::SetSelect(*(CallofWishTabBase **)(piVar7 + 2),false);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    }
    plVar8 = (long *)std::
                     map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                     ::operator[](this_00,(int *)(this + 0x148));
    if (*plVar8 != 0) {
      puVar9 = (undefined8 *)
               std::
               map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
               ::operator[](this_00,(int *)(this + 0x148));
      CallofWishTabBase::SetSelect((CallofWishTabBase *)*puVar9,true);
    }
    switch(param_1) {
    case 1:
      this_02 = (CallofWishPage *)UISingletonDialog<CallofWishPage>::GetSingletonPtr();
      if (this_02 == (CallofWishPage *)0x0) {
        UISingletonDialog<CallofWishPage>::ShowDialog();
      }
      else {
        CallofWishPage::InitView(this_02);
      }
      local_40 = CONCAT44(local_40._4_4_,1);
      puVar9 = (undefined8 *)
               std::
               map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
               ::operator[](this_00,(int *)&local_40);
      plVar8 = (long *)*puVar9;
      uVar11 = UISingletonDialog<CallofWishPage>::GetSingletonPtr();
      __n = *(code **)(*plVar8 + 0x10);
      (*__n)(plVar8,uVar11);
      TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)__n);
      lVar12 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar12 + 0xa0));
      FUN_05474278(auStack_38,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
      std::string::~string((string *)&local_48);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishDraw(pTVar17,(TGACallofWishDraw *)&local_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_40);
      break;
    case 2:
      local_40 = CONCAT44(local_40._4_4_,2);
      plVar8 = (long *)std::
                       map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                       ::operator[](this_00,(int *)&local_40);
      cVar2 = FUN_039d274c(*(undefined1 *)(*plVar8 + 0x20));
      if (cVar2 == '\0') {
        this_01 = ::operator_new(0xe0);
        CallofWishTaskPage::CallofWishTaskPage(this_01);
        iVar3 = FUN_039d34f4(0x244);
        iVar4 = FUN_039d34f4(0x1b3);
        CallofWishTaskPage::InitView(this_01,iVar3,iVar4);
        local_40 = CONCAT44(local_40._4_4_,2);
        puVar9 = (undefined8 *)
                 std::
                 map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                 ::operator[](this_00,(int *)&local_40);
        in_x2 = *(code **)(*(long *)*puVar9 + 0x10);
        (*in_x2)((long *)*puVar9,this_01);
      }
      else {
        MessageRouter::Post((_func_void *)gMessageRouter);
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)in_x2);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishTask(pTVar17,(TGACallofWishTask *)&local_40);
      TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_40);
      break;
    case 3:
      local_40 = CONCAT44(local_40._4_4_,3);
      plVar8 = (long *)std::
                       map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                       ::operator[](this_00,(int *)&local_40);
      cVar2 = FUN_039d274c(*(undefined1 *)(*plVar8 + 0x20));
      if (cVar2 == '\0') {
        pCVar10 = ::operator_new(0xf8);
        CallofWishBundlePage::CallofWishBundlePage(pCVar10);
        uVar5 = FUN_039d34f4(0x244);
        uVar6 = FUN_039d34f4(0x1b3);
        CallofWishBundlePage::InitView(pCVar10,3,uVar5,uVar6);
        local_40 = CONCAT44(local_40._4_4_,3);
        puVar9 = (undefined8 *)
                 std::
                 map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                 ::operator[](this_00,(int *)&local_40);
        in_x2 = *(code **)(*(long *)*puVar9 + 0x10);
        (*in_x2)((long *)*puVar9,pCVar10);
      }
      TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)in_x2);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishDaily(pTVar17,(TGACallofWishDaily *)&local_40);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      break;
    case 4:
      local_40 = CONCAT44(local_40._4_4_,4);
      plVar8 = (long *)std::
                       map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                       ::operator[](this_00,(int *)&local_40);
      cVar2 = FUN_039d274c(*(undefined1 *)(*plVar8 + 0x20));
      if (cVar2 == '\0') {
        pCVar10 = ::operator_new(0xf8);
        CallofWishBundlePage::CallofWishBundlePage(pCVar10);
        uVar5 = FUN_039d34f4(0x244);
        uVar6 = FUN_039d34f4(0x1b3);
        CallofWishBundlePage::InitView(pCVar10,4,uVar5,uVar6);
        local_40 = CONCAT44(local_40._4_4_,4);
        puVar9 = (undefined8 *)
                 std::
                 map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                 ::operator[](this_00,(int *)&local_40);
        in_x2 = *(code **)(*(long *)*puVar9 + 0x10);
        (*in_x2)((long *)*puVar9,pCVar10);
      }
      TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)in_x2);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishLimit(pTVar17,(TGACallofWishLimit *)&local_40);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      break;
    case 5:
      local_40 = CONCAT44(local_40._4_4_,5);
      plVar8 = (long *)std::
                       map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                       ::operator[](this_00,(int *)&local_40);
      cVar2 = FUN_039d274c(*(undefined1 *)(*plVar8 + 0x20));
      if (cVar2 == '\0') {
        pCVar16 = ::operator_new(0x100);
        CallofWishTrainPage::CallofWishTrainPage(pCVar16);
        uVar5 = FUN_039d34f4(0x244);
        uVar6 = FUN_039d34f4(0x1b3);
        CallofWishTrainPage::InitView(pCVar16,5,uVar5,uVar6);
        local_40 = CONCAT44(local_40._4_4_,5);
        puVar9 = (undefined8 *)
                 std::
                 map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                 ::operator[](this_00,(int *)&local_40);
        in_x2 = *(code **)(*(long *)*puVar9 + 0x10);
        (*in_x2)((long *)*puVar9,pCVar16);
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,5);
        plVar8 = (long *)std::
                         map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                         ::operator[](this_00,(int *)&local_48);
        lVar12 = FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
        if (lVar12 != 0) {
          local_40 = CONCAT44(local_40._4_4_,5);
          plVar8 = (long *)std::
                           map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                           ::operator[](this_00,(int *)&local_40);
          pRVar13 = (RtObject *)FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
          pUVar14 = Sexy::RtObject::Cast<UIBossMedalLottery>(pRVar13);
          if (pUVar14 != (UIBossMedalLottery *)0x0) {
            local_40 = CONCAT44(local_40._4_4_,5);
            plVar8 = (long *)std::
                             map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                             ::operator[](this_00,(int *)&local_40);
            pRVar13 = (RtObject *)FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
            pUVar14 = Sexy::RtObject::Cast<UIBossMedalLottery>(pRVar13);
            uVar15 = FUN_039d34f4(0x244);
            in_x2 = (code *)(uVar15 & 0xffffffff);
            uVar5 = FUN_039d34f4(0x1b3);
            CallofWishTrainPage::InitView((CallofWishTrainPage *)pUVar14,5,in_x2,uVar5);
          }
        }
      }
      TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)in_x2);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishGift(pTVar17,(TGACallofWishGift *)&local_40);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
      break;
    case 6:
      local_40 = CONCAT44(local_40._4_4_,6);
      plVar8 = (long *)std::
                       map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                       ::operator[](this_00,(int *)&local_40);
      cVar2 = FUN_039d274c(*(undefined1 *)(*plVar8 + 0x20));
      if (cVar2 == '\0') {
        pCVar16 = ::operator_new(0x100);
        CallofWishTrainPage::CallofWishTrainPage(pCVar16);
        uVar5 = FUN_039d34f4(0x244);
        uVar6 = FUN_039d34f4(0x1b3);
        CallofWishTrainPage::InitView(pCVar16,6,uVar5,uVar6);
        local_40 = CONCAT44(local_40._4_4_,6);
        puVar9 = (undefined8 *)
                 std::
                 map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                 ::operator[](this_00,(int *)&local_40);
        in_x2 = *(code **)(*(long *)*puVar9 + 0x10);
        (*in_x2)((long *)*puVar9,pCVar16);
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,6);
        plVar8 = (long *)std::
                         map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                         ::operator[](this_00,(int *)&local_48);
        lVar12 = FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
        if (lVar12 != 0) {
          local_40 = CONCAT44(local_40._4_4_,6);
          plVar8 = (long *)std::
                           map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                           ::operator[](this_00,(int *)&local_40);
          pRVar13 = (RtObject *)FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
          pUVar14 = Sexy::RtObject::Cast<UIBossMedalLottery>(pRVar13);
          if (pUVar14 != (UIBossMedalLottery *)0x0) {
            local_40 = CONCAT44(local_40._4_4_,6);
            plVar8 = (long *)std::
                             map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
                             ::operator[](this_00,(int *)&local_40);
            pRVar13 = (RtObject *)FUN_039d2750(*(undefined8 *)(*plVar8 + 0x28));
            pUVar14 = Sexy::RtObject::Cast<UIBossMedalLottery>(pRVar13);
            uVar15 = FUN_039d34f4(0x244);
            in_x2 = (code *)(uVar15 & 0xffffffff);
            uVar5 = FUN_039d34f4(0x1b3);
            CallofWishTrainPage::InitView((CallofWishTrainPage *)pUVar14,6,in_x2,uVar5);
          }
        }
      }
      TGATenYearsData::TGATenYearsData((TGATenYearsData *)&local_40);
      std::string::append((string *)&local_40,"1",(size_t)in_x2);
      pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCallofWishTrain(pTVar17,(TGACallofWishTrain *)&local_40);
      Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_40);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UICallofWish::ButtonDepress(int) */

void __thiscall UICallofWish::ButtonDepress(UICallofWish *this,int param_1)

{
  if (param_1 - 1U < 6) {
    SetCurrentTab(this,param_1);
    return;
  }
  if (param_1 != 0x2c) {
    if (param_1 == 0x58) {
      UISingletonDialog<UICallofWish>::CloseDialog();
      return;
    }
    return;
  }
  showDescriptionWidget(this);
  return;
}


/* non-virtual thunk to UICallofWish::ButtonDepress(int) */

void __thiscall UICallofWish::ButtonDepress(UICallofWish *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICallofWish::InitView() */

void __thiscall UICallofWish::InitView(UICallofWish *this)

{
  map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  CallofWishTabBase *this_01;
  undefined8 *puVar5;
  LotteryResultProgressBar *this_02;
  SalesProgressBar *this_03;
  PVZ2UIButton *this_04;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  PVZ2UIScrollingWidget *this_05;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  string asStack_78 [56];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
             *)(this + 0x150);
  lVar10 = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  do {
    this_01 = ::operator_new(0x30);
    CallofWishTabBase::CallofWishTabBase(this_01,(int)lVar10,(Dialog *)this);
    local_40[0] = CONCAT44(local_40[0]._4_4_,(int)lVar10);
    lVar10 = lVar10 + 1;
    puVar5 = (undefined8 *)
             std::
             map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
             ::operator[](this_00,(int *)local_40);
    *puVar5 = this_01;
    local_40[0] = open_vcdiff::JSONCodeTableWriter::target_length((JSONCodeTableWriter *)this_01);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
               (PVZ2UIButton **)local_40);
  } while (lVar10 != 7);
  uVar2 = FUN_039d34f4(6);
  this_02 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac13d8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_02);
  this_03 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac13d8);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_03);
  local_98 = std::
             map<int,CallofWishTabBase*,std::less<int>,std::allocator<std::pair<int_const,CallofWishTabBase*>>>
             ::begin(this_00);
  iVar11 = 0;
  while( true ) {
    local_40[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)local_40);
    if (!bVar1) break;
    lVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    this_04 = (PVZ2UIButton *)
              open_vcdiff::JSONCodeTableWriter::target_length(*(JSONCodeTableWriter **)(lVar10 + 8))
    ;
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_CALLOFWISH_TABBTN%d_N",(string *)local_40,(ulong)*puVar6);
    uVar7 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_CALLOFWISH_TABBTN%d_D",(string *)local_40,(ulong)*puVar6);
    uVar8 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,uVar7,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar8,2);
    PVZ2UIButton::SetRadioStates(this_04,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,(vector *)avStack_90)
    ;
    PVZ2UIButton::LinkRadioButtons(this_04,(string *)local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    FUN_039d28c8(this_04 + 0x2c0);
    (**(code **)(*(long *)this_04 + 0x198))
              (this_04,uVar2,iVar11,(int)((double)iVar3 * 0.8),(int)((double)iVar4 * 0.8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    iVar11 = iVar11 + (int)((double)iVar4 * 0.8);
  }
  std::string::string((string *)local_40,"Widget_TabPannel");
  lVar10 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::Insets::Insets
            ((Insets *)local_40,*(int *)(lVar10 + 0x48),*(int *)(lVar10 + 0x4c),
             *(int *)(lVar10 + 0x50),*(int *)(lVar10 + 0x54));
  (**(code **)(**(long **)(lVar10 + 0x20) + 0x68))(*(long **)(lVar10 + 0x20),lVar10);
  *(int *)(lVar10 + 0x54) = iVar11;
  this_05 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_05,(ScrollWidgetListener *)(this + 0x140));
  (**(code **)(*(long *)this_05 + 0x1a0))(this_05,(string *)local_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_05,2);
  std::string::string(asStack_78,"UIImage_Tabs");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_78);
  std::string::~string(asStack_78);
  nop();
  (**(code **)(*plVar9 + 0x60))(plVar9,this_05);
  (**(code **)(*(long *)this_05 + 0x60))(this_05,lVar10);
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
/* UICallofWish::OnCreate() */

void __thiscall UICallofWish::OnCreate(UICallofWish *this)

{
  UIWidgetBackground *pUVar1;
  CallofWishManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  this_00 = (CallofWishManager *)Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  CallofWishManager::Initdata(this_00);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

