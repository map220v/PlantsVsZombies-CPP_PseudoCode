// Class: ArtifactGravity


/* ArtifactGravity::GetMainBuffAttack() */

undefined4 __thiscall ArtifactGravity::GetMainBuffAttack(ArtifactGravity *this)

{
  return *(undefined4 *)(this + 0x44);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::StaticClassInit() */

void ArtifactGravity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGravity");
    (*pcVar2)(plVar1,asStack_10,FUN_0376870c,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravity::StaticGetClass() */

long * ArtifactGravity::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGravity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGravity::GetClass() const */

long * ArtifactGravity::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactGravity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGravity::DelayToCooldown() */

void __thiscall ArtifactGravity::DelayToCooldown(ArtifactGravity *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  this[0x3c] = (ArtifactGravity)0x1;
  *(float *)(this + 0x38) = fVar1 + *(float *)(this + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::ClearEffect() */

void __thiscall ArtifactGravity::ClearEffect(ArtifactGravity *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  Effect_PopAnim *pEVar6;
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0xa0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0xa0),false);
    pSVar5 = *(StandaloneEffect **)(this + 0xa0);
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate(aRStack_50);
    StandaloneEffect::SetCompletionCallback(pSVar5,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pEVar6 = *(Effect_PopAnim **)(this + 0xa0);
    std::string::string(asStack_60,"guansu_end");
    Effect_PopAnim::PlaySingleAnimation(pEVar6,asStack_60,0);
    std::string::~string(asStack_60);
    nop();
    *(undefined8 *)(this + 0xa0) = 0;
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 0x48))();
    *(undefined8 *)(this + 0xa0) = 0;
  }
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pEVar6 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_68,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
    GetPAMByName(asStack_68);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_60);
    Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    std::string::~string(asStack_68);
    nop();
    iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 100));
    iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x68));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)iVar2,(float)iVar3,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar6,(SexyVector3 *)asStack_60,-1);
    Effect_PopAnim::SetCentered(pEVar6,true);
    std::string::string(asStack_60,"xiaoshi");
    Effect_PopAnim::PlaySingleAnimation(pEVar6,(RtWeakPtr *)asStack_60,0);
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::ClearSkill1Effect() */

void __thiscall ArtifactGravity::ClearSkill1Effect(ArtifactGravity *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *pEVar5;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),0);
  if ((StandaloneEffect *)*puVar1 != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)*puVar1,false);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),0);
    pSVar4 = (StandaloneEffect *)*puVar1;
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate(aRStack_50);
    StandaloneEffect::SetCompletionCallback(pSVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),0);
    pEVar5 = (Effect_PopAnim *)*puVar1;
    std::string::string((string *)&local_58,"guansu_end_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_58,0);
    std::string::~string((string *)&local_58);
    nop();
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),0);
    *puVar1 = 0;
  }
  puVar1 = (undefined8 *)FUN_03724780(*(undefined8 *)(this + 0x70),0);
  Sexy::Point::Point((Point *)&local_58,-1,-1);
  uVar2 = *(undefined8 *)(this + 0x88);
  *puVar1 = local_58;
  puVar3 = (undefined4 *)FUN_03724788(uVar2,0);
  *puVar3 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::ClearSkill2Effect() */

void __thiscall ArtifactGravity::ClearSkill2Effect(ArtifactGravity *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *pEVar5;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),1);
  if ((StandaloneEffect *)*puVar1 != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)*puVar1,false);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),1);
    pSVar4 = (StandaloneEffect *)*puVar1;
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate(aRStack_50);
    StandaloneEffect::SetCompletionCallback(pSVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),1);
    pEVar5 = (Effect_PopAnim *)*puVar1;
    std::string::string((string *)&local_58,"guansu_end_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_58,0);
    std::string::~string((string *)&local_58);
    nop();
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),1);
    *puVar1 = 0;
  }
  puVar1 = (undefined8 *)FUN_03724780(*(undefined8 *)(this + 0x70),1);
  Sexy::Point::Point((Point *)&local_58,-1,-1);
  uVar2 = *(undefined8 *)(this + 0x88);
  *puVar1 = local_58;
  puVar3 = (undefined4 *)FUN_03724788(uVar2,1);
  *puVar3 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::ClearSkill3Effect() */

