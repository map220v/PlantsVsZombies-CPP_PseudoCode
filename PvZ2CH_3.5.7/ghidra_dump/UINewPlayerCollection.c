// Class: UINewPlayerCollection


/* UINewPlayerCollection::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UINewPlayerCollection::DrawAll(UINewPlayerCollection *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.7);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* UINewPlayerCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPlayerCollection::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlayerCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPlayerCollection::ScrollTargetReached(UINewPlayerCollection *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* UINewPlayerCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPlayerCollection::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlayerCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPlayerCollection::ScrollTargetInterrupted(UINewPlayerCollection *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* UINewPlayerCollection::NotifyCloseDialog() */

void UINewPlayerCollection::NotifyCloseDialog(void)

{
  LawnApp::KillNewPlayerCollection(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::UINewPlayerCollection() */

void __thiscall UINewPlayerCollection::UINewPlayerCollection(UINewPlayerCollection *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06631250;
  *(undefined ***)(this + 0xd8) = &PTR__UINewPlayerCollection_06631588;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066315d0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  this[0x118] = (UINewPlayerCollection)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x120));
  *(undefined4 *)(this + 0x150) = 0;
  ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)(this + 0x158));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_NewPlayerCollection");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Artifact");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Profile_select");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Utility");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UINewPlayerCollection,void(UINewPlayerCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyCloseDialog);
  Sexy::Delegate0::Delegate0<UINewPlayerCollection,void(UINewPlayerCollection::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyCloseDialog,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::GetTabByActivity(int) */

void __thiscall UINewPlayerCollection::GetTabByActivity(UINewPlayerCollection *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
             ::begin((map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
                      *)(this + 0x120));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x120));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      uVar2 = 6;
