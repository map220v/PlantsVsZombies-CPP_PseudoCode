// Class: Effect_ZombossCrosshair


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::StaticClassInit() */

void Effect_ZombossCrosshair::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ZombossCrosshair");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd49b4,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombossCrosshair::StaticGetClass() */

long * Effect_ZombossCrosshair::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombossCrosshair",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombossCrosshair::GetClass() const */

long * Effect_ZombossCrosshair::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombossCrosshair",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombossCrosshair::onDestroy() */

void __thiscall Effect_ZombossCrosshair::onDestroy(Effect_ZombossCrosshair *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* Effect_ZombossCrosshair::Effect_ZombossCrosshair() */

void __thiscall Effect_ZombossCrosshair::Effect_ZombossCrosshair(Effect_ZombossCrosshair *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f9a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0xa8));
  return;
}


/* Effect_ZombossCrosshair::StaticNew() */

Effect_ZombossCrosshair * Effect_ZombossCrosshair::StaticNew(void)

{
  Effect_ZombossCrosshair *this;
  
  this = ::operator_new(0xd8);
  Effect_ZombossCrosshair(this);
  return this;
}


/* Effect_ZombossCrosshair::~Effect_ZombossCrosshair() */

void __thiscall Effect_ZombossCrosshair::~Effect_ZombossCrosshair(Effect_ZombossCrosshair *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f9a0;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_ZombossCrosshair::~Effect_ZombossCrosshair() */

void __thiscall Effect_ZombossCrosshair::~Effect_ZombossCrosshair(Effect_ZombossCrosshair *this)

{
  ~Effect_ZombossCrosshair(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::updateFromCurves() */

void __thiscall Effect_ZombossCrosshair::updateFromCurves(Effect_ZombossCrosshair *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  CurveSequence<float> *pCVar2;
  long *plVar3;
  Effect_PopAnim *this_01;
  code *pcVar4;
  float fVar5;
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  psVar1 = (string *)(this + 0xa8);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color(aCStack_18,1);
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar5 = (float)PVZ_T();
  fVar5 = (float)CurveSequence<float>::operator[](pCVar2,fVar5);
  local_c = (int)(fVar5 * 255.0);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar3 + 0x78))(plVar3,aCStack_18);
  this_01 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar5 = (float)PVZ_T();
  fVar5 = (float)CurveSequence<float>::operator[](pCVar2,fVar5);
  fVar5 = (float)Sexy::SexyMath::DegToRad(fVar5);
  Effect_PopAnim::SetOrientation(this_01,fVar5);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pcVar4 = *(code **)(*plVar3 + 0x80);
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar5 = (float)PVZ_T();
  CurveSequence<float>::operator[](pCVar2,fVar5);
  (*pcVar4)(plVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombossCrosshair::onUpdate() */

void __thiscall Effect_ZombossCrosshair::onUpdate(Effect_ZombossCrosshair *this)

{
  CurveSequence<float> *this_00;
  float fVar1;
  
  updateFromCurves(this);
  this_00 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 0xa8));
  fVar1 = (float)PVZ_T();
  fVar1 = (float)CurveSequence<float>::operator[](this_00,fVar1);
  if (fVar1 != 1.0) {
    return;
  }
  StandaloneEffect::triggerCompletion((StandaloneEffect *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::buildIntroCurves(float, float, float) */

void __thiscall
Effect_ZombossCrosshair::buildIntroCurves
          (Effect_ZombossCrosshair *this,float param_1,float param_2,float param_3)

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  float fVar3;
  float local_18;
  float local_14 [2];
  float local_c;
  long local_8;
  
  this_00 = (CurveSequenceCollection<float> *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  local_18 = param_3;
  local_14[0] = param_2;
  CurveSequenceCollection<float>::Clear(this_00);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar3,local_14);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&local_c,3);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_18);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&local_c,3);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_1 * 0.312),uVar2,&local_c,4);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::InitializeCrosshair(Sexy::Point const&, std::string const&, std::string
   const&, float, bool) */

void __thiscall
Effect_ZombossCrosshair::InitializeCrosshair
          (Effect_ZombossCrosshair *this,Point *param_1,string *param_2,string *param_3,
          float param_4,bool param_5)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  Point *extraout_x1;
  undefined8 local_30;
  TPoint aTStack_28 [8];
  undefined8 local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this_00,true);
  GetPAMByName(param_2);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,param_3,0);
  Effect_PopAnim::SetCentered(this_00,true);
  Sexy::Point::Point((Point *)&local_30);
  if (param_5) {
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)param_1,extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_20,aTStack_28);
    local_30 = local_20;
  }
  else {
    local_30 = *(undefined8 *)param_1;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)(int)local_30,(float)local_30._4_4_,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_03cd47c0(this_00 + 0x1c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa0),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  buildIntroCurves(this,param_4,1.7,-360.0);
  updateFromCurves(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::buildOutroCurves(float, float, float) */

void __thiscall
Effect_ZombossCrosshair::buildOutroCurves
          (Effect_ZombossCrosshair *this,float param_1,float param_2,float param_3)

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  float fVar3;
  float local_18;
  float local_14 [2];
  float local_c;
  long local_8;
  
  this_00 = (CurveSequenceCollection<float> *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  local_18 = param_3;
  local_14[0] = param_2;
  CurveSequenceCollection<float>::Clear(this_00);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 1.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,local_14,2);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&local_18,2);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 1.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_1 * 0.312),uVar2,&local_c,1);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_1 * 0.68799996),uVar2,&local_c,4);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  local_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&local_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&local_c,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossCrosshair::StartOutro(float, float, float) */

void __thiscall
Effect_ZombossCrosshair::StartOutro
          (Effect_ZombossCrosshair *this,float param_1,float param_2,float param_3)

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  float fVar3;
  float fStack_18;
  float afStack_14 [2];
  float fStack_c;
  long lStack_8;
  
  this_00 = (CurveSequenceCollection<float> *)(this + 0xa8);
  lStack_8 = ___stack_chk_guard;
  fStack_18 = param_3;
  afStack_14[0] = param_2;
  CurveSequenceCollection<float>::Clear(this_00);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  fStack_c = 1.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&fStack_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,afStack_14,2);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  fStack_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&fStack_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&fStack_18,2);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  fStack_c = 1.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&fStack_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  fStack_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_1 * 0.312),uVar2,&fStack_c,1);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  fStack_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_1 * 0.68799996),uVar2,&fStack_c,4);
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar3 = (float)PVZ_T();
  fStack_c = 0.0;
  CurveSequence<float>::StartSequence(pCVar1,fVar3,&fStack_c);
  uVar2 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  fStack_c = 1.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar2,&fStack_c,0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