void __thiscall ArtifactGravity::ClearSkill3Effect(ArtifactGravity *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *pEVar5;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),2);
  if ((StandaloneEffect *)*puVar1 != (StandaloneEffect *)0x0) {
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)*puVar1,false);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),2);
    pSVar4 = (StandaloneEffect *)*puVar1;
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate(aRStack_50);
    StandaloneEffect::SetCompletionCallback(pSVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),2);
    pEVar5 = (Effect_PopAnim *)*puVar1;
    std::string::string((string *)&local_58,"guansu_end_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar5,(string *)&local_58,0);
    std::string::~string((string *)&local_58);
    nop();
    puVar1 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0xa8),2);
    *puVar1 = 0;
  }
  puVar1 = (undefined8 *)FUN_03724780(*(undefined8 *)(this + 0x70),2);
  Sexy::Point::Point((Point *)&local_58,-1,-1);
  uVar2 = *(undefined8 *)(this + 0x88);
  *puVar1 = local_58;
  puVar3 = (undefined4 *)FUN_03724788(uVar2,2);
  *puVar3 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onNotifyArtifactGravityCursor(int, int) */

void ArtifactGravity::onNotifyArtifactGravityCursor(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined8 local_60 [2];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_2 < 2) {
    iVar1 = 2;
  }
  else {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    if (param_2 == iVar1 + -1) {
      iVar1 = iVar1 + -3;
    }
    else {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar1 = iVar2 + -3;
      if (param_2 != iVar2 + -2) {
        iVar1 = param_2;
      }
    }
  }
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Point::Point((Point *)local_60,iVar1,iVar2 / 2);
  *(undefined8 *)((ulong)(uint)param_1 + 100) = local_60[0];
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
  GetPAMByName(asStack_68);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_60);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_60);
  std::string::~string(asStack_68);
  nop();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2 / 2);
  EATextSquish::Vec3::Vec3((Vec3 *)local_60,(float)iVar1,(float)iVar2,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_60,-1);
  Effect_PopAnim::SetCentered(this,true);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)local_60,"onEffectComplete");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             (Point *)local_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)local_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::string((string *)local_60,"guansu_start");
  Effect_PopAnim::PlaySingleAnimation(this,(Point *)local_60,0);
  std::string::~string((string *)local_60);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onEffectComplete(StandaloneEffect*) */

