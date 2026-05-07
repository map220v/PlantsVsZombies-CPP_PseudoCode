// Class: UIActivityCollection


/* UIActivityCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIActivityCollection::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIActivityCollection::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIActivityCollection::ScrollTargetReached(UIActivityCollection *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* UIActivityCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIActivityCollection::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIActivityCollection::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIActivityCollection::ScrollTargetInterrupted(UIActivityCollection *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::~UIActivityCollection() */

void __thiscall UIActivityCollection::~UIActivityCollection(UIActivityCollection *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06625700;
  *(undefined ***)(this + 0xd8) = &PTR__UIActivityCollection_06625a40;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06625a88;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCollection");
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
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)(this + 0x158));
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::~map((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
          *)(this + 0x120));
  std::
  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
  ::~map((map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
          *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIActivityCollection::~UIActivityCollection() */

void __thiscall UIActivityCollection::~UIActivityCollection(UIActivityCollection *this)

{
  ~UIActivityCollection(this + -0xd8);
  return;
}


/* UIActivityCollection::~UIActivityCollection() */

void __thiscall UIActivityCollection::~UIActivityCollection(UIActivityCollection *this)

{
  ~UIActivityCollection(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIActivityCollection::~UIActivityCollection() */

void __thiscall UIActivityCollection::~UIActivityCollection(UIActivityCollection *this)

{
  ~UIActivityCollection(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::UIActivityCollection() */

void __thiscall UIActivityCollection::UIActivityCollection(UIActivityCollection *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06625700;
  *(undefined ***)(this + 0xd8) = &PTR__UIActivityCollection_06625a40;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06625a88;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe8));
  this[0x118] = (UIActivityCollection)0x0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x120));
  *(undefined4 *)(this + 0x150) = 0;
  ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)(this + 0x158));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_ActivityCollection");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Artifact");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIActivityCollection,void(UIActivityCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::GetTabByActivity(int) */

void __thiscall UIActivityCollection::GetTabByActivity(UIActivityCollection *this,int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
             ::begin((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
                      *)(this + 0x120));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x120));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      uVar2 = 0x25;
LAB_034213e8:
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
      goto LAB_034213e8;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::GetActivityByTab(ActivityCollectionTab) */

void __thiscall UIActivityCollection::GetActivityByTab(UIActivityCollection *this,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
             ::begin((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
                      *)(this + 0x120));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x120));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_0342149c:
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
      goto LAB_0342149c;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::Init() */

void __thiscall UIActivityCollection::Init(UIActivityCollection *this)

{
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_28[0] = 0x2a1b;
  this_00 = (map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
             *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  local_2c = 1;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 2;
  local_28[0] = 0x2a51;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_28[0] = 0x29e8;
  local_2c = 3;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 4;
  local_28[0] = 0x2a13;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x15;
  local_28[0] = 0x2a79;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 5;
  local_28[0] = 0x2a44;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 6;
  local_28[0] = 0x2a2c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_28[0] = 0x2a66;
  local_2c = 7;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_28[0] = 0x2a09;
  local_2c = 8;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 9;
  local_28[0] = 0x2a2d;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 10;
  local_28[0] = 0x2a6a;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xb;
  local_28[0] = 0x2a07;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xc;
  local_28[0] = 0x2a59;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xd;
  local_28[0] = 0x2975;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xe;
  local_28[0] = 0x2a8f;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xf;
  local_28[0] = 0x2a72;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x10;
  local_28[0] = 0x2a32;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x11;
  local_28[0] = 0x2a3a;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x12;
  local_28[0] = 0x2a6c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x13;
  local_28[0] = 0x2a77;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x14;
  local_28[0] = 0x2a75;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x16;
  local_28[0] = 0x2a3e;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x17;
  local_28[0] = 0x2a4f;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x18;
  local_28[0] = 0x2a7e;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x19;
  local_28[0] = 0x2a45;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1a;
  local_28[0] = 0x2a7f;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1b;
  local_28[0] = 0x2a80;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1d;
  local_28[0] = 0x2a83;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1f;
  local_28[0] = 0x2a84;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x20;
  local_28[0] = 0x2a88;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x21;
  local_28[0] = 0x2a89;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x22;
  local_28[0] = 0x2a8b;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x24;
  local_28[0] = 0x2a8e;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x23;
  local_28[0] = 0x2a8d;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::
  map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
  ::insert<std::pair<ActivityCollectionTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_2c = 1;
  local_30 = L'⩓';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  local_30 = L'⧨';
  local_2c = 1;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  local_30 = L'⨉';
  local_2c = 1;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  local_30 = L'⩦';
  local_2c = 1;
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
/* UIActivityCollection::SelectTab(int) */

void __thiscall UIActivityCollection::SelectTab(UIActivityCollection *this,int param_1)

{
  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
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
    this_00 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
               *)(this + 0xe8);
    *(int *)(this + 0x150) = param_1;
    local_28 = std::
               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
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
                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>
                                           *)local_20);
    if (*plVar3 != 0) {
      local_20[0] = CONCAT44(local_20[0]._4_4_,*(undefined4 *)(this + 0x150));
      puVar4 = (undefined8 *)
               std::
               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
               ::operator[](this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *
                                    )local_20);
      ActivityCollectionTabBase::SetSelect((ActivityCollectionTabBase *)*puVar4,true);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30 = *(undefined4 *)(this + 0x150);
    pwVar5 = (wchar_t *)
             std::
             map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
             ::operator[]((map<ActivityCollectionTab,int,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,int>>>
                           *)(this + 0x120),(ActivityCollectionTab *)&local_30);
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


/* UIActivityCollection::ButtonDepress(int) */

void __thiscall UIActivityCollection::ButtonDepress(UIActivityCollection *this,int param_1)

{
  if (param_1 == 0x58) {
    LawnApp::KillActivityCollection(gLawnApp);
    return;
  }
  if (0x23 < param_1 - 1U) {
    return;
  }
  SelectTab(this,param_1);
  return;
}


/* non-virtual thunk to UIActivityCollection::ButtonDepress(int) */

