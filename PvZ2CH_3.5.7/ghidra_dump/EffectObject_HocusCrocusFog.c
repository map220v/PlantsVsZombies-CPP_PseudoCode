// Class: EffectObject_HocusCrocusFog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_HocusCrocusFog::StaticClassInit() */

void EffectObject_HocusCrocusFog::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_HocusCrocusFog");
    (*pcVar2)(plVar1,asStack_10,FUN_03b25ef4,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_HocusCrocusFog::StaticGetClass() */

long * EffectObject_HocusCrocusFog::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_HocusCrocusFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_HocusCrocusFog::GetClass() const */

long * EffectObject_HocusCrocusFog::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_HocusCrocusFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_HocusCrocusFog::~EffectObject_HocusCrocusFog() */

void __thiscall
EffectObject_HocusCrocusFog::~EffectObject_HocusCrocusFog(EffectObject_HocusCrocusFog *this)

{
  *(undefined ***)this = &PTR_GetClass_0672e820;
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_HocusCrocusFog::~EffectObject_HocusCrocusFog() */

void __thiscall
EffectObject_HocusCrocusFog::~EffectObject_HocusCrocusFog(EffectObject_HocusCrocusFog *this)

{
  ~EffectObject_HocusCrocusFog(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_HocusCrocusFog::EffectObject_HocusCrocusFog() */

void __thiscall
EffectObject_HocusCrocusFog::EffectObject_HocusCrocusFog(EffectObject_HocusCrocusFog *this)

{
  undefined4 uVar1;
  
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_0672e820;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x118) = uVar1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x11c) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  return;
}


/* EffectObject_HocusCrocusFog::StaticNew() */

EffectObject_HocusCrocusFog * EffectObject_HocusCrocusFog::StaticNew(void)

{
  EffectObject_HocusCrocusFog *this;
  
  this = ::operator_new(0x130);
  EffectObject_HocusCrocusFog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_HocusCrocusFog::setShrinkRect(Sexy::TRect<int>) */

void __thiscall
EffectObject_HocusCrocusFog::setShrinkRect(EffectObject_HocusCrocusFog *this,undefined8 *param_2)

{
  undefined8 uVar1;
  ResourceInfo *pRVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int local_18;
  int local_14;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x120) = *param_2;
  *(undefined8 *)(this + 0x128) = uVar1;
  local_8 = ___stack_chk_guard;
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_18,(TPoint *)aRStack_10);
  EffectObject::GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  fVar5 = (float)FUN_03b25684(*(undefined4 *)(this + 0xd0));
  iVar3 = (int)((float)local_18 - *(float *)(pRVar2 + 0x18) * fVar5);
  local_18 = iVar3;
  fVar5 = (float)FUN_03b25688(*(undefined4 *)(this + 0xd4));
  iVar4 = (int)((float)local_14 - *(float *)(pRVar2 + 0x1c) * fVar5);
  local_14 = iVar4;
  iVar3 = FUN_03b25884(iVar3);
  iVar4 = FUN_03b25884(iVar4);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,(float)iVar3,(float)iVar4);
  iVar3 = FUN_03b25674(*(undefined4 *)(this + 0x1c),this + 0x20);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this,(SexyVector2 *)aRStack_10,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_HocusCrocusFog::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>,
   int, int) */

void EffectObject_HocusCrocusFog::onEffectObjectInitialize
               (Effect_PopAnim *param_1,RtWeakPtrBase *param_2)

{
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"fumeshroom_appear");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"idle");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(param_1,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_HocusCrocusFog::onUpdate() */

void __thiscall EffectObject_HocusCrocusFog::onUpdate(EffectObject_HocusCrocusFog *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x11c) < fVar5 - *(float *)(this + 0x118)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInRectangle(avStack_20,2,this + 0x120);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if (this_00 != (Zombie *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        cVar1 = PlantHocusCrocus::canBeShrunkByHocusCrocus(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (cVar1 != '\0') {
          Zombie::ApplyCondition((Zombie *)0x3fc00000,0,this_00,0x42,1);
          uVar4 = Zombie::GetConditionTracker(this_00);
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)0x3f400000,uVar4,0x42);
          uVar4 = Zombie::GetConditionTracker(this_00);
          ZombieConditionTracker::SetExtraAdditionalValue
                    ((ZombieConditionTracker *)0x40a00000,uVar4,0x42);
          uVar4 = Zombie::GetConditionTracker(this_00);
          ZombieConditionTracker::SetExtraAdditionalValue2
                    ((ZombieConditionTracker *)0x3fc00000,uVar4,0x42);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