void ArtifactGravity::onEffectComplete(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  TimeChallengeEndLevelUI *this;
  Effect_PopAnim *pEVar4;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0xa0) == 0) {
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_70,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
    GetPAMByName(asStack_70);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string(asStack_70);
    nop();
    iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 100));
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(param_1 + 0x68));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)iVar1,(float)iVar2,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)asStack_68,-1);
    Effect_PopAnim::SetCentered(pEVar4,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar4,true);
    Effect_PopAnim::GetPopAnimRigPtr();
    this = (TimeChallengeEndLevelUI *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onShockEffectComplete);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_50,(RtWeakPtr *)asStack_68);
    TimeChallengeEndLevelUI::SetContinueCallBack(this,aDStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onEffectComplete");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,asStack_70,
               (RtWeakPtr *)asStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar4,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    *(Effect_PopAnim **)(param_1 + 0xa0) = pEVar4;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 200);
  }
  if (iVar1 < *(int *)(param_1 + 0xcc)) {
    pEVar4 = *(Effect_PopAnim **)(param_1 + 0xa0);
    *(int *)(param_1 + 200) = iVar1 + 1;
    std::string::string(asStack_68,"guansu_roop");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
  }
  else {
    ClearEffect((ArtifactGravity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onSkillEffectComplete1(StandaloneEffect*) */

void ArtifactGravity::onSkillEffectComplete1(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  TimeChallengeEndLevelUI *this;
  Effect_PopAnim *pEVar9;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),0);
  if (*plVar3 == 0) {
    pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_70,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
    GetPAMByName(asStack_70);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string(asStack_70);
    nop();
    piVar4 = (int *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),0);
    iVar1 = BoardTransforms::GridToBoardSpaceX(*piVar4);
    lVar8 = FUN_03724780(*(undefined8 *)(param_1 + 0x70),0);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar8 + 4));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)iVar1,(float)iVar2 - 6.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar9,(SexyVector3 *)asStack_68,-1);
    Effect_PopAnim::SetCentered(pEVar9,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar9,true);
    Effect_PopAnim::GetPopAnimRigPtr();
    this = (TimeChallengeEndLevelUI *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onShockEffectComplete);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_50,(RtWeakPtr *)asStack_68);
    TimeChallengeEndLevelUI::SetContinueCallBack(this,aDStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onSkillEffectComplete1");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,asStack_70,
               (RtWeakPtr *)asStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar9,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),0);
    *puVar6 = pEVar9;
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),0);
    iVar1 = 0;
    *piVar4 = 0;
  }
  else {
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),0);
    iVar1 = *piVar4;
  }
  if (iVar1 < *(int *)(param_1 + 0xcc)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *piVar4 = iVar1 + 1;
    puVar6 = (undefined8 *)FUN_03724854(uVar5,0);
    pEVar9 = (Effect_PopAnim *)*puVar6;
    std::string::string(asStack_68,"guansu_roop_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar9,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
  }
  else {
    ClearSkill1Effect((ArtifactGravity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onSkillEffectComplete2(StandaloneEffect*) */

void ArtifactGravity::onSkillEffectComplete2(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  TimeChallengeEndLevelUI *this;
  Effect_PopAnim *pEVar9;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),1);
  if (*plVar3 == 0) {
    pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_70,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
    GetPAMByName(asStack_70);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string(asStack_70);
    nop();
    piVar4 = (int *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),1);
    iVar1 = BoardTransforms::GridToBoardSpaceX(*piVar4);
    lVar8 = FUN_03724780(*(undefined8 *)(param_1 + 0x70),1);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar8 + 4));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)iVar1,(float)iVar2 - 6.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar9,(SexyVector3 *)asStack_68,-1);
    Effect_PopAnim::SetCentered(pEVar9,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar9,true);
    Effect_PopAnim::GetPopAnimRigPtr();
    this = (TimeChallengeEndLevelUI *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onShockEffectComplete2);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_50,(RtWeakPtr *)asStack_68);
    TimeChallengeEndLevelUI::SetContinueCallBack(this,aDStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onSkillEffectComplete2");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,asStack_70,
               (RtWeakPtr *)asStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar9,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),1);
    *puVar6 = pEVar9;
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),1);
    iVar1 = 0;
    *piVar4 = 0;
  }
  else {
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),1);
    iVar1 = *piVar4;
  }
  if (iVar1 < *(int *)(param_1 + 0xcc)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *piVar4 = iVar1 + 1;
    puVar6 = (undefined8 *)FUN_03724854(uVar5,1);
    pEVar9 = (Effect_PopAnim *)*puVar6;
    std::string::string(asStack_68,"guansu_roop_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar9,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
  }
  else {
    ClearSkill2Effect((ArtifactGravity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onSkillEffectComplete3(StandaloneEffect*) */

void ArtifactGravity::onSkillEffectComplete3(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ResourceInfo *pRVar7;
  long lVar8;
  TimeChallengeEndLevelUI *this;
  Effect_PopAnim *pEVar9;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),2);
  if (*plVar3 == 0) {
    pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_70,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
    GetPAMByName(asStack_70);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string(asStack_70);
    nop();
    piVar4 = (int *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),2);
    iVar1 = BoardTransforms::GridToBoardSpaceX(*piVar4);
    lVar8 = FUN_03724780(*(undefined8 *)(param_1 + 0x70),2);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar8 + 4));
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_68,(float)iVar1,(float)iVar2 - 6.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar9,(SexyVector3 *)asStack_68,-1);
    Effect_PopAnim::SetCentered(pEVar9,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar9,true);
    Effect_PopAnim::GetPopAnimRigPtr();
    this = (TimeChallengeEndLevelUI *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onShockEffectComplete3);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ArtifactGravity,void(ArtifactGravity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_50,(RtWeakPtr *)asStack_68);
    TimeChallengeEndLevelUI::SetContinueCallBack(this,aDStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onSkillEffectComplete3");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,asStack_70,
               (RtWeakPtr *)asStack_68);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar9,aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(param_1 + 0xa8),2);
    *puVar6 = pEVar9;
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),2);
    iVar1 = 0;
    *piVar4 = 0;
  }
  else {
    piVar4 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),2);
    iVar1 = *piVar4;
  }
  if (iVar1 < *(int *)(param_1 + 0xcc)) {
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    *piVar4 = iVar1 + 1;
    puVar6 = (undefined8 *)FUN_03724854(uVar5,2);
    pEVar9 = (Effect_PopAnim *)*puVar6;
    std::string::string(asStack_68,"guansu_roop_xiao");
    Effect_PopAnim::PlaySingleAnimation(pEVar9,asStack_68,0);
    std::string::~string(asStack_68);
    nop();
  }
  else {
    ClearSkill3Effect((ArtifactGravity *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravity::~ArtifactGravity() */

void __thiscall ArtifactGravity::~ArtifactGravity(ArtifactGravity *this)

{
  *(undefined ***)this = &PTR_GetClass_06695ac0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x88));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactGravity::~ArtifactGravity() */

void __thiscall ArtifactGravity::~ArtifactGravity(ArtifactGravity *this)

{
  ~ArtifactGravity(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::onShockEffectComplete(std::string const&, float, std::string const&, std::string
   const&) */

void ArtifactGravity::onShockEffectComplete
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ArtifactGravitySubSystem *pAVar5;
  char *pcVar6;
  int *piVar7;
  Effect_PopAnim *this;
  ResourceInfo *pRVar8;
  Point *pPVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"shock");
  if (bVar1) {
    cVar2 = Artifact::IsFieldActivated((Artifact *)param_1,3);
    if (cVar2 == '\0') {
      iVar3 = *(int *)(param_1 + 200);
    }
    else {
      this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
      GetPAMByName(asStack_20);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar8,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
      nop();
      iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 100));
      iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(param_1 + 0x68));
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)iVar3,(float)iVar4,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
      Effect_PopAnim::SetCentered(this,true);
      FUN_03723aa0(this + 0x1c,0x493e2);
      if (*(int *)(param_1 + 200) == 1) {
        std::string::string(asStack_20,"dilei_xiao");
        std::string::string((string *)aRStack_18,"");
        PVZ_EOT();
        Effect_PopAnim::PlaySingleAndLoopingAnimation(this,asStack_20,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        *(Effect_PopAnim **)(param_1 + 0xc0) = this;
      }
      else if (*(int *)(param_1 + 200) == 2) {
        (**(code **)(**(long **)(param_1 + 0xc0) + 0x48))(*(long **)(param_1 + 0xc0));
        std::string::string(asStack_20,"dilei_da");
        std::string::string((string *)aRStack_18,"");
        PVZ_EOT();
        Effect_PopAnim::PlaySingleAndLoopingAnimation(this,asStack_20,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
        std::string::~string(asStack_20);
        nop();
        *(Effect_PopAnim **)(param_1 + 0xc0) = this;
        pAVar5 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
        FUN_03723da8(pAVar5 + 0xb8);
      }
      else {
        std::string::string((string *)aRStack_18,"tu");
        Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
      }
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"lay_Artifact_Gravity_Beam");
      iVar3 = *(int *)(param_1 + 200);
    }
    if (iVar3 == 1) {
      pAVar5 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactGravitySubSystem::SetBasePoint
                (pAVar5,(Point *)(param_1 + 100),*(float *)(param_1 + 0x40));
    }
    pAVar5 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ArtifactGravitySubSystem::CrushZombies(pAVar5,0);
  }
  else {
    bVar1 = std::operator==(param_4,"shock1");
    if (bVar1) {
      piVar7 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),0);
      if (*piVar7 == 1) {
        pAVar5 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
        pPVar9 = (Point *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),0);
        ArtifactGravitySubSystem::SetSkillPoint1(pAVar5,pPVar9,*(float *)(param_1 + 0x40));
      }
      pAVar5 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactGravitySubSystem::CrushZombies(pAVar5,1);
      bVar1 = std::operator==(param_4,"shock1");
      goto joined_r0x0376fdb0;
    }
  }
  bVar1 = std::operator==(param_4,"shock1");
