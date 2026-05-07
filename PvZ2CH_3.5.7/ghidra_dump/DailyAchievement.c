// Class: DailyAchievement


/* DailyAchievement::ScrollTargetReached(Sexy::ScrollWidget*) */

void DailyAchievement::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailyAchievement::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall DailyAchievement::ScrollTargetReached(DailyAchievement *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* DailyAchievement::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DailyAchievement::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailyAchievement::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
DailyAchievement::ScrollTargetInterrupted(DailyAchievement *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* DailyAchievement::ButtonPress(int) */

int DailyAchievement::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to DailyAchievement::ButtonPress(int) */

void __thiscall DailyAchievement::ButtonPress(DailyAchievement *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* DailyAchievement::ButtonDepress(int) */

int DailyAchievement::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to DailyAchievement::ButtonDepress(int) */

void __thiscall DailyAchievement::ButtonDepress(DailyAchievement *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievement::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DailyAchievement::DrawAll(DailyAchievement *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GameStateMgr::GetState(gGameStateMgr);
  if (iVar1 == 0x11) {
    Sexy::Insets::Insets(aIStack_18,0,0,0,0);
    DrawSpaceSpiral(param_2,0xff,aIStack_18);
  }
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2098);
  Draw9SliceImage(param_2,aIStack_18,uVar2);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievement::~DailyAchievement() */

void __thiscall DailyAchievement::~DailyAchievement(DailyAchievement *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06802cb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802ff0;
  *(undefined ***)(this + 0xe0) = &PTR__DailyAchievement_06803038;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_DailyAchievement");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<AchievementContentInfo,std::allocator<AchievementContentInfo>>::~vector
            ((vector<AchievementContentInfo,std::allocator<AchievementContentInfo>> *)(this + 0x128)
            );
  FUN_05476c50(this + 0x118);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailyAchievement::~DailyAchievement() */

void __thiscall DailyAchievement::~DailyAchievement(DailyAchievement *this)

{
  ~DailyAchievement(this + -0xe0);
  return;
}


/* DailyAchievement::~DailyAchievement() */

void __thiscall DailyAchievement::~DailyAchievement(DailyAchievement *this)

{
  ~DailyAchievement(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DailyAchievement::~DailyAchievement() */

void __thiscall DailyAchievement::~DailyAchievement(DailyAchievement *this)

{
  ~DailyAchievement(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievement::DailyAchievement() */

void __thiscall DailyAchievement::DailyAchievement(DailyAchievement *this)

{
  LawnApp *pLVar1;
  DailyAchievementInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06802cb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802ff0;
  *(undefined ***)(this + 0xe0) = &PTR__DailyAchievement_06803038;
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x118);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_DailyAchievement");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  std::vector<AchievementContentInfo,std::allocator<AchievementContentInfo>>::clear
            ((vector<AchievementContentInfo,std::allocator<AchievementContentInfo>> *)(this + 0x128)
            );
  this_00 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
  DailyAchievementInfo::initPool(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievement::InitView() */

void __thiscall DailyAchievement::InitView(DailyAchievement *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  long lVar7;
  PVZ2UIScrollingWidget *this_01;
  AchievementScrollPanel *this_02;
  ulong uVar8;
  Sexy *local_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_041d3f08(0x2c);
  iVar5 = *(int *)(gLawnApp + 0xd4);
  uVar2 = FUN_041d3f08(0xbe);
  uVar3 = FUN_041d3f08(0x168);
  uVar4 = FUN_041d3f08(0xff);
  (**(code **)(*(long *)this + 0x198))(this,iVar1 + iVar5 / 2,uVar2,uVar3,uVar4);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  local_30 = (Sexy *)LawnApp::GetRealBeijingTime(gLawnApp);
  if ((long)local_30 < 1) {
    uVar8 = Sexy::SexyTime(local_30);
    local_30 = (Sexy *)(uVar8 / 1000);
  }
  lVar7 = LawnApp::BeijingTime(gLawnApp,(long *)&local_30);
  *(int *)(this + 0x120) =
       *(int *)(lVar7 + 0x10) * 100 + 100 + (*(int *)(lVar7 + 0x14) + 0x76c) * 10000 +
       *(int *)(lVar7 + 0xc);
  iVar5 = FUN_041d3f08(0x24e);
  iVar1 = FUN_041d3f08(0x6e);
  iVar6 = FUN_041d3f08(300);
  Sexy::Insets::Insets((Insets *)&local_18,(*(int *)(this + 0x50) - iVar5) / 2,iVar1,iVar5,iVar6);
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  iVar5 = FUN_041d3f08(0x24e);
  iVar1 = FUN_041d3f08(10);
  iVar6 = FUN_041d3f08(0x136);
  Sexy::Insets::Insets((Insets *)&local_18,(*(int *)(this + 0x50) - iVar5) / 2,iVar1,iVar5,iVar6);
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  iVar5 = FUN_041d3f08(0x168);
  iVar1 = FUN_041d3f08(0xff);
  Sexy::Insets::Insets(aIStack_28,0,0,iVar5,iVar1);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  lVar7 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0x110) = this_01;
  (**(code **)(lVar7 + 0x1a0))(this_01,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x110),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  iVar5 = FUN_041d3f08(0x168);
  iVar1 = FUN_041d3f08(0xff);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar5,iVar1);
  this_02 = ::operator_new(0xf0);
  AchievementScrollPanel::AchievementScrollPanel
            (this_02,(TRect *)&local_18,(vector *)(this + 0x128));
  (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110),this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAchievement::SyncActivityData(NetworkAchievementItem const&) */

void __thiscall
DailyAchievement::SyncActivityData(DailyAchievement *this,NetworkAchievementItem *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  RewardContent aRStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AchievementItem::AchievementItem((AchievementItem *)local_b0);
  local_78 = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_05475e00(auStack_80,param_1 + 0x38);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)&local_98,(vector *)(param_1 + 0x20));
  local_c0 = FUN_041d456c(*(undefined8 *)(param_1 + 8));
  local_b8 = FUN_041d45bc(*(undefined8 *)(param_1 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
    RewardContent::RewardContent(aRStack_70);
    local_58 = *(undefined4 *)(lVar3 + 0x18);
    local_54 = local_58;
    thunk_FUN_05475e00(auStack_60,lVar3 + 0x10);
    thunk_FUN_05475e00(aRStack_70,lVar3);
    thunk_FUN_05475e00(auStack_68,lVar3 + 8);
    std::vector<RewardContent,std::allocator<RewardContent>>::push_back
              ((vector<RewardContent,std::allocator<RewardContent>> *)local_b0,aRStack_70);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aRStack_70);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_c0);
  }
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_041d3af0(local_98,local_90);
    if (uVar4 <= uVar5) break;
    AchievementContentInfo::AchievementContentInfo((AchievementContentInfo *)aRStack_70);
    AchievementItem::operator=((AchievementItem *)aRStack_70,(AchievementItem *)local_b0);
    puVar2 = (undefined4 *)FUN_041d3b2c(local_98,uVar5);
    local_20 = *puVar2;
    lVar3 = FUN_041d3b34(local_b0[0],uVar5);
    thunk_FUN_05475e00(auStack_30,lVar3 + 0x10);
    lVar3 = FUN_041d3b34(local_b0[0],uVar5);
    thunk_FUN_05475e00(auStack_28,lVar3 + 8);
    lVar3 = FUN_041d3b34(local_b0[0],uVar5);
    local_1c = *(undefined4 *)(lVar3 + 0x18);
    local_18 = *(undefined4 *)(lVar3 + 0x1c);
    thunk_FUN_05475e00(auStack_10,lVar3);
    std::vector<AchievementContentInfo,std::allocator<AchievementContentInfo>>::push_back
              ((vector<AchievementContentInfo,std::allocator<AchievementContentInfo>> *)
               (this + 0x128),(AchievementContentInfo *)aRStack_70);
    AchievementContentInfo::~AchievementContentInfo((AchievementContentInfo *)aRStack_70);
    uVar5 = uVar5 + 1;
  }
  InitView(this);
  AchievementItem::~AchievementItem((AchievementItem *)local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

