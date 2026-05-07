// Class: ToyNightGachaUI


/* ToyNightGachaUI::TouchEnded(Sexy::Touch const&) */

void ToyNightGachaUI::TouchEnded(Touch *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1[0x15a] != (Touch)0x0) {
    param_1[0x15a] = (Touch)0x0;
    param_1[0x159] = (Touch)0x0;
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x170),false);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x178),false);
    *(undefined4 *)(param_1 + 0x1b8) = 0x3f99999a;
    uVar1 = PVZ_T();
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x148) = fVar2 + 0.3;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x038c66b8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ToyNightGachaUI::ShowCurrentPlant() */

void __thiscall ToyNightGachaUI::ShowCurrentPlant(ToyNightGachaUI *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsPlatformHD(gLawnApp);
  if (cVar1 == '\0') {
    lVar2 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    uVar5 = *(undefined4 *)(this + 0x150);
    auVar4 = PVZ_T();
    local_10 = 0x3e99999a;
    local_c = 0x3f000000;
    fVar3 = CurveLerp<float>(auVar4,uVar5,auVar4._0_4_,&local_10,&local_c,3);
    *(float *)(lVar2 + 0x18) = fVar3;
  }
  else {
    lVar2 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    uVar5 = *(undefined4 *)(this + 0x150);
    auVar4 = PVZ_T();
    local_c = 0x3f800000;
    fVar3 = CurveLerp<float>(auVar4,uVar5,auVar4._0_4_,&local_c,&DAT_05751cd4,3);
    *(float *)(lVar2 + 0x18) = fVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x038c889c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ToyNightGachaUI::Update() */

void __thiscall ToyNightGachaUI::Update(ToyNightGachaUI *this)

{
  int iVar1;
  ToyNightGachaUI TVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PopAnimRig *this_00;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  LotteryResultProgressBar *this_01;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  code *pcVar14;
  StandaloneEffect *this_02;
  Effect_PopAnim *pEVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x168));
  }
  if (*(StandaloneEffect **)(this + 0x180) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x180));
  }
  if (*(StandaloneEffect **)(this + 0x170) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x170));
  }
  if (*(StandaloneEffect **)(this + 0x178) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x178));
  }
  this_00 = *(PopAnimRig **)(this + 0x160);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar16 = (float)PVZ_RealT();
    fVar17 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar16,fVar17);
  }
  uVar13 = *(undefined8 *)(this + 0x188);
  uVar11 = 0;
  uVar6 = FUN_038c1f00(uVar13,*(undefined8 *)(this + 400));
  if (uVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_038c1f0c(uVar13,uVar11);
      if ((StandaloneEffect *)*puVar7 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Update((StandaloneEffect *)*puVar7);
        uVar13 = *(undefined8 *)(this + 0x188);
        uVar6 = FUN_038c1f00(uVar13,*(undefined8 *)(this + 400));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  lVar8 = FUN_038c1f14(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  if (lVar8 == 0) goto LAB_038c86f0;
  fVar17 = *(float *)(this + 0x14c);
  fVar16 = (float)PVZ_T();
  if (fVar17 < fVar16) {
    this[0x158] = (ToyNightGachaUI)0x0;
    uVar18 = PVZ_EOT();
    *(undefined4 *)(this + 0x14c) = uVar18;
    uVar18 = PVZ_T();
    *(undefined4 *)(this + 0x144) = uVar18;
    fVar16 = (float)PVZ_T();
    *(float *)(this + 0x148) = fVar16 + 0.3;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    if (2 < *(uint *)(lVar8 + 0x24)) goto LAB_038c8730;
    uVar18 = *(undefined4 *)(this + 0x1a4);
    plVar9 = *(long **)(this + 0x160);
    *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(this + 0x1a0);
    *(undefined4 *)(lVar8 + 0x14) = uVar18;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      *(undefined8 *)(this + 0x160) = 0;
    }
    this[0x159] = (ToyNightGachaUI)0x1;
    fVar16 = (float)PVZ_T();
    *(float *)(this + 0x150) = fVar16 + 3.2;
    fVar16 = (float)PVZ_T();
    *(float *)(this + 0x154) = fVar16;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    if (*(int *)(lVar8 + 0x24) != 0) {
      StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),true);
      pEVar15 = *(Effect_PopAnim **)(this + 0x170);
      std::string::string((string *)local_18,"anim1");
      Effect_PopAnim::PlaySingleAnimation(pEVar15,(string *)local_18,0);
      std::string::~string((string *)local_18);
      nop();
      goto LAB_038c8730;
    }
  }
  else {
LAB_038c8730:
    fVar16 = *(float *)(this + 0x154);
  }
  fVar17 = (float)PVZ_T();
  if (fVar16 < fVar17) {
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x178),true);
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    if (*(uint *)(lVar8 + 0x24) < 3) {
      plVar9 = *(long **)(this + 0x178);
      pcVar14 = *(code **)(*plVar9 + 0x78);
      Sexy::Color::Color((Color *)local_18,0x30,0xf7,0xf5);
      (*pcVar14)(plVar9,(Color *)local_18);
    }
    ShowCurrentPlant(this);
  }
  fVar17 = *(float *)(this + 0x150);
  fVar16 = (float)PVZ_T();
  if (fVar17 < fVar16) {
    uVar18 = PVZ_EOT();
    *(undefined4 *)(this + 0x150) = uVar18;
    *(undefined4 *)(this + 0x154) = uVar18;
    uVar18 = PVZ_T();
    this[0x15a] = (ToyNightGachaUI)0x1;
    *(undefined4 *)(this + 0x144) = uVar18;
    fVar16 = (float)PVZ_T();
    *(float *)(this + 0x148) = fVar16 + 0.3;
  }
  if (((this[0x158] != (ToyNightGachaUI)0x0) || (this[0x159] != (ToyNightGachaUI)0x0)) ||
     (this[0x15a] != (ToyNightGachaUI)0x0)) goto LAB_038c86f0;
  fVar17 = *(float *)(this + 0x148);
  fVar16 = (float)PVZ_T();
  if (fVar16 <= fVar17) {
LAB_038c87c0:
    iVar3 = *(int *)(this + 0x13c);
LAB_038c87c4:
    if (*(int *)(this + 0x138) <= iVar3) goto LAB_038c86f0;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)iVar3);
  }
  else {
    if (*(int *)(this + 0x138) <= *(int *)(this + 0x13c)) {
      uVar18 = PVZ_EOT();
      plVar9 = *(long **)(this + 0x100);
      *(undefined4 *)(this + 0x148) = uVar18;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x158))(plVar9,1);
      }
      plVar9 = *(long **)(this + 0x108);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x158))(plVar9,1);
      }
      goto LAB_038c87c0;
    }
    uVar18 = PVZ_T();
    *(undefined4 *)(this + 0x144) = uVar18;
    fVar16 = (float)PVZ_T();
    *(undefined4 *)(this + 0x1b8) = 0x3dcccccd;
    *(float *)(this + 0x148) = fVar16 + 0.3;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    iVar3 = *(int *)(lVar8 + 0x10);
    iVar1 = *(int *)(lVar8 + 0x14);
    if (*(uint *)(lVar8 + 0x24) < 3) {
      iVar12 = *(int *)(this + 0x140);
      uVar13 = *(undefined8 *)(this + 0x188);
      uVar11 = FUN_038c1f00(uVar13,*(undefined8 *)(this + 400));
      if ((ulong)(long)iVar12 < uVar11) {
        puVar7 = (undefined8 *)FUN_038c1f0c(uVar13,(long)iVar12);
        this_02 = (StandaloneEffect *)*puVar7;
        if (this_02 != (StandaloneEffect *)0x0) {
          Sexy::FastCurve::SetOutRange((FastCurve *)local_18,(float)iVar3,(float)iVar1);
          StandaloneEffect::SetScreenSpaceOrigin(this_02,(SexyVector2 *)local_18,900000);
          puVar7 = (undefined8 *)
                   FUN_038c1f0c(*(undefined8 *)(this + 0x188),(long)*(int *)(this + 0x140));
          StandaloneEffect::SetVisibility((StandaloneEffect *)*puVar7,true);
          puVar7 = (undefined8 *)
                   FUN_038c1f0c(*(undefined8 *)(this + 0x188),(long)*(int *)(this + 0x140));
          pEVar15 = (Effect_PopAnim *)*puVar7;
          std::string::string((string *)local_18,"anim");
          PVZ_EOT();
          Effect_PopAnim::PlayLoopingAnimation(pEVar15,(FastCurve *)local_18,0);
          std::string::~string((string *)local_18);
          nop();
          iVar12 = *(int *)(this + 0x140);
        }
      }
      *(int *)(this + 0x140) = iVar12 + 1;
    }
    ShowCurrentPlant(this);
    iVar3 = *(int *)(this + 0x13c) + 1;
    *(int *)(this + 0x13c) = iVar3;
    *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + *(int *)(this + 0x1b0);
    if (iVar3 == 5) {
      local_18[0] = *(int *)(this + 0x138) + -5;
      piVar10 = eastl::min_alt<int>((int *)&DAT_05751cd8,local_18);
      iVar1 = *piVar10;
      iVar12 = *(int *)(this + 0x50);
      this_01 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      iVar5 = FUN_038c310c(0x3c);
      iVar3 = *(int *)(this + 0x13c);
      *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + *(int *)(this + 0x1b4);
      *(int *)(this + 0x1a8) =
           (int)((((float)iVar12 - (float)iVar4 * (float)(iVar1 + -1)) -
                 (float)((iVar1 + -1) * iVar5)) * 0.5);
    }
    if (*(int *)(this + 0x138) <= iVar3) goto LAB_038c86f0;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)iVar3);
    if (*(uint *)(lVar8 + 0x24) < 3) {
      if (*(long **)(this + 0x160) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x160) + 0x18))();
        *(undefined8 *)(this + 0x160) = 0;
      }
      this[0x159] = (ToyNightGachaUI)0x1;
      fVar16 = (float)PVZ_T();
      *(float *)(this + 0x150) = fVar16 + 3.2;
      uVar18 = PVZ_T();
      iVar3 = *(int *)(this + 0x13c);
      *(undefined4 *)(this + 0x154) = uVar18;
      *(undefined4 *)(this + 0x1b8) = 0x3f99999a;
      lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)iVar3);
      if (*(int *)(lVar8 + 0x24) != 0) {
        StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),true);
        pEVar15 = *(Effect_PopAnim **)(this + 0x170);
        std::string::string((string *)local_18,"anim1");
        Effect_PopAnim::PlaySingleAnimation(pEVar15,(string *)local_18,0);
        std::string::~string((string *)local_18);
        nop();
        iVar3 = *(int *)(this + 0x13c);
      }
      goto LAB_038c87c4;
    }
  }
  uVar21 = *(undefined4 *)(this + 0x144);
  uVar20 = *(undefined4 *)(this + 0x148);
  uVar18 = PVZ_T();
  iVar3 = CurveLerp<int>(uVar21,uVar20,uVar18,this + 0x1a0,this + 0x1a8,3);
  *(int *)(lVar8 + 0x10) = iVar3;
  lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
  uVar21 = *(undefined4 *)(this + 0x144);
  uVar20 = *(undefined4 *)(this + 0x148);
  uVar18 = PVZ_T();
  iVar3 = CurveLerp<int>(uVar21,uVar20,uVar18,this + 0x1a4,this + 0x1ac,3);
  TVar2 = this[0x159];
  *(int *)(lVar8 + 0x14) = iVar3;
  if (TVar2 == (ToyNightGachaUI)0x0) {
    local_18[0] = 0x3f800000;
    lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    uVar18 = *(undefined4 *)(this + 0x148);
    auVar19 = PVZ_T();
    fVar16 = CurveLerp<float>(auVar19,uVar18,auVar19._0_4_,this + 0x1b8,local_18,3);
    *(float *)(lVar8 + 0x18) = fVar16;
  }
