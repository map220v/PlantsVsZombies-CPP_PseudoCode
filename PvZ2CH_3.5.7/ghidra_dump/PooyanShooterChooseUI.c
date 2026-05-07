// Class: PooyanShooterChooseUI


/* PooyanShooterChooseUI::ButtonPress(int) */

int PooyanShooterChooseUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PooyanShooterChooseUI::ButtonPress(int) */

void __thiscall PooyanShooterChooseUI::ButtonPress(PooyanShooterChooseUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* PooyanShooterChooseUI::SetAllButtonEnable(bool) */

void __thiscall PooyanShooterChooseUI::SetAllButtonEnable(PooyanShooterChooseUI *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = !param_1;
  (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),bVar1);
  (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),bVar1);
  (**(code **)(**(long **)(this + 0x130) + 0x188))(*(long **)(this + 0x130),bVar1);
  (**(code **)(**(long **)(this + 0x138) + 0x188))(*(long **)(this + 0x138),bVar1);
  (**(code **)(**(long **)(this + 0x140) + 0x188))(*(long **)(this + 0x140),bVar1);
  (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),bVar1);
  (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),bVar1);
  return;
}


/* PooyanShooterChooseUI::DeleteShooterGroupPreview() */

void __thiscall PooyanShooterChooseUI::DeleteShooterGroupPreview(PooyanShooterChooseUI *this)

{
  long *plVar1;
  PooyanShooterChooseUI *pPVar2;
  
  pPVar2 = this + 0x148;
  do {
    plVar1 = *(long **)pPVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      *(undefined8 *)pPVar2 = 0;
    }
    pPVar2 = pPVar2 + 0x10;
  } while (pPVar2 != this + 0x188);
  return;
}


/* PooyanShooterChooseUI::DeleteShipGroupPreview() */

void __thiscall PooyanShooterChooseUI::DeleteShipGroupPreview(PooyanShooterChooseUI *this)

{
  long *plVar1;
  PooyanShooterChooseUI *pPVar2;
  
  pPVar2 = this + 0x188;
  do {
    plVar1 = *(long **)pPVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      *(undefined8 *)pPVar2 = 0;
    }
    pPVar2 = pPVar2 + 8;
  } while (pPVar2 != this + 0x1a8);
  return;
}


/* PooyanShooterChooseUI::Update() */

void __thiscall PooyanShooterChooseUI::Update(PooyanShooterChooseUI *this)

{
  PopAnimRig *this_00;
  StandaloneEffect *this_01;
  PooyanShooterChooseUI *pPVar1;
  PooyanShooterChooseUI *pPVar2;
  float fVar3;
  float fVar4;
  
  pPVar1 = this + 0x148;
  pPVar2 = this + 0x188;
  do {
    this_00 = *(PopAnimRig **)pPVar1;
    if ((this_00 != (PopAnimRig *)0x0) && (pPVar1[0xc] != (PooyanShooterChooseUI)0x0)) {
      fVar3 = (float)PVZ_RealT();
      fVar4 = (float)PVZ_RealDt();
      PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
    }
    this_01 = *(StandaloneEffect **)pPVar2;
    pPVar1 = pPVar1 + 0x10;
    pPVar2 = pPVar2 + 8;
    if (this_01 != (StandaloneEffect *)0x0) {
      StandaloneEffect::Update(this_01);
    }
  } while (pPVar1 != this + 0x188);
  return;
}


/* PooyanShooterChooseUI::GetBackToMap() */

void PooyanShooterChooseUI::GetBackToMap(void)

