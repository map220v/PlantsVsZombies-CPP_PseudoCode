// Class: NewPVPTestButton


/* NewPVPTestButton::unregisterForEvents() */

void __thiscall NewPVPTestButton::unregisterForEvents(NewPVPTestButton *this)

{
  Board::UnregisterLongPress(*(Board **)(gLawnApp + 0x9f0),this);
  return;
}


/* NewPVPTestButton::StaticGetClass() */

long * NewPVPTestButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTestButton",uVar2,StaticNew);
  return sClass;
}


/* NewPVPTestButton::GetClass() const */

long * NewPVPTestButton::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPTestButton",uVar2,StaticNew);
  return sClass;
}


/* NewPVPTestButton::killTips() */

void __thiscall NewPVPTestButton::killTips(NewPVPTestButton *this)

{
  if (*(long *)(this + 0x1a8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1a8));
    *(undefined8 *)(this + 0x1a8) = 0;
  }
  return;
}


/* NewPVPTestButton::cancelTouch() */

void __thiscall NewPVPTestButton::cancelTouch(NewPVPTestButton *this)

{
  long lVar1;
  
  if (this[0x1a4] != (NewPVPTestButton)0x0) {
    killTips(this);
    this[0x1a4] = (NewPVPTestButton)0x0;
  }
  *(undefined8 *)(this + 0x178) = 0;
  (**(code **)(*(long *)this + 0xe8))(this,2);
  lVar1 = *(long *)(this + 0x170);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  return;
}


/* NewPVPTestButton::onNotifyZombieUpgradeUnlocked(int) */

void __thiscall NewPVPTestButton::onNotifyZombieUpgradeUnlocked(NewPVPTestButton *this,int param_1)

