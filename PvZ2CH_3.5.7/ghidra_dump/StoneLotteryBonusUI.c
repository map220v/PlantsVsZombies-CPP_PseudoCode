// Class: StoneLotteryBonusUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::~StoneLotteryBonusUI() */

void __thiscall StoneLotteryBonusUI::~StoneLotteryBonusUI(StoneLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c44e0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066c41a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  FUN_05476c50(this + 400);
  FUN_05476c50(this + 0x188);
  std::string::~string((string *)(this + 0x180));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLotteryBonusUI::~StoneLotteryBonusUI() */

void __thiscall StoneLotteryBonusUI::~StoneLotteryBonusUI(StoneLotteryBonusUI *this)

{
  ~StoneLotteryBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::InitBonusDes() */

void __thiscall StoneLotteryBonusUI::InitBonusDes(StoneLotteryBonusUI *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined8 local_18;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar1 = local_10 / 2;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar3 = FUN_03915908(500);
  iVar4 = FUN_03915908(0x32);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(local_28 + iVar1) - iVar3 / 2,
             *(int *)(this + 0x154) + *(int *)(this + 0x15c),iVar3,iVar4);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x170) = local_18;
  *(ulong *)(this + 0x178) = CONCAT44(uStack_c,local_10);
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLotteryBonusUI::ButtonDepress(int) */

void __thiscall StoneLotteryBonusUI::ButtonDepress(StoneLotteryBonusUI *this,int param_1)

{
  char cVar1;
  long lVar2;
  StoneLottery *pSVar3;
  
  if (param_1 == 20000) {
    cVar1 = LawnApp::IsStoneLotteryValid(gLawnApp);
    if (cVar1 != '\0') {
      MessageRouter::Post((_func_void *)gMessageRouter);
      pSVar3 = (StoneLottery *)LawnApp::GetStoneLottery(gLawnApp);
      StoneLottery::CloseBonusEffect(pSVar3);
      return;
    }
    lVar2 = UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    lVar2 = FUN_03915440(*(undefined8 *)(lVar2 + 0x1e8));
    if (lVar2 != 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      lVar2 = UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
      pSVar3 = (StoneLottery *)FUN_03915440(*(undefined8 *)(lVar2 + 0x1e8));
      StoneLottery::CloseBonusEffect(pSVar3);
      return;
    }
  }
  return;
}


/* non-virtual thunk to StoneLotteryBonusUI::ButtonDepress(int) */

void __thiscall StoneLotteryBonusUI::ButtonDepress(StoneLotteryBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::DrawBonus(Sexy::Graphics*) */

void __thiscall StoneLotteryBonusUI::DrawBonus(StoneLotteryBonusUI *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar3;
  long lVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a0));
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x150));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_18);
  }
  else {
    bVar1 = std::operator!=("",(string *)(this + 0x180));
    if ((bVar1) && (cVar2 = FUN_039153c8(this[0x115]), cVar2 == '\0')) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x180));
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(this + 0x150) + *(int *)(this_01 + 0x30),
                 *(int *)(this + 0x154) + *(int *)(this_01 + 0x34),*(int *)(this_01 + 0x28),
                 *(int *)(this_01 + 0x2c));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar3,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20));
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar1) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar4 + 0x48));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar3,*(int *)(this + 0x150) + *(int *)(this_01 + 0x18),
                   *(int *)(this + 0x154) + *(int *)(this_01 + 0x1c),(TRect *)(this_01 + 8));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::InitView() */

void __thiscall StoneLotteryBonusUI::InitView(StoneLotteryBonusUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  undefined8 uVar9;
  PVZ2UIButton *pPVar10;
  long *plVar11;
  int iVar12;
  code *pcVar13;
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (StoneLotteryBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba598);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  iVar12 = (int)((double)iVar3 * 0.7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba598);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar5 = FUN_03915908(500);
  iVar3 = FUN_03915908(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar6 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar1 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar3 = iVar6 + iVar4 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar3,iVar5,iVar2);
  iVar1 = iVar1 + iVar5 / 2;
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar5 = FUN_03915908(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar12 / 2) - iVar5,iVar6,iVar12,iVar4);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar6 = FUN_03915908(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x130),*(int *)(this + 0x134) - iVar6,iVar12,iVar4)
  ;
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  iVar5 = FUN_03915908(100);
  iVar6 = *(int *)(this + 0x13c);
  iVar4 = *(int *)(this + 0x134);
  iVar12 = FUN_03915908(0x1e);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar5 / 2,iVar4 + iVar6 + iVar12,iVar5,iVar5);
  *(undefined8 *)(this + 0x150) = local_40;
  *(undefined8 *)(this + 0x158) = uStack_38;
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abac98);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abac98);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar5 = FUN_03915908(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - (int)((double)iVar6 * 2.5) / 2,
             ((iVar3 + iVar2) - (int)((double)iVar4 * 0.8)) - iVar5,(int)((double)iVar6 * 2.5),
             (int)((double)iVar4 * 0.8));
  pPVar10 = *(PVZ2UIButton **)(this + 0x198);
  *(undefined8 *)(this + 0x160) = local_40;
  *(undefined8 *)(this + 0x168) = uStack_38;
  if (pPVar10 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar10 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar10,20000,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x198) = pPVar10;
    FUN_05476c50(aPStack_78);
    pPVar10 = *(PVZ2UIButton **)(this + 0x198);
    if (pPVar10 == (PVZ2UIButton *)0x0) goto LAB_039183b0;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aba610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aba2d8,3);
  PVZ2UIButton::SetDialogStates(pPVar10,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x198) + 0x1a0))(*(long **)(this + 0x198),this + 0x160);
  plVar11 = *(long **)(this + 0x198);
  pcVar13 = *(code **)(*plVar11 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar13)(plVar11,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x198));
LAB_039183b0:
  InitBonusDes(this);
  LotteryBonusUI::InitShiningAnims((LotteryBonusUI *)this);
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::StoneLotteryBonusUI() */

void __thiscall StoneLotteryBonusUI::StoneLotteryBonusUI(StoneLotteryBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (StoneLotteryBonusUI)0x0;
  this[0x129] = (StoneLotteryBonusUI)0x0;
  *(undefined ***)this = &PTR_GetClass_066c41a0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c44e0;
  *(undefined4 *)(this + 300) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  Sexy::Insets::Insets((Insets *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  std::string::string((string *)(this + 0x180),"");
  nop();
  FUN_05478178(this + 0x188,&DAT_056f11a8,asStack_10);
  nop();
  FUN_05478178(this + 400,&DAT_056f11a8,asStack_10);
  nop();
  *(undefined8 *)(this + 0x198) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1a8));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1d8));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryBonusUI::Draw(Sexy::Graphics*) */

void __thiscall StoneLotteryBonusUI::Draw(StoneLotteryBonusUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1d8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1d8),param_1);
  }
  PopingWidget::GetMainRect();
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba300);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_40,uVar2);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba598);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x130));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  DrawBonus(this,param_1);
  cVar1 = FUN_039153c8(this[0x115]);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x188,this + 0x140,uVar2,aIStack_40,5,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 400,this + 0x170,uVar2,aIStack_40,5,1);
  }
  else {
    PVZ2UIButton::GetImageNormal();
    Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x160));
    PopingWidget::DrawPoping3SliceImage((PopingWidget *)this,param_1,local_38,aIStack_50);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1a8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1a8),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