LAB_038c86f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::ToyNightGachaUI() */

void __thiscall ToyNightGachaUI::ToyNightGachaUI(ToyNightGachaUI *this)

{
  LawnApp *pLVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR_GetClass_066ba030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ba358;
  Set8BytesTo0(this + 0x110);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x15b] = (ToyNightGachaUI)0x0;
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06ab7400);
  *(undefined8 *)(this + 0xf0) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x59] = (ToyNightGachaUI)0x0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::~ToyNightGachaUI() */

void __thiscall ToyNightGachaUI::~ToyNightGachaUI(ToyNightGachaUI *this)

{
  LawnApp *pLVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ba358;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066ba030;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<GachaRewardUI*,std::allocator<GachaRewardUI*>>::clear
            ((vector<GachaRewardUI*,std::allocator<GachaRewardUI*>> *)&DAT_06ab7400);
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x170) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x178);
  }
  else {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
    plVar2 = *(long **)(this + 0x178);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x48))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  uVar6 = *(undefined8 *)(this + 0x188);
  uVar5 = 0;
  uVar3 = FUN_038c1f00(uVar6,*(undefined8 *)(this + 400));
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)FUN_038c1f0c(uVar6,uVar5);
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
        puVar4 = (undefined8 *)FUN_038c1f0c(*(undefined8 *)(this + 0x188),uVar5);
        *puVar4 = 0;
        uVar6 = *(undefined8 *)(this + 0x188);
        uVar3 = FUN_038c1f00(uVar6,*(undefined8 *)(this + 400));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x188));
  std::vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>>::~vector
            ((vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>> *)(this + 0x120));
  std::string::~string((string *)(this + 0x110));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToyNightGachaUI::~ToyNightGachaUI() */

