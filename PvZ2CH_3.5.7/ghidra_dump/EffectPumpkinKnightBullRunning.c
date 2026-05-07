// Class: EffectPumpkinKnightBullRunning


/* EffectPumpkinKnightBullRunning::~EffectPumpkinKnightBullRunning() */

void __thiscall
EffectPumpkinKnightBullRunning::~EffectPumpkinKnightBullRunning
          (EffectPumpkinKnightBullRunning *this)

{
  *(undefined ***)this = &PTR_GetClass_06a12050;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* EffectPumpkinKnightBullRunning::~EffectPumpkinKnightBullRunning() */

void __thiscall
EffectPumpkinKnightBullRunning::~EffectPumpkinKnightBullRunning
          (EffectPumpkinKnightBullRunning *this)

{
  ~EffectPumpkinKnightBullRunning(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectPumpkinKnightBullRunning::StaticClassInit() */

void EffectPumpkinKnightBullRunning::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectPumpkinKnightBullRunning");
    (*pcVar2)(plVar1,asStack_10,FUN_04f266d4,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectPumpkinKnightBullRunning::StaticGetClass() */

long * EffectPumpkinKnightBullRunning::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectPumpkinKnightBullRunning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectPumpkinKnightBullRunning::GetClass() const */

long * EffectPumpkinKnightBullRunning::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectPumpkinKnightBullRunning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectPumpkinKnightBullRunning::setGridPoint(Sexy::Point) */

void __thiscall
EffectPumpkinKnightBullRunning::setGridPoint
          (EffectPumpkinKnightBullRunning *this,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_38 [16];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar3 = *param_2;
  *(undefined8 *)(this + 0x10c) = uVar3;
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded((int)uVar3);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(*(int *)(this + 0x110));
  EATextSquish::Vec3::Vec3(aVStack_38,(float)iVar1,(float)iVar2,0.0);
  uVar4 = 0xc1f00000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-30.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)aVStack_28);
  local_14 = uVar4;
  local_10 = uVar5;
  iVar1 = Board::MakeGroundRenderOrder(*(int *)(this + 0x110),1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_18,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectPumpkinKnightBullRunning::EffectPumpkinKnightBullRunning() */

void __thiscall
EffectPumpkinKnightBullRunning::EffectPumpkinKnightBullRunning(EffectPumpkinKnightBullRunning *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06a12050;
  Sexy::Point::Point((Point *)(this + 0x10c));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x114) = uVar1;
  return;
}


/* EffectPumpkinKnightBullRunning::StaticNew() */

EffectPumpkinKnightBullRunning * EffectPumpkinKnightBullRunning::StaticNew(void)

{
  EffectPumpkinKnightBullRunning *this;
  
  this = ::operator_new(0x118);
  EffectPumpkinKnightBullRunning(this);
  return this;
}


/* EffectPumpkinKnightBullRunning::registerForEvents() */

void __thiscall
EffectPumpkinKnightBullRunning::registerForEvents(EffectPumpkinKnightBullRunning *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<EffectPumpkinKnightBullRunning,void(EffectPumpkinKnightBullRunning::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectPumpkinKnightBullRunning::setAliveDruation(float) */

void __thiscall
EffectPumpkinKnightBullRunning::setAliveDruation(EffectPumpkinKnightBullRunning *this,float param_1)

{
  undefined4 in_register_00005004;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_28,"animation");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animation2");
  AnimationSequence::AddLoopingAnimation
            (CONCAT44(in_register_00005004,param_1),aPStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aPStack_20);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,true);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectPumpkinKnightBullRunning::OnGatherPlantingRestrictions(Sexy::Point const&, PlantType
   const*, std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
EffectPumpkinKnightBullRunning::OnGatherPlantingRestrictions
          (EffectPumpkinKnightBullRunning *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)(this + 0x10c));
  if (cVar1 != '\0') {
    local_c = 0x26;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectPumpkinKnightBullRunning::onInitialized() */

void __thiscall EffectPumpkinKnightBullRunning::onInitialized(EffectPumpkinKnightBullRunning *this)

{
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onInitialized((Effect_PopAnim *)this);
  std::string::string(asStack_18,"POPANIM_EFFECTS_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_FIRE_FLOOR");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectPumpkinKnightBullRunning::onUpdate() */

void __thiscall EffectPumpkinKnightBullRunning::onUpdate(EffectPumpkinKnightBullRunning *this)

{
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  PVZ_T();
  return;
}

