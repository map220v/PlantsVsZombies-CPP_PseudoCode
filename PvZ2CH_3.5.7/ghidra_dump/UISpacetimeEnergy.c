// Class: UISpacetimeEnergy


/* UISpacetimeEnergy::TimeEnergyTrigger(int) */

void __thiscall UISpacetimeEnergy::TimeEnergyTrigger(UISpacetimeEnergy *this,int param_1)

{
  if (param_1 == 0) {
    this[0x1d9] = (UISpacetimeEnergy)0x1;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 1) {
      return;
    }
    this[0x1da] = (UISpacetimeEnergy)0x1;
    return;
  }
  this[0x1d8] = (UISpacetimeEnergy)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::StaticClassInit() */

void UISpacetimeEnergy::StaticClassInit(void)

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
    std::string::string(asStack_10,"UISpacetimeEnergy");
    (*pcVar2)(plVar1,asStack_10,FUN_03db7f74,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeEnergy::StaticGetClass() */

long * UISpacetimeEnergy::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpacetimeEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpacetimeEnergy::GetClass() const */

long * UISpacetimeEnergy::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpacetimeEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpacetimeEnergy::SetValueMax(float) */

void __thiscall UISpacetimeEnergy::SetValueMax(UISpacetimeEnergy *this,float param_1)

{
  *(float *)(this + 0x1d0) = param_1;
  *(float *)(this + 0x1d4) = param_1;
  return;
}


/* UISpacetimeEnergy::GetMaxValue() */

undefined4 __thiscall UISpacetimeEnergy::GetMaxValue(UISpacetimeEnergy *this)

{
  return *(undefined4 *)(this + 0x1d4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::onLoadComplete() */

void __thiscall UISpacetimeEnergy::onLoadComplete(UISpacetimeEnergy *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  SecretGachaMgr *this_00;
  wchar16 *extraout_x0;
  SexyVector2 *pSVar5;
  wchar16 *extraout_x1;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *pLVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int local_18;
  int local_14;
  string asStack_10 [8];
  LineBreakCategory *local_8;
  
  pLVar8 = (LineBreakCategory *)&__stack_chk_guard;
  pLVar6 = (LineBreakCategory *)&local_14;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_14 = 0;
  pLVar7 = ___stack_chk_guard;
  this_00 = (SecretGachaMgr *)
            Android::Graphics::GetScreenSizeInPixels
                      (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),&local_18,(int *)pLVar6);
  iVar4 = local_14;
  iVar3 = local_18;
  SecretGachaMgr::GetScreenType(this_00);
  bVar1 = std::operator==(asStack_10,"Full");
  std::string::~string(asStack_10);
  if (bVar1) {
    pSVar5 = (SexyVector2 *)UIWidget::GetPositionOffset((UIWidget *)this);
    iVar3 = FUN_03db7a34(0x78);
    iVar4 = FUN_03db7a34(0);
    fVar10 = (float)iVar3;
    fVar11 = (float)iVar4;
LAB_03db84bc:
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,fVar10,fVar11);
    uVar9 = Sexy::SexyVector2::operator-(pSVar5,(SexyVector2 *)asStack_10);
  }
  else {
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (extraout_x0,extraout_x1,pLVar6,pLVar7,pLVar8);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar2 == '\0') {
        if ((float)iVar3 / (float)iVar4 < 2.0) goto LAB_03db8400;
        pSVar5 = (SexyVector2 *)UIWidget::GetPositionOffset((UIWidget *)this);
        iVar3 = FUN_03db7a34(100);
        iVar4 = FUN_03db7a34(0);
        fVar10 = (float)iVar3;
        fVar11 = (float)iVar4;
      }
      else {
        pSVar5 = (SexyVector2 *)UIWidget::GetPositionOffset((UIWidget *)this);
        iVar3 = FUN_03db7a34(100);
        iVar4 = FUN_03db7a34(0);
        fVar10 = (float)iVar3;
        fVar11 = (float)iVar4;
      }
      goto LAB_03db84bc;
    }
    pSVar5 = (SexyVector2 *)UIWidget::GetPositionOffset((UIWidget *)this);
    iVar3 = FUN_03db7a34(0x82);
    iVar4 = FUN_03db7a34(0);
    fVar11 = (float)iVar4;
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,(float)iVar3,fVar11);
    uVar9 = Sexy::SexyVector2::operator+(pSVar5,(SexyVector2 *)asStack_10);
  }
  UIWidget::SetPositionOffset(uVar9,fVar11,this);
LAB_03db8400:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::onCollectableCollectionFinished(Collectable*) */