{
  LevelModuleManager *this;
  PooyanModule *this_00;
  long *plVar1;
  
  plVar1 = *(long **)(gLawnApp + 0x9f0);
  if ((plVar1 != (long *)0x0) &&
     (this = (LevelModuleManager *)FUN_0477b5b8(plVar1[0x15b]), this != (LevelModuleManager *)0x0))
  {
    this_00 = LevelModuleManager::GetModuleByClass<PooyanModule>(this);
    if (this_00 != (PooyanModule *)0x0) {
      PooyanModule::KillPooyanShooterChooseUI(this_00);
    }
    plVar1 = *(long **)(gLawnApp + 0x9f0);
  }
  (**(code **)(*plVar1 + 800))(plVar1,0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooterChooseUI::CreateShipGroupPreview() */

void __thiscall PooyanShooterChooseUI::CreateShipGroupPreview(PooyanShooterChooseUI *this)

{
  LotteryResultProgressBar *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *pSVar3;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  if (*(long *)(this + 0x188) == 0) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x188) = pEVar1;
    std::string::string(asStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    pEVar1 = *(Effect_PopAnim **)(this + 0x188);
    *(float *)(pRVar2 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.00065625005;
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    pSVar3 = *(StandaloneEffect **)(this + 0x188);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x188),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x188),true);
    pEVar1 = *(Effect_PopAnim **)(this + 0x188);
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (*(long *)(this + 400) == 0) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 400) = pEVar1;
    std::string::string(asStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    pEVar1 = *(Effect_PopAnim **)(this + 400);
    *(float *)(pRVar2 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.00065625005;
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    pSVar3 = *(StandaloneEffect **)(this + 400);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 400),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 400),true);
    pEVar1 = *(Effect_PopAnim **)(this + 400);
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (*(long *)(this + 0x198) == 0) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x198) = pEVar1;
    std::string::string(asStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    pEVar1 = *(Effect_PopAnim **)(this + 0x198);
    *(float *)(pRVar2 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.00065625005;
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    pSVar3 = *(StandaloneEffect **)(this + 0x198);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x198),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x198),true);
    pEVar1 = *(Effect_PopAnim **)(this + 0x198);
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (*(long *)(this + 0x1a0) == 0) {
    pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x1a0) = pEVar1;
    std::string::string(asStack_10,"POPANIM_POOYAN_POOYAN_SHOOTER");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    pEVar1 = *(Effect_PopAnim **)(this + 0x1a0);
    *(float *)(pRVar2 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.00065625005;
    Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
    pSVar3 = *(StandaloneEffect **)(this + 0x1a0);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1a0),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x1a0),true);
    pEVar1 = *(Effect_PopAnim **)(this + 0x1a0);
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooterChooseUI::Draw(Sexy::Graphics*) */