joined_r0x0376fdb0:
  if ((bVar1) || (bVar1 = std::operator==(param_4,"shock"), bVar1)) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Artifact_Gravity_Tear");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravity::onShockEffectComplete2(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactGravity::onShockEffectComplete2
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int *piVar2;
  ArtifactGravitySubSystem *pAVar3;
  char *pcVar4;
  Point *pPVar5;
  
  bVar1 = std::operator==(param_4,"shock1");
  if (bVar1) {
    piVar2 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),1);
    if (*piVar2 == 1) {
      pAVar3 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
      pPVar5 = (Point *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),1);
      ArtifactGravitySubSystem::SetSkillPoint2(pAVar3,pPVar5,*(float *)(param_1 + 0x40));
    }
    pAVar3 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ArtifactGravitySubSystem::CrushZombies(pAVar3,2);
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Artifact_Gravity_Tear");
    return;
  }
  return;
}


/* ArtifactGravity::onShockEffectComplete3(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactGravity::onShockEffectComplete3
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int *piVar2;
  ArtifactGravitySubSystem *pAVar3;
  char *pcVar4;
  Point *pPVar5;
  
  bVar1 = std::operator==(param_4,"shock1");
  if (bVar1) {
    piVar2 = (int *)FUN_03724788(*(undefined8 *)(param_1 + 0x88),2);
    if (*piVar2 == 1) {
      pAVar3 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
      pPVar5 = (Point *)FUN_03724780(*(undefined8 *)(param_1 + 0x70),2);
      ArtifactGravitySubSystem::SetSkillPoint3(pAVar3,pPVar5,*(float *)(param_1 + 0x40));
    }
    pAVar3 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ArtifactGravitySubSystem::CrushZombies(pAVar3,3);
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Artifact_Gravity_Tear");
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::doPassive2() */

