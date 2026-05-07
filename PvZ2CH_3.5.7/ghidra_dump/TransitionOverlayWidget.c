// Class: TransitionOverlayWidget


/* TransitionOverlayWidget::~TransitionOverlayWidget() */

void __thiscall TransitionOverlayWidget::~TransitionOverlayWidget(TransitionOverlayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06852eb0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TransitionOverlayWidget::~TransitionOverlayWidget() */

void __thiscall TransitionOverlayWidget::~TransitionOverlayWidget(TransitionOverlayWidget *this)

{
  ~TransitionOverlayWidget(this);
  AK::FreeHook(this);
  return;
}


/* TransitionOverlayWidget::TransitionOverlayWidget() */

void __thiscall TransitionOverlayWidget::TransitionOverlayWidget(TransitionOverlayWidget *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06852eb0;
  Sexy::Color::Color((Color *)(this + 0xe0));
  this[0xfc] = (TransitionOverlayWidget)0x0;
  uVar1 = PVZ_EOT();
  this[0xfd] = (TransitionOverlayWidget)0x0;
  this[0xfe] = (TransitionOverlayWidget)0x1;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x60) = 0x30;
  *(undefined4 *)(this + 0xf4) = uVar1;
  *(undefined4 *)(this + 0xf8) = uVar1;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::QueueScreenFadeIn(FadeTransitionType, Sexy::Color, float, bool) */

void __thiscall
TransitionOverlayWidget::QueueScreenFadeIn
          (undefined4 param_1,TransitionOverlayWidget *this,int param_3,undefined8 *param_4,
          TransitionOverlayWidget param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *(int *)(this + 0xd8) = param_3;
  this[0xfd] = param_5;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xd4) = 2;
  *(undefined4 *)(this + 0xf0) = param_1;
  *(undefined4 *)(this + 0xdc) = param_1;
  this_00 = gLawnApp;
  if (param_3 == 2) {
    std::string::string(asStack_10,"Grass_Transition");
    LawnApp::LoadGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::QueueScreenFadeOut(FadeTransitionType, Sexy::Color, float, bool) */

void __thiscall
TransitionOverlayWidget::QueueScreenFadeOut
          (undefined4 param_1,TransitionOverlayWidget *this,int param_3,undefined8 *param_4,
          TransitionOverlayWidget param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *(int *)(this + 0xd8) = param_3;
  this[0xfd] = param_5;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xe0) = uVar1;
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined4 *)(this + 0xf0) = param_1;
  *(undefined4 *)(this + 0xdc) = param_1;
  this_00 = gLawnApp;
  if (param_3 == 2) {
    std::string::string(asStack_10,"Grass_Transition");
    LawnApp::LoadGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::drawFullscreenOverlay(Sexy::Graphics*, Sexy::Color) */

void __thiscall
TransitionOverlayWidget::drawFullscreenOverlay
          (TransitionOverlayWidget *this,Graphics *param_1,Color *param_3)

{
  int iVar1;
  int iVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::SetLinearBlend(param_1,true);
  Sexy::Graphics::SetDrawMode(param_1,0);
  Sexy::Graphics::SetColor(param_1,param_3);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  Sexy::Graphics::FillRect(param_1,0,0,iVar1,iVar2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::drawSpiralOverlay(Sexy::Graphics*, Sexy::Color) */

void __thiscall
TransitionOverlayWidget::drawSpiralOverlay(undefined8 param_1_00,undefined8 param_1,long param_3)

{
  undefined4 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_1,uVar1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransitionOverlayWidget::WillStopTransition() */

void __thiscall TransitionOverlayWidget::WillStopTransition(TransitionOverlayWidget *this)

{
  if (this[0xfc] != (TransitionOverlayWidget)0x0) {
    *(undefined4 *)(this + 0xf0) = 0xbf800000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::StopTransition() */

void __thiscall TransitionOverlayWidget::StopTransition(TransitionOverlayWidget *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (this[0xfc] != (TransitionOverlayWidget)0x0) {
    if (*(int *)(this + 0xd8) == 2) {
      std::string::string(asStack_10,"Grass_Transition");
      LawnApp::DeleteGroup(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    this[0xfc] = (TransitionOverlayWidget)0x0;
    this[0xfe] = (TransitionOverlayWidget)0x1;
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0x60) = 0x30;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransitionOverlayWidget::StartTransition() */

void __thiscall TransitionOverlayWidget::StartTransition(TransitionOverlayWidget *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0xd4) != 0) {
    this[0xfc] = (TransitionOverlayWidget)0x1;
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0xf4) = uVar1;
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0xf8) = uVar1;
  }
  return;
}


/* TransitionOverlayWidget::SetPaused(bool) */

void __thiscall TransitionOverlayWidget::SetPaused(TransitionOverlayWidget *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (!param_1) {
    fVar1 = (float)PVZ_EOT();
    if (*(float *)(this + 0xf8) == fVar1) {
      *(float *)(this + 0xf8) = fVar1;
    }
    else {
      fVar2 = (float)PVZ_T();
      fVar3 = *(float *)(this + 0xf8);
      *(float *)(this + 0xf8) = fVar1;
      *(float *)(this + 0xf4) = fVar2 - fVar3;
    }
    return;
  }
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0xf8) != fVar1) {
    return;
  }
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xf8) = fVar1 - *(float *)(this + 0xf4);
  return;
}


/* TransitionOverlayWidget::IsTransitionComplete() */

bool __thiscall TransitionOverlayWidget::IsTransitionComplete(TransitionOverlayWidget *this)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = true;
  if (this[0xfc] != (TransitionOverlayWidget)0x0) {
    fVar2 = (float)PVZ_EOT();
    bVar1 = false;
    if (*(float *)(this + 0xf8) == fVar2) {
      fVar2 = (float)PVZ_T();
      return *(float *)(this + 0xf0) + *(float *)(this + 0xf4) < fVar2;
    }
  }
  return bVar1;
}


/* TransitionOverlayWidget::Update() */

void __thiscall TransitionOverlayWidget::Update(TransitionOverlayWidget *this)

{
  float fVar1;
  
  if (((this[0xfc] != (TransitionOverlayWidget)0x0) && (this[0xfd] != (TransitionOverlayWidget)0x0))
     && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xf0) + *(float *)(this + 0xf4) < fVar1)) {
    StopTransition(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::drawGrassOverlay(Sexy::Graphics*, Sexy::Color) */

void __thiscall
TransitionOverlayWidget::drawGrassOverlay
          (TransitionOverlayWidget *this,Graphics *param_1,Color *param_3)

{
  undefined8 uVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  Sexy::Graphics::SetLinearBlend(param_1,true);
  Sexy::Graphics::SetDrawMode(param_1,0);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,param_3);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06b0cb38);
  DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransitionOverlayWidget::Draw(Sexy::Graphics*) */

void __thiscall TransitionOverlayWidget::Draw(TransitionOverlayWidget *this,Graphics *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  GraphicsAutoState aGStack_30 [8];
  undefined4 local_28 [3];
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xfc] != (TransitionOverlayWidget)0x0) && (this[0xfe] != (TransitionOverlayWidget)0x0))
  {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    fVar3 = *(float *)(this + 0xf8);
    fVar2 = (float)PVZ_EOT();
    if (fVar3 == fVar2) {
      fVar2 = (float)PVZ_T();
      fVar3 = (fVar2 - *(float *)(this + 0xf4)) / *(float *)(this + 0xf0);
    }
    else {
      fVar3 = fVar3 / *(float *)(this + 0xf0);
    }
    local_28[0] = 0;
    local_18[0] = 0x3f800000;
    fVar2 = CurveEvaluate<float>(fVar3,(Insets *)local_28,(Insets *)local_18,4);
    Sexy::Insets::Insets((Insets *)local_28,(Insets *)(this + 0xe0));
    if (*(int *)(this + 0xd4) == 1) {
      local_1c = (int)(fVar2 * 255.0);
    }
    else if (*(int *)(this + 0xd4) == 2) {
      local_1c = (int)((1.0 - fVar2) * 255.0);
    }
    iVar1 = *(int *)(this + 0xd8);
    if (iVar1 == 0) {
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_28);
      drawFullscreenOverlay(this,param_1,(Insets *)local_18);
    }
    else if (iVar1 == 1) {
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_28);
      drawSpiralOverlay(this,param_1,(Insets *)local_18);
    }
    else if (iVar1 == 2) {
      Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_28);
      drawGrassOverlay(this,param_1,(Insets *)local_18);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

