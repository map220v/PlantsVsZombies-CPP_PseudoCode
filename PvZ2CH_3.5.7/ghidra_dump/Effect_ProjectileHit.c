// Class: Effect_ProjectileHit


/* Effect_ProjectileHit::~Effect_ProjectileHit() */

void __thiscall Effect_ProjectileHit::~Effect_ProjectileHit(Effect_ProjectileHit *this)

{
  *(undefined ***)this = &PTR_GetClass_066391e0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_ProjectileHit::~Effect_ProjectileHit() */

void __thiscall Effect_ProjectileHit::~Effect_ProjectileHit(Effect_ProjectileHit *this)

{
  ~Effect_ProjectileHit(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ProjectileHit::Effect_ProjectileHit() */

void __thiscall Effect_ProjectileHit::Effect_ProjectileHit(Effect_ProjectileHit *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 6000;
  *(undefined ***)this = &PTR_GetClass_066391e0;
  return;
}


/* Effect_ProjectileHit::StaticNew() */

Effect_ProjectileHit * Effect_ProjectileHit::StaticNew(void)

{
  Effect_ProjectileHit *this;
  
  this = ::operator_new(0x110);
  Effect_ProjectileHit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ProjectileHit::StaticClassInit() */

void Effect_ProjectileHit::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ProjectileHit");
    (*pcVar2)(plVar1,asStack_10,FUN_0346293c,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ProjectileHit::StaticGetClass() */

long * Effect_ProjectileHit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ProjectileHit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ProjectileHit::GetClass() const */

long * Effect_ProjectileHit::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ProjectileHit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ProjectileHit::playSpiralPill(float, float, float) */

void __thiscall
Effect_ProjectileHit::playSpiralPill
          (Effect_ProjectileHit *this,float param_1,float param_2,float param_3)

{
  PopAnim *pPVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::clearAnimSequence((Effect_PopAnim *)this);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ORCHIDMAGE_HIT");
  GetPAMByName(asStack_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  (**(code **)(*(long *)this + 0x80))(0x3f800000,this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,param_2,param_3,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,-1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"attack5_hit_on");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_30,"attack5_hit_on");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_30);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_28,"attack5_hit_off");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  if (fVar4 + fVar3 < param_1) {
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_30,"attack5_hit_on");
    fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_30);
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_28,"attack5_hit_off");
    fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_28);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_28,"attack5_hit_loop");
    AnimationSequence::AddLoopingAnimation((param_1 - fVar3) - fVar4,aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
  }
  std::string::string(asStack_28,"attack5_hit_off");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ProjectileHit::starSpiralPill(float, float, float) */

void __thiscall
Effect_ProjectileHit::starSpiralPill
          (Effect_ProjectileHit *this,float param_1,float param_2,float param_3)

{
  PopAnim *pPVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Effect_PopAnim::clearAnimSequence((Effect_PopAnim *)this);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ORCHIDMAGE_HIT");
  GetPAMByName(asStack_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  (**(code **)(*(long *)this + 0x80))(0x3f800000,this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,param_2,param_3,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,-1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"attack5_hit_on");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_30,"attack5_hit_on");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_30);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_28,"attack5_hit_off");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  if (fVar4 + fVar3 < param_1) {
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_30,"attack5_hit_on");
    fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_30);
    pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    std::string::string(asStack_28,"attack5_hit_off");
    fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_28);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_28,"attack5_hit_loop");
    AnimationSequence::AddLoopingAnimation((param_1 - fVar3) - fVar4,aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
  }
  std::string::string(asStack_28,"attack5_hit_off");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ProjectileHit::playBound(float, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
Effect_ProjectileHit::playBound
          (undefined4 param_1,Effect_ProjectileHit *this,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PopAnim *pPVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar5;
  RealObject *pRVar6;
  Zombie *pZVar7;
  undefined8 uVar8;
  long extraout_x0;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar10;
  long lVar11;
  size_t __n;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  Vec3 aVStack_48 [16];
  string asStack_38 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::clearAnimSequence((Effect_PopAnim *)this);
  std::string::string(asStack_38,"POPANIM_EFFECTS_ORCHIDMAGE_HIT");
  GetPAMByName(asStack_38);
  pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_38);
  nop();
  EATextSquish::Vec3::Vec3(aVStack_48,-95.0,-105.0,0.0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,pSVar5,-1);
  pRVar6 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this,pRVar6,(SexyVector3 *)aVStack_48,*(int *)(this + 0x10c));
  StandaloneEffect::SetDestroyWhenUnattached((StandaloneEffect *)this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_38);
  std::string::string(asStack_80,"attack2_hit_on");
  nop();
  std::string::string(asStack_78,"attack2_hit");
  nop();
  pRVar10 = aRStack_20;
  std::string::string(asStack_70,"attack2_hit_off");
  nop();
  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar3 = Zombie::GetSizeType(pZVar7);
  if (iVar3 == 1) {
    std::string::append(asStack_80,"attack2_hit_medium_on",(size_t)pRVar10);
    std::string::append(asStack_78,"attack2_hit_medium",(size_t)pRVar10);
    std::string::append(asStack_70,"attack2_hit_medium_off",(size_t)pRVar10);
  }
  else if (iVar3 == 0) {
    std::string::append(asStack_80,"attack2_hit_on",(size_t)pRVar10);
    std::string::append(asStack_78,"attack2_hit",(size_t)pRVar10);
    std::string::append(asStack_70,"attack2_hit_off",(size_t)pRVar10);
  }
  else if (iVar3 == 2) {
    std::string::append(asStack_80,"attack2_hit_large_on",(size_t)pRVar10);
    std::string::append(asStack_78,"attack2_large_hit",(size_t)pRVar10);
    std::string::append(asStack_70,"attack2_hit_large_off",(size_t)pRVar10);
  }
  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_60,"OrchidmageDefault");
  Sexy::ToWString(asStack_60);
  Sexy::RtName::RtName((RtName *)aRStack_20,(wstring *)&local_58);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>
            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,uVar8,5,aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtName::~RtName((RtName *)aRStack_20);
  FUN_05476c50((__normal_iterator *)&local_58);
  std::string::~string(asStack_60);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    nop();
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)aRStack_20,
               (vector *)(extraout_x0 + 0x2e0));
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aRStack_20);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
    pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    pRVar10 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar7);
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar10);
    __n = lVar11 + 8;
    local_58 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar8,uVar9);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (bVar2) {
      std::string::append(asStack_80,"attack2_hit_medium_on",__n);
      std::string::append(asStack_78,"attack2_hit_medium",__n);
      std::string::append(asStack_70,"attack2_hit_medium_off",__n);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)aRStack_20);
  }
  AnimationSequence::AddSingleAnimation(asStack_38,asStack_80,0);
  AnimationSequence::AddLoopingAnimation(param_1,asStack_38,asStack_78,0);
  AnimationSequence::AddSingleAnimation(asStack_38,asStack_70,0);
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)asStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::string::~string(asStack_80);
  AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ProjectileHit::startBound(float, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
Effect_ProjectileHit::startBound
          (Effect_ProjectileHit *param_1,Effect_ProjectileHit *this,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  playBound(param_1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