LAB_03442ce8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (puVar3[1] == param_1) {
      uVar2 = *puVar3;
      goto LAB_03442ce8;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::GetActivityByTab(NewPlayerCollectionTab) */

void __thiscall UINewPlayerCollection::GetActivityByTab(UINewPlayerCollection *this,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
             ::begin((map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
                      *)(this + 0x120));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x120));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_03442d9c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*piVar3 == param_2) {
      uVar2 = piVar3[1];
      goto LAB_03442d9c;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::Init() */

void __thiscall UINewPlayerCollection::Init(UINewPlayerCollection *this)

{
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_28[0] = 0x2a7b;
  this_00 = (map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
             *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  local_2c = 1;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::insert<std::pair<NewPlayerCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 2;
  local_28[0] = 0x2a4c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::insert<std::pair<NewPlayerCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 3;
  local_28[0] = 0x2a7c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::insert<std::pair<NewPlayerCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 4;
  local_28[0] = 0x2a5b;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::insert<std::pair<NewPlayerCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 5;
  local_28[0] = 0x2a7d;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::insert<std::pair<NewPlayerCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_2c = 1;
  local_30 = L'⩺';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::SelectTab(int) */

void __thiscall UINewPlayerCollection::SelectTab(UINewPlayerCollection *this,int param_1)

{
  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  undefined4 local_30;
  wchar_t local_2c;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x150) != param_1) {
    this_00 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               *)(this + 0xe8);
    *(int *)(this + 0x150) = param_1;
    local_28 = std::
               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               ::begin(this_00);
    while( true ) {
      local_20[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
      if (!bVar1) break;
      piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      if (*piVar2 != *(int *)(this + 0x150)) {
        ActivityCollectionTabBase::SetSelect(*(ActivityCollectionTabBase **)(piVar2 + 2),false);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    }
    local_20[0] = CONCAT44(local_20[0]._4_4_,*(undefined4 *)(this + 0x150));
    plVar3 = (long *)std::
                     map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                           *)local_20);
    if (*plVar3 != 0) {
      local_20[0] = CONCAT44(local_20[0]._4_4_,*(undefined4 *)(this + 0x150));
      puVar4 = (undefined8 *)
               std::
               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               ::operator[](this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *
                                    )local_20);
      ActivityCollectionTabBase::SetSelect((ActivityCollectionTabBase *)*puVar4,true);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30 = *(undefined4 *)(this + 0x150);
    pwVar5 = (wchar_t *)
             std::
             map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
             ::operator[]((map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
                           *)(this + 0x120),(NewPlayerCollectionTab *)&local_30);
    local_2c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
              ((pair<wchar_t_const,wchar_t> *)&local_28,pwVar5,&local_2c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
               (pair *)&local_28);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlayerCollection::ButtonDepress(int) */

void __thiscall UINewPlayerCollection::ButtonDepress(UINewPlayerCollection *this,int param_1)

{
  int iVar1;
  ProfileMgr *pPVar2;
  long lVar3;
  PlayerInfo *pPVar4;
  long *plVar5;
  WorldMap *this_00;
  
  if (param_1 == 0x58) {
    LawnApp::KillNewPlayerCollection(gLawnApp);
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(pPVar2);
    iVar1 = FUN_03441be4(*(undefined4 *)(lVar3 + 0x40));
    if (iVar1 != 0x13) {
      if (iVar1 == 0x14) {
        this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
        WorldMap::handleTutorialEnd(this_00,false);
        return;
      }
      if (iVar1 == 0x1d) {
        pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
        PlayerInfo::CompleteTutorial(pPVar4,0x1d);
        return;
      }
      if (iVar1 != 0x1e) {
        lVar3 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
        iVar1 = FUN_03441c14(*(undefined4 *)(lVar3 + 0x10));
        if (iVar1 != 0x1e) {
          return;
        }
      }
      pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
      PlayerInfo::CompleteTutorial(pPVar4,0x1e);
      plVar5 = (long *)LawnApp::GetWorldMap(gLawnApp);
      (**(code **)(*plVar5 + 0x338))(plVar5,0x1f);
    }
  }
  else if (param_1 - 1U < 5) {
    SelectTab(this,param_1);
    return;
  }
  return;
}


/* non-virtual thunk to UINewPlayerCollection::ButtonDepress(int) */

void __thiscall UINewPlayerCollection::ButtonDepress(UINewPlayerCollection *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::~UINewPlayerCollection() */

void __thiscall UINewPlayerCollection::~UINewPlayerCollection(UINewPlayerCollection *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06631250;
  *(undefined ***)(this + 0xd8) = &PTR__UINewPlayerCollection_06631588;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066315d0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewPlayerCollection");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Profile_select");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)(this + 0x158));
  std::
  map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
  ::~map((map<NewPlayerCollectionTab,int,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,int>>>
          *)(this + 0x120));
  std::
  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
  ::~map((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
          *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlayerCollection::~UINewPlayerCollection() */

void __thiscall UINewPlayerCollection::~UINewPlayerCollection(UINewPlayerCollection *this)

{
  ~UINewPlayerCollection(this + -0xd8);
  return;
}


/* UINewPlayerCollection::~UINewPlayerCollection() */

void __thiscall UINewPlayerCollection::~UINewPlayerCollection(UINewPlayerCollection *this)

{
  ~UINewPlayerCollection(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPlayerCollection::~UINewPlayerCollection() */

void __thiscall UINewPlayerCollection::~UINewPlayerCollection(UINewPlayerCollection *this)

{
  ~UINewPlayerCollection(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::CheckActivityOpenAtLeastOne() */

void UINewPlayerCollection::CheckActivityOpenAtLeastOne(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  local_a8 = CONCAT44(local_a8._4_4_,0x2a4c);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_a0);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!(bool)bVar2) {
LAB_03445210:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_a0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    puVar4 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    Sexy::OutputDebugStrF
              ((wchar_t *)"CheckActivityOpenAtLeastOne id:%d op:%d",(ulong)*puVar4,(ulong)local_70);
    cVar1 = FUN_03441c04(local_80);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      ActiveItem::~ActiveItem(aAStack_88);
      bVar2 = local_70;
      goto LAB_03445210;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::CreateView() */

void __thiscall UINewPlayerCollection::CreateView(UINewPlayerCollection *this)

{
  RtObject *this_00;
  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
  *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  UIWidgetImage *this_02;
  PVZ2UIScrollingWidget *this_03;
  Widget *this_04;
  ProfileMgr *pPVar14;
  PlayerInfo *this_05;
  long lVar15;
  int *piVar16;
  PVZ2UIButton *pPVar17;
  Widget *this_06;
  ActivityCollectionTabBase *this_07;
  undefined8 *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  UIWidgetImage *this_08;
  code *pcVar22;
  int iVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auStack_120 [8];
  PVZ2UIButton *local_118;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_110 [24];
  PVZ2UIImage aPStack_f8 [56];
  undefined8 local_c0 [7];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillGameMaskUI(gLawnApp);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03441c04(local_80);
  if ((cVar1 == '\0') || (local_70 == '\0')) goto LAB_034452fc;
  this_00 = (RtObject *)(this + 0x158);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,this_00);
  if (cVar1 == '\0') goto LAB_034452fc;
  uVar24 = 0;
  this_02 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_02);
  iVar23 = 0;
  this_01 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
             *)(this + 0xe8);
  uVar4 = FUN_03442074(0x1e);
  uVar5 = FUN_03442074(0x37);
  uVar6 = FUN_03442074(0x78);
  uVar7 = FUN_03442074(0x212);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar4,uVar5,uVar6,uVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06aa0758,2);
  UIWidgetImage::SetImage(this_02,(PVZ2UIImage *)local_c0);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  this_03 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0xd8));
  uVar4 = FUN_03442074(0x19);
  uVar5 = FUN_03442074(0x1c2);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,0,uVar4,*(undefined4 *)(this_02 + 0x50),uVar5);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_03,2);
  this_04 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_04);
  (**(code **)(*(long *)this_04 + 0x198))
            (this_04,0,0,*(undefined4 *)(this_03 + 0x50),*(undefined4 *)(this_03 + 0x54));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
  pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar14);
  uVar25 = *(undefined8 *)(this + 0x170);
  lVar15 = FUN_03441c18(uVar25,*(undefined8 *)(this + 0x178));
  iVar3 = iVar23;
  if (lVar15 != 0) {
    do {
      piVar16 = (int *)FUN_03441c2c(uVar25,uVar24);
      iVar13 = *piVar16;
      iVar8 = GetTabByActivity(this,iVar13);
      uVar25 = *(undefined8 *)(this + 0x170);
      if ((iVar8 != 6) && (lVar15 = FUN_03441c2c(uVar25,uVar24), *(int *)(lVar15 + 8) != 2)) {
        if (iVar23 == 0) {
          iVar23 = iVar8;
        }
        FUN_05478178(aPStack_f8,&DAT_056f11a8,auStack_120);
        Sexy::Color::Color((Color *)local_c0,1);
        pPVar17 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar17,iVar8,(ButtonListener *)(this + 0xe0),(wstring *)aPStack_f8,
                   (Color *)local_c0);
        local_118 = pPVar17;
        FUN_05476c50(aPStack_f8);
        nop();
        pPVar17 = local_118;
        pcVar22 = *(code **)(*(long *)local_118 + 0x1a0);
        iVar9 = FUN_03442074(10);
        iVar10 = FUN_03442074(0x5d);
        iVar11 = FUN_03442074(100);
        iVar12 = FUN_03442074(0x5a);
        Sexy::Insets::Insets((Insets *)local_c0,iVar9,iVar9 + iVar10 * iVar3,iVar11,iVar12);
        (*pcVar22)(pPVar17,(Insets *)local_c0);
        (**(code **)(*(long *)this_04 + 0x60))(this_04,local_118);
        if (iVar13 == 0x2a5b) {
          std::string::string((string *)local_c0,"egypt7");
          cVar1 = PlayerInfo::GetLevelCompleted(this_05,(string *)local_c0);
          std::string::~string((string *)local_c0);
          nop();
          if (cVar1 == '\0') {
            this_08 = ::operator_new(0x118);
            UIWidgetImage::UIWidgetImage(this_08);
            pcVar22 = *(code **)(*(long *)this_08 + 0x1a0);
            iVar9 = FUN_03442074(0);
            iVar10 = FUN_03442074(100);
            iVar11 = FUN_03442074(0x5a);
            Sexy::Insets::Insets((Insets *)local_c0,iVar9,iVar9,iVar10,iVar11);
            (*pcVar22)(this_08,(Insets *)local_c0);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06aa0960,2);
            UIWidgetImage::SetImage(this_08,(PVZ2UIImage *)local_c0);
            lVar15 = *(long *)this_08;
            goto LAB_03445a2c;
          }
        }
        else {
          lVar15 = FUN_03441c2c(*(undefined8 *)(this + 0x170),uVar24);
          if (*(int *)(lVar15 + 8) == 0) {
            this_08 = ::operator_new(0x118);
            UIWidgetImage::UIWidgetImage(this_08);
            pcVar22 = *(code **)(*(long *)this_08 + 0x1a0);
            iVar9 = FUN_03442074(0);
            iVar10 = FUN_03442074(100);
            iVar11 = FUN_03442074(0x5a);
            Sexy::Insets::Insets((Insets *)local_c0,iVar9,iVar9,iVar10,iVar11);
            (*pcVar22)(this_08,(Insets *)local_c0);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06aa0960,2);
            UIWidgetImage::SetImage(this_08,(PVZ2UIImage *)local_c0);
            lVar15 = *(long *)this_08;
LAB_03445a2c:
            (**(code **)(lVar15 + 0x90))(this_08,1);
            (**(code **)(*(long *)local_118 + 0x60))(local_118,this_08);
          }
        }
        this_06 = ::operator_new(0xd8);
        Sexy::Widget::Widget(this_06);
        uVar4 = FUN_03442074(0x14);
        uVar5 = FUN_03442074(0x1fe);
        (**(code **)(*(long *)this_06 + 0x198))(this_06,0,uVar4,*(undefined4 *)(this + 0x50),uVar5);
        (**(code **)(*(long *)this + 0x60))(this,this_06);
        (**(code **)(*(long *)this + 0xb8))(this,this_06);
        this_07 = ::operator_new(0x38);
        ActivityCollectionTabBase::ActivityCollectionTabBase(this_07);
        if (iVar13 == 0x2a5b) {
          std::string::string((string *)local_c0,"egypt7");
          uVar4 = PlayerInfo::GetLevelCompleted(this_05,(string *)local_c0);
          FUN_03441bfc(this_07 + 0x30,uVar4);
          std::string::~string((string *)local_c0);
          nop();
        }
        else {
          lVar15 = FUN_03441c2c(*(undefined8 *)(this + 0x170),uVar24);
          FUN_03441bfc(this_07 + 0x30,*(int *)(lVar15 + 8) == 1);
        }
        iVar3 = iVar3 + 1;
        ActivityCollectionTabBase::InitView(this_07,iVar8,local_118,this_06);
        local_c0[0] = CONCAT44(local_c0[0]._4_4_,iVar8);
        puVar18 = (undefined8 *)
                  std::
                  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                  ::operator[](this_01,(Insets *)local_c0);
        *puVar18 = this_07;
        std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                  ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,&local_118);
        uVar25 = *(undefined8 *)(this + 0x170);
      }
      uVar24 = uVar24 + 1;
      uVar19 = FUN_03441c18(uVar25,*(undefined8 *)(this + 0x178));
    } while (uVar24 < uVar19);
  }
  iVar13 = FUN_03442074(0x14);
  iVar8 = FUN_03442074(0x5d);
  pcVar22 = *(code **)(*(long *)this_03 + 0x60);
  *(int *)(this_04 + 0x54) = iVar13 + iVar8 * iVar3;
  (*pcVar22)(this_03,this_04);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
  local_118 = (PVZ2UIButton *)
              std::
              map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
              ::begin(this_01);
  while( true ) {
    local_c0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_01);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)local_c0);
    if (!bVar2) break;
    puVar20 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118)
    ;
    pPVar17 = (PVZ2UIButton *)FUN_03441bf0(*(undefined8 *)(*(long *)(puVar20 + 2) + 0x10));
    Sexy::StrFormat("IMAGE_UI_NEWPLAYERCOLLECTION_TABBTN%d_N",(Insets *)local_c0,(ulong)*puVar20);
    lVar21 = StringHelper::ToImage((string *)local_c0,false);
    std::string::~string((string *)local_c0);
    puVar20 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118)
    ;
    Sexy::StrFormat("IMAGE_UI_NEWPLAYERCOLLECTION_TABBTN%d_D",(Insets *)local_c0,(ulong)*puVar20);
    lVar15 = StringHelper::ToImage((string *)local_c0,false);
    std::string::~string((string *)local_c0);
    if ((lVar15 == 0) || (lVar21 == 0)) {
      std::string::string((string *)local_c0,"IMAGE_UI_GENERIC_QUESTION_MARK");
      lVar21 = StringHelper::ToImage((string *)local_c0,false);
      std::string::~string((string *)local_c0);
      nop();
      lVar15 = lVar21;
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_f8,lVar21,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,lVar15,2);
    PVZ2UIButton::SetRadioStates(pPVar17,aPStack_f8,(PVZ2UIImage *)local_c0,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0,(vector *)avStack_110
              );
    PVZ2UIButton::LinkRadioButtons(pPVar17,(Insets *)local_c0);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0);
    FUN_03441d10(pPVar17 + 0x2c0);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    nop();
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
  }
  FUN_05478178(aPStack_f8,&DAT_056f11a8,
               (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
  Sexy::Color::Color((Color *)local_c0,1);
  pPVar17 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar17,0x58,(ButtonListener *)(this + 0xe0),(wstring *)aPStack_f8,(Color *)local_c0);
  FUN_05476c50(aPStack_f8);
  nop();
  PVZ2UIImage::PVZ2UIImage(aPStack_f8,&DAT_06aa07a8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06aa0780,2);
  PVZ2UIButton::SetDialogStates(pPVar17,aPStack_f8,(PVZ2UIImage *)local_c0);
  pcVar22 = *(code **)(*(long *)pPVar17 + 0x1a0);
  iVar13 = FUN_03442074(0x50);
  iVar3 = *(int *)(this + 0x50);
  iVar8 = FUN_03442074(5);
  iVar9 = FUN_03442074(0x37);
  iVar10 = FUN_03442074(0x32);
  Sexy::Insets::Insets((Insets *)local_c0,iVar3 - iVar13,iVar8,iVar9,iVar10);
  (*pcVar22)(pPVar17,(Insets *)local_c0);
  (**(code **)(*(long *)this + 0x60))(this,pPVar17);
  this[0x118] = (UINewPlayerCollection)0x1;
  pPVar14 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar15 = ProfileMgr::GetCurrentProfile(pPVar14);
  iVar3 = FUN_03441be4(*(undefined4 *)(lVar15 + 0x40));
  if (*(int *)(this + 0x198) == 0) {
LAB_03445b94:
    SelectTab(this,iVar23);
  }
  else {
    if (iVar3 == 0x14) {
      cVar1 = ActivityCollectionData::IsActivityClose((ActivityCollectionData *)this_00,0x2a7b);
      if (cVar1 == '\0') {
        SelectTab(this,1);
        goto LAB_03445ba0;
      }
      goto LAB_03445b94;
    }
    if (iVar3 == 0x1d) {
      cVar1 = ActivityCollectionData::IsActivityClose((ActivityCollectionData *)this_00,0x2a5b);
      if (cVar1 != '\0') goto LAB_03445b94;
      SelectTab(this,4);
    }
    else {
      if ((iVar3 != 0x1e) ||
         (cVar1 = ActivityCollectionData::IsActivityClose((ActivityCollectionData *)this_00,0x2a7d),
         cVar1 != '\0')) goto LAB_03445b94;
      SelectTab(this,5);
    }
  }
LAB_03445ba0:
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110);
LAB_034452fc:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerCollection::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UINewPlayerCollection::onNotifyRefreshActivityList
          (UINewPlayerCollection *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ActivityCollectionNewPlayerSign *this_00;
  ActivityCollectionNewPlayerDiscountShop *this_01;
  undefined8 *puVar8;
  ActivityCollectionContainer *pAVar9;
  code *pcVar10;
  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
  *pmVar11;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) goto LAB_03445d20;
  uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                    ((set<int,std::less<int>,std::allocator<int>> *)param_2);
  uVar5 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)param_2);
  local_1c = 0x2a7a;
  local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar4,uVar5,&local_1c);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    if (this[0x118] == (UINewPlayerCollection)0x0) {
      CreateView(this);
    }
    goto LAB_03445d20;
  }
  uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                    ((set<int,std::less<int>,std::allocator<int>> *)param_2);
  uVar5 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)param_2);
  local_1c = 0x2a7b;
  local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar4,uVar5,&local_1c);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    iVar3 = GetTabByActivity(this,0x2a7b);
    local_10 = CONCAT44(local_10._4_4_,iVar3);
    if (iVar3 != *(int *)(this + 0x150)) goto LAB_03445d20;
    pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               *)(this + 0xe8);
    lVar6 = std::
            map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
            ::count(pmVar11,(rbtree_iterator *)&local_10);
    if ((lVar6 == 0) ||
       (plVar7 = (long *)std::
                         map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar11,(rbtree_iterator *)&local_10), *plVar7 == 0))
    goto LAB_03445d20;
    plVar7 = (long *)std::
                     map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](pmVar11,(rbtree_iterator *)&local_10);
    cVar2 = FUN_03441bf8(*(undefined1 *)(*plVar7 + 0x20));
    if (cVar2 != '\0') {
LAB_03446250:
      plVar7 = (long *)std::
                       map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                       ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                                     *)(this + 0xe8),(rbtree_iterator *)&local_10);
      plVar7 = (long *)FUN_03441bf4(*(undefined8 *)(*plVar7 + 0x28));
      pcVar10 = *(code **)(*plVar7 + 8);
      puVar8 = (undefined8 *)
               std::
               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                             *)(this + 0xe8),(rbtree_iterator *)&local_10);
      (*pcVar10)(plVar7,*puVar8);
      goto LAB_03445d20;
    }
    this_00 = ::operator_new(0x1c0);
    ActivityCollectionNewPlayerSign::ActivityCollectionNewPlayerSign(this_00);
  }
  else {
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_1c = 0x2a4c;
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar4,uVar5,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2);
      uVar5 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
      local_1c = 0x2a7c;
      local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar4,uVar5,&local_1c);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        iVar3 = GetTabByActivity(this,0x2a7c);
        local_10 = CONCAT44(local_10._4_4_,iVar3);
        if (iVar3 != *(int *)(this + 0x150)) goto LAB_03445d20;
        pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                   *)(this + 0xe8);
        lVar6 = std::
                map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                ::count(pmVar11,(rbtree_iterator *)&local_10);
        if ((lVar6 == 0) ||
           (plVar7 = (long *)std::
                             map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar11,(rbtree_iterator *)&local_10), *plVar7 == 0))
        goto LAB_03445d20;
        plVar7 = (long *)std::
                         map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar11,(rbtree_iterator *)&local_10);
        cVar2 = FUN_03441bf8(*(undefined1 *)(*plVar7 + 0x20));
        if (cVar2 == '\0') {
          this_01 = ::operator_new(0x1b0);
          ActivityCollectionNewPlayerDiscountShop::ActivityCollectionNewPlayerDiscountShop(this_01);
          goto LAB_03445f98;
        }