void __thiscall
UISpacetimeEnergy::onCollectableCollectionFinished(UISpacetimeEnergy *this,Collectable *param_1)

{
  bool bVar1;
  
  if ((param_1 != (Collectable *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<CollectableSpacetimeEnergy>((RtObject *)param_1), bVar1)) {
    *(float *)(this + 0x1d0) = *(float *)(this + 0x1d0) + _FUN_03db8578 * *(float *)(this + 0x1d4);
  }
  return;
}


/* UISpacetimeEnergy::DrawDigitalNumber(Sexy::Graphics*, int, int) */

void __thiscall
UISpacetimeEnergy::DrawDigitalNumber
          (UISpacetimeEnergy *this,Graphics *param_1,int param_2,int param_3)

{
  int *piVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x208);
    uVar3 = FUN_03db7804(uVar5,*(undefined8 *)(this + 0x210));
    if (uVar3 <= uVar4) break;
    piVar1 = (int *)FUN_03db781c(uVar5,uVar4);
    this_00 = (RtWeakPtr *)FUN_03db7824(*(undefined8 *)(this + 0x220),(long)*piVar1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar2,param_2 + *(int *)(this + 0x238) * (int)uVar4,param_3,
               *(int *)(this + 0x238),*(int *)(this + 0x23c));
    uVar4 = uVar4 + 1;
  }
  return;
}


/* UISpacetimeEnergy::UpdateEnergyImage(int) */

void __thiscall UISpacetimeEnergy::UpdateEnergyImage(UISpacetimeEnergy *this,int param_1)

{
  undefined8 uVar1;
  
  if (0x4f < param_1) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada010);
    *(undefined8 *)(this + 0x1e8) = uVar1;
    return;
  }
  if (param_1 < 0x32) {
    if (param_1 < 0x14) {
      uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9d40);
      *(undefined8 *)(this + 0x1e8) = uVar1;
      return;
    }
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada090);
    *(undefined8 *)(this + 0x1e8) = uVar1;
    return;
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9e50);
  *(undefined8 *)(this + 0x1e8) = uVar1;
  return;
}


/* UISpacetimeEnergy::UpdateSpiralMachineImage() */

