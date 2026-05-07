// Class: LevelEditorSingleHandedSliderWidget


/* LevelEditorSingleHandedSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorSingleHandedSliderWidget::SliderVal
          (LevelEditorSingleHandedSliderWidget *this,int param_1,double param_2)

{
  if (param_1 != 3) {
    return;
  }
  *(int *)(this + 0xf0) =
       *(int *)(this + 0xe8) +
       (int)(param_2 * (double)(*(int *)(this + 0xec) - *(int *)(this + 0xe8)));
  return;
}


/* non-virtual thunk to LevelEditorSingleHandedSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorSingleHandedSliderWidget::SliderVal
          (LevelEditorSingleHandedSliderWidget *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* LevelEditorSingleHandedSliderWidget::~LevelEditorSingleHandedSliderWidget() */

void __thiscall
LevelEditorSingleHandedSliderWidget::~LevelEditorSingleHandedSliderWidget
          (LevelEditorSingleHandedSliderWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06964540;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964878;
  *(undefined **)(this + 0xe0) = &DAT_069648c0;
  *(undefined8 *)(this + 0x178) = 0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  FUN_05476c50(this + 0x140);
  std::string::~string((string *)(this + 0x138));
  LevelEditorSliderWidget::~LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  return;
}


/* LevelEditorSingleHandedSliderWidget::~LevelEditorSingleHandedSliderWidget() */

void __thiscall
LevelEditorSingleHandedSliderWidget::~LevelEditorSingleHandedSliderWidget
          (LevelEditorSingleHandedSliderWidget *this)

{
  ~LevelEditorSingleHandedSliderWidget(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedSliderWidget::LevelEditorSingleHandedSliderWidget(LevelEditorSingleHandedSeedPacket*)
    */

void __thiscall
LevelEditorSingleHandedSliderWidget::LevelEditorSingleHandedSliderWidget
          (LevelEditorSingleHandedSliderWidget *this,LevelEditorSingleHandedSeedPacket *param_1)

{
  undefined *__n;
  
  LevelEditorSliderWidget::LevelEditorSliderWidget((LevelEditorSliderWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06964540;
  __n = &DAT_069648c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964878;
  *(undefined **)(this + 0xe0) = &DAT_069648c0;
  Set8BytesTo0((string *)(this + 0x138));
  FUN_05476574(this + 0x140);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  std::string::append((string *)(this + 0x138),"",(size_t)__n);
  *(LevelEditorSingleHandedSeedPacket **)(this + 0x170) = param_1;
  *(undefined8 *)(this + 0x178) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorSingleHandedSliderWidget::ButtonDepress
          (LevelEditorSingleHandedSliderWidget *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  LevelEditorCardInfo *pLVar3;
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
      pLVar3 = (LevelEditorCardInfo *)
               PVZ1ModeNetworkMgr::GetEndPlayInfo(*(PVZ1ModeNetworkMgr **)(this + 0x168));
      LevelEditorSeedPacket::ChangeCardInfo(*(LevelEditorSeedPacket **)(this + 0x170),pLVar3);
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorSingleHandedSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorSingleHandedSliderWidget::ButtonDepress
          (LevelEditorSingleHandedSliderWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSliderWidget::SetLevelUpData(std::string, int) */

void __thiscall
LevelEditorSingleHandedSliderWidget::SetLevelUpData
          (LevelEditorSingleHandedSliderWidget *this,string *param_2,int param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined4 local_18 [2];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(**(long **)(this + 0x128) + 0x310);
  *(int *)(this + 0xf0) = param_3;
  (*pcVar2)(((double)param_3 - (double)*(int *)(this + 0xe8)) /
            ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),*(long **)(this + 0x128)
           );
  bVar1 = std::operator!=(param_2,"");
  if (bVar1) {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_18);
    thunk_FUN_05475e00(auStack_10,param_2);
    local_18[0] = 1;
    LevelEditorSeedPacket::ChangeCardInfo
              (*(LevelEditorSeedPacket **)(this + 0x168),(LevelEditorCardInfo *)local_18);
    (**(code **)(**(long **)(this + 0x178) + 0x188))(*(long **)(this + 0x178),0);
    PakRecord::~PakRecord((PakRecord *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSliderWidget::Init() */

void __thiscall LevelEditorSingleHandedSliderWidget::Init(LevelEditorSingleHandedSliderWidget *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  Image *pIVar7;
  Slider *pSVar8;
  LevelEditorSingleHandedLevelUpSeedPacket *this_00;
  PVZ2UIButton *this_01;
  undefined8 uVar9;
  long *plVar10;
  LevelEditorVaseBreakerZombieSelect *pLVar11;
  code *pcVar12;
  function<bool(Sexy::Touch_const&)> afStack_98 [32];
  string asStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85b08);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85df0);
  pSVar8 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar8,pIVar6,pIVar7,3,(SliderListener *)(this + 0xe0));
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
  this_00 = ::operator_new(0x120);
  LevelEditorSingleHandedLevelUpSeedPacket::LevelEditorSingleHandedLevelUpSeedPacket(this_00);
  *(LevelEditorSingleHandedLevelUpSeedPacket **)(this + 0x168) = this_00;
  uVar2 = FUN_04b4c0a8(0xb4);
  uVar3 = FUN_04b4c0a8(200);
  uVar4 = FUN_04b4c0a8(0x5a);
  uVar5 = FUN_04b4c0a8(0x37);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  LevelEditorSeedPacket::Init(*(LevelEditorSeedPacket **)(this + 0x168),0);
  pLVar11 = *(LevelEditorVaseBreakerZombieSelect **)(this + 0x168);
  FUN_04b4c04c(afStack_98,this);
  LevelEditorVaseBreakerZombieSelect::SetFunc(pLVar11,afStack_98);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_98);
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
  pcVar12 = *(code **)(*(long *)this_01 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar12)(this_01,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  *(PVZ2UIButton **)(this + 0x178) = this_01;
  std::string::string(asStack_78,"[CUSTOM_LEVEL_SINGLE_HANDED_LEVELUP_TITLE]");
  StringHelper::ToStringValue(asStack_78);
  FUN_054766c8(this + 0x140,aPStack_40);
  FUN_05476c50(aPStack_40);
  std::string::~string(asStack_78);
  nop();
  (**(code **)(**(long **)(this + 0x178) + 0x188))(*(long **)(this + 0x178),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSliderWidget::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorSingleHandedSliderWidget::Draw
          (LevelEditorSingleHandedSliderWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f70);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04b4c0a8(0x14);
  iVar3 = FUN_04b4c0a8(0x46);
  iVar4 = FUN_04b4c0a8(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b4c0a8(0x55);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f20);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf0));
  Sexy::ToWString(asStack_40);
  std::operator+((wstring *)(this + 0x100),(wstring *)asStack_38);
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x50);
  iVar3 = FUN_04b4c0a8(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string(asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b4c0a8(0x14);
  iVar2 = FUN_04b4c0a8(0x7d);
  iVar3 = FUN_04b4c0a8(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b4c0a8(0x113);
  iVar2 = FUN_04b4c0a8(0x7d);
  iVar3 = FUN_04b4c0a8(0x3c);
  iVar4 = FUN_04b4c0a8(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar1 = FUN_04b4c0a8(0x32);
  iVar2 = FUN_04b4c0a8(200);
  iVar3 = FUN_04b4c0a8(0x78);
  iVar4 = FUN_04b4c0a8(0x37);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0x140,aIStack_18,uVar6,aIStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