LAB_03446290:
        plVar7 = (long *)std::
                         map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                                       *)(this + 0xe8),(rbtree_iterator *)&local_10);
        pAVar9 = (ActivityCollectionContainer *)FUN_03441bf4(*(undefined8 *)(*plVar7 + 0x28));
        pcVar10 = *(code **)(*(long *)pAVar9 + 8);
      }
      else {
        uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2);
        uVar5 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
        local_1c = 0x2a5b;
        local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                             (uVar4,uVar5,&local_1c);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar1) {
          iVar3 = GetTabByActivity(this,0x2a5b);
          local_10 = CONCAT44(local_10._4_4_,iVar3);
          if (iVar3 != *(int *)(this + 0x150)) goto LAB_03445d20;
          pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                     *)(this + 0xe8);
          lVar6 = std::
                  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                  ::count(pmVar11,(rbtree_iterator *)&local_10);
          if ((lVar6 == 0) ||
             (plVar7 = (long *)std::
                               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar11,(rbtree_iterator *)&local_10), *plVar7 == 0))
          goto LAB_03445d20;
          plVar7 = (long *)std::
                           map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar11,(rbtree_iterator *)&local_10);
          cVar2 = FUN_03441bf8(*(undefined1 *)(*plVar7 + 0x20));
          if (cVar2 != '\0') goto LAB_03446290;
          this_01 = ::operator_new(0x1b0);
          ActivityCollectionPennyClassroom::ActivityCollectionPennyClassroom
                    ((ActivityCollectionPennyClassroom *)this_01);
        }
        else {
          uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2);
          uVar5 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
          local_1c = 0x2a7d;
          local_18 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                               (uVar4,uVar5,&local_1c);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar1) goto LAB_03445d20;
          iVar3 = GetTabByActivity(this,0x2a7d);
          local_10 = CONCAT44(local_10._4_4_,iVar3);
          if (iVar3 != *(int *)(this + 0x150)) goto LAB_03445d20;
          pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                     *)(this + 0xe8);
          lVar6 = std::
                  map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                  ::count(pmVar11,(rbtree_iterator *)&local_10);
          if ((lVar6 == 0) ||
             (plVar7 = (long *)std::
                               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar11,(rbtree_iterator *)&local_10), *plVar7 == 0))
          goto LAB_03445d20;
          plVar7 = (long *)std::
                           map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar11,(rbtree_iterator *)&local_10);
          cVar2 = FUN_03441bf8(*(undefined1 *)(*plVar7 + 0x20));
          if (cVar2 != '\0') goto LAB_03446290;
          this_01 = ::operator_new(0x210);
          ActivityCollectionNewPlayerSpecialGift::ActivityCollectionNewPlayerSpecialGift
                    ((ActivityCollectionNewPlayerSpecialGift *)this_01);
        }
