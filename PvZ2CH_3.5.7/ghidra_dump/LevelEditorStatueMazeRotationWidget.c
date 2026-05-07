// Class: LevelEditorStatueMazeRotationWidget


/* LevelEditorStatueMazeRotationWidget::SliderVal(int, double) */

void __thiscall
LevelEditorStatueMazeRotationWidget::SliderVal
          (LevelEditorStatueMazeRotationWidget *this,int param_1,double param_2)

{
  if (param_1 == 10) {
    *(int *)(this + 0x158) = (int)((double)*(int *)(this + 0x154) * param_2 + 1.0);
    return;
  }
  if (param_1 != 0xb) {
    return;
  }
  *(int *)(this + 0x160) = (int)((double)*(int *)(this + 0x15c) * param_2 + 1.0);
  return;
}


/* non-virtual thunk to LevelEditorStatueMazeRotationWidget::SliderVal(int, double) */

void __thiscall
LevelEditorStatueMazeRotationWidget::SliderVal
          (LevelEditorStatueMazeRotationWidget *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeRotationWidget::Reload() */

void __thiscall
LevelEditorStatueMazeRotationWidget::Reload(LevelEditorStatueMazeRotationWidget *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  PVZ2UIButton *pPVar14;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
  lVar13 = 0;
  do {
    puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x108),lVar13);
    (**(code **)(*(long *)this + 0x68))(this,*puVar7);
    puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x120),lVar13);
    (**(code **)(*(long *)this + 0x68))(this,*puVar7);
    lVar2 = lVar13 + 1;
    puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x138),lVar13);
    (**(code **)(*(long *)this + 0x68))(this,*puVar7);
    lVar13 = lVar2;
  } while (lVar2 != 8);
  lVar13 = 0;
  iVar12 = 0x1e;
  do {
    puVar9 = &DAT_06b857e8;
    if ((int)lVar13 < iVar3) {
      pcVar8 = (char *)CustomLevelUtils::GetSetMatrix(*(int *)(this + 0x150),(int)lVar13);
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x108),lVar13);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      if (*pcVar8 == '\0') {
        uVar10 = 9;
      }
      else {
        uVar10 = 3;
        puVar9 = &DAT_06b859c0;
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x108),lVar13);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      uVar10 = 3;
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar9,uVar10);
    lVar13 = lVar13 + 1;
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
    PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
    uVar4 = FUN_04b334ec(iVar12);
    uVar5 = FUN_04b334ec(0x5a);
    uVar6 = FUN_04b334ec(0x41);
    (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
    pcVar11 = *(code **)(*(long *)pPVar14 + 800);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar11)(pPVar14,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,pPVar14);
    iVar12 = iVar12 + 0x50;
  } while (lVar13 != 4);
  iVar12 = 0;
  do {
    if ((iVar12 <= iVar3) && (*(int *)(this + 0xe8) == iVar12)) {
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x120),(long)iVar12);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b857e8,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
      PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
      iVar1 = iVar12 * 0x50 + 0x55;
      uVar4 = FUN_04b334ec(iVar1);
      uVar5 = FUN_04b334ec(0x55);
      uVar6 = FUN_04b334ec(0x23);
      (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
      pcVar11 = *(code **)(*(long *)pPVar14 + 800);
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
      (*pcVar11)(pPVar14,uVar10);
      (**(code **)(*(long *)this + 0x60))(this,pPVar14);
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x138),(long)iVar12);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b857e8,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
      PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
      uVar4 = FUN_04b334ec(iVar1);
      uVar5 = FUN_04b334ec(0x78);
      uVar6 = FUN_04b334ec(0x23);
      (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
      pcVar11 = *(code **)(*(long *)pPVar14 + 800);
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
      (*pcVar11)(pPVar14,uVar10);
      (**(code **)(*(long *)this + 0x60))(this,pPVar14);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 4);
  lVar13 = 4;
  iVar12 = 0x1e;
  do {
    puVar9 = &DAT_06b857e8;
    if ((int)lVar13 < iVar3) {
      pcVar8 = (char *)CustomLevelUtils::GetSetMatrix(*(int *)(this + 0x150),(int)lVar13);
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x108),lVar13);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      if (*pcVar8 == '\0') {
        uVar10 = 9;
      }
      else {
        uVar10 = 3;
        puVar9 = &DAT_06b859c0;
      }
    }
    else {
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x108),lVar13);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      uVar10 = 3;
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_78,puVar9,uVar10);
    lVar13 = lVar13 + 1;
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
    PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
    uVar4 = FUN_04b334ec(iVar12);
    uVar5 = FUN_04b334ec(0xaa);
    uVar6 = FUN_04b334ec(0x41);
    (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
    pcVar11 = *(code **)(*(long *)pPVar14 + 800);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar11)(pPVar14,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,pPVar14);
    iVar12 = iVar12 + 0x50;
  } while (lVar13 != 8);
  iVar12 = 4;
  do {
    if ((iVar12 <= iVar3) && (*(int *)(this + 0xe8) == iVar12)) {
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x120),(long)iVar12);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b857e8,3);
      iVar1 = (iVar12 + -4) * 0x50 + 0x55;
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
      PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
      uVar4 = FUN_04b334ec(iVar1);
      uVar5 = FUN_04b334ec(0xa5);
      uVar6 = FUN_04b334ec(0x23);
      (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
      pcVar11 = *(code **)(*(long *)pPVar14 + 800);
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
      (*pcVar11)(pPVar14,uVar10);
      (**(code **)(*(long *)this + 0x60))(this,pPVar14);
      puVar7 = (undefined8 *)FUN_04b2d8d4(*(undefined8 *)(this + 0x138),(long)iVar12);
      pPVar14 = (PVZ2UIButton *)*puVar7;
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b857e8,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
      PVZ2UIButton::SetDialogStates(pPVar14,aPStack_78,aPStack_40);
      uVar4 = FUN_04b334ec(iVar1);
      uVar5 = FUN_04b334ec(200);
      uVar6 = FUN_04b334ec(0x23);
      (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar4,uVar5,uVar6,uVar6);
      pcVar11 = *(code **)(*(long *)pPVar14 + 800);
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
      (*pcVar11)(pPVar14,uVar10);
      (**(code **)(*(long *)this + 0x60))(this,pPVar14);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStatueMazeRotationWidget::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeRotationWidget::ButtonDepress
          (LevelEditorStatueMazeRotationWidget *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0x1f) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x180));
    if (!bVar2) {
      return;
    }
    std::function<void(int,int,int)>::operator()
              ((function<void(int,int,int)> *)(this + 0x180),*(int *)(this + 0x150),
               *(int *)(this + 0x158),*(int *)(this + 0x160));
    return;
  }
  if (param_1 - 7000U < 1000) {
    iVar5 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
    if (param_1 + -6999 <= iVar5) {
      *(uint *)(this + 0xe8) = param_1 - 7000U;
      Reload(this);
      return;
    }
    uVar4 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
    *(undefined4 *)(this + 0xe8) = uVar4;
  }
  else if (param_1 - 8000U < 1000) {
    uVar1 = *(uint *)(this + 0xe8);
    if (uVar1 == param_1 - 8000U) {
      iVar5 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
      if (iVar5 < param_1 + -7999) {
        uVar6 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
        if (uVar1 == uVar6) {
          bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1a0));
          if (bVar2) {
            std::function<void(int,bool)>::operator()
                      ((function<void(int,bool)> *)(this + 0x1a0),*(int *)(this + 0x150),true);
          }
        }
      }
      else {
        bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1c0));
        if (bVar2) {
          std::function<void(int,int,bool)>::operator()
                    ((function<void(int,int,bool)> *)(this + 0x1c0),*(int *)(this + 0x150),
                     *(int *)(this + 0xe8),true);
        }
      }