void __thiscall UIActivityCollection::ButtonDepress(UIActivityCollection *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::CheckActivityOpenAtLeastOne() */

void UIActivityCollection::CheckActivityOpenAtLeastOne(void)

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
  local_a8._0_4_ = 0x2a1b;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a51;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x29e8;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a13;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a44;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a2c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a66;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a09;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a2d;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a6a;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a07;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a59;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2975;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a72;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a32;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a3a;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a6c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a8f;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a77;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a79;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a3e;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a4f;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a7e;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a45;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a7f;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a80;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a81;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a84;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a89;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a8b;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8 = CONCAT44(local_a8._4_4_,0x2a8d);
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
LAB_03423f14:
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
    cVar1 = FUN_0341e954(local_80);
    if ((cVar1 != '\0') && (local_70 != 0)) {
      ActiveItem::~ActiveItem(aAStack_88);
      bVar2 = local_70;
      goto LAB_03423f14;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::CheckTabButton(ActivityCollectionTab) */

void __thiscall UIActivityCollection::CheckTabButton(UIActivityCollection *this,uint param_2)

{
  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
  *pmVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  PVZ2UIButton *pPVar7;
  RenaissanceChallengeNewManager *this_00;
  long lVar8;
  uint local_214;
  PVZ2UIImage aPStack_210 [56];
  PVZ2UIImage aPStack_1d8 [56];
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  string asStack_120 [100];
  uint local_bc;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_214 = param_2;
  if (param_2 == 3) {
    pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
              *)(this + 0xe8);
    lVar5 = std::
            map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
            ::count(pmVar1,(ActivityCollectionTab *)&local_214);
    if ((lVar5 == 0) ||
       (plVar6 = (long *)std::
                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar1,(ActivityCollectionTab *)&local_214), *plVar6 == 0))
    goto LAB_034241e4;
    plVar6 = (long *)std::
                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](pmVar1,(ActivityCollectionTab *)&local_214);
    pPVar7 = (PVZ2UIButton *)FUN_0341e948(*(undefined8 *)(*plVar6 + 0x10));
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    cVar2 = FUN_0341e954(local_198);
    if ((cVar2 != '\0') && (local_188 != '\0')) {
      LimitGroupBuyInfo::LimitGroupBuyInfo((LimitGroupBuyInfo *)asStack_120);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1a0,(RtObject *)asStack_120);
      if (cVar2 != '\0') {
        Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_N_%d",(string *)aPStack_1d8,
                        (ulong)local_214,(ulong)local_bc);
        lVar5 = StringHelper::ToImage((string *)aPStack_1d8,false);
        std::string::~string((string *)aPStack_1d8);
        Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_D_%d",(string *)aPStack_1d8,
                        (ulong)local_214,(ulong)local_bc);
        lVar8 = StringHelper::ToImage((string *)aPStack_1d8,false);
        std::string::~string((string *)aPStack_1d8);
        if ((lVar8 == 0) || (lVar5 == 0)) {
          std::string::string((string *)aPStack_1d8,"IMAGE_UI_GENERIC_QUESTION_MARK");
          lVar8 = StringHelper::ToImage((string *)aPStack_1d8,false);
          std::string::~string((string *)aPStack_1d8);
          nop();
          lVar5 = lVar8;
        }
        PVZ2UIImage::PVZ2UIImage(aPStack_210,lVar5,2);
        PVZ2UIImage::PVZ2UIImage(aPStack_1d8,lVar8,2);
        PVZ2UIButton::SetRadioStates(pPVar7,aPStack_210,aPStack_1d8,false);
        FUN_0341ee24(pPVar7 + 0x2c0);
      }
      LimitGroupBuyInfo::~LimitGroupBuyInfo((LimitGroupBuyInfo *)asStack_120);
    }
  }
  else {
    if (param_2 != 7) {
      if (param_2 == 8) {
        pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                  *)(this + 0xe8);
        lVar5 = std::
                map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                ::count(pmVar1,(ActivityCollectionTab *)&local_214);
        if ((lVar5 != 0) &&
           (plVar6 = (long *)std::
                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar1,(ActivityCollectionTab *)&local_214), *plVar6 != 0)
           ) {
          plVar6 = (long *)std::
                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar1,(ActivityCollectionTab *)&local_214);
          pPVar7 = (PVZ2UIButton *)FUN_0341e948(*(undefined8 *)(*plVar6 + 0x10));
          this_00 = (RenaissanceChallengeNewManager *)
                    Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
          uVar3 = RenaissanceChallengeNewManager::GetResourceId(this_00);
          if (0 < (int)uVar3) {
            Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_N_%d",asStack_120,(ulong)local_214
                            ,(ulong)uVar3);
            lVar5 = StringHelper::ToImage(asStack_120,false);
            std::string::~string(asStack_120);
            Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_D_%d",asStack_120,(ulong)local_214
                            ,(ulong)uVar3);
            lVar8 = StringHelper::ToImage(asStack_120,false);
            std::string::~string(asStack_120);
            if ((lVar8 == 0) || (lVar5 == 0)) {
              std::string::string(asStack_120,"IMAGE_UI_GENERIC_ERROR");
              lVar8 = StringHelper::ToImage(asStack_120,false);
              std::string::~string(asStack_120);
              nop();
              lVar5 = lVar8;
            }
            PVZ2UIImage::PVZ2UIImage(aPStack_1d8,lVar5,2);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_120,lVar8,2);
            PVZ2UIButton::SetRadioStates(pPVar7,aPStack_1d8,(PVZ2UIImage *)asStack_120,false);
            FUN_0341ee24(pPVar7 + 0x2c0);
          }
        }
      }
      goto LAB_034241e4;
    }
    pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
              *)(this + 0xe8);
    lVar5 = std::
            map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
            ::count(pmVar1,(ActivityCollectionTab *)&local_214);
    if ((lVar5 == 0) ||
       (plVar6 = (long *)std::
                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar1,(ActivityCollectionTab *)&local_214), *plVar6 == 0))
    goto LAB_034241e4;
    plVar6 = (long *)std::
                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                     ::operator[](pmVar1,(ActivityCollectionTab *)&local_214);
    pPVar7 = (PVZ2UIButton *)FUN_0341e948(*(undefined8 *)(*plVar6 + 0x10));
    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar4);
    cVar2 = FUN_0341e954(local_198);
    if ((cVar2 != '\0') && (local_188 != '\0')) {
      LimitedSummonData::LimitedSummonData((LimitedSummonData *)asStack_120);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1a0,(RtObject *)asStack_120);
      if (cVar2 != '\0') {
        Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_N_%d",(string *)aPStack_1d8,
                        (ulong)local_214,(ulong)local_c);
        lVar5 = StringHelper::ToImage((string *)aPStack_1d8,false);
        std::string::~string((string *)aPStack_1d8);
        Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_D_%d",(string *)aPStack_1d8,
                        (ulong)local_214,(ulong)local_c);
        lVar8 = StringHelper::ToImage((string *)aPStack_1d8,false);
        std::string::~string((string *)aPStack_1d8);
        if ((lVar8 == 0) || (lVar5 == 0)) {
          std::string::string((string *)aPStack_1d8,"IMAGE_UI_GENERIC_QUESTION_MARK");
          lVar8 = StringHelper::ToImage((string *)aPStack_1d8,false);
          std::string::~string((string *)aPStack_1d8);
          nop();
          lVar5 = lVar8;
        }
        PVZ2UIImage::PVZ2UIImage(aPStack_210,lVar5,2);
        PVZ2UIImage::PVZ2UIImage(aPStack_1d8,lVar8,2);
        PVZ2UIButton::SetRadioStates(pPVar7,aPStack_210,aPStack_1d8,false);
        FUN_0341ee24(pPVar7 + 0x2c0);
      }
      LimitedSummonData::~LimitedSummonData((LimitedSummonData *)asStack_120);
    }
  }
  ActiveItem::~ActiveItem(aAStack_1a0);
LAB_034241e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::CreateView() */

void __thiscall UIActivityCollection::CreateView(UIActivityCollection *this)

