// Class: UINewPlantView_LevelUp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::GetLayoutName() */

void __thiscall UINewPlantView_LevelUp::GetLayoutName(UINewPlantView_LevelUp *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_LevelUp");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_LevelUp::~UINewPlantView_LevelUp() */

void __thiscall UINewPlantView_LevelUp::~UINewPlantView_LevelUp(UINewPlantView_LevelUp *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a3c00;
  *(undefined ***)this = &PTR_GetClass_066a38b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  UISingletonDialog<UINewPlantView_LevelUp>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_LevelUp> *)this);
  return;
}


/* UINewPlantView_LevelUp::~UINewPlantView_LevelUp() */

void __thiscall UINewPlantView_LevelUp::~UINewPlantView_LevelUp(UINewPlantView_LevelUp *this)

{
  ~UINewPlantView_LevelUp(this);
  AK::FreeHook(this);
  return;
}


/* UINewPlantView_LevelUp::onQueuedNarrationFinished() */

void UINewPlantView_LevelUp::onQueuedNarrationFinished(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
  FUN_03813adc(lVar1 + 0x10,0x1d);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::Refresh() */

void __thiscall UINewPlantView_LevelUp::Refresh(UINewPlantView_LevelUp *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  long lVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  SeedPacketUtils *this_04;
  PacketRenderData *pPVar9;
  DeviceImage *pDVar10;
  MagentoProductProps *this_05;
  Image *pIVar11;
  PVZ2UIButton *pPVar12;
  PVZ2UIButton *pPVar13;
  PVZ2UIButton *pPVar14;
  bool bVar15;
  string *extraout_x1;
  code *pcVar16;
  RtWeakPtr aRStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  string asStack_20 [4];
  uint local_1c;
  uint local_18;
  int local_14 [3];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar6 + 8),false);
  *(int *)(this + 0x148) = iVar3;
  bVar15 = (bool)((char)iVar3 + '\x01');
  iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlantType::GetCurrentLevelSkillType(iVar4,bVar15);
  iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlantType::GetCurrentLevelSkillType(iVar4,bVar15);
  std::string::string(asStack_20,"UIImage_LeftSkill");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  UIWidgetImage::SetImage(pUVar7,(Image *)0x0);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIImage_RightSkill");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  UIWidgetImage::SetImage(pUVar7,(Image *)0x0);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_30,"UIText_LeftSkill");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  FUN_05476574(asStack_20);
  PuzzleTip::SetTip(pUVar8,asStack_20);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_RightSkill");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  FUN_05476574(asStack_20);
  PuzzleTip::SetTip(pUVar8,asStack_20);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_30);
  nop();
  bVar15 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar15) {
    std::string::string(asStack_20,"UIImage_LeftSkill");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar6 + 0x20),false);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_38,"UIText_LeftSkill");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::ToWString((string *)(lVar6 + 0x10));
    TodStringTranslate((wstring *)asStack_30);
    PuzzleTip::SetTip(pUVar8,asStack_20);
    FUN_05476c50(asStack_20);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  bVar15 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar15) {
    std::string::string(asStack_20,"UIImage_RightSkill");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar6 + 0x20),false);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_38,"UIText_RightSkill");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::ToWString((string *)(lVar6 + 0x10));
    TodStringTranslate((wstring *)asStack_30);
    PuzzleTip::SetTip(pUVar8,asStack_20);
    FUN_05476c50(asStack_20);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  this_04 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pPVar9 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPiecePacketRenderData(this_04,(string *)(lVar6 + 8));
  pDVar10 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_04,pPVar9,0,0);
  SeedPacketUtils::DrawPacketToDeviceImage(this_04,pDVar10,pPVar9,false,-1,false,false);
  std::string::string(asStack_20,"UIImage_Pieces");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  UIWidgetImage::SetImage(pUVar7,(Image *)pDVar10);
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_20);
  this_05 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  MagentoProductProps::GetCurrentLevelPriceData(this_05,iVar3,(LevelUpPriceData *)asStack_20);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar5 = PlayerInfo::GetPlantPieceCount(this_03,(string *)(lVar6 + 8),false);
  std::string::string(asStack_40,"UIText_Pieces");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  Sexy::StrFormat("%d/%d",asStack_38,(ulong)uVar5,(ulong)local_1c);
  Sexy::ToWString(asStack_38);
  PuzzleTip::SetTip(pUVar8,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  if ((int)uVar5 < (int)local_1c) {
    std::string::string(asStack_38,"UIText_Pieces");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,2);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  else {
    std::string::string(asStack_38,"UIText_Pieces");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  std::string::string(asStack_30,"UIImage_Nutrient");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_Nutrient");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  if ((int)local_18 < 1) {
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
  }
  else {
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    GetMaterialNameByPlantRare(*(int *)(lVar6 + 0xd0));
    Sexy::StringToUpper((Sexy *)asStack_40,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_38);
    pIVar11 = (Image *)StringHelper::ToImage(asStack_30,false);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    uVar5 = PlayerInfo::GetMaterialNum(this_03,asStack_40);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    Sexy::StrFormat("%d/%d",asStack_38,(ulong)uVar5,(ulong)local_18);
    Sexy::ToWString(asStack_38);
    PuzzleTip::SetTip(pUVar8,asStack_30);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    if ((int)uVar5 < (int)local_18) {
      pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
      Sexy::Color::Color((Color *)asStack_30,2);
      (*pcVar16)(pUVar8,0,asStack_30);
    }
    else {
      pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
      Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
      (*pcVar16)(pUVar8,0,asStack_30);
    }
    std::string::~string(asStack_40);
  }
  iVar4 = PlayerInfo::GetNumCoins(this_03,true);
  if (iVar4 < local_14[0]) {
    std::string::string(asStack_38,"UIText_Coin");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,2);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  else {
    std::string::string(asStack_38,"UIText_Coin");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  std::string::string(asStack_40,"UIText_Coin");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_14);
  Sexy::ToWString(asStack_38);
  PuzzleTip::SetTip(pUVar8,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_30,"mat_plant_levelup_book");
  iVar4 = PlayerInfo::GetMaterialNum(this_03,asStack_30);
  std::string::~string(asStack_30);
  nop();
  cVar1 = canPlantLevelUp((RtWeakPtr *)this_01,true,false);
  cVar2 = canPlantLevelUp((RtWeakPtr *)this_01,true,true);
  std::string::string(asStack_30,"UIButton_LevelUp");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIButton_Universal");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIButton_Book");
  pPVar14 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,1);
  }
  else {
    (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,0);
  }
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,1);
    lVar6 = *(long *)pPVar14;
  }
  else {
    (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,0);
    lVar6 = *(long *)pPVar14;
  }
  if (iVar4 < 1 || 2 < iVar3 - 1U) {
    (**(code **)(lVar6 + 0x188))(pPVar14,1);
  }
  else {
    (**(code **)(lVar6 + 0x188))(pPVar14,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::onCoinStoreClose() */

void __thiscall UINewPlantView_LevelUp::onCoinStoreClose(UINewPlantView_LevelUp *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  long lVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  SeedPacketUtils *this_04;
  PacketRenderData *pPVar9;
  DeviceImage *pDVar10;
  MagentoProductProps *this_05;
  Image *pIVar11;
  PVZ2UIButton *pPVar12;
  PVZ2UIButton *pPVar13;
  PVZ2UIButton *pPVar14;
  bool bVar15;
  string *extraout_x1;
  code *pcVar16;
  RtWeakPtr aRStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  string asStack_20 [4];
  uint uStack_1c;
  uint uStack_18;
  int aiStack_14 [3];
  long lStack_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140);
  lStack_8 = ___stack_chk_guard;
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar6 + 8),false);
  *(int *)(this + 0x148) = iVar3;
  bVar15 = (bool)((char)iVar3 + '\x01');
  iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlantType::GetCurrentLevelSkillType(iVar4,bVar15);
  iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlantType::GetCurrentLevelSkillType(iVar4,bVar15);
  std::string::string(asStack_20,"UIImage_LeftSkill");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  UIWidgetImage::SetImage(pUVar7,(Image *)0x0);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIImage_RightSkill");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  UIWidgetImage::SetImage(pUVar7,(Image *)0x0);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_30,"UIText_LeftSkill");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  FUN_05476574(asStack_20);
  PuzzleTip::SetTip(pUVar8,asStack_20);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_RightSkill");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  FUN_05476574(asStack_20);
  PuzzleTip::SetTip(pUVar8,asStack_20);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_30);
  nop();
  bVar15 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_50);
  if (bVar15) {
    std::string::string(asStack_20,"UIImage_LeftSkill");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar6 + 0x20),false);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_38,"UIText_LeftSkill");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::ToWString((string *)(lVar6 + 0x10));
    TodStringTranslate((wstring *)asStack_30);
    PuzzleTip::SetTip(pUVar8,asStack_20);
    FUN_05476c50(asStack_20);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  bVar15 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
  if (bVar15) {
    std::string::string(asStack_20,"UIImage_RightSkill");
    pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    pIVar11 = (Image *)StringHelper::ToImage((string *)(lVar6 + 0x20),false);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_38,"UIText_RightSkill");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::ToWString((string *)(lVar6 + 0x10));
    TodStringTranslate((wstring *)asStack_30);
    PuzzleTip::SetTip(pUVar8,asStack_20);
    FUN_05476c50(asStack_20);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  this_04 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pPVar9 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPiecePacketRenderData(this_04,(string *)(lVar6 + 8));
  pDVar10 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_04,pPVar9,0,0);
  SeedPacketUtils::DrawPacketToDeviceImage(this_04,pDVar10,pPVar9,false,-1,false,false);
  std::string::string(asStack_20,"UIImage_Pieces");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  UIWidgetImage::SetImage(pUVar7,(Image *)pDVar10);
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_20);
  this_05 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  MagentoProductProps::GetCurrentLevelPriceData(this_05,iVar3,(LevelUpPriceData *)asStack_20);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar5 = PlayerInfo::GetPlantPieceCount(this_03,(string *)(lVar6 + 8),false);
  std::string::string(asStack_40,"UIText_Pieces");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  Sexy::StrFormat("%d/%d",asStack_38,(ulong)uVar5,(ulong)uStack_1c);
  Sexy::ToWString(asStack_38);
  PuzzleTip::SetTip(pUVar8,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  if ((int)uVar5 < (int)uStack_1c) {
    std::string::string(asStack_38,"UIText_Pieces");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,2);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  else {
    std::string::string(asStack_38,"UIText_Pieces");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  std::string::string(asStack_30,"UIImage_Nutrient");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIText_Nutrient");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  if ((int)uStack_18 < 1) {
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
  }
  else {
    (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,1);
    (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    GetMaterialNameByPlantRare(*(int *)(lVar6 + 0xd0));
    Sexy::StringToUpper((Sexy *)asStack_40,extraout_x1);
    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_38);
    pIVar11 = (Image *)StringHelper::ToImage(asStack_30,false);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
    uVar5 = PlayerInfo::GetMaterialNum(this_03,asStack_40);
    UIWidgetImage::SetImage(pUVar7,pIVar11);
    Sexy::StrFormat("%d/%d",asStack_38,(ulong)uVar5,(ulong)uStack_18);
    Sexy::ToWString(asStack_38);
    PuzzleTip::SetTip(pUVar8,asStack_30);
    FUN_05476c50(asStack_30);
    std::string::~string(asStack_38);
    if ((int)uVar5 < (int)uStack_18) {
      pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
      Sexy::Color::Color((Color *)asStack_30,2);
      (*pcVar16)(pUVar8,0,asStack_30);
    }
    else {
      pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
      Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
      (*pcVar16)(pUVar8,0,asStack_30);
    }
    std::string::~string(asStack_40);
  }
  iVar4 = PlayerInfo::GetNumCoins(this_03,true);
  if (iVar4 < aiStack_14[0]) {
    std::string::string(asStack_38,"UIText_Coin");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,2);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  else {
    std::string::string(asStack_38,"UIText_Coin");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    pcVar16 = *(code **)(*(long *)pUVar8 + 0x170);
    Sexy::Color::Color((Color *)asStack_30,0x66,0x37,0);
    (*pcVar16)(pUVar8,0,asStack_30);
    std::string::~string(asStack_38);
    nop();
  }
  std::string::string(asStack_40,"UIText_Coin");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)aiStack_14);
  Sexy::ToWString(asStack_38);
  PuzzleTip::SetTip(pUVar8,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_30,"mat_plant_levelup_book");
  iVar4 = PlayerInfo::GetMaterialNum(this_03,asStack_30);
  std::string::~string(asStack_30);
  nop();
  cVar1 = canPlantLevelUp((RtWeakPtr *)this_01,true,false);
  cVar2 = canPlantLevelUp((RtWeakPtr *)this_01,true,true);
  std::string::string(asStack_30,"UIButton_LevelUp");
  pPVar12 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIButton_Universal");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIButton_Book");
  pPVar14 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,1);
  }
  else {
    (**(code **)(*(long *)pPVar12 + 0x188))(pPVar12,0);
  }
  if (cVar2 == '\0') {
    (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,1);
    lVar6 = *(long *)pPVar14;
  }
  else {
    (**(code **)(*(long *)pPVar13 + 0x188))(pPVar13,0);
    lVar6 = *(long *)pPVar14;
  }
  if (iVar4 < 1 || 2 < iVar3 - 1U) {
    (**(code **)(lVar6 + 0x188))(pPVar14,1);
  }
  else {
    (**(code **)(lVar6 + 0x188))(pPVar14,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::ButtonDepress(int) */

void __thiscall UINewPlantView_LevelUp::ButtonDepress(UINewPlantView_LevelUp *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  AdaptiveMessageBox *this_01;
  PlantLevelUpWithGeneralChipsHit *this_02;
  code *pcVar6;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog();
    goto LAB_03819a18;
  }
  if (param_1 == 0x6f) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) goto LAB_03819a18;
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
    TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TEXT]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar4);
    std::string::~string(asStack_50);
    nop();
    lVar5 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
    pcVar6 = ConfirmLevelUp;
  }
  else {
    if (param_1 == 0xde) {
      this_01 = (AdaptiveMessageBox *)UISingletonDialog<AdaptiveMessageBox>::ShowDialog();
      this_02 = ::operator_new(0xe8);
      PlantLevelUpWithGeneralChipsHit::PlantLevelUpWithGeneralChipsHit(this_02);
      uVar1 = FUN_03814ff8(0);
      uVar2 = FUN_03814ff8(0x1c2);
      uVar3 = FUN_03814ff8(200);
      (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar1,uVar1,uVar2,uVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_50,(RtWeakPtrBase *)(this + 0x138));
      PlantLevelUpWithGeneralChipsHit::InitView
                (this_02,(RtWeakPtr<Sexy::SoundResource> *)asStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      AdaptiveMessageBox::SetContentWidget(this_01,(Widget *)this_02);
      FUN_03814e94((function<bool(Sexy::Touch_const&)> *)aDStack_38,this,this_02);
      AdaptiveMessageBox::SetConfirmFunction
                (this_01,(function<bool(Sexy::Touch_const&)> *)aDStack_38);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      FUN_03814ef0((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      AdaptiveMessageBox::SetCloseFunction(this_01,(function<bool(Sexy::Touch_const&)> *)aDStack_38)
      ;
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      goto LAB_03819a18;
    }
    if (param_1 != 0x14d) {
      if (param_1 == 0x1bc) {
        LawnApp::ShowCoinStore(gLawnApp,0);
      }
      goto LAB_03819a18;
    }
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 == (UIMessageBox *)0x0) goto LAB_03819a18;
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TITLE]");
    TodStringTranslate(L"[PIECE_LEVEL_UP_NOTICE_TEXT]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar4);
    std::string::~string(asStack_50);
    nop();
    lVar5 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_58);
    pcVar6 = ConfirmLevelUpBook;
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,pcVar6);
  Sexy::Delegate2<UIMessageBox*,int>::
  Delegate2<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)(UIMessageBox*,int)>
            (aDStack_38,asStack_50);
  UIMessageBox::SetCallback(this_00,aDStack_38);
  FUN_05476c50(auStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(awStack_68);
LAB_03819a18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlantView_LevelUp::ButtonDepress(int) */

void __thiscall UINewPlantView_LevelUp::ButtonDepress(UINewPlantView_LevelUp *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::UINewPlantView_LevelUp() */

void __thiscall UINewPlantView_LevelUp::UINewPlantView_LevelUp(UINewPlantView_LevelUp *this)

{
  undefined *puVar1;
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
  UISingletonDialog<UINewPlantView_LevelUp>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_LevelUp> *)this);
  *(undefined ***)this = &PTR_GetClass_066a38b0;
  *(undefined **)(this + 0xd8) = &DAT_066a3c00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLevelUpSuccess);
  Sexy::Delegate0::Delegate0<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantLevelUpSuccess,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBookLevelUpSuccess);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyLevelupBook,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCoinStoreClose);
  Sexy::Delegate0::Delegate0<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CoinStoreClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::onPlantLevelUpSuccess() */

