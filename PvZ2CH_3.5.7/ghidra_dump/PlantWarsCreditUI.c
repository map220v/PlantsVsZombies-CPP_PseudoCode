// Class: PlantWarsCreditUI


/* PlantWarsCreditUI::cancelTouch() */

void __thiscall PlantWarsCreditUI::cancelTouch(PlantWarsCreditUI *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x188) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x180);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* PlantWarsCreditUI::~PlantWarsCreditUI() */

void __thiscall PlantWarsCreditUI::~PlantWarsCreditUI(PlantWarsCreditUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066206c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsCreditUI_06620860;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06620890;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PlantWarsCreditUI::~PlantWarsCreditUI() */

void __thiscall PlantWarsCreditUI::~PlantWarsCreditUI(PlantWarsCreditUI *this)

{
  ~PlantWarsCreditUI(this + -0x10);
  return;
}


/* PlantWarsCreditUI::~PlantWarsCreditUI() */

void __thiscall PlantWarsCreditUI::~PlantWarsCreditUI(PlantWarsCreditUI *this)

{
  ~PlantWarsCreditUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantWarsCreditUI::~PlantWarsCreditUI() */

void __thiscall PlantWarsCreditUI::~PlantWarsCreditUI(PlantWarsCreditUI *this)

{
  ~PlantWarsCreditUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditUI::StaticClassInit() */

void PlantWarsCreditUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsCreditUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03414094,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsCreditUI::StaticGetClass() */

long * PlantWarsCreditUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsCreditUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsCreditUI::GetClass() const */

long * PlantWarsCreditUI::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsCreditUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditUI::handleTouch(Sexy::Touch const&) */

void __thiscall PlantWarsCreditUI::handleTouch(PlantWarsCreditUI *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar1 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((cVar1 != '\0') && (*(long *)(this + 0x188) == 0)) {
      uVar4 = 1;
      MiniGameCreditUI::startTouch((MiniGameCreditUI *)this,*(ulong *)param_1);
      goto LAB_03414a30;
    }
    break;
  case 1:
    if (cVar1 == '\0') {
      uVar4 = 0;
      if (*(long *)(this + 0x188) == *(long *)param_1) goto LAB_03414afc;
    }
    else if (*(long *)(this + 0x188) == 0) {
      uVar4 = 0;
      MiniGameCreditUI::startTouch((MiniGameCreditUI *)this,*(ulong *)param_1);
      goto LAB_03414a30;
    }
    break;
  case 3:
    lVar2 = *(long *)param_1;
    lVar3 = *(long *)(this + 0x188);
    if ((cVar1 == '\0') || (lVar2 != lVar3)) goto LAB_03414a7c;
    uVar4 = 1;
    this[0x178] = (PlantWarsCreditUI)((byte)this[0x178] ^ 1);
    goto LAB_03414afc;
  case 4:
    lVar3 = *(long *)(this + 0x188);
    lVar2 = *(long *)param_1;
LAB_03414a7c:
    uVar4 = 0;
    if (lVar3 != lVar2) goto LAB_03414a30;
LAB_03414afc:
    cancelTouch(this);
    goto LAB_03414a30;
  }
  uVar4 = 0;
LAB_03414a30:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditUI::SetCurrentCredit(int, bool) */

void __thiscall
PlantWarsCreditUI::SetCurrentCredit(PlantWarsCreditUI *this,int param_1,bool param_2)

{
  int iVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  *(int *)(this + 0x174) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = PlantWarsUtils::GetCurfentLevelIndex();
  local_10 = 2;
  local_c = *(int *)(this + 0x170) + 1;
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  iVar1 = PlantWarsUtils::GetLevelTargetStarInfoScore(iVar1,*piVar2);
  if (iVar1 <= *(int *)(this + 0x174)) {
    local_10 = 2;
    local_c = *(int *)(this + 0x170) + 1;
    piVar2 = eastl::min_alt<int>(&local_10,&local_c);
    *(int *)(this + 0x170) = *piVar2;
  }
  this[400] = (PlantWarsCreditUI)param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditUI::PlantWarsCreditUI() */

void __thiscall PlantWarsCreditUI::PlantWarsCreditUI(PlantWarsCreditUI *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PrimeTypeface *pPVar5;
  Image *pIVar6;
  Image *pIVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  Board *pBVar13;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined ***)this = &PTR_GetClass_066206c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantWarsCreditUI_06620860;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_06620890;
  this[0x178] = (PlantWarsCreditUI)0x0;
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  this[400] = (PlantWarsCreditUI)0x0;
  FUN_05478178((Insets *)&local_80,&DAT_056f11a8,aCStack_98);
  pPVar5 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f670);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f670);
  uVar8 = MakeStretchableNewLawnButton
                    (0,(ButtonListener *)(this + 0x168),(wstring *)&local_80,pPVar5,pIVar6,
                     (Image *)0x0,pIVar7,0,0);
  *(undefined8 *)(this + 0x180) = uVar8;
  FUN_05476c50((Insets *)&local_80);
  nop();
  plVar9 = *(long **)(this + 0x180);
  pcVar11 = *(code **)(*plVar9 + 0x170);
  uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,0);
  (*pcVar11)(plVar9,1,uVar8);
  plVar9 = *(long **)(this + 0x180);
  if (plVar9 != (long *)0x0) {
    uVar3 = FUN_03413710(*(undefined4 *)(this + 0x38));
    uVar4 = FUN_03413714(*(undefined4 *)(this + 0x3c));
    (**(code **)(*plVar9 + 0x198))(plVar9,0,0,uVar3,uVar4);
    lVar12 = *(long *)(this + 0x180);
    Sexy::Insets::Insets((Insets *)&local_80,0,0,*(int *)(lVar12 + 0x50),*(int *)(lVar12 + 0x54));
    lVar10 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar10 + 0x50);
    iVar2 = *(int *)(lVar10 + 0x54);
    *(undefined8 *)(lVar12 + 0x110) = local_80;
    *(undefined8 *)(lVar12 + 0x118) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    lVar12 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar12 + 0x50);
    iVar2 = *(int *)(lVar12 + 0x54);
    *(undefined8 *)(lVar10 + 0x120) = local_80;
    *(undefined8 *)(lVar10 + 0x128) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    lVar10 = *(long *)(this + 0x180);
    iVar1 = *(int *)(lVar10 + 0x50);
    iVar2 = *(int *)(lVar10 + 0x54);
    *(undefined8 *)(lVar12 + 0x140) = local_80;
    *(undefined8 *)(lVar12 + 0x148) = uStack_78;
    Sexy::Insets::Insets((Insets *)&local_80,0,0,iVar1,iVar2);
    *(undefined8 *)(lVar10 + 0x130) = local_80;
    *(undefined8 *)(lVar10 + 0x138) = uStack_78;
  }
  *(undefined8 *)(this + 0x188) = 0;
  pBVar13 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantWarsCreditUI,bool(PlantWarsCreditUI::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PlantWarsCreditUI,void(PlantWarsCreditUI::*)()>
            (aDStack_38,(Insets *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar13,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsCreditUI::StaticNew() */

PlantWarsCreditUI * PlantWarsCreditUI::StaticNew(void)

{
  PlantWarsCreditUI *this;
  
  this = ::operator_new(0x198);
  PlantWarsCreditUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsCreditUI::Draw(PlantWarsCreditUI *this,Graphics *param_1)

{
  PlantWarsCreditUI PVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  long lVar10;
  undefined8 uVar11;
  SalesProgressBar *pSVar12;
  LotteryResultProgressBar *pLVar13;
  size_t __n;
  string *__n_00;
  uint uVar14;
  float fVar15;
  float fVar16;
  GraphicsAutoState aGStack_a8 [8];
  FastCurve aFStack_a0 [8];
  string asStack_98 [8];
  undefined1 auStack_90 [8];
  int local_88 [3];
  int local_7c;
  float local_78 [2];
  float local_70;
  Insets aIStack_68 [16];
  int local_58 [4];
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  string asStack_28 [16];
  float local_18;
  float fStack_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_a8,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  iVar2 = FUN_03413710(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_03413714(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets((Insets *)local_88,0,0,iVar2,iVar3);
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f670);
  Sexy::Graphics::DrawImageBox(param_1,(TRect *)local_88,pIVar9);
  if (this[400] != (PlantWarsCreditUI)0x0) {
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f358);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f358);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    iVar2 = local_7c;
    iVar4 = (int)((float)local_7c * 1.3);
    iVar3 = (int)((float)iVar4 / ((float)iVar3 / (float)iVar5));
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f358);
    Sexy::Graphics::DrawImage(param_1,pIVar9,local_88[0] - iVar3,(iVar2 - iVar4) / 2,iVar3,iVar4);
  }
  iVar3 = 0;
  iVar2 = 0;
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9f250);
  iVar5 = *(int *)(lVar10 + 0x38);
  lVar10 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06a9f250);
  iVar4 = FUN_03413a8c(5);
  uVar14 = (local_7c - (int)((float)*(int *)(lVar10 + 0x3c) * 1.3)) / 2;
  __n = (size_t)uVar14;
  Sexy::FastCurve::SetOutRange(aFStack_a0,(float)iVar4,(float)(int)uVar14);
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)local_78);
  do {
    fVar16 = 0.0;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar3,0.0);
    fVar15 = (float)Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_a0,(SexyVector2 *)&local_18)
    ;
    Set8BytesTo0(asStack_28);
    if (*(int *)(this + 0x170) < iVar2) {
      std::string::append(asStack_28,"IMAGE_UI_CARDS_PLANT_ICON_STAR_DARK",__n);
    }
    else {
      std::string::append(asStack_28,"IMAGE_UI_CARDS_PLANT_ICON_STAR_HIGH_LIGHT",__n);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + (int)((float)iVar5 * 1.3);
    pIVar9 = (Image *)StringHelper::ToImage(asStack_28,false);
    EA::Text::Rectangle::Rectangle
              ((Rectangle *)&local_18,fVar15,fVar16,(float)*(int *)(pIVar9 + 0x38) * 1.3,
               (float)*(int *)(pIVar9 + 0x3c) * 1.3);
    __n = (size_t)(uint)(int)local_18;
    local_78[0] = local_18;
    local_70 = local_10;
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,(int)local_18,(int)fStack_14,(int)local_10,(int)local_c);
    std::string::~string(asStack_28);
  } while (iVar2 != 3);
  iVar2 = FUN_03413a8c(0xffffffba);
  iVar3 = FUN_03413a8c(0);
  iVar5 = FUN_03413710(*(undefined4 *)(this + 0x38));
  iVar4 = FUN_03413714(*(undefined4 *)(this + 0x3c));
  Sexy::Insets::Insets(aIStack_68,iVar2 + (int)local_78[0] + (int)local_70,iVar3,iVar5,iVar4);
  Sexy::Insets::Insets((Insets *)local_58,aIStack_68);
  iVar2 = FUN_03413a8c(0x37);
  local_58[0] = local_58[0] + iVar2;
  TodStringTranslate(L"[PLANT_WARS_CREDIT_TEXT_LABEL]");
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,asStack_28,aIStack_68,uVar11,(FastCurve *)&local_18,5,1);
  FUN_05476c50(asStack_28);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x174));
  Sexy::ToWString((string *)&local_38);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)&local_18,4);
  WriteWordInRect(param_1,asStack_28,(Insets *)local_58,uVar11,(FastCurve *)&local_18,5,1);
  FUN_05476c50(asStack_28);
  std::string::~string((string *)&local_38);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f460);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f460);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  uVar14 = (uint)((float)iVar2 * 0.25);
  iVar2 = (int)((float)(int)uVar14 / ((float)iVar2 / (float)iVar3));
  if (this[0x178] == (PlantWarsCreditUI)0x0) {
    iVar3 = FUN_03413710(*(undefined4 *)(this + 0x38));
    iVar5 = FUN_03413a8c(0x13);
    iVar4 = FUN_03413714(*(undefined4 *)(this + 0x3c));
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f460);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar3 - iVar5,(int)(iVar4 - uVar14) / 2,iVar2,uVar14);
    PVar1 = this[0x178];
  }
  else {
    iVar3 = FUN_03413710(*(undefined4 *)(this + 0x38));
    iVar5 = FUN_03413a8c(10);
    iVar4 = FUN_03413714(*(undefined4 *)(this + 0x3c));
    iVar6 = FUN_03413a8c(3);
    iVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f460);
    fVar15 = (float)Sexy::SexyMath::DegToRad(-90.0);
    Sexy::Graphics::DrawImageRotatedAndStretched
              ((Image *)param_1,iVar7,iVar3 - iVar5,iVar6 + (int)(iVar4 - uVar14) / 2,iVar2,
               (double)fVar15,0.0,0.0,(TRect *)(ulong)uVar14);
    PVar1 = this[0x178];
  }
  if (PVar1 != (PlantWarsCreditUI)0x0) {
    iVar2 = 0;
    iVar3 = FUN_03413710(*(undefined4 *)(this + 0x38));
    iVar5 = FUN_03413714(*(undefined4 *)(this + 0x3c));
    iVar4 = FUN_03413a8c(5);
    Sexy::Insets::Insets
              ((Insets *)&local_48,iVar3 + (iVar3 / 3) * -2,iVar5 + iVar4,(iVar3 / 3) * 2,iVar5 << 2
              );
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9f670);
    Sexy::Graphics::DrawImageBox(param_1,(TRect *)&local_48,pIVar9);
    iVar3 = FUN_03413a8c(0xf);
    iVar5 = local_3c / 3 + iVar3 * -2;
    iVar3 = iVar3 + local_44;
    __n_00 = (string *)(ulong)local_48;
    iVar4 = FUN_03413a8c(5);
    Set8BytesTo0(asStack_98);
    if (*(int *)(this + 0x170) < 0) goto LAB_03418bc0;
    do {
      std::string::append(asStack_98,"IMAGE_UI_CARDS_PLANT_ICON_STAR_HIGH_LIGHT",(size_t)__n_00);
      iVar6 = iVar2;
      while( true ) {
        pSVar12 = (SalesProgressBar *)StringHelper::ToImage(asStack_98,false);
        iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar12);
        Sexy::Insets::Insets
                  ((Insets *)&local_38,local_48 + iVar4,iVar3,
                   (int)((float)iVar5 / ((float)iVar2 / (float)iVar7)),iVar5);
        Sexy::Graphics::DrawImage(param_1,(Image *)pSVar12,local_38,local_34,local_30,local_2c);
        iVar7 = PlantWarsUtils::GetCurfentLevelIndex();
        iVar2 = iVar6 + 1;
        iVar6 = PlantWarsUtils::GetLevelTargetStarInfoScore(iVar7,iVar6);
        TodStringTranslate(L"[PLANT_WARS_CREDIT_STAR_TEXT]");
        TodReplaceNumberString((wstring *)&local_18,L"{NUMBER}",iVar6);
        FUN_05476c50((FastCurve *)&local_18);
        iVar7 = local_30;
        iVar6 = local_30 + local_38;
        iVar8 = FUN_03413a8c(5);
        Sexy::Insets::Insets
                  ((Insets *)asStack_28,iVar6 + iVar8,local_34,(local_40 - iVar8) - iVar7,
                   local_3c / 3);
        uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Color::Color((Color *)&local_18,1);
        __n_00 = asStack_28;
        WriteWordInRect(param_1,auStack_90,asStack_28,uVar11,(FastCurve *)&local_18,2,1);
        iVar6 = FUN_03413a8c(0xf);
        iVar3 = iVar3 + iVar5 + iVar6 * 2;
        FUN_05476c50(auStack_90);
        std::string::~string(asStack_98);
        if (iVar2 == 3) goto LAB_03418844;
        Set8BytesTo0(asStack_98);
        if (iVar2 <= *(int *)(this + 0x170)) break;
LAB_03418bc0:
        std::string::append(asStack_98,"IMAGE_UI_CARDS_PLANT_ICON_STAR_DARK",(size_t)__n_00);
        iVar6 = iVar2;
      }
    } while( true );
  }
LAB_03418844:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantWarsCreditUI::Draw(Sexy::Graphics*) */

void __thiscall PlantWarsCreditUI::Draw(PlantWarsCreditUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

