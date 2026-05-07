// Class: FlyingImpEgg


/* FlyingImpEgg::onDestroy() */

void __thiscall FlyingImpEgg::onDestroy(FlyingImpEgg *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xa8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingImpEgg::StaticClassInit() */

void FlyingImpEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlyingImpEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_03e86490,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlyingImpEgg::StaticGetClass() */

long * FlyingImpEgg::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"FlyingImpEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlyingImpEgg::GetClass() const */

long * FlyingImpEgg::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"FlyingImpEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlyingImpEgg::FlyingImpEgg() */

void __thiscall FlyingImpEgg::FlyingImpEgg(FlyingImpEgg *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678f280;
  *(undefined ***)(this + 0x10) = &PTR__FlyingImpEgg_0678f468;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  Sexy::Point::Point((Point *)(this + 0xb0));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0xb8));
  return;
}


/* FlyingImpEgg::StaticNew() */

FlyingImpEgg * FlyingImpEgg::StaticNew(void)

{
  FlyingImpEgg *this;
  
  this = ::operator_new(0xe8);
  FlyingImpEgg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingImpEgg::onDrawShadow(Sexy::Graphics*) */

void __thiscall FlyingImpEgg::onDrawShadow(FlyingImpEgg *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)FUN_03e861d8(*puVar3);
  fVar6 = (float)FUN_03e861d8(puVar3[1]);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar6;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar5;
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfef0);
  this_00 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfef0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfef0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage(param_1,pIVar4,-(iVar1 / 2),-(iVar2 / 2));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlyingImpEgg::~FlyingImpEgg() */

void __thiscall FlyingImpEgg::~FlyingImpEgg(FlyingImpEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_0678f280;
  *(undefined ***)(this + 0x10) = &PTR__FlyingImpEgg_0678f468;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to FlyingImpEgg::~FlyingImpEgg() */

void __thiscall FlyingImpEgg::~FlyingImpEgg(FlyingImpEgg *this)

{
  ~FlyingImpEgg(this + -0x10);
  return;
}


/* FlyingImpEgg::~FlyingImpEgg() */

void __thiscall FlyingImpEgg::~FlyingImpEgg(FlyingImpEgg *this)

{
  ~FlyingImpEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FlyingImpEgg::~FlyingImpEgg() */

void __thiscall FlyingImpEgg::~FlyingImpEgg(FlyingImpEgg *this)

{
  ~FlyingImpEgg(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingImpEgg::onHitGround() */

void __thiscall FlyingImpEgg::onHitGround(FlyingImpEgg *this)

{
  string *psVar1;
  ZombieFutureImp *this_00;
  Board *pBVar2;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_20,"dark_imp_dragon");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Board::AddZombie(pBVar2,aRStack_18,0,1,0,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  BoardTransforms::GridToBoardSpace((Point *)(this + 0xb0));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_20,(float)local_1c,0.0);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,aRStack_18);
  ZombieFutureImp::SetIsFallingFromSpawn(this_00,true);
  ZombieImp::SetGetsUpFromLanding((ZombieImp *)this_00,true);
  ZombieVan::prepareSpawn((ZombieVan *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingImpEgg::StartEffect(Sexy::SexyVector3 const&, Sexy::Point, float, float) */

void __thiscall
FlyingImpEgg::StartEffect
          (float param_1_00,undefined4 param_2,FlyingImpEgg *this,float *param_1,undefined8 *param_5
          )

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  float fVar4;
  undefined4 local_44 [3];
  int local_38;
  int local_34;
  undefined4 local_30 [2];
  Vec3 aVStack_28 [4];
  undefined1 auStack_24 [12];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CurveSequenceCollection<float> *)(this + 0xb8);
  *(undefined8 *)(this + 0xb0) = *param_5;
  local_44[0] = param_2;
  BoardTransforms::GridToBoardSpace((Point *)(this + 0xb0));
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_38,(float)local_34,0.0);
  CurveSequenceCollection<float>::Clear(this_00);
  std::string::string(asStack_18,"x");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,asStack_18);
  fVar4 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar4,param_1);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"x");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,asStack_18);
  FUN_03e86890(param_1_00,*param_1,uVar2,aVStack_28,1);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"y");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,asStack_18);
  fVar4 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar4,param_1 + 1);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"y");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,asStack_18);
  FUN_03e86890(param_1_00,param_1[1],uVar2,auStack_24,1);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"z");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,asStack_18);
  fVar4 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar4,param_1 + 2);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"z");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,asStack_18);
  FUN_03e86890(param_1_00 * 0.5,param_1[2],uVar2,local_44,3);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"z");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,asStack_18);
  local_30[0] = 0;
  FUN_03e86890(param_1_00 * 0.5,local_44[0],uVar2,(string *)local_30,2);
  std::string::~string(asStack_18);
  nop();
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)local_30,"POPANIM_ZOMBIE_ZOMBIE_DARK_IMP_DRAGON");
  GetPAMByName((string *)local_30);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string((string *)local_30);
  nop();
  std::string::string(asStack_18,"drop");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  DVec3::DVec3((DVec3 *)asStack_18);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_01,(RealObject *)this,(SexyVector3 *)asStack_18,1);
  Effect_PopAnim::SetCentered(this_01,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingImpEgg::onUpdate() */

void __thiscall FlyingImpEgg::onUpdate(FlyingImpEgg *this)

{
  CurveSequenceCollection<float> *this_00;
  char cVar1;
  CurveSequence<float> *pCVar2;
  SexyVector3 *pSVar3;
  Effect_PopAnim *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  FastCurve aFStack_48 [8];
  string asStack_40 [8];
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CurveSequenceCollection<float> *)(this + 0xb8);
  std::string::string((string *)&local_18,"x");
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,(string *)&local_18);
  fVar4 = (float)PVZ_T();
  cVar1 = CurveSequence<float>::IsTimeInSequence(pCVar2,fVar4);
  std::string::~string((string *)&local_18);
  nop();
  if (cVar1 == '\0') {
    onHitGround(this);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    std::string::string(asStack_40,"x");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar4 = (float)PVZ_T();
    fVar4 = (float)CurveSequence<float>::operator[](pCVar2,fVar4);
    std::string::string((string *)&local_28,"y");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar5 = (float)PVZ_T();
    fVar5 = (float)CurveSequence<float>::operator[](pCVar2,fVar5);
    std::string::string((string *)&local_18,"z");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar6 = (float)PVZ_T();
    fVar6 = (float)CurveSequence<float>::operator[](pCVar2,fVar6);
    EATextSquish::Vec3::Vec3(aVStack_38,fVar4,fVar5,fVar6);
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string(asStack_40);
    nop();
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_28 = Sexy::SexyVector3::operator-((SexyVector3 *)aVStack_38,pSVar3);
    local_24 = fVar5;
    local_20 = fVar6;
    (**(code **)(*(long *)this + 0x78))(this,aVStack_38);
    local_18 = (float)Sexy::SexyVector3::Normalize((SexyVector3 *)&local_28);
    local_14 = fVar5;
    local_10 = fVar6;
    Sexy::FastCurve::SetOutRange(aFStack_48,local_18,fVar6);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_40,0.0,-1.0);
    fVar4 = (float)Sexy::SexyVector2::AngleBetween
                             ((SexyVector2 *)asStack_40,(SexyVector2 *)aFStack_48);
    this_01 = (Effect_PopAnim *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    Effect_PopAnim::SetOrientation(this_01,-fVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