{
  if (*(int *)(this + 0x180) != param_1) {
    return;
  }
  UIWidget::SetClickable((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::handleTouch(Sexy::Touch const&) */

void __thiscall NewPVPTestButton::handleTouch(NewPVPTestButton *this,Touch *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  NewPVPMgr *this_01;
  StandaloneEffect *pSVar7;
  Effect_PopAnim *pEVar8;
  long lVar9;
  Board *this_02;
  undefined1 uVar10;
  float fVar11;
  int local_60;
  int local_5c;
  string asStack_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar2 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((cVar2 != '\0') && (*(long *)(this + 0x178) == 0)) {
      uVar10 = 1;
      ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
      break;
    }
  default:
switchD_03518f24_caseD_2:
    uVar10 = 0;
    break;
  case 1:
    if (cVar2 != '\0') {
      if (*(long *)(this + 0x178) == 0) {
        uVar10 = 0;
        ArenaEndingButton::startTouch((ArenaEndingButton *)this,*(ulong *)param_1);
        break;
      }
      goto switchD_03518f24_caseD_2;
    }
    uVar10 = 0;
    if (*(long *)(this + 0x178) != *(long *)param_1) goto switchD_03518f24_caseD_2;
    goto LAB_03518f3c;
  case 3:
    lVar6 = *(long *)param_1;
    lVar9 = *(long *)(this + 0x178);
    if ((cVar2 == '\0') || (lVar6 != lVar9)) {
      uVar10 = 0;
    }
    else if (this[0x1a4] == (NewPVPTestButton)0x0) {
      this_01 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      NewPVPMgr::TryTriggerZombieUpgrade(this_01,*(int *)(this + 0x180));
      if (*(int *)(this + 0x1a0) == 0) {
        *(undefined4 *)(this + 0x1a0) = 1;
      }
      else {
        iVar1 = *(int *)(this + 0x180);
        *(undefined4 *)(this + 0x1a0) = 0;
        if (iVar1 == 0) {
          lVar6 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          FUN_03517f84(lVar6 + 0x4f0);
        }
        else if (iVar1 == 1) {
          lVar6 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          FUN_02fd3bf8(lVar6 + 0x4f4);
        }
        else if (iVar1 == 2) {
          lVar6 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          FUN_02fd3c08(lVar6 + 0x4f8);
        }
      }
      this_00 = (RtWeakPtr *)(this + 0x1b0);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar3) {
        if (*(int *)(this + 0x1a0) == 1) {
          pSVar7 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          StandaloneEffect::SetVisibility(pSVar7,false);
          lVar6 = *(long *)param_1;
          lVar9 = *(long *)(this + 0x178);
          uVar10 = 1;
        }
        else {
          UIWidget::GetDrawRect();
          uVar10 = 1;
          pSVar7 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          StandaloneEffect::SetVisibility(pSVar7,true);
          pEVar8 = (Effect_PopAnim *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          std::string::string(asStack_58,"idle");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar8,asStack_58,0);
          std::string::~string(asStack_58);
          nop();
          Sexy::Point::Point((Point *)&local_60,local_50,local_4c);
          this_02 = *(Board **)(gLawnApp + 0x9f0);
          local_60 = local_60 - *(int *)(this_02 + 0x48);
          local_5c = local_5c - *(int *)(this_02 + 0x4c);
          Board::TranslateScreenPositionToBoardPosition(this_02,(Point *)&local_60);
          pSVar7 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          iVar4 = FUN_03518468(8);
          fVar11 = *(float *)(this + 0x1b8);
          iVar1 = local_60 + local_48 / 2;
          iVar5 = FUN_03518468(0);
          Sexy::FastCurve::SetOutRange
                    ((FastCurve *)asStack_58,(float)iVar1 - fVar11 * (float)iVar4,
                     (float)(local_5c + local_44 / 2) + fVar11 * (float)iVar5);
          StandaloneEffect::SetScreenSpaceOrigin(pSVar7,(SexyVector2 *)asStack_58,910000);
          lVar6 = *(long *)param_1;
          lVar9 = *(long *)(this + 0x178);
        }
      }
      else {
        lVar6 = *(long *)param_1;
        uVar10 = 1;
        lVar9 = *(long *)(this + 0x178);
      }
    }
    else {
      uVar10 = 1;
      killTips(this);
      this[0x1a4] = (NewPVPTestButton)0x0;
      lVar6 = *(long *)param_1;
      lVar9 = *(long *)(this + 0x178);
    }
    goto LAB_03518f34;
  case 4:
    lVar6 = *(long *)param_1;
    uVar10 = 0;
    lVar9 = *(long *)(this + 0x178);
LAB_03518f34:
    if (lVar6 == lVar9) {
LAB_03518f3c:
      cancelTouch(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::createClickedEffect() */

void __thiscall NewPVPTestButton::createClickedEffect(NewPVPTestButton *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  Board *this_01;
  int local_28;
  int local_24;
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_UPGRADE_BTN_EFFECT");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  UIWidget::GetDrawRect();
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  (**(code **)(*(long *)this_00 + 0x80))(*(undefined4 *)(this + 0x1b8),this_00);
  Sexy::Point::Point((Point *)&local_28,local_18,local_14);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  local_28 = local_28 - *(int *)(this_01 + 0x48);
  local_24 = local_24 - *(int *)(this_01 + 0x4c);
  Board::TranslateScreenPositionToBoardPosition(this_01,(Point *)&local_28);
  iVar1 = FUN_03518468(5);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_20,(float)(local_28 + local_10 / 2),
             (float)(local_24 + local_c / 2) + *(float *)(this + 0x1b8) * (float)iVar1);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)asStack_20,910000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0),(RtWeakPtrBase *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTestButton::onGameplayStarted() */

void __thiscall NewPVPTestButton::onGameplayStarted(NewPVPTestButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  createClickedEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::Adapt() */

void __thiscall NewPVPTestButton::Adapt(NewPVPTestButton *this)

{
  bool bVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  string asStack_10 [8];
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  bVar1 = std::operator==(asStack_10,"Normal");
  if (bVar1) {
    *(undefined4 *)(this + 0x1b8) = 0x3f4ccccd;
  }
  else {
    std::operator==(asStack_10,"Large");
    *(undefined4 *)(this + 0x1b8) = 0x3f333333;
  }
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4850);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  FUN_03517f68(this + 0x38,(int)((float)iVar2 * *(float *)(this + 0x1b8)));
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4850);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  FUN_03517f74(this + 0x3c,(int)((float)iVar2 * *(float *)(this + 0x1b8)));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::SetTouchDescription(std::wstring const&, float&) */

void NewPVPTestButton::SetTouchDescription(wstring *param_1,float *param_2)

{
  int iVar1;
  PrimeTypeface *this;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float *pfVar2;
  float *in_x2;
  float fVar3;
  undefined1 auStack_1c [4];
  int local_18;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PrimeTypeface *)
         PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4c18);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  FUN_05477b24(local_10,param_2);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)(int)((float)iVar1 + (float)iVar1),this,local_10,auStack_1c,&local_18);
  FUN_05476c50(local_10);
  fVar3 = (float)Sexy::PrimeTypeface::GetHeight(this);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4c18);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  local_10[0] = 1.0;
  local_14 = ((float)local_18 + fVar3 * 4.0) / ((float)iVar1 * 0.5);
  pfVar2 = eastl::max_alt<float>(&local_14,local_10);
  *in_x2 = *pfVar2;
  FUN_05477b24();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::SetTouchDescription(std::string const&, float&) */

