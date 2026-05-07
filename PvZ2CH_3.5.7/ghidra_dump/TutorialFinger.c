// Class: TutorialFinger


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialFinger::~TutorialFinger() */

void __thiscall TutorialFinger::~TutorialFinger(TutorialFinger *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"NewTutorial_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x18))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialFinger::SetCurvingTutorialFinger(float, float, float, float, float) */

void __thiscall
TutorialFinger::SetCurvingTutorialFinger
          (TutorialFinger *this,float param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  *(float *)(this + 0x1c) = param_1;
  *(float *)(this + 0x20) = param_2;
  *(float *)(this + 0x24) = param_3;
  *(float *)(this + 0x28) = param_4;
  *(float *)(this + 0x2c) = param_5;
  return;
}


/* TutorialFinger::StopCurvingTutorialFinger() */

void __thiscall TutorialFinger::StopCurvingTutorialFinger(TutorialFinger *this)

{
  undefined4 uVar1;
  
  this[0x18] = (TutorialFinger)0x0;
  this[0x19] = (TutorialFinger)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = 0xbf800000;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)this,false);
  return;
}


/* TutorialFinger::Draw(Sexy::Graphics*) */

void __thiscall TutorialFinger::Draw(TutorialFinger *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)this != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)this,param_1);
    return;
  }
  return;
}


/* TutorialFinger::StartCurvingTutorialFinger() */

void __thiscall TutorialFinger::StartCurvingTutorialFinger(TutorialFinger *this)

{
  undefined4 uVar1;
  
  this[0x18] = (TutorialFinger)0x1;
  this[0x19] = (TutorialFinger)0x0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10) = uVar1;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialFinger::TriggerFade(bool) */

void __thiscall TutorialFinger::TriggerFade(TutorialFinger *this,bool param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  this[0x18] = (TutorialFinger)param_1;
  local_8 = ___stack_chk_guard;
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)this,param_1);
  this[0x30] = (TutorialFinger)param_1;
  if (param_1) {
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x34) = uVar1;
  }
  else {
    UIWidget::GetAtlasImage(*(UIWidget **)this);
    PopAnimRig::GetPAMColor();
    local_c = 0xff;
    (**(code **)(**(long **)this + 0x78))(*(long **)this,auStack_18);
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044cb878 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* TutorialFinger::Update() */

void __thiscall TutorialFinger::Update(TutorialFinger *this)

{
  TutorialFinger TVar1;
  StandaloneEffect *this_00;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 extraout_var [12];
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_20 [2];
  FastCurve aFStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (TutorialFinger)0x0) {
    if (*(float *)(this + 0x34) <= 0.0) {
      if (this[0x19] != (TutorialFinger)0x0) {
        fVar6 = (float)PVZ_T();
        if (fVar6 < *(float *)(this + 0x14)) goto LAB_044cb714;
        uVar2 = PVZ_T();
        this[0x19] = (TutorialFinger)0x0;
        *(undefined4 *)(this + 0x10) = uVar2;
      }
      auVar3 = PVZ_T();
      fVar6 = *(float *)(this + 0x10) + *(float *)(this + 0x2c);
      if (fVar6 <= auVar3._0_4_) {
        fVar6 = CurveLerp<float>(auVar3,fVar6,fVar6,this + 0x1c,this + 0x24,1);
        *(float *)(this + 8) = fVar6;
        auVar3._4_12_ = extraout_var;
        auVar3._0_4_ = fVar6;
        fVar6 = CurveLerp<float>(auVar3,*(float *)(this + 0x10) + *(float *)(this + 0x2c),
                                 *(float *)(this + 0x10) + *(float *)(this + 0x2c),this + 0x20,
                                 this + 0x28,1);
        this[0x19] = (TutorialFinger)0x1;
        *(float *)(this + 0xc) = fVar6;
        fVar4 = (float)PVZ_T();
        fVar6 = *(float *)(this + 0xc);
        *(float *)(this + 0x14) = fVar4 + 1.0;
      }
      else {
        auVar3 = PVZ_T();
        fVar6 = CurveLerp<float>(auVar3,fVar6,auVar3._0_4_,this + 0x1c,this + 0x24,1);
        fVar5 = *(float *)(this + 0x10);
        fVar4 = *(float *)(this + 0x2c);
        *(float *)(this + 8) = fVar6;
        auVar3 = PVZ_T();
        fVar6 = CurveLerp<float>(auVar3,fVar5 + fVar4,auVar3._0_4_,this + 0x20,this + 0x28,1);
        *(float *)(this + 0xc) = fVar6;
      }
      this_00 = *(StandaloneEffect **)this;
      Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)(this + 8),fVar6);
      StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_18,900000);
    }
    else {
      UIWidget::GetAtlasImage(*(UIWidget **)this);
      PopAnimRig::GetPAMColor();
      TVar1 = this[0x30];
      fVar6 = *(float *)(this + 0x34);
      if ((byte)TVar1 == 0) {
        uVar2 = PVZ_T();
        local_20[1] = 0xff;
        local_20[0] = (uint)(byte)TVar1;
        local_c = CurveLerp<int>(fVar6,fVar6 + 2.0,uVar2,local_20,local_20 + 1,3);
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x34) + 2.0 <= fVar6) {
          uVar2 = PVZ_T();
          local_c = 0xff;
          this[0x30] = (TutorialFinger)0x1;
          *(undefined4 *)(this + 0x34) = uVar2;
        }
      }
      else {
        uVar2 = PVZ_T();
        local_20[1] = 0;
        local_20[0] = 0xff;
        local_c = CurveLerp<int>(fVar6,fVar6 + 2.0,uVar2,local_20,local_20 + 1,3);
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x34) + 2.0 <= fVar6) {
          uVar2 = PVZ_T();
          local_c = 0;
          *(undefined4 *)(this + 0x34) = uVar2;
          this[0x30] = (TutorialFinger)0x0;
        }
      }
      (**(code **)(**(long **)this + 0x78))(*(long **)this,aFStack_18);
    }
  }
LAB_044cb714:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialFinger::TutorialFinger() */

void __thiscall TutorialFinger::TutorialFinger(TutorialFinger *this)

{
  LawnApp *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[0x19] = (TutorialFinger)0x1;
  local_8 = ___stack_chk_guard;
  this[0x18] = (TutorialFinger)0x0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  this[0x30] = (TutorialFinger)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"NewTutorial_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)this = pEVar1;
  std::string::string(asStack_10,"POPANIM_EFFECTS_TUTORIAL_FINGER");
  GetPAMByName(asStack_10);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_10);
  nop();
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions
            (*(Effect_PopAnim **)this,0.36,0.28);
  pEVar1 = *(Effect_PopAnim **)this;
  std::string::string(asStack_10,"idle2");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)this,false);
  StopCurvingTutorialFinger(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

