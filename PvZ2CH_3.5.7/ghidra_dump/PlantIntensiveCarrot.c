// Class: PlantIntensiveCarrot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIntensiveCarrot::StaticClassInit() */

void PlantIntensiveCarrot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIntensiveCarrot");
    (*pcVar2)(plVar1,asStack_10,FUN_041688c8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIntensiveCarrot::StaticGetClass() */

long * PlantIntensiveCarrot::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantIntensiveCarrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIntensiveCarrot::GetClass() const */

long * PlantIntensiveCarrot::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantIntensiveCarrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIntensiveCarrot::~PlantIntensiveCarrot() */

void __thiscall PlantIntensiveCarrot::~PlantIntensiveCarrot(PlantIntensiveCarrot *this)

{
  *(undefined ***)this = &PTR_GetClass_067f3830;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantIntensiveCarrot::~PlantIntensiveCarrot() */

void __thiscall PlantIntensiveCarrot::~PlantIntensiveCarrot(PlantIntensiveCarrot *this)

{
  ~PlantIntensiveCarrot(this);
  AK::FreeHook(this);
  return;
}


/* PlantIntensiveCarrot::PlantIntensiveCarrot() */

void __thiscall PlantIntensiveCarrot::PlantIntensiveCarrot(PlantIntensiveCarrot *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f3830;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantIntensiveCarrot::StaticNew() */

PlantIntensiveCarrot * PlantIntensiveCarrot::StaticNew(void)

{
  PlantIntensiveCarrot *this;
  
  this = ::operator_new(0x38);
  PlantIntensiveCarrot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIntensiveCarrot::resurrectPlantAtOurPosition() */

void __thiscall PlantIntensiveCarrot::resurrectPlantAtOurPosition(PlantIntensiveCarrot *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  IntensiveCarrotRevivalSubsystem *this_00;
  long lVar5;
  Plant *this_01;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (IntensiveCarrotRevivalSubsystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  cVar3 = IntensiveCarrotRevivalSubsystem::HasPlantAt
                    (this_00,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  if (cVar3 != '\0') {
    iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    IntensiveCarrotRevivalSubsystem::GetPlantLastPlantedAt
              (iVar4,*(int *)(*(long *)(this + 0x10) + 0x114));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
      uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_18);
      this_01 = (Plant *)Board::AddPlant((Board *)0x0,uVar6,uVar1,uVar2,aRStack_20,1,1,local_10,0,1,
                                         1,1,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (this_01 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this_01,true);
        lVar5 = FUN_041682d0(*(undefined8 *)(this + 0x10));
        Plant::FadeIn(this_01,*(float *)(lVar5 + 700));
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_20
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
      }
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIntensiveCarrot::OnAnimCommand(std::string const&, std::string const&) */

bool PlantIntensiveCarrot::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    resurrectPlantAtOurPosition((PlantIntensiveCarrot *)param_1);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIntensiveCarrot::Initialize() */

void __thiscall PlantIntensiveCarrot::Initialize(PlantIntensiveCarrot *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    Board::GetGameSubSystem<IntensiveCarrotRevivalSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIntensiveCarrot::PlayInvincibleEffect() */

void __thiscall PlantIntensiveCarrot::PlayInvincibleEffect(PlantIntensiveCarrot *this)

{
  int iVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  undefined8 *puVar4;
  Effect_PopAnim *pEVar5;
  PopAnimRig *pPVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_30,"POPANIM_EFFECTS_INTENSIVECARROT_WDTX");
  GetPAMByName((string *)&local_30);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string((string *)&local_30);
  nop();
  lVar3 = FUN_041682d0(*(undefined8 *)(this + 0x10));
  fVar9 = *(float *)(lVar3 + 0x2c0);
  EATextSquish::Vec3::Vec3(aVStack_40,0.0,-22.0,0.0);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_30 = *puVar4;
  local_28 = *(undefined4 *)(puVar4 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_30,aVStack_40);
  iVar1 = Board::MakeRenderOrder(0x65130,0,0);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(pEVar5,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_30,iVar1);
  pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)pEVar5);
  std::string::string((string *)aRStack_20,"idle1");
  fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar6,(string *)aRStack_20);
  std::string::~string((string *)aRStack_20);
  nop();
  std::string::string((string *)aRStack_20,"idle3");
  fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar6,(string *)aRStack_20);
  std::string::~string((string *)aRStack_20);
  nop();
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  if (fVar7 <= fVar9) {
    std::string::string(asStack_48,"idle1");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  fVar10 = (fVar9 - fVar7) - fVar8;
  if (0.0 < fVar10) {
    std::string::string(asStack_48,"idle2");
    AnimationSequence::AddLoopingAnimation(fVar10,aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  if (fVar8 + fVar7 <= fVar9) {
    std::string::string(asStack_48,"idle3");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  Effect_PopAnim::PlayAnimationSequence(pEVar5,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  EATextSquish::Vec3::Vec3(aVStack_40,0.0,-22.0,0.0);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_30 = *puVar4;
  local_28 = *(undefined4 *)(puVar4 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_30,aVStack_40);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = Board::MakeRenderOrder(0x62250,-iVar1,0);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(pEVar5,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_30,iVar1);
  pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)pEVar5);
  std::string::string((string *)aRStack_20,"idle1_1");
  fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar6,(string *)aRStack_20);
  std::string::~string((string *)aRStack_20);
  nop();
  std::string::string((string *)aRStack_20,"idle3_1");
  fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar6,(string *)aRStack_20);
  std::string::~string((string *)aRStack_20);
  nop();
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  if (fVar7 <= fVar9) {
    std::string::string(asStack_48,"idle1_1");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  fVar10 = (fVar9 - fVar7) - fVar8;
  if (0.0 < fVar10) {
    std::string::string(asStack_48,"idle2_1");
    AnimationSequence::AddLoopingAnimation(fVar10,aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  if (fVar8 + fVar7 <= fVar9) {
    std::string::string(asStack_48,"idle3_1");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_48,0);
    std::string::~string(asStack_48);
    nop();
  }
  Effect_PopAnim::PlayAnimationSequence(pEVar5,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIntensiveCarrot::finalizeResurrection() */

void __thiscall PlantIntensiveCarrot::finalizeResurrection(PlantIntensiveCarrot *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  GameObject *this_01;
  long lVar3;
  Plant *pPVar4;
  float fVar5;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    this_01 = (GameObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = GameObject::IsDestroyed(this_01);
    if (cVar1 == '\0') {
      lVar3 = FUN_041682d0(*(undefined8 *)(this + 0x10));
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      fVar5 = (float)Plant::GetMaxHealth(pPVar4);
      iVar2 = FUN_04166d28(*(undefined8 *)(this + 0x10));
      if (iVar2 < 2) {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::SetHealth(pPVar4,fVar5 * *(float *)(lVar3 + 0x2b8));
      }
      else if (iVar2 == 2) {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::SetHealth(pPVar4,fVar5);
      }
      else if (iVar2 == 3) {
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::SetInvincible(pPVar4,true,false,*(float *)(lVar3 + 0x2c0));
        PlayInvincibleEffect(this);
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      return;
    }
  }
  return;
}


/* PlantIntensiveCarrot::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantIntensiveCarrot::onAnimStoppedCallback(PlantIntensiveCarrot *this,string *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==(param_1,(string *)&PlantAnimRig::kAttackAnim);
  if (cVar1 == '\0') {
    return;
  }
  finalizeResurrection(this);
  return;
}