void __thiscall ToyNightGachaUI::~ToyNightGachaUI(ToyNightGachaUI *this)

{
  ~ToyNightGachaUI(this);
  AK::FreeHook(this);
  return;
}


/* ToyNightGachaUI::ClearGachaResult() */

void __thiscall ToyNightGachaUI::ClearGachaResult(ToyNightGachaUI *this)

{
  std::vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>>::clear
            ((vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>> *)(this + 0x120));
  return;
}


/* ToyNightGachaUI::ButtonDepress(int) */

void __thiscall ToyNightGachaUI::ButtonDepress(ToyNightGachaUI *this,int param_1)

{
  byte bVar1;
  long *plVar2;
  ActivityCollectionNighttheToy *this_00;
  LotteryPanel *this_01;
  int iVar3;
  
  if (param_1 == 0) {
    this_01 = (LotteryPanel *)UISingletonDialog<ActivityCollectionNighttheToy>::GetSingletonPtr();
    LotteryPanel::CloseBonusEffect(this_01);
    bVar1 = 0;
  }
  else if (param_1 == 1) {
    iVar3 = 2;
    if (*(int *)(this + 0x138) < 2) {
      iVar3 = 1;
    }
    this_00 = (ActivityCollectionNighttheToy *)
              UISingletonDialog<ActivityCollectionNighttheToy>::GetSingletonPtr();
    bVar1 = ActivityCollectionNighttheToy::LotteryRewards(this_00,iVar3);
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 1;
  }
  plVar2 = *(long **)(this + 0x100);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,bVar1);
  }
  plVar2 = *(long **)(this + 0x108);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,bVar1);
  }
  return;
}


/* non-virtual thunk to ToyNightGachaUI::ButtonDepress(int) */

