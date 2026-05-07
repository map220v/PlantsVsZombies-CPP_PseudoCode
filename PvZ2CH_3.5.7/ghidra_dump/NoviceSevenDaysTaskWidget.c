// Class: NoviceSevenDaysTaskWidget


/* NoviceSevenDaysTaskWidget::Update() */

void __thiscall NoviceSevenDaysTaskWidget::Update(NoviceSevenDaysTaskWidget *this)

{
  char cVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x100));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x100));
  return;
}


/* NoviceSevenDaysTaskWidget::~NoviceSevenDaysTaskWidget() */

void __thiscall
NoviceSevenDaysTaskWidget::~NoviceSevenDaysTaskWidget(NoviceSevenDaysTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06704e30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06705158;
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NoviceSevenDaysTaskWidget::~NoviceSevenDaysTaskWidget() */

void __thiscall
NoviceSevenDaysTaskWidget::~NoviceSevenDaysTaskWidget(NoviceSevenDaysTaskWidget *this)

{
  ~NoviceSevenDaysTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::StaticClassInit() */

void NoviceSevenDaysTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03a3dd00,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskWidget::StaticGetClass() */

long * NoviceSevenDaysTaskWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskWidget::GetClass() const */

long * NoviceSevenDaysTaskWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::UpdateButtonState() */

void __thiscall NoviceSevenDaysTaskWidget::UpdateButtonState(NoviceSevenDaysTaskWidget *this)

{
  uint uVar1;
  PVZ2UIButton *pPVar2;
  wstring awStack_10 [8];
  long local_8;
  
  uVar1 = *(uint *)(*(long *)(this + 0xe8) + 0x14);
  local_8 = ___stack_chk_guard;
  if (uVar1 < 2) {
    pPVar2 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[GEM_OFFER_GOTO]");
    PVZ2UIButton::SetLabelText(pPVar2,awStack_10);
    FUN_05476c50(awStack_10);
    this[0x198] = (NoviceSevenDaysTaskWidget)0x1;
  }
  else if (uVar1 == 3) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    pPVar2 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar2,awStack_10);
    FUN_05476c50(awStack_10);
  }
  else if (uVar1 == 2) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::InitTimer() */

void __thiscall NoviceSevenDaysTaskWidget::InitTimer(NoviceSevenDaysTaskWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x100);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03a3db80(0x1e);
  iVar3 = FUN_03a3db80(0x11);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x158)),
             (float)(iVar3 + *(int *)(this + 0x15c)));
  std::string::string(asStack_10,"POPANIM_UI_NOVICESEVENDAYS_EFFECT_CLOCK");
  EffectAnim_UIAnim::InitUIAnim(0x3f333333,local_18,local_14,this_00,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"default");
    EffectAnim_UIAnim::PlayLoop(this_00,asStack_10);
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
/* NoviceSevenDaysTaskWidget::DrawTimer(Sexy::Graphics*) */