LAB_04b38700:
      *(undefined4 *)(this + 0xe8) = 0xffffffff;
      Reload(this);
      return;
    }
  }
  else {
    if (param_1 < 9000) {
      return;
    }
    iVar5 = *(int *)(this + 0xe8);
    if (iVar5 == param_1 + -9000) {
      iVar3 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
      if (iVar3 < param_1 + -8999) {
        iVar3 = CustomLevelUtils::GetSetMatrixSize(*(int *)(this + 0x150));
        if (iVar5 == iVar3) {
          bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1a0));
          if (bVar2) {
            std::function<void(int,bool)>::operator()
                      ((function<void(int,bool)> *)(this + 0x1a0),*(int *)(this + 0x150),false);
          }
        }
      }
      else {
        bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1c0));
        if (bVar2) {
          std::function<void(int,int,bool)>::operator()
                    ((function<void(int,int,bool)> *)(this + 0x1c0),*(int *)(this + 0x150),
                     *(int *)(this + 0xe8),false);
        }
      }
      goto LAB_04b38700;
    }
  }
  Reload(this);
  return;
}


/* non-virtual thunk to LevelEditorStatueMazeRotationWidget::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeRotationWidget::ButtonDepress
          (LevelEditorStatueMazeRotationWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeRotationWidget::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorStatueMazeRotationWidget::Draw
          (LevelEditorStatueMazeRotationWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_40 [2];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x168,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04b334ec(0x14);
  iVar3 = FUN_04b334ec(0x46);
  iVar4 = FUN_04b334ec(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b334ec(0x55);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = *(int *)(this + 0x158);
  iVar2 = *(int *)(this + 0x160);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(this + 0x158) = iVar1;
  *(int *)(this + 0x160) = iVar2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x158));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x170),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0xf5);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x160));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x178),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x13b);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x14);
  iVar2 = FUN_04b334ec(0x112);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0x154) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x113);
  iVar2 = FUN_04b334ec(0x112);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x14);
  iVar2 = FUN_04b334ec(0x156);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0x15c) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x113);
  iVar2 = FUN_04b334ec(0x156);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStatueMazeRotationWidget::LevelEditorStatueMazeRotationWidget() */