void __thiscall UISpacetimeEnergy::UpdateSpiralMachineImage(UISpacetimeEnergy *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(this + 0x244);
  *(int *)(this + 0x244) = iVar1 + 1;
  iVar1 = ((iVar1 + 1) / 3) % 6;
  if (iVar1 == 0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada0b8);
    *(undefined8 *)(this + 0x248) = uVar2;
    return;
  }
  if (iVar1 == 1) {
LAB_03db8ba8:
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9cc0);
    *(undefined8 *)(this + 0x248) = uVar2;
    return;
  }
  if (iVar1 == 2) {
LAB_03db8bc4:
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9bf8);
    *(undefined8 *)(this + 0x248) = uVar2;
    return;
  }
  if (iVar1 == 3) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9c98);
    *(undefined8 *)(this + 0x248) = uVar2;
  }
  else {
    if (iVar1 == 4) goto LAB_03db8bc4;
    if (iVar1 == 5) goto LAB_03db8ba8;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::Draw(Sexy::Graphics*) */

void __thiscall UISpacetimeEnergy::Draw(UISpacetimeEnergy *this,Graphics *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  SalesProgressBar *pSVar12;
  LineBreakCategory *pLVar13;
  LineBreakCategory *pLVar14;
  LineBreakCategory *pLVar15;
  StandaloneEffect *pSVar16;
  LotteryResultProgressBar *pLVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  int local_2c;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  iVar10 = local_34;
  iVar9 = local_38;
  uVar3 = FUN_03db7a34(10);
  pLVar15 = (LineBreakCategory *)(ulong)uVar3;
  uVar1 = iVar10 + (int)(local_2c - uVar3) / 2;
  pLVar13 = (LineBreakCategory *)(ulong)uVar1;
  uVar4 = FUN_03db7a34(200);
  pLVar14 = (LineBreakCategory *)(ulong)uVar4;
  auVar20 = Sexy::Insets::Insets(aIStack_28,iVar9,uVar1,uVar4,uVar3);
  pSVar16 = *(StandaloneEffect **)(this + 0x1e0);
  fVar19 = *(float *)(this + 0x1d0);
  fVar18 = *(float *)(this + 0x1d4);
  if (pSVar16 != (StandaloneEffect *)0x0) {
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar20._0_8_,auVar20._8_8_,pLVar13,pLVar14,pLVar15);
    iVar9 = local_38;
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      iVar9 = local_38;
      if (cVar2 == '\0') {
        pSVar16 = *(StandaloneEffect **)(this + 0x1e0);
        iVar5 = FUN_03db7a34(0x14);
        iVar10 = iVar5 + local_34;
      }
      else {
        pSVar16 = *(StandaloneEffect **)(this + 0x1e0);
        iVar5 = FUN_03db7a34(0xfa);
        iVar10 = local_34;
        iVar6 = FUN_03db7a34(10);
        iVar10 = iVar10 + iVar6;
      }
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(iVar9 - iVar5),(float)iVar10,0.0);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar16,(SexyVector3 *)&local_18,900000);
    }
    else {
      iVar5 = FUN_03db7a34(0x69);
      iVar10 = local_34;
      iVar6 = FUN_03db7a34(7);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(iVar9 - iVar5),(float)(iVar10 + iVar6),0.0)
      ;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar16,(SexyVector3 *)&local_18,900000);
    }
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1e0),param_1);
  }
  iVar9 = local_38;
  pLVar17 = *(LotteryResultProgressBar **)(this + 0x248);
  if (pLVar17 != (LotteryResultProgressBar *)0x0) {
    iVar5 = FUN_03db7a34(0x1e);
    iVar10 = local_34;
    iVar6 = FUN_03db7a34(5);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar12 = *(SalesProgressBar **)(this + 0x248);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar12,iVar9 - iVar5,iVar10 + iVar6,(int)((float)iVar7 * 0.7),
               (int)((float)iVar8 * 0.7));
  }
  iVar9 = local_38;
  iVar5 = FUN_03db7a34(0x41);
  iVar10 = local_34;
  iVar6 = FUN_03db7a34(10);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada010);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada010);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar9 + iVar5,iVar10 + iVar6,(int)((float)iVar7 * 0.525),
             (int)((float)iVar8 * 0.7));
  *(undefined8 *)(this + 0x1f0) = local_18;
  *(undefined8 *)(this + 0x1f8) = uStack_10;
  Sexy::Graphics::PushState(param_1);
  if (*(long *)(this + 0x1e8) != 0) {
    Sexy::Graphics::ClipRect
              (param_1,*(int *)(this + 0x1f0),*(int *)(this + 500),
               (int)((float)*(int *)(this + 0x1f8) * (fVar19 / fVar18)),*(int *)(this + 0x1fc));
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x1e8));
    pSVar12 = *(SalesProgressBar **)(this + 0x1e8);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar9,iVar10);
    Sexy::Graphics::DrawImage(param_1,(Image *)pSVar12,(TRect *)(this + 0x1f0),(TRect *)&local_18);
  }
  Sexy::Graphics::PopState(param_1);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9f70);
  iVar10 = local_34;
  iVar9 = local_38;
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9f70);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9f70);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,iVar9,iVar10,(int)((float)iVar5 * 0.7),(int)((float)iVar6 * 0.7));
  iVar9 = FUN_03db7a34(0x16);
  iVar10 = FUN_03db7a34(0xc);
  DrawDigitalNumber(this,param_1,local_38 + iVar9,local_34 + iVar10);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UISpacetimeEnergy::Draw(Sexy::Graphics*) */

void __thiscall UISpacetimeEnergy::Draw(UISpacetimeEnergy *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::InitEnergyRect() */

void __thiscall UISpacetimeEnergy::InitEnergyRect(UISpacetimeEnergy *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int local_28;
  int local_24;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  iVar2 = FUN_03db7a34(0x14);
  iVar3 = FUN_03db7a34(0x1e);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada010);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada010);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets((Insets *)&local_18,local_28 + iVar2,local_24 + iVar3,iVar4,iVar5);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x1f0) = local_18;
  *(undefined8 *)(this + 0x1f8) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeEnergy::registerForEvents() */

void __thiscall UISpacetimeEnergy::registerForEvents(UISpacetimeEnergy *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x198);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<UISpacetimeEnergy,void(UISpacetimeEnergy::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionFinished,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::InitSpiralEffect() */

void __thiscall UISpacetimeEnergy::InitSpiralEffect(UISpacetimeEnergy *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *this_00;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1e0) == 0) {
    pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x1e0) = pEVar3;
    std::string::string(asStack_20,"POPANIM_EFFECTS_TIME_ENERGY_SPIRAL_MACHINE");
    GetPAMByName(asStack_20);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x1e0),(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1e0),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1e0),true);
    this_00 = *(StandaloneEffect **)(this + 0x1e0);
    iVar1 = FUN_03db7a34(0x1e);
    iVar2 = FUN_03db7a34(0xf);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)iVar1,(float)iVar2,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aRStack_18,900000);
    (**(code **)(**(long **)(this + 0x1e0) + 0xb8))(0x3f800000,0x3f800000,*(long **)(this + 0x1e0));
    pEVar3 = *(Effect_PopAnim **)(this + 0x1e0);
    std::string::string((string *)aRStack_18,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::~UISpacetimeEnergy() */

void __thiscall UISpacetimeEnergy::~UISpacetimeEnergy(UISpacetimeEnergy *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__UISpacetimeEnergy_06777230;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06777080;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 0x18))();
    *(undefined8 *)(this + 0x1e0) = 0;
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_TimeEnergy");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_TimeEnergy");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x220));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x208));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UISpacetimeEnergy::~UISpacetimeEnergy() */

