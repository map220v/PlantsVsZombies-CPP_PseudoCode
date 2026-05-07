// Class: UIWorldCupScore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupScore::~UIWorldCupScore() */

void __thiscall UIWorldCupScore::~UIWorldCupScore(UIWorldCupScore *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)(this + 0x10) = &PTR__UIWorldCupScore_066d2a30;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d2890;
  *(undefined8 *)(this + 0x170) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldCup");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIWorldCupScore::~UIWorldCupScore() */

void __thiscall UIWorldCupScore::~UIWorldCupScore(UIWorldCupScore *this)

{
  ~UIWorldCupScore(this + -0x10);
  return;
}


/* UIWorldCupScore::~UIWorldCupScore() */

void __thiscall UIWorldCupScore::~UIWorldCupScore(UIWorldCupScore *this)

{
  ~UIWorldCupScore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIWorldCupScore::~UIWorldCupScore() */

void __thiscall UIWorldCupScore::~UIWorldCupScore(UIWorldCupScore *this)

{
  ~UIWorldCupScore(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupScore::StaticClassInit() */

void UIWorldCupScore::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UIWorldCupScore");
    (*pcVar2)(plVar1,asStack_10,FUN_0394ef1c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupScore::StaticGetClass() */

long * UIWorldCupScore::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIWorldCupScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWorldCupScore::GetClass() const */

long * UIWorldCupScore::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UIWorldCupScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIWorldCupScore::setScores(unsigned int*, unsigned int*) */

void __thiscall UIWorldCupScore::setScores(UIWorldCupScore *this,uint *param_1,uint *param_2)

{
  *(uint **)(this + 0x168) = param_1;
  *(uint **)(this + 0x170) = param_2;
  return;
}


/* UIWorldCupScore::setScoreState(int, state_scall) */

void __thiscall
UIWorldCupScore::setScoreState(UIWorldCupScore *this,uint param_1,undefined4 param_3)

{
  if (param_1 < 4) {
    *(undefined4 *)(this + (long)(int)param_1 * 4 + 0x18c) = param_3;
  }
  return;
}


/* UIWorldCupScore::setOldPlantScore(unsigned int) */

void __thiscall UIWorldCupScore::setOldPlantScore(UIWorldCupScore *this,uint param_1)

{
  *(uint *)(this + 0x19c) = param_1;
  return;
}


/* UIWorldCupScore::setOldEnemyScore(unsigned int) */

void __thiscall UIWorldCupScore::setOldEnemyScore(UIWorldCupScore *this,uint param_1)

{
  *(uint *)(this + 0x1a0) = param_1;
  return;
}


/* UIWorldCupScore::checkAnimationState() */

void __thiscall UIWorldCupScore::checkAnimationState(UIWorldCupScore *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  if (*(uint **)(this + 0x168) != (uint *)0x0) {
    uVar1 = **(uint **)(this + 0x168);
    uVar2 = (ulong)uVar1 / 10;
    uVar3 = (ulong)*(uint *)(this + 0x19c) / 10;
    iVar5 = (int)uVar2;
    iVar4 = (int)uVar3;
    if (uVar1 + iVar5 * -10 != *(uint *)(this + 0x19c) + iVar4 * -10) {
      setScoreState(this,1,1);
    }
    if (iVar5 + (int)(uVar2 / 10) * -10 != iVar4 + (int)(uVar3 / 10) * -10) {
      setScoreState(this,0,1);
    }
  }
  if (*(uint **)(this + 0x170) != (uint *)0x0) {
    uVar1 = **(uint **)(this + 0x170);
    uVar2 = (ulong)uVar1 / 10;
    uVar3 = (ulong)*(uint *)(this + 0x1a0) / 10;
    iVar5 = (int)uVar2;
    iVar4 = (int)uVar3;
    if (uVar1 + iVar5 * -10 != *(uint *)(this + 0x1a0) + iVar4 * -10) {
      setScoreState(this,3,1);
    }
    if (iVar5 + (int)(uVar2 / 10) * -10 != iVar4 + (int)(uVar3 / 10) * -10) {
      setScoreState(this,2,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupScore::UIWorldCupScore() */

void __thiscall UIWorldCupScore::UIWorldCupScore(UIWorldCupScore *this)

{
  LawnApp *this_00;
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_066d2890;
  *(undefined ***)(this + 0x10) = &PTR__UIWorldCupScore_066d2a30;
  fVar2 = (float)PVZ_RealT();
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(float *)(this + 0x178) = fVar2 + 2.0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldCup");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x18c) = 0;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(long *)(this + 0x184) = auVar3._8_8_;
  *(long *)(this + 0x17c) = auVar3._0_8_;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWorldCupScore::StaticNew() */

UIWorldCupScore * UIWorldCupScore::StaticNew(void)

{
  UIWorldCupScore *this;
  
  this = ::operator_new(0x1a8);
  UIWorldCupScore(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldCupScore::Draw(Sexy::Graphics*) */

void __thiscall UIWorldCupScore::Draw(UIWorldCupScore *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  float fVar12;
  GraphicsAutoState aGStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_SCORE_BG",asStack_60);
  pIVar7 = (Image *)StringHelper::ToImage(asStack_60,false);
  if (pIVar7 != (Image *)0x0) {
    iVar4 = FUN_0394ebd8(0);
    Sexy::Graphics::DrawImage(param_1,pIVar7,0,iVar4);
  }
  if (*(uint **)(this + 0x168) == (uint *)0x0) {
    puVar10 = *(uint **)(this + 0x170);
    uVar8 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = **(uint **)(this + 0x168);
    puVar10 = *(uint **)(this + 0x170);
    uVar8 = (ulong)uVar1 / 10;
    uVar1 = uVar1 % 10;
    uVar8 = (ulong)(uint)((int)uVar8 + (int)(uVar8 / 10) * -10);
  }
  if (puVar10 == (uint *)0x0) {
    uVar11 = 0;
    uVar9 = uVar11;
  }
  else {
    uVar3 = (ulong)*puVar10 / 10;
    uVar11 = (int)uVar3 + (int)(uVar3 / 10) * -10;
    uVar9 = *puVar10 % 10;
  }
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_%d",asStack_58,uVar8);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  pIVar7 = (Image *)StringHelper::ToImage(asStack_60,false);
  iVar5 = FUN_0394ebd8(0x1e);
  iVar4 = *(int *)(pIVar7 + 0x3c);
  iVar2 = *(int *)(pIVar7 + 0x38);
  iVar6 = FUN_0394ebd8(0x17);
  Sexy::Transform::Transform(aTStack_50);
  fVar12 = *(float *)(this + 0x17c);
  if (*(int *)(this + 0x18c) == 1) {
    fVar12 = fVar12 + 0.1;
    *(float *)(this + 0x17c) = fVar12;
  }
  else if (*(int *)(this + 0x18c) == 2) {
    fVar12 = fVar12 - 0.1;
    *(float *)(this + 0x17c) = fVar12;
  }
  Sexy::Transform::Scale(aTStack_50,fVar12,fVar12);
  iVar2 = (iVar2 + iVar6) / 2;
  fVar12 = (float)(iVar5 + iVar4 / 2);
  Sexy::Transform::Translate(aTStack_50,(float)iVar2,fVar12);
  Sexy::Graphics::DrawImageTransform(param_1,pIVar7,aTStack_50,0.0,0.0);
  if (2.5 < *(float *)(this + 0x17c)) {
    *(undefined4 *)(this + 0x18c) = 2;
  }
  if (*(float *)(this + 0x17c) <= 1.0) {
    *(undefined4 *)(this + 0x18c) = 0;
    *(undefined4 *)(this + 0x17c) = 0x3f800000;
  }
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_%d",asStack_58,uVar1);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  pIVar7 = (Image *)StringHelper::ToImage(asStack_60,false);
  if (pIVar7 != (Image *)0x0) {
    if (*(int *)(this + 400) == 1) {
      *(float *)(this + 0x180) = *(float *)(this + 0x180) + 0.1;
    }
    else if (*(int *)(this + 400) == 2) {
      *(float *)(this + 0x180) = *(float *)(this + 0x180) - 0.1;
    }
    Sexy::Transform::Transform(aTStack_50);
    Sexy::Transform::Scale(aTStack_50,*(float *)(this + 0x180),*(float *)(this + 0x180));
    iVar4 = FUN_0394ebd8(0x1e);
    Sexy::Transform::Translate(aTStack_50,(float)(iVar2 + iVar4),fVar12);
    Sexy::Graphics::DrawImageTransform(param_1,pIVar7,aTStack_50,0.0,0.0);
    if (2.5 < *(float *)(this + 0x180)) {
      *(undefined4 *)(this + 400) = 2;
    }
    if (*(float *)(this + 0x180) <= 1.0) {
      *(undefined4 *)(this + 400) = 0;
      *(undefined4 *)(this + 0x180) = 0x3f800000;
    }
  }
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_%d",asStack_58,(ulong)uVar11);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  pIVar7 = (Image *)StringHelper::ToImage(asStack_60,false);
  if (pIVar7 != (Image *)0x0) {
    if (*(int *)(this + 0x194) == 1) {
      *(float *)(this + 0x184) = *(float *)(this + 0x184) + 0.1;
    }
    else if (*(int *)(this + 0x194) == 2) {
      *(float *)(this + 0x184) = *(float *)(this + 0x184) - 0.1;
    }
    Sexy::Transform::Transform(aTStack_50);
    Sexy::Transform::Scale(aTStack_50,*(float *)(this + 0x184),*(float *)(this + 0x184));
    iVar4 = FUN_0394ebd8(0x46);
    Sexy::Transform::Translate(aTStack_50,(float)(iVar2 + iVar4),fVar12);
    Sexy::Graphics::DrawImageTransform(param_1,pIVar7,aTStack_50,0.0,0.0);
    if (2.5 < *(float *)(this + 0x184)) {
      *(undefined4 *)(this + 0x194) = 2;
    }
    if (*(float *)(this + 0x184) <= 1.0) {
      *(undefined4 *)(this + 0x194) = 0;
      *(undefined4 *)(this + 0x184) = 0x3f800000;
    }
  }
  Sexy::StrFormat("IMAGE_UI_WORLDCUP_%d",asStack_58,(ulong)uVar9);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  pIVar7 = (Image *)StringHelper::ToImage(asStack_60,false);
  if (pIVar7 != (Image *)0x0) {
    if (*(int *)(this + 0x198) == 1) {
      *(float *)(this + 0x188) = *(float *)(this + 0x188) + 0.1;
    }
    else if (*(int *)(this + 0x198) == 2) {
      *(undefined4 *)(this + 0x188) = 0x3f666666;
    }
    Sexy::Transform::Transform(aTStack_50);
    Sexy::Transform::Scale(aTStack_50,*(float *)(this + 0x188),*(float *)(this + 0x188));
    iVar4 = FUN_0394ebd8(0x66);
    Sexy::Transform::Translate(aTStack_50,(float)(iVar2 + iVar4),fVar12);
    Sexy::Graphics::DrawImageTransform(param_1,pIVar7,aTStack_50,0.0,0.0);
    if (2.5 < *(float *)(this + 0x188)) {
      *(undefined4 *)(this + 0x198) = 2;
    }
    if (*(float *)(this + 0x188) <= 1.0) {
      *(undefined4 *)(this + 0x198) = 0;
    }
  }
  std::string::~string(asStack_60);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIWorldCupScore::Draw(Sexy::Graphics*) */

void __thiscall UIWorldCupScore::Draw(UIWorldCupScore *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

