// Class: EffectObject_WizardCrucibleVenom


/* EffectObject_WizardCrucibleVenom::onDraw(Sexy::Graphics*) */

void EffectObject_WizardCrucibleVenom::onDraw(Graphics *param_1)

{
  PopAnimRig *this;
  Graphics *in_x1;
  
  this = (PopAnimRig *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0))
  ;
  PopAnimRig::Draw(this,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_WizardCrucibleVenom::StaticClassInit() */

void EffectObject_WizardCrucibleVenom::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_WizardCrucibleVenom");
    (*pcVar2)(plVar1,asStack_10,FUN_04c867f8,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_WizardCrucibleVenom::StaticGetClass() */

long * EffectObject_WizardCrucibleVenom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_WizardCrucibleVenom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_WizardCrucibleVenom::GetClass() const */

long * EffectObject_WizardCrucibleVenom::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_WizardCrucibleVenom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_WizardCrucibleVenom::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType
   const>, int, int) */

void __thiscall
EffectObject_WizardCrucibleVenom::onEffectObjectInitialize
          (EffectObject_WizardCrucibleVenom *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  uVar1 = Board::MakeGroundRenderOrder(param_4,param_3);
  FUN_04c85fa8(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_WizardCrucibleVenom::~EffectObject_WizardCrucibleVenom() */

void __thiscall
EffectObject_WizardCrucibleVenom::~EffectObject_WizardCrucibleVenom
          (EffectObject_WizardCrucibleVenom *this)

{
  *(undefined ***)this = &PTR_GetClass_069946f0;
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_WizardCrucibleVenom::~EffectObject_WizardCrucibleVenom() */

void __thiscall
EffectObject_WizardCrucibleVenom::~EffectObject_WizardCrucibleVenom
          (EffectObject_WizardCrucibleVenom *this)

{
  ~EffectObject_WizardCrucibleVenom(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_WizardCrucibleVenom::EffectObject_WizardCrucibleVenom() */

void __thiscall
EffectObject_WizardCrucibleVenom::EffectObject_WizardCrucibleVenom
          (EffectObject_WizardCrucibleVenom *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_069946f0;
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  return;
}


/* EffectObject_WizardCrucibleVenom::StaticNew() */

EffectObject_WizardCrucibleVenom * EffectObject_WizardCrucibleVenom::StaticNew(void)

{
  EffectObject_WizardCrucibleVenom *this;
  
  this = ::operator_new(0x130);
  EffectObject_WizardCrucibleVenom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_WizardCrucibleVenom::onUpdate() */

void __thiscall EffectObject_WizardCrucibleVenom::onUpdate(EffectObject_WizardCrucibleVenom *this)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,1,this + 0x118);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    if (pPVar3 != (Plant *)0x0) {
      fVar6 = *(float *)(this + 300);
      pcVar4 = *(code **)(*(long *)pPVar3 + 0x110);
      fVar5 = (float)PVZ_Dt();
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar5 * fVar6),local_88,local_84,aDStack_68,aPStack_90,0);
      (*pcVar4)(pPVar3,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_WizardCrucibleVenom::setVrnomValues(Sexy::TRect<int>, float, float) */

void __thiscall
EffectObject_WizardCrucibleVenom::setVrnomValues
          (undefined8 param_1,undefined4 param_2,EffectObject_WizardCrucibleVenom *this,
          undefined8 *param_4)

{
  undefined8 uVar1;
  string asStack_28 [8];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  uVar1 = param_4[1];
  *(undefined8 *)(this + 0x118) = *param_4;
  *(undefined8 *)(this + 0x120) = uVar1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 300) = param_2;
  *(int *)(this + 0x128) = (int)param_1;
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_28,"venom");
  AnimationSequence::AddLoopingAnimation(param_1,aPStack_20,asStack_28,0);
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

