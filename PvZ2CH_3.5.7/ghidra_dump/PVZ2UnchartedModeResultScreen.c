// Class: PVZ2UnchartedModeResultScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::GetLayoutName() */

void __thiscall PVZ2UnchartedModeResultScreen::GetLayoutName(PVZ2UnchartedModeResultScreen *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ2UnchartedModeResultScreen");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::OnCreate() */

void __thiscall PVZ2UnchartedModeResultScreen::OnCreate(PVZ2UnchartedModeResultScreen *this)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar2 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar2 + 0x50)) / 2;
  std::string::string(asStack_10,"Plants_Back");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x158))(plVar3,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_0");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar3 + 0x158))(plVar3,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PVZ2UnchartedModeResultScreen::OnClose() */

void __thiscall PVZ2UnchartedModeResultScreen::OnClose(PVZ2UnchartedModeResultScreen *this)

{
  UI::Dialog::OnClose((Dialog *)this);
  std::
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  ::clear((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
           *)(this + 0x2b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::PVZ2UnchartedModeResultScreen() */

void __thiscall
PVZ2UnchartedModeResultScreen::PVZ2UnchartedModeResultScreen(PVZ2UnchartedModeResultScreen *this)

{
  undefined *__n;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PVZ2UnchartedModeResultScreen>::UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeResultScreen> *)this);
  __n = &DAT_069d0310;
  *(undefined ***)this = &PTR_GetClass_069cffc0;
  *(undefined **)(this + 0xd8) = &DAT_069d0310;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x138),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x168),(DummyInit *)0x0);
  FUN_05476574(this + 0x198);
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  FUN_05476574(this + 0x1b0);
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Set8BytesTo0((string *)(this + 0x220));
  UnchartedModeEndOfPlayData::UnchartedModeEndOfPlayData
            ((UnchartedModeEndOfPlayData *)(this + 0x228));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b0));
  *(undefined4 *)(this + 0x2cc) = 0xffffffff;
  *(undefined4 *)(this + 0x2c8) = 0xbf800000;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x138),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x168),(Delegate2 *)aDStack_38);
  FUN_054772c4(this + 0x198,&DAT_056f11a8);
  *(undefined4 *)(this + 0x134) = 0;
  FUN_054772c4(this + 0x1b0,&DAT_056f11a8);
  std::vector<std::wstring,std::allocator<std::wstring>>::clear
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x1e8))
  ;
  FUN_054772c4(this + 0x1c8,&DAT_056f11a8);
  std::string::append((string *)(this + 0x220),"",(size_t)__n);
  *(undefined4 *)(this + 0x2a8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeResultScreen::PlaySeedAnim(int) */

void __thiscall
PVZ2UnchartedModeResultScreen::PlaySeedAnim(PVZ2UnchartedModeResultScreen *this,int param_1)

{
  int iVar1;
  tuple *ptVar2;
  undefined8 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  SeedPacketPlantWidget *this_00;
  
  if (-1 < param_1) {
    uVar6 = *(undefined8 *)(this + 0x2b0);
    iVar1 = FUN_04df6ea0(uVar6,*(undefined8 *)(this + 0x2b8));
    if (param_1 < iVar1) {
      ptVar2 = (tuple *)FUN_04df6eac(uVar6,(long)param_1);
      puVar3 = (undefined8 *)std::get<0ul,SeedPacketPlantWidget*,int>(ptVar2);
      this_00 = (SeedPacketPlantWidget *)*puVar3;
      SeedPacketPlantWidget::PlayEffects(this_00);
      iVar1 = SeedPacketPlantWidget::GetNum(this_00);
      ptVar2 = (tuple *)FUN_04df6eac(*(undefined8 *)(this + 0x2b0),(long)param_1);
      piVar4 = (int *)std::
                      get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                                (ptVar2);
      SeedPacketPlantWidget::SetNum(this_00,iVar1 + *piVar4,true);
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_Endless_Plant_Inc");
      return;
    }
  }
  return;
}


/* PVZ2UnchartedModeResultScreen::Update() */

void __thiscall PVZ2UnchartedModeResultScreen::Update(PVZ2UnchartedModeResultScreen *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x2c8);
  if ((0.0 < fVar4) && (fVar3 = (float)PVZ_T(), fVar4 < fVar3)) {
    iVar1 = *(int *)(this + 0x2cc) + 1;
    *(int *)(this + 0x2cc) = iVar1;
    if ((-1 < iVar1) &&
       (iVar2 = FUN_04df6ea0(*(undefined8 *)(this + 0x2b0),*(undefined8 *)(this + 0x2b8)),
       iVar1 < iVar2)) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x2c8) = fVar4 + 0.5;
      PlaySeedAnim(this,*(int *)(this + 0x2cc));
      return;
    }
    *(undefined4 *)(this + 0x2cc) = 0xffffffff;
    *(undefined4 *)(this + 0x2c8) = 0xbf800000;
  }
  return;
}


