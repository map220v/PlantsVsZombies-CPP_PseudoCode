// Class: Effect_DinoShadow


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoShadow::onUpdate() */

void __thiscall Effect_DinoShadow::onUpdate(Effect_DinoShadow *this)

{
  string *psVar1;
  char cVar2;
  CurveSequence<float> *pCVar3;
  float fVar4;
  float fVar5;
  string asStack_28 [8];
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(this + 0x118);
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  std::string::string(asStack_28,"x");
  pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar4 = (float)PVZ_T();
  fVar4 = (float)CurveSequence<float>::GetValueAt(pCVar3,fVar4);
  std::string::string(asStack_20,"y");
  pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar5 = (float)PVZ_T();
  fVar5 = (float)CurveSequence<float>::GetValueAt(pCVar3,fVar5);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4,fVar5,0.0);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  std::string::string(asStack_20,"x");
  pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar4 = (float)PVZ_T();
  cVar2 = CurveSequence<float>::IsTimeInSequence(pCVar3,fVar4);
  std::string::~string(asStack_20);
  nop();
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoShadow::StaticClassInit() */

void Effect_DinoShadow::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DinoShadow");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce04a4,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DinoShadow::StaticGetClass() */

long * Effect_DinoShadow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DinoShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoShadow::GetClass() const */

long * Effect_DinoShadow::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DinoShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoShadow::Effect_DinoShadow() */

void __thiscall Effect_DinoShadow::Effect_DinoShadow(Effect_DinoShadow *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_067607c0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x118));
  return;
}


/* Effect_DinoShadow::StaticNew() */

Effect_DinoShadow * Effect_DinoShadow::StaticNew(void)

{
  Effect_DinoShadow *this;
  
  this = ::operator_new(0x148);
  Effect_DinoShadow(this);
  return this;
}


/* Effect_DinoShadow::~Effect_DinoShadow() */

void __thiscall Effect_DinoShadow::~Effect_DinoShadow(Effect_DinoShadow *this)

{
  *(undefined ***)this = &PTR_GetClass_067607c0;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x118));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* Effect_DinoShadow::~Effect_DinoShadow() */

void __thiscall Effect_DinoShadow::~Effect_DinoShadow(Effect_DinoShadow *this)

{
  ~Effect_DinoShadow(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoShadow::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int, int) */

void __thiscall
Effect_DinoShadow::onEffectObjectInitialize
          (undefined1 param_1 [16],float param_2,Effect_DinoShadow *this,RtWeakPtrBase *param_4)

{
  string *psVar1;
  Effect_DinoShadowProps *pEVar2;
  CurveSequence<float> *pCVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  Vec3 aVStack_28 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  fVar5 = (float)PVZ_T();
  pEVar2 = EffectObject::GetProps<Effect_DinoShadowProps>();
  if (pEVar2 != (Effect_DinoShadowProps *)0x0) {
    PVZ_EOT();
    psVar1 = (string *)(this + 0x118);
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,pEVar2 + 0x28,0);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)this,true);
    (**(code **)(*(long *)this + 0x80))(*(undefined4 *)(pEVar2 + 0x38),this);
    Sexy::Color::Color((Color *)aRStack_18,1);
    local_c = *(undefined4 *)(pEVar2 + 0x3c);
    (**(code **)(*(long *)this + 0x78))(this,aRStack_18);
    fVar6 = (float)(**(code **)(*(long *)this + 0x88))(this);
    local_38 = *(float *)(pEVar2 + 0x34) + *(float *)(pEVar2 + 0x18) + fVar6 * 0.5;
    local_30 = *(float *)(pEVar2 + 0x1c) - param_2 * 0.5;
    local_34 = (*(float *)(pEVar2 + 0x18) - fVar6 * 0.5) - *(float *)(pEVar2 + 0x34);
    local_2c = local_30;
    EATextSquish::Vec3::Vec3(aVStack_28,local_38,local_30,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_28,-1);
    std::string::string((string *)aVStack_28,"x");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    CurveSequence<float>::StartSequence(pCVar3,fVar5,&local_38);
    std::string::~string((string *)aVStack_28);
    nop();
    std::string::string((string *)aVStack_28,"y");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    CurveSequence<float>::StartSequence(pCVar3,fVar5,&local_30);
    std::string::~string((string *)aVStack_28);
    nop();
    std::string::string((string *)aVStack_28,"x");
    uVar4 = CurveSequenceCollection<float>::operator[](psVar1);
    FUN_03ce07a4(*(undefined4 *)(pEVar2 + 0x30),local_38,uVar4,&local_34);
    std::string::~string((string *)aVStack_28);
    nop();
    std::string::string((string *)aVStack_28,"y");
    uVar4 = CurveSequenceCollection<float>::operator[](psVar1);
    FUN_03ce07a4(*(undefined4 *)(pEVar2 + 0x30),local_30,uVar4,&local_2c);
    std::string::~string((string *)aVStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