void __thiscall ToyNightGachaUI::ButtonDepress(ToyNightGachaUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::InitRewardPool(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall ToyNightGachaUI::InitRewardPool(ToyNightGachaUI *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  NameMapperBase *pNVar5;
  undefined8 local_70;
  undefined8 local_68;
  int local_60 [2];
  undefined1 auStack_58 [24];
  int local_40;
  undefined4 local_3c;
  GAME_ITEM_INFO aGStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearGachaResult(this);
  local_70 = FUN_038c6da8(*(undefined8 *)param_1);
  local_68 = FUN_038c6df8(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    ToyNightGachaRewardUI::ToyNightGachaRewardUI((ToyNightGachaRewardUI *)local_60);
    local_60[0] = *piVar4;
    local_40 = piVar4[1];
    pNVar5 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar5,*piVar4);
    if (cVar2 == '\0') {
      OtherServerNameMapper::GetInstance();
      iVar3 = *piVar4;
      cVar2 = FUN_038c1858(iVar3);
      if (cVar2 == '\0') {
        pNVar5 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        cVar2 = NameMapperBase::ContainsId(pNVar5,*piVar4);
        if (cVar2 == '\0') {
          pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar5,*piVar4);
          if (cVar2 == '\0') {
            iVar3 = *piVar4;
            if (iVar3 - 0x61a9U < 999) {
              local_3c = 0;
            }
          }
          else {
            local_3c = 2;
            iVar3 = *piVar4;
          }
        }
        else {
          local_3c = 3;
          iVar3 = *piVar4;
        }
      }
      else {
        local_3c = 4;
      }
    }
    else {
      iVar3 = *piVar4;
      local_3c = 1;
    }
    GetGameItemInfo(iVar3,0x7fffffff,0);
    FUN_054766c8(auStack_58,auStack_10);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    std::vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>>::push_back
              ((vector<ToyNightGachaRewardUI,std::allocator<ToyNightGachaRewardUI>> *)(this + 0x120)
               ,(ToyNightGachaRewardUI *)local_60);
    std::pair<int_const,std::wstring>::~pair((pair<int_const,std::wstring> *)local_60);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::InitView(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&) */

void __thiscall ToyNightGachaUI::InitView(ToyNightGachaUI *this,vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  LotteryResultProgressBar *pLVar10;
  char *pcVar11;
  long lVar12;
  Effect_PopAnim *pEVar13;
  ResourceInfo *pRVar14;
  PVZ2UIButton *pPVar15;
  SalesProgressBar *pSVar16;
  long *plVar17;
  string *__n;
  code *pcVar18;
  wstring *pwVar19;
  long lVar20;
  StandaloneEffect *pSVar21;
  uint uVar22;
  undefined8 uVar23;
  float fVar24;
  Effect_PopAnim *pEVar25;
  string asStack_a0 [8];
  RtWeakPtr aRStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  wstring awStack_88 [8];
  undefined1 auStack_80 [8];
  StringHelper aSStack_78 [56];
  StandaloneEffect *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  InitRewardPool(this,param_1);
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  uVar2 = FUN_038c1f14(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  this[0x159] = (ToyNightGachaUI)0x0;
  plVar17 = *(long **)(this + 0x160);
  *(undefined4 *)(this + 0x138) = uVar2;
  this[0x15a] = (ToyNightGachaUI)0x0;
  this[0x158] = (ToyNightGachaUI)0x1;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    *(undefined8 *)(this + 0x160) = 0;
  }
  if (*(long **)(this + 0x170) == (long *)0x0) {
    plVar17 = *(long **)(this + 0x178);
  }
  else {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
    plVar17 = *(long **)(this + 0x178);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))();
    *(undefined8 *)(this + 0x178) = 0;
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 0x48))();
    *(undefined8 *)(this + 0x168) = 0;
  }
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  fVar24 = (float)PVZ_T();
  *(float *)(this + 0x14c) = fVar24 + 2.2;
  pEVar25._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  iVar6 = *(int *)(this + 0x50);
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x144) = pEVar25._0_4_;
  *(int *)(this + 0x1a0) = iVar6 / 2;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x148) = pEVar25._0_4_;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x150) = pEVar25._0_4_;
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x154) = pEVar25._0_4_;
  iVar3 = FUN_038c310c(0x32);
  *(int *)(this + 0x1a4) = iVar3 + *(int *)(this + 0x54) / 2;
  piVar9 = eastl::min_alt<int>((int *)&DAT_05751cd8,(int *)(this + 0x138));
  iVar3 = *piVar9;
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar5 = FUN_038c310c(0x3c);
  *(undefined4 *)(this + 0x1ac) = 0x50;
  *(int *)(this + 0x1a8) =
       (int)((((float)iVar6 - (float)iVar4 * (float)(iVar3 + -1)) - (float)((iVar3 + -1) * iVar5)) *
            0.5);
  LawnApp::GetPlatformName();
  bVar1 = std::operator==((string *)local_40,"ipad3");
  std::string::~string((string *)local_40);
  if (bVar1) {
    iVar6 = FUN_038c310c(0x28);
    *(int *)(this + 0x1ac) = *(int *)(this + 0x1ac) + iVar6;
  }
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar3 = FUN_038c310c(0x3c);
  *(int *)(this + 0x1b0) = (int)((float)iVar3 + (float)iVar6);
  uVar2 = FUN_038c310c(0xa0);
  *(undefined4 *)(this + 0x1b4) = uVar2;
  *(undefined4 *)(this + 0x1b8) = 0x3dcccccd;
  if (*(long *)(this + 0x168) == 0) {
    pEVar13 = GameObject::Create<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x168) = pEVar13;
    std::string::string((string *)local_40,"POPANIM_UI_TOYNIGHT_TN_GACHA");
    GetPAMByName((string *)local_40);
    std::string::~string((string *)local_40);
    nop();
    pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aSStack_78);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x168),(PopAnim *)pRVar14,(RtClass *)0x0);
    pSVar21 = *(StandaloneEffect **)(this + 0x168);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_40,(float)*(int *)(this + 0x50) * 0.5,
               (float)*(int *)(this + 0x54) * 0.6428572);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar21,(SexyVector2 *)local_40,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x168),true);
    (**(code **)(**(long **)(this + 0x168) + 0x80))(0x3fc00000,*(long **)(this + 0x168));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_78);
  }
  pcVar11 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar11,"Play_UI_Gacha_Start");
  __n = (string *)local_40;
  std::string::string(asStack_a0,"POPANIM_EFFECTS_GACHA_AVATAR");
  nop();
  iVar6 = *(int *)(this + 0x138);
  if (0 < iVar6) {
    uVar23 = *(undefined8 *)(this + 0x120);
    lVar20 = 0;
    do {
      lVar12 = FUN_038c1f28(uVar23,lVar20);
      if (*(int *)(lVar12 + 0x24) - 1U < 2) {
        std::string::append(asStack_a0,"POPANIM_EFFECTS_GACHA_AVATAR",(size_t)__n);
        break;
      }
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < iVar6);
  }
  pEVar13 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x170) = pEVar13;
  GetPAMByName(asStack_a0);
  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_98);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x170),(PopAnim *)pRVar14,(RtClass *)0x0);
  bVar1 = std::operator==(asStack_a0,"POPANIM_EFFECTS_GACHA_PLANT");
  if (bVar1) {
    iVar3 = *(int *)(this + 0x50);
    pSVar21 = *(StandaloneEffect **)(this + 0x170);
    iVar6 = *(int *)(this + 0x54) / 2;
  }
  else {
    iVar3 = *(int *)(this + 0x50);
    pSVar21 = *(StandaloneEffect **)(this + 0x170);
    iVar6 = *(int *)(this + 0x54) / 6;
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)local_40,(float)(iVar3 / 2),(float)iVar6);
  lVar20 = 0;
  StandaloneEffect::SetScreenSpaceOrigin(pSVar21,(SexyVector2 *)local_40,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x170),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),false);
  std::string::string((string *)local_40,"POPANIM_EFFECTS_PLANTBACK_LIGHT_WHITE");
  GetPAMByName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_90);
  pEVar13 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x178) = pEVar13;
  Effect_PopAnim::CreatePopAnimRig(pEVar13,(PopAnim *)pRVar14,(RtClass *)0x0);
  pSVar21 = *(StandaloneEffect **)(this + 0x178);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)local_40,(float)*(int *)(this + 0x1a0),(float)*(int *)(this + 0x1a4));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar21,(SexyVector2 *)local_40,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x178),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x178),false);
  (**(code **)(**(long **)(this + 0x178) + 0x80))(0x3e99999a,*(long **)(this + 0x178));
  uVar23 = *(undefined8 *)(this + 0x178);
  std::string::string((string *)local_40,"anim");
  Effect_PopAnim::PlayLoopingAnimation(pEVar25._0_4_,uVar23,(string *)local_40,0);
  std::string::~string((string *)local_40);
  nop();
  iVar6 = *(int *)(this + 0x138);
  if (0 < iVar6) {
    do {
      lVar12 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar20);
      if (*(int *)(lVar12 + 0x24) - 1U < 2) {
        local_40[0] = (StandaloneEffect *)GameObject::CreateOutsideTable<Effect_PopAnim>();
        Effect_PopAnim::CreatePopAnimRig
                  ((Effect_PopAnim *)local_40[0],(PopAnim *)pRVar14,(RtClass *)0x0);
        Effect_PopAnim::SetCentered((Effect_PopAnim *)local_40[0],true);
        StandaloneEffect::SetVisibility(local_40[0],false);
        std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                  ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x188),
                   (Effect_PopAnim **)local_40);
        iVar6 = *(int *)(this + 0x138);
      }
      iVar3 = (int)lVar20;
      lVar20 = lVar20 + 1;
    } while (iVar3 + 1 < iVar6);
  }
  if (*(long *)(this + 0x100) == 0) {
    FUN_05478178(aSStack_78,L"[BUTTON_OK]",auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,0,(ButtonListener *)(this + 0xd8),(wstring *)aSStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(this + 0x100) = pPVar15;
    FUN_05476c50(aSStack_78);
    nop();
    plVar17 = *(long **)(this + 0x100);
    iVar6 = *(int *)(this + 0x50);
    pcVar18 = *(code **)(*plVar17 + 0x198);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7470);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    fVar24 = (float)FUN_038c3120();
    uVar2 = FUN_038c310c(500);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7470);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7470);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar18)(plVar17,(int)((float)((iVar6 - iVar3) / 2) + fVar24),uVar2,uVar7,uVar8);
    plVar17 = *(long **)(this + 0x100);
    pcVar18 = *(code **)(*plVar17 + 800);
    uVar23 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar18)(plVar17,uVar23);
    pPVar15 = *(PVZ2UIButton **)(this + 0x100);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06ab7470,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab7598,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)local_40);
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  }
  FUN_05476574(awStack_88);
  iVar6 = *(int *)(this + 0x138);
  if (iVar6 == 1) {
    FUN_054772c4(awStack_88,L"[GACHA_AGAIN_1_TIMES]");
    lVar20 = *(long *)(this + 0x108);
    uVar22 = 1;
  }
  else {
    uVar22 = 9;
    FUN_054772c4(awStack_88,L"[GACHA_AGAIN_10_TIMES]");
    lVar20 = *(long *)(this + 0x108);
  }
  if (lVar20 == 0) {
    Sexy::Color::Color((Color *)local_40,1);
    pPVar15 = ::operator_new(0x300);
    pwVar19 = awStack_88;
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,1,(ButtonListener *)(this + 0xd8),awStack_88,(Color *)local_40);
    iVar3 = (int)pwVar19;
    *(PVZ2UIButton **)(this + 0x108) = pPVar15;
    pcVar18 = *(code **)(*(long *)pPVar15 + 800);
    uVar23 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    (*pcVar18)(pPVar15,uVar23);
    FUN_05476574(auStack_80);
    if (iVar6 == 1) {
      pcVar11 = "[GACHA_AGAIN_1_TIMES_NEW]";
    }
    else {
      pcVar11 = "[GACHA_AGAIN_10_TIMES_NEW]";
    }
    std::string::string((string *)aSStack_78,pcVar11);
    StringHelper::ReplaceNumberString
              (aSStack_78,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar22,iVar3);
    FUN_054766c8(auStack_80,(string *)local_40);
    FUN_05476c50((string *)local_40);
    std::string::~string((string *)aSStack_78);
    nop();
    iVar6 = *(int *)(this + 0x50);
    plVar17 = *(long **)(this + 0x108);
    pcVar18 = *(code **)(*plVar17 + 0x198);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7470);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar4 = FUN_038c310c(100);
    uVar2 = FUN_038c310c(500);
    uVar7 = FUN_038c310c(0xb4);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7470);
    uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar18)(plVar17,(iVar6 - iVar3) / 2 - iVar4,uVar2,uVar7,uVar8);
    pPVar15 = *(PVZ2UIButton **)(this + 0x108);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06ab7470,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ab7598,3);
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)local_40);
    (**(code **)(**(long **)(this + 0x108) + 0x158))(*(long **)(this + 0x108),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
    FUN_05476c50(auStack_80);
  }
  FUN_05476c50(awStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  std::string::~string(asStack_a0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::addRewardName(std::vector<RewardItemData, std::allocator<RewardItemData> >&) */

void ToyNightGachaUI::addRewardName(vector *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  Effect_PopAnim *local_20;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  ClearGachaResult((ToyNightGachaUI *)param_1);
  uVar1 = FUN_038c1f14(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
  uVar11 = *(undefined8 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  uVar2 = FUN_038c1f00(uVar11,*(undefined8 *)(param_1 + 400));
  if (uVar2 != 0) {
    do {
      plVar3 = (long *)FUN_038c1f0c(uVar11,uVar8);
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
        puVar4 = (undefined8 *)FUN_038c1f0c(*(undefined8 *)(param_1 + 0x188),uVar8);
        *puVar4 = 0;
        uVar11 = *(undefined8 *)(param_1 + 0x188);
        uVar2 = FUN_038c1f00(uVar11,*(undefined8 *)(param_1 + 400));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  lVar9 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x188));
  iVar10 = *(int *)(param_1 + 0x138);
  if (0 < iVar10) {
    do {
      lVar5 = FUN_038c1f28(*(undefined8 *)(param_1 + 0x120),lVar9);
      if (*(int *)(lVar5 + 0x24) - 1U < 2) {
        local_20 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        std::string::string(asStack_10,"POPANIM_EFFECTS_PLANTBACK_CARD");
        GetPAMByName(asStack_10);
        std::string::~string(asStack_10);
        nop();
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(local_20,(PopAnim *)pRVar6,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(local_20,true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)local_20,false);
        (**(code **)(*(long *)local_20 + 0x80))(0x3f19999a,local_20);
        std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                  ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x188),
                   &local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        iVar10 = *(int *)(param_1 + 0x138);
      }
      iVar7 = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (iVar7 + 1 < iVar10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::resetUIDisplay() */

void __thiscall ToyNightGachaUI::resetUIDisplay(ToyNightGachaUI *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  LotteryResultProgressBar *this_00;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ResourceInfo *pRVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  Effect_PopAnim *local_38;
  RtWeakPtr aRStack_30 [8];
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  uVar1 = FUN_038c1f14(*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128));
  this[0x159] = (ToyNightGachaUI)0x0;
  *(undefined4 *)(this + 0x138) = uVar1;
  this[0x158] = (ToyNightGachaUI)0x1;
  fVar14 = (float)PVZ_T();
  *(float *)(this + 0x14c) = fVar14 + 2.2;
  uVar15 = PVZ_EOT();
  uVar1 = (undefined4)uVar15;
  *(undefined4 *)(this + 0x144) = uVar1;
  *(undefined4 *)(this + 0x148) = uVar1;
  *(undefined4 *)(this + 0x150) = uVar1;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x170),false);
  piVar4 = eastl::min_alt<int>((int *)&DAT_05751cd8,(int *)(this + 0x138));
  iVar13 = *piVar4;
  iVar10 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_038c310c(0x3c);
  *(undefined4 *)(this + 0x1ac) = 0x50;
  *(int *)(this + 0x1a8) =
       (int)((((float)iVar10 - (float)iVar2 * (float)(iVar13 + -1)) - (float)((iVar13 + -1) * iVar3)
             ) * 0.5);
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_28,"animate_01");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animate_02");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animate_03");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animate_04");
  AnimationSequence::AddLoopingAnimation(uVar15,aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence
            (*(Effect_PopAnim **)(this + 0x168),(AnimationSequence *)aPStack_20);
  uVar15 = *(undefined8 *)(this + 0x188);
  uVar5 = FUN_038c1f00(uVar15,*(undefined8 *)(this + 400));
  if (uVar5 != 0) {
    do {
      plVar6 = (long *)FUN_038c1f0c(uVar15,uVar11);
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
        puVar7 = (undefined8 *)FUN_038c1f0c(*(undefined8 *)(this + 0x188),uVar11);
        *puVar7 = 0;
        uVar15 = *(undefined8 *)(this + 0x188);
        uVar5 = FUN_038c1f00(uVar15,*(undefined8 *)(this + 400));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  lVar12 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x188));
  iVar13 = *(int *)(this + 0x138);
  if (0 < iVar13) {
    do {
      lVar8 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar12);
      if (1 < *(int *)(lVar8 + 0x24) - 1U) {
        local_38 = GameObject::CreateOutsideTable<Effect_PopAnim>();
        std::string::string(asStack_28,"POPANIM_EFFECTS_PLANTBACK_CARD");
        GetPAMByName(asStack_28);
        std::string::~string(asStack_28);
        nop();
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
        Effect_PopAnim::CreatePopAnimRig(local_38,(PopAnim *)pRVar9,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(local_38,true);
        StandaloneEffect::SetVisibility((StandaloneEffect *)local_38,false);
        (**(code **)(*(long *)local_38 + 0x80))(0x3f19999a,local_38);
        std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                  ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x188),
                   &local_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        iVar13 = *(int *)(this + 0x138);
      }
      iVar10 = (int)lVar12;
      lVar12 = lVar12 + 1;
    } while (iVar10 + 1 < iVar13);
  }
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightGachaUI::Draw(Sexy::Graphics*) */

void __thiscall ToyNightGachaUI::Draw(ToyNightGachaUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  SalesProgressBar *pSVar15;
  int *piVar16;
  long lVar17;
  string *extraout_x0;
  NameMapperBase *pNVar18;
  DIniFile *this_00;
  long lVar19;
  string *extraout_x0_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  DIniFile *this_03;
  Image *pIVar20;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  LotteryResultProgressBar *pLVar24;
  float fVar25;
  Sexy aSStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Sexy aSStack_38 [16];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(StandaloneEffect **)(this + 0x168) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x168),param_1);
  }
  if (*(StandaloneEffect **)(this + 0x180) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x180),param_1);
  }
  uVar23 = *(undefined8 *)(this + 0x188);
  uVar21 = 0;
  uVar12 = FUN_038c1f00(uVar23,*(undefined8 *)(this + 400));
  if (uVar12 != 0) {
    do {
      puVar13 = (undefined8 *)FUN_038c1f0c(uVar23,uVar21);
      if ((StandaloneEffect *)*puVar13 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Draw((StandaloneEffect *)*puVar13,param_1);
        uVar23 = *(undefined8 *)(this + 0x188);
        uVar12 = FUN_038c1f00(uVar23,*(undefined8 *)(this + 400));
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar12);
  }
  iVar10 = *(int *)(this + 0x138);
  lVar22 = 0;
  if (0 < iVar10) {
    do {
      piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
      if ((-1 < piVar16[4]) && (-1 < piVar16[5])) {
        switch(piVar16[9]) {
        case 0:
          DSingleton<HeadshotConfig>::getInstance();
          nop();
          piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
          DString::DString((DString *)aIStack_18,*piVar16);
          DString::operator_cast_to_string((DString *)aIStack_18);
          std::string::string((string *)aSStack_38,"plant");
          std::string::string((string *)aCStack_28,"none");
          DIniFile::getItem(extraout_x0,asStack_40,(string *)aSStack_38);
          std::string::~string((string *)aCStack_28);
          nop();
          std::string::~string((string *)aSStack_38);
          nop();
          std::string::~string(asStack_40);
          DString::~DString((DString *)aIStack_18);
          Sexy::StringToUpper(aSStack_50,extraout_x1_00);
          std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",(string *)aCStack_28);
          lVar14 = StringHelper::ToImage((string *)aIStack_18,false);
          std::string::~string((string *)aIStack_18);
          std::string::~string((string *)aCStack_28);
          piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
          if (*piVar16 != 0) {
            DSingleton<HeadshotConfig>::getInstance();
            nop();
            piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
            DString::DString((DString *)aIStack_18,*piVar16);
            DString::operator_cast_to_string((DString *)aIStack_18);
            std::string::string((string *)aCStack_28,"frame");
            iVar10 = DIniFile::getItemInt(this_00,(string *)aSStack_38,(string *)aCStack_28,1);
            std::string::~string((string *)aCStack_28);
            nop();
            std::string::~string((string *)aSStack_38);
            DString::~DString((DString *)aIStack_18);
            DString::DString((DString *)aSStack_38,iVar10);
            ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)aSStack_38);
            ::operator+((DString *)aCStack_28,"_1");
            DString::operator_cast_to_string((DString *)aIStack_18);
            DString::~DString((DString *)aIStack_18);
            DString::~DString((DString *)aCStack_28);
            DString::~DString((DString *)aSStack_38);
            lVar17 = StringHelper::ToImage(asStack_48,false);
            if (lVar17 != 0) {
              lVar19 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
              iVar9 = *(int *)(lVar19 + 0x10);
              pLVar24 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
              iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
              iVar4 = FUN_038c310c(0xe);
              lVar19 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
              iVar2 = *(int *)(lVar19 + 0x14);
              pSVar15 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
              iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
              iVar11 = FUN_038c310c(0x1b);
              iVar6 = FUN_038c310c(0x8c);
              iVar7 = FUN_038c310c(0x50);
              Sexy::Insets::Insets
                        (aIStack_18,(int)(((float)iVar9 - (float)iVar3 * 0.5) - (float)iVar4),
                         (int)(((float)iVar11 + (float)iVar2) - (float)iVar5 * 0.5),iVar6,iVar7);
              DrawAdaptiveImage(param_1,(DString *)aIStack_18,lVar17);
            }
            DString::DString((DString *)aSStack_38,iVar10);
            ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)aSStack_38);
            ::operator+((DString *)aCStack_28,"_2");
            DString::operator_cast_to_string((DString *)aIStack_18);
            DString::~DString((DString *)aIStack_18);
            DString::~DString((DString *)aCStack_28);
            DString::~DString((DString *)aSStack_38);
            lVar17 = StringHelper::ToImage(asStack_40,false);
            if (lVar17 != 0) {
              lVar19 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
              iVar10 = *(int *)(lVar19 + 0x10);
              pLVar24 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
              iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
              iVar3 = FUN_038c310c(0xe);
              lVar19 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
              iVar9 = *(int *)(lVar19 + 0x14);
              pSVar15 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
              iVar4 = SalesProgressBar::GetCurrentLevel(pSVar15);
              iVar5 = FUN_038c310c(0x1b);
              iVar11 = FUN_038c310c(0x8c);
              iVar6 = FUN_038c310c(0x50);
              Sexy::Insets::Insets
                        (aIStack_18,(int)(((float)iVar10 - (float)iVar2 * 0.5) - (float)iVar3),
                         (int)(((float)iVar5 + (float)iVar9) - (float)iVar4 * 0.5),iVar11,iVar6);
              DrawAdaptiveImage(param_1,(DString *)aIStack_18,lVar17);
            }
            std::string::~string(asStack_40);
            std::string::~string(asStack_48);
          }
          iVar10 = 0x19;
          iVar9 = 0x2d;
          std::string::~string((string *)aSStack_50);
          fVar25 = 0.7;
          break;
        case 1:
        case 2:
          fVar25 = 1.0;
          iVar10 = 0;
          iVar9 = 0;
          lVar14 = NewAvatar::GetAvatarTinyImage(*piVar16);
          break;
        case 3:
          iVar2 = MaterialItemMapper::GetInstance();
          iVar10 = 0;
          FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
          iVar9 = 0;
          fVar25 = 1.0;
          NameMapperBase::GetNameForId(iVar2);
          Sexy::StringToUpper(aSStack_38,extraout_x1);
          std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aCStack_28);
          lVar14 = StringHelper::ToImage((string *)aIStack_18,true);
          std::string::~string((string *)aIStack_18);
          std::string::~string((string *)aCStack_28);
          std::string::~string((string *)aSStack_38);
          break;
        case 4:
          iVar9 = 0;
          fVar25 = 1.0;
          std::string::string((string *)aIStack_18,"IMAGE_UI_DIALOG_ASSET_GEM_LARGE");
          lVar14 = StringHelper::ToImage((string *)aIStack_18,false);
          std::string::~string((string *)aIStack_18);
          nop();
          iVar10 = iVar9;
          break;
        default:
          goto switchD_038d1264_default;
        }
        uVar23 = *(undefined8 *)(this + 0x120);
        if (lVar14 != 0) {
          lVar17 = FUN_038c1f28(uVar23,lVar22);
          iVar2 = *(int *)(lVar17 + 0x10);
          pLVar24 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
          iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
          iVar5 = FUN_038c310c(0xe);
          lVar17 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
          iVar3 = *(int *)(lVar17 + 0x14);
          pSVar15 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
          iVar11 = SalesProgressBar::GetCurrentLevel(pSVar15);
          iVar6 = FUN_038c310c(0x1b);
          iVar7 = FUN_038c310c((int)(fVar25 * 140.0));
          iVar8 = FUN_038c310c((int)(fVar25 * 80.0));
          Sexy::Insets::Insets
                    (aIStack_18,
                     (int)((((float)iVar9 + (float)iVar2) - (float)iVar5) - (float)iVar4 * 0.5),
                     (int)(((float)iVar10 + (float)iVar3 + (float)iVar6) - (float)iVar11 * 0.5),
                     iVar7,iVar8);
          DrawAdaptiveImage(param_1,aIStack_18,lVar14);
          uVar23 = *(undefined8 *)(this + 0x120);
        }
        piVar16 = (int *)FUN_038c1f28(uVar23,lVar22);
