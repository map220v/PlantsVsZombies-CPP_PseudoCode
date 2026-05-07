// Class: Effect_evolveLight


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_evolveLight::StaticClassInit() */

void Effect_evolveLight::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_evolveLight");
    (*pcVar2)(plVar1,asStack_10,FUN_03735620,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_evolveLight::StaticGetClass() */

long * Effect_evolveLight::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_evolveLight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_evolveLight::GetClass() const */

long * Effect_evolveLight::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_evolveLight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_evolveLight::setevolutionaryInformation(ArtifactEvolution::evolutionaryInformation) */

void __thiscall
Effect_evolveLight::setevolutionaryInformation(Effect_evolveLight *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(this + 0x110) = uVar1;
  thunk_FUN_05475e00(this + 0x120,param_2 + 2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)(param_2 + 1));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)(param_2 + 4));
  return;
}


/* Effect_evolveLight::~Effect_evolveLight() */

void __thiscall Effect_evolveLight::~Effect_evolveLight(Effect_evolveLight *this)

{
  *(undefined ***)this = &PTR_GetClass_06691c30;
  ArtifactEvolution::evolutionaryInformation::~evolutionaryInformation
            ((evolutionaryInformation *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_evolveLight::~Effect_evolveLight() */

void __thiscall Effect_evolveLight::~Effect_evolveLight(Effect_evolveLight *this)

{
  ~Effect_evolveLight(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_evolveLight::Effect_evolveLight() */

void __thiscall Effect_evolveLight::Effect_evolveLight(Effect_evolveLight *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06691c30;
  ArtifactEvolution::evolutionaryInformation::evolutionaryInformation
            ((evolutionaryInformation *)(this + 0x110));
  Sexy::Point::Point((Point *)&local_10,1,1);
  *(undefined8 *)(this + 0x110) = local_10;
  *(undefined4 *)(this + 0x128) = 1;
  std::string::append((string *)(this + 0x120),"loop",1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_evolveLight::StaticNew() */

Effect_evolveLight * Effect_evolveLight::StaticNew(void)

{
  Effect_evolveLight *this;
  
  this = ::operator_new(0x138);
  Effect_evolveLight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_evolveLight::startEvolveLight(Sexy::Point, std::string) */

void __thiscall
Effect_evolveLight::startEvolveLight(Effect_evolveLight *this,Point *param_2,string *param_3)

{
  bool bVar1;
  int iVar2;
  PopAnim *pPVar3;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::clearAnimSequence((Effect_PopAnim *)this);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_EVOLUTION_LIGHT");
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  (**(code **)(*(long *)this + 0x80))(0x3f800000,this);
  BoardTransforms::GridToBoardSpace(param_2);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_20,(float)local_30,(float)local_2c - (float)iVar2 * 0.5,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,-1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"idle");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  bVar1 = std::operator==(param_3,"grownew");
  if (bVar1) {
    std::string::string(asStack_28,"grownew");
  }
  else {
    std::string::string(asStack_28,"loop");
  }
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"over");
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
/* Effect_evolveLight::playEvolveLight(Sexy::Point, std::string) */

void __thiscall
Effect_evolveLight::playEvolveLight(Effect_evolveLight *this,TPoint *param_2,undefined8 param_3)

{
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_2);
  FUN_05475d88(asStack_10,param_3);
  startEvolveLight(this,aPStack_18,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_evolveLight::onAnimStopped(std::string const&) */

void __thiscall Effect_evolveLight::onAnimStopped(Effect_evolveLight *this,string *param_1)

{
  RtMixedPtrBase *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Plant *pPVar7;
  RtWeakPtr *this_01;
  undefined8 uVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  ArtifactMgr::GetActivatedArtifact();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_PopAnim::onAnimStopped((string *)this);
  bVar3 = std::operator==(param_1,"loop");
  if (bVar3) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x118));
    if (bVar3) {
LAB_0379c1b0:
      bVar3 = std::operator==(param_1,"loop");
      if (bVar3) {
        this_00 = (RtMixedPtrBase *)(this + 0x130);
        cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
        if (cVar4 != '\0') {
          pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          std::string::string((string *)aRStack_10,"NoDiedMsg");
          Plant::AddTag(pPVar7,(string *)aRStack_10);
          std::string::~string((string *)aRStack_10);
          nop();
          pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          Plant::KillPlant(pPVar7,1,0,0x8000000000);
        }
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_18,*(int *)(this + 0x110),*(int *)(this + 0x114));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(this + 0x118));
        iVar5 = Board::GetCanPlantAtReason(uVar8,aPStack_18,aRStack_10,0,0xffffffff);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (iVar5 == 0) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          FUN_03723c7c(lVar6 + 0xb0,1);
          uVar1 = *(undefined4 *)(this + 0x110);
          uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
          uVar2 = *(undefined4 *)(this + 0x114);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(this + 0x118));
          Board::AddPlant((Board *)0x0,uVar8,uVar1,uVar2,aRStack_10,1,1,
                          *(undefined4 *)(this + 0x128),0,1,1,0,0,0,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          FUN_03723c7c(lVar6 + 0xb0,0);
        }
        goto LAB_0379c148;
      }
    }
  }
  else {
    bVar3 = std::operator==(param_1,"grownew");
    if (!bVar3) goto LAB_0379c148;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x118));
    if (bVar3) goto LAB_0379c1b0;
  }
  this_01 = (RtWeakPtr *)(this + 0x118);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if ((bVar3) && (bVar3 = std::operator==(param_1,"grownew"), bVar3)) {
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_18,*(int *)(this + 0x110),*(int *)(this + 0x114));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this_01);
    iVar5 = Board::GetCanPlantAtReason(uVar8,aPStack_18,aRStack_10,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (iVar5 == 0) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      FUN_03723c7c(lVar6 + 0xb0,1);
      uVar1 = *(undefined4 *)(this + 0x110);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      uVar2 = *(undefined4 *)(this + 0x114);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this_01);
      Board::AddPlant((Board *)0x0,uVar8,uVar1,uVar2,aRStack_10,1,1,*(undefined4 *)(this + 0x128),0,
                      1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      FUN_03723c7c(lVar6 + 0xb0,0);
    }
  }
LAB_0379c148:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