{
  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
  *this_00;
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
  UIWidgetImage *this_01;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  ulong uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  PVZ2UIButton *pPVar17;
  long lVar18;
  long lVar19;
  Widget *this_04;
  ActivityCollectionTabBase *this_05;
  undefined8 *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  int iVar23;
  ulong uVar24;
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
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_0341e954(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x158)), cVar1 != '\0'))
  {
    uVar24 = 0;
    this_00 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
               *)(this + 0xe8);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01);
    iVar23 = 0;
    uVar4 = FUN_0341eeb4(0x1e);
    uVar5 = FUN_0341eeb4(0x37);
    uVar6 = FUN_0341eeb4(0x78);
    uVar7 = FUN_0341eeb4(0x212);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar4,uVar5,uVar6,uVar7);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06a9ff70,2);
    UIWidgetImage::SetImage(this_01,(PVZ2UIImage *)local_c0);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    this_02 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
    uVar4 = FUN_0341eeb4(0x19);
    uVar5 = FUN_0341eeb4(0x1c2);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,0,uVar4,*(undefined4 *)(this_01 + 0x50),uVar5);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
    this_03 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_03);
    (**(code **)(*(long *)this_03 + 0x198))
              (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
    uVar22 = *(undefined8 *)(this + 0x170);
    uVar13 = FUN_0341eb28(uVar22,*(undefined8 *)(this + 0x178));
    iVar3 = iVar23;
    if (uVar13 != 0) {
      do {
        piVar14 = (int *)FUN_0341eb58(uVar22,uVar24);
        if (piVar14[2] != 0) {
          iVar8 = GetTabByActivity(this,*piVar14);
          if (iVar8 != 0x25) {
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
            pcVar21 = *(code **)(*(long *)local_118 + 0x1a0);
            iVar11 = FUN_0341eeb4(10);
            iVar9 = FUN_0341eeb4(0x5d);
            iVar9 = iVar9 * iVar3;
            iVar3 = iVar3 + 1;
            iVar12 = FUN_0341eeb4(100);
            iVar10 = FUN_0341eeb4(0x5a);
            Sexy::Insets::Insets((Insets *)local_c0,iVar11,iVar11 + iVar9,iVar12,iVar10);
            (*pcVar21)(pPVar17,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0);
            (**(code **)(*(long *)this_03 + 0x60))(this_03,local_118);
            this_04 = ::operator_new(0xd8);
            Sexy::Widget::Widget(this_04);
            uVar4 = FUN_0341eeb4(0x14);
            uVar5 = FUN_0341eeb4(0x1fe);
            (**(code **)(*(long *)this_04 + 0x198))
                      (this_04,0,uVar4,*(undefined4 *)(this + 0x50),uVar5);
            (**(code **)(*(long *)this + 0x60))(this,this_04);
            (**(code **)(*(long *)this + 0xb8))(this,this_04);
            this_05 = ::operator_new(0x38);
            ActivityCollectionTabBase::ActivityCollectionTabBase(this_05);
            ActivityCollectionTabBase::InitView(this_05,iVar8,local_118,this_04);
            local_c0[0] = CONCAT44(local_c0[0]._4_4_,iVar8);
            puVar20 = (undefined8 *)
                      std::
                      map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                      ::operator[](this_00,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)
                                           local_c0);
            *puVar20 = this_05;
            std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                      ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,&local_118
                      );
          }
          uVar22 = *(undefined8 *)(this + 0x170);
          uVar13 = FUN_0341eb28(uVar22,*(undefined8 *)(this + 0x178));
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar13);
    }
    iVar8 = FUN_0341eeb4(0x14);
    iVar9 = FUN_0341eeb4(0x5d);
    pcVar21 = *(code **)(*(long *)this_02 + 0x60);
    *(int *)(this_03 + 0x54) = iVar8 + iVar9 * iVar3;
    (*pcVar21)(this_02,this_03);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    local_118 = (PVZ2UIButton *)
                std::
                map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                ::begin(this_00);
    while( true ) {
      local_c0[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)local_c0);
      if (!bVar2) break;
      puVar16 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                   &local_118);
      pPVar17 = (PVZ2UIButton *)FUN_0341e948(*(undefined8 *)(*(long *)(puVar16 + 2) + 0x10));
      Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_N",
                      (vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0,
                      (ulong)*puVar16);
      lVar18 = StringHelper::ToImage((string *)local_c0,false);
      std::string::~string((string *)local_c0);
      puVar16 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                   &local_118);
      Sexy::StrFormat("IMAGE_UI_ACTIVITYCOLLECTION_TABBTN%d_D",
                      (vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0,
                      (ulong)*puVar16);
      lVar19 = StringHelper::ToImage((string *)local_c0,false);
      std::string::~string((string *)local_c0);
      if ((lVar19 == 0) || (lVar18 == 0)) {
        std::string::string((string *)local_c0,"IMAGE_UI_GENERIC_QUESTION_MARK");
        lVar19 = StringHelper::ToImage((string *)local_c0,false);
        std::string::~string((string *)local_c0);
        nop();
        lVar18 = lVar19;
      }
      PVZ2UIImage::PVZ2UIImage(aPStack_f8,lVar18,2);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,lVar19,2);
      PVZ2UIButton::SetRadioStates(pPVar17,aPStack_f8,(PVZ2UIImage *)local_c0,false);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0,
                 (vector *)avStack_110);
      PVZ2UIButton::LinkRadioButtons
                (pPVar17,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0);
      FUN_0341ee24(pPVar17 + 0x2c0);
      puVar15 = (undefined4 *)
                std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
      CheckTabButton(this,*puVar15);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    }
    FUN_05478178(aPStack_f8,&DAT_056f11a8,
                 (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    Sexy::Color::Color((Color *)local_c0,1);
    pPVar17 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar17,0x58,(ButtonListener *)(this + 0xe0),(wstring *)aPStack_f8,(Color *)local_c0)
    ;
    FUN_05476c50(aPStack_f8);
    nop();
    PVZ2UIImage::PVZ2UIImage(aPStack_f8,&DAT_06a9fd38,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_c0,&DAT_06a9fd10,2);
    PVZ2UIButton::SetDialogStates(pPVar17,aPStack_f8,(PVZ2UIImage *)local_c0);
    pcVar21 = *(code **)(*(long *)pPVar17 + 0x1a0);
    iVar8 = FUN_0341eeb4(0x50);
    iVar3 = *(int *)(this + 0x50);
    iVar9 = FUN_0341eeb4(5);
    iVar11 = FUN_0341eeb4(0x37);
    iVar12 = FUN_0341eeb4(0x32);
    Sexy::Insets::Insets((Insets *)local_c0,iVar3 - iVar8,iVar9,iVar11,iVar12);
    (*pcVar21)(pPVar17,(vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_c0);
    (**(code **)(*(long *)this + 0x60))(this,pPVar17);
    this[0x118] = (UIActivityCollection)0x1;
    SelectTab(this,iVar23);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIActivityCollection::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIActivityCollection::onNotifyRefreshActivityList
          (UIActivityCollection *this,bool param_1,set *param_2)

{
  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
  *pmVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ActivityCollectionLuckyBag *this_00;
  undefined8 *puVar9;
  ActivityCollectionLimitGroupBuy *this_01;
  RechargeDailySignActivityManager *pRVar10;
  ActivityCollectionLimitSummon *this_02;
  ActivityCollectionLevelOfDay *this_03;
  DiscountShopActivityManager *pDVar11;
  ActivityCollectionCarnival *this_04;
  ActivityCollectionOneYuan *this_05;
  ActivityCollectionGoldenEgg *this_06;
  ActivityCollectionBossChallenge *this_07;
  ActivityCollectionWishingPool *this_08;
  ActivityCollectionSecretStore *this_09;
  ActivityCollectionAnniversaryTreasure *this_10;
  ActivityCollectionVaseBreaker *this_11;
  ActivityCollectionNewYearGoods *this_12;
  ActivityCollectionPlantCultivate *this_13;
  ActivityCollectionUITenYearRecord *this_14;
  ActivityCollectionCustomVoting *this_15;
  ActivityCollectionCallofWish *this_16;
  ActivityCollectionDaveKitchen *this_17;
  ActivityCollectionFightZodiac *this_18;
  ActivityCollectionUINewYearGiftBox *this_19;
  ActivityCollectionDragonTreasure *this_20;
  ActivityCollectionTreasurePavilion *this_21;
  ActivityCollectionNFSLinkage *this_22;
  ActivityCollectionPennyGiftBox *this_23;
  ActivityCollectionPlantWars *this_24;
  ActivityCollectionMiniGame *this_25;
  code *pcVar12;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar6 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_11c = 0x2a53;
    local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>(uVar5,uVar6,&local_11c);
    local_110 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
    if (bVar2) {
      if (this[0x118] == (UIActivityCollection)0x0) {
        CreateView(this);
      }
    }
    else {
      uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2);
      uVar6 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
      local_11c = 0x2a1b;
      local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                            (uVar5,uVar6,&local_11c);
      local_110 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
      if (bVar2) {
        iVar4 = GetTabByActivity(this,0x2a1b);
        local_110 = CONCAT44(local_110._4_4_,iVar4);
        if (iVar4 == *(int *)(this + 0x150)) {
          pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                    *)(this + 0xe8);
          lVar7 = std::
                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                  ::count(pmVar1,(rbtree_iterator *)&local_110);
          if ((lVar7 != 0) &&
             (plVar8 = (long *)std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110), *plVar8 != 0)) {
            plVar8 = (long *)std::
                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
            cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
            if (cVar3 == '\0') {
              this_00 = ::operator_new(0x1b0);
              ActivityCollectionLuckyBag::ActivityCollectionLuckyBag(this_00);
              puVar9 = (undefined8 *)
                       std::
                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              ActivityCollectionTabBase::SetTabContainer
                        ((ActivityCollectionTabBase *)*puVar9,
                         (ActivityCollectionContainer *)(this_00 + 0xe0));
              plVar8 = (long *)std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              FUN_0341ee18(*plVar8 + 0x20);
              pcVar12 = (code *)**(undefined8 **)(this_00 + 0xe0);
              puVar9 = (undefined8 *)
                       std::
                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              (*pcVar12)((ActivityCollectionContainer *)(this_00 + 0xe0),*puVar9);
            }
            else {
              plVar8 = (long *)std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
              pcVar12 = *(code **)(*plVar8 + 8);
              puVar9 = (undefined8 *)
                       std::
                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              (*pcVar12)(plVar8,*puVar9);
            }
          }
        }
      }
      else {
        uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2);
        uVar6 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
        local_11c = 0x2a51;
        local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                              (uVar5,uVar6,&local_11c);
        local_110 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
        if (bVar2) {
          iVar4 = GetTabByActivity(this,0x2a51);
          local_110 = CONCAT44(local_110._4_4_,iVar4);
          if (iVar4 == *(int *)(this + 0x150)) {
            pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                      *)(this + 0xe8);
            lVar7 = std::
                    map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                    ::count(pmVar1,(rbtree_iterator *)&local_110);
            if ((lVar7 != 0) &&
               (plVar8 = (long *)std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110), *plVar8 != 0))
            {
              plVar8 = (long *)std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
              cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
              if (cVar3 == '\0') {
                lVar7 = UISingletonDialog<ActivityCollectionPlayerSurvey>::ShowDialog();
                if (lVar7 == 0) goto LAB_03425694;
                puVar9 = (undefined8 *)
                         std::
                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                ActivityCollectionTabBase::SetTabContainer
                          ((ActivityCollectionTabBase *)*puVar9,
                           (ActivityCollectionContainer *)(lVar7 + 0x138));
                plVar8 = (long *)std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                FUN_0341ee18(*plVar8 + 0x20);
                pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                puVar9 = (undefined8 *)
                         std::
                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9);
              }
              else {
                plVar8 = (long *)std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                pcVar12 = *(code **)(*plVar8 + 8);
                puVar9 = (undefined8 *)
                         std::
                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                         ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                (*pcVar12)(plVar8,*puVar9);
              }
            }
          }
        }
        else {
          uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2);
          uVar6 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
          local_11c = 0x29e8;
          local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                (uVar5,uVar6,&local_11c);
          local_110 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
          if (bVar2) {
            iVar4 = GetTabByActivity(this,0x29e8);
            local_110 = CONCAT44(local_110._4_4_,iVar4);
            if (iVar4 == *(int *)(this + 0x150)) {
              pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                        *)(this + 0xe8);
              lVar7 = std::
                      map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                      ::count(pmVar1,(rbtree_iterator *)&local_110);
              if ((lVar7 != 0) &&
                 (plVar8 = (long *)std::
                                   map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                   ::operator[](pmVar1,(rbtree_iterator *)&local_110), *plVar8 != 0)
                 ) {
                plVar8 = (long *)std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                if (cVar3 == '\0') {
                  this_01 = ::operator_new(0x1b0);
                  ActivityCollectionLimitGroupBuy::ActivityCollectionLimitGroupBuy(this_01);
                  puVar9 = (undefined8 *)
                           std::
                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  ActivityCollectionTabBase::SetTabContainer
                            ((ActivityCollectionTabBase *)*puVar9,
                             (ActivityCollectionContainer *)(this_01 + 0xe0));
                  plVar8 = (long *)std::
                                   map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                   ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  FUN_0341ee18(*plVar8 + 0x20);
                  pcVar12 = (code *)**(undefined8 **)(this_01 + 0xe0);
                  puVar9 = (undefined8 *)
                           std::
                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  (*pcVar12)((ActivityCollectionContainer *)(this_01 + 0xe0),*puVar9);
                }
                else {
                  plVar8 = (long *)std::
                                   map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                   ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                  pcVar12 = *(code **)(*plVar8 + 8);
                  puVar9 = (undefined8 *)
                           std::
                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  (*pcVar12)(plVar8,*puVar9);
                }
              }
            }
          }
          else {
            uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                              ((set<int,std::less<int>,std::allocator<int>> *)param_2);
            uVar6 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
            local_11c = 0x2a13;
            local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                  (uVar5,uVar6,&local_11c);
            local_110 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
            bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
            if (bVar2) {
              iVar4 = GetTabByActivity(this,0x2a13);
              local_110 = CONCAT44(local_110._4_4_,iVar4);
              if (iVar4 == *(int *)(this + 0x150)) {
                pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                          *)(this + 0xe8);
                lVar7 = std::
                        map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                        ::count(pmVar1,(rbtree_iterator *)&local_110);
                if ((lVar7 != 0) &&
                   (plVar8 = (long *)std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                   *plVar8 != 0)) {
                  plVar8 = (long *)std::
                                   map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                   ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                  cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                  if (cVar3 == '\0') {
                    lVar7 = UISingletonDialog<ActivityCollectionRichman>::ShowDialog();
                    if (lVar7 == 0) {
LAB_03425694:
                      puVar9 = (undefined8 *)
                               std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[]((map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             *)(this + 0xe8),(rbtree_iterator *)&local_110);
                      ActivityCollectionTabBase::SetTabContainer
                                ((ActivityCollectionTabBase *)*puVar9,
                                 (ActivityCollectionContainer *)0x0);
                      plVar8 = (long *)std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[]((
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8),(rbtree_iterator *)&local_110);
                      FUN_0341ee18(*plVar8 + 0x20);
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1000,0x34256c4);
                      (*pcVar12)();
                    }
                    puVar9 = (undefined8 *)
                             std::
                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    ActivityCollectionTabBase::SetTabContainer
                              ((ActivityCollectionTabBase *)*puVar9,
                               (ActivityCollectionContainer *)(lVar7 + 0x138));
                    plVar8 = (long *)std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    FUN_0341ee18(*plVar8 + 0x20);
                    pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                    puVar9 = (undefined8 *)
                             std::
                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9);
                  }
                  else {
                    plVar8 = (long *)std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                    pcVar12 = *(code **)(*plVar8 + 8);
                    puVar9 = (undefined8 *)
                             std::
                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    (*pcVar12)(plVar8,*puVar9);
                  }
                }
              }
            }
            else {
              uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                ((set<int,std::less<int>,std::allocator<int>> *)param_2);
              uVar6 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
              local_11c = 0x2a79;
              local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                    (uVar5,uVar6,&local_11c);
              local_110 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
              bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110)
              ;
              if (bVar2) {
                iVar4 = GetTabByActivity(this,0x2a79);
                local_110 = CONCAT44(local_110._4_4_,iVar4);
                if (iVar4 == *(int *)(this + 0x150)) {
                  pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                            *)(this + 0xe8);
                  lVar7 = std::
                          map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                          ::count(pmVar1,(rbtree_iterator *)&local_110);
                  if ((lVar7 != 0) &&
                     (plVar8 = (long *)std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                     *plVar8 != 0)) {
                    plVar8 = (long *)std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                    cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                    if (cVar3 == '\0') {
                      lVar7 = UISingletonDialog<ActivityCollectionPartyAssist>::ShowDialog();
                      if (lVar7 == 0) goto LAB_03425694;
                      puVar9 = (undefined8 *)
                               std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      ActivityCollectionTabBase::SetTabContainer
                                ((ActivityCollectionTabBase *)*puVar9,
                                 (ActivityCollectionContainer *)(lVar7 + 0x138));
                      plVar8 = (long *)std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      FUN_0341ee18(*plVar8 + 0x20);
                      pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                      puVar9 = (undefined8 *)
                               std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9);
                    }
                    else {
                      plVar8 = (long *)std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                      pcVar12 = *(code **)(*plVar8 + 8);
                      puVar9 = (undefined8 *)
                               std::
                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      (*pcVar12)(plVar8,*puVar9);
                    }
                  }
                }
              }
              else {
                uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                  ((set<int,std::less<int>,std::allocator<int>> *)param_2);
                uVar6 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
                local_11c = 0x2a44;
                local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                      (uVar5,uVar6,&local_11c);
                local_110 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                          (rbtree_iterator *)&local_110);
                if (bVar2) {
                  iVar4 = GetTabByActivity(this,0x2a44);
                  local_110 = CONCAT44(local_110._4_4_,iVar4);
                  if (iVar4 == *(int *)(this + 0x150)) {
                    pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                              *)(this + 0xe8);
                    lVar7 = std::
                            map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                            ::count(pmVar1,(rbtree_iterator *)&local_110);
                    if ((lVar7 != 0) &&
                       (plVar8 = (long *)std::
                                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                         ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                       *plVar8 != 0)) {
                      plVar8 = (long *)std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                      cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                      if (cVar3 == '\0') {
                        lVar7 = UISingletonDialog<ActivityCollectionPiggyBank>::ShowDialog();
                        if (lVar7 == 0) goto LAB_03425694;
                        puVar9 = (undefined8 *)
                                 std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                        ActivityCollectionTabBase::SetTabContainer
                                  ((ActivityCollectionTabBase *)*puVar9,
                                   (ActivityCollectionContainer *)(lVar7 + 0x138));
                        plVar8 = (long *)std::
                                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                         ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                        FUN_0341ee18(*plVar8 + 0x20);
                        pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                        puVar9 = (undefined8 *)
                                 std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                        (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9);
                      }
                      else {
                        plVar8 = (long *)std::
                                         map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                         ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                        plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                        pcVar12 = *(code **)(*plVar8 + 8);
                        puVar9 = (undefined8 *)
                                 std::
                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                        (*pcVar12)(plVar8,*puVar9);
                      }
                    }
                  }
                }
                else {
                  uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                    ((set<int,std::less<int>,std::allocator<int>> *)param_2);
                  uVar6 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
                  local_11c = 0x2a2c;
                  local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                        (uVar5,uVar6,&local_11c);
                  local_110 = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                  bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                            (rbtree_iterator *)&local_110);
                  if (bVar2) {
                    iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                    ActivityManager::GetActiveItem(iVar4);
                    cVar3 = FUN_0341e954(local_100);
                    if ((cVar3 != '\0') && (local_f0 != '\0')) {
                      pRVar10 = (RechargeDailySignActivityManager *)
                                Sexy::LazySingleton<RechargeDailySignActivityManager>::
                                GetInstancePtr();
                      ActiveItem::ActiveItem(aAStack_88,aAStack_108);
                      RechargeDailySignActivityManager::Init(pRVar10,aAStack_88);
                      ActiveItem::~ActiveItem(aAStack_88);
                      iVar4 = GetTabByActivity(this,0x2a2c);
                      local_110 = CONCAT44(local_110._4_4_,iVar4);
                      if (iVar4 == *(int *)(this + 0x150)) {
                        pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                  *)(this + 0xe8);
                        lVar7 = std::
                                map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                ::count(pmVar1,(rbtree_iterator *)&local_110);
                        if ((lVar7 != 0) &&
                           (plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                           *plVar8 != 0)) {
                          plVar8 = (long *)std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                          cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                          if (cVar3 == '\0') {
                            lVar7 = UISingletonDialog<ActivityCollectionRechargeDailySign>::
                                    ShowDialog();
                            if (lVar7 == 0) {
LAB_0342613c:
                              puVar9 = (undefined8 *)
                                       std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[]((
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8),(rbtree_iterator *)&local_110);
                              ActivityCollectionTabBase::SetTabContainer
                                        ((ActivityCollectionTabBase *)*puVar9,
                                         (ActivityCollectionContainer *)0x0);
                              plVar8 = (long *)std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[]((
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8),(rbtree_iterator *)&local_110);
                              FUN_0341ee18(*plVar8 + 0x20);
                    /* WARNING: Does not return */
                              pcVar12 = (code *)SoftwareBreakpoint(1000,0x342616c);
                              (*pcVar12)();
                            }
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            ActivityCollectionTabBase::SetTabContainer
                                      ((ActivityCollectionTabBase *)*puVar9,
                                       (ActivityCollectionContainer *)(lVar7 + 0x138));
                            plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            FUN_0341ee18(*plVar8 + 0x20);
                            pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9);
                          }
                          else {
                            plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                            pcVar12 = *(code **)(*plVar8 + 8);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            (*pcVar12)(plVar8,*puVar9);
                          }
                        }
                      }
                    }
                    ActiveItem::~ActiveItem(aAStack_108);
                  }
                  else {
                    uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
                    uVar6 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                    local_11c = 0x2a66;
                    local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                          (uVar5,uVar6,&local_11c);
                    local_110 = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                              (rbtree_iterator *)&local_110);
                    if (bVar2) {
                      iVar4 = GetTabByActivity(this,0x2a66);
                      local_110 = CONCAT44(local_110._4_4_,iVar4);
                      if (iVar4 == *(int *)(this + 0x150)) {
                        pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                  *)(this + 0xe8);
                        lVar7 = std::
                                map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                ::count(pmVar1,(rbtree_iterator *)&local_110);
                        if ((lVar7 != 0) &&
                           (plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                           *plVar8 != 0)) {
                          plVar8 = (long *)std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                          cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                          if (cVar3 == '\0') {
                            this_02 = ::operator_new(0x1b0);
                            ActivityCollectionLimitSummon::ActivityCollectionLimitSummon(this_02);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            ActivityCollectionTabBase::SetTabContainer
                                      ((ActivityCollectionTabBase *)*puVar9,
                                       (ActivityCollectionContainer *)(this_02 + 0xe0));
                            plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            FUN_0341ee18(*plVar8 + 0x20);
                            pcVar12 = (code *)**(undefined8 **)(this_02 + 0xe0);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            (*pcVar12)((ActivityCollectionContainer *)(this_02 + 0xe0),*puVar9);
                          }
                          else {
                            plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                            pcVar12 = *(code **)(*plVar8 + 8);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                     ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            (*pcVar12)(plVar8,*puVar9);
                          }
                        }
                      }
                    }
                    else {
                      uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                        ((set<int,std::less<int>,std::allocator<int>> *)param_2);
                      uVar6 = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                      local_11c = 0x2a09;
                      local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                            (uVar5,uVar6,&local_11c);
                      local_110 = std::
                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_2);
                      bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                (rbtree_iterator *)&local_110);
                      if (bVar2) {
                        iVar4 = GetTabByActivity(this,0x2a09);
                        local_110 = CONCAT44(local_110._4_4_,iVar4);
                        if (iVar4 == *(int *)(this + 0x150)) {
                          pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                    *)(this + 0xe8);
                          lVar7 = std::
                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                          if ((lVar7 != 0) &&
                             (plVar8 = (long *)std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110),
                             *plVar8 != 0)) {
                            plVar8 = (long *)std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                            cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                            if (cVar3 == '\0') {
                              this_03 = ::operator_new(0x1b8);
                              ActivityCollectionLevelOfDay::ActivityCollectionLevelOfDay(this_03);
                              puVar9 = (undefined8 *)
                                       std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                              ActivityCollectionTabBase::SetTabContainer
                                        ((ActivityCollectionTabBase *)*puVar9,
                                         (ActivityCollectionContainer *)(this_03 + 0xe0));
                              plVar8 = (long *)std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                              FUN_0341ee18(*plVar8 + 0x20);
                              pcVar12 = (code *)**(undefined8 **)(this_03 + 0xe0);
                              puVar9 = (undefined8 *)
                                       std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                              (*pcVar12)((ActivityCollectionContainer *)(this_03 + 0xe0),*puVar9);
                            }
                            else {
                              plVar8 = (long *)std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                              plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                              pcVar12 = *(code **)(*plVar8 + 8);
                              puVar9 = (undefined8 *)
                                       std::
                                       map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                       ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                              (*pcVar12)(plVar8,*puVar9);
                            }
                          }
                        }
                      }
                      else {
                        uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                          ((set<int,std::less<int>,std::allocator<int>> *)param_2);
                        uVar6 = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                        local_11c = 0x2a2d;
                        local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                              (uVar5,uVar6,&local_11c);
                        local_110 = std::
                                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_2);
                        bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                  (rbtree_iterator *)&local_110);
                        if (bVar2) {
                          iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                          ActivityManager::GetActiveItem(iVar4);
                          cVar3 = FUN_0341e954(local_100);
                          if ((cVar3 != '\0') && (local_f0 != '\0')) {
                            pDVar11 = (DiscountShopActivityManager *)
                                      Sexy::LazySingleton<DiscountShopActivityManager>::
                                      GetInstancePtr();
                            ActiveItem::ActiveItem(aAStack_88,aAStack_108);
                            DiscountShopActivityManager::Init(pDVar11,aAStack_88);
                            ActiveItem::~ActiveItem(aAStack_88);
                            iVar4 = GetTabByActivity(this,0x2a2d);
                            local_110 = CONCAT44(local_110._4_4_,iVar4);
                            if (iVar4 == *(int *)(this + 0x150)) {
                              pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                        *)(this + 0xe8);
                              lVar7 = std::
                                      map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                      ::count(pmVar1,(rbtree_iterator *)&local_110);
                              if ((lVar7 != 0) &&
                                 (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                 , *plVar8 != 0)) {
                                plVar8 = (long *)std::
                                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                if (cVar3 == '\0') {
                                  lVar7 = UISingletonDialog<ActivityCollectionDiscountShop>::
                                          ShowDialog();
                                  if (lVar7 == 0) goto LAB_0342613c;
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  ActivityCollectionTabBase::SetTabContainer
                                            ((ActivityCollectionTabBase *)*puVar9,
                                             (ActivityCollectionContainer *)(lVar7 + 0x138));
                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                  ;
                                  FUN_0341ee18(*plVar8 + 0x20);
                                  pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  (*pcVar12)((ActivityCollectionContainer *)(lVar7 + 0x138),*puVar9)
                                  ;
                                }
                                else {
                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                  ;
                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                                  pcVar12 = *(code **)(*plVar8 + 8);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  (*pcVar12)(plVar8,*puVar9);
                                }
                              }
                            }
                          }
                          ActiveItem::~ActiveItem(aAStack_108);
                        }
                        else {
                          uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                            ((set<int,std::less<int>,std::allocator<int>> *)param_2)
                          ;
                          uVar6 = std::
                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_2);
                          local_11c = 0x2a6a;
                          local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                (uVar5,uVar6,&local_11c);
                          local_110 = std::
                                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_2);
                          bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                    (rbtree_iterator *)&local_110);
                          if (bVar2) {
                            iVar4 = GetTabByActivity(this,0x2a6a);
                            local_110 = CONCAT44(local_110._4_4_,iVar4);
                            if (iVar4 == *(int *)(this + 0x150)) {
                              pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                        *)(this + 0xe8);
                              lVar7 = std::
                                      map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                      ::count(pmVar1,(rbtree_iterator *)&local_110);
                              if ((lVar7 != 0) &&
                                 (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                 , *plVar8 != 0)) {
                                plVar8 = (long *)std::
                                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                if (cVar3 == '\0') {
                                  this_04 = ::operator_new(0x1b0);
                                  ActivityCollectionCarnival::ActivityCollectionCarnival(this_04);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  ActivityCollectionTabBase::SetTabContainer
                                            ((ActivityCollectionTabBase *)*puVar9,
                                             (ActivityCollectionContainer *)(this_04 + 0xe0));
                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                  ;
                                  FUN_0341ee18(*plVar8 + 0x20);
                                  pcVar12 = (code *)**(undefined8 **)(this_04 + 0xe0);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  (*pcVar12)((ActivityCollectionContainer *)(this_04 + 0xe0),*puVar9
                                            );
                                }
                                else {
                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                  ;
                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                                  pcVar12 = *(code **)(*plVar8 + 8);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                           ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                  (*pcVar12)(plVar8,*puVar9);
                                }
                              }
                            }
                          }
                          else {
                            uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               param_2);
                            uVar6 = std::
                                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_2);
                            local_11c = 0x2a07;
                            local_118 = std::find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                  (uVar5,uVar6,&local_11c);
                            local_110 = std::
                                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_2);
                            bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                      (rbtree_iterator *)&local_110);
                            if (bVar2) {
                              iVar4 = GetTabByActivity(this,0x2a07);
                              local_110 = CONCAT44(local_110._4_4_,iVar4);
                              if (iVar4 == *(int *)(this + 0x150)) {
                                pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                          *)(this + 0xe8);
                                lVar7 = std::
                                        map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                        ::count(pmVar1,(rbtree_iterator *)&local_110);
                                if ((lVar7 != 0) &&
                                   (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                   , *plVar8 != 0)) {
                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                  ;
                                  cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                  if (cVar3 == '\0') {
                                    this_05 = ::operator_new(0x1b0);
                                    ActivityCollectionOneYuan::ActivityCollectionOneYuan(this_05);
                                    puVar9 = (undefined8 *)
                                             std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                    ActivityCollectionTabBase::SetTabContainer
                                              ((ActivityCollectionTabBase *)*puVar9,
                                               (ActivityCollectionContainer *)(this_05 + 0xe0));
                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                    ;
                                    FUN_0341ee18(*plVar8 + 0x20);
                                    pcVar12 = (code *)**(undefined8 **)(this_05 + 0xe0);
                                    puVar9 = (undefined8 *)
                                             std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                    (*pcVar12)((ActivityCollectionContainer *)(this_05 + 0xe0),
                                               *puVar9);
                                  }
                                  else {
                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                    ;
                                    plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28));
                                    pcVar12 = *(code **)(*plVar8 + 8);
                                    puVar9 = (undefined8 *)
                                             std::
                                             map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                             ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                    (*pcVar12)(plVar8,*puVar9);
                                  }
                                }
                              }
                            }
                            else {
                              uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                                ((set<int,std::less<int>,std::allocator<int>> *)
                                                 param_2);
                              uVar6 = std::
                                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_2);
                              local_11c = 0x2a59;
                              local_118 = std::
                                          find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                    (uVar5,uVar6,&local_11c);
                              local_110 = std::
                                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)param_2);
                              bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                        (rbtree_iterator *)&local_110);
                              if (bVar2) {
                                iVar4 = GetTabByActivity(this,0x2a59);
                                local_110 = CONCAT44(local_110._4_4_,iVar4);
                                if (iVar4 == *(int *)(this + 0x150)) {
                                  pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                            *)(this + 0xe8);
                                  lVar7 = std::
                                          map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                          ::count(pmVar1,(rbtree_iterator *)&local_110);
                                  if ((lVar7 != 0) &&
                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                     , *plVar8 != 0)) {
                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                    ;
                                    cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                    if (cVar3 == '\0') {
                                      this_06 = ::operator_new(0x1b0);
                                      ActivityCollectionGoldenEgg::ActivityCollectionGoldenEgg
                                                (this_06);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                      ActivityCollectionTabBase::SetTabContainer
                                                ((ActivityCollectionTabBase *)*puVar9,
                                                 (ActivityCollectionContainer *)(this_06 + 0xe0));
                                      plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                      ;
                                      FUN_0341ee18(*plVar8 + 0x20);
                                      pcVar12 = (code *)**(undefined8 **)(this_06 + 0xe0);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                      (*pcVar12)((ActivityCollectionContainer *)(this_06 + 0xe0),
                                                 *puVar9);
                                    }
                                    else {
                                      plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                      ;
                                      plVar8 = (long *)FUN_0341e94c(*(undefined8 *)(*plVar8 + 0x28))
                                      ;
                                      pcVar12 = *(code **)(*plVar8 + 8);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                               ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                      (*pcVar12)(plVar8,*puVar9);
                                    }
                                  }
                                }
                              }
                              else {
                                uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                                  ((set<int,std::less<int>,std::allocator<int>> *)
                                                   param_2);
                                uVar6 = std::
                                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_2);
                                local_11c = 0x2975;
                                local_118 = std::
                                            find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                      (uVar5,uVar6,&local_11c);
                                local_110 = std::
                                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                          (rbtree_iterator *)&local_110);
                                if (bVar2) {
                                  iVar4 = GetTabByActivity(this,0x2975);
                                  local_110 = CONCAT44(local_110._4_4_,iVar4);
                                  if (iVar4 == *(int *)(this + 0x150)) {
                                    pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                              *)(this + 0xe8);
                                    lVar7 = std::
                                            map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                            ::count(pmVar1,(rbtree_iterator *)&local_110);
                                    if ((lVar7 != 0) &&
                                       (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                       , *plVar8 != 0)) {
                                      plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                      ;
                                      cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                      if (cVar3 == '\0') {
                                        this_07 = ::operator_new(0x1b0);
                                        ActivityCollectionBossChallenge::
                                        ActivityCollectionBossChallenge(this_07);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                        ActivityCollectionTabBase::SetTabContainer
                                                  ((ActivityCollectionTabBase *)*puVar9,
                                                   (ActivityCollectionContainer *)(this_07 + 0xe0));
                                        plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                        ;
                                        FUN_0341ee18(*plVar8 + 0x20);
                                        pcVar12 = (code *)**(undefined8 **)(this_07 + 0xe0);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                        (*pcVar12)((ActivityCollectionContainer *)(this_07 + 0xe0),
                                                   *puVar9);
                                      }
                                      else {
                                        plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                        ;
                                        plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                       (*plVar8 + 0x28));
                                        pcVar12 = *(code **)(*plVar8 + 8);
                                        puVar9 = (undefined8 *)
                                                 std::
                                                 map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                 ::operator[](pmVar1,(rbtree_iterator *)&local_110);
                                        (*pcVar12)(plVar8,*puVar9);
                                      }
                                    }
                                  }
                                }
                                else {
                                  uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                                    ((set<int,std::less<int>,std::allocator<int>> *)
                                                     param_2);
                                  uVar6 = std::
                                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)param_2);
                                  local_11c = 0x2a72;
                                  local_118 = std::
                                              find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                        (uVar5,uVar6,&local_11c);
                                  local_110 = std::
                                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                  bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                            (rbtree_iterator *)&local_110);
                                  if (bVar2) {
                                    iVar4 = GetTabByActivity(this,0x2a72);
                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                    if (iVar4 == *(int *)(this + 0x150)) {
                                      pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                *)(this + 0xe8);
                                      lVar7 = std::
                                              map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                              ::count(pmVar1,(rbtree_iterator *)&local_110);
                                      if ((lVar7 != 0) &&
                                         (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                         , *plVar8 != 0)) {
                                        plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                        ;
                                        cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                        if (cVar3 == '\0') {
                                          this_08 = ::operator_new(0x1b0);
                                          ActivityCollectionWishingPool::
                                          ActivityCollectionWishingPool(this_08);
                                          puVar9 = (undefined8 *)
                                                   std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          ActivityCollectionTabBase::SetTabContainer
                                                    ((ActivityCollectionTabBase *)*puVar9,
                                                     (ActivityCollectionContainer *)(this_08 + 0xe0)
                                                    );
                                          plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          FUN_0341ee18(*plVar8 + 0x20);
                                          pcVar12 = (code *)**(undefined8 **)(this_08 + 0xe0);
                                          puVar9 = (undefined8 *)
                                                   std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          (*pcVar12)((ActivityCollectionContainer *)(this_08 + 0xe0)
                                                     ,*puVar9);
                                        }
                                        else {
                                          plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                         (*plVar8 + 0x28));
                                          pcVar12 = *(code **)(*plVar8 + 8);
                                          puVar9 = (undefined8 *)
                                                   std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          (*pcVar12)(plVar8,*puVar9);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    uVar5 = std::set<int,std::less<int>,std::allocator<int>>::begin
                                                      ((set<int,std::less<int>,std::allocator<int>>
                                                        *)param_2);
                                    uVar6 = std::
                                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    local_11c = 0x2a32;
                                    local_118 = std::
                                                find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                          (uVar5,uVar6,&local_11c);
                                    local_110 = std::
                                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                              (rbtree_iterator *)&local_110);
                                    if (bVar2) {
                                      iVar4 = GetTabByActivity(this,0x2a32);
                                      local_110 = CONCAT44(local_110._4_4_,iVar4);
                                      if (iVar4 == *(int *)(this + 0x150)) {
                                        pmVar1 = (map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                        lVar7 = std::
                                                map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                ::count(pmVar1,(rbtree_iterator *)&local_110);
                                        if ((lVar7 != 0) &&
                                           (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                           , *plVar8 != 0)) {
                                          plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                          ;
                                          cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                          if (cVar3 == '\0') {
                                            this_09 = ::operator_new(0x1b0);
                                            ActivityCollectionSecretStore::
                                            ActivityCollectionSecretStore(this_09);
                                            puVar9 = (undefined8 *)
                                                     std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            ActivityCollectionTabBase::SetTabContainer
                                                      ((ActivityCollectionTabBase *)*puVar9,
                                                       (ActivityCollectionContainer *)
                                                       (this_09 + 0xe0));
                                            plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            FUN_0341ee18(*plVar8 + 0x20);
                                            pcVar12 = (code *)**(undefined8 **)(this_09 + 0xe0);
                                            puVar9 = (undefined8 *)
                                                     std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            (*pcVar12)((ActivityCollectionContainer *)
                                                       (this_09 + 0xe0),*puVar9);
                                          }
                                          else {
                                            plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                           (*plVar8 + 0x28));
                                            pcVar12 = *(code **)(*plVar8 + 8);
                                            puVar9 = (undefined8 *)
                                                     std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            (*pcVar12)(plVar8,*puVar9);
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar5 = std::set<int,std::less<int>,std::allocator<int>>::
                                              begin((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2);
                                      uVar6 = std::
                                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                      local_11c = 0x2a3a;
                                      local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                      local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                      bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                                (rbtree_iterator *)&local_110);
                                      if (bVar2) {
                                        iVar4 = GetTabByActivity(this,0x2a3a);
                                        local_110 = CONCAT44(local_110._4_4_,iVar4);
                                        if (iVar4 == *(int *)(this + 0x150)) {
                                          pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                          lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                          if ((lVar7 != 0) &&
                                             (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                             , *plVar8 != 0)) {
                                            plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                            ;
                                            cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                            if (cVar3 == '\0') {
                                              this_10 = ::operator_new(0x1b0);
                                              ActivityCollectionAnniversaryTreasure::
                                              ActivityCollectionAnniversaryTreasure(this_10);
                                              puVar9 = (undefined8 *)
                                                       std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              ActivityCollectionTabBase::SetTabContainer
                                                        ((ActivityCollectionTabBase *)*puVar9,
                                                         (ActivityCollectionContainer *)
                                                         (this_10 + 0xe0));
                                              plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              FUN_0341ee18(*plVar8 + 0x20);
                                              pcVar12 = (code *)**(undefined8 **)(this_10 + 0xe0);
                                              puVar9 = (undefined8 *)
                                                       std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              (*pcVar12)((ActivityCollectionContainer *)
                                                         (this_10 + 0xe0),*puVar9);
                                            }
                                            else {
                                              plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                             (*plVar8 + 0x28));
                                              pcVar12 = *(code **)(*plVar8 + 8);
                                              puVar9 = (undefined8 *)
                                                       std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              (*pcVar12)(plVar8,*puVar9);
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        uVar5 = std::set<int,std::less<int>,std::allocator<int>>::
                                                begin((set<int,std::less<int>,std::allocator<int>> *
                                                      )param_2);
                                        uVar6 = std::
                                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                        local_11c = 0x2a8f;
                                        local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                        local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                        bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                                  (rbtree_iterator *)&local_110);
                                        if (bVar2) {
                                          iVar4 = GetTabByActivity(this,0x2a8f);
                                          local_110 = CONCAT44(local_110._4_4_,iVar4);
                                          if (iVar4 == *(int *)(this + 0x150)) {
                                            pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                            lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                            if ((lVar7 != 0) &&
                                               (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                               , *plVar8 != 0)) {
                                              plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                              ;
                                              cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20));
                                              if (cVar3 == '\0') {
                                                this_11 = ::operator_new(0x1b8);
                                                ActivityCollectionVaseBreaker::
                                                ActivityCollectionVaseBreaker(this_11);
                                                puVar9 = (undefined8 *)
                                                         std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                ActivityCollectionTabBase::SetTabContainer
                                                          ((ActivityCollectionTabBase *)*puVar9,
                                                           (ActivityCollectionContainer *)
                                                           (this_11 + 0xe0));
                                                plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                FUN_0341ee18(*plVar8 + 0x20);
                                                pcVar12 = (code *)**(undefined8 **)(this_11 + 0xe0);
                                                puVar9 = (undefined8 *)
                                                         std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                (*pcVar12)((ActivityCollectionContainer *)
                                                           (this_11 + 0xe0),*puVar9);
                                              }
                                              else {
                                                plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                               (*plVar8 + 0x28));
                                                pcVar12 = *(code **)(*plVar8 + 8);
                                                puVar9 = (undefined8 *)
                                                         std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                (*pcVar12)(plVar8,*puVar9);
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          uVar5 = std::set<int,std::less<int>,std::allocator<int>>::
                                                  begin((set<int,std::less<int>,std::allocator<int>>
                                                         *)param_2);
                                          uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                          local_11c = 0x2a6c;
                                          local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                          local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                          bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                                    (rbtree_iterator *)&local_110);
                                          if (bVar2) {
                                            iVar4 = GetTabByActivity(this,0x2a6c);
                                            local_110 = CONCAT44(local_110._4_4_,iVar4);
                                            if (iVar4 == *(int *)(this + 0x150)) {
                                              pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                              lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                              if ((lVar7 != 0) &&
                                                 (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                 , *plVar8 != 0)) {
                                                plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                ;
                                                cVar3 = FUN_0341e950(*(undefined1 *)(*plVar8 + 0x20)
                                                                    );
                                                if (cVar3 == '\0') {
                                                  this_12 = ::operator_new(0x1b0);
                                                  ActivityCollectionNewYearGoods::
                                                  ActivityCollectionNewYearGoods(this_12);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_12 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_12 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_12 + 0xe0),*puVar9);
                                                }
                                                else {
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            uVar5 = std::set<int,std::less<int>,std::allocator<int>>
                                                    ::begin((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                            uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                            local_11c = 0x2a77;
                                            local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                            local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                            bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,
                                                                      (rbtree_iterator *)&local_110)
                                            ;
                                            if (bVar2) {
                                              iVar4 = GetTabByActivity(this,0x2a77);
                                              local_110 = CONCAT44(local_110._4_4_,iVar4);
                                              if (iVar4 == *(int *)(this + 0x150)) {
                                                pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                if ((lVar7 != 0) &&
                                                   (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_13 = ::operator_new(0x1b0);
                                                    ActivityCollectionPlantCultivate::
                                                    ActivityCollectionPlantCultivate(this_13);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_13 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_13 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_13 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                              uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                              local_11c = 0x2a75;
                                              local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                              local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                              bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                        &local_118,
                                                                        (rbtree_iterator *)
                                                                        &local_110);
                                              if (bVar2) {
                                                iVar4 = GetTabByActivity(this,0x2a75);
                                                local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                if (iVar4 == *(int *)(this + 0x150)) {
                                                  pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_14 = ::operator_new(0x1b0);
                                                    ActivityCollectionUITenYearRecord::
                                                    ActivityCollectionUITenYearRecord(this_14);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_14 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_14 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_14 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                }
                                              }
                                              else {
                                                uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                local_11c = 0x2a3e;
                                                local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                          &local_118,
                                                                          (rbtree_iterator *)
                                                                          &local_110);
                                                if (bVar2) {
                                                  iVar4 = GetTabByActivity(this,0x2a3e);
                                                  local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                  if (iVar4 == *(int *)(this + 0x150)) {
                                                    pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_15 = ::operator_new(0x1b0);
                                                    ActivityCollectionCustomVoting::
                                                    ActivityCollectionCustomVoting(this_15);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_15 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_15 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_15 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                }
                                                else {
                                                  uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a4f;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a4f);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_16 = ::operator_new(0x1b0);
                                                    ActivityCollectionCallofWish::
                                                    ActivityCollectionCallofWish(this_16);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_16 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_16 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_16 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a7e;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a7e);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_17 = ::operator_new(0x1b0);
                                                    ActivityCollectionDaveKitchen::
                                                    ActivityCollectionDaveKitchen(this_17);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_17 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_17 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_17 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a45;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a45);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_18 = ::operator_new(0x1b0);
                                                    ActivityCollectionFightZodiac::
                                                    ActivityCollectionFightZodiac(this_18);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_18 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_18 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_18 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a80;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a80);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_19 = ::operator_new(0x1b0);
                                                    ActivityCollectionUINewYearGiftBox::
                                                    ActivityCollectionUINewYearGiftBox(this_19);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_19 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_19 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_19 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a7f;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a7f);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_20 = ::operator_new(0x1b0);
                                                    ActivityCollectionDragonTreasure::
                                                    ActivityCollectionDragonTreasure(this_20);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_20 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_20 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_20 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a81;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a81);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_21 = ::operator_new(0x1b0);
                                                    ActivityCollectionTreasurePavilion::
                                                    ActivityCollectionTreasurePavilion(this_21);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_21 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_21 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_21 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a83;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = Sexy::LazySingleton<ActivityManager>::
                                                            GetInstancePtr();
                                                    ActivityManager::GetActiveItem(iVar4);
                                                    cVar3 = FUN_0341e954(local_80);
                                                    if ((cVar3 != '\0') && (local_70 != '\0')) {
                                                      iVar4 = GetTabByActivity(this,0x2a83);
                                                      local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                      if (iVar4 == *(int *)(this + 0x150)) {
                                                        pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    lVar7 = 
                                                  UISingletonDialog<ActivityCollectionUIFutureGiftBox>
                                                  ::ShowDialog();
                                                  if (lVar7 == 0) goto LAB_03425694;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (lVar7 + 0x138));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138)
                                                  ;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (lVar7 + 0x138),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  ActiveItem::~ActiveItem(aAStack_88);
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a82;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a82);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_22 = ::operator_new(0x1b0);
                                                    ActivityCollectionNFSLinkage::
                                                    ActivityCollectionNFSLinkage(this_22);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_22 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_22 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_22 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a84;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a84);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_23 = ::operator_new(0x1b0);
                                                    ActivityCollectionPennyGiftBox::
                                                    ActivityCollectionPennyGiftBox(this_23);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_23 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_23 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_23 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a88;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a88);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_24 = ::operator_new(0x1b0);
                                                    ActivityCollectionPlantWars::
                                                    ActivityCollectionPlantWars(this_24);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_24 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_24 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_24 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a89;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a89);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    lVar7 = 
                                                  UISingletonDialog<ActivityCollectionLuckyChest>::
                                                  ShowDialog();
                                                  if (lVar7 == 0) {
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)0x0);
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                    /* WARNING: Does not return */
                                                  pcVar12 = (code *)SoftwareBreakpoint(1000,
                                                  0x3427de4);
                                                  (*pcVar12)();
                                                  }
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (lVar7 + 0x138));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138)
                                                  ;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (lVar7 + 0x138),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a8b;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a8b);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    lVar7 = 
                                                  UISingletonDialog<ActivityCollectionAutumnHarvest>
                                                  ::ShowDialog();
                                                  if (lVar7 == 0) goto LAB_03425694;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (lVar7 + 0x138));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138)
                                                  ;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (lVar7 + 0x138),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a8e;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a8e);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    lVar7 = 
                                                  UISingletonDialog<ActivityCollectionNighttheToy>::
                                                  ShowDialog();
                                                  if (lVar7 == 0) goto LAB_03425694;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (lVar7 + 0x138));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)(lVar7 + 0x138)
                                                  ;
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (lVar7 + 0x138),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::begin
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2);
                                                  uVar6 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  local_11c = 0x2a8d;
                                                  local_118 = std::
                                                  find<std::_Rb_tree_const_iterator<int>,ActivityTypeID>
                                                            (uVar5,uVar6,&local_11c);
                                                  local_110 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                  bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                            &local_118,
                                                                            (rbtree_iterator *)
                                                                            &local_110);
                                                  if (bVar2) {
                                                    iVar4 = GetTabByActivity(this,0x2a8d);
                                                    local_110 = CONCAT44(local_110._4_4_,iVar4);
                                                    if (iVar4 == *(int *)(this + 0x150)) {
                                                      pmVar1 = (
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  *)(this + 0xe8);
                                                  lVar7 = std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::count(pmVar1,(rbtree_iterator *)&local_110);
                                                  if ((lVar7 != 0) &&
                                                     (plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  , *plVar8 != 0)) {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  cVar3 = FUN_0341e950(*(undefined1 *)
                                                                        (*plVar8 + 0x20));
                                                  if (cVar3 == '\0') {
                                                    this_25 = ::operator_new(0x1b0);
                                                    ActivityCollectionMiniGame::
                                                    ActivityCollectionMiniGame(this_25);
                                                    puVar9 = (undefined8 *)
                                                             std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  ActivityCollectionTabBase::SetTabContainer
                                                            ((ActivityCollectionTabBase *)*puVar9,
                                                             (ActivityCollectionContainer *)
                                                             (this_25 + 0xe0));
                                                  plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  FUN_0341ee18(*plVar8 + 0x20);
                                                  pcVar12 = (code *)**(undefined8 **)
                                                                      (this_25 + 0xe0);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)((ActivityCollectionContainer *)
                                                             (this_25 + 0xe0),*puVar9);
                                                  }
                                                  else {
                                                    plVar8 = (long *)std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  plVar8 = (long *)FUN_0341e94c(*(undefined8 *)
                                                                                 (*plVar8 + 0x28));
                                                  pcVar12 = *(code **)(*plVar8 + 8);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<ActivityCollectionTab,ActivityCollectionTabBase*,std::less<ActivityCollectionTab>,std::allocator<std::pair<ActivityCollectionTab_const,ActivityCollectionTabBase*>>>
                                                  ::operator[](pmVar1,(rbtree_iterator *)&local_110)
                                                  ;
                                                  (*pcVar12)(plVar8,*puVar9);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