void __thiscall
NewPVPTestButton::SetTouchDescription(NewPVPTestButton *this,string *param_1,float *param_2)

{
  wstring awStack_18 [8];
  float afStack_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(param_1);
  TodStringTranslate(awStack_18);
  SetTouchDescription((wstring *)this,afStack_10);
  FUN_05476c50(afStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::showTips(std::string const&, float, float) */

void __thiscall
NewPVPTestButton::showTips(NewPVPTestButton *this,string *param_1,float param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  StoneLotteryItemTipUI *this_02;
  int iVar4;
  long lVar5;
  float local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_3;
  SetTouchDescription(this,param_1,&local_34);
  UIWidget::GetDrawRect();
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4c18);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4c18);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = (int)(local_34 * 0.5 * (float)iVar3);
  iVar3 = FUN_0351847c(5);
  Sexy::Insets::Insets
            (aIStack_18,local_28,(local_24 - iVar4) + iVar3,
             (int)((param_2 + param_2) * (float)iVar2),iVar4);
  lVar5 = *(long *)(this + 0x1a8);
  if (lVar5 == 0) {
    this_02 = ::operator_new(0xe8);
    memset(this_02,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_02);
    uVar1 = *(uint *)(this_02 + 0x60);
    *(StoneLotteryItemTipUI **)(this + 0x1a8) = this_02;
    *(uint *)(this_02 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_02);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
    lVar5 = *(long *)(this + 0x1a8);
  }
  PuzzleTip::SetTip(lVar5,auStack_30);
  (**(code **)(**(long **)(this + 0x1a8) + 0x1a0))(*(long **)(this + 0x1a8),aIStack_18);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::handleLongPress(Sexy::Point) */

void __thiscall NewPVPTestButton::handleLongPress(NewPVPTestButton *this,int *param_2)

{
  char cVar1;
  string asStack_48 [8];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Touch::Touch(aTStack_40);
  local_2c = param_2[1];
  local_30 = *param_2;
  Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  cVar1 = (**(code **)(*(long *)this + 0xa8))
                    (this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30,
                     *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c);
  if (cVar1 != '\0') {
    Sexy::StrFormat("[NEW_PVP_UPGRADE_TIP_%d]",asStack_48,(ulong)*(uint *)(this + 0x180));
    showTips(this,asStack_48,1.0,1.0);
    this[0x1a4] = (NewPVPTestButton)0x1;
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::SetType(NewPVPTestButton::UpgradeType) */

void __thiscall NewPVPTestButton::SetType(NewPVPTestButton *this,uint param_2)

{
  int iVar1;
  int iVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar3;
  undefined8 uVar4;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  float fVar10;
  PrimeTypeface *local_30;
  Image *local_28;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(uint *)(this + 0x180) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 < 5) {
    switch(param_2) {
    default:
      FUN_05478178((wstring *)&local_18,&DAT_056f11a8,auStack_20);
      local_30 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      local_28 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4bf0);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4960;
      break;
    case 1:
      FUN_05478178((wstring *)&local_18,&DAT_056f11a8,auStack_20);
      local_30 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      local_28 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4738);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa45f0;
      break;
    case 2:
    case 4:
      FUN_05478178((wstring *)&local_18,&DAT_056f11a8,auStack_20);
      local_30 = (PrimeTypeface *)
                 PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      local_28 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa47b8);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa46e8;
    }
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    uVar4 = MakeStretchableNewLawnButton
                      (0,(ButtonListener *)(this + 0x168),(wstring *)&local_18,local_30,local_28,
                       (Image *)0x0,pIVar3,0,0);
    *(undefined8 *)(this + 0x170) = uVar4;
    FUN_05476c50((wstring *)&local_18);
    nop();
    plVar7 = *(long **)(this + 0x170);
    pcVar9 = *(code **)(*plVar7 + 0x170);
    uVar4 = (**(code **)(*plVar7 + 0x178))(plVar7,0);
    (*pcVar9)(plVar7,1,uVar4);
  }
  plVar7 = *(long **)(this + 0x170);
  if (plVar7 != (long *)0x0) {
    pcVar9 = *(code **)(*plVar7 + 0x198);
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4850);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    fVar10 = *(float *)(this + 0x1b8);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4850);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_02);
    (*pcVar9)(plVar7,0,0,(int)((float)iVar1 * fVar10),(int)((float)iVar2 * *(float *)(this + 0x1b8))
             );
    lVar5 = *(long *)(this + 0x170);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(lVar5 + 0x50),*(int *)(lVar5 + 0x54));
    lVar8 = *(long *)(this + 0x170);
    iVar1 = *(int *)(lVar8 + 0x50);
    iVar2 = *(int *)(lVar8 + 0x54);
    *(undefined8 *)(lVar5 + 0x110) = local_18;
    *(undefined8 *)(lVar5 + 0x118) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    lVar6 = *(long *)(this + 0x170);
    iVar1 = *(int *)(lVar6 + 0x50);
    iVar2 = *(int *)(lVar6 + 0x54);
    *(undefined8 *)(lVar8 + 0x120) = local_18;
    *(undefined8 *)(lVar8 + 0x128) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    lVar5 = *(long *)(this + 0x170);
    iVar1 = *(int *)(lVar5 + 0x50);
    iVar2 = *(int *)(lVar5 + 0x54);
    *(undefined8 *)(lVar6 + 0x140) = local_18;
    *(undefined8 *)(lVar6 + 0x148) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    *(undefined8 *)(lVar5 + 0x130) = local_18;
    *(undefined8 *)(lVar5 + 0x138) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::NewPVPTestButton() */

