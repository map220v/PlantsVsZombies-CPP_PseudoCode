// Class: PlantBundleUI


/* PlantBundleUI::ButtonPress(int) */

int PlantBundleUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PlantBundleUI::ButtonPress(int) */

void __thiscall PlantBundleUI::ButtonPress(PlantBundleUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::InitView() */

void __thiscall PlantBundleUI::InitView(PlantBundleUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  PVZ2UIButton *pPVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined8 uVar12;
  ProfileMgr *this_00;
  long lVar13;
  PlantBundleData *pPVar14;
  PlantBundleContent *this_01;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  wstring awStack_78 [56];
  ulong local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar1 = FUN_04c25064(0x35c);
  iVar2 = FUN_04c25064(0x3c);
  iVar8 = *(int *)(this + 0x54);
  iVar3 = FUN_04c25064(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_88,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
             (iVar8 - iVar2) - iVar3);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar16 = *(code **)(*(long *)pPVar9 + 0x198);
  iVar8 = local_88 + local_80;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f040);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar3 = FUN_04c25064(10);
  iVar1 = local_84;
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f040);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar5 = FUN_04c25064(8);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f040);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f040);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar16)(pPVar9,(iVar8 - iVar2 / 2) - iVar3,(iVar1 - iVar4 / 2) + iVar5,uVar6,uVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f040,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b8ef28,1);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar8 = local_88 + (local_80 - iVar8) / 2;
  *(int *)(this + 0xe8) = iVar8;
  iVar1 = FUN_04c25064(0x32);
  *(int *)(this + 0xec) = local_84 + iVar1;
  iVar2 = FUN_04c25064(0x154);
  iVar3 = FUN_04c25064(0x5a);
  Sexy::Point::Point((Point *)local_40,iVar8 + iVar2,local_84 + iVar1 + iVar3);
  *(ulong *)(this + 0xf0) = local_40[0];
  iVar2 = FUN_04c25064(0x20);
  iVar1 = *(int *)(this + 0xf4);
  iVar8 = FUN_04c25064(10);
  iVar8 = iVar2 + iVar1 + iVar8;
  FUN_05478178(awStack_78,L"[PLANTBUNDLE_CONFIRM_BUY]",auStack_90);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x65,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  plVar18 = *(long **)(this + 0x130);
  pcVar16 = *(code **)(*plVar18 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  (*pcVar16)(plVar18,uVar12);
  pPVar9 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8f390,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b8f2a0,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar18 = *(long **)(this + 0x130);
  iVar3 = FUN_04c25064(0x24e);
  iVar1 = *(int *)(this + 0xe8);
  iVar4 = FUN_04c25064(300);
  iVar2 = *(int *)(this + 0xec);
  uVar6 = FUN_04c25064(0x96);
  uVar7 = FUN_04c25064(0x41);
  (**(code **)(*plVar18 + 0x198))(plVar18,iVar3 + iVar1,iVar4 + iVar2,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar13 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04c24bcc(*(undefined4 *)(lVar13 + 0x1378));
  if (iVar1 < 1) {
    (**(code **)(**(long **)(this + 0x130) + 0x188))(*(long **)(this + 0x130),1);
  }
  uVar17 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(this + 0xf8);
    uVar15 = FUN_04c24dcc(uVar12,*(undefined8 *)(this + 0x100));
    if (uVar15 <= uVar17) break;
    pPVar14 = (PlantBundleData *)FUN_04c24dd8(uVar12,uVar17);
    this_01 = ::operator_new(0xe0);
    PlantBundleContent::PlantBundleContent(this_01,pPVar14);
    pcVar16 = *(code **)(*(long *)this_01 + 0x198);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f170);
    uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f170);
    uVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
    (*pcVar16)(this_01,local_40[0] & 0xffffffff,iVar8,uVar6,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    iVar1 = FUN_04c25064(5);
    iVar8 = iVar8 + iVar1 + *(int *)(this_01 + 0x54);
    uVar17 = uVar17 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::PlantBundleUI() */

void __thiscall PlantBundleUI::PlantBundleUI(PlantBundleUI *this)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069837b0;
  *(undefined **)(this + 0xd8) = &DAT_06983ae0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  Sexy::Point::Point((Point *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantBundle");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
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
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x128) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::~PlantBundleUI() */

void __thiscall PlantBundleUI::~PlantBundleUI(PlantBundleUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06983ae0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069837b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantBundle");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
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
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<PlantBundleData,std::allocator<PlantBundleData>>::~vector
            ((vector<PlantBundleData,std::allocator<PlantBundleData>> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBundleUI::~PlantBundleUI() */

void __thiscall PlantBundleUI::~PlantBundleUI(PlantBundleUI *this)

{
  ~PlantBundleUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::ButtonDepress(int) */

void __thiscall PlantBundleUI::ButtonDepress(PlantBundleUI *this,int param_1)

{
  LawnApp *this_00;
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 *puVar4;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Press");
  if (param_1 == 100) {
    LawnApp::KillPlantBundleUI(gLawnApp);
  }
  else if (param_1 == 0x65) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetNumGems(this_02,true);
    if ((iVar2 < *(int *)(this + 0x118)) ||
       (iVar2 = PlayerInfo::SubtractGems
                          (this_02,*(int *)(this + 0x118),-1,
                           (ICloudRequestCallbackFunctionBase *)0x0,1,false), iVar2 < 0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
    }
    else {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0xf8));
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xf8));
      while( true ) {
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
        if (!bVar1) break;
        puVar4 = (undefined4 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        PlayerInfo::AddCommonGachaReward((int)this_02,puVar4[1],SUB41(*puVar4,0),false);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
      iVar2 = FUN_04c24bcc(*(undefined4 *)(this_02 + 0x1378));
      FUN_04c24bc4(this_02 + 0x1378,iVar2 + -1);
      PlayerInfo::saveCurrentProfile(this_02);
      this_00 = gLawnApp;
      FUN_05478178((exception_ptr *)&local_58,L"[PLANTBUNDLE_PURCHASE_SUCCESS_TITLE]",auStack_68);
      FUN_05478178((__normal_iterator *)local_50,L"[PLANTBUNDLE_PURCHASE_SUCCESS_DES]",auStack_60);
      pPVar5 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(this_00,(wstring *)&local_58,(wstring *)local_50);
      FUN_05476c50((__normal_iterator *)local_50);
      nop();
      FUN_05476c50((exception_ptr *)&local_58);
      nop();
      FUN_05478178((exception_ptr *)&local_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,RefreshUI);
      Sexy::Delegate0::Delegate0<PlantBundleUI,void(PlantBundleUI::*)()>
                (aDStack_38,(__normal_iterator *)local_50);
      PVZ2UIDialog::AddButton(pPVar5,(exception_ptr *)&local_58,aDStack_38,bVar1);
      FUN_05476c50((exception_ptr *)&local_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantBundleUI::ButtonDepress(int) */

void __thiscall PlantBundleUI::ButtonDepress(PlantBundleUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantBundleUI::RefreshUI() */

void PlantBundleUI::RefreshUI(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillPlantBundleUI(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_04c24bcc(*(undefined4 *)(lVar2 + 0x1378));
  if (0 < iVar1) {
    Sexy::LazySingleton<PlantBundleMgr>::GetInstance();
    PlantBundleMgr::requestNetwork();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::SyncActivityData(PlantBundleInfo const&) */

void __thiscall PlantBundleUI::SyncActivityData(PlantBundleUI *this,PlantBundleInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar9;
  string *extraout_x1;
  ulong uVar10;
  undefined8 uVar11;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = FUN_04c24da4(uVar11,*(undefined8 *)(param_1 + 0x38));
    if (uVar8 <= uVar10) break;
    puVar7 = (undefined4 *)FUN_04c24de0(uVar11,uVar10);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
    local_10 = uVar2;
    local_c = uVar1;
    std::vector<PlantBundleData,std::allocator<PlantBundleData>>::push_back
              ((vector<PlantBundleData,std::allocator<PlantBundleData>> *)(this + 0xf8),
               (PlantBundleData *)&local_10);
    uVar10 = uVar10 + 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x120) = uVar11;
  *(undefined4 *)(this + 0x114) = uVar1;
  *(undefined4 *)(this + 0x118) = uVar2;
  *(undefined4 *)(this + 0x110) = uVar3;
  *(undefined4 *)(this + 0x11c) = uVar4;
  cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  if (cVar5 != '\0') goto LAB_04c28260;
  std::string::string(asStack_28,"");
  nop();
  pNVar9 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar9,*(int *)(this + 0x128));
  if (cVar5 == '\0') {
    pNVar9 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar5 = NameMapperBase::ContainsId(pNVar9,*(int *)(this + 0x128));
    if (cVar5 != '\0') {
      iVar6 = PlantChipNameMapperServerID::GetInstance();
      goto LAB_04c2832c;
    }
  }
  else {
    iVar6 = PlantNameMapperServerID::GetInstance();
LAB_04c2832c:
    NameMapperBase::GetNameForId(iVar6);
    FUN_05474278(asStack_28,(string *)&local_10);
    std::string::~string((string *)&local_10);
  }
  cVar5 = FUN_0547419c(asStack_28);
  if (cVar5 == '\0') {
    Sexy::StringToUpper((Sexy *)asStack_28,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_20);
    GetImageByName(asStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe0),(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  std::string::~string(asStack_28);
LAB_04c28260:
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (cVar5 = PlayerInfo::NeedResetPlantBundleBuyTime(this_01), cVar5 != '\0')) {
    PlayerInfo::ResetPlantBundleBuyTime(this_01,*(int *)(this + 0x11c));
  }
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::InitTestData() */

void __thiscall PlantBundleUI::InitTestData(PlantBundleUI *this)

{
  long lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  *(undefined4 *)(this + 0x128) = 0x412;
  *(undefined4 *)(this + 0x110) = 7;
  *(undefined4 *)(this + 0x114) = 0x2ee;
  *(undefined4 *)(this + 0x118) = 0x20d;
  *(undefined4 *)(this + 0x11c) = 3;
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  *(long *)(this + 0x120) = lVar1 + 0x1938;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_18);
  local_18 = 1;
  local_14 = 0x55f9;
  std::vector<PlantBundleData,std::allocator<PlantBundleData>>::push_back
            ((vector<PlantBundleData,std::allocator<PlantBundleData>> *)(this + 0xf8),
             (PlantBundleData *)&local_18);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
  local_10 = 1;
  local_c = 0x51c;
  std::vector<PlantBundleData,std::allocator<PlantBundleData>>::push_back
            ((vector<PlantBundleData,std::allocator<PlantBundleData>> *)(this + 0xf8),
             (PlantBundleData *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PlantBundleUI::DrawAll(PlantBundleUI *this,ModalFlags *param_1,Graphics *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  Image *pIVar13;
  LotteryResultProgressBar *pLVar14;
  PrimeTypeface *pPVar15;
  ProfileMgr *this_01;
  long lVar16;
  SalesProgressBar *pSVar17;
  code *pcVar18;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  Insets aIStack_c8 [4];
  int local_c4;
  Insets aIStack_b8 [16];
  int local_a8 [2];
  int local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  Insets aIStack_78 [16];
  int local_68 [2];
  int local_60;
  Insets aIStack_58 [16];
  Insets aIStack_48 [4];
  int local_44;
  Insets aIStack_38 [16];
  undefined8 local_28;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar2 = FUN_04c25064(0x35c);
  this_00 = (RtMixedPtrBase *)(this + 0xe0);
  iVar3 = FUN_04c25064(0x3c);
  iVar5 = *(int *)(this + 0x54);
  iVar4 = FUN_04c25064(0x19);
  Sexy::Insets::Insets
            (aIStack_c8,(*(int *)(this + 0x50) - iVar2) / 2,iVar3,iVar2,(iVar5 - iVar3) - iVar4);
  Sexy::Insets::Insets((Insets *)local_18,aIStack_c8);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ef50);
  Draw9SliceImage(param_2,(Insets *)local_18,uVar12);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f2f8);
  iVar5 = *(int *)(this + 0x50);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f2f8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar2 = local_c4;
  iVar4 = FUN_04c25064(0x2c);
  Sexy::Graphics::DrawImage(param_2,pIVar13,(iVar5 - iVar3) / 2,iVar2 - iVar4);
  pcVar18 = *(code **)(*(long *)this + 0x290);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)local_18,1);
  iVar5 = FUN_04c25064(0x1a);
  TodStringTranslate(L"[PLANTBUNDLE_TITLE]");
  (*pcVar18)(this,param_2,uVar12,(Insets *)local_18,local_c4 - iVar5,(Insets *)&local_28);
  FUN_05476c50((Insets *)&local_28);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  Sexy::Graphics::DrawImage(param_2,pIVar13,*(int *)(this + 0xe8),*(int *)(this + 0xec));
  iVar3 = FUN_04c25064(0x1e);
  iVar5 = *(int *)(this + 0xe8);
  iVar4 = FUN_04c25064(0x19);
  iVar2 = *(int *)(this + 0xec);
  iVar6 = FUN_04c25064(0xfa);
  iVar7 = FUN_04c25064(0x28);
  Sexy::Insets::Insets(aIStack_b8,iVar3 + iVar5,iVar4 + iVar2,iVar6,iVar7);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_b8);
  TodStringTranslate(L"[PLANTBUNDLE_TITLE]");
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_PooyanScore_Yellow);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar4 = FUN_04c25064(0x91);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = FUN_04c25064(0x31);
  iVar2 = *(int *)(this + 0xec);
  iVar7 = FUN_04c25064(0x28);
  iVar8 = FUN_04c25064(0x3c);
  Sexy::Insets::Insets((Insets *)local_a8,(iVar3 - iVar4) + iVar5,iVar6 + iVar2,iVar7,iVar8);
  Sexy::StrFormat(L"%d",auStack_f8,(ulong)*(uint *)(this + 0x110));
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_a8);
  FUN_05477b24(aIStack_38,auStack_f8);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  local_a8[0] = local_a8[0] + local_a0;
  local_a0 = FUN_04c25064(0x82);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_a8);
  TodStringTranslate(L"[PLANTBUNDLE_DISCOUNT]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar4 = FUN_04c25064(0xcd);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = FUN_04c25064(0x7d);
  iVar2 = *(int *)(this + 0xec);
  iVar7 = FUN_04c25064(0x28);
  iVar8 = FUN_04c25064(0x32);
  Sexy::Insets::Insets((Insets *)&local_98,(iVar3 - iVar4) + iVar5,iVar6 + iVar2,iVar7,iVar8);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_98);
  TodStringTranslate(L"[PLANTBUNDLE_ORIGINAL_PRICE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  local_98 = local_98 + local_90;
  iVar5 = FUN_04c25064(10);
  local_94 = local_94 + iVar5;
  local_90 = FUN_04c25064(0x5a);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_98);
  Sexy::StrFormat(L"%d",aIStack_38,(ulong)*(uint *)(this + 0x114));
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,1,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  local_98 = local_98 + local_90;
  local_94 = FUN_04c25064(0x7d);
  local_94 = local_94 + *(int *)(this + 0xec);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_98);
  TodStringTranslate(L"[GEM_BUY_GEM]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar4 = FUN_04c25064(0xcd);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = FUN_04c25064(200);
  iVar2 = *(int *)(this + 0xec);
  iVar7 = FUN_04c25064(0x3c);
  iVar8 = FUN_04c25064(0x4b);
  Sexy::Insets::Insets((Insets *)&local_88,(iVar3 - iVar4) + iVar5,iVar6 + iVar2,iVar7,iVar8);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_88);
  TodStringTranslate(L"[PLANTBUNDLE_SALE_PRICE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = FUN_04c25064(10);
  local_88 = local_88 + (local_80 - iVar5);
  iVar5 = FUN_04c25064(10);
  local_84 = local_84 + iVar5;
  local_80 = FUN_04c25064(0x5a);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_88);
  Sexy::StrFormat(L"%d",aIStack_38,(ulong)*(uint *)(this + 0x118));
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,1,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = local_80;
  iVar2 = FUN_04c25064(10);
  local_88 = local_88 + (iVar5 - iVar2);
  local_84 = FUN_04c25064(200);
  local_84 = local_84 + *(int *)(this + 0xec);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_88);
  TodStringTranslate(L"[GEM_BUY_GEM]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f220);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar2 = FUN_04c25064(0xcd);
  Sexy::Graphics::DrawImage
            (param_2,pIVar13,(iVar5 - iVar2) + *(int *)(this + 0xe8),local_94 + local_8c / 2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::Point::Point((Point *)&local_28);
    iVar2 = FUN_04c25064(0x96);
    iVar5 = *(int *)(this + 0xe8);
    iVar3 = FUN_04c25064(0xdc);
    Sexy::Point::Point((Point *)local_18,iVar2 + iVar5,iVar3 + *(int *)(this + 0xec));
    local_28 = local_18[0];
    pIVar13 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = (int)local_28;
    pLVar14 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar2 = local_28._4_4_;
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Graphics::DrawImage(param_2,pIVar13,iVar5 - iVar3 / 2,iVar2 - iVar4 / 2);
  }
  FUN_05478178(auStack_f0,&DAT_056f11a8,(Insets *)local_18);
  nop();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar16 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar16 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_04c24bcc(*(undefined4 *)(lVar16 + 0x1378));
    if (iVar5 == 0x7fffffff) goto LAB_04c2977c;
  }
  FUN_05478178((Insets *)&local_28,L"[PLANTBUNDLE_LIMITED_BUY]",aIStack_38);
  TodReplaceNumberString((wstring *)&local_28,L"{NUMBER}",iVar5);
  FUN_054766c8(auStack_f0,(Insets *)local_18);
  FUN_05476c50((Insets *)local_18);
  FUN_05476c50((Insets *)&local_28);
  nop();
LAB_04c2977c:
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eed8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar4 = FUN_04c25064(0xd7);
  iVar5 = *(int *)(this + 0xe8);
  iVar6 = FUN_04c25064(400);
  iVar2 = *(int *)(this + 0xec);
  iVar7 = FUN_04c25064(0xa0);
  iVar8 = FUN_04c25064(0x3c);
  Sexy::Insets::Insets(aIStack_78,(iVar3 - iVar4) + iVar5,iVar6 + iVar2,iVar7,iVar8);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_18,0);
  WriteWordInRect(param_2,auStack_f0,aIStack_78,uVar12,(Insets *)local_18,4,0);
  iVar3 = FUN_04c25064(10);
  iVar5 = *(int *)(this + 0xe8);
  iVar4 = FUN_04c25064(400);
  iVar2 = *(int *)(this + 0xec);
  iVar6 = FUN_04c25064(0xa0);
  iVar7 = FUN_04c25064(0x3c);
  Sexy::Insets::Insets((Insets *)local_68,iVar3 + iVar5,iVar4 + iVar2,iVar6,iVar7);
  TodStringTranslate(L"[PLANTBUNDLE_EXPIRE_TIME]");
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_68);
  FUN_05477b24(aIStack_38,auStack_e8);
  Sexy::Color::Color((Color *)local_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = local_60;
  iVar2 = FUN_04c25064(0x1e);
  local_68[0] = local_68[0] + (iVar5 - iVar2);
  lVar16 = LawnApp::GetRealBeijingTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)0x3,(float)(*(long *)(this + 0x120) - lVar16),
             (int)(*(long *)(this + 0x120) - lVar16));
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_68);
  FUN_05477b24(aIStack_38,auStack_e0);
  Sexy::Color::Color((Color *)local_18,2);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = FUN_04c25064(0x14);
  iVar5 = iVar5 + local_68[0];
  iVar3 = FUN_04c25064(0x3c);
  iVar4 = FUN_04c25064(400);
  iVar2 = *(int *)(this + 0xec);
  iVar6 = FUN_04c25064(0x17c);
  Sexy::Insets::Insets(aIStack_58,(iVar5 + local_60) - iVar3,iVar4 + iVar2,iVar6,iVar3);
  TodStringTranslate(L"[PLANTBUNDLE_DESCRIPTION]");
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_58);
  FUN_05477b24(aIStack_38,auStack_d8);
  Sexy::Color::Color((Color *)local_18,3);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = *(int *)(this + 0xf0);
  iVar3 = FUN_04c25064(0x20);
  iVar2 = *(int *)(this + 0xf4);
  iVar4 = FUN_04c25064(10);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f170);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar7 = FUN_04c25064(10);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f170);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar9 = FUN_04c25064(0x3c);
  iVar10 = FUN_04c25064(0xf);
  iVar11 = FUN_04c25064(0xa0);
  Sexy::Insets::Insets
            (aIStack_48,iVar6 + iVar5 + iVar7,(iVar3 + iVar2 + iVar4 + (iVar8 - iVar9) / 2) - iVar10
             ,iVar11,iVar9);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_48);
  TodStringTranslate(L"[PLANTBUNDLE_PLANT_PIECE_DES]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = FUN_04c25064(5);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8f170);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar17);
  local_44 = local_44 + iVar5 + iVar2;
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_48);
  TodStringTranslate(L"[PLANTBUNDLE_AVATAR_PIECE_DES]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar5 = FUN_04c25064(0x46);
  iVar2 = FUN_04c25064(0x20);
  Sexy::Insets::Insets(aIStack_38,*(int *)(this + 0xf0),*(int *)(this + 0xf4),iVar5,iVar2);
  pPVar15 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_38);
  TodStringTranslate(L"[RECHARGEBUNDLE_CAN_OBTAIN]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar15,param_2,(Insets *)&local_28,auStack_d0,0,1,(Insets *)local_18,0);
  FUN_05476c50(auStack_d0);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  FUN_05476c50(auStack_d8);
  FUN_05476c50(auStack_e0);
  FUN_05476c50(auStack_e8);
  FUN_05476c50(auStack_f0);
  FUN_05476c50(auStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

