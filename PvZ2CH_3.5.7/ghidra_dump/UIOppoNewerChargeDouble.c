// Class: UIOppoNewerChargeDouble


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::GetLayoutName() */

void __thiscall UIOppoNewerChargeDouble::GetLayoutName(UIOppoNewerChargeDouble *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"OppoNewerRechargePanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::DrawOverlay(Sexy::Graphics*) */

void __thiscall
UIOppoNewerChargeDouble::DrawOverlay(UIOppoNewerChargeDouble *this,Graphics *param_1)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color(aCStack_18,4);
  WriteWordInRect(param_1,this + 0x148,this + 0x134,uVar1,aCStack_18,4,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::Update() */

void __thiscall UIOppoNewerChargeDouble::Update(UIOppoNewerChargeDouble *this)

{
  int iVar1;
  LostNetActivityConfig *this_00;
  long lVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
  lVar2 = LostNetActivityConfig::GetTodaySec(this_00);
  iVar1 = (int)(lVar2 / 0x3c);
  Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,lVar2 / 0xe10 & 0xffffffff,
                  (ulong)(uint)(iVar1 + (int)((lVar2 / 0x3c) / 0x3c) * -0x3c),
                  (ulong)(uint)((int)lVar2 + iVar1 * -0x3c));
  FUN_054766c8(this + 0x148,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIOppoNewerChargeDouble::showGemStore() */

void UIOppoNewerChargeDouble::showGemStore(void)

{
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::defalutUI() */

void __thiscall UIOppoNewerChargeDouble::defalutUI(UIOppoNewerChargeDouble *this)

{
  uint uVar1;
  char *pcVar2;
  UIWidgetText *pUVar3;
  UIWidgetImage *pUVar4;
  ulong uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 6;
  do {
    Sexy::StrFormat("UIText_%d",asStack_18,uVar5);
    pcVar2 = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,pcVar2);
    pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    uVar1 = (int)uVar5 + 1;
    Sexy::StrFormat("UIImage_%d",asStack_10,uVar5);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    pcVar2 = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,pcVar2);
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    std::string::~string(asStack_18);
    uVar5 = (ulong)uVar1;
  } while (uVar1 != 9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIOppoNewerChargeDouble::ButtonDepress(int) */

void __thiscall UIOppoNewerChargeDouble::ButtonDepress(UIOppoNewerChargeDouble *this,int param_1)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    showGemStore();
  }
  UISingletonDialog<UIOppoNewerChargeDouble>::CloseDialog();
  return;
}


/* non-virtual thunk to UIOppoNewerChargeDouble::ButtonDepress(int) */

void __thiscall UIOppoNewerChargeDouble::ButtonDepress(UIOppoNewerChargeDouble *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::UIOppoNewerChargeDouble() */

void __thiscall UIOppoNewerChargeDouble::UIOppoNewerChargeDouble(UIOppoNewerChargeDouble *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIOppoNewerChargeDouble>::UISingletonDialog
            ((UISingletonDialog<UIOppoNewerChargeDouble> *)this);
  *(undefined ***)this = &PTR_GetClass_066c8c50;
  *(undefined **)(this + 0xd8) = &DAT_066c8fa0;
  Sexy::Insets::Insets((Insets *)(this + 0x134));
  FUN_05478178(this + 0x148,&DAT_056f11a8,auStack_10);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIOppoNewerChargeDouble::~UIOppoNewerChargeDouble() */

void __thiscall UIOppoNewerChargeDouble::~UIOppoNewerChargeDouble(UIOppoNewerChargeDouble *this)

{
  *(undefined ***)this = &PTR_GetClass_066c8c50;
  *(undefined **)(this + 0xd8) = &DAT_066c8fa0;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x150));
  FUN_05476c50(this + 0x148);
  UISingletonDialog<UIOppoNewerChargeDouble>::~UISingletonDialog
            ((UISingletonDialog<UIOppoNewerChargeDouble> *)this);
  return;
}


/* UIOppoNewerChargeDouble::~UIOppoNewerChargeDouble() */

void __thiscall UIOppoNewerChargeDouble::~UIOppoNewerChargeDouble(UIOppoNewerChargeDouble *this)

{
  ~UIOppoNewerChargeDouble(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOppoNewerChargeDouble::OnCreate() */

void __thiscall UIOppoNewerChargeDouble::OnCreate(UIOppoNewerChargeDouble *this)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  UIWidgetImage *pUVar15;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  OfferBundleConfig *pOVar16;
  NameMapperBase *pNVar17;
  LotteryResultProgressBar *pLVar18;
  char *pcVar19;
  UIWidgetText *pUVar20;
  ulong uVar21;
  string *psVar22;
  DaliyLoginRewardContent *pDVar23;
  SalesProgressBar *pSVar24;
  uint *puVar25;
  undefined8 uVar26;
  string *extraout_x1;
  long lVar27;
  code *pcVar28;
  string asStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  string asStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_20,"Background_0");
  lVar14 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + -0x14;
  iVar4 = FUN_03925930(*(int *)(gLawnApp + 0x724) + -0x28);
  iVar5 = FUN_03925930(0x20d);
  iVar6 = FUN_03925930(0x78);
  iVar7 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,iVar4,iVar5,iVar6,iVar7);
  *(undefined8 *)(this + 0x134) = local_20;
  *(undefined8 *)(this + 0x13c) = uStack_18;
  defalutUI(this);
  iVar4 = (int)uStack_18;
  std::string::string((string *)&local_20,"UIImage_9");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string(asStack_70,"");
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  lVar14 = FUN_03924b80(*(undefined8 *)(this_01 + 0x13d8));
  uVar8 = OfferBundleConfig::GetPlantIDByCreatedTime(pOVar16,lVar14);
  pNVar17 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar17,uVar8);
  if (cVar2 == '\0') {
    pNVar17 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar17,uVar8);
    if (cVar2 == '\0') goto LAB_0392ac2c;
    iVar5 = PlantChipNameMapperServerID::GetInstance();
  }
  else {
    iVar5 = PlantNameMapperServerID::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar5);
  FUN_05474278(asStack_70,(string *)&local_20);
  std::string::~string((string *)&local_20);