void __thiscall ArtifactGravity::doPassive2(ArtifactGravity *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *__s;
  long lVar13;
  undefined8 local_c8;
  undefined8 local_c0;
  Point aPStack_b8 [8];
  undefined8 local_b0;
  Insets aIStack_a8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [3];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_a8,iVar2 + -5,0,5,5);
  EntityFinder::GetEntitiesInGridSquares(avStack_98,2,aIStack_a8);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_98);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_98);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
    BoardEntity::CalcGridPosition();
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_80);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_80);
    local_b0 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar6,uVar7,aPStack_b8);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_80);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
    if (bVar1) {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80,aPStack_b8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
  }
  iVar2 = FUN_03724818(local_80,local_78);
  iVar2 = 3 - iVar2;
  do {
    if (iVar2 < 1) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_80);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_80);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                (uVar6,uVar7);
      lVar13 = 0;
      do {
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string((string *)&local_b0,"POPANIM_EFFECTS_ARTIFACT_GRAVITY_EFFECT");
        GetPAMByName((string *)&local_b0);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
        Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar8,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        std::string::~string((string *)&local_b0);
        nop();
        piVar9 = (int *)FUN_03724780(local_80,lVar13);
        iVar2 = BoardTransforms::GridToBoardSpaceX(*piVar9);
        lVar10 = FUN_03724780(local_80,lVar13);
        iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar10 + 4));
        EATextSquish::Vec3::Vec3((Vec3 *)local_68,(float)iVar2,(float)iVar4 - 6.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_00,(SexyVector3 *)local_68,-1);
        Effect_PopAnim::SetCentered(this_00,true);
        if (lVar13 == 0) {
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_b8);
          __s = "onSkillEffectComplete1";
        }
        else if ((int)lVar13 == 1) {
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_b8);
          __s = "onSkillEffectComplete2";
        }
        else {
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_b8);
          __s = "onSkillEffectComplete3";
        }
        std::string::string((string *)local_68,__s);
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                   (__normal_iterator *)&local_b0,(RtWeakPtr *)local_68);
        StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)local_68);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_b8)
        ;
        Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_68);
        AnimationSequence::AddDelay((AnimationSequence *)local_68,(float)(int)lVar13 * 0.5 + 0.1);
        std::string::string((string *)&local_b0,"guanshu_start_xiao");
        AnimationSequence::AddSingleAnimation
                  ((RtWeakPtr *)local_68,(__normal_iterator *)&local_b0,0);
        std::string::~string((string *)&local_b0);
        nop();
        Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)local_68);
        puVar11 = (undefined8 *)FUN_03724780(*(undefined8 *)(this + 0x70),lVar13);
        lVar10 = lVar13 + 1;
        puVar12 = (undefined8 *)FUN_03724780(local_80,lVar13);
        *puVar11 = *puVar12;
        AnimationSequence::~AnimationSequence((AnimationSequence *)local_68);
        lVar13 = lVar10;
      } while (lVar10 != 3);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    do {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar4 = iVar4 + -1;
    } while (iVar4 < iVar3 + -5);
    do {
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
      iVar5 = iVar5 + -1;
      if (-1 < iVar5) {
        do {
          while( true ) {
            Sexy::Point::Point(aPStack_b8,iVar4,iVar5);
            uVar6 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_80);
            uVar7 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_80);
            local_b0 = std::
                       find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                                 (uVar6,uVar7,aPStack_b8);
            local_68[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)&local_80);
            bVar1 = __gnu_cxx::operator==
                              ((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
            if (!bVar1) break;
            iVar5 = iVar5 + -1;
            iVar2 = iVar2 + -1;
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80,aPStack_b8);
            if (iVar5 == -1) goto LAB_037719f0;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
LAB_037719f0:
      iVar4 = iVar4 + -1;
    } while (iVar3 + -5 <= iVar4);
  } while( true );
}