void __thiscall UISpacetimeEnergy::~UISpacetimeEnergy(UISpacetimeEnergy *this)

{
  ~UISpacetimeEnergy(this + -0x10);
  return;
}


/* UISpacetimeEnergy::~UISpacetimeEnergy() */

void __thiscall UISpacetimeEnergy::~UISpacetimeEnergy(UISpacetimeEnergy *this)

{
  ~UISpacetimeEnergy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpacetimeEnergy::~UISpacetimeEnergy() */

void __thiscall UISpacetimeEnergy::~UISpacetimeEnergy(UISpacetimeEnergy *this)

{
  ~UISpacetimeEnergy(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::InitDigitalNumber() */

void __thiscall UISpacetimeEnergy::InitDigitalNumber(UISpacetimeEnergy *this)

{
  vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *this_00;
  undefined4 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
            (this + 0x220);
  *(undefined4 *)(this + 0x200) = 2;
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x208));
  uVar1 = FUN_03db7a34(0x10);
  *(undefined4 *)(this + 0x238) = uVar1;
  uVar1 = FUN_03db7a34(0x16);
  *(undefined4 *)(this + 0x23c) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9c70);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9ec0);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9e78);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9d18);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9ef0);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9f98);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ada068);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9b80);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9c48);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ad9fe8);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::push_back
            (this_00,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::UISpacetimeEnergy() */

void __thiscall UISpacetimeEnergy::UISpacetimeEnergy(UISpacetimeEnergy *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06777080;
  *(undefined ***)(this + 0x10) = &PTR__UISpacetimeEnergy_06777230;
  Sexy::Insets::Insets((Insets *)(this + 0x1f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"Effects_TimeEnergy");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_TimeEnergy");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this[0x1d8] = (UISpacetimeEnergy)0x0;
  this[0x1d9] = (UISpacetimeEnergy)0x0;
  this[0x1da] = (UISpacetimeEnergy)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x437a0000;
  *(undefined4 *)(this + 0x1d4) = 0x437a0000;
  InitDigitalNumber(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,TimeEnergyTrigger);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UISpacetimeEnergy,void(UISpacetimeEnergy::*)(int)>>
            ((MessageRouter *)puVar1,Message::TimeEnergyTrigger,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeEnergy::StaticNew() */

UISpacetimeEnergy * UISpacetimeEnergy::StaticNew(void)

{
  UISpacetimeEnergy *this;
  
  this = ::operator_new(0x250);
  UISpacetimeEnergy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpacetimeEnergy::UpdateDigitalNumber() */

void __thiscall UISpacetimeEnergy::UpdateDigitalNumber(UISpacetimeEnergy *this)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double __y;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (int)((*(float *)(this + 0x1d0) / *(float *)(this + 0x1d4)) * 100.0);
  if (99 < iVar1) {
    iVar1 = 99;
  }
  if (*(int *)(this + 0x240) != iVar1) {
    *(int *)(this + 0x240) = iVar1;
    UpdateEnergyImage(this,iVar1);
    iVar2 = *(int *)(this + 0x200);
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x208));
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      do {
        __y = (double)iVar2;
        iVar2 = iVar2 + -1;
        dVar3 = pow(10.0,-__y);
        local_c = (int)(dVar3 * (double)iVar1);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x208),&local_c);
        dVar3 = pow(10.0,__y);
        iVar1 = (int)((double)iVar1 - (double)local_c * dVar3);
      } while (iVar2 != -1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpacetimeEnergy::onUpdate() */

void __thiscall UISpacetimeEnergy::onUpdate(UISpacetimeEnergy *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    return;
  }
  fVar2 = (float)PVZ_Dt();
  uVar3 = ClampFloat(*(float *)(this + 0x1d0) - fVar2,0.0,*(float *)(this + 0x1d4));
  *(undefined4 *)(this + 0x1d0) = uVar3;
  if (*(StandaloneEffect **)(this + 0x1e0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1e0));
  }
  UpdateDigitalNumber(this);
  UpdateSpiralMachineImage(this);
  return;
}