void __thiscall
LevelEditorStatueMazeRotationWidget::LevelEditorStatueMazeRotationWidget
          (LevelEditorStatueMazeRotationWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0xe0));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0695bea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c1d0;
  *(undefined **)(this + 0xe0) = &DAT_0695c218;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x158) = 0;
  FUN_05476574(this + 0x168);
  FUN_05476574(this + 0x170);
  FUN_05476574(this + 0x178);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x180));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1a0));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1c0));
  *(undefined8 *)(this + 0x1e0) = 0;
  return;
}


/* LevelEditorStatueMazeRotationWidget::~LevelEditorStatueMazeRotationWidget() */

void __thiscall
LevelEditorStatueMazeRotationWidget::~LevelEditorStatueMazeRotationWidget
          (LevelEditorStatueMazeRotationWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0695bea0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c1d0;
  *(undefined **)(this + 0xe0) = &DAT_0695c218;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1c0));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1a0));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x180));
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x170);
  FUN_05476c50(this + 0x168);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x138));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x120));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x108));
  std::vector<StatueDirection*,std::allocator<StatueDirection*>>::~vector
            ((vector<StatueDirection*,std::allocator<StatueDirection*>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorStatueMazeRotationWidget::~LevelEditorStatueMazeRotationWidget() */

void __thiscall
LevelEditorStatueMazeRotationWidget::~LevelEditorStatueMazeRotationWidget
          (LevelEditorStatueMazeRotationWidget *this)

{
  ~LevelEditorStatueMazeRotationWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeRotationWidget::Init(int) */

void __thiscall
LevelEditorStatueMazeRotationWidget::Init(LevelEditorStatueMazeRotationWidget *this,int param_1)

{
  int iVar1;
  ButtonListener *pBVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PVZ2UIButton *pPVar8;
  Image *pIVar9;
  Image *pIVar10;
  Slider *pSVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *plVar14;
  undefined1 auStack_98 [8];
  PVZ2UIButton *local_90;
  PVZ2UIButton *local_88;
  PVZ2UIButton *local_80;
  wstring awStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  pBVar2 = (ButtonListener *)(this + 0xd8);
  iVar3 = 7000;
  *(int *)(this + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  do {
    FUN_05478178(awStack_78,&DAT_056f11a8,&local_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar8,iVar3,pBVar2,awStack_78,(Color *)aPStack_40);
    local_90 = pPVar8;
    FUN_05476c50(awStack_78);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x108),&local_90);
    FUN_05478178(awStack_78,&DAT_056f11a8,&local_80);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar8,iVar3 + 1000,pBVar2,awStack_78,(Color *)aPStack_40);
    local_88 = pPVar8;
    FUN_05476c50(awStack_78);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x120),&local_88);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_98);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar8 = ::operator_new(0x300);
    iVar1 = iVar3 + 2000;
    iVar3 = iVar3 + 1;
    PVZ2UIButton::PVZ2UIButton(pPVar8,iVar1,pBVar2,awStack_78,(Color *)aPStack_40);
    local_80 = pPVar8;
    FUN_05476c50(awStack_78);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x138),&local_80);
  } while (iVar3 != 0x1b60);
  Reload(this);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar11 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar11,pIVar9,pIVar10,10,(SliderListener *)(this + 0xe0));
  *(Slider **)(this + 0x1e0) = pSVar11;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar3 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar11,pIVar9,iVar3);
  (**(code **)(**(long **)(this + 0x1e0) + 0x310))
            ((double)*(int *)(this + 0x158) / (double)*(int *)(this + 0x154),
             *(long **)(this + 0x1e0));
  uVar4 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x1e0) + 0x184,uVar4);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x1e0),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x1e0),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x1e0),true);
  pSVar11 = *(Slider **)(this + 0x1e0);
  iVar3 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar3,iVar3);
  Sexy::Slider::SetKnobShadowOffsets(pSVar11,aPStack_40);
  plVar14 = *(long **)(this + 0x1e0);
  uVar4 = FUN_04b334ec(0x32);
  uVar5 = FUN_04b334ec(0x10e);
  uVar6 = FUN_04b334ec(0xe6);
  uVar7 = FUN_04b334ec(0x28);
  (**(code **)(*plVar14 + 0x198))(plVar14,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1e0));
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar11 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar11,pIVar9,pIVar10,0xb,(SliderListener *)(this + 0xe0));
  *(Slider **)(this + 0x1e8) = pSVar11;
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar3 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar11,pIVar9,iVar3);
  (**(code **)(**(long **)(this + 0x1e8) + 0x310))
            ((double)*(int *)(this + 0x160) / (double)*(int *)(this + 0x15c),
             *(long **)(this + 0x1e8));
  uVar4 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x1e8) + 0x184,uVar4);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x1e8),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x1e8),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x1e8),true);
  pSVar11 = *(Slider **)(this + 0x1e8);
  iVar3 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar3,iVar3);
  Sexy::Slider::SetKnobShadowOffsets(pSVar11,aPStack_40);
  plVar14 = *(long **)(this + 0x1e8);
  uVar4 = FUN_04b334ec(0x32);
  uVar5 = FUN_04b334ec(0x154);
  uVar6 = FUN_04b334ec(0xe6);
  uVar7 = FUN_04b334ec(0x28);
  (**(code **)(*plVar14 + 0x198))(plVar14,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1e8));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar8,0x1f,pBVar2,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar4 = FUN_04b334ec(0x78);
  uVar5 = FUN_04b334ec(0x18b);
  uVar6 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,uVar4,uVar5,uVar4,uVar6);
  pcVar13 = *(code **)(*(long *)pPVar8 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar13)(pPVar8,uVar12);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