void __thiscall PooyanShooterChooseUI::Draw(PooyanShooterChooseUI *this,Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  SalesProgressBar *pSVar17;
  LotteryResultProgressBar *pLVar18;
  Image *pIVar19;
  PopAnimRig *this_01;
  long lVar20;
  PooyanShooterChooseUI *pPVar21;
  int unaff_s13;
  int unaff_s14;
  PooyanShooterChooseUI *local_238;
  GraphicsAutoState aGStack_228 [8];
  string asStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  Insets aIStack_208 [16];
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  string asStack_1d8 [16];
  CachedUIResourcePtr<Sexy::Image> aCStack_1c8 [40];
  Insets aIStack_1a0 [40];
  SexyTransform2D aSStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [4];
  undefined1 auStack_164 [348];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_228,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_1a0,0,0,0,0x96);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_1a0);
  iVar3 = FUN_0477c09c(800);
  iVar4 = FUN_0477c09c(0x640);
  Sexy::Graphics::FillRect(param_1,-iVar3,0,iVar4 + *(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Color::Color((Color *)aIStack_1a0,1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_1a0);
  iVar4 = FUN_0477c09c(800);
  iVar3 = *(int *)(this + 0x50);
  lVar20 = *(long *)(this + 0x110);
  Sexy::Insets::Insets
            (aIStack_208,*(int *)(lVar20 + 0x48),*(int *)(lVar20 + 0x4c),*(int *)(lVar20 + 0x50),
             *(int *)(lVar20 + 0x54));
  cVar2 = (**(code **)(**(long **)(this + 0x110) + 0x330))(*(long **)(this + 0x110));
  if (cVar2 == '\0') {
    Sexy::Insets::Insets(aIStack_1a0,aIStack_208);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b88;
  }
  else {
    Sexy::Insets::Insets(aIStack_1a0,aIStack_208);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24728;
  }
  uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Draw3SliceImage(param_1,aIStack_1a0,uVar16);
  iVar5 = FUN_0477c09c(4);
  iVar6 = FUN_0477c09c(0x36);
  iVar7 = FUN_0477c09c(8);
  iVar8 = FUN_0477c09c(0x4e);
  Sexy::Insets::Insets
            ((Insets *)&local_1f8,iVar5 + (int)((float)(iVar3 - iVar4) * 0.5),iVar6,iVar4 - iVar7,
             *(int *)(this + 0x54) - iVar8);
  iVar5 = FUN_0477c09c(0xc);
  Sexy::Insets::Insets
            ((Insets *)&local_1e8,iVar5 + local_1f8,iVar5 + local_1f4,iVar5 * -2 + local_1f0,
             iVar5 * -2 + local_1ec);
  iVar6 = FUN_0477c09c(0x28);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b249d0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar3 = iVar3 * local_1f0;
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b249d0);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar4 = 0;
  if (iVar7 != 0) {
    iVar4 = iVar3 / iVar7;
  }
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b249d0);
  Sexy::Graphics::DrawImage(param_1,pIVar19,local_1f8,local_1f4 - iVar6,local_1f0,iVar4);
  Sexy::Insets::Insets(aIStack_1a0,(Insets *)&local_1e8);
  uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24ad8);
  DrawImageTiled(0x3f800000,param_1,aIStack_1a0,uVar16);
  Sexy::Insets::Insets(aIStack_1a0,(Insets *)&local_1f8);
  uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24a30);
  Draw9SliceImage(param_1,aIStack_1a0,uVar16);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24a30);
  iVar6 = local_1e0;
  iVar3 = local_1e8;
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24a80);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar4 = local_1e4;
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24a80);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24a80);
  Sexy::Graphics::DrawImage(param_1,pIVar19,iVar3 + (iVar6 - iVar7) / 2,iVar4 - iVar8 / 2);
  iVar4 = local_1e0;
  iVar3 = local_1e8;
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar3 = iVar3 + (iVar4 - iVar6) / 2;
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar6 = (local_1e4 + local_1dc + iVar5 * -3) - iVar6;
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
  Sexy::Graphics::DrawImage(param_1,pIVar19,iVar3,iVar6);
  iVar5 = local_1e0;
  iVar4 = local_1e8;
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar4 = iVar4 + (iVar5 - iVar7) / 2;
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
  Sexy::Graphics::DrawImage(param_1,pIVar19,iVar4,iVar6);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c00);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar7 = FUN_0477c09c(0xf);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c00);
  Sexy::Graphics::DrawImage(param_1,pIVar19,local_1e8 + (local_1e0 - iVar5) / 2,iVar7 + iVar6);
  iVar7 = FUN_0477c09c(0x1a);
  iVar5 = FUN_0477c09c(0x69);
  iVar5 = iVar6 + iVar5;
  if (*(int *)(this + 0xe4) == 0) {
    pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b249a8);
    Sexy::Graphics::DrawImage(param_1,pIVar19,iVar7 + iVar4,iVar5);
  }
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b248a8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24aa8);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar10 = FUN_0477c09c(5);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b248a8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24aa8);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar13 = FUN_0477c09c(5);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24aa8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar19,((iVar8 + iVar7 + iVar4) - iVar9) - iVar10,
             ((iVar11 + iVar5) - iVar12) - iVar13);
  iVar7 = FUN_0477c09c(0xd6);
  if (*(int *)(this + 0xe4) == 1) {
    pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24750);
    Sexy::Graphics::DrawImage(param_1,pIVar19,iVar7 + iVar4,iVar5);
  }
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24bd8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24828);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar10 = FUN_0477c09c(5);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24bd8);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24828);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar13 = FUN_0477c09c(5);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24828);
  Sexy::Graphics::DrawImage
            (param_1,pIVar19,((iVar8 + iVar7 + iVar4) - iVar9) - iVar10,
             ((iVar5 + iVar11) - iVar12) - iVar13);
  iVar7 = FUN_0477c09c(399);
  if (*(int *)(this + 0xe4) == 2) {
    pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b247d8);
    Sexy::Graphics::DrawImage(param_1,pIVar19,iVar7 + iVar4,iVar5);
  }
  iVar8 = 0;
  local_238 = this + 0x188;
  pPVar21 = this + 0x148;
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24920);
  lVar20 = 0;
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b50);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar11 = FUN_0477c09c(5);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24920);
  iVar12 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b50);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar17);
  iVar14 = FUN_0477c09c(5);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b50);
  Sexy::Graphics::DrawImage
            (param_1,pIVar19,((iVar9 + iVar7 + iVar4) - iVar10) - iVar11,
             ((iVar5 + iVar12) - iVar13) - iVar14);
  iVar4 = *(int *)(*(long *)(this + 0x120) + 0x48);
  iVar5 = *(int *)(*(long *)(this + 0x120) + 0x4c);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b247b0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24bb0);
  Sexy::Graphics::DrawImage(param_1,pIVar19,iVar4,iVar5 + iVar7);
  iVar4 = *(int *)(*(long *)(this + 0x128) + 0x48);
  iVar5 = *(int *)(*(long *)(this + 0x128) + 0x4c);
  pSVar17 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c38);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
  pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b246c8);
  Sexy::Graphics::DrawImage(param_1,pIVar19,iVar4,iVar5 + iVar7);
  pLVar18 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
  iVar4 = FUN_0477c09c(0x78);
  uVar15 = operator|(0x10,8);
  iVar5 = iVar5 + iVar4 * -2;
  iVar4 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  do {
    iVar5 = FUN_0477c09c(100);
    iVar7 = iVar5 + iVar3 + iVar8;
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar5 = FUN_0477c09c(10);
    iVar5 = iVar6 + iVar9 + iVar5;
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_1c8,(char *)0x0);
    iVar9 = (int)lVar20;
    if (lVar20 == 0) {
      CachedUIResourcePtr<Sexy::Image>::operator=(aCStack_1c8,(CachedUIResourcePtr *)&DAT_06b24a58);
      CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0,(char *)0x0);
