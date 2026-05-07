// Class: UIChagreDouble


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::GetLayoutName() */

void __thiscall UIChagreDouble::GetLayoutName(UIChagreDouble *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISpringFestivalLogin");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIChagreDouble::getCurPercent() const */

undefined4 __thiscall UIChagreDouble::getCurPercent(UIChagreDouble *this)

{
  return *(undefined4 *)(this + 0x2a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::defalutUI() */

void __thiscall UIChagreDouble::defalutUI(UIChagreDouble *this)

{
  char *__s;
  UIWidgetImage *pUVar1;
  uint uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
    Sexy::StrFormat("UIImage_award%d",asStack_18,(ulong)uVar2);
    __s = (char *)FUN_0547429c(asStack_18);
    std::string::string(asStack_10,__s);
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    std::string::~string(asStack_18);
  } while (uVar2 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIChagreDouble::ButtonDepress(int) */

void __thiscall UIChagreDouble::ButtonDepress(UIChagreDouble *this,int param_1)

{
  if (param_1 == 0) {
    UISingletonDialog<UIChagreDouble>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    UISingletonDialog<UIChagreDouble>::CloseDialog();
    UIOppoNewerChargeDouble::showGemStore();
    return;
  }
  return;
}


/* non-virtual thunk to UIChagreDouble::ButtonDepress(int) */

void __thiscall UIChagreDouble::ButtonDepress(UIChagreDouble *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::UIChagreDouble() */

void __thiscall UIChagreDouble::UIChagreDouble(UIChagreDouble *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIChagreDouble>::UISingletonDialog((UISingletonDialog<UIChagreDouble> *)this);
  *(undefined ***)this = &PTR_GetClass_066c8890;
  *(undefined **)(this + 0xd8) = &DAT_066c8be0;
  ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  FUN_05478178(this + 0x228,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x230));
  FUN_05478178(this + 0x240,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x248));
  FUN_05478178(this + 600,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x260));
  FUN_05478178(this + 0x270,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x278));
  FUN_05478178(this + 0x288,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x290),1);
  Sexy::Insets::Insets((Insets *)(this + 0x2a8));
  *(undefined8 *)(this + 0x2b8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2c0) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIChagreDouble::~UIChagreDouble() */

void __thiscall UIChagreDouble::~UIChagreDouble(UIChagreDouble *this)

{
  *(undefined ***)this = &PTR_GetClass_066c8890;
  *(undefined **)(this + 0xd8) = &DAT_066c8be0;
  FUN_05476c50(this + 0x288);
  FUN_05476c50(this + 0x270);
  FUN_05476c50(this + 600);
  FUN_05476c50(this + 0x240);
  FUN_05476c50(this + 0x228);
  ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)(this + 0x138))
  ;
  UISingletonDialog<UIChagreDouble>::~UISingletonDialog((UISingletonDialog<UIChagreDouble> *)this);
  return;
}


/* UIChagreDouble::~UIChagreDouble() */

void __thiscall UIChagreDouble::~UIChagreDouble(UIChagreDouble *this)