void __thiscall
NoviceSevenDaysTaskWidget::DrawTimer(NoviceSevenDaysTaskWidget *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x100));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x100),param_1);
  }
  fVar4 = (float)TimeUtil::GetTimeCountdown(3,0x2a4c);
  iVar3 = (int)fVar4;
  FUN_05476574(auStack_30);
  if (iVar3 == 0x7fffffff) {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(auStack_30,awStack_18);
    FUN_05476c50(awStack_18);
  }
  else {
    if (iVar3 < 0x15181) {
      if (iVar3 < 0xe11) {
        if (iVar3 < 1) goto LAB_03a3e4a4;
        FUN_05478178(awStack_18,L"[MIN_SEC]",auStack_38);
        TodReplaceNumberString(awStack_18,L"{NUM1}",iVar3 / 0x3c);
        FUN_05476c50(awStack_18);
        nop();
        iVar3 = iVar3 % 0x3c;
      }
      else {
        FUN_05478178(awStack_18,L"[HOUR_MIN]",auStack_38);
        TodReplaceNumberString(awStack_18,L"{NUM1}",iVar3 / 0xe10);
        FUN_05476c50(awStack_18);
        nop();
        iVar3 = (iVar3 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178(awStack_18,L"[DAY_HOUR]",auStack_38);
      TodReplaceNumberString(awStack_18,L"{NUM1}",iVar3 / 0x15180);
      FUN_05476c50(awStack_18);
      nop();
      iVar3 = (iVar3 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString(awStack_28,L"{NUM2}",iVar3);
    FUN_054766c8(auStack_30,awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_28);
  }
LAB_03a3e4a4:
  iVar3 = FUN_03a3db80(10);
  Sexy::Insets::Insets
            ((Insets *)awStack_28,iVar3 + *(int *)(this + 0x158),*(int *)(this + 0x15c),
             *(int *)(this + 0x160),*(int *)(this + 0x164));
  uVar2 = *(undefined8 *)(this + 0x168);
  Sexy::Color::Color((Color *)awStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)awStack_28,uVar2,(Color *)awStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskWidget::NoviceSevenDaysTaskWidget() */

void __thiscall
NoviceSevenDaysTaskWidget::NoviceSevenDaysTaskWidget(NoviceSevenDaysTaskWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_06704e30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06705158;
  *(undefined8 *)(this + 0xf8) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x100));
  FUN_05476574(this + 0x130);
  FUN_05476574(this + 0x138);
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  this[0x198] = (NoviceSevenDaysTaskWidget)0x0;
  return;
}


/* NoviceSevenDaysTaskWidget::StaticNew() */

NoviceSevenDaysTaskWidget * NoviceSevenDaysTaskWidget::StaticNew(void)

{
  NoviceSevenDaysTaskWidget *this;
  
  this = ::operator_new(0x1a0);
  NoviceSevenDaysTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::InitView() */

void __thiscall NoviceSevenDaysTaskWidget::InitView(NoviceSevenDaysTaskWidget *this)

{
  PrimeText_PotentialTypeface *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  RtObject *this_01;
  NoviceSevenDaysTaskData *pNVar10;
  CUILabel *this_02;
  PrimeTypeface *pPVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  PVZ2UIButton *pPVar15;
  long *plVar16;
  code *pcVar17;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (NoviceSevenDaysTaskWidget)0x0;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  lVar8 = StringHelper::ToImage((string *)(lVar8 + 0x20),false);
  *(long *)(this + 0xf0) = lVar8;
  if (lVar8 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_QUESTS_BACKGROUND_GENERIC");
    uVar9 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xf0) = uVar9;
    std::string::~string((string *)&local_40);
    nop();
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::ToWString((string *)(lVar8 + 0x10));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x130,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  iVar1 = FUN_03a3db80(0xf);
  iVar2 = FUN_03a3db80(300);
  iVar3 = FUN_03a3db80(0x41);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,0,iVar2,iVar3);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  *(undefined8 *)(this + 0x150) = uVar9;
  iVar1 = FUN_03a3db80(0x1e);
  iVar2 = FUN_03a3db80(0x46);
  iVar3 = FUN_03a3db80(100);
  iVar4 = FUN_03a3db80(0x14);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = uStack_38;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  *(undefined8 *)(this + 0x180) = uVar9;
  iVar1 = FUN_03a3db80(0x204);
  iVar2 = FUN_03a3db80(8);
  iVar3 = FUN_03a3db80(0x8c);
  iVar4 = FUN_03a3db80(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  this_00 = PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline;
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  uVar9 = PrimeText_PotentialTypeface::Typeface(this_00);
  *(undefined8 *)(this + 0x168) = uVar9;
  iVar1 = FUN_03a3db80(0x1f9);
  iVar2 = FUN_03a3db80(0x2e);
  iVar3 = FUN_03a3db80(0x6e);
  iVar4 = FUN_03a3db80(0x2c);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  pNVar10 = Sexy::RtObject::Cast<NoviceSevenDaysTaskData>(this_01);
  this_02 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(pNVar10 + 0x50),true);
  uVar5 = FUN_03a3db80(0x140);
  uVar6 = FUN_03a3db80(0xf);
  uVar7 = FUN_03a3db80(0x46);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar5,uVar6,uVar7,uVar7);
  pPVar11 = (PrimeTypeface *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4b08);
  Lua::CUILabel::SetTypeface(this_02,pPVar11);
  TodStringTranslate(L"[NOVICESEVENDAYS_INTEGRAL]");
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_02);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  uVar14 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(pNVar10 + 0x58);
    uVar13 = FUN_03a3d4ec(uVar9,*(undefined8 *)(pNVar10 + 0x60));
    if (uVar13 <= uVar14) break;
    piVar12 = (int *)FUN_03a3d4f8(uVar9,uVar14);
    plVar16 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,piVar12[1],true);
    uVar5 = FUN_03a3db80(400);
    uVar6 = FUN_03a3db80(0xf);
    uVar7 = FUN_03a3db80(0x46);
    (**(code **)(*plVar16 + 0x198))(plVar16,uVar5,uVar6,uVar7,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,plVar16);
    uVar14 = uVar14 + 1;
  }
  pPVar15 = *(PVZ2UIButton **)(this + 0xf8);
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[RECALL_OFFER_CLAIM]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar15;
    FUN_05476c50(awStack_78);
    UpdateButtonState(this);
    pPVar15 = *(PVZ2UIButton **)(this + 0xf8);
    if (pPVar15 == (PVZ2UIButton *)0x0) goto LAB_03a3f684;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac4a28,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac4a58,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(*(long **)(this + 0xf8),this + 0x188);
  plVar16 = *(long **)(this + 0xf8);
  pcVar17 = *(code **)(*plVar16 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar17)(plVar16,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
LAB_03a3f684:
  InitTimer(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NoviceSevenDaysTaskWidget::SetTask(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskWidget::SetTask(NoviceSevenDaysTaskWidget *this,GeneralTask *param_1)

{
  *(GeneralTask **)(this + 0xe8) = param_1;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::SetTaskForNewPlayerCollection(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskWidget::SetTaskForNewPlayerCollection
          (NoviceSevenDaysTaskWidget *this,GeneralTask *param_1)

{
  PrimeText_PotentialTypeface *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  RtObject *this_01;
  NoviceSevenDaysTaskData *pNVar10;
  CUILabel *this_02;
  PrimeTypeface *pPVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  PVZ2UIButton *pPVar15;
  long *plVar16;
  code *pcVar17;
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(GeneralTask **)(this + 0xe8) = param_1;
  this[0x59] = (NoviceSevenDaysTaskWidget)0x0;
  std::string::string((string *)&local_40,"IMAGE_UI_DIALOG_ASSET_GRAY_BG");
  uVar8 = StringHelper::ToImage((string *)&local_40,false);
  *(undefined8 *)(this + 0xf0) = uVar8;
  std::string::~string((string *)&local_40);
  nop();
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::ToWString((string *)(lVar9 + 0x10));
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x130,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  FUN_05476c50(awStack_78);
  iVar1 = FUN_03a3db80(8);
  iVar2 = FUN_03a3db80(7);
  iVar3 = FUN_03a3db80(0x96);
  iVar4 = FUN_03a3db80(0x19);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x150) = uVar8;
  iVar1 = FUN_03a3db80(9);
  iVar2 = FUN_03a3db80(0x26);
  iVar3 = FUN_03a3db80(0x70);
  iVar4 = FUN_03a3db80(0xf);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = uStack_38;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  *(undefined8 *)(this + 0x180) = uVar8;
  iVar1 = FUN_03a3db80(0x142);
  iVar2 = FUN_03a3db80(5);
  iVar3 = FUN_03a3db80(0x46);
  iVar4 = FUN_03a3db80(0x15);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  this_00 = PrimeText_Game::Typeface_FZCuYuan_16;
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  uVar8 = PrimeText_PotentialTypeface::Typeface(this_00);
  *(undefined8 *)(this + 0x168) = uVar8;
  iVar1 = FUN_03a3db80(0x142);
  iVar2 = FUN_03a3db80(0x1a);
  iVar3 = FUN_03a3db80(0x3c);
  iVar4 = FUN_03a3db80(0x1e);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  pNVar10 = Sexy::RtObject::Cast<NoviceSevenDaysTaskData>(this_01);
  this_02 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,*(int *)(pNVar10 + 0x50),true);
  uVar5 = FUN_03a3db80(0xaa);
  uVar6 = FUN_03a3db80(7);
  uVar7 = FUN_03a3db80(0x32);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar5,uVar6,uVar7,uVar7);
  pPVar11 = (PrimeTypeface *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4b08);
  Lua::CUILabel::SetTypeface(this_02,pPVar11);
  TodStringTranslate(L"[NOVICESEVENDAYS_INTEGRAL]");
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_02);
  FUN_05476c50((string *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  uVar14 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(pNVar10 + 0x58);
    uVar13 = FUN_03a3d4ec(uVar8,*(undefined8 *)(pNVar10 + 0x60));
    if (uVar13 <= uVar14) break;
    piVar12 = (int *)FUN_03a3d4f8(uVar8,uVar14);
    plVar16 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,piVar12[1],true);
    uVar5 = FUN_03a3db80(0xe6);
    uVar6 = FUN_03a3db80(7);
    uVar7 = FUN_03a3db80(0x32);
    (**(code **)(*plVar16 + 0x198))(plVar16,uVar5,uVar6,uVar7,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,plVar16);
    uVar14 = uVar14 + 1;
  }
  pPVar15 = *(PVZ2UIButton **)(this + 0xf8);
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[RECALL_OFFER_CLAIM]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar15;
    FUN_05476c50(awStack_78);
    UpdateButtonState(this);
    pPVar15 = *(PVZ2UIButton **)(this + 0xf8);
    if (pPVar15 == (PVZ2UIButton *)0x0) goto LAB_03a3fba0;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac4a28,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac4a58,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(*(long **)(this + 0xf8),this + 0x188);
  plVar16 = *(long **)(this + 0xf8);
  pcVar17 = *(code **)(*plVar16 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
  (*pcVar17)(plVar16,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
LAB_03a3fba0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::RequestReward() */

void __thiscall NoviceSevenDaysTaskWidget::RequestReward(NoviceSevenDaysTaskWidget *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  string *this_01;
  long lVar2;
  DNetwork *this_02;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2080];
  string asStack_4c8 [1216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a4c;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_01,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a3dac8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_4c8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::ButtonDepress(int) */

void __thiscall
NoviceSevenDaysTaskWidget::ButtonDepress(NoviceSevenDaysTaskWidget *this,int param_1)

{
  int iVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    if (this[0x198] == (NoviceSevenDaysTaskWidget)0x0) {
      RequestReward(this);
    }
    else if (*(long **)(*(long *)(this + 0xe8) + 0x28) != (long *)0x0) {
      iVar1 = (**(code **)(**(long **)(*(long *)(this + 0xe8) + 0x28) + 0x50))();
      if (iVar1 == 0) {
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_00 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(this_00,4);
          TodStringTranslate(L"[HINT_DEFAULT_TITLE]");
          TodStringTranslate(L"[NOVICESEVENDAYS_CAN_NOT_JUMP]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
          std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
          UIMessageBox::SetBackground(this_00,pIVar2);
          std::string::~string(asStack_10);
          nop();
          lVar3 = UIMessageBox::GetButtonCancel(this_00);
          thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
          FUN_05476c50(auStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
        }
      }
      else {
        UISingletonDialog<UINoviceSevenDays>::CloseDialog();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NoviceSevenDaysTaskWidget::ButtonDepress(int) */

void __thiscall
NoviceSevenDaysTaskWidget::ButtonDepress(NoviceSevenDaysTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall NoviceSevenDaysTaskWidget::Draw(NoviceSevenDaysTaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  float *pfVar5;
  Image *pIVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float local_24;
  undefined1 auStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Draw9SliceImage(param_1,(Insets *)local_18,*(undefined8 *)(this + 0xf0));
  }
  uVar7 = *(undefined8 *)(this + 0x150);
  Sexy::Color::Color((Color *)local_18,4);
  WriteWordInRect(param_1,this + 0x130,this + 0x140,uVar7,(Insets *)local_18,3,1);
  lVar8 = *(long *)(this + 0xe8);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 0x20));
  puVar4 = (uint *)eastl::min_alt<int>((int *)(lVar8 + 0x10),(int *)(lVar3 + 0x28));
  uVar1 = *puVar4;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  Sexy::StrFormat("%d / %d",(Insets *)local_18,(ulong)uVar1,(ulong)*(uint *)(lVar3 + 0x28));
  Sexy::ToWString((string *)local_18);
  std::string::~string((string *)local_18);
  Sexy::Insets::Insets
            ((Insets *)local_18,*(int *)(this + 0x170),*(int *)(this + 0x174),*(int *)(this + 0x178)
             ,*(int *)(this + 0x17c));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4ad0);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar7);
  iVar2 = *(int *)(*(long *)(this + 0xe8) + 0x10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0xe8) + 0x20));
  local_18[0] = 0x3f800000;
  local_24 = (float)iVar2 / (float)*(int *)(lVar3 + 0x28);
  pfVar5 = eastl::min_alt<float>(&local_24,(float *)local_18);
  fVar9 = *pfVar5;
  if (fVar9 < 0.3) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4aa8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,*(int *)(this + 0x170),*(int *)(this + 0x174),
               (int)(fVar9 * (float)*(int *)(this + 0x178)),*(int *)(this + 0x17c));
  }
  else {
    Sexy::Insets::Insets
              ((Insets *)local_18,*(int *)(this + 0x170),*(int *)(this + 0x174),
               (int)(fVar9 * (float)*(int *)(this + 0x178)),*(int *)(this + 0x17c));
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4aa8);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar7);
  }
  uVar7 = *(undefined8 *)(this + 0x180);
  Sexy::Color::Color((Color *)local_18,4);
  WriteWordInRect(param_1,auStack_20,this + 0x170,uVar7,(Insets *)local_18,5,1);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac49b0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,*(int *)(this + 0x158),*(int *)(this + 0x15c),*(int *)(this + 0x160),
             *(int *)(this + 0x164));
  DrawTimer(this,param_1);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

