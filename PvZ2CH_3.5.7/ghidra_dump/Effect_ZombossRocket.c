// Class: Effect_ZombossRocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossRocket::StaticClassInit() */

void Effect_ZombossRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ZombossRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd5630,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombossRocket::StaticGetClass() */

long * Effect_ZombossRocket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombossRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombossRocket::GetClass() const */

long * Effect_ZombossRocket::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombossRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombossRocket::Effect_ZombossRocket() */

void __thiscall Effect_ZombossRocket::Effect_ZombossRocket(Effect_ZombossRocket *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675fa70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  Sexy::Point::Point((Point *)(this + 0xb8));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0xc0));
  this[0xf0] = (Effect_ZombossRocket)0x0;
  return;
}


/* Effect_ZombossRocket::StaticNew() */

Effect_ZombossRocket * Effect_ZombossRocket::StaticNew(void)

{
  Effect_ZombossRocket *this;
  
  this = ::operator_new(0xf8);
  Effect_ZombossRocket(this);
  return this;
}


/* Effect_ZombossRocket::~Effect_ZombossRocket() */

void __thiscall Effect_ZombossRocket::~Effect_ZombossRocket(Effect_ZombossRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fa70;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_ZombossRocket::~Effect_ZombossRocket() */

void __thiscall Effect_ZombossRocket::~Effect_ZombossRocket(Effect_ZombossRocket *this)

{
  ~Effect_ZombossRocket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossRocket::buildCurves(float, float) */

void __thiscall
Effect_ZombossRocket::buildCurves(Effect_ZombossRocket *this,float param_1,float param_2)

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *this_01;
  undefined8 uVar1;
  float fVar2;
  float local_c;
  long local_8;
  
  this_00 = (CurveSequenceCollection<float> *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  CurveSequenceCollection<float>::Clear(this_00);
  this_01 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
  fVar2 = (float)PVZ_T();
  local_c = param_2 * param_1;
  CurveSequence<float>::StartSequence(this_01,fVar2,&local_c);
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)this_00);
  local_c = 0.0;
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_1,uVar1,&local_c,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossRocket::updateFromCurves() */

void __thiscall Effect_ZombossRocket::updateFromCurves(Effect_ZombossRocket *this)

{
  char cVar1;
  CurveSequence<float> *this_00;
  StandaloneEffect *this_01;
  ZombossRocket *this_02;
  long *plVar2;
  float fVar3;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 0xc0));
  fVar3 = (float)PVZ_T();
  fVar3 = (float)CurveSequence<float>::operator[](this_00,fVar3);
  if (fVar3 == 0.0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa0));
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
    }
    else {
      this_02 = (ZombossRocket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
      ZombossRocket::OnRocketHitGround(this_02);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
    }
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      (**(code **)(*plVar2 + 0x1d8))();
    }
  }
  else {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xb0));
    if (cVar1 != '\0') {
      this_01 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      EATextSquish::Vec3::Vec3
                (aVStack_18,(float)*(int *)(this + 0xb8),(float)*(int *)(this + 0xbc),fVar3);
      StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aVStack_18,-1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossRocket::InitializeRocket(CannonRocket*, Sexy::Point const&, std::string const&,
   std::string const&, float, float) */

void __thiscall
Effect_ZombossRocket::InitializeRocket
          (Effect_ZombossRocket *this,CannonRocket *param_1,Point *param_2,string *param_3,
          string *param_4,float param_5,float param_6)

{
  long lVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)param_2;
  this[0xf0] = (Effect_ZombossRocket)0x0;
  lVar1 = FUN_05474178(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_05474178(param_4);
    if (lVar1 != 0) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      Effect_PopAnim::SetCentered(this_00,true);
      GetPAMByName(param_3);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(this_00,param_4,0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  buildCurves(this,param_5,param_6);
  updateFromCurves(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombossRocket::InitializeRocket(ZombossRocket*, Sexy::Point const&, std::string const&,
   std::string const&, float, float) */

void __thiscall
Effect_ZombossRocket::InitializeRocket
          (Effect_ZombossRocket *this,ZombossRocket *param_1,Point *param_2,string *param_3,
          string *param_4,float param_5,float param_6)

{
  long lVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  Point *extraout_x1;
  TPoint aTStack_28 [8];
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa0),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this[0xf0] = (Effect_ZombossRocket)0x1;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)param_2,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_20,aTStack_28);
  *(undefined8 *)(this + 0xb8) = local_20;
  lVar1 = FUN_05474178(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_05474178(param_4);
    if (lVar1 != 0) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      Effect_PopAnim::SetCentered(this_00,true);
      GetPAMByName(param_3);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(this_00,param_4,0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  buildCurves(this,param_5,param_6);
  updateFromCurves(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombossRocket::onUpdate() */

void __thiscall Effect_ZombossRocket::onUpdate(Effect_ZombossRocket *this)

{
  char cVar1;
  
  if (this[0xf0] == (Effect_ZombossRocket)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa8));
  }
  else {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xa0));
  }
  if (cVar1 != '\0') {
    updateFromCurves(this);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