/* ArtifactGravity::AutoClick(int) */

void __thiscall ArtifactGravity::AutoClick(ArtifactGravity *this,int param_1)

{
  if (this[0x3f] == (ArtifactGravity)0x0) {
    if (param_1 == 2) {
      doPassive2(this);
    }
    else {
      onNotifyArtifactGravityCursor((int)this,4);
    }
    this[0x3f] = (ArtifactGravity)0x1;
  }
  return;
}


/* ArtifactGravity::Update() */

void __thiscall ArtifactGravity::Update(ArtifactGravity *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
    if ((cVar1 != '\0') && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x4c) < fVar2)) {
      doPassive2(this);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x4c) = fVar2 + *(float *)(this + 0x50);
    }
    if ((this[0x3c] != (ArtifactGravity)0x0) &&
       (fVar2 = (float)Artifact::GetTriggerLeftTime((Artifact *)this), fVar2 <= 0.0)) {
      this[0x3c] = (ArtifactGravity)0x0;
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::Activate() */

void __thiscall ArtifactGravity::Activate(ArtifactGravity *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  ArtifactGravitySubSystem *this_00;
  long extraout_x0;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    *(float *)(this + 0x2c) = fVar3 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  }
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x30) = fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(float *)(this + 0x40) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(float *)(this + 0x44) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  *(undefined4 *)(this + 0x50) = uVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    fVar3 = (float)PVZ_EOT();
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar3 = fVar3 + *(float *)(this + 0x50);
  }
  *(float *)(this + 0x4c) = fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  *(int *)(this + 0x5c) = (int)fVar3;
  *(int *)(this + 0xcc) = (int)*(float *)(this + 0x40);
  this_00 = Board::GetGameSubSystem<ArtifactGravitySubSystem>(*(Board **)(gLawnApp + 0x9f0));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  ArtifactGravitySubSystem::InitGravity
            (this_00,(PlantRestrictionSet *)(extraout_x0 + 0x150),*(float *)(this + 0x44));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGravity::ArtifactGravity() */

void __thiscall ArtifactGravity::ArtifactGravity(ArtifactGravity *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06695ac0;
  Sexy::Point::Point((Point *)(this + 100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyArtifactGravityCursor);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArtifactGravity,void(ArtifactGravity::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyArtifactGravityCursor,&local_50);
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  Sexy::Point::Point((Point *)&local_28,-1,-1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::resize
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x70),3,(Point *)&local_28);
  local_28 = (ulong)local_28._4_4_ << 0x20;
  std::vector<int,std::allocator<int>>::resize
            ((vector<int,std::allocator<int>> *)(this + 0x88),3,(int *)&local_28);
  local_28 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::resize
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xa8),3,
             (Effect_PopAnim **)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGravity::StaticNew() */

ArtifactGravity * ArtifactGravity::StaticNew(void)

{
  ArtifactGravity *this;
  
  this = ::operator_new(0xd0);
  ArtifactGravity(this);
  return this;
}