void __thiscall UINewPlantView_LevelUp::onPlantLevelUpSuccess(UINewPlantView_LevelUp *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  PlayerInfo *this_01;
  MagentoProductProps *this_02;
  long lVar4;
  NameMapperBase *this_03;
  PlantType *this_04;
  CrazyNPCManager *pCVar5;
  string asStack_78 [8];
  string asStack_70 [8];
  GachaItemInfo aGStack_68 [12];
  int local_5c;
  int local_58;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  GachaItemInfo::GachaItemInfo(aGStack_68);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar2 = MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,*(int *)(this + 0x148),(LevelUpPriceData *)aGStack_68);
  if (cVar2 != '\0') {
    if (local_58 == 2) {
      PlayerInfo::SubtractCoins(this_01,local_5c);
    }
    pLVar1 = gLawnApp;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05475d88(asStack_50,lVar4 + 0x80);
    LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,0,asStack_50,*(undefined4 *)(this + 0x148));
    std::string::~string(asStack_50);
  }
  this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = NameMapperBase::GetIdForName(this_03,(string *)(lVar4 + 0x80));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NewPlantView_PlantLevelUp,iVar3);
  iVar3 = FUN_03813ad8(*(undefined4 *)(this_01 + 0x40));
  if (iVar3 == 0x1d) {
    lVar4 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
    iVar3 = FUN_03813ae4(*(undefined4 *)(lVar4 + 0x10));
    if (iVar3 != 0x1d) {
      LawnApp::KillGameMaskUI(gLawnApp);
      pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      if (pCVar5 != (CrazyNPCManager *)0x0) {
        std::string::string(asStack_78,"TUTORIAL_LEVEL_UP_LEGEND_INTRO");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
        Sexy::Delegate0::Delegate0<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)()>
                  (aDStack_38,asStack_50);
        std::string::string(asStack_70,"");
        CrazyNPCManager::StartNarrativeID(pCVar5,asStack_78,aDStack_38,asStack_70);
        std::string::~string(asStack_70);
        nop();
        std::string::~string(asStack_78);
        nop();
      }
    }
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar4 + 8),false);
  this_04 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  lVar4 = PlantType::GetProps(this_04);
  if (iVar3 < *(int *)(lVar4 + 0x2c)) {
    Refresh(this);
  }
  else {
    UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::onBookLevelUpSuccess(bool) */

void __thiscall
UINewPlantView_LevelUp::onBookLevelUpSuccess(UINewPlantView_LevelUp *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  int iVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar3;
  NameMapperBase *this_03;
  PlantType *this_04;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog();
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_10,"mat_plant_levelup_book");
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
  std::string::string(asStack_18,"mat_plant_levelup_book");
  iVar2 = PlayerInfo::GetMaterialNum(this_02,asStack_18);
  PlayerInfo::SetMaterialNum(this_02,asStack_10,iVar2 + -1);
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_10);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  PlayerInfo::PlantStarLevelUp(this_02,(string *)(lVar3 + 0x80),false);
  pLVar1 = gLawnApp;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_10,lVar3 + 0x80);
  LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,0,asStack_10,*(undefined4 *)(this + 0x148));
  std::string::~string(asStack_10);
  this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = NameMapperBase::GetIdForName(this_03,(string *)(lVar3 + 0x80));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NewPlantView_PlantLevelUp,iVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  iVar2 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar3 + 8),false);
  this_04 = (PlantType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  lVar3 = PlantType::GetProps(this_04);
  if (iVar2 < *(int *)(lVar3 + 0x2c)) {
    Refresh(this);
  }
  else {
    UISingletonDialog<UINewPlantView_LevelUp>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::InitView(std::string const&) */

void __thiscall UINewPlantView_LevelUp::InitView(UINewPlantView_LevelUp *this,string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  ulong uVar7;
  string *psVar8;
  UIWidgetText *pUVar9;
  NewYearGoodsSelectItem *this_01;
  UIWidgetImage *pUVar10;
  PVZ2UIButton *pPVar11;
  RtWeakPtr *pRVar12;
  ulong uVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  Magento *local_8;
  
  uVar13 = 0;
  local_8 = ___stack_chk_guard;
  Magento::GetPlantLevelUp(___stack_chk_guard);
  do {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    uVar7 = FUN_03813bac(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
    if (uVar7 <= uVar13) {
LAB_0381fb3c:
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x140),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::string(asStack_30,"UIText_Title");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::ToWString(asStack_28);
      TodStringTranslate(awStack_20);
      PuzzleTip::SetTip(pUVar9,aRStack_18);
      FUN_05476c50(aRStack_18);
      FUN_05476c50(awStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)(this + 0x140));
      this_01 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
                ((PVZ2UIGameObjectCard *)this_01,aRStack_18,1,0xffffffff,0,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      NewYearGoodsSelectItem::SelectItem(this_01,false);
      PVZ2UIGameObjectCard::SetShowLock((PVZ2UIGameObjectCard *)this_01,false);
      PVZ2UIGameObjectCard::SetShowPlantPrice((PVZ2UIGameObjectCard *)this_01,false);
      uVar2 = FUN_03814ff8(0);
      uVar3 = FUN_03814ff8(0xb4);
      uVar4 = FUN_03814ff8(0xe6);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar2,uVar3,uVar4);
      FUN_03814130(this_01 + 0x150);
      std::string::string((string *)aRStack_18,"UIImage_PlantBG");
      pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aRStack_18);
      (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_01);
      std::string::~string((string *)aRStack_18);
      nop();
      std::string::string((string *)aRStack_18,"UIButton_LevelUp");
      pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)aRStack_18);
      std::string::~string((string *)aRStack_18);
      nop();
      lVar6 = ProfileUtils::Profile();
      iVar5 = FUN_03813ad8(*(undefined4 *)(lVar6 + 0x40));
      if (iVar5 == 0x1d) {
        lVar6 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
        iVar5 = FUN_03813ae4(*(undefined4 *)(lVar6 + 0x10));
        if (iVar5 != 0x1d) {
          LawnApp::KillGameMaskUI(gLawnApp);
          std::string::string((string *)awStack_20,"");
          Sexy::Insets::Insets((Insets *)aRStack_18);
          GameMaskUI::ShowMask(pPVar11,2,awStack_20,aRStack_18);
          std::string::~string((string *)awStack_20);
          nop();
        }
      }
      Refresh(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03813bb8(*(undefined8 *)(lVar6 + 0x60),uVar13);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==((string *)(lVar6 + 0x80),param_1);
    if (cVar1 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pRVar12 = (RtWeakPtr *)FUN_03813bb8(*(undefined8 *)(lVar6 + 0x60),uVar13);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x138),pRVar12);
      goto LAB_0381fb3c;
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::ConfirmLevelUp(UIMessageBox*, int) */

void __thiscall
UINewPlantView_LevelUp::ConfirmLevelUp
          (UINewPlantView_LevelUp *this,UIMessageBox *param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  int iVar2;
  NameMapperBase *this_01;
  long lVar3;
  NetworkMgr *this_02;
  long *plVar4;
  PlayerInfo *this_03;
  MagentoProductProps *this_04;
  char *pcVar5;
  TGALogMgr *pTVar6;
  size_t __n;
  GachaItemInfo aGStack_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [32];
  DString aDStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_01 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar1 = NameMapperBase::GetIdForName(this_01,(string *)(lVar3 + 0x80));
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar4 + 0x448))(plVar4,uVar1);
    this_03 = (PlayerInfo *)ProfileUtils::Profile();
    GachaItemInfo::GachaItemInfo(aGStack_a0);
    this_04 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    MagentoProductProps::GetCurrentLevelPriceData
              (this_04,*(int *)(this + 0x148),(LevelUpPriceData *)aGStack_a0);
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    thunk_FUN_05475e00(aTStack_88,lVar3 + 0x80);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    __n = 0;
    iVar2 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar3 + 0x80),false);
    DString::DString(aDStack_48,iVar2 + 1);
    pcVar5 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_80,pcVar5,__n);
    DString::~DString(aDStack_48);
    DString::DString(aDStack_48,local_9c);
    pcVar5 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_78,pcVar5,__n);
    DString::~DString(aDStack_48);
    DString::DString(aDStack_48,local_94);
    pcVar5 = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_70,pcVar5,__n);
    DString::~DString(aDStack_48);
    if (*(int *)(this + 0x148) == 3) {
      DString::DString(aDStack_48,local_98);
      pcVar5 = (char *)DString::c_str(aDStack_48);
      std::string::append(asStack_68,pcVar5,__n);
      DString::~DString(aDStack_48);
    }
    else {
      std::string::append(asStack_68,"0",__n);
    }
    pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)aDStack_48,(TGALogPurchaseData *)aTStack_88);
    TGALogMgr::LogPlantLevelup(pTVar6,3,aDStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aDStack_48);
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_LevelUp::ConfirmLevelUpBook(UIMessageBox*, int) */

