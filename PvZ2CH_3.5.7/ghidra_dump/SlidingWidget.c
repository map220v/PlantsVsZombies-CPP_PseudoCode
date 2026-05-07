// Class: SlidingWidget


/* SlidingWidget::onSlideInFinished() */

void SlidingWidget::onSlideInFinished(void)

{
  return;
}


/* SlidingWidget::onSlideOutFinished() */

void SlidingWidget::onSlideOutFinished(void)

{
  return;
}


/* SlidingWidget::~SlidingWidget() */

void __thiscall SlidingWidget::~SlidingWidget(SlidingWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0684cd90;
  *(undefined ***)(this + 0x10) = &PTR__SlidingWidget_0684cf40;
  std::string::~string((string *)(this + 400));
  std::string::~string((string *)(this + 0x188));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to SlidingWidget::~SlidingWidget() */

void __thiscall SlidingWidget::~SlidingWidget(SlidingWidget *this)

{
  ~SlidingWidget(this + -0x10);
  return;
}


/* SlidingWidget::~SlidingWidget() */

void __thiscall SlidingWidget::~SlidingWidget(SlidingWidget *this)

{
  ~SlidingWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SlidingWidget::~SlidingWidget() */

void __thiscall SlidingWidget::~SlidingWidget(SlidingWidget *this)

{
  ~SlidingWidget(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SlidingWidget::StaticClassInit() */

void SlidingWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"SlidingWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0446624c,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SlidingWidget::StaticGetClass() */

long * SlidingWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SlidingWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SlidingWidget::GetClass() const */

long * SlidingWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"SlidingWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SlidingWidget::SlidingWidget() */

void __thiscall SlidingWidget::SlidingWidget(SlidingWidget *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0684cd90;
  *(undefined ***)(this + 0x10) = &PTR__SlidingWidget_0684cf40;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x178));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x180));
  Set8BytesTo0(this + 0x188);
  Set8BytesTo0(this + 400);
  *(undefined4 *)(this + 0x16c) = 4;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x164) = uVar2;
  *(undefined4 *)(this + 0x168) = 0x3e99999a;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x178) = local_10;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  this[0x198] = (SlidingWidget)0x0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x180) = local_10;
  *(undefined4 *)(this + 0x174) = 2;
  *(undefined4 *)(this + 0x170) = 3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SlidingWidget::StaticNew() */

SlidingWidget * SlidingWidget::StaticNew(void)

{
  SlidingWidget *this;
  
  this = ::operator_new(0x1a0);
  SlidingWidget(this);
  return this;
}


/* SlidingWidget::SetupSlideInfo(float, Sexy::SexyVector2 const&, std::string, std::string,
   CurveType, CurveType) */

void __thiscall
SlidingWidget::SetupSlideInfo
          (undefined4 param_1,SlidingWidget *this,undefined8 *param_2,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(this + 0x180) = *param_2;
  *(undefined4 *)(this + 0x168) = param_1;
  puVar1 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)this);
  *(undefined8 *)(this + 0x178) = *puVar1;
  thunk_FUN_05475e00(this + 0x188,param_4);
  thunk_FUN_05475e00(this + 400,param_5);
  *(undefined4 *)(this + 0x170) = param_6;
  *(undefined4 *)(this + 0x174) = param_7;
  this[0x198] = (SlidingWidget)0x1;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044661ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SlidingWidget::onUpdate() */