/* PVZ2UnchartedModeResultScreen::StartSeedPlantsAnim() */

void __thiscall
PVZ2UnchartedModeResultScreen::StartSeedPlantsAnim(PVZ2UnchartedModeResultScreen *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = std::
          vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
          ::empty((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                   *)(this + 0x2b0));
  if (cVar1 != '\0') {
    return;
  }
  *(undefined4 *)(this + 0x2cc) = 0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x2c8) = fVar2 + 0.5;
  PlaySeedAnim(this,*(int *)(this + 0x2cc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::ShowUnlockPlantScreen() */

void __thiscall
PVZ2UnchartedModeResultScreen::ShowUnlockPlantScreen(PVZ2UnchartedModeResultScreen *this)

{
  PVZ2UIAwardScreen *this_00;
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVZ2UIAwardScreen *)FUN_04df6e84(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  PVZ2UIAwardScreen::ShowAwardScreen(this_00);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  PVZ2UIAwardScreen::AddPlantReward(this_00,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  PVZ2UIAwardScreen::SetBackgroundType(this_00,3);
  Sexy::Delegate0::Delegate0(aDStack_38,(Delegate0 *)(this + 0x138));
  TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
  PVZ2UIAwardScreen::Start(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeResultScreen::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeResultScreen::ButtonDepress(PVZ2UnchartedModeResultScreen *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0x3e9) {
    if (param_1 == 0x3ea) {
      iVar2 = FUN_04df6e68(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x180));
      if (iVar2 == 0) {
        return;
      }
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x168));
      return;
    }
    if (param_1 != 1000) {
      return;
    }
    cVar1 = FUN_0547419c(this + 0x220);
    if (cVar1 == '\0') {
      ShowUnlockPlantScreen(this);
      return;
    }
  }
  iVar2 = FUN_04df6e68(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x150));
  if (iVar2 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x138));
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeResultScreen::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeResultScreen::ButtonDepress(PVZ2UnchartedModeResultScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::FillPlantAddNumList(std::vector<UnchartedModePlantNumData,
   std::allocator<UnchartedModePlantNumData> >) */

void PVZ2UnchartedModeResultScreen::FillPlantAddNumList
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  UnchartedModeBoardRecord *this;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  this = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
  uVar7 = 0;
  while( true ) {
    uVar6 = *param_3;
    uVar5 = FUN_04df6ed4(uVar6,param_3[1]);
    if (uVar5 <= uVar7) break;
    piVar3 = (int *)FUN_04df6ee8(uVar6,uVar7);
    iVar1 = *piVar3;
    iVar2 = UnchartedModeBoardRecord::GetPlantNum(this,iVar1);
    lVar4 = FUN_04df6ee8(*param_3,uVar7);
    iVar2 = iVar2 + *(int *)(lVar4 + 4);
    UnchartedModeBoardRecord::SetPlantNum(this,iVar1,iVar2);
    UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,iVar1,iVar2);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::push_back
              ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
               param_1,aUStack_10);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PVZ2UnchartedModeResultScreen::~PVZ2UnchartedModeResultScreen() */

