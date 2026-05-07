// Class: RewardPlantUI


/* RewardPlantUI::updateState_Init() */

void __thiscall RewardPlantUI::updateState_Init(RewardPlantUI *this)

{
  (**(code **)(*(long *)this + 0x310))(this,1);
  return;
}


/* RewardPlantUI::TouchBegan(Sexy::Touch const&) */

void RewardPlantUI::TouchBegan(Touch *param_1)

{
  int iVar1;
  
  iVar1 = FUN_04a7e258(*(undefined4 *)(param_1 + 0xd8));
  if (iVar1 != 2) {
    return;
  }
  LawnApp::KillRewardPlantUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardPlantUI::~RewardPlantUI() */

void __thiscall RewardPlantUI::~RewardPlantUI(RewardPlantUI *this)

{
  LawnApp *pLVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0693e020;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x18))();
    *(undefined8 *)(this + 0x188) = 0;
  }
  if (*(long **)(this + 400) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x198);
  }
  else {
    (**(code **)(**(long **)(this + 400) + 0x18))();
    *(undefined8 *)(this + 400) = 0;
    plVar2 = *(long **)(this + 0x198);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x198) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  RewardUI::~RewardUI((RewardUI *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RewardPlantUI::~RewardPlantUI() */

void __thiscall RewardPlantUI::~RewardPlantUI(RewardPlantUI *this)

{
  ~RewardPlantUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardPlantUI::Draw(Sexy::Graphics*) */

void __thiscall RewardPlantUI::Draw(RewardPlantUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PlantType *this_00;
  long lVar6;
  SalesProgressBar *this_01;
  float fVar7;
  float fVar8;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.8);
  nop();
  if (*(StandaloneEffect **)(this + 400) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 400),param_1);
  }
  if (*(StandaloneEffect **)(this + 0x198) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x198),param_1);
  }
  if (*(LotteryResultProgressBar **)(this + 0x180) == (LotteryResultProgressBar *)0x0) {
    if (*(long *)(this + 0x188) != 0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      nop();
      lVar6 = PlantType::GetProps(this_00);
      PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x188),*(float *)(this + 0x1b0));
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      fVar8 = *(float *)(this + 0x1b0);
      fVar7 = (float)FUN_04a7e3f8(fVar8 * *(float *)(lVar6 + 0x9c));
      fVar8 = (float)FUN_04a7e3f8(fVar8 * *(float *)(lVar6 + 0xa0));
      FUN_04a7e200(-fVar7,-fVar8,auStack_28,auStack_1c);
      iVar4 = FUN_04a7e408(0x32);
      FUN_04a7e200((float)(*(int *)(this + 0x50) / 2),(float)(iVar4 + *(int *)(this + 0x54) / 2),
                   auStack_28,auStack_1c);
      iVar4 = FUN_04a7e408(0x50);
      iVar5 = FUN_04a7e408(0x32);
      FUN_04a7e200((float)-iVar4,(float)-iVar5,auStack_28,auStack_1c);
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0x188),param_1,aSStack_30);
    }
  }
  else {
    iVar4 = *(int *)(this + 0x50);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x180));
    this_01 = *(SalesProgressBar **)(this + 0x180);
    iVar5 = *(int *)(this + 0x54);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar3 = FUN_04a7e408(0x32);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_01,(iVar4 - iVar1) / 2,iVar3 + (iVar5 - iVar2) / 2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RewardPlantUI::updateState_End() */

void __thiscall RewardPlantUI::updateState_End(RewardPlantUI *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  if (*(StandaloneEffect **)(this + 400) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 400));
  }
  if (*(StandaloneEffect **)(this + 0x198) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x198));
  }
  this_00 = *(PopAnimRig **)(this + 0x188);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04a7ea3c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* RewardPlantUI::updateState_Update() */

void __thiscall RewardPlantUI::updateState_Update(RewardPlantUI *this)

