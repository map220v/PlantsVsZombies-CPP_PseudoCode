// Class: EffectObject_StretchedScrollingImage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StretchedScrollingImage::StaticClassInit() */

void EffectObject_StretchedScrollingImage::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_StretchedScrollingImage");
    (*pcVar2)(plVar1,asStack_10,FUN_03cdafe0,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StretchedScrollingImage::StaticGetClass() */

long * EffectObject_StretchedScrollingImage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StretchedScrollingImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StretchedScrollingImage::GetClass() const */

long * EffectObject_StretchedScrollingImage::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StretchedScrollingImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StretchedScrollingImage::EffectObject_StretchedScrollingImage() */

void __thiscall
EffectObject_StretchedScrollingImage::EffectObject_StretchedScrollingImage
          (EffectObject_StretchedScrollingImage *this)

{
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_067602f0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x118));
  return;
}


/* EffectObject_StretchedScrollingImage::StaticNew() */

EffectObject_StretchedScrollingImage * EffectObject_StretchedScrollingImage::StaticNew(void)

{
  EffectObject_StretchedScrollingImage *this;
  
  this = ::operator_new(0x148);
  EffectObject_StretchedScrollingImage(this);
  return this;
}


/* EffectObject_StretchedScrollingImage::~EffectObject_StretchedScrollingImage() */

void __thiscall
EffectObject_StretchedScrollingImage::~EffectObject_StretchedScrollingImage
          (EffectObject_StretchedScrollingImage *this)

{
  *(undefined ***)this = &PTR_GetClass_067602f0;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x118));
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_StretchedScrollingImage::~EffectObject_StretchedScrollingImage() */

void __thiscall
EffectObject_StretchedScrollingImage::~EffectObject_StretchedScrollingImage
          (EffectObject_StretchedScrollingImage *this)

{
  ~EffectObject_StretchedScrollingImage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StretchedScrollingImage::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType
   const>, int, int) */

void EffectObject_StretchedScrollingImage::onEffectObjectInitialize
               (StandaloneEffect *param_1,RtWeakPtrBase *param_2)

{
  string *psVar1;
  EffectObject_StretchedScrollingImageProps *pEVar2;
  CurveSequence<float> *pCVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  psVar1 = (string *)(param_1 + 0x118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar2 = EffectObject::GetProps<EffectObject_StretchedScrollingImageProps>();
  StandaloneEffect::SetKeepAlive(param_1,true);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pEVar2 + 0x30);
  (**(code **)(*(long *)param_1 + 0x80))(*(undefined4 *)(pEVar2 + 0x48),param_1);
  fVar7 = *(float *)(pEVar2 + 0x1c);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*(float *)(pEVar2 + 0x18),fVar7,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(param_1,(SexyVector3 *)aRStack_18,-1);
  fVar5 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1);
  fVar6 = (float)PVZ_T();
  local_24 = *(float *)(pEVar2 + 0x44) + *(float *)(pEVar2 + 0x18) + fVar5 * 0.5;
  local_20 = *(float *)(pEVar2 + 0x1c) - fVar7 * 0.5;
  local_28 = (*(float *)(pEVar2 + 0x18) - fVar5 * 0.5) - *(float *)(pEVar2 + 0x44);
  local_1c = local_20;
  std::string::string((string *)aRStack_18,"x");
  pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  CurveSequence<float>::StartSequence(pCVar3,fVar6,&local_28);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"y");
  pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  CurveSequence<float>::StartSequence(pCVar3,fVar6,&local_20);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"x");
  uVar4 = CurveSequenceCollection<float>::operator[](psVar1);
  FUN_03cdb2e0(*(undefined4 *)(pEVar2 + 0x40),local_28,uVar4,&local_24);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"y");
  uVar4 = CurveSequenceCollection<float>::operator[](psVar1);
  FUN_03cdb2e0(*(undefined4 *)(pEVar2 + 0x40),local_20,uVar4,&local_1c);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