switchD_038d1264_default:
        FUN_05477b24(asStack_48,piVar16 + 2);
        Sexy::Color::Color(aCStack_28,0xff,0xde,0);
        uVar23 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        lVar14 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
        iVar2 = FUN_038c310c(100);
        iVar10 = *(int *)(lVar14 + 0x10);
        iVar9 = *(int *)(lVar14 + 0x14);
        pSVar15 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7440);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar15);
        iVar4 = FUN_038c310c(10);
        iVar5 = FUN_038c310c(200);
        FUN_05477b24(aSStack_38,asStack_48);
        Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_28);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar10 - iVar2),
                   (float)iVar4 + (float)iVar9 + (float)iVar3 * 0.5,(float)iVar5,uVar23,param_1,
                   aSStack_38,1,aIStack_18,0);
        FUN_05476c50(aSStack_38);
        lVar14 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
        if (1 < *(int *)(lVar14 + 0x20)) {
          Sexy::StrFormat(L"x%d",asStack_40);
          uVar23 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20)
          ;
          lVar14 = FUN_038c1f28(*(undefined8 *)(this + 0x120),lVar22);
          iVar2 = FUN_038c310c(0x13);
          iVar10 = *(int *)(lVar14 + 0x10);
          iVar3 = FUN_038c310c(0x1e);
          iVar9 = *(int *)(lVar14 + 0x14);
          iVar4 = FUN_038c310c(0x28);
          FUN_05477b24(aSStack_38,asStack_40);
          Sexy::Color::Color((Color *)aIStack_18,1);
          Sexy::PrimeTypeface::DrawString_Line
                    ((PrimeTypeface *)(float)(iVar2 + iVar10),(float)(iVar3 + iVar9),(float)iVar4,
                     uVar23,param_1,aSStack_38,0,aIStack_18,0);
          FUN_05476c50(aSStack_38);
          FUN_05476c50(asStack_40);
        }
        FUN_05476c50(asStack_48);
        iVar10 = *(int *)(this + 0x138);
      }
      iVar9 = (int)lVar22;
      lVar22 = lVar22 + 1;
    } while (iVar9 + 1 < iVar10);
  }
  if (this[0x159] != (ToyNightGachaUI)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aCStack_28,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    Sexy::Insets::Insets(aIStack_18,0,0,0,0xb2);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aCStack_28);
  }
  if (*(StandaloneEffect **)(this + 0x170) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x170),param_1);
  }
  if (*(StandaloneEffect **)(this + 0x178) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x178),param_1);
  }
  if ((this[0x159] != (ToyNightGachaUI)0x0) &&
     (piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c)),
     *(char *)((long)piVar16 + 0x1d) != '\0')) {
    iVar10 = piVar16[9];
    pLVar24 = (LotteryResultProgressBar *)0x0;
    if (iVar10 - 1U < 2) {
      pLVar24 = (LotteryResultProgressBar *)NewAvatar::GetAvatarTinyImage(*piVar16);
      lVar22 = FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      iVar10 = *(int *)(lVar22 + 0x24);
    }
    if (iVar10 == 0) {
      DSingleton<HeadshotConfig>::getInstance();
      nop();
      piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      DString::DString((DString *)aIStack_18,*piVar16);
      DString::operator_cast_to_string((DString *)aIStack_18);
      std::string::string((string *)aSStack_38,"plant");
      std::string::string((string *)aCStack_28,"none");
      DIniFile::getItem(extraout_x0_00,asStack_40,(string *)aSStack_38);
      std::string::~string((string *)aCStack_28);
      nop();
      std::string::~string((string *)aSStack_38);
      nop();
      std::string::~string(asStack_40);
      DString::~DString((DString *)aIStack_18);
      Sexy::StringToUpper(aSStack_50,extraout_x1_01);
      std::operator+("IMAGE_UI_HEADSHOTFRAME_HEADSHOT_",(string *)aCStack_28);
      pLVar24 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aIStack_18,false);
      std::string::~string((string *)aIStack_18);
      std::string::~string((string *)aCStack_28);
      piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
      if (*piVar16 != 0) {
        DSingleton<HeadshotConfig>::getInstance();
        nop();
        piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
        DString::DString((DString *)aIStack_18,*piVar16);
        DString::operator_cast_to_string((DString *)aIStack_18);
        std::string::string((string *)aCStack_28,"frame");
        iVar10 = DIniFile::getItemInt(this_03,(string *)aSStack_38,(string *)aCStack_28,1);
        std::string::~string((string *)aCStack_28);
        nop();
        std::string::~string((string *)aSStack_38);
        DString::~DString((DString *)aIStack_18);
        DString::DString((DString *)aSStack_38,iVar10);
        ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)aSStack_38);
        ::operator+((DString *)aCStack_28,"_1");
        DString::operator_cast_to_string((DString *)aIStack_18);
        DString::~DString((DString *)aIStack_18);
        DString::~DString((DString *)aCStack_28);
        DString::~DString((DString *)aSStack_38);
        pIVar20 = (Image *)StringHelper::ToImage(asStack_48,false);
        if (pIVar20 != (Image *)0x0) {
          iVar9 = *(int *)(this + 0x50);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
          iVar4 = FUN_038c310c(0x19);
          iVar2 = *(int *)(this + 0x54);
          iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar24);
          iVar11 = FUN_038c310c(0x1e);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar20,(iVar9 - iVar3) / 2 - iVar4,iVar11 + (iVar2 - iVar5) / 2);
        }
        DString::DString((DString *)aSStack_38,iVar10);
        ::operator+("IMAGE_UI_HEADSHOTFRAME_LV",(DString *)aSStack_38);
        ::operator+((DString *)aCStack_28,"_2");
        DString::operator_cast_to_string((DString *)aIStack_18);
        DString::~DString((DString *)aIStack_18);
        DString::~DString((DString *)aCStack_28);
        DString::~DString((DString *)aSStack_38);
        pIVar20 = (Image *)StringHelper::ToImage(asStack_40,false);
        if (pIVar20 != (Image *)0x0) {
          iVar10 = *(int *)(this + 0x50);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
          iVar3 = FUN_038c310c(0x19);
          iVar9 = *(int *)(this + 0x54);
          iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar24);
          iVar5 = FUN_038c310c(0x1e);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar20,(iVar10 - iVar2) / 2 - iVar3,iVar5 + (iVar9 - iVar4) / 2);
        }
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
      }
      std::string::~string((string *)aSStack_50);
    }
    if (pLVar24 != (LotteryResultProgressBar *)0x0) {
      iVar10 = *(int *)(this + 0x50);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
      iVar9 = *(int *)(this + 0x54);
      iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar24);
      iVar4 = FUN_038c310c(0x32);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pLVar24,(iVar10 - iVar2) / 2,iVar4 + (iVar9 - iVar3) / 2);
    }
    piVar16 = (int *)FUN_038c1f28(*(undefined8 *)(this + 0x120),(long)*(int *)(this + 0x13c));
    iVar10 = *piVar16;
    pNVar18 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar18,iVar10);
    if (cVar1 == '\0') {
      pNVar18 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar18,iVar10);
      if ((cVar1 == '\0') && (0x3e6 < iVar10 - 0x61a9U)) goto LAB_038d161c;
    }
    cVar1 = NewAvatar::IsAvatarUnlocked(iVar10);
    if (cVar1 == '\0') {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      cVar1 = PlayerInfo::isUnlockHeadshotId(this_02,iVar10);
      if (cVar1 == '\0') goto LAB_038d161c;
    }
    TodStringTranslate(L"[TOY_NIGHT_GACHA_GOT_HINT]");
    uVar23 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
    iVar9 = FUN_038c310c(500);
    iVar10 = *(int *)(this + 0x50);
    FUN_05477b24(aCStack_28,aSStack_38);
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)iVar9,(float)iVar10,uVar23,param_1,aCStack_28,1,
               (Color *)aIStack_18,0);
    FUN_05476c50(aCStack_28);
    FUN_05476c50(aSStack_38);
  }
LAB_038d161c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

