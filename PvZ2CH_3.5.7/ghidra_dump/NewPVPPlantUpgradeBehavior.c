// Class: NewPVPPlantUpgradeBehavior


/* NewPVPPlantUpgradeBehavior::~NewPVPPlantUpgradeBehavior() */

void __thiscall
NewPVPPlantUpgradeBehavior::~NewPVPPlantUpgradeBehavior(NewPVPPlantUpgradeBehavior *this)

{
  *(undefined ***)this = &PTR_GetClass_0664f120;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664f448;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewPVPPlantUpgradeBehavior::~NewPVPPlantUpgradeBehavior() */

void __thiscall
NewPVPPlantUpgradeBehavior::~NewPVPPlantUpgradeBehavior(NewPVPPlantUpgradeBehavior *this)

{
  ~NewPVPPlantUpgradeBehavior(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPPlantUpgradeBehavior::NewPVPPlantUpgradeBehavior() */

void __thiscall
NewPVPPlantUpgradeBehavior::NewPVPPlantUpgradeBehavior(NewPVPPlantUpgradeBehavior *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0664f120;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664f448;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantUpgradeBehavior::GetNextLevel() */

void __thiscall NewPVPPlantUpgradeBehavior::GetNextLevel(NewPVPPlantUpgradeBehavior *this)

{
  long lVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  local_10 = FUN_0351d4a0(*(undefined4 *)(lVar1 + 0x1ec));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  local_c = FUN_0351d49c(*(undefined4 *)(lVar1 + 0x50));
  local_c = local_c + 1;
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar2);
}


/* NewPVPPlantUpgradeBehavior::CanUpgrade() */

bool __thiscall NewPVPPlantUpgradeBehavior::CanUpgrade(NewPVPPlantUpgradeBehavior *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  iVar1 = FUN_0351d4a0(*(undefined4 *)(lVar3 + 0x1ec));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  iVar2 = FUN_0351d49c(*(undefined4 *)(lVar3 + 0x50));
  return iVar1 != iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantUpgradeBehavior::CanAffordUpgrade() */

void __thiscall NewPVPPlantUpgradeBehavior::CanAffordUpgrade(NewPVPPlantUpgradeBehavior *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = CanUpgrade(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Plant::GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  FUN_05475d88(asStack_20,lVar5 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = NewPVPGameSubsystem::GetCurrentSun();
  iVar3 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  ServerPlantID::ServerPlantID((ServerPlantID *)aRStack_18,asStack_20);
  iVar4 = ImageLib::Image::GetWidth((Image *)aRStack_18);
  GetNextLevel(this);
  iVar3 = NewPVPMgr::GetPlantCost(iVar3,iVar4);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 & iVar3 <= iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantUpgradeBehavior::RefreshUI() */

void NewPVPPlantUpgradeBehavior::RefreshUI(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  NewPVPPlantUpgradeBehavior *in_x0;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  Image *pIVar7;
  string *extraout_x1;
  wchar16 *extraout_x1_00;
  string *extraout_x1_01;
  long *plVar8;
  LineBreakCategory *pLVar9;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined8 uVar10;
  PVZ2UIButton *this_00;
  undefined1 auVar11 [16];
  undefined4 local_34;
  undefined1 auStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18 [2];
  int local_10 [2];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xe0);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  local_18[0] = FUN_0351d4a0(*(undefined4 *)(lVar4 + 0x1ec));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  local_10[0] = FUN_0351d49c(*(undefined4 *)(lVar4 + 0x50));
  local_10[0] = local_10[0] + 1;
  puVar5 = (uint *)eastl::min_alt<int>((int *)local_18,local_10);
  uVar1 = *puVar5;
  Sexy::StrFormat("[NEW_PVP_PLANT_UPGRADE_DES_LEVEL_%d]",(Sexy *)local_18,(ulong)uVar1);
  Sexy::ToSexyString((Sexy *)local_18,extraout_x1);
  TodStringTranslate((wstring *)local_10);
  FUN_05476c50((wstring *)local_10);
  std::string::~string((string *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Plant::GetType();
  iVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  PlantType::GetCurrentLevelSkillType(iVar3,SUB41(uVar1,0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  auVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Sexy::ToSexyString((Sexy *)(auVar11._0_8_ + 0x18),auVar11._8_8_);
  TodStringTranslate((wstring *)local_10);
  FUN_05476c50((wstring *)local_10);
  if ((0 < (int)uVar1) && (*(long *)(in_x0 + 0xe8) != 0)) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    uVar6 = FUN_0351d49c(*(undefined4 *)(lVar4 + 0x50));
    Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",(wstring *)local_10,uVar6 & 0xffffffff);
    pIVar7 = (Image *)StringHelper::ToImage((string *)local_10,true);
    std::string::~string((string *)local_10);
    UIWidgetImage::SetImage(*(UIWidgetImage **)(in_x0 + 0xe8),pIVar7);
  }
  if (*(long *)(in_x0 + 0xf8) != 0) {
    PuzzleTip::SetTip(*(long *)(in_x0 + 0xf8),auStack_30);
  }
  if (*(long *)(in_x0 + 0x100) != 0) {
    cVar2 = CanUpgrade(in_x0);
    if (cVar2 == '\0') {
      uVar10 = *(undefined8 *)(in_x0 + 0x100);
      TodStringTranslate(L"[RANK_UP_MAX]");
      PuzzleTip::SetTip(uVar10,(wstring *)local_10);
      FUN_05476c50((wstring *)local_10);
    }
    else {
      PuzzleTip::SetTip(*(undefined8 *)(in_x0 + 0x100),auStack_20);
    }
  }
  if (*(long *)(in_x0 + 0x108) != 0) {
    cVar2 = CanUpgrade(in_x0);
    if (cVar2 == '\0') {
      PVZ2UIButton::SetInvisible(*(PVZ2UIButton **)(in_x0 + 0x108),true);
      (**(code **)(**(long **)(in_x0 + 0x108) + 0x188))(*(long **)(in_x0 + 0x108),1);
    }
    else {
      cVar2 = CanAffordUpgrade(in_x0);
      if (cVar2 != '\0') {
        PVZ2UIButton::SetInvisible(*(PVZ2UIButton **)(in_x0 + 0x108),false);
        plVar8 = *(long **)(in_x0 + 0x108);
      }
      else {
        PVZ2UIButton::SetInvisible(*(PVZ2UIButton **)(in_x0 + 0x108),false);
        plVar8 = *(long **)(in_x0 + 0x108);
      }
      pLVar9 = *(LineBreakCategory **)(*plVar8 + 0x188);
      (*(code *)pLVar9)(plVar8,cVar2 == '\0');
      this_00 = *(PVZ2UIButton **)(in_x0 + 0x108);
      local_34 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                           ((wchar16 *)in_x0,extraout_x1_00,pLVar9,in_x3,in_x4);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_34);
      Sexy::ToSexyString((Sexy *)local_18,extraout_x1_01);
      PVZ2UIButton::SetLabelText(this_00,(wstring *)local_10);
      FUN_05476c50((wstring *)local_10);
      std::string::~string((string *)local_18);
    }
  }
  FUN_05476c50(auStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantUpgradeBehavior::Init(Sexy::RtWeakPtr<Plant>) */

void __thiscall
NewPVPPlantUpgradeBehavior::Init(NewPVPPlantUpgradeBehavior *this,RtMixedPtrBase *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  Image *pIVar13;
  UIWidgetImage *this_01;
  UIWidgetText *pUVar14;
  undefined8 uVar15;
  PVZ2UIButton *pPVar16;
  string *extraout_x1;
  string *extraout_x1_00;
  long *plVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  wstring awStack_a8 [8];
  string asStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  undefined4 local_78 [14];
  int local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xe0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)param_2);
    uVar3 = FUN_0351e4e8(700);
    uVar4 = FUN_0351e4e8(0x104);
    uVar5 = FUN_0351e4e8(300);
    (**(code **)(*(long *)this + 0x198))(this,uVar3,uVar4,uVar4,uVar5);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_78[0] = FUN_0351d4a0(*(undefined4 *)(lVar10 + 0x1ec));
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_40[0] = FUN_0351d49c(*(undefined4 *)(lVar10 + 0x50));
    local_40[0] = local_40[0] + 1;
    puVar11 = (uint *)eastl::min_alt<int>((int *)local_78,local_40);
    uVar1 = *puVar11;
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar12 = FUN_0351d49c(*(undefined4 *)(lVar10 + 0x50));
    Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",(string *)local_40,uVar12 & 0xffffffff);
    pIVar13 = (Image *)StringHelper::ToImage((string *)local_40,true);
    std::string::~string((string *)local_40);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01,pIVar13);
    lVar10 = *(long *)this_01;
    *(UIWidgetImage **)(this + 0xe8) = this_01;
    pcVar18 = *(code **)(lVar10 + 0x1a0);
    iVar6 = FUN_0351e4e8(0x26);
    iVar7 = FUN_0351e4e8(0x19);
    iVar8 = FUN_0351e4e8(0x1d);
    Sexy::Insets::Insets((Insets *)local_40,iVar6,iVar6,iVar7,iVar8);
    (*pcVar18)(this_01,(string *)local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
    std::string::string(asStack_a0,"[");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::GetType();
    auVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    Sexy::StringToUpper((Sexy *)(auVar19._0_8_ + 8),auVar19._8_8_);
    std::operator+(asStack_a0,asStack_90);
    std::string::string(asStack_80,"]");
    std::operator+(asStack_88,asStack_80);
    Sexy::ToSexyString((Sexy *)local_78,extraout_x1);
    TodStringTranslate((wstring *)local_40);
    FUN_05476c50((string *)local_40);
    std::string::~string((string *)local_78);
    std::string::~string(asStack_80);
    nop();
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    std::string::~string(asStack_a0);
    nop();
    pUVar14 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar14,awStack_a8);
    lVar10 = *(long *)pUVar14;
    *(UIWidgetText **)(this + 0xf0) = pUVar14;
    pcVar18 = *(code **)(lVar10 + 0x1a0);
    iVar6 = FUN_0351e4e8(0x46);
    iVar7 = FUN_0351e4e8(0x18);
    iVar8 = FUN_0351e4e8(0x9c);
    iVar9 = FUN_0351e4e8(0x39);
    Sexy::Insets::Insets((Insets *)local_40,iVar6,iVar7,iVar8,iVar9);
    (*pcVar18)(pUVar14,(string *)local_40);
    plVar17 = *(long **)(this + 0xf0);
    pcVar18 = *(code **)(*plVar17 + 0x170);
    Sexy::Color::Color((Color *)local_40,1);
    (*pcVar18)(plVar17,0,(string *)local_40);
    lVar10 = *(long *)(this + 0xf0);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    FUN_0351d540(lVar10 + 0xe8,uVar15);
    FUN_0351d548(*(long *)(this + 0xf0) + 0xe0,5);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
    Sexy::StrFormat("[NEW_PVP_PLANT_UPGRADE_DES_LEVEL_%d]",(Sexy *)local_78,(ulong)uVar1);
    Sexy::ToSexyString((Sexy *)local_78,extraout_x1_00);
    TodStringTranslate((wstring *)local_40);
    FUN_05476c50((string *)local_40);
    std::string::~string((string *)local_78);
    pUVar14 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar14,(wstring *)asStack_90);
    lVar10 = *(long *)pUVar14;
    *(UIWidgetText **)(this + 0xf8) = pUVar14;
    pcVar18 = *(code **)(lVar10 + 0x1a0);
    iVar6 = FUN_0351e4e8(0x19);
    iVar7 = FUN_0351e4e8(0x5f);
    iVar8 = FUN_0351e4e8(0x8f);
    iVar9 = FUN_0351e4e8(0x1c);
    Sexy::Insets::Insets((Insets *)local_40,iVar6,iVar7,iVar8,iVar9);
    (*pcVar18)(pUVar14,(string *)local_40);
    plVar17 = *(long **)(this + 0xf8);
    pcVar18 = *(code **)(*plVar17 + 0x170);
    Sexy::Color::Color((Color *)local_40,-0xb7c200);
    (*pcVar18)(plVar17,0,(string *)local_40);
    lVar10 = *(long *)(this + 0xf8);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    FUN_0351d540(lVar10 + 0xe8,uVar15);
    FUN_0351d548(*(long *)(this + 0xf8) + 0xe0,0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::GetType();
    iVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    PlantType::GetCurrentLevelSkillType(iVar6,SUB41(uVar1,0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    auVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    Sexy::ToSexyString((Sexy *)(auVar19._0_8_ + 0x18),auVar19._8_8_);
    TodStringTranslate((wstring *)local_40);
    FUN_05476c50((string *)local_40);
    pUVar14 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar14,(wstring *)asStack_80);
    lVar10 = *(long *)pUVar14;
    *(UIWidgetText **)(this + 0x100) = pUVar14;
    pcVar18 = *(code **)(lVar10 + 0x1a0);
    iVar6 = FUN_0351e4e8(0x19);
    iVar7 = FUN_0351e4e8(0x88);
    iVar8 = FUN_0351e4e8(0xd0);
    iVar9 = FUN_0351e4e8(0x75);
    Sexy::Insets::Insets((Insets *)local_40,iVar6,iVar7,iVar8,iVar9);
    (*pcVar18)(pUVar14,(string *)local_40);
    plVar17 = *(long **)(this + 0x100);
    pcVar18 = *(code **)(*plVar17 + 0x170);
    Sexy::Color::Color((Color *)local_40,-0xb7c200);
    (*pcVar18)(plVar17,0,(string *)local_40);
    lVar10 = *(long *)(this + 0x100);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
    FUN_0351d540(lVar10 + 0xe8,uVar15);
    FUN_0351d548(*(long *)(this + 0x100) + 0xe0,0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
    FUN_05478178((Sexy *)local_78,L"[UPGRADE]",aRStack_98);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar16 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar16,100,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0x108) = pPVar16;
    FUN_05476c50((Sexy *)local_78);
    nop();
    plVar17 = *(long **)(this + 0x108);
    pcVar18 = *(code **)(*plVar17 + 0x1a0);
    iVar6 = FUN_0351e4e8(0x52);
    iVar7 = FUN_0351e4e8(0xeb);
    iVar8 = FUN_0351e4e8(0x53);
    iVar9 = FUN_0351e4e8(0x27);
    Sexy::Insets::Insets((Insets *)local_40,iVar6,iVar7,iVar8,iVar9);
    (*pcVar18)(plVar17,(string *)local_40);
    pPVar16 = *(PVZ2UIButton **)(this + 0x108);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06aa5338,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06aa4d10,2);
    PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
    RefreshUI();
    FUN_05476c50(asStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    FUN_05476c50(asStack_90);
    FUN_05476c50(awStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPPlantUpgradeBehavior::ButtonDepress(int) */

void __thiscall
NewPVPPlantUpgradeBehavior::ButtonDepress(NewPVPPlantUpgradeBehavior *this,int param_1)

{
  int iVar1;
  int iVar2;
  NewPVPMgr *this_00;
  BoardEntity *this_01;
  SharkMinion *this_02;
  
  if (param_1 != 100) {
    return;
  }
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  this_01 = (BoardEntity *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
  ;
  iVar1 = BoardEntity::CalcColumnPosition(this_01);
  this_02 = (SharkMinion *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0))
  ;
  iVar2 = SharkMinion::getRow(this_02);
  NewPVPMgr::TryUpgradePlantEffect(this_00,iVar1,iVar2);
  RefreshUI();
  return;
}


/* non-virtual thunk to NewPVPPlantUpgradeBehavior::ButtonDepress(int) */

void __thiscall
NewPVPPlantUpgradeBehavior::ButtonDepress(NewPVPPlantUpgradeBehavior *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPPlantUpgradeBehavior::Draw(Sexy::Graphics*) */

void __thiscall NewPVPPlantUpgradeBehavior::Draw(NewPVPPlantUpgradeBehavior *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4ef8);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPPlantUpgradeBehavior::Update() */

void __thiscall NewPVPPlantUpgradeBehavior::Update(NewPVPPlantUpgradeBehavior *this)

{
  char cVar1;
  RtObject *this_00;
  NewPVPSeedBankModule *this_01;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xe0));
  if (cVar1 != '\0') {
    return;
  }
  this_00 = (RtObject *)Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
  this_01 = Sexy::RtObject::Cast<NewPVPSeedBankModule>(this_00);
  NewPVPSeedBankModule::closePlantUpgradeWidget(this_01);
  return;
}