LAB_0477fab0:
      iVar10 = FUN_0477c09c(0x14);
      iVar7 = iVar7 - iVar10;
      iVar10 = FUN_0477c09c(0x28);
      iVar5 = iVar5 - iVar10;
    }
    else {
      CachedUIResourcePtr<Sexy::Image>::operator=(aCStack_1c8,(CachedUIResourcePtr *)&DAT_06b24678);
      CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0,(char *)0x0);
      if (iVar9 == 2) {
        iVar10 = FUN_0477c09c(0x14);
        iVar7 = iVar7 - iVar10;
        iVar10 = FUN_0477c09c(0x46);
        iVar5 = iVar5 - iVar10;
        CachedUIResourcePtr<Sexy::Image>::operator=
                  ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0,
                   (CachedUIResourcePtr *)&DAT_06b24858);
        iVar10 = FUN_0477c09c(0x3c);
        unaff_s13 = iVar10 + iVar7;
        iVar10 = FUN_0477c09c(0xa0);
        pSVar17 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_1c8);
        iVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
        unaff_s14 = (iVar10 + iVar5) - iVar11;
      }
      else {
        if (iVar9 == 3) {
          iVar10 = FUN_0477c09c(10);
          iVar7 = iVar7 + iVar10;
          CachedUIResourcePtr<Sexy::Image>::operator=
                    ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0,
                     (CachedUIResourcePtr *)&DAT_06b246a0);
          iVar11 = FUN_0477c09c(0x50);
          pLVar18 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
          iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
          unaff_s13 = (iVar11 + iVar7) - iVar12;
          uVar16 = 0x3c;
        }
        else {
          if (iVar9 != 1) goto LAB_0477fab0;
          iVar10 = FUN_0477c09c(10);
          iVar7 = iVar7 + iVar10;
          iVar10 = FUN_0477c09c(0x14);
          CachedUIResourcePtr<Sexy::Image>::operator=
                    ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0,
                     (CachedUIResourcePtr *)&DAT_06b246a0);
          iVar11 = FUN_0477c09c(0x50);
          pLVar18 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
          iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
          unaff_s13 = (iVar11 + iVar7) - iVar12;
          uVar16 = 0x5a;
        }
        iVar5 = iVar5 + iVar10;
        iVar10 = FUN_0477c09c(uVar16);
        pSVar17 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
        iVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
        unaff_s14 = (iVar10 + iVar5) - iVar11;
      }
    }
    iVar10 = FUN_0477c09c(0x46);
    iVar10 = iVar10 + iVar7;
    iVar11 = FUN_0477c09c(0x82);
    iVar11 = iVar11 + iVar5;
    if (*(long *)local_238 != 0) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_178);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_178);
      Sexy::SexyTransform2D::Scale(aSStack_178,1.1,1.1);
      iVar12 = FUN_0477c09c(0x14);
      iVar13 = FUN_0477c09c(0x1e);
      FUN_0477b4b0((float)(iVar12 + iVar7),(float)(iVar13 + iVar5),auStack_170,auStack_164);
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)local_238);
      PopAnimRig::SetRenderTransform(this_01,aSStack_178);
      StandaloneEffect::Draw(*(StandaloneEffect **)local_238,param_1);
    }
    if (*(long *)pPVar21 != 0) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_178);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_178);
      Sexy::SexyTransform2D::Scale(aSStack_178,1.1,1.1);
      FUN_0477b4b0((float)iVar7,(float)iVar5,auStack_170,auStack_164);
      PopAnimRig::Draw(*(PopAnimRig **)pPVar21,param_1,aSStack_178);
    }
    if (pPVar21[0xc] == (PooyanShooterChooseUI)0x0) {
      iVar5 = FUN_0477c09c(5);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24700);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
      pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24700);
      Sexy::Graphics::DrawImage(param_1,pIVar19,iVar10,(iVar5 + iVar11) - iVar7);
    }
    pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_1c8);
    Sexy::Graphics::DrawImage(param_1,pIVar19,iVar10,iVar11);
    if (lVar20 == 0) {
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_1c8);
    }
    else {
      pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
      Sexy::Graphics::DrawImage(param_1,pIVar19,unaff_s13,unaff_s14);
      FUN_05462470(aSStack_178,uVar15);
      uVar1 = *(undefined4 *)(pPVar21 + -8);
      std::string::string(asStack_1d8,"");
      FUN_05462980(aSStack_178,asStack_1d8);
      std::string::~string(asStack_1d8);
      nop();
      FUN_0546065c(auStack_168,uVar1);
      FUN_05462824(asStack_220,aSStack_178);
      Sexy::ToWString(asStack_220);
      pLVar18 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_1c8);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
      iVar7 = FUN_0477c09c(0x1e);
      iVar12 = FUN_0477c09c(100);
      uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
      FUN_05477b24(auStack_210,auStack_218);
      Sexy::Insets::Insets
                ((Insets *)asStack_1d8,(Insets *)&PrimeText_Game::Color_PooyanScore_Yellow);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)((iVar5 + iVar10) - iVar7),(float)iVar11,(float)iVar12,
                 uVar16,param_1,auStack_210,1,asStack_1d8,0);
      FUN_05476c50(auStack_210);
      FUN_05476c50(auStack_218);
      std::string::~string(asStack_220);
      FUN_054617bc(aSStack_178);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)aIStack_1a0);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_1c8);
      if (iVar9 == 3) {
        Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_228);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    lVar20 = lVar20 + 1;
    pPVar21 = pPVar21 + 0x10;
    iVar8 = iVar8 + (iVar4 >> 2);
    local_238 = local_238 + 8;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooterChooseUI::~PooyanShooterChooseUI() */