LAB_03445f98:
        pAVar9 = (ActivityCollectionContainer *)(this_01 + 0xe0);
        puVar8 = (undefined8 *)
                 std::
                 map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                 ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                               *)(this + 0xe8),(rbtree_iterator *)&local_10);
        ActivityCollectionTabBase::SetTabContainer((ActivityCollectionTabBase *)*puVar8,pAVar9);
        plVar7 = (long *)std::
                         map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                                       *)(this + 0xe8),(rbtree_iterator *)&local_10);
        FUN_03441d04(*plVar7 + 0x20);
        pcVar10 = (code *)**(undefined8 **)(this_01 + 0xe0);
      }
      puVar8 = (undefined8 *)
               std::
               map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               ::operator[]((map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                             *)(this + 0xe8),(rbtree_iterator *)&local_10);
      (*pcVar10)(pAVar9,*puVar8);
      goto LAB_03445d20;
    }
    iVar3 = GetTabByActivity(this,0x2a4c);
    local_10 = CONCAT44(local_10._4_4_,iVar3);
    if (iVar3 != *(int *)(this + 0x150)) goto LAB_03445d20;
    pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
               *)(this + 0xe8);
    lVar6 = std::
            map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
            ::count(pmVar11,(rbtree_iterator *)&local_10);
    if ((lVar6 == 0) ||
       (plVar7 = (long *)std::
                         map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar11,(rbtree_iterator *)&local_10), *plVar7 == 0))
    goto LAB_03445d20;
    plVar7 = (long *)std::
                     map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](pmVar11,(rbtree_iterator *)&local_10);
    cVar2 = FUN_03441bf8(*(undefined1 *)(*plVar7 + 0x20));
    if (cVar2 != '\0') goto LAB_03446250;
    this_00 = ::operator_new(0x1b0);
    ActivityCollectionNoviceSevenDays::ActivityCollectionNoviceSevenDays
              ((ActivityCollectionNoviceSevenDays *)this_00);
  }
  pmVar11 = (map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
             *)(this + 0xe8);
  puVar8 = (undefined8 *)
           std::
           map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
           ::operator[](pmVar11,(rbtree_iterator *)&local_10);
  ActivityCollectionTabBase::SetTabContainer
            ((ActivityCollectionTabBase *)*puVar8,(ActivityCollectionContainer *)(this_00 + 0xe0));
  plVar7 = (long *)std::
                   map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
                   ::operator[](pmVar11,(rbtree_iterator *)&local_10);
  FUN_03441d04(*plVar7 + 0x20);
  pcVar10 = (code *)**(undefined8 **)(this_00 + 0xe0);
  puVar8 = (undefined8 *)
           std::
           map<NewPlayerCollectionTab,ActivityCollectionTabBase*,std::less<NewPlayerCollectionTab>,std::allocator<std::pair<NewPlayerCollectionTab_const,ActivityCollectionTabBase*>>>
           ::operator[](pmVar11,(rbtree_iterator *)&local_10);
  (*pcVar10)((ActivityCollectionContainer *)(this_00 + 0xe0),*puVar8);
LAB_03445d20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