LAB_0392ac2c:
  cVar2 = FUN_0547419c(asStack_70);
  if (cVar2 == '\0') {
    Sexy::StringToUpper((Sexy *)asStack_70,extraout_x1);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)&local_20);
    std::string::~string((string *)&local_20);
    uVar26 = FUN_0547429c((string *)local_28);
    Sexy::OutputDebugStrF((wchar_t *)"UIOppoNewerChargeDouble::OnCreate, pWidgetImage: %s",uVar26);
    UIWidgetImage::SetImage(pUVar15,(string *)local_28);
    std::string::~string((string *)local_28);
  }
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::StrFormat("UIText_%d",asStack_68,1);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar20 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (pUVar20 != (UIWidgetText *)0x0) {
    std::string::string(asStack_30,"[STORE_PRODUCT_CHARGE_ACCUMULATE]");
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    uVar21 = OfferBundleConfig::GetRechargeValue(pOVar16,0);
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)&DAT_056fda40,(wchar_t *)(uVar21 & 0xffffffff),
               iVar4);
    PuzzleTip::SetTip(pUVar20,(string *)local_28);
    FUN_05476c50((string *)local_28);
    std::string::~string(asStack_30);
    nop();
  }
  Sexy::StrFormat("UIImage_%d",(string *)local_28,1);
  FUN_05474278(asStack_68,(string *)local_28);
  std::string::~string((string *)local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  lVar14 = *(long *)pUVar15;
  (**(code **)(lVar14 + 0x158))(pUVar15,1);
  iVar4 = (int)lVar14;
  pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  local_28[0] = OfferBundleConfig::GetRechargeValue(pOVar16,0);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,(int *)local_28);
  Sexy::StrFormat("UIText_%d",(string *)local_28,2);
  FUN_05474278(asStack_68,(string *)local_28);
  std::string::~string((string *)local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar20 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (pUVar20 != (UIWidgetText *)0x0) {
    std::string::string(asStack_30,"[STORE_PRODUCT_CHARGE_ACCUMULATE]");
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    uVar21 = OfferBundleConfig::GetRechargeValue(pOVar16,1);
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)&DAT_056fda40,(wchar_t *)(uVar21 & 0xffffffff),
               iVar4);
    PuzzleTip::SetTip(pUVar20,(string *)local_28);
    FUN_05476c50((string *)local_28);
    std::string::~string(asStack_30);
    nop();
  }
  Sexy::StrFormat("UIImage_%d",(string *)local_28,2);
  FUN_05474278(asStack_68,(string *)local_28);
  std::string::~string((string *)local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  lVar14 = *(long *)pUVar15;
  (**(code **)(lVar14 + 0x158))(pUVar15,1);
  iVar4 = (int)lVar14;
  pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  local_28[0] = OfferBundleConfig::GetRechargeValue(pOVar16,1);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,(int *)local_28);
  Sexy::StrFormat("UIText_%d",(string *)local_28,3);
  FUN_05474278(asStack_68,(string *)local_28);
  std::string::~string((string *)local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar20 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (pUVar20 != (UIWidgetText *)0x0) {
    std::string::string(asStack_30,"[STORE_PRODUCT_CHARGE_ACCUMULATE]");
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    uVar21 = OfferBundleConfig::GetRechargeValue(pOVar16,2);
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)&DAT_056fda40,(wchar_t *)(uVar21 & 0xffffffff),
               iVar4);
    PuzzleTip::SetTip(pUVar20,(string *)local_28);
    FUN_05476c50((string *)local_28);
    std::string::~string(asStack_30);
    nop();
  }
  Sexy::StrFormat("UIImage_%d",(string *)local_28,3);
  FUN_05474278(asStack_68,(string *)local_28);
  std::string::~string((string *)local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_68);
  std::string::string((string *)local_28,pcVar19);
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  lVar14 = *(long *)pUVar15;
  (**(code **)(lVar14 + 0x158))(pUVar15,1);
  iVar4 = (int)lVar14;
  pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  local_28[0] = OfferBundleConfig::GetRechargeValue(pOVar16,2);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,(int *)local_28);
  std::string::string((string *)local_28,"UIText_right");
  pUVar20 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (pUVar20 != (UIWidgetText *)0x0) {
    std::string::string(asStack_30,"[STORE_PRODUCT_CHARGECANAWARD]");
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    uVar21 = OfferBundleConfig::GetRechargeValue(pOVar16,2);
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)&DAT_056fda40,(wchar_t *)(uVar21 & 0xffffffff),
               iVar4);
    PuzzleTip::SetTip(pUVar20,(string *)local_28);
    FUN_05476c50((string *)local_28);
    std::string::~string(asStack_30);
    nop();
  }
  std::string::string((string *)local_28,"UIText_des");
  pUVar20 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  if (pUVar20 != (UIWidgetText *)0x0) {
    std::string::string(asStack_30,"[STORE_PRODUCT_ACTIVITY_DES]");
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    uVar21 = OfferBundleConfig::GetRechargeValue(pOVar16,2);
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_30,(string *)&DAT_056fda40,(wchar_t *)(uVar21 & 0xffffffff),
               iVar4);
    PuzzleTip::SetTip(pUVar20,(string *)local_28);
    FUN_05476c50((string *)local_28);
    std::string::~string(asStack_30);
    nop();
  }
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  pNVar17 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  local_60 = NameMapperBase::GetIdForName(pNVar17,asStack_40);
  local_58 = local_60;
  local_50 = local_60;
  psVar22 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar22);
  bVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  Sexy::OutputDebugStrF
            ((wchar_t *)"UIChagreDouble::plantType.IsValid() %d, plantID = %d",(ulong)bVar3,
             (ulong)uVar8);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar2 != '\0') {
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::OutputDebugStrF((wchar_t *)"UIChagreDouble::OnCreate %d",(ulong)*(uint *)(lVar14 + 0xd0));
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    local_5c = OfferBundleConfig::GetPlantPiecesRewardCount(pOVar16,*(int *)(lVar14 + 0xd0),0);
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    local_54 = OfferBundleConfig::GetPlantPiecesRewardCount(pOVar16,*(int *)(lVar14 + 0xd0),1);
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    local_4c = OfferBundleConfig::GetPlantPiecesRewardCount(pOVar16,*(int *)(lVar14 + 0xd0),2);
    iVar4 = Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
    local_48 = ChristmasChargeManager::getAvatarIdByPlantID(iVar4);
    pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
    local_44 = OfferBundleConfig::GetAvatarPiecesRewardCount(pOVar16);
  }
  uVar8 = 6;
  lVar14 = 0;
  std::string::string((string *)local_28,"UIImage_1");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  pDVar23 = ::operator_new(0xe0);
  DaliyLoginRewardContent::DaliyLoginRewardContent(pDVar23,(NDLoginRewardBonus *)&local_60);
  pcVar28 = *(code **)(*(long *)pDVar23 + 0x198);
  uVar9 = FUN_03925930(0x1e);
  uVar10 = FUN_03925930(0xf);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pDVar23,uVar9,uVar10,uVar11,uVar12);
  lVar27 = *(long *)pUVar15;
  pDVar23[0x59] = (DaliyLoginRewardContent)0x0;
  (**(code **)(lVar27 + 0x60))(pUVar15,pDVar23);
  std::string::string((string *)local_28,"UIImage_2");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  pDVar23 = ::operator_new(0xe0);
  DaliyLoginRewardContent::DaliyLoginRewardContent(pDVar23,(NDLoginRewardBonus *)&local_58);
  pcVar28 = *(code **)(*(long *)pDVar23 + 0x198);
  uVar9 = FUN_03925930(0x1e);
  uVar10 = FUN_03925930(0xf);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pDVar23,uVar9,uVar10,uVar11,uVar12);
  lVar27 = *(long *)pUVar15;
  pDVar23[0x59] = (DaliyLoginRewardContent)0x0;
  (**(code **)(lVar27 + 0x60))(pUVar15,pDVar23);
  std::string::string((string *)local_28,"UIImage_3");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  pDVar23 = ::operator_new(0xe0);
  DaliyLoginRewardContent::DaliyLoginRewardContent(pDVar23,(NDLoginRewardBonus *)&local_50);
  pcVar28 = *(code **)(*(long *)pDVar23 + 0x198);
  uVar9 = FUN_03925930(0x19);
  uVar10 = FUN_03925930(0xf);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pDVar23,uVar9,uVar10,uVar11,uVar12);
  lVar27 = *(long *)pUVar15;
  pDVar23[0x59] = (DaliyLoginRewardContent)0x0;
  (**(code **)(lVar27 + 0x60))(pUVar15,pDVar23);
  pDVar23 = ::operator_new(0xe0);
  DaliyLoginRewardContent::DaliyLoginRewardContent(pDVar23,(NDLoginRewardBonus *)&local_48);
  pcVar28 = *(code **)(*(long *)pDVar23 + 0x198);
  iVar4 = FUN_03925930(0x19);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  uVar9 = FUN_03925930(0xf);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pDVar23,(int)((double)iVar4 + (double)iVar5 * 1.2),uVar9,uVar10,uVar11);
  lVar27 = *(long *)pUVar15;
  pDVar23[0x59] = (DaliyLoginRewardContent)0x0;
  (**(code **)(lVar27 + 0x60))(pUVar15,pDVar23);
  uVar13 = PlayerInfo::GetNumTodayRechargeCurrency(this_01);
  Sexy::OutputDebugStrF((wchar_t *)"Oppo UI todayMoney : %d",(ulong)uVar13);
  pOVar16 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
  iVar4 = OfferBundleConfig::GetRechargeLevel(pOVar16,uVar13);
  do {
    if ((int)lVar14 < iVar4) {
      Sexy::StrFormat("UIImage_%d",asStack_30,(ulong)uVar8);
      pcVar19 = (char *)FUN_0547429c(asStack_30);
      std::string::string((string *)local_28,pcVar19);
      pUVar15 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_28);
      std::string::~string((string *)local_28);
      nop();
    }
    else {
      Sexy::StrFormat("UIText_%d",asStack_30,(ulong)uVar8);
      pcVar19 = (char *)FUN_0547429c(asStack_30);
      std::string::string((string *)local_28,pcVar19);
      pUVar15 = (UIWidgetImage *)
                UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
      std::string::~string((string *)local_28);
      nop();
      if (iVar4 == (int)lVar14) {
        puVar25 = (uint *)FUN_03924bb0(local_20,(long)iVar4);
        uVar1 = *puVar25;
        uVar21 = (ulong)uVar13;
      }
      else {
        puVar25 = (uint *)FUN_03924bb0(local_20,lVar14);
        uVar1 = *puVar25;
        uVar21 = 0;
      }
      Sexy::StrFormat("%d/%d",(string *)local_28,uVar21,(ulong)uVar1);
      FUN_05474278(asStack_30,(string *)local_28);
      std::string::~string((string *)local_28);
      UIWidgetText::SetString((UIWidgetText *)pUVar15,asStack_30);
    }
    lVar14 = lVar14 + 1;
    (**(code **)(*(long *)pUVar15 + 0x158))(pUVar15,1);
    std::string::~string(asStack_30);
    uVar8 = uVar8 + 1;
  } while (lVar14 != 3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_68);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