void __thiscall
PVZ2UnchartedModeResultScreen::~PVZ2UnchartedModeResultScreen(PVZ2UnchartedModeResultScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_069cffc0;
  *(undefined **)(this + 0xd8) = &DAT_069d0310;
  std::
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  ::~vector((vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
             *)(this + 0x2b0));
  UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData
            ((UnchartedModeEndOfPlayData *)(this + 0x228));
  std::string::~string((string *)(this + 0x220));
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x1e8));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x1d0));
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x198);
  UISingletonDialog<PVZ2UnchartedModeResultScreen>::~UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeResultScreen> *)this);
  return;
}


/* PVZ2UnchartedModeResultScreen::~PVZ2UnchartedModeResultScreen() */

void __thiscall
PVZ2UnchartedModeResultScreen::~PVZ2UnchartedModeResultScreen(PVZ2UnchartedModeResultScreen *this)

{
  ~PVZ2UnchartedModeResultScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeResultScreen::InitView(PVZ2UnchartedModeResultType) */

void __thiscall
PVZ2UnchartedModeResultScreen::InitView(PVZ2UnchartedModeResultScreen *this,int param_2)

{
  long lVar1;
  vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
  *this_00;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  PVZ2UIButton *this_01;
  UIWidgetAnim *pUVar16;
  UIWidgetAnim *pUVar17;
  char *pcVar18;
  OakArrowUI *this_02;
  BoardHeroPlantManager *this_03;
  undefined8 uVar19;
  int *piVar20;
  ulong uVar21;
  TGALogMgr *pTVar22;
  UnchartedModeBoardRecord *pUVar23;
  undefined4 *puVar24;
  long lVar25;
  LevelModule *pLVar26;
  HeroPlantFramework *this_04;
  RtObject *this_05;
  SeedBankProperties *pSVar27;
  undefined8 uVar28;
  SeedPacketPlantWidget *this_06;
  PopAnimRig *pPVar29;
  ulong *puVar30;
  CommonUIManager *pCVar31;
  NameMapperBase *this_07;
  LotteryResultProgressBar *this_08;
  SalesProgressBar *this_09;
  undefined8 *puVar32;
  TGAUnchartedData *__n;
  undefined1 *__n_00;
  ulong uVar33;
  int iVar34;
  code *pcVar35;
  float fVar36;
  int local_530;
  int local_52c;
  int local_500;
  int local_4ec;
  SeedPacketPlantWidget *local_4e8;
  string asStack_4e0 [8];
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  string asStack_4a0 [24];
  UnchartedModeEndOfPlayData aUStack_488 [24];
  vector avStack_470 [24];
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_428;
  undefined8 local_420;
  int local_410;
  undefined8 local_408 [2];
  string asStack_3f8 [8];
  string asStack_3f0 [8];
  string asStack_3e8 [8];
  string asStack_3e0 [8];
  undefined1 auStack_3d8 [24];
  string asStack_3c0 [8];
  string asStack_3b8 [8];
  string asStack_3b0 [8];
  string asStack_3a8 [8];
  string asStack_3a0 [24];
  string asStack_388 [8];
  undefined1 auStack_380 [8];
  TGAUnchartedData *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [352];
  DummyInit aDStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_2;
  std::string::string((string *)&local_378,"Background_0");
  lVar11 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"BonusBg");
  plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"DescriptionBg");
  lVar13 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"ConfirmBtn");
  plVar14 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"BackToMapBtn");
  plVar15 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"PlayAgainBtn");
  this_01 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"UIAnim_Win");
  pUVar16 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  std::string::string((string *)&local_378,"UIAnim_Lose");
  pUVar17 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetEndPlayData();
  std::string::string((string *)&local_378,"");
  uVar5 = operator|(0x10,8);
  __n = (TGAUnchartedData *)(ulong)uVar5;
  FUN_05462618(auStack_2e8,(string *)&local_378);
  std::string::~string((string *)&local_378);
  nop();
  if (param_2 != 0) {
    if (param_2 == 1) {
      __n = (TGAUnchartedData *)asStack_4a0;
      (**(code **)(*plVar15 + 0x158))(plVar15,0);
      (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
      (**(code **)(*(long *)pUVar16 + 0x158))(pUVar16,0);
      pPVar29 = (PopAnimRig *)FUN_04df6e80(*(undefined8 *)(pUVar17 + 0xd8));
      std::string::string((string *)&local_378,"intro");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_178);
      PopAnimRig::PlayAndStop(pPVar29,(string *)&local_378,0,aDStack_178);
      std::string::~string((string *)&local_378);
      nop();
      std::string::string((string *)local_408,"[PVZ2_UNCHARTED_MODE_END_PLAY_LOSS]");
      StringHelper::ToStringValue((string *)local_408);
      FUN_054766c8(this + 0x1c8,(string *)&local_378);
      FUN_05476c50((string *)&local_378);
      std::string::~string((string *)local_408);
      nop();
    }
    goto LAB_04df7e08;
  }
  (**(code **)(*plVar15 + 0x158))(plVar15,0);
  (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
  (**(code **)(*(long *)pUVar17 + 0x158))(pUVar17,0);
  iVar6 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (iVar6 == 3) {
    (**(code **)(*plVar14 + 0x158))(plVar14,0);
    (**(code **)(*plVar15 + 0x158))(plVar15,1);
    pcVar35 = *(code **)(*(long *)this_01 + 0x158);
    bVar4 = PVZ2UnchartedModeUtils::IsLastLevel();
    (*pcVar35)(this_01,bVar4 ^ 1);
    TodStringTranslate(L"[DANGERROOM_NEXT_LEVEL]");
    PVZ2UIButton::SetLabelText(this_01,(wstring *)&local_378);
    FUN_05476c50((string *)&local_378);
  }
  pPVar29 = (PopAnimRig *)FUN_04df6e80(*(undefined8 *)(pUVar16 + 0xd8));
  std::string::string((string *)&local_378,"intro");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_178);
  PopAnimRig::PlayAndStop(pPVar29,(string *)&local_378,0,aDStack_178);
  std::string::~string((string *)&local_378);
  nop();
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_4b8,avStack_470);
  iVar6 = FUN_04df6eb4(local_4b8,local_4b0);
  iVar7 = FUN_04df6fb0(100);
  iVar8 = FUN_04df6fb0(0x1e);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_4a0);
  uVar19 = local_458;
  lVar25 = FUN_04df6eb4(local_458,local_450);
  if (lVar25 == 0) {
    local_530 = 0;
    local_52c = 0;
    bVar3 = false;
  }
  else {
    piVar20 = (int *)FUN_04df6ec8(uVar19,0);
    iVar34 = *piVar20;
    this_07 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_07,iVar34);
    if (cVar2 == '\0') {
      bVar3 = true;
      piVar20 = (int *)FUN_04df6ec8(local_458,0);
      local_52c = *piVar20;
      local_530 = piVar20[1];
      uVar19 = FUN_0546065c(auStack_2d8,local_52c);
      uVar19 = FUN_054603b8(uVar19,&DAT_05593348);
      uVar19 = FUN_0546065c(uVar19,local_530);
      FUN_054603b8(uVar19,&DAT_05594620);
    }
    else {
      iVar9 = PlantNameMapperServerID::GetInstance();
      local_530 = 0;
      NameMapperBase::GetNameForId(iVar9);
      local_52c = 0;
      bVar3 = false;
      FUN_05474278(this + 0x220,(string *)&local_378);
      std::string::~string((string *)&local_378);
      uVar19 = FUN_0546065c(auStack_2d8,iVar34);
      uVar19 = FUN_054603b8(uVar19,&DAT_05593348);
      uVar19 = FUN_0546065c(uVar19,1);
      FUN_054603b8(uVar19,&DAT_05594620);
    }
  }
  lVar25 = FUN_04df6eb4(local_440,local_438);
  if (lVar25 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_408);
    uVar33 = 0;
    while( true ) {
      uVar19 = local_440;
      uVar21 = FUN_04df6eb4(local_440,local_438);
      if (uVar21 <= uVar33) break;
      local_4c0 = 0;
      puVar30 = (ulong *)FUN_04df6ec8(uVar19,uVar33);
      local_4c8 = *puVar30;
      ProfileChangeItemAmount((int)*puVar30,*(int *)((long)puVar30 + 4),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_378);
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_408,
                 (LotteryBonus *)&local_4c8);
      uVar19 = FUN_0546065c(auStack_2d8,local_4c8 & 0xffffffff);
      uVar19 = FUN_054603b8(uVar19,&DAT_05593348);
      uVar19 = FUN_0546065c(uVar19,local_4c8._4_4_);
      FUN_054603b8(uVar19,&DAT_05594620);
      uVar33 = uVar33 + 1;
    }
    pCVar31 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_378);
    Sexy::Delegate0::Delegate0((Delegate0 *)aDStack_178,(DummyInit *)0x0);
    CommonUIManager::ShowBonus
              (pCVar31,(TGAUnchartedData *)local_408,(string *)&local_378,aDStack_178);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_378);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)local_408);
  }
  lVar25 = FUN_04df6ed4(local_428,local_420);
  if (lVar25 != 0) {
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::vector
              ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
               local_408,(vector *)&local_428);
    FillPlantAddNumList((string *)&local_378,this,(TGAUnchartedData *)local_408);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::operator=
              ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
               asStack_4a0,(vector *)&local_378);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
              ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
               &local_378);
    std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
              ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
               local_408);
  }
  iVar34 = (int)plVar12[10] - iVar7 * iVar6;
  if (bVar3) {
    local_500 = (iVar34 - iVar8 * iVar6) / 2;
    iVar9 = (*(int *)((long)plVar12 + 0x54) - iVar7) / 2;
    if (0 < iVar6) goto LAB_04df8454;
    iVar6 = 0;
LAB_04df8aa4:
    plVar14 = (long *)PVZ1ModeResultBonusWidget::CreateUIRewardFrame(local_52c,local_530,false);
    (**(code **)(*plVar14 + 0x198))(plVar14,local_500 + iVar6,iVar9,iVar7,iVar7);
    (**(code **)(*plVar12 + 0x60))(plVar12,plVar14);
    ProfileChangeItemAmount(local_52c,local_530,false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_378);
  }
  else {
    iVar9 = (*(int *)((long)plVar12 + 0x54) - iVar7) / 2;
    if (0 < iVar6) {
      local_500 = (iVar34 + (1 - iVar6) * iVar8) / 2;
LAB_04df8454:
      lVar25 = 0;
      iVar34 = local_500;
      do {
        piVar20 = (int *)FUN_04df6ec8(local_4b8,lVar25);
        plVar14 = (long *)PVZ1ModeResultBonusWidget::CreateUIRewardFrame(*piVar20,piVar20[1],false);
        (**(code **)(*plVar14 + 0x198))(plVar14,iVar34,iVar9,iVar7,iVar7);
        (**(code **)(*plVar12 + 0x60))(plVar12,plVar14);
        piVar20 = (int *)FUN_04df6ec8(local_4b8,lVar25);
        ProfileChangeItemAmount(*piVar20,piVar20[1],false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_378);
        puVar24 = (undefined4 *)FUN_04df6ec8(local_4b8,lVar25);
        uVar19 = FUN_0546065c(auStack_2d8,*puVar24);
        uVar19 = FUN_054603b8(uVar19,&DAT_05593348);
        lVar1 = lVar25 + 1;
        lVar25 = FUN_04df6ec8(local_4b8,lVar25);
        uVar19 = FUN_0546065c(uVar19,*(undefined4 *)(lVar25 + 4));
        FUN_054603b8(uVar19,&DAT_05594620);
        lVar25 = lVar1;
        iVar34 = iVar34 + iVar7 + iVar8;
      } while ((int)lVar1 < iVar6);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      if (bVar3) {
        iVar6 = iVar6 * (iVar7 + iVar8);
        goto LAB_04df8aa4;
      }
    }
  }
  std::string::string((string *)local_408,"[PVZ2_UNCHARTED_MODE_END_PLAY_SUCCESS]");
  StringHelper::ToStringValue((string *)local_408);
  FUN_054766c8(this + 0x198,(string *)&local_378);
  FUN_05476c50((string *)&local_378);
  std::string::~string((string *)local_408);
  nop();
  Sexy::Insets::Insets
            ((Insets *)&local_378,*(int *)(lVar11 + 0x48) + *(int *)(lVar13 + 0x48),
             *(int *)(lVar11 + 0x4c) + *(int *)(lVar13 + 0x4c),*(int *)(lVar13 + 0x50),
             *(int *)(lVar13 + 0x54) / 2);
  *(TGAUnchartedData **)(this + 0x1a0) = local_378;
  *(undefined8 *)(this + 0x1a8) = local_370;
  __n = local_378;
  lVar11 = FUN_04df7124(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar11 != 0) {
    pLVar26 = (LevelModule *)FUN_04df7124(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModule::GetPropsPtr(pLVar26);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_408);
    if (bVar3) {
      pLVar26 = (LevelModule *)FUN_04df7124(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      LevelModule::GetPropsPtr(pLVar26);
      this_05 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_378);
      pSVar27 = Sexy::RtObject::Cast<SeedBankProperties>(this_05);
      bVar3 = std::operator==((string *)(pSVar27 + 0x58),"UIUnchartedSeedChooser");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_378);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_408);
      if (bVar3) {
        std::string::string((string *)&local_378,"Plants_Back");
        plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
        this_00 = (vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                   *)(this + 0x2b0);
        std::string::~string((string *)&local_378);
        nop();
        local_4e8 = (SeedPacketPlantWidget *)0x0;
        Set8BytesTo0(asStack_4e0);
        local_4ec = 0;
        local_4d8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)asStack_4a0);
        local_4d0 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)asStack_4a0);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_4d8,(__normal_iterator *)&local_4d0),
              bVar3) {
          piVar20 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_4d8);
          iVar6 = *piVar20;
          uVar19 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_428);
          uVar28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_428);
          local_4c8 = FUN_04df7390(uVar19,uVar28,iVar6);
          local_378 = (TGAUnchartedData *)
                      std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_428);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_4c8,(__normal_iterator *)&local_378);
          if (bVar3) {
            lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_4c8);
            local_4ec = *(int *)(lVar11 + 4);
          }
          this_06 = ::operator_new(0x100);
          SeedPacketPlantWidget::SeedPacketPlantWidget(this_06);
          local_4e8 = this_06;
          ServerPlantID::ServerPlantID((ServerPlantID *)&local_378,iVar6);
          ServerPlantID::ToString();
          FUN_05474278(asStack_4e0,(TGAUnchartedData *)local_408);
          std::string::~string((string *)local_408);
          SeedPacketPlantWidget::SetPlantType((string *)local_4e8);
          SeedPacketPlantWidget::SetNum(local_4e8,piVar20[1] - local_4ec,false);
          (**(code **)(*plVar12 + 0x60))(plVar12,local_4e8);
          std::
          vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
          ::emplace_back<SeedPacketPlantWidget*&,int&>(this_00,&local_4e8,&local_4ec);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_4d8);
        }
        cVar2 = std::
                vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                ::empty(this_00);
        if (cVar2 == '\0') {
          iVar7 = FUN_04df6fb0(0x14);
          this_08 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ce90);
          iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_08);
          this_09 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ce90);
          uVar10 = SalesProgressBar::GetCurrentLevel(this_09);
          iVar6 = FUN_04df6ea0(*(undefined8 *)(this + 0x2b0),*(undefined8 *)(this + 0x2b8));
          iVar6 = ((int)plVar12[10] - ((iVar8 + iVar7) * iVar6 - iVar7)) / 2;
          local_4c8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this_00);
          local_408[0] = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_00);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_4c8,(__normal_iterator *)local_408),
                bVar3) {
            puVar32 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_4c8);
            local_378 = (TGAUnchartedData *)*puVar32;
            local_370 = puVar32[1];
            puVar32 = (undefined8 *)std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_378);
            local_4e8 = (SeedPacketPlantWidget *)*puVar32;
            (**(code **)(*(long *)local_4e8 + 0x198))(local_4e8,iVar6,0,iVar8,uVar10);
            iVar6 = iVar6 + iVar7 + *(int *)(local_4e8 + 0x50);
            std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                      ((move_iterator<Sexy::CharDataHashEntry*> *)&local_4c8);
          }
        }
        std::string::string((string *)&local_378,"Plants_Back");
        plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
        (**(code **)(*plVar12 + 0x158))(plVar12,1);
        std::string::~string((string *)&local_378);
        nop();
        __n = (TGAUnchartedData *)local_408;
        std::string::string((string *)&local_378,"UIText_0");
        plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_378);
        pcVar35 = *(code **)(*plVar12 + 0x158);
        bVar4 = std::
                vector<std::tuple<SeedPacketPlantWidget*,int>,std::allocator<std::tuple<SeedPacketPlantWidget*,int>>>
                ::empty(this_00);
        (*pcVar35)(plVar12,bVar4 ^ 1);
        std::string::~string((string *)&local_378);
        nop();
        StartSeedPlantsAnim(this);
        std::string::~string(asStack_4e0);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_408);
    }
  }
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::~vector
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             asStack_4a0);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_4b8);
LAB_04df7e08:
  TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)local_408);
  DString::DString((DString *)&local_378,2);
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append((string *)local_408,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  DString::DString((DString *)&local_378,local_410);
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append(asStack_3f8,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  DString::DString((DString *)&local_378,*(int *)(this + 0x2a8));
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append(asStack_3f0,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  this_02 = (OakArrowUI *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  OakArrowUI::GetArrowCount(this_02);
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetCurrentLevel();
  DString::DString((DString *)&local_378,(string *)&local_4c8);
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append(asStack_3e8,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  if (param_2 == 0) {
    pcVar18 = "1";
  }
  else {
    pcVar18 = "0";
  }
  std::string::append(asStack_3e0,pcVar18,(size_t)__n);
  FUN_05462824((string *)&local_378,auStack_2e8);
  FUN_05474278(auStack_3d8,(string *)&local_378);
  std::string::~string((string *)&local_378);
  cVar2 = PVZ2UnchartedModeUtils::IsUnchartedBirthday();
  if ((cVar2 != '\0') || (cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar2 != '\0')
     ) {
    lVar11 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    iVar6 = FUN_04df6e88(*(undefined4 *)(lVar11 + 0x198));
    DString::DString((DString *)&local_378,iVar6);
    pcVar18 = (char *)DString::c_str((DString *)&local_378);
    std::string::append(asStack_3c0,pcVar18,(size_t)__n);
    DString::~DString((DString *)&local_378);
  }
  iVar6 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  DString::DString((DString *)&local_378,iVar6);
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append(asStack_3b8,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  cVar2 = PVZ2UnchartedModeUtils::IsCurrentLevelFirstReward();
  if (cVar2 == '\0') {
    std::string::append(asStack_3b0,"0",(size_t)__n);
    iVar6 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  }
  else {
    std::string::append(asStack_3b0,"1",(size_t)__n);
    iVar6 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  }
  if (iVar6 == 3) {
    std::string::string((string *)&local_378,"");
    __n = (TGAUnchartedData *)(ulong)uVar5;
    FUN_05462618(aDStack_178,(string *)&local_378);
    std::string::~string((string *)&local_378);
    nop();
    pUVar23 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
    UnchartedModeBoardRecord::UnchartedModeBoardRecord
              ((UnchartedModeBoardRecord *)&local_378,pUVar23);
    uVar33 = 0;
    while( true ) {
      uVar19 = local_360;
      uVar21 = FUN_04df6e94(local_360,local_358);
      if (uVar21 <= uVar33) break;
      puVar24 = (undefined4 *)FUN_04df6ee0(uVar19,uVar33);
      uVar19 = FUN_0546065c(auStack_168,*puVar24);
      FUN_054603b8(uVar19,&DAT_05594620);
      uVar33 = uVar33 + 1;
    }
    FUN_05462824(asStack_4a0,aDStack_178);
    FUN_05474278(auStack_380,asStack_4a0);
    std::string::~string(asStack_4a0);
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)&local_378);
    FUN_054617bc(aDStack_178);
  }
  lVar11 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  fVar36 = (float)FUN_04df6e8c(*(undefined4 *)(lVar11 + 0x19c),*(undefined4 *)(lVar11 + 0x1a0));
  DString::DString((DString *)&local_378,fVar36);
  pcVar18 = (char *)DString::c_str((DString *)&local_378);
  std::string::append(asStack_3a0,pcVar18,(size_t)__n);
  DString::~DString((DString *)&local_378);
  this_03 = Board::FindGameSubSystem<BoardHeroPlantManager>(*(Board **)(gLawnApp + 0x9f0));
  if (this_03 == (BoardHeroPlantManager *)0x0) {
    std::string::append(asStack_3a8,"0",(size_t)__n);
    std::string::append(asStack_388,"1,-1;2,-1;3,-1",(size_t)__n);
  }
  else {
    BoardHeroPlantManager::GetHeroPlant();
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_4b8);
    if ((bVar3) &&
       (lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_4b8),
       *(long *)(lVar11 + 0xa8) != 0)) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_4b8)
      ;
      this_04 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar11 + 0xa8));
      if (this_04 != (HeroPlantFramework *)0x0) {
        HeroPlantFramework::SaveHeroPlantInfo(this_04);
      }
    }
    HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_378);
    BoardHeroPlantManager::LoadHeroPlantInfo(this_03,(HeroPlantSaveInfo *)&local_378);
    if ((int)local_370 == 0) {
      std::string::append(asStack_3a8,"0",(size_t)__n);
      std::string::append(asStack_388,"1,-1;2,-1;3,-1",(size_t)__n);
    }
    else {
      __n_00 = auStack_168;
      FUN_05462470(aDStack_178,uVar5);
      uVar33 = 0;
      while (uVar21 = FUN_04df6e94(local_368,local_360), uVar33 < uVar21) {
        uVar19 = thunk_FUN_0546069c(auStack_168,uVar33 + 1);
        uVar19 = FUN_054603b8(uVar19,&DAT_05593348);
        piVar20 = (int *)FUN_04df6ee0(local_368,uVar33);
        iVar6 = *piVar20;
        if (iVar6 == 0) {
          iVar6 = -1;
        }
        uVar19 = FUN_0546065c(uVar19,iVar6);
        FUN_054603b8(uVar19,&DAT_05594620);
        uVar33 = uVar33 + 1;
      }
      std::string::append(asStack_3a8,"1",(size_t)__n_00);
      FUN_05462824(asStack_4a0,aDStack_178);
      FUN_05474278(asStack_388,asStack_4a0);
      std::string::~string(asStack_4a0);
      FUN_054617bc(aDStack_178);
    }
    HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_378);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_4b8);
  }
  pTVar22 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)&local_378,(TGAUnchartedData *)local_408);
  TGALogMgr::LogUncharted(pTVar22,(string *)&local_378);
  TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)&local_378);
  std::string::~string((string *)&local_4c8);
  TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)local_408);
  FUN_054617bc(auStack_2e8);
  UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(aUStack_488);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

