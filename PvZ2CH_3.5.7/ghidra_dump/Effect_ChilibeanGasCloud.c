// Class: Effect_ChilibeanGasCloud


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ChilibeanGasCloud::StaticClassInit() */

void Effect_ChilibeanGasCloud::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ChilibeanGasCloud");
    (*pcVar2)(plVar1,asStack_10,FUN_0402b3d0,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ChilibeanGasCloud::StaticGetClass() */

long * Effect_ChilibeanGasCloud::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ChilibeanGasCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ChilibeanGasCloud::GetClass() const */

long * Effect_ChilibeanGasCloud::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ChilibeanGasCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ChilibeanGasCloud::~Effect_ChilibeanGasCloud() */

void __thiscall Effect_ChilibeanGasCloud::~Effect_ChilibeanGasCloud(Effect_ChilibeanGasCloud *this)

{
  *(undefined ***)this = &PTR_GetClass_067b8fd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_ChilibeanGasCloud::~Effect_ChilibeanGasCloud() */

void __thiscall Effect_ChilibeanGasCloud::~Effect_ChilibeanGasCloud(Effect_ChilibeanGasCloud *this)

{
  ~Effect_ChilibeanGasCloud(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ChilibeanGasCloud::Effect_ChilibeanGasCloud() */

void __thiscall Effect_ChilibeanGasCloud::Effect_ChilibeanGasCloud(Effect_ChilibeanGasCloud *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067b8fd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* Effect_ChilibeanGasCloud::StaticNew() */

Effect_ChilibeanGasCloud * Effect_ChilibeanGasCloud::StaticNew(void)

{
  Effect_ChilibeanGasCloud *this;
  
  this = ::operator_new(0x118);
  Effect_ChilibeanGasCloud(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ChilibeanGasCloud::StartCloud(Zombie*, float) */

void __thiscall
Effect_ChilibeanGasCloud::StartCloud(Effect_ChilibeanGasCloud *this,Zombie *param_1,float param_2)

{
  int iVar1;
  SexyVector3 *this_00;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  uVar6 = 0x42200000;
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_30,0.0,0.0,40.0);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  local_20 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_30);
  local_1c = uVar5;
  local_18 = uVar6;
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
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
  std::string::~string(asStack_38);
  nop();
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_40,"animation");
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_40);
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  std::string::string(asStack_38,"animation3");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  if (fVar4 + fVar3 < param_2) {
    std::string::string(asStack_38,"animation2");
    AnimationSequence::AddLoopingAnimation
              (param_2 - (fVar4 + fVar3),(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
    std::string::~string(asStack_38);
    nop();
  }
  std::string::string(asStack_38,"animation4");
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_38,0);
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

