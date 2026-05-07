// Class: LevelEditorStatueMazeWave


/* LevelEditorStatueMazeWave::SetConfirmCallBack(std::function<void (int, int)>) */

void __thiscall
LevelEditorStatueMazeWave::SetConfirmCallBack(LevelEditorStatueMazeWave *this,function *param_2)

{
  std::function<void(int,int)>::operator=((function<void(int,int)> *)(this + 0x148),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeWave::Reload() */

void __thiscall LevelEditorStatueMazeWave::Reload(LevelEditorStatueMazeWave *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  PVZ2UIButton *pPVar11;
  code *pcVar12;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = CustomLevelUtils::GetSetSize();
  lVar9 = 0;
  do {
    puVar5 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0xe8),lVar9);
    (**(code **)(*(long *)this + 0x68))(this,*puVar5);
    puVar5 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x100),lVar9);
    (**(code **)(*(long *)this + 0x68))(this,*puVar5);
    lVar1 = lVar9 + 1;
    puVar5 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x118),lVar9);
    (**(code **)(*(long *)this + 0x68))(this,*puVar5);
    lVar9 = lVar1;
  } while (lVar1 != 8);
  uVar10 = 0;
  do {
    while( true ) {
      iVar8 = (int)uVar10;
      if (iVar8 < iVar2) break;
      puVar5 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0xe8),uVar10);
      pPVar11 = (PVZ2UIButton *)*puVar5;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b856f0,2);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b856f0,2);
      PVZ2UIButton::SetDialogStates(pPVar11,aPStack_78,aPStack_40);
      iVar3 = FUN_04b334ec(0x3c);
      uVar10 = uVar10 + 1;
      uVar4 = FUN_04b334ec(100);
      (**(code **)(*(long *)pPVar11 + 0x198))(pPVar11,0,iVar3 * iVar8,uVar4,iVar3);
      PVZ2UIButton::ClearButton(pPVar11);
      pcVar12 = *(code **)(*(long *)pPVar11 + 800);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      (*pcVar12)(pPVar11,uVar6);
      (**(code **)(*(long *)this + 0x60))(this,pPVar11);
      if (uVar10 == 8) goto LAB_04b34d3c;
    }
    puVar5 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0xe8),uVar10);
    pPVar11 = (PVZ2UIButton *)*puVar5;
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b859c0,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
    PVZ2UIButton::SetDialogStates(pPVar11,aPStack_78,aPStack_40);
    iVar3 = FUN_04b334ec(0x3c);
    uVar4 = FUN_04b334ec(100);
    (**(code **)(*(long *)pPVar11 + 0x198))(pPVar11,0,iVar3 * iVar8,uVar4,iVar3);
    PVZ2UIButton::ClearButton(pPVar11);
    if (iVar8 == 0) {
      FUN_05478178(aPStack_40,&DAT_05740150,aPStack_78);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      PVZ2UIButton::AddText(pPVar11,aPStack_40,uVar6,uVar10 & 0xffffffff);
      FUN_05476c50(aPStack_40);
      nop();
LAB_04b34c10:
      if (iVar8 == 5) {
        puVar7 = &DAT_05740218;
        goto LAB_04b34dcc;
      }
      if (iVar8 == 6) {
        puVar7 = &DAT_05740240;
        goto LAB_04b34dcc;
      }
      if (iVar8 == 7) {
        puVar7 = &DAT_05740268;
        goto LAB_04b34dcc;
      }
    }
    else {
      if (iVar8 == 1) {
        puVar7 = &DAT_05740178;
      }
      else if (iVar8 == 2) {
        puVar7 = &DAT_057401a0;
      }
      else if (iVar8 == 3) {
        puVar7 = &DAT_057401c8;
      }
      else {
        if (iVar8 != 4) goto LAB_04b34c10;
        puVar7 = &DAT_057401f0;
      }
LAB_04b34dcc:
      FUN_05478178(aPStack_40,puVar7,aPStack_78);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      PVZ2UIButton::AddText(pPVar11,aPStack_40,uVar6,0);
      FUN_05476c50(aPStack_40);
      nop();
    }
    uVar10 = uVar10 + 1;
    pcVar12 = *(code **)(*(long *)pPVar11 + 800);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar12)(pPVar11,uVar6);
    (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  } while (uVar10 != 8);