void __thiscall SlidingWidget::onUpdate(SlidingWidget *this)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x16c) == 2) {
    fVar3 = *(float *)(this + 0x164);
    fVar2 = *(float *)(this + 0x168);
    auVar1 = PVZ_T();
    fVar2 = CurveLerp<float>(auVar1,fVar3 + fVar2,auVar1._0_4_,this + 0x180,this + 0x178,
                             *(undefined4 *)(this + 0x170));
    fVar4 = *(float *)(this + 0x164);
    fVar3 = *(float *)(this + 0x168);
    auVar1 = PVZ_T();
    fVar3 = CurveLerp<float>(auVar1,fVar4 + fVar3,auVar1._0_4_,this + 0x184,this + 0x17c,
                             *(undefined4 *)(this + 0x170));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar2,fVar3);
    UIWidget::SetPositionOffset(local_10,local_c,this);
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x168) + *(float *)(this + 0x164) <= fVar2) {
      *(undefined4 *)(this + 0x16c) = 1;
      if (*(code **)(*(long *)this + 400) != onSlideInFinished) {
        (**(code **)(*(long *)this + 400))(this);
      }
    }
  }
  else if (*(int *)(this + 0x16c) == 3) {
    fVar3 = *(float *)(this + 0x164);
    fVar2 = *(float *)(this + 0x168);
    auVar1 = PVZ_T();
    fVar2 = CurveLerp<float>(auVar1,fVar3 + fVar2,auVar1._0_4_,this + 0x178,this + 0x180,
                             *(undefined4 *)(this + 0x174));
    fVar4 = *(float *)(this + 0x164);
    fVar3 = *(float *)(this + 0x168);
    auVar1 = PVZ_T();
    fVar3 = CurveLerp<float>(auVar1,fVar4 + fVar3,auVar1._0_4_,this + 0x17c,this + 0x184,
                             *(undefined4 *)(this + 0x174));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar2,fVar3);
    UIWidget::SetPositionOffset(local_10,local_c,this);
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x168) + *(float *)(this + 0x164) <= fVar2) {
      *(undefined4 *)(this + 0x16c) = 4;
      if (*(code **)(*(long *)this + 0x198) != onSlideOutFinished) {
        (**(code **)(*(long *)this + 0x198))(this);
      }
      UIWidget::SetVisible((UIWidget *)this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SlidingWidget::SlideIn() */

void __thiscall SlidingWidget::SlideIn(SlidingWidget *this)

{
  char cVar1;
  string *psVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(this + 0x16c) == 4) {
    cVar1 = FUN_0547419c(this + 0x188);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x188);
    }
    *(undefined4 *)(this + 0x16c) = 2;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x164) = uVar3;
    UIWidget::SetPositionOffset(*(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184),this);
    UIWidget::SetVisible((UIWidget *)this,true);
    return;
  }
  if (*(int *)(this + 0x16c) != 3) {
    return;
  }
  fVar4 = (float)PVZ_T();
  fVar6 = *(float *)(this + 0x164);
  *(undefined4 *)(this + 0x16c) = 2;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x164) = (fVar4 - (fVar6 + *(float *)(this + 0x168))) + fVar5;
  return;
}


/* SlidingWidget::SlideOut() */

void __thiscall SlidingWidget::SlideOut(SlidingWidget *this)

{
  char cVar1;
  string *psVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(this + 0x16c) == 1) {
    cVar1 = FUN_0547419c(this + 400);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 400);
      *(undefined4 *)(this + 0x16c) = 3;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x164) = uVar3;
    }
    else {
      *(undefined4 *)(this + 0x16c) = 3;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x164) = uVar3;
    }
    return;
  }
  if (*(int *)(this + 0x16c) != 2) {
    return;
  }
  fVar4 = (float)PVZ_T();
  fVar6 = *(float *)(this + 0x164);
  *(undefined4 *)(this + 0x16c) = 3;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x164) = (fVar4 - (fVar6 + *(float *)(this + 0x168))) + fVar5;
  return;
}


/* SlidingWidget::onVisibleStateChange(bool) */

void __thiscall SlidingWidget::onVisibleStateChange(SlidingWidget *this,bool param_1)

{
  if (this[0x198] == (SlidingWidget)0x0) {
    return;
  }
  if (param_1) {
    if (*(int *)(this + 0x16c) != 4) {
      return;
    }
    SlideIn(this);
  }
  else {
    if (*(int *)(this + 0x16c) == 4) {
      return;
    }
    SlideOut(this);
  }
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}

