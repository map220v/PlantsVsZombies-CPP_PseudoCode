// Class: ArtifactSkillPreview


/* ArtifactSkillPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void ArtifactSkillPreview::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArtifactSkillPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
ArtifactSkillPreview::ScrollTargetReached(ArtifactSkillPreview *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* ArtifactSkillPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ArtifactSkillPreview::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ArtifactSkillPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
ArtifactSkillPreview::ScrollTargetInterrupted(ArtifactSkillPreview *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* ArtifactSkillPreview::~ArtifactSkillPreview() */

void __thiscall ArtifactSkillPreview::~ArtifactSkillPreview(ArtifactSkillPreview *this)

{
  *(undefined ***)this = &PTR_GetClass_06696e90;
  *(undefined ***)(this + 0xd8) = &PTR__ArtifactSkillPreview_066971c8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06697210;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to ArtifactSkillPreview::~ArtifactSkillPreview() */

void __thiscall ArtifactSkillPreview::~ArtifactSkillPreview(ArtifactSkillPreview *this)

{
  ~ArtifactSkillPreview(this + -0xd8);
  return;
}


/* ArtifactSkillPreview::~ArtifactSkillPreview() */

void __thiscall ArtifactSkillPreview::~ArtifactSkillPreview(ArtifactSkillPreview *this)

{
  ~ArtifactSkillPreview(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactSkillPreview::~ArtifactSkillPreview() */

void __thiscall ArtifactSkillPreview::~ArtifactSkillPreview(ArtifactSkillPreview *this)

{
  ~ArtifactSkillPreview(this + -0xd8);
  return;
}


/* ArtifactSkillPreview::ArtifactSkillPreview() */

void __thiscall ArtifactSkillPreview::ArtifactSkillPreview(ArtifactSkillPreview *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06696e90;
  *(undefined ***)(this + 0xd8) = &PTR__ArtifactSkillPreview_066971c8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06697210;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* ArtifactSkillPreview::ButtonDepress(int) */

void __thiscall ArtifactSkillPreview::ButtonDepress(ArtifactSkillPreview *this,int param_1)

{
  if ((param_1 == 0x6a) &&
     (*(InvitationLotteryPanel **)(this + 0xf0) != (InvitationLotteryPanel *)0x0)) {
    InvitationLotteryPanel::CloseBonusUI(*(InvitationLotteryPanel **)(this + 0xf0));
    return;
  }
  return;
}


/* non-virtual thunk to ArtifactSkillPreview::ButtonDepress(int) */

void __thiscall ArtifactSkillPreview::ButtonDepress(ArtifactSkillPreview *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillPreview::Draw(Sexy::Graphics*) */

void __thiscall ArtifactSkillPreview::Draw(ArtifactSkillPreview *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab05f8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[SKILL_PREVIEW]");
  iVar1 = FUN_037ad3c8(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_037ad3c8(0x14);
  iVar2 = FUN_037ad3c8(0x46);
  iVar3 = FUN_037ad3c8(0x168);
  iVar4 = FUN_037ad3c8(0x19a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab07c0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkillPreview::InitView(int) */

void __thiscall ArtifactSkillPreview::InitView(ArtifactSkillPreview *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ProfileMgr *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  UIWidgetImage *this_03;
  long lVar8;
  UIWidgetText *pUVar9;
  undefined8 uVar10;
  PrimeTypeface *this_04;
  PVZ2UIButton *pPVar11;
  int extraout_w1;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e0 [4];
  int local_dc;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d8 [8];
  wstring awStack_d0 [8];
  Insets aIStack_c8 [16];
  wstring awStack_b8 [56];
  undefined4 local_80 [14];
  ArtifactInfo aAStack_48 [4];
  int local_44;
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (ArtifactSkillPreview)0x0;
  iVar1 = FUN_037ad3c8(400);
  iVar2 = FUN_037ad3c8(500);
  lVar8 = gLawnApp;
  iVar3 = FUN_037ad3c8(0x1e);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar8 + 0xd4) - iVar1) / 2,(*(int *)(lVar8 + 0xd8) - iVar2) / 2 - iVar3,
             iVar1,iVar2);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetArtifactInfoByID(iVar1);
  ArtifactUtils::GetArtifactDisplayActionsPropertyPtr
            ((ArtifactUtils *)(ulong)(uint)param_1,extraout_w1);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  iVar1 = FUN_037ad3c8(0x1e);
  iVar2 = FUN_037ad3c8(0x50);
  iVar3 = FUN_037ad3c8(0x154);
  iVar4 = FUN_037ad3c8(0x186);
  Sexy::Insets::Insets(aIStack_c8,iVar1,iVar2,iVar3,iVar4);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_c8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar1 = FUN_037ad3c8(0);
  if (local_44 != 0) {
    uVar14 = 0;
    do {
      this_03 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(this_03);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d8);
      lVar8 = FUN_037ac56c(*(undefined8 *)(lVar8 + 0x10),uVar14);
      UIWidgetImage::SetImage(this_03,(string *)(lVar8 + 0x50));
      local_80[0] = 2;
      UIWidgetImage::SetImageType(this_03,(wstring *)local_80,0.0);
      uVar5 = FUN_037ad3c8(0);
      uVar6 = FUN_037ad3c8(0x3c);
      (**(code **)(*(long *)this_03 + 0x198))(this_03,uVar5,iVar1,uVar6,uVar6);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d8);
      lVar8 = FUN_037ac56c(*(undefined8 *)(lVar8 + 0x10),uVar14);
      Sexy::ToWString((string *)(lVar8 + 0x48));
      TodStringTranslate((wstring *)local_80);
      FUN_05476c50((wstring *)local_80);
      pUVar9 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar9,awStack_d0);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
      FUN_037ac55c(pUVar9 + 0xe8,uVar10);
      FUN_037ac564(pUVar9 + 0xe0,3);
      pcVar15 = *(code **)(*(long *)pUVar9 + 0x170);
      Sexy::Color::Color((Color *)local_80,0x26,0x65,7);
      (*pcVar15)(pUVar9,0,(wstring *)local_80);
      uVar5 = FUN_037ad3c8(0x50);
      uVar6 = FUN_037ad3c8(200);
      uVar7 = FUN_037ad3c8(0x3c);
      (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,uVar5,iVar1,uVar6,uVar7);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,pUVar9);
      iVar2 = FUN_037ad3c8(0x46);
      uVar12 = uVar14 & 0xffffffff;
      uVar14 = uVar14 + 1;
      ArtifactUtils::GetArtifactSkillDescriptionForLevelUp
                ((ArtifactUtils *)awStack_b8,param_1,local_44,local_40,uVar12);
      this_04 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      iVar3 = FUN_037ad3c8(0x154);
      FUN_05477b24((wstring *)local_80,awStack_b8);
      Sexy::PrimeTypeface::SizeString_Paragraph
                ((float)iVar3,this_04,(wstring *)local_80,auStack_e0,&local_dc);
      FUN_05476c50((wstring *)local_80);
      fVar17 = (float)local_dc;
      fVar16 = (float)Sexy::PrimeTypeface::GetHeight(this_04);
      pUVar9 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar9,awStack_b8);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      FUN_037ac55c(pUVar9 + 0xe8,uVar10);
      FUN_037ac564(pUVar9 + 0xe0,0);
      pcVar15 = *(code **)(*(long *)pUVar9 + 0x170);
      Sexy::Color::Color((Color *)local_80,0x66,0x37,0);
      (*pcVar15)(pUVar9,0,(wstring *)local_80);
      uVar5 = FUN_037ad3c8(0);
      uVar6 = FUN_037ad3c8(0x154);
      (**(code **)(*(long *)pUVar9 + 0x198))
                (pUVar9,uVar5,iVar2 + iVar1,uVar6,(int)(fVar16 + fVar17));
      (**(code **)(*(long *)this_02 + 0x60))(this_02,pUVar9);
      iVar3 = FUN_037ad3c8(0x14);
      iVar1 = iVar2 + iVar1 + (int)(fVar16 + fVar17) + iVar3;
      FUN_05476c50(awStack_b8);
      FUN_05476c50(awStack_d0);
    } while (uVar14 < (ulong)(long)local_44);
  }
  lVar8 = *(long *)this_01;
  *(int *)(this_02 + 0x54) = iVar1;
  (**(code **)(lVar8 + 0x60))(this_01,this_02);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  FUN_05478178(awStack_b8,&DAT_056f11a8,awStack_d0);
  Sexy::Color::Color((Color *)local_80,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0x6a,(ButtonListener *)(this + 0xe0),awStack_b8,(Color *)local_80);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar11;
  FUN_05476c50(awStack_b8);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_b8,&DAT_06ab04f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_80,&DAT_06ab08b0,2);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_b8,(PVZ2UIImage *)local_80);
  plVar13 = *(long **)(this + 0xe8);
  uVar5 = FUN_037ad3c8(0x16d);
  uVar6 = FUN_037ad3c8(0xfffffff1);
  uVar7 = FUN_037ad3c8(0x38);
  (**(code **)(*plVar13 + 0x198))(plVar13,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d8);
  ArtifactInfo::~ArtifactInfo(aAStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

