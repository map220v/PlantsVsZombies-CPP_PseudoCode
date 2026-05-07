// Class: WorldMap_ScrollBannerButton


/* WorldMap_ScrollBannerButton::ShowScrollBanner(bool) */

void WorldMap_ScrollBannerButton::ShowScrollBanner(bool param_1)

{
  (**(code **)(*(long *)(ulong)param_1 + 0x158))();
  return;
}


/* WorldMap_ScrollBannerButton::OnOrientationChanged() */

void __thiscall WorldMap_ScrollBannerButton::OnOrientationChanged(WorldMap_ScrollBannerButton *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    if (this[0x1f0] != (WorldMap_ScrollBannerButton)0x0) {
      iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
      iVar4 = Reflection::RFunctionType::StaticGetTypeCategory();
      if (iVar3 == iVar4) {
        (**(code **)(*(long *)this + 0x198))
                  (this,0,*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x50),
                   *(undefined4 *)(this + 0x54));
      }
      else {
        iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
        iVar4 = EA::Text::PolygonFont::GetFontType();
        if (iVar3 == iVar4) {
          (**(code **)(*(long *)this + 0x198))
                    (this,uVar2,*(undefined4 *)(this + 0x4c),*(undefined4 *)(this + 0x50),
                     *(undefined4 *)(this + 0x54));
        }
      }
    }
  }
  return;
}


/* WorldMap_ScrollBannerButton::RequestNetwork() */

void WorldMap_ScrollBannerButton::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a4d,false,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton() */

void __thiscall
WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton(WorldMap_ScrollBannerButton *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR__WorldMap_ScrollBannerButton_06866628;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06866270;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Universe_Gate");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::OutputDebugStrF((wchar_t *)"WorldMap_ScrollBannerButton Destructor");
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  UIScrollWidgetComponent::~UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton() */

void __thiscall
WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton(WorldMap_ScrollBannerButton *this)

{
  ~WorldMap_ScrollBannerButton(this + -0xd8);
  return;
}


/* WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton() */

void __thiscall
WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton(WorldMap_ScrollBannerButton *this)

{
  ~WorldMap_ScrollBannerButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton() */

void __thiscall
WorldMap_ScrollBannerButton::~WorldMap_ScrollBannerButton(WorldMap_ScrollBannerButton *this)

{
  ~WorldMap_ScrollBannerButton(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::WorldMap_ScrollBannerButton() */

void __thiscall
WorldMap_ScrollBannerButton::WorldMap_ScrollBannerButton(WorldMap_ScrollBannerButton *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollWidgetComponent::UIScrollWidgetComponent((UIScrollWidgetComponent *)this);
  *(undefined ***)this = &PTR_GetClass_06866270;
  *(undefined ***)(this + 0xd8) = &PTR__WorldMap_ScrollBannerButton_06866628;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  this_00 = gLawnApp;
  std::string::string((string *)&local_50,"Universe_Gate");
  LawnApp::LoadGroup(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  this[0x1f0] = (WorldMap_ScrollBannerButton)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1f8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowScrollBanner);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)(bool)>>
            ((MessageRouter *)puVar1,Message::ShowScrollBanner,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnOrientationChanged);
  Sexy::Delegate0::Delegate0<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OrientationChanged,aDStack_38);
  Sexy::OutputDebugStrF((wchar_t *)"WorldMap_ScrollBannerButton Constructor");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::InitView(S2C_ScrollBannerNetworkData) */

void WorldMap_ScrollBannerButton::InitView
               (UIScrollWidgetComponent *param_1,long param_2,LineBreakCategory *param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  string *psVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ProfileMgr *pPVar15;
  PlayerInfo *pPVar16;
  long *plVar17;
  PennyClassroomManager *this_01;
  UnchartedModeNetworkMgr *this_02;
  char *__s;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  uint local_3c;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x59] = (UIScrollWidgetComponent)0x0;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14b10);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b14b10);
  auVar20 = SalesProgressBar::GetCurrentLevel(pSVar10);
  uVar19 = (ulong)auVar20._0_8_ & 0xffffffff;
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar20._0_8_,auVar20._8_8_,param_3,param_4,param_5);
  if (cVar3 == '\0') {
    iVar5 = (int)((float)iVar5 * 1.1);
    uVar19 = (ulong)(uint)(int)((float)auVar20._0_4_ * 1.1);
  }
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b148a8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  cVar3 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar3 == '\0') {
    (**(code **)(*(long *)param_1 + 0x198))
              (param_1,0,((int)gLawnApp[0xe5] - (int)uVar19) - iVar6,iVar5,uVar19);
  }
  else {
    uVar7 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar8 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar9 = Reflection::RFunctionType::StaticGetTypeCategory();
    if (iVar8 == iVar9) {
      lVar18 = *(long *)param_1;
      uVar7 = 0;
    }
    else {
      iVar8 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
      iVar9 = EA::Text::PolygonFont::GetFontType();
      if (iVar8 != iVar9) goto LAB_045a0eac;
      lVar18 = *(long *)param_1;
    }
    (**(code **)(lVar18 + 0x198))
              (param_1,uVar7,((int)gLawnApp[0xe5] - (int)uVar19) - iVar6,iVar5,uVar19);
  }
