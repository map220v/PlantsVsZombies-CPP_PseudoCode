// Class: Effect_GumPoisonCloud


/* Effect_GumPoisonCloud::onUpdate() */

void __thiscall Effect_GumPoisonCloud::onUpdate(Effect_GumPoisonCloud *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x110);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar1 = Zombie::HasCondition(uVar2,0x18);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar3 + 0x328))();
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GumPoisonCloud::StaticClassInit() */

void Effect_GumPoisonCloud::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_GumPoisonCloud");
    (*pcVar2)(plVar1,asStack_10,FUN_0427e360,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_GumPoisonCloud::StaticGetClass() */

long * Effect_GumPoisonCloud::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_GumPoisonCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_GumPoisonCloud::GetClass() const */

long * Effect_GumPoisonCloud::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_GumPoisonCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_GumPoisonCloud::~Effect_GumPoisonCloud() */

void __thiscall Effect_GumPoisonCloud::~Effect_GumPoisonCloud(Effect_GumPoisonCloud *this)

{
  *(undefined ***)this = &PTR_GetClass_06823350;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_GumPoisonCloud::~Effect_GumPoisonCloud() */

void __thiscall Effect_GumPoisonCloud::~Effect_GumPoisonCloud(Effect_GumPoisonCloud *this)

{
  ~Effect_GumPoisonCloud(this);
  AK::FreeHook(this);
  return;
}


/* Effect_GumPoisonCloud::Effect_GumPoisonCloud() */

void __thiscall Effect_GumPoisonCloud::Effect_GumPoisonCloud(Effect_GumPoisonCloud *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06823350;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* Effect_GumPoisonCloud::StaticNew() */

Effect_GumPoisonCloud * Effect_GumPoisonCloud::StaticNew(void)

{
  Effect_GumPoisonCloud *this;
  
  this = ::operator_new(0x118);
  Effect_GumPoisonCloud(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GumPoisonCloud::StartCloud(Zombie*, float) */

void __thiscall
Effect_GumPoisonCloud::StartCloud(Effect_GumPoisonCloud *this,Zombie *param_1,float param_2)

{
  int iVar1;
  SexyVector3 *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  uVar3 = 0x42200000;
  local_8 = ___stack_chk_guard;
  uVar2 = 0;
  EATextSquish::Vec3::Vec3(aVStack_30,0.0,0.0,40.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  local_20 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_30);
  local_1c = uVar2;
  local_18 = uVar3;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_20,iVar1 + 1)
  ;
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this,(RealObject *)param_1,(SexyVector3 *)aVStack_30,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  StandaloneEffect::SetDestroyWhenUnattached((StandaloneEffect *)this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
  std::string::string(asStack_38,"animation");
  AnimationSequence::AddLoopingAnimation
            (param_2,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)&local_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

