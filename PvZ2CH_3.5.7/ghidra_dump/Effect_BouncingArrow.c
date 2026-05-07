// Class: Effect_BouncingArrow


/* Effect_BouncingArrow::PointDown() */

void __thiscall Effect_BouncingArrow::PointDown(Effect_BouncingArrow *this)

{
  float fVar1;
  
  fVar1 = (float)Sexy::SexyMath::DegToRad(0.0);
  Effect_FloatingText::SetFadeInDuration((Effect_FloatingText *)this,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_BouncingArrow::StaticClassInit() */

void Effect_BouncingArrow::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_BouncingArrow");
    (*pcVar2)(plVar1,asStack_10,FUN_03ccc534,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_BouncingArrow::StaticGetClass() */

long * Effect_BouncingArrow::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_BouncingArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_BouncingArrow::GetClass() const */

long * Effect_BouncingArrow::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_BouncingArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_BouncingArrow::SetArrowImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall Effect_BouncingArrow::SetArrowImage(Effect_BouncingArrow *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),param_2);
  return;
}


/* Effect_BouncingArrow::SetTransX(bool) */

void __thiscall Effect_BouncingArrow::SetTransX(Effect_BouncingArrow *this,bool param_1)

{
  this[0xb8] = (Effect_BouncingArrow)param_1;
  return;
}


/* Effect_BouncingArrow::SetBounceHeightsBoardSpace(float, float) */

void __thiscall
Effect_BouncingArrow::SetBounceHeightsBoardSpace
          (Effect_BouncingArrow *this,float param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03ccc114();
  *(undefined4 *)(this + 0xb0) = uVar1;
  uVar1 = FUN_03ccc114(param_2);
  *(undefined4 *)(this + 0xb4) = uVar1;
  return;
}


/* Effect_BouncingArrow::~Effect_BouncingArrow() */

void __thiscall Effect_BouncingArrow::~Effect_BouncingArrow(Effect_BouncingArrow *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f380;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_BouncingArrow::~Effect_BouncingArrow() */

void __thiscall Effect_BouncingArrow::~Effect_BouncingArrow(Effect_BouncingArrow *this)

{
  ~Effect_BouncingArrow(this);
  AK::FreeHook(this);
  return;
}


/* Effect_BouncingArrow::Effect_BouncingArrow() */

void __thiscall Effect_BouncingArrow::Effect_BouncingArrow(Effect_BouncingArrow *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f380;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  return;
}


/* Effect_BouncingArrow::StaticNew() */

Effect_BouncingArrow * Effect_BouncingArrow::StaticNew(void)

{
  Effect_BouncingArrow *this;
  
  this = ::operator_new(0xc0);
  Effect_BouncingArrow(this);
  return this;
}


/* Effect_BouncingArrow::onInitialized() */

void __thiscall Effect_BouncingArrow::onInitialized(Effect_BouncingArrow *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar2 = FUN_03ccc0e0(*(undefined4 *)(lVar1 + 0x38));
  this[0xb8] = (Effect_BouncingArrow)0x0;
  *(undefined4 *)(this + 0xa8) = uVar2;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0xc1200000;
  *(undefined4 *)(this + 0xb4) = 0x41200000;
  return;
}


/* Effect_BouncingArrow::ResetStartTime() */

void __thiscall Effect_BouncingArrow::ResetStartTime(Effect_BouncingArrow *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  uVar2 = FUN_03ccc0e0(*(undefined4 *)(lVar1 + 0x38));
  *(undefined4 *)(this + 0xa8) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_BouncingArrow::onDraw(Sexy::Graphics*) */

void __thiscall Effect_BouncingArrow::onDraw(Effect_BouncingArrow *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_5c;
  float local_58 [2];
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar4 = (float)FUN_03ccc0e0(*(undefined4 *)(lVar1 + 0x38));
  dVar5 = fmod((double)(fVar4 - *(float *)(this + 0xa8)),0.5);
  local_5c = -*(float *)(this + 0xb4);
  local_58[0] = -*(float *)(this + 0xb0);
  fVar4 = CurveLerp<float>(0,0x3f000000,(float)dVar5,&local_5c,(GraphicsAutoState *)local_58,8);
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_58,param_1);
  Sexy::Transform::Transform(aTStack_50);
  pfVar2 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
  fVar7 = *pfVar2;
  fVar6 = pfVar2[1];
  if (this[0xb8] == (Effect_BouncingArrow)0x0) {
    Sexy::Transform::Translate(aTStack_50,0.0,fVar4);
  }
  else {
    Sexy::Transform::Translate(aTStack_50,fVar4,0.0);
  }
  Sexy::Transform::RotateRad(aTStack_50,*(float *)(this + 0xac));
  Sexy::Transform::Translate(aTStack_50,fVar7,fVar6);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xa0));
  Sexy::Graphics::DrawImageTransformF(param_1,(Image *)pRVar3,aTStack_50,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_BouncingArrow::PointUp() */

void __thiscall Effect_BouncingArrow::PointUp(Effect_BouncingArrow *this)

{
  float fVar1;
  
  fVar1 = (float)Sexy::SexyMath::DegToRad(180.0);
  Effect_FloatingText::SetFadeInDuration((Effect_FloatingText *)this,fVar1);
  return;
}


/* Effect_BouncingArrow::PointLeft() */

void __thiscall Effect_BouncingArrow::PointLeft(Effect_BouncingArrow *this)

{
  float fVar1;
  
  fVar1 = (float)Sexy::SexyMath::DegToRad(270.0);
  Effect_FloatingText::SetFadeInDuration((Effect_FloatingText *)this,fVar1);
  return;
}


/* Effect_BouncingArrow::PointRight() */

void __thiscall Effect_BouncingArrow::PointRight(Effect_BouncingArrow *this)

{
  float fVar1;
  
  fVar1 = (float)Sexy::SexyMath::DegToRad(90.0);
  Effect_FloatingText::SetFadeInDuration((Effect_FloatingText *)this,fVar1);
  return;
}