LAB_04b34d3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStatueMazeWave::LevelEditorStatueMazeWave() */

void __thiscall
LevelEditorStatueMazeWave::LevelEditorStatueMazeWave(LevelEditorStatueMazeWave *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0695c5e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c908;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x148));
  return;
}


/* LevelEditorStatueMazeWave::~LevelEditorStatueMazeWave() */

void __thiscall
LevelEditorStatueMazeWave::~LevelEditorStatueMazeWave(LevelEditorStatueMazeWave *this)

{
  *(undefined ***)this = &PTR_GetClass_0695c5e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c908;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x148));
  std::vector<StatueMazeData*,std::allocator<StatueMazeData*>>::~vector
            ((vector<StatueMazeData*,std::allocator<StatueMazeData*>> *)(this + 0x130));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x118));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x100));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorStatueMazeWave::~LevelEditorStatueMazeWave() */

void __thiscall
LevelEditorStatueMazeWave::~LevelEditorStatueMazeWave(LevelEditorStatueMazeWave *this)

{
  ~LevelEditorStatueMazeWave(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeWave::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeWave::ButtonDepress(LevelEditorStatueMazeWave *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  StatueMazeSet *pSVar8;
  long lVar9;
  LevelEditorStatueMazeSliderWidget *this_00;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined1 auVar16 [16];
  LevelEditorStatueMazeWave *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  LevelEditorStatueMazeWave *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  int local_58;
  undefined4 uStack_54;
  function<bool(Sexy::Touch_const&)> afStack_50 [32];
  int local_30;
  float local_2c;
  int local_28;
  undefined4 local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 - 800U < 100) goto LAB_04b4296c;
  if (param_1 < 0x385) {
    if (param_1 < 800) {
      iVar3 = CustomLevelUtils::GetSetSize();
      if (iVar3 < param_1 + -699) {
        uVar4 = CustomLevelUtils::GetSetSize();
        *(undefined4 *)(this + 0xe0) = uVar4;
        CustomLevelUtils::AddSet(2,1,3.0,3.0);
        std::vector<bool,std::allocator<bool>>::vector
                  ((vector<bool,std::allocator<bool>> *)&local_30);
        std::vector<bool,std::allocator<bool>>::push_back
                  ((vector<bool,std::allocator<bool>> *)&local_30,true);
        std::vector<bool,std::allocator<bool>>::push_back
                  ((vector<bool,std::allocator<bool>> *)&local_30,false);
        local_c0 = std::vector<bool,std::allocator<bool>>::begin();
        local_b0 = std::vector<bool,std::allocator<bool>>::end();
        std::random_shuffle<std::_Bit_iterator>
                  (local_c0._0_8_,local_c0._8_8_,local_b0._0_8_,local_b0._8_8_);
        auVar16 = std::vector<bool,std::allocator<bool>>::begin();
        local_80._8_8_ = auVar16._8_8_;
        local_68 = FUN_04b2dd1c(auVar16._0_8_,local_80._8_8_ & 0xffffffff);
        bVar2 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_68);
        CustomLevelUtils::AddSetMatrix(0,bVar2);
        local_a0 = std::vector<bool,std::allocator<bool>>::begin();
        local_90 = std::vector<bool,std::allocator<bool>>::end();
        std::random_shuffle<std::_Bit_iterator>
                  (local_a0._0_8_,local_a0._8_8_,local_90._0_8_,local_90._8_8_);
        local_80 = std::vector<bool,std::allocator<bool>>::begin();
        auVar16 = FUN_04b2dd1c(local_80._0_8_,local_80._8_8_ & 0xffffffff);
        local_68 = auVar16;
        bVar2 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_68);
        CustomLevelUtils::AddSetMatrix(0,bVar2);
        CustomLevelUtils::SetSetRotateAndWaitTime(0,1.0,2.5);
        Reload(this);
        std::vector<bool,std::allocator<bool>>::~vector
                  ((vector<bool,std::allocator<bool>> *)&local_30);
      }
    }
  }
  else {
    iVar3 = CustomLevelUtils::GetSetSize();
    if (param_1 + -899 <= iVar3) {
      CustomLevelUtils::RemoveSet(param_1 + -900);
      *(undefined4 *)(this + 0xe0) = 0xffffffff;
      Reload(this);
      goto LAB_04b4296c;
    }
  }
  uVar1 = param_1 - 700;
  if (99 < uVar1) goto LAB_04b4296c;
  iVar3 = CustomLevelUtils::GetSetSize();
  if (iVar3 < param_1 + -699) goto LAB_04b4296c;
  *(uint *)(this + 0xe0) = uVar1;
  bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x148));
  if (bVar2) {
    piVar11 = (int *)CustomLevelUtils::GetSet(uVar1);
    std::function<void(int,int)>::operator()
              ((function<void(int,int)> *)(this + 0x148),*piVar11,*(int *)(this + 0xe0));
  }
  pSVar8 = (StatueMazeSet *)CustomLevelUtils::GetSet(uVar1);
  StatueMazeSet::StatueMazeSet((StatueMazeSet *)&local_30,pSVar8);
  iVar3 = CustomLevelUtils::GetSetMatrixSize(uVar1);
  if (iVar3 < 1) {
    if (iVar3 != 0) {
      iVar15 = 0;
      fVar14 = 1.0;
      fVar13 = 1.5;
      goto LAB_04b42a50;
    }
    iVar3 = 1;
    iVar15 = 0;
    iVar12 = 0;
  }
  else {
    lVar9 = CustomLevelUtils::GetSetMatrix(uVar1,0);
    fVar13 = *(float *)(lVar9 + 4);
    fVar14 = *(float *)(lVar9 + 8);
    if (fVar13 == 0.0) {
      fVar13 = 2.0;
    }
    if (fVar14 == 0.0) {
      iVar15 = 0;
      fVar14 = 1.0;
    }
    else {
      iVar15 = (int)fVar14 + -1;
    }
LAB_04b42a50:
    iVar3 = iVar3 + -1;
    iVar12 = (int)((fVar13 - fVar14) - 0.5);
  }
  this_00 = ::operator_new(0x1e0);
  LevelEditorStatueMazeSliderWidget::LevelEditorStatueMazeSliderWidget(this_00);
  uVar4 = FUN_04b334ec(0x96);
  uVar5 = FUN_04b334ec(0x50);
  uVar6 = FUN_04b334ec(0x28a);
  uVar7 = FUN_04b334ec(0x1e0);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar4,uVar5,uVar6,uVar7);
  TodStringTranslate(L"[SETTINGS_TITLE]");
  LevelEditorStatueMazeSliderWidget::SetTitle((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[STATUS_NUM]");
  LevelEditorStatueMazeSliderWidget::SetDescription((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[ZOMBIE_NUM]");
  LevelEditorStatueMazeSliderWidget::SetDescription1((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[SHOW_TIME]");
  LevelEditorStatueMazeSliderWidget::SetDescription2((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[TRY_TIMES]");
  LevelEditorStatueMazeSliderWidget::SetDescription3((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[ROTATION_TIMES]");
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[ROTATION_VELOCITY]");
  LevelEditorStatueMazeSliderWidget::SetDescription5((wstring *)this_00);
  FUN_05476c50(local_68);
  TodStringTranslate(L"[WAVE_SHOW_TIME]");
  LevelEditorStatueMazeSliderWidget::SetDescription6((wstring *)this_00);
  FUN_05476c50(local_68);
  FUN_04b2dd10(this_00 + 0xec);
  if (local_30 == 3) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
    if ((local_30 != 4) && (uVar4 = 0, local_30 == 5)) {
      uVar4 = 3;
    }
  }
  FUN_04b2dd10(this_00 + 0xec);
  FUN_04b2d800(this_00 + 0xf0,uVar4);
  FUN_04b2dd04(this_00 + 0xf4);
  FUN_04b2d808(this_00 + 0xf8,local_28 + -1);
  FUN_04b2dcf8(this_00 + 0xfc);
  FUN_04b2d810(this_00 + 0x100,(int)local_2c + -1);
  FUN_04b2dcec(this_00 + 0x104);
  FUN_04b2d818(this_00 + 0x108,local_24);
  FUN_04b2dce0(this_00 + 0x10c);
  FUN_04b2d820(this_00 + 0x110,iVar3);
  FUN_04b2dcd4(this_00 + 0x114);
  FUN_04b2d828(this_00 + 0x118,iVar15);
  FUN_04b2dcc8(this_00 + 0x11c);
  FUN_04b2d830(this_00 + 0x120,iVar12);
  LevelEditorStatueMazeSliderWidget::Init(this_00,uVar1);
  uVar10 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
  local_d0 = CONCAT44(uStack_6c,param_1);
  local_e0 = this;
  uStack_d8 = uVar10;
  local_80._0_8_ = this;
  local_80._8_8_ = uVar10;
  local_70 = param_1;
  FUN_04b333d4(afStack_50,&local_e0);
  LevelEditorStatueMazeSliderWidget::SetConfirmCallBack(this_00,afStack_50);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
  local_f0 = CONCAT44(uStack_54,param_1);
  local_100 = this;
  uStack_f8 = uVar10;
  local_68._0_8_ = this;
  local_68._8_8_ = uVar10;
  local_58 = param_1;
  FUN_04b332bc(afStack_50,&local_100);
  LevelEditorStatueMazeSliderWidget::SetConfirmCallBack1(this_00,afStack_50);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
  Reload(this);
  StatueMazeSet::~StatueMazeSet((StatueMazeSet *)&local_30);
LAB_04b4296c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorStatueMazeWave::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeWave::ButtonDepress(LevelEditorStatueMazeWave *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeWave::Init(std::vector<StatueMazeData*, std::allocator<StatueMazeData*> >)
    */

void __thiscall LevelEditorStatueMazeWave::Init(LevelEditorStatueMazeWave *this,vector *param_2)

{
  int iVar1;
  ButtonListener *pBVar2;
  PVZ2UIButton *pPVar3;
  int iVar4;
  undefined1 auStack_40 [8];
  PVZ2UIButton *local_38;
  PVZ2UIButton *local_30;
  PVZ2UIButton *local_28;
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  pBVar2 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  iVar4 = 700;
  std::vector<StatueMazeData*,std::allocator<StatueMazeData*>>::operator=
            ((vector<StatueMazeData*,std::allocator<StatueMazeData*>> *)(this + 0x130),param_2);
  do {
    FUN_05478178(awStack_20,&DAT_056f11a8,&local_28);
    Sexy::Color::Color(aCStack_18,1);
    pPVar3 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar3,iVar4,pBVar2,awStack_20,aCStack_18);
    local_38 = pPVar3;
    FUN_05476c50(awStack_20);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0xe8),&local_38);
    FUN_05478178(awStack_20,&DAT_056f11a8,&local_28);
    Sexy::Color::Color(aCStack_18,1);
    pPVar3 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar3,iVar4 + 100,pBVar2,awStack_20,aCStack_18);
    local_30 = pPVar3;
    FUN_05476c50(awStack_20);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x100),&local_30);
    FUN_05478178(awStack_20,&DAT_056f11a8,auStack_40);
    Sexy::Color::Color(aCStack_18,1);
    pPVar3 = ::operator_new(0x300);
    iVar1 = iVar4 + 200;
    iVar4 = iVar4 + 1;
    PVZ2UIButton::PVZ2UIButton(pPVar3,iVar1,pBVar2,awStack_20,aCStack_18);
    local_28 = pPVar3;
    FUN_05476c50(awStack_20);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x118),&local_28);
  } while (iVar4 != 0x2c4);
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