void __thiscall
UINewPlantView_LevelUp::ConfirmLevelUpBook
          (UINewPlantView_LevelUp *this,UIMessageBox *param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined4 uVar1;
  int iVar2;
  NameMapperBase *this_01;
  long lVar3;
  NetworkMgr *this_02;
  long *plVar4;
  PlayerInfo *this_03;
  char *__s;
  TGALogMgr *pTVar5;
  size_t __n;
  TGAPlantWarsData aTStack_88 [8];
  string asStack_80 [56];
  DString aDStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar1 = NameMapperBase::GetIdForName(this_01,(string *)(lVar3 + 0x80));
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar4 + 0x1c0))(plVar4,uVar1);
    this_03 = (PlayerInfo *)ProfileUtils::Profile();
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    thunk_FUN_05475e00(aTStack_88,lVar3 + 0x80);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    __n = 0;
    iVar2 = PlayerInfo::GetPlantStarLevel(this_03,(string *)(lVar3 + 0x80),false);
    DString::DString(aDStack_48,iVar2);
    __s = (char *)DString::c_str(aDStack_48);
    std::string::append(asStack_80,__s,__n);
    DString::~DString(aDStack_48);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)aDStack_48,(TGALogPurchaseData *)aTStack_88);
    TGALogMgr::LogPlantLevelup(pTVar5,4,aDStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aDStack_48);
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

