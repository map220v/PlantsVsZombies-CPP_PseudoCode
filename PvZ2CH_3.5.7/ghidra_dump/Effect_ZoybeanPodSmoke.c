// Class: Effect_ZoybeanPodSmoke


/* Effect_ZoybeanPodSmoke::~Effect_ZoybeanPodSmoke() */

void __thiscall Effect_ZoybeanPodSmoke::~Effect_ZoybeanPodSmoke(Effect_ZoybeanPodSmoke *this)

{
  *(undefined ***)this = &PTR_GetClass_066363f0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_ZoybeanPodSmoke::~Effect_ZoybeanPodSmoke() */

void __thiscall Effect_ZoybeanPodSmoke::~Effect_ZoybeanPodSmoke(Effect_ZoybeanPodSmoke *this)

{
  ~Effect_ZoybeanPodSmoke(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ZoybeanPodSmoke::Effect_ZoybeanPodSmoke() */

void __thiscall Effect_ZoybeanPodSmoke::Effect_ZoybeanPodSmoke(Effect_ZoybeanPodSmoke *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 6000;
  *(undefined ***)this = &PTR_GetClass_066363f0;
  return;
}


/* Effect_ZoybeanPodSmoke::StaticNew() */

Effect_ZoybeanPodSmoke * Effect_ZoybeanPodSmoke::StaticNew(void)

{
  Effect_ZoybeanPodSmoke *this;
  
  this = ::operator_new(0x110);
  Effect_ZoybeanPodSmoke(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZoybeanPodSmoke::StaticClassInit() */

void Effect_ZoybeanPodSmoke::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ZoybeanPodSmoke");
    (*pcVar2)(plVar1,asStack_10,FUN_0345ba00,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZoybeanPodSmoke::StaticGetClass() */

long * Effect_ZoybeanPodSmoke::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZoybeanPodSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZoybeanPodSmoke::GetClass() const */

long * Effect_ZoybeanPodSmoke::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZoybeanPodSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZoybeanPodSmoke::playSmokeEffect(float, float, Sexy::RtWeakPtr<Plant>, bool) */

void __thiscall
Effect_ZoybeanPodSmoke::playSmokeEffect
          (float param_1,float param_2,Effect_ZoybeanPodSmoke *this,RtMixedPtrBase *param_4,
          char param_5)

{
  char cVar1;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  RealObject *pRVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::clearAnimSequence((Effect_PopAnim *)this);
  std::string::string(asStack_30,"POPANIM_EFFECTS_ZOYBEANPOD_SMOKE");
  GetPAMByName(asStack_30);
  pPVar2 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_30);
  nop();
  uVar7 = 0xc2e60000;
  uVar8 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,-95.0,-115.0,0.0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_4);
  if (cVar1 != '\0') {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    local_20 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_30);
    local_1c = uVar7;
    local_18 = uVar8;
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_20,-1);
    pRVar3 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this,pRVar3,(SexyVector3 *)asStack_30,*(int *)(this + 0x10c));
    StandaloneEffect::SetDestroyWhenUnattached((StandaloneEffect *)this,true);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
    if (param_5 == '\0') {
      std::string::string(asStack_38,"start");
      AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0)
      ;
      std::string::~string(asStack_38);
      nop();
      pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      std::string::string(asStack_38,"start");
      fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_38);
      std::string::~string(asStack_38);
      nop();
      if (fVar5 < param_1) {
        pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
        std::string::string(asStack_38,"start");
        fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_38);
        std::string::~string(asStack_38);
        nop();
        std::string::string(asStack_38,"loop");
        AnimationSequence::AddLoopingAnimation
                  (param_1 - fVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
        std::string::~string(asStack_38);
        nop();
      }
    }
    std::string::string(asStack_38,"open");
    AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
    std::string::~string(asStack_38);
    nop();
    pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_40,"end");
    fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_40);
    pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_38,"open");
    fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_40);
    nop();
    if (fVar6 + fVar5 < param_2) {
      pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      std::string::string(asStack_40,"end");
      fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_40);
      pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      std::string::string(asStack_38,"open");
      fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,asStack_38);
      std::string::~string(asStack_38);
      nop();
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_38,"loop");
      AnimationSequence::AddLoopingAnimation
                ((param_2 - fVar5) - fVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
      std::string::~string(asStack_38);
      nop();
    }
    std::string::string(asStack_38,"end");
    AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
    std::string::~string(asStack_38);
    nop();
    Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)&local_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZoybeanPodSmoke::StartSmoke(float, float, Sexy::RtWeakPtr<Plant>) */

void __thiscall
Effect_ZoybeanPodSmoke::StartSmoke
          (Effect_ZoybeanPodSmoke *param_1,undefined8 param_2,Effect_ZoybeanPodSmoke *this,
          RtWeakPtrBase *param_4)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_4);
  playSmokeEffect(param_1,param_2,this,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZoybeanPodSmoke::StartSmoke(float, Sexy::RtWeakPtr<Plant>) */

void __thiscall
Effect_ZoybeanPodSmoke::StartSmoke
          (undefined4 param_1,Effect_ZoybeanPodSmoke *this,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  playSmokeEffect((Effect_ZoybeanPodSmoke *)0x0,param_1,this,aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