{
  ~UIChagreDouble(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::Update() */

void __thiscall UIChagreDouble::Update(UIChagreDouble *this)

{
  UIChagreDouble *pUVar1;
  int iVar2;
  int iVar3;
  LostNetActivityConfig *this_00;
  long lVar4;
  wstring awStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  pUVar1 = this + 0x270;
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  iVar3 = ActiveItem::GetLeftTimes(aAStack_88);
  lVar4 = (long)iVar3;
  TodStringTranslate(L"[SPRING_TIME_COUNT]");
  FUN_054766c8(pUVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
  if (lVar4 < 0) {
    TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
  }
  else {
    if (lVar4 / 0x15180 != 0) {
      TodStringTranslate(L"[REMAIN_DAYS]");
      TodReplaceNumberString(awStack_a0,L"{DAYS}",(int)(lVar4 / 0x15180));
      thunk_FUN_05477668(pUVar1,(Color *)&local_98);
      FUN_05476c50((Color *)&local_98);
      FUN_05476c50(awStack_a0);
      goto LAB_0392db64;
    }
    Sexy::Color::Color((Color *)&local_98,2);
    *(undefined8 *)(this + 0x290) = local_98;
    *(undefined8 *)(this + 0x298) = uStack_90;
    iVar2 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d:%02d:%02d",(Color *)&local_98,(ulong)(uint)(iVar3 / 0xe10),
                    (ulong)(uint)(iVar2 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)(iVar3 + iVar2 * -0x3c));
  }
  FUN_054766c8(pUVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
LAB_0392db64:
  if (*(long *)(this + 0x2b8) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x2b8),pUVar1);
  }
  pUVar1 = this + 0x288;
  this_00 = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
  lVar4 = LostNetActivityConfig::GetTodaySec(this_00);
  iVar3 = (int)(lVar4 / 0x3c);
  Sexy::StrFormat(L"%02d:%02d:%02d",(Color *)&local_98,lVar4 / 0xe10 & 0xffffffff,
                  (ulong)(uint)(iVar3 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                  (ulong)(uint)((int)lVar4 + iVar3 * -0x3c));
  FUN_054766c8(pUVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
  TodStringTranslate(L"[SPRING_REFRASH_TIME]");
  thunk_FUN_05477668(pUVar1,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
  if (*(long *)(this + 0x2c0) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x2c0),pUVar1);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::loadData() */

void __thiscall UIChagreDouble::loadData(UIChagreDouble *this)

{
  char cVar1;
  int iVar2;
  WorldMap_LuaButtonsImpl *this_00;
  SporeshroomSubsystem *this_01;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x138));
    if (cVar1 != '\0') {
      this_00 = (WorldMap_LuaButtonsImpl *)
                Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
      WorldMap_LuaButtonsImpl::RegisterHandler(this_00,*(int *)(this + 0x200));
      this_01 = (SporeshroomSubsystem *)
                Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
      SporeshroomSubsystem::RecordSporeshroomLevel(this_01,*(int *)(this + 0x210));
      goto LAB_0392dd88;
    }
  }
  cVar1 = '\0';
LAB_0392dd88:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIChagreDouble::OnCreate() */

void __thiscall UIChagreDouble::OnCreate(UIChagreDouble *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Widget *pWVar13;
  UIWidgetImage *pUVar14;
  BaseTaskResource *pBVar15;
  NameMapperBase *pNVar16;
  LotteryResultProgressBar *pLVar17;
  long lVar18;
  Image *this_01;
  char *pcVar19;
  int *piVar20;
  string *psVar21;
  UIWidgetText *pUVar22;
  UIRewardFrame *pUVar23;
  SalesProgressBar *pSVar24;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  UIWidgetImage *pUVar25;
  string *extraout_x1;
  string *extraout_x1_00;
  uint uVar26;
  ulong uVar27;
  code *pcVar28;
  uint uVar29;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  RtMixedPtrBase aRStack_48 [8];
  string asStack_40 [8];
  Plant aPStack_38 [8];
  wstring awStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_20,"Background_0");
  pWVar13 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  Sexy::Insets::Insets
            ((Insets *)&local_20,*(int *)(pWVar13 + 0x48),*(int *)(pWVar13 + 0x4c),
             *(int *)(pWVar13 + 0x50),*(int *)(pWVar13 + 0x54));
  iVar6 = *(int *)(pWVar13 + 0x50);
  *(undefined8 *)(this + 0x2a8) = local_20;
  *(undefined8 *)(this + 0x2b0) = uStack_18;
  *(float *)(this + 0x2a4) = (float)iVar6 * 0.87;
  UI::Dialog::SetCenter((Dialog *)this,pWVar13,false);
  iVar2 = FUN_03925930(0x96);
  iVar6 = *(int *)(pWVar13 + 0x50);
  iVar7 = *(int *)(pWVar13 + 0x48);
  iVar3 = FUN_03925930(0x8c);
  iVar4 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,iVar7 + (iVar6 - iVar2) / 2,iVar3,iVar2,iVar4);
  *(undefined8 *)(this + 0x260) = local_20;
  *(undefined8 *)(this + 0x268) = uStack_18;
  iVar2 = FUN_03925930(0x96);
  iVar6 = *(int *)(pWVar13 + 0x50);
  iVar7 = *(int *)(pWVar13 + 0x48);
  iVar3 = FUN_03925930(0x8c);
  iVar4 = FUN_03925930(0x1a4);
  iVar5 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,(iVar7 + (iVar6 - iVar2) / 2) - iVar3,iVar4,iVar2,iVar5);
  *(undefined8 *)(this + 0x218) = local_20;
  *(undefined8 *)(this + 0x220) = uStack_18;
  iVar2 = FUN_03925930(0x96);
  iVar6 = *(int *)(pWVar13 + 0x50);
  iVar7 = *(int *)(pWVar13 + 0x48);
  iVar3 = FUN_03925930(5);
  iVar4 = FUN_03925930(0x1a4);
  iVar5 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,iVar7 + (iVar6 - iVar2) / 2 + iVar3,iVar4,iVar2,iVar5);
  *(undefined8 *)(this + 0x230) = local_20;
  *(undefined8 *)(this + 0x238) = uStack_18;
  iVar2 = FUN_03925930(0x96);
  iVar6 = *(int *)(pWVar13 + 0x50);
  iVar7 = *(int *)(pWVar13 + 0x48);
  iVar3 = FUN_03925930(0xce);
  iVar4 = FUN_03925930(0x1a4);
  iVar5 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,iVar7 + (iVar6 - iVar2) / 2 + iVar3,iVar4,iVar2,iVar5);
  *(undefined8 *)(this + 0x248) = local_20;
  *(undefined8 *)(this + 0x250) = uStack_18;
  iVar6 = FUN_03925930(0x11a);
  iVar7 = FUN_03925930(*(undefined4 *)(pWVar13 + 0x50));
  iVar2 = FUN_03925930(0x28);
  Sexy::Insets::Insets((Insets *)&local_20,*(int *)(pWVar13 + 0x48),iVar6,iVar7,iVar2);
  *(undefined8 *)(this + 0x278) = local_20;
  *(undefined8 *)(this + 0x280) = uStack_18;
  cVar1 = loadData(this);
  if (cVar1 == '\0') goto LAB_0392eb68;
  defalutUI(this);
  std::string::string((string *)&local_20,"UImage_icon");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  PuzzleTip::SetDrawJustification((PuzzleTip *)pUVar14,1);
  std::string::string(asStack_60,"");
  nop();
  pBVar15 = (BaseTaskResource *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
  iVar6 = Sexy::BaseTaskResource::GetType(pBVar15);
  pNVar16 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar16,iVar6);
  if (cVar1 == '\0') {
    pNVar16 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar16,iVar6);
    if (cVar1 != '\0') {
      iVar6 = PlantChipNameMapperServerID::GetInstance();
      goto LAB_0392f7d0;
    }
    cVar1 = FUN_0547419c(asStack_60);
    psVar21 = extraout_x1;
  }
  else {
    iVar6 = PlantNameMapperServerID::GetInstance();
LAB_0392f7d0:
    NameMapperBase::GetNameForId(iVar6);
    FUN_05474278(asStack_60,(string *)&local_20);
    std::string::~string((string *)&local_20);
    cVar1 = FUN_0547419c(asStack_60);
    psVar21 = extraout_x1_00;
  }
  if (cVar1 == '\0') {
    Sexy::StringToUpper((Sexy *)asStack_60,psVar21);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)&local_20);
    std::string::~string((string *)&local_20);
    UIWidgetImage::SetImage(pUVar14,(string *)&local_28);
    std::string::~string((string *)&local_28);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  lVar18 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  Sexy::OutputDebugStrF
            ((wchar_t *)"m_configInfo.m_firstReward.m_vecOrange.begin()->m_nMoneyAmount %d",
             (ulong)*(uint *)(lVar18 + 4));
  this_01 = (Image *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
  iVar6 = ImageLib::Image::GetWidth(this_01);
  Sexy::StrFormat("UIImage_award%d",asStack_58,1);
  pcVar19 = (char *)FUN_0547429c(asStack_58);
  std::string::string((string *)&local_28,pcVar19);
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  if (0 < iVar6) {
    (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,1);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  piVar20 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,piVar20);
  Sexy::StrFormat("UIImage_award%d",(exception_ptr *)&local_28,2);
  FUN_05474278(asStack_58,(exception_ptr *)&local_28);
  std::string::~string((string *)&local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_58);
  std::string::string((string *)&local_28,pcVar19);
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  if (1 < iVar6) {
    (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,1);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a0));
  piVar20 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,piVar20);
  Sexy::StrFormat("UIImage_award%d",(exception_ptr *)&local_28,3);
  FUN_05474278(asStack_58,(exception_ptr *)&local_28);
  std::string::~string((string *)&local_28);
  pcVar19 = (char *)FUN_0547429c(asStack_58);
  std::string::string((string *)&local_28,pcVar19);
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  if (2 < iVar6) {
    (**(code **)(*(long *)pUVar14 + 0x158))(pUVar14,1);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1d0));
  piVar20 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)&local_20,piVar20);
  pBVar15 = (BaseTaskResource *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
  Sexy::BaseTaskResource::GetType(pBVar15);
  iVar6 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar6);
  pNVar16 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetIdForName(pNVar16,asStack_50);
  psVar21 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar21);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
  if (cVar1 == '\0') {
    uVar8 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar29 = uVar8;
  }
  else {
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::OutputDebugStrF((wchar_t *)"UIChagreDouble::OnCreate %d",(ulong)*(uint *)(lVar18 + 0xd0));
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    if (*(int *)(lVar18 + 0xd0) == 4) {
      cVar1 = std::vector<stAward,std::allocator<stAward>>::empty
                        ((vector<stAward,std::allocator<stAward>> *)this_00);
      if (cVar1 == '\0') {
        lVar18 = FUN_03924b9c(*(undefined8 *)(this + 0x170),0);
        uVar29 = *(uint *)(lVar18 + 4);
        lVar18 = FUN_03924b9c(*(undefined8 *)(this + 0x1a0),0);
        uVar8 = *(uint *)(lVar18 + 4);
      }
      else {
        uVar8 = 0;
        uVar29 = uVar8;
      }
      cVar1 = std::vector<stThirdAward,std::allocator<stThirdAward>>::empty
                        ((vector<stThirdAward,std::allocator<stThirdAward>> *)(this + 0x1d0));
      if (cVar1 != '\0') goto LAB_0392f89c;
      lVar18 = FUN_03924ba4(*(undefined8 *)(this + 0x1d0),0);
      uVar26 = *(uint *)(lVar18 + 4);
      iVar6 = Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
      ChristmasChargeManager::getAvatarIdByPlantID(iVar6);
      lVar18 = FUN_03924ba4(*(undefined8 *)(this + 0x1d0),0);
      uVar27 = (ulong)*(uint *)(lVar18 + 8);
    }
    else {
      cVar1 = std::vector<stAward,std::allocator<stAward>>::empty
                        ((vector<stAward,std::allocator<stAward>> *)(this + 0x188));
      if (cVar1 == '\0') {
        lVar18 = FUN_03924b9c(*(undefined8 *)(this + 0x188),0);
        uVar29 = *(uint *)(lVar18 + 4);
        lVar18 = FUN_03924b9c(*(undefined8 *)(this + 0x1b8),0);
        uVar8 = *(uint *)(lVar18 + 4);
      }
      else {
        uVar8 = 0;
        uVar29 = uVar8;
      }
      cVar1 = std::vector<stThirdAward,std::allocator<stThirdAward>>::empty
                        ((vector<stThirdAward,std::allocator<stThirdAward>> *)(this + 0x1e8));
      if (cVar1 == '\0') {
        lVar18 = FUN_03924ba4(*(undefined8 *)(this + 0x1e8),0);
        uVar26 = *(uint *)(lVar18 + 4);
        iVar6 = Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        ChristmasChargeManager::getAvatarIdByPlantID(iVar6);
        lVar18 = FUN_03924ba4(*(undefined8 *)(this + 0x1e8),0);
        uVar27 = (ulong)*(uint *)(lVar18 + 8);
      }
      else {
LAB_0392f89c:
        uVar27 = 0;
        uVar26 = 0;
      }
    }
  }
  std::string::string((string *)&local_28,"UIImage_1");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_peice_1");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  Sexy::StrFormat("%d",asStack_40,(ulong)uVar29);
  UIWidgetText::SetString(pUVar22,asStack_40);
  pUVar23 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar23,3,asStack_50,0,0);
  pcVar28 = *(code **)(*(long *)pUVar23 + 0x198);
  uVar9 = FUN_03925930(0x1e);
  uVar10 = FUN_03925930(0xf);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pUVar23,uVar9,uVar10,uVar11,uVar12);
  lVar18 = *(long *)pUVar14;
  pUVar23[0x59] = (UIRewardFrame)0x0;
  (**(code **)(lVar18 + 0x60))(pUVar14,pUVar23);
  std::string::string((string *)&local_28,"UIImage_2");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_peice_2");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  Sexy::StrFormat("%d",(exception_ptr *)&local_28,(ulong)uVar8);
  FUN_05474278(asStack_40,(exception_ptr *)&local_28);
  std::string::~string((string *)&local_28);
  UIWidgetText::SetString(pUVar22,asStack_40);
  pUVar23 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar23,3,asStack_50,0,0);
  pcVar28 = *(code **)(*(long *)pUVar23 + 0x198);
  uVar9 = FUN_03925930(0x1e);
  uVar10 = FUN_03925930(0xf);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pUVar23,uVar9,uVar10,uVar11,uVar12);
  lVar18 = *(long *)pUVar14;
  pUVar23[0x59] = (UIRewardFrame)0x0;
  (**(code **)(lVar18 + 0x60))(pUVar14,pUVar23);
  std::string::string((string *)&local_28,"UIImage_3");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_peice_3");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  Sexy::StrFormat("%d",(exception_ptr *)&local_28,(ulong)uVar26);
  FUN_05474278(asStack_40,(exception_ptr *)&local_28);
  std::string::~string((string *)&local_28);
  UIWidgetText::SetString(pUVar22,asStack_40);
  pUVar23 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar23,3,asStack_50,0,0);
  pcVar28 = *(code **)(*(long *)pUVar23 + 0x198);
  uVar9 = FUN_03925930(0x19);
  uVar10 = FUN_03925930(0xf);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pUVar23,uVar9,uVar10,uVar11,uVar12);
  lVar18 = *(long *)pUVar14;
  pUVar23[0x59] = (UIRewardFrame)0x0;
  (**(code **)(lVar18 + 0x60))(pUVar14,pUVar23);
  std::string::string((string *)&local_28,"UIText_peice_4");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  Sexy::StrFormat("%d",(exception_ptr *)&local_28,uVar27);
  FUN_05474278(asStack_40,(exception_ptr *)&local_28);
  std::string::~string((string *)&local_28);
  UIWidgetText::SetString(pUVar22,asStack_40);
  pUVar23 = ::operator_new(0x148);
  UIRewardFrame::UIRewardFrame(pUVar23,4,asStack_50,0,0);
  pcVar28 = *(code **)(*(long *)pUVar23 + 0x198);
  iVar6 = FUN_03925930(0x19);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  uVar9 = FUN_03925930(0xf);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar24 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
  uVar11 = SalesProgressBar::GetCurrentLevel(pSVar24);
  (*pcVar28)(pUVar23,(int)((double)iVar6 + (double)iVar7 * 1.5),uVar9,uVar10,uVar11);
  lVar18 = *(long *)pUVar14;
  pUVar23[0x59] = (UIRewardFrame)0x0;
  (**(code **)(lVar18 + 0x60))(pUVar14,pUVar23);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_48);
  Plant::GetFormattedDescriptionHeader(aPStack_38,(exception_ptr *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  std::string::string((string *)&local_28,"UIText_plantDes");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  PuzzleTip::SetTip(pUVar22,aPStack_38);
  std::string::string((string *)&local_28,"UIText_ActivityTime");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  *(UIWidgetText **)(this + 0x2b8) = pUVar22;
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIText_refrashTime");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  *(UIWidgetText **)(this + 0x2c0) = pUVar22;
  std::string::~string((string *)&local_28);
  nop();
  FUN_05478178(awStack_30,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_68);
  piVar20 = (int *)FUN_03924bb0(local_20,0);
  TodReplaceNumberString(awStack_30,L"{NUMBER}",*piVar20);
  FUN_054766c8(this + 0x228,(exception_ptr *)&local_28);
  FUN_05476c50((exception_ptr *)&local_28);
  FUN_05476c50(awStack_30);
  nop();
  FUN_05478178(awStack_30,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_68);
  piVar20 = (int *)FUN_03924bb0(local_20,1);
  TodReplaceNumberString(awStack_30,L"{NUMBER}",*piVar20);
  FUN_054766c8(this + 0x240,(exception_ptr *)&local_28);
  FUN_05476c50((exception_ptr *)&local_28);
  FUN_05476c50(awStack_30);
  nop();
  FUN_05478178(awStack_30,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_68);
  piVar20 = (int *)FUN_03924bb0(local_20,2);
  TodReplaceNumberString(awStack_30,L"{NUMBER}",*piVar20);
  FUN_054766c8(this + 600,(exception_ptr *)&local_28);
  FUN_05476c50((exception_ptr *)&local_28);
  FUN_05476c50(awStack_30);
  nop();
  std::string::string((string *)&local_28,"UIText_num1");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  PuzzleTip::SetTip(pUVar22,this + 0x228);
  std::string::string((string *)&local_28,"UIText_num2");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  PuzzleTip::SetTip(pUVar22,this + 0x240);
  std::string::string((string *)&local_28,"UIText_num3");
  pUVar22 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  PuzzleTip::SetTip(pUVar22,this + 600);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  iVar6 = PlayerInfo::GetNumTodayRechargeCurrency(this_03);
  piVar20 = (int *)FUN_03924bb0(local_20,2);
  uVar9 = NEON_fminnm((float)iVar6 / (float)*piVar20,0x3f800000);
  *(undefined4 *)(this + 0x2a0) = uVar9;
  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
  cVar1 = ChristmasChargeManager::isActivitySameDay();
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x2a0) = 0;
  }
  std::string::string((string *)&local_28,"UIImage_bar");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  std::string::string((string *)&local_28,"UIImage_barBG");
  pUVar25 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_28);
  std::string::~string((string *)&local_28);
  nop();
  *(int *)(pUVar14 + 0x50) = (int)((float)*(int *)(pUVar25 + 0x50) * *(float *)(this + 0x2a0));
  FUN_05476c50(aPStack_38);
  std::string::~string(asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  std::string::~string(asStack_60);
LAB_0392eb68:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