void __thiscall PooyanShooterChooseUI::~PooyanShooterChooseUI(PooyanShooterChooseUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_068d8820;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068d84f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Pooyan");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<PooyanShooterData,std::allocator<PooyanShooterData>>::~vector
            ((vector<PooyanShooterData,std::allocator<PooyanShooterData>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooterChooseUI::~PooyanShooterChooseUI() */

void __thiscall PooyanShooterChooseUI::~PooyanShooterChooseUI(PooyanShooterChooseUI *this)

{
  ~PooyanShooterChooseUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooterChooseUI::ChangeShooterGroup(int) */

void __thiscall PooyanShooterChooseUI::ChangeShooterGroup(PooyanShooterChooseUI *this,int param_1)

{
  bool bVar1;
  byte bVar2;
  LevelModuleManager *this_00;
  PooyanModule *pPVar3;
  long lVar4;
  PooyanShooterData *pPVar5;
  string *psVar6;
  undefined8 uVar7;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long *plVar8;
  PopAnimRig *pPVar9;
  int iVar10;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  int local_20 [2];
  undefined4 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DeleteShooterGroupPreview(this);
  this[0xe0] = (PooyanShooterChooseUI)0x1;
  if (((*(long *)(gLawnApp + 0x9f0) != 0) &&
      (this_00 = (LevelModuleManager *)
                 FUN_0477b5b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
      this_00 != (LevelModuleManager *)0x0)) &&
     (pPVar3 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_00),
     pPVar3 != (PooyanModule *)0x0)) {
    lVar4 = PooyanModule::GetPooyanProps();
    iVar10 = 0;
    local_40 = FUN_0477e6f4(*(undefined8 *)(lVar4 + 0x80));
    local_38 = FUN_0477e744(*(undefined8 *)(lVar4 + 0x88));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      pPVar5 = (PooyanShooterData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      PooyanShooterData::PooyanShooterData((PooyanShooterData *)local_20,pPVar5);
      if (local_20[0] == param_1) {
        *(undefined4 *)(this + (long)iVar10 * 0x10 + 0x150) = local_18;
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        uVar7 = CreateStandalonePlantAnimRig(aRStack_30,1);
        *(undefined8 *)(this + (long)iVar10 * 0x10 + 0x148) = uVar7;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
        if ((this_02 == (PlayerInfo *)0x0) ||
           (bVar2 = PlayerInfo::GetIsPlantUnlocked(this_02,asStack_10), (param_1 != 0) <= bVar2)) {
          pPVar9 = *(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148);
          Sexy::Color::Color((Color *)aRStack_30,1);
          PopAnimRig::SetPAMColor(pPVar9,(Color *)aRStack_30);
          PopAnimRig::ClearShaderOverrideColor(*(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148))
          ;
          PopAnimRig::SetPaused(*(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148),false);
          this[(long)iVar10 * 0x10 + 0x154] = (PooyanShooterChooseUI)0x1;
        }
        else {
          pPVar9 = *(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148);
          Sexy::Color::Color((Color *)aRStack_30,1);
          PopAnimRig::SetPAMColor(pPVar9,(Color *)aRStack_30);
          pPVar9 = *(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148);
          Sexy::Insets::Insets((Insets *)aRStack_30,0,0,0,0x7d);
          PopAnimRig::SetShaderOverrideColor(pPVar9,(Color *)aRStack_30);
          PopAnimRig::SetPaused(*(PopAnimRig **)(this + (long)iVar10 * 0x10 + 0x148),true);
          this[(long)iVar10 * 0x10 + 0x154] = (PooyanShooterChooseUI)0x0;
          this[0xe0] = (PooyanShooterChooseUI)0x0;
        }
        plVar8 = *(long **)(this + (long)iVar10 * 0x10 + 0x148);
        if (plVar8 != (long *)0x0) {
          iVar10 = iVar10 + 1;
          (**(code **)(*plVar8 + 0x1a0))(plVar8,0);
        }
      }
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                ((GridItemCardGameZombieActionData *)local_20);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanShooterChooseUI::ButtonDepress(int) */

void __thiscall PooyanShooterChooseUI::ButtonDepress(PooyanShooterChooseUI *this,int param_1)

{
  LevelModuleManager *this_00;
  PooyanModule *this_01;
  int iVar1;
  
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    return;
  }
  this_00 = (LevelModuleManager *)FUN_0477b5b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  if (this_00 == (LevelModuleManager *)0x0) {
    return;
  }
  this_01 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_00);
  if (this_01 == (PooyanModule *)0x0) {
    return;
  }
  switch(param_1) {
  case 1:
    GetBackToMap();
    return;
  case 2:
    if (*(int *)(this + 0xe4) == 0) {
      return;
    }
    *(undefined4 *)(this + 0xe4) = 0;
    iVar1 = 0;
    break;
  case 3:
    if (*(int *)(this + 0xe4) == 1) {
      return;
    }
    iVar1 = 1;
    *(undefined4 *)(this + 0xe4) = 1;
    break;
  case 4:
    if (*(int *)(this + 0xe4) == 2) {
      return;
    }
    iVar1 = 2;
    *(undefined4 *)(this + 0xe4) = 2;
    break;
  case 5:
    iVar1 = *(int *)(this + 0xe4) + 2;
    goto LAB_04782ee0;
  case 6:
    iVar1 = *(int *)(this + 0xe4) + 1;
LAB_04782ee0:
    iVar1 = iVar1 % 3;
    *(int *)(this + 0xe4) = iVar1;
    break;
  case 7:
    PooyanModule::SetShooterGroup(this_01,*(int *)(this + 0xe4));
    PooyanModule::KillPooyanShooterChooseUI(this_01);
    return;
  default:
    return;
  }
  ChangeShooterGroup(this,iVar1);
  (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),(byte)this[0xe0] ^ 1);
  return;
}


/* non-virtual thunk to PooyanShooterChooseUI::ButtonDepress(int) */

void __thiscall PooyanShooterChooseUI::ButtonDepress(PooyanShooterChooseUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanShooterChooseUI::PooyanShooterChooseUI() */

void __thiscall PooyanShooterChooseUI::PooyanShooterChooseUI(PooyanShooterChooseUI *this)

{
  ButtonListener *this_00;
  LawnApp *this_01;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LevelModuleManager *this_02;
  PooyanModule *pPVar12;
  long lVar13;
  PooyanShooterData *pPVar14;
  PVZ2UIButton *pPVar15;
  SalesProgressBar *pSVar16;
  LotteryResultProgressBar *pLVar17;
  long *plVar18;
  code *pcVar19;
  int iVar20;
  undefined1 auStack_a0 [8];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  int local_80;
  int local_7c;
  undefined8 local_78 [7];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_00);
  this[0xe0] = (PooyanShooterChooseUI)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_068d84f0;
  *(undefined **)(this + 0xd8) = &DAT_068d8820;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  this_01 = gLawnApp;
  std::string::string(asStack_40,"UI_Pooyan");
  LawnApp::LoadGroup(this_01,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (((*(long *)(gLawnApp + 0x9f0) != 0) &&
      (this_02 = (LevelModuleManager *)
                 FUN_0477b5b8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
      this_02 != (LevelModuleManager *)0x0)) &&
     (pPVar12 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_02),
     pPVar12 != (PooyanModule *)0x0)) {
    *(undefined4 *)(this + 0xe4) = 0;
    CreateShipGroupPreview(this);
    ChangeShooterGroup(this,*(int *)(this + 0xe4));
    lVar13 = PooyanModule::GetPooyanProps();
    local_88 = FUN_0477e6f4(*(undefined8 *)(lVar13 + 0x80));
    local_78[0] = FUN_0477e744(*(undefined8 *)(lVar13 + 0x88));
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_78);
      if (!bVar2) break;
      pPVar14 = (PooyanShooterData *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      PooyanShooterData::PooyanShooterData((PooyanShooterData *)asStack_40,pPVar14);
      std::vector<PooyanShooterData,std::allocator<PooyanShooterData>>::push_back
                ((vector<PooyanShooterData,std::allocator<PooyanShooterData>> *)(this + 0xf8),
                 (PooyanShooterData *)asStack_40);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                ((GridItemCardGameZombieActionData *)asStack_40);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_88);
    }
    Sexy::Widget::Resize
              ((Widget *)this,0,(uint)bVar2,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    iVar3 = FUN_0477c09c(800);
    iVar20 = (int)((float)(*(int *)(this + 0x50) - iVar3) * 0.5);
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,(exception_ptr *)&local_88);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,1,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x110) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b24b88,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b24728,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    plVar18 = *(long **)(this + 0x110);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    iVar4 = FUN_0477c09c(0x2c6);
    iVar5 = FUN_0477c09c(0x36);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b88);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar16);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b88);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24b88);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,iVar4 + iVar20,iVar5 - iVar6,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
    iVar4 = FUN_0477c09c(4);
    iVar5 = FUN_0477c09c(0x36);
    iVar6 = FUN_0477c09c(8);
    iVar9 = FUN_0477c09c(0x4e);
    Sexy::Insets::Insets
              ((Insets *)&local_98,iVar4 + iVar20,iVar5,iVar3 - iVar6,*(int *)(this + 0x54) - iVar9)
    ;
    iVar6 = FUN_0477c09c(0xc);
    Sexy::Insets::Insets
              ((Insets *)&local_88,iVar6 + local_98,iVar6 + local_94,iVar6 * -2 + local_90,
               iVar6 * -2 + local_8c);
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,7,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x118) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b24880,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b24880,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24880);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24880);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar5 = FUN_0477c09c(0x14);
    plVar18 = *(long **)(this + 0x118);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24880);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24880);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,local_98 + (local_90 - iVar3) / 2,((local_94 + local_8c) - iVar4 / 2) - iVar5
               ,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,5,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x120) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b247b0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b247b0,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    iVar5 = local_80;
    uVar1 = local_88;
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar20 = FUN_0477c09c(0x14);
    iVar3 = local_88._4_4_ + local_7c;
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar16);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar4 = FUN_0477c09c(10);
    plVar18 = *(long **)(this + 0x120);
    iVar4 = ((iVar3 + iVar6 * -3) - iVar10) + iVar11 / 2 + iVar4;
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b247b0);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b247b0);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,(int)uVar1 + (iVar5 - iVar9) / 2 + iVar20,iVar4,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x120));
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,6,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x128) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x128);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b24c38,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b24c38,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    iVar3 = local_80;
    uVar1 = local_88;
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar20 = FUN_0477c09c(0x14);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c38);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    plVar18 = *(long **)(this + 0x128);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c38);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c38);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,(((int)uVar1 + (iVar3 - iVar5) / 2 + iVar9) - iVar20) - iVar10,iVar4,uVar7,
               uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x128));
    iVar5 = local_80;
    uVar1 = local_88;
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar20 = FUN_0477c09c(0x1a);
    iVar3 = local_88._4_4_ + local_7c;
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c88);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar16);
    iVar4 = FUN_0477c09c(0x69);
    iVar4 = ((iVar6 * -3 + iVar3) - iVar10) + iVar4;
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,2,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x130) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b248a8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b248a8,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    plVar18 = *(long **)(this + 0x130);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b248a8);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b248a8);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,(int)uVar1 + (iVar5 - iVar9) / 2 + iVar20,iVar4,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x130));
    iVar3 = local_80;
    uVar1 = local_88;
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar6 = FUN_0477c09c(0xd6);
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,3,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x138) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x138);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b24bd8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b24bd8,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    plVar18 = *(long **)(this + 0x138);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24bd8);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24bd8);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,(int)uVar1 + (iVar3 - iVar5) / 2 + iVar6,iVar4,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x138));
    iVar3 = (int)local_88;
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24c60);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    iVar6 = FUN_0477c09c(399);
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,auStack_a0);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar15,4,this_00,(wstring *)local_78,(Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0x140) = pPVar15;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    pPVar15 = *(PVZ2UIButton **)(this + 0x140);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b24920,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b24920,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
    plVar18 = *(long **)(this + 0x140);
    pcVar19 = *(code **)(*plVar18 + 0x198);
    pLVar17 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24920);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b24920);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar19)(plVar18,iVar3 + (local_80 - iVar5) / 2 + iVar6,iVar4,uVar7,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x140));
    SetAllButtonEnable(this,bVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