LAB_045a0eac:
  uVar19 = 0;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::vector
            ((vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>> *)&local_20,
             (vector *)(param_2 + 0x18));
  uVar13 = local_20;
  uVar11 = FUN_0459fdac(local_20,local_18);
  if (uVar11 != 0) {
    do {
      puVar12 = (uint *)FUN_0459fddc(uVar13,uVar19);
      local_3c = *puVar12;
      if ((char)puVar12[2] != '\0') {
        uVar2 = puVar12[1];
        if (local_3c == 0x2a53) {
LAB_045a1098:
          __s = "egypt4";
LAB_045a10a4:
          std::string::string((string *)&local_28,__s);
          pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
          cVar3 = ProfileUtils::HasCompletedLevel((string *)&local_28,false,pPVar16);
          std::string::~string((string *)&local_28);
          nop();
joined_r0x045a10dc:
          if (cVar3 != '\0') {
LAB_045a0f88:
            this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x1f8);
            uVar13 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this);
            uVar14 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this);
            local_30 = std::
                       find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                                 (uVar13,uVar14,&local_3c);
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(this);
            bVar4 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
            if ((!bVar4) &&
               (plVar17 = (long *)UIScrollDisplayWidgetFactory::CreateWidget(local_3c),
               plVar17 != (long *)0x0)) {
              Sexy::OutputDebugStrF
                        ((wchar_t *)"WorldMap_ScrollBannerButton InitView activeType %d id %d",
                         (ulong)uVar2,(ulong)local_3c);
              (**(code **)(*(long *)param_1 + 0x370))(param_1,plVar17);
              (**(code **)(*plVar17 + 0x318))(plVar17);
              param_1[0x1f0] = (UIScrollWidgetComponent)0x1;
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)this,(int *)&local_3c);
            }
          }
        }
        else if (local_3c == 0x2a5b) {
          std::string::string((string *)&local_28,"egypt7");
          pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
          cVar3 = ProfileUtils::HasCompletedLevel((string *)&local_28,false,pPVar16);
          std::string::~string((string *)&local_28);
          nop();
          if (cVar3 != '\0') {
            this_01 = (PennyClassroomManager *)
                      Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
            cVar3 = PennyClassroomManager::CheckShopItemsSoldOut(this_01);
            if (cVar3 == '\0') goto LAB_045a0f88;
          }
        }
        else {
          if (local_3c != 0x2a61) {
            if ((local_3c == 0x2a63) || (local_3c == 0x2a6f)) {
              pPVar16 = (PlayerInfo *)ProfileUtils::Profile();
              cVar3 = PlayerInfo::PlayerHasCompletedTutorial(pPVar16,0x17);
            }
            else {
              if (local_3c == 0x2a77) goto LAB_045a1098;
              if (local_3c != 0x2a88) {
                __s = "egypt6";
                if (local_3c != 0x2a8c) goto LAB_045a0f88;
                goto LAB_045a10a4;
              }
              pPVar15 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar15);
              cVar3 = ProfileUtils::HasCompletedSecondWorldLevel(10,false,pPVar16);
            }
            goto joined_r0x045a10dc;
          }
          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          UnchartedModeNetworkMgr::GetTimeLimitWorld();
          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          UnchartedModeNetworkMgr::GetScrollBannerWorldName();
          bVar4 = std::operator==(asStack_38,"");
          if ((!bVar4) || (bVar4 = std::operator==((string *)&local_30,""), !bVar4)) {
            bVar4 = std::operator==(asStack_38,"");
            psVar1 = (string *)&local_30;
            if (!bVar4) {
              psVar1 = asStack_38;
            }
            FUN_05475d88((string *)&local_28,psVar1);
            this_02 = (UnchartedModeNetworkMgr *)
                      Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
            cVar3 = UnchartedModeNetworkMgr::IsWorldOpen(this_02,(string *)&local_28);
            if (cVar3 != '\0') {
              std::string::~string((string *)&local_28);
              std::string::~string((string *)&local_30);
              std::string::~string(asStack_38);
              goto LAB_045a0f88;
            }
            std::string::~string((string *)&local_28);
          }
          std::string::~string((string *)&local_30);
          std::string::~string(asStack_38);
        }
        uVar13 = local_20;
        uVar11 = FUN_0459fdac(local_20,local_18);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar11);
  }
  if (param_1[0x1f0] != (UIScrollWidgetComponent)0x0) {
    UIScrollWidgetComponent::SetScrollParam(param_1);
    UIScrollWidgetComponent::SetDotEnable(param_1,true);
    UIScrollWidgetComponent::InitView(param_1);
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(*(long *)param_1 + 0x158))(param_1,param_1[0x1f0]);
    Sexy::OutputDebugStrF
              ((wchar_t *)"WorldMap_ScrollBannerButton InitView SetVisible %d",
               (ulong)(byte)param_1[0x1f0]);
  }
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::~vector
            ((vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::Test() */

void __thiscall WorldMap_ScrollBannerButton::Test(WorldMap_ScrollBannerButton *this)

{
  undefined4 local_78;
  undefined4 local_74;
  S2C_ScrollBannerNetworkData aSStack_68 [24];
  vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>> avStack_50 [24];
  S2C_ScrollBannerNetworkData aSStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData(aSStack_68);
  PVZ1ModeLevelBonusData::PVZ1ModeLevelBonusData((PVZ1ModeLevelBonusData *)&local_78);
  local_78 = 0x457;
  local_74 = 1;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::push_back
            (avStack_50,(S2C_ScrollBannerData *)&local_78);
  local_78 = 0x8ae;
  local_74 = 2;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::push_back
            (avStack_50,(S2C_ScrollBannerData *)&local_78);
  local_78 = 0xd05;
  local_74 = 3;
  std::vector<S2C_ScrollBannerData,std::allocator<S2C_ScrollBannerData>>::push_back
            (avStack_50,(S2C_ScrollBannerData *)&local_78);
  S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData(aSStack_38,aSStack_68);
  InitView(this,aSStack_38);
  S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(aSStack_38);
  S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData(aSStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::CheckVisibility() */

void __thiscall WorldMap_ScrollBannerButton::CheckVisibility(WorldMap_ScrollBannerButton *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UniverseMap *this_00;
  WorldMap_ScrollBannerButton WVar4;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar3 == 0) ||
      (this_00 = (UniverseMap *)FUN_0459fbdc(*(undefined8 *)(lVar3 + 0x2b0)),
      this_00 == (UniverseMap *)0x0)) || (cVar1 = UniverseMap::isInState(this_00,2), cVar1 != '\0'))
  {
    WVar4 = (WorldMap_ScrollBannerButton)0x0;
    Sexy::OutputDebugStrF((wchar_t *)"WorldMap_ScrollBannerButton !gLawnApp->GetWorldMap() ");
  }
  else {
    cVar1 = RiftUtils::IsWorldMapButtonsEnabled();
    if (cVar1 == '\0') {
      Sexy::OutputDebugStrF((wchar_t *)"WorldMap_ScrollBannerButton IsWorldMapButtonsEnabled ");
      WVar4 = (WorldMap_ScrollBannerButton)0x0;
    }
    else {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      WVar4 = this[0x1f0];
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(WVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ScrollBannerButton::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_ScrollBannerButton::NotifyRefreshActivityList
          (WorldMap_ScrollBannerButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  int local_ec;
  undefined8 local_e8 [6];
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_ec = 0x2a4d;
    local_e8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_ec);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_e8,(rbtree_iterator *)local_b8);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      if (local_70 != '\0') {
        S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData
                  ((S2C_ScrollBannerNetworkData *)local_e8);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_e8);
        if (cVar2 != '\0') {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"WorldMap_ScrollBannerButton S2C_ScrollBannerNetworkData Init");
          S2C_ScrollBannerNetworkData::S2C_ScrollBannerNetworkData
                    ((S2C_ScrollBannerNetworkData *)local_b8,(S2C_ScrollBannerNetworkData *)local_e8
                    );
          InitView(this,(S2C_ScrollBannerNetworkData *)local_b8);
          S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData
                    ((S2C_ScrollBannerNetworkData *)local_b8);
        }
        S2C_ScrollBannerNetworkData::~S2C_ScrollBannerNetworkData
                  ((S2C_ScrollBannerNetworkData *)local_e8);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
    uVar4 = CheckVisibility(this);
    (**(code **)(*(long *)this + 0x158))(this,uVar4 & 0xffffffff);
    Sexy::OutputDebugStrF
              ((wchar_t *)"WorldMap_ScrollBannerButton NotifyRefreshActivityList SetVisible %d",
               uVar4 & 0xff);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

