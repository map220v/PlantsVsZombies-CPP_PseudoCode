// Class: EffectObject


/* EffectObject::~EffectObject() */

void __thiscall EffectObject::~EffectObject(EffectObject *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fe70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* EffectObject::~EffectObject() */

void __thiscall EffectObject::~EffectObject(EffectObject *this)

{
  ~EffectObject(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject::GetProps() const */

void EffectObject::GetProps(void)

{
  long in_x0;
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x110))
  ;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(lVar1 + 0x30));
  return;
}


/* EffectObject::EffectObject() */

void __thiscall EffectObject::EffectObject(EffectObject *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0675fe70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn const*
   EffectObject::GetProps<EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn>() const */

EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn *
EffectObject::GetProps<EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn>(void)

{
  RtObject *this;
  EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_DinoTreadProps_For_Artifact_Dinosaur_horn_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrassProps const* EffectObject::GetProps<EffectObject_GardenerGrassProps>()
   const */

EffectObject_GardenerGrassProps * EffectObject::GetProps<EffectObject_GardenerGrassProps>(void)

{
  RtObject *this;
  EffectObject_GardenerGrassProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_GardenerGrassProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject::StaticClassInit() */

void EffectObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd80a0,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject::StaticGetClass() */

long * EffectObject::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject::GetClass() const */

long * EffectObject::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject::CalcGridPosition() const */

void EffectObject::CalcGridPosition(void)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *in_x0;
  undefined4 *puVar3;
  Point *in_x8;
  float fVar4;
  float fVar5;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined4 *)StandaloneEffect::GetScreenSpaceOrigin(in_x0);
  fVar4 = (float)FUN_03cd784c(*puVar3);
  fVar5 = (float)FUN_03cd784c(puVar3[1]);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar4,fVar5);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(local_10);
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(local_c);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject::StaticNew() */

EffectObject * EffectObject::StaticNew(void)

{
  EffectObject *this;
  
  this = ::operator_new(0x118);
  EffectObject(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject::initializeAnimRig() */

void __thiscall EffectObject::initializeAnimRig(EffectObject *this)

{
  char cVar1;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::string((string *)aRStack_10,"PopAnimRig");
  Effect_PopAnim::CreatePopAnimRig
            ((Effect_PopAnim *)this,(string *)(pRVar2 + 0x10),(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  cVar1 = FUN_0547419c(pRVar2 + 0x28);
  if (cVar1 == '\0') {
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,pRVar2 + 0x28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject::EffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int, int) */

void __thiscall
EffectObject::EffectObjectInitialize(EffectObject *this,RtWeakPtr *param_2,uint param_3,int param_4)

{
  ResourceInfo *pRVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int local_20;
  int local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),param_2);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)param_3,param_4,(int)lVar2);
  GetProps();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  fVar4 = *(float *)(pRVar1 + 0x18);
  fVar6 = *(float *)(pRVar1 + 0x1c);
  fVar5 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar5 = (float)Board::calculateRoofOffsetZ((float)(int)((float)local_20 - fVar4));
  }
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)((float)local_20 - fVar4),
             (float)(int)((float)local_1c - fVar6),fVar5);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  initializeAnimRig(this);
  pcVar3 = *(code **)(*(long *)this + 0xd0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)param_2);
  (*pcVar3)(this,aRStack_18,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTimeProps const*
   EffectObject::GetProps<EffectObject_DamageOverTimeProps>() const */

EffectObject_DamageOverTimeProps * EffectObject::GetProps<EffectObject_DamageOverTimeProps>(void)

{
  RtObject *this;
  EffectObject_DamageOverTimeProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_DamageOverTimeProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StretchedScrollingImageProps const*
   EffectObject::GetProps<EffectObject_StretchedScrollingImageProps>() const */

EffectObject_StretchedScrollingImageProps *
EffectObject::GetProps<EffectObject_StretchedScrollingImageProps>(void)

{
  RtObject *this;
  EffectObject_StretchedScrollingImageProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_StretchedScrollingImageProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DinoTreadProps const* EffectObject::GetProps<EffectObject_DinoTreadProps>() const */

EffectObject_DinoTreadProps * EffectObject::GetProps<EffectObject_DinoTreadProps>(void)

{
  RtObject *this;
  EffectObject_DinoTreadProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_DinoTreadProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoShadowProps const* EffectObject::GetProps<Effect_DinoShadowProps>() const */

Effect_DinoShadowProps * EffectObject::GetProps<Effect_DinoShadowProps>(void)

{
  RtObject *this;
  Effect_DinoShadowProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<Effect_DinoShadowProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfoodProps const*
   EffectObject::GetProps<EffectObject_StrawburstPlantfoodProps>() const */

EffectObject_StrawburstPlantfoodProps *
EffectObject::GetProps<EffectObject_StrawburstPlantfoodProps>(void)

{
  RtObject *this;
  EffectObject_StrawburstPlantfoodProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_StrawburstPlantfoodProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_BurrowAttackProps const* EffectObject::GetProps<EffectObject_BurrowAttackProps>()
   const */

EffectObject_BurrowAttackProps * EffectObject::GetProps<EffectObject_BurrowAttackProps>(void)

{
  RtObject *this;
  EffectObject_BurrowAttackProps *pEVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProps();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_BurrowAttackProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return pEVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