void __thiscall NewPVPTestButton::NewPVPTestButton(NewPVPTestButton *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_0664df20;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPTestButton_0664e0c0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0664e0f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  this[0x1a4] = (NewPVPTestButton)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined4 *)(this + 0x1a0) = 1;
  *(undefined4 *)(this + 0x184) = 0xffffffff;
  *(undefined4 *)(this + 0x1b8) = 0x3f800000;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<NewPVPTestButton,bool(NewPVPTestButton::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<NewPVPTestButton,void(NewPVPTestButton::*)()>(aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,9,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTestButton::StaticNew() */

NewPVPTestButton * NewPVPTestButton::StaticNew(void)

{
  NewPVPTestButton *this;
  
  this = ::operator_new(0x1c0);
  NewPVPTestButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::registerForEvents() */

void __thiscall NewPVPTestButton::registerForEvents(NewPVPTestButton *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPTestButton,void(NewPVPTestButton::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyZombieUpgradeUnlocked);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPTestButton,void(NewPVPTestButton::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyZombieUpgradeUnlocked,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTurnChanged);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPTestButton,void(NewPVPTestButton::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTurnChanged,&local_a0);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleLongPress);
  Sexy::Delegate1<Sexy::Point_const&>::
  Delegate1<NewPVPTestButton,void(NewPVPTestButton::*)(Sexy::Point)>
            ((Delegate1<Sexy::Point_const&> *)aDStack_38,aCStack_80);
  Board::RegisterLongPress(pBVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPTestButton::~NewPVPTestButton() */

void __thiscall NewPVPTestButton::~NewPVPTestButton(NewPVPTestButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0664df20;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPTestButton_0664e0c0;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0664e0f0;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
  }
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::~vector
            ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x188));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to NewPVPTestButton::~NewPVPTestButton() */

void __thiscall NewPVPTestButton::~NewPVPTestButton(NewPVPTestButton *this)

{
  ~NewPVPTestButton(this + -0x10);
  return;
}


/* NewPVPTestButton::~NewPVPTestButton() */

void __thiscall NewPVPTestButton::~NewPVPTestButton(NewPVPTestButton *this)

{
  ~NewPVPTestButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPTestButton::~NewPVPTestButton() */

void __thiscall NewPVPTestButton::~NewPVPTestButton(NewPVPTestButton *this)

{
  ~NewPVPTestButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::onTurnChanged(int) */

void __thiscall NewPVPTestButton::onTurnChanged(NewPVPTestButton *this,int param_1)

{
  vector<Sexy::Image*,std::allocator<Sexy::Image*>> *this_00;
  int iVar1;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0x184) - param_1;
  local_8 = ___stack_chk_guard;
  if (0 < iVar1) {
    this_00 = (vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x188);
    std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::clear(this_00);
    std::string::string(asStack_18,"");
    nop();
    Sexy::StrFormat("IMAGE_UI_NEW_PVP_NUMBER_%d",(string *)&local_10,(ulong)(uint)(iVar1 % 10));
    FUN_05474278(asStack_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    local_10 = StringHelper::ToImage(asStack_18,false);
    std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::push_back(this_00,(Image **)&local_10);
    if (iVar1 / 10 != 0) {
      Sexy::StrFormat("IMAGE_UI_NEW_PVP_NUMBER_%d",(string *)&local_10,(ulong)(uint)(iVar1 / 10));
      FUN_05474278(asStack_18,(string *)&local_10);
      std::string::~string((string *)&local_10);
      local_10 = StringHelper::ToImage(asStack_18,false);
      std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::push_back(this_00,(Image **)&local_10)
      ;
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPTestButton::Draw(Sexy::Graphics*) */

void __thiscall NewPVPTestButton::Draw(NewPVPTestButton *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 *puVar5;
  ulong uVar6;
  Image *pIVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  code *pcVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar2 = FUN_03518e30(*(undefined4 *)(this + 0x68));
  if (cVar2 == '\0') {
    plVar10 = *(long **)(this + 0x170);
  }
  else {
    plVar10 = *(long **)(this + 0x170);
    if (*(int *)(this + 0x1a0) == 1) {
      pcVar12 = *(code **)(*plVar10 + 0x170);
      Sexy::Color::Color(aCStack_18);
      (*pcVar12)(plVar10,3,aCStack_18);
      goto LAB_0351c540;
    }
  }
  pcVar12 = *(code **)(*plVar10 + 0x170);
  Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
  (*pcVar12)(plVar10,3,aCStack_18);
LAB_0351c540:
  (**(code **)(**(long **)(this + 0x170) + 0x128))(*(long **)(this + 0x170),param_1);
  cVar2 = FUN_03518e30(*(undefined4 *)(this + 0x68));
  if (((cVar2 == '\0') && (0 < *(int *)(this + 0x184))) &&
     (cVar2 = std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::empty
                        ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x188)),
     cVar2 == '\0')) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa48d8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar11 = (int)(*(float *)(this + 0x1b8) * 0.9 * (float)iVar3);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa48d8);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar14 = (int)(*(float *)(this + 0x1b8) * 0.9 * (float)iVar3);
    puVar5 = (undefined8 *)FUN_03517fa8(*(undefined8 *)(this + 0x188),0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)*puVar5);
    iVar9 = (int)(*(float *)(this + 0x1b8) * 0.4 * (float)iVar3);
    puVar5 = (undefined8 *)FUN_03517fa8(*(undefined8 *)(this + 0x188),0);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)*puVar5);
    iVar8 = (int)(*(float *)(this + 0x1b8) * 0.4 * (float)iVar3);
    UIWidget::GetDrawRect();
    iVar3 = (local_c - iVar14) / 2;
    uVar6 = FUN_03517fb0(*(undefined8 *)(this + 0x188),*(undefined8 *)(this + 400));
    if (uVar6 < 2) {
      iVar1 = (local_10 - iVar11) - iVar9;
      iVar1 = iVar1 - (iVar1 >> 0x1f);
    }
    else {
      iVar1 = (local_10 - iVar11) + iVar9 * -2;
      iVar1 = iVar1 - (iVar1 >> 0x1f);
    }
    iVar4 = FUN_0351847c(0xfffffffe);
    iVar15 = (int)((float)((iVar1 >> 1) + iVar11) + *(float *)(this + 0x1b8) * (float)iVar4);
    iVar4 = (int)((float)iVar3 + *(float *)(this + 0x1b8) * (float)iVar4);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa48d8);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 >> 1,iVar3,iVar11,iVar14);
    uVar13 = *(undefined8 *)(this + 0x188);
    uVar6 = FUN_03517fb0(uVar13,*(undefined8 *)(this + 400));
    if (uVar6 < 2) {
      puVar5 = (undefined8 *)FUN_03517fa8(uVar13,0);
      pIVar7 = (Image *)*puVar5;
    }
    else {
      puVar5 = (undefined8 *)FUN_03517fa8(uVar13,1);
      Sexy::Graphics::DrawImage(param_1,(Image *)*puVar5,iVar15,iVar4,iVar9,iVar8);
      puVar5 = (undefined8 *)FUN_03517fa8(*(undefined8 *)(this + 0x188),0);
      pIVar7 = (Image *)*puVar5;
      iVar15 = iVar15 + iVar9;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar15,iVar4,iVar9,iVar8);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPVPTestButton::Draw(Sexy::Graphics*) */

void __thiscall NewPVPTestButton::Draw(NewPVPTestButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

