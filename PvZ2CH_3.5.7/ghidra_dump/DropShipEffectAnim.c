// Class: DropShipEffectAnim


/* DropShipEffectAnim::~DropShipEffectAnim() */

void __thiscall DropShipEffectAnim::~DropShipEffectAnim(DropShipEffectAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4440;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* DropShipEffectAnim::~DropShipEffectAnim() */

void __thiscall DropShipEffectAnim::~DropShipEffectAnim(DropShipEffectAnim *this)

{
  ~DropShipEffectAnim(this);
  AK::FreeHook(this);
  return;
}


/* DropShipEffectAnim::DropShipEffectAnim() */

void __thiscall DropShipEffectAnim::DropShipEffectAnim(DropShipEffectAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067e4440;
  RvsChecker::ServiceRequestFailed((StructuredData *)(this + 0x110),&PTR_GetClass_067e4440);
  *(undefined4 *)(this + 300) = 0;
  return;
}


/* DropShipEffectAnim::StaticNew() */

DropShipEffectAnim * DropShipEffectAnim::StaticNew(void)

{
  DropShipEffectAnim *this;
  
  this = ::operator_new(0x130);
  DropShipEffectAnim(this);
  return this;
}


/* DropShipEffectAnim::SetDropInfo(DropImpInfo const&) */

void __thiscall DropShipEffectAnim::SetDropInfo(DropShipEffectAnim *this,DropImpInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x110) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x118) = uVar1;
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipEffectAnim::StaticClassInit() */

void DropShipEffectAnim::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"IntRange");
    (*pcVar3)(plVar2,asStack_10,FUN_04108208,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DropImpInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04109048,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DropShipEffectAnim");
    (*pcVar3)(plVar2,asStack_10,FUN_041092f0,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropShipEffectAnim::StaticGetClass() */

long * DropShipEffectAnim::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DropShipEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropShipEffectAnim::GetClass() const */

long * DropShipEffectAnim::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DropShipEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipEffectAnim::DropImp() */

void __thiscall DropShipEffectAnim::DropImp(DropShipEffectAnim *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  DropingImpEffectAnim *this_00;
  ResourceInfo *pRVar5;
  undefined4 *puVar6;
  string *psVar7;
  float fVar8;
  float fVar9;
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar7 = *(string **)(gLawnApp + 0x848);
  std::string::string(asStack_20,"POPANIM_EFFECTS_DROPSHIP_IMPFLYING");
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::PopAnim>(psVar7,SUB81(asStack_20,0));
  std::string::~string(asStack_20);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    this_00 = Board::AddEffect<DropingImpEffectAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
    puVar6 = (undefined4 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    fVar8 = (float)FUN_04108580(*puVar6);
    fVar9 = (float)FUN_04108580(puVar6[1]);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,fVar8 + 80.0,fVar9 + 65.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_20,-1);
    iVar2 = IntRange::GetRandomValue((IntRange *)(this + 0x124));
    iVar3 = IntRange::GetRandomValue((IntRange *)(this + 0x11c));
    Sexy::Point::Point((Point *)asStack_20,iVar2,iVar3);
    DropingImpEffectAnim::SetDate(this_00,asStack_20,*(undefined4 *)(this + 0x118));
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    uVar4 = Board::MakeRenderOrder(0x65130,iVar2 + 1,0);
    FUN_041081ec(this_00 + 0x1c,uVar4);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    std::string::string(asStack_28,"jump");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"skee");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"skee02");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this_00,(AnimationSequence *)asStack_20)
    ;
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropShipEffectAnim::OnAnimCommand(std::string const&, std::string const&) */

void DropShipEffectAnim::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) {
    return;
  }
  DropImp((DropShipEffectAnim *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropShipEffectAnim::onAnimStopped(std::string const&) */

void __thiscall DropShipEffectAnim::onAnimStopped(DropShipEffectAnim *this,string *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_1,"jump");
  if (bVar2) {
    iVar1 = *(int *)(this + 300);
    *(int *)(this + 300) = iVar1 + 1;
    if (*(int *)(this + 0x114) < iVar1 + 1) {
      std::string::string(asStack_10,"close");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_10,"idle");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x10c) = fVar4 + 2.0;
    }
  }
  else {
    bVar3 = std::operator==(param_1,"idle");
    if (bVar3) {
      fVar4 = (float)PVZ_T();
      if (fVar4 <= *(float *)(this + 0x10c)) {
        std::string::string(asStack_10,"idle");
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        std::string::string(asStack_10,"jump");
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,bVar2);
        std::string::~string(asStack_10);
        nop();
      }
    }
    else {
      bVar2 = std::operator==(param_1,"close");
      if (bVar2) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
  }
  Effect_PopAnim::onAnimStopped((string *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