{
  PopAnimRig *this_00;
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  string asStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 400) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 400));
  }
  if (*(StandaloneEffect **)(this + 0x198) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x198));
  }
  this_00 = *(PopAnimRig **)(this + 0x188);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
  }
  fVar4 = *(float *)(this + 0x1ac);
  fVar3 = (float)PVZ_T();
  if (fVar4 < fVar3) {
    if (this[0x1b4] == (RewardPlantUI)0x0) {
      if (*(long *)(this + 0x188) == 0) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x178));
        uVar1 = CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)local_10,1);
        *(undefined8 *)(this + 0x188) = uVar1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        (**(code **)(**(long **)(this + 0x188) + 0x1a0))(*(long **)(this + 0x188),0);
      }
    }
    else if (*(long *)(this + 0x180) == 0) {
      auVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      Sexy::StringToUpper((Sexy *)(auVar5._0_8_ + 8),auVar5._8_8_);
      std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_18);
      uVar1 = StringHelper::ToImage((string *)local_10,true);
      *(undefined8 *)(this + 0x180) = uVar1;
      std::string::~string((string *)local_10);
      std::string::~string(asStack_18);
    }
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x198),true);
    uVar6 = *(undefined4 *)(this + 0x1a8);
    auVar5 = PVZ_T();
    local_10[0] = 0x3f800000;
    fVar3 = CurveLerp<float>(auVar5,uVar6,auVar5._0_4_,local_10,&DAT_05754f60,3);
    *(float *)(this + 0x1b0) = fVar3;
  }
  fVar4 = *(float *)(this + 0x1a8);
  fVar3 = (float)PVZ_T();
  if (fVar4 < fVar3) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x1a8) = uVar6;
    *(undefined4 *)(this + 0x1ac) = uVar6;
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0x1a0) = uVar6;
    fVar3 = (float)PVZ_T();
    pcVar2 = *(code **)(*(long *)this + 0x310);
    *(float *)(this + 0x1a4) = fVar3 + 0.3;
    (*pcVar2)(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardPlantUI::onEnterState_Init(RewardAniState) */

void RewardPlantUI::onEnterState_Init(long param_1)

{
  bool bVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(param_1 + 400) = pEVar3;
  std::string::string(asStack_18,"POPANIM_EFFECTS_GACHA_PLANT");
  GetPAMByName(asStack_18);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pSVar5 = *(StandaloneEffect **)(param_1 + 400);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_10,(float)(*(int *)(param_1 + 0x50) / 2),
             (float)(*(int *)(param_1 + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar5,(SexyVector2 *)aRStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_1 + 400),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 400),true);
  pEVar3 = *(Effect_PopAnim **)(param_1 + 400);
  std::string::string((string *)aRStack_10,"anim1");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(param_1 + 0x198) = pEVar3;
  std::string::string(asStack_18,"POPANIM_EFFECTS_GACHA_BACK_LIGHT");
  GetPAMByName(asStack_18);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pSVar5 = *(StandaloneEffect **)(param_1 + 0x198);
  iVar2 = FUN_04a7e408(0x32);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aRStack_10,(float)(*(int *)(param_1 + 0x50) / 2),
             (float)(iVar2 + *(int *)(param_1 + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(pSVar5,(SexyVector2 *)aRStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(param_1 + 0x198),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(param_1 + 0x198),false);
  (**(code **)(**(long **)(param_1 + 0x198) + 0x80))(0x3fc00000,*(long **)(param_1 + 0x198));
  pEVar3 = *(Effect_PopAnim **)(param_1 + 0x198);
  std::string::string((string *)aRStack_10,"anim");
  uVar6 = PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar3,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a0) = uVar6;
  *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  fVar7 = (float)PVZ_T();
  *(float *)(param_1 + 0x1a8) = fVar7 + 3.2;
  fVar7 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x1ac) = fVar7 + 1.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardPlantUI::RewardPlantUI(Sexy::RtWeakPtr<PlantType const>, bool) */

void __thiscall
RewardPlantUI::RewardPlantUI(RewardPlantUI *this,RtWeakPtrBase *param_2,RewardPlantUI param_3)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RewardUI::RewardUI((RewardUI *)this);
  *(undefined ***)this = &PTR_GetClass_0693e020;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x178),param_2);
  this[0x1b4] = param_3;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  RewardUI::setState((RewardUI *)this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

