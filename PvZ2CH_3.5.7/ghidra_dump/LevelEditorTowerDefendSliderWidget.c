// Class: LevelEditorTowerDefendSliderWidget


/* LevelEditorTowerDefendSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorTowerDefendSliderWidget::SliderVal
          (LevelEditorTowerDefendSliderWidget *this,int param_1,double param_2)

{
  if (param_1 != 2) {
    return;
  }
  *(int *)(this + 0xf0) =
       *(int *)(this + 0xe8) +
       (int)(param_2 * (double)(*(int *)(this + 0xec) - *(int *)(this + 0xe8)));
  return;
}


/* non-virtual thunk to LevelEditorTowerDefendSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorTowerDefendSliderWidget::SliderVal
          (LevelEditorTowerDefendSliderWidget *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* LevelEditorTowerDefendSliderWidget::~LevelEditorTowerDefendSliderWidget() */

void __thiscall
LevelEditorTowerDefendSliderWidget::~LevelEditorTowerDefendSliderWidget
          (LevelEditorTowerDefendSliderWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069641a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069644d8;
  *(undefined **)(this + 0xe0) = &DAT_06964520;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  FUN_05476c50(this + 0x140);
  std::string::~string((string *)(this + 0x138));
  LevelEditorSliderWidget::~LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  return;
}


/* LevelEditorTowerDefendSliderWidget::~LevelEditorTowerDefendSliderWidget() */

void __thiscall
LevelEditorTowerDefendSliderWidget::~LevelEditorTowerDefendSliderWidget
          (LevelEditorTowerDefendSliderWidget *this)

{
  ~LevelEditorTowerDefendSliderWidget(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendSliderWidget::LevelEditorTowerDefendSliderWidget() */

void __thiscall
LevelEditorTowerDefendSliderWidget::LevelEditorTowerDefendSliderWidget
          (LevelEditorTowerDefendSliderWidget *this)

{
  undefined **__n;
  
  LevelEditorSliderWidget::LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  __n = &PTR_ButtonPress_069644d8;
  *(undefined ***)this = &PTR_GetClass_069641a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069644d8;
  *(undefined **)(this + 0xe0) = &DAT_06964520;
  Set8BytesTo0((string *)(this + 0x138));
  FUN_05476574(this + 0x140);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::string::append((string *)(this + 0x138),"",(size_t)__n);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorTowerDefendSliderWidget::ButtonDepress
          (LevelEditorTowerDefendSliderWidget *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x148));
    if (bVar2) {
      PlantWarsNetworkMgr::GetCurrentLevel();
      uVar1 = *(undefined4 *)(this + 0xf0);
      FUN_05475d88(asStack_10,asStack_18);
      std::function<void(int,std::string)>::operator()
                ((function<void(int,std::string)> *)(this + 0x148),uVar1,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorTowerDefendSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorTowerDefendSliderWidget::ButtonDepress
          (LevelEditorTowerDefendSliderWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSliderWidget::SetLevelUpData(std::string, int) */

void __thiscall
LevelEditorTowerDefendSliderWidget::SetLevelUpData
          (LevelEditorTowerDefendSliderWidget *this,string *param_2,int param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined4 local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(**(long **)(this + 0x128) + 0x310);
  *(int *)(this + 0xf0) = param_3;
  (*pcVar2)((double)param_3 / ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),
            *(long **)(this + 0x128));
  bVar1 = std::operator!=(param_2,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_18);
    thunk_FUN_05475e00(auStack_10,param_2);
    local_18[0] = 1;
    LevelEditorSeedPacket::ChangeCardInfo
              (*(LevelEditorSeedPacket **)(this + 0x168),(LevelEditorCardInfo *)local_18);
    PakRecord::~PakRecord((PakRecord *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSliderWidget::Init() */

void __thiscall LevelEditorTowerDefendSliderWidget::Init(LevelEditorTowerDefendSliderWidget *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  Image *pIVar7;
  Slider *pSVar8;
  LevelEditorTowerDefendLevelUpSeedPacket *this_00;
  PVZ2UIButton *this_01;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  string asStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85b08);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85df0);
  pSVar8 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar8,pIVar6,pIVar7,2,(SliderListener *)(this + 0xe0));
  *(Slider **)(this + 0x128) = pSVar8;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85be0);
  iVar1 = FUN_04b4c0a8(3);
  Sexy::Slider::SetFillImage(pSVar8,pIVar6,iVar1);
  (**(code **)(**(long **)(this + 0x128) + 0x310))
            ((double)*(int *)(this + 0xf0) /
             ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),
             *(long **)(this + 0x128));
  uVar2 = FUN_04b4c0a8(4);
  FUN_04b4bb50(*(long *)(this + 0x128) + 0x184,uVar2);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x128),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x128),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x128),true);
  pSVar8 = *(Slider **)(this + 0x128);
  iVar1 = FUN_04b4c0a8(2);
  Sexy::Point::Point(aPStack_40,iVar1,iVar1);
  Sexy::Slider::SetKnobShadowOffsets(pSVar8,aPStack_40);
  plVar10 = *(long **)(this + 0x128);
  uVar2 = FUN_04b4c0a8(0x32);
  uVar3 = FUN_04b4c0a8(0x78);
  uVar4 = FUN_04b4c0a8(0xe6);
  uVar5 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  this_00 = ::operator_new(0x100);
  LevelEditorTowerDefendLevelUpSeedPacket::LevelEditorTowerDefendLevelUpSeedPacket(this_00);
  *(LevelEditorTowerDefendLevelUpSeedPacket **)(this + 0x168) = this_00;
  uVar2 = FUN_04b4c0a8(0xb4);
  uVar3 = FUN_04b4c0a8(200);
  uVar4 = FUN_04b4c0a8(0x5a);
  uVar5 = FUN_04b4c0a8(0x37);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  LevelEditorSeedPacket::Init(*(LevelEditorSeedPacket **)(this + 0x168),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x1f,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aPStack_40)
  ;
  FUN_05476c50(asStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aPStack_40);
  uVar2 = FUN_04b4c0a8(0x78);
  uVar3 = FUN_04b4c0a8(0x113);
  uVar4 = FUN_04b4c0a8(0x32);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar2,uVar3,uVar2,uVar4);
  pcVar11 = *(code **)(*(long *)this_01 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(this_01,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  std::string::string(asStack_78,"[CUSTOM_LEVEL_TOWER_DEFEND_LEVELUP_TITLE]");
  StringHelper::ToStringValue(asStack_78);
  FUN_054766c8(this + 0x140,aPStack_40);
  FUN_05476c50(aPStack_40);
  std::string::~string(asStack_78);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

