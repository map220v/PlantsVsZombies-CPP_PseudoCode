// Class: FlyingFireball


/* FlyingFireball::SetSpawnsDragonImp(bool) */

void __thiscall FlyingFireball::SetSpawnsDragonImp(FlyingFireball *this,bool param_1)

{
  this[0xc4] = (FlyingFireball)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::getAnimName() const */

void __thiscall FlyingFireball::getAnimName(FlyingFireball *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBOSS_DARK_FIREBALL");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::getPlayAnim() const */

void __thiscall FlyingFireball::getPlayAnim(FlyingFireball *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"fall");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::StaticClassInit() */

void FlyingFireball::StaticClassInit(void)

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
    std::string::string(asStack_10,"FlyingFireball");
    (*pcVar2)(plVar1,asStack_10,FUN_03e852c8,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FlyingFireball::StaticGetClass() */

long * FlyingFireball::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FlyingFireball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlyingFireball::GetClass() const */

long * FlyingFireball::GetClass(void)

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
  (*pcVar3)(plVar1,"FlyingFireball",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FlyingFireball::createGridTile() */

void FlyingFireball::createGridTile(void)

{
  GameObject::Create<GridSquareCoveringFlame>();
  return;
}


/* FlyingFireball::FlyingFireball() */

void __thiscall FlyingFireball::FlyingFireball(FlyingFireball *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678ee20;
  *(undefined ***)(this + 0x10) = &PTR__FlyingFireball_0678f020;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  *(undefined4 *)(this + 0xb8) = 0;
  Sexy::Point::Point((Point *)(this + 0xbc));
  this[0xc4] = (FlyingFireball)0x0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 200));
  return;
}


/* FlyingFireball::StaticNew() */

FlyingFireball * FlyingFireball::StaticNew(void)

{
  FlyingFireball *this;
  
  this = ::operator_new(0xf8);
  FlyingFireball(this);
  return this;
}


/* FlyingFireball::~FlyingFireball() */

void __thiscall FlyingFireball::~FlyingFireball(FlyingFireball *this)

{
  *(undefined ***)this = &PTR_GetClass_0678ee20;
  *(undefined ***)(this + 0x10) = &PTR__FlyingFireball_0678f020;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to FlyingFireball::~FlyingFireball() */

void __thiscall FlyingFireball::~FlyingFireball(FlyingFireball *this)

{
  ~FlyingFireball(this + -0x10);
  return;
}


/* FlyingFireball::~FlyingFireball() */

void __thiscall FlyingFireball::~FlyingFireball(FlyingFireball *this)

{
  ~FlyingFireball(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FlyingFireball::~FlyingFireball() */

void __thiscall FlyingFireball::~FlyingFireball(FlyingFireball *this)

{
  ~FlyingFireball(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::onHitGround() */

void __thiscall FlyingFireball::onHitGround(FlyingFireball *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  RtObject *pRVar4;
  GridSquareCoveringFlame *pGVar5;
  ResourceInfo *pRVar6;
  string *psVar7;
  ZombieFutureImp *this_01;
  Zombie *this_02;
  Board *pBVar8;
  GridSquareCoveringFlame *pGVar9;
  int local_20;
  int local_1c;
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
  if ((lVar3 == 0) || (cVar1 = PlantGroup::HasInvinciblePlant(), cVar1 == '\0')) {
    this_00 = (RtWeakPtr *)(this + 0xb0);
    pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x1e8))(this);
    pGVar5 = Sexy::RtObject::Cast<GridSquareCoveringFlame>(pRVar4);
    Sexy::Point::Point(aPStack_18,(TPoint *)(this + 0xbc));
                    /* WARNING: Load size is inaccurate */
    pGVar9._0_4_ = *(GridSquareCoveringFlame **)(this + 0xb8);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    GridSquareCoveringFlame::StartFlameImpactEffect(pGVar9._0_4_,pGVar5,aPStack_18,pRVar6);
    if (this[0xc4] != (FlyingFireball)0x0) {
      uVar2 = 0;
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar1 != '\0') {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        this_02 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        if (this_02 == (Zombie *)0x0) {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          uVar2 = FUN_03e84c98(*(undefined4 *)(lVar3 + 0x50));
        }
        else {
          uVar2 = Zombie::GetSummonZombieLevel(this_02);
        }
      }
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
      Board::AddZombie(pBVar8,aPStack_18,0xfffffffb,uVar2,0,1);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
      BoardTransforms::GridToBoardSpace((Point *)(this + 0xbc));
      EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_20,(float)local_1c,0.0);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,aPStack_18);
      ZombieFutureImp::SetIsFallingFromSpawn(this_01,true);
      ZombieImp::SetGetsUpFromLanding((ZombieImp *)this_01,true);
      ZombieVan::prepareSpawn((ZombieVan *)this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::StartEffect(Sexy::Point, float, float, float, BoardEntity*) */

void __thiscall
FlyingFireball::StartEffect
          (float param_1,float param_2,undefined4 param_3,FlyingFireball *this,undefined8 *param_5,
          long param_6)

{
  CurveSequenceCollection<float> *this_00;
  CurveSequence<float> *pCVar1;
  undefined8 uVar2;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  Point *extraout_x1;
  Point *pPVar4;
  Point *extraout_x1_00;
  float fVar5;
  float local_54 [3];
  int local_48;
  int local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  float local_34 [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xbc) = *param_5;
  *(undefined4 *)(this + 0xb8) = param_3;
  local_54[0] = param_2;
  if (param_6 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pPVar4 = extraout_x1_00;
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    pPVar4 = extraout_x1;
  }
  this_00 = (CurveSequenceCollection<float> *)(this + 200);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xbc),pPVar4);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_48,(TPoint *)aRStack_28);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_38,(float)local_48,(float)local_44,0.0);
  CurveSequenceCollection<float>::Clear(this_00);
  std::string::string((string *)aRStack_28,"x");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28)
  ;
  fVar5 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar5,(float *)&local_38);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"x");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28);
  FUN_03e85918(param_1,local_38,uVar2,(Vec3 *)&local_38,1);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"y");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28)
  ;
  fVar5 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar5,local_34);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"y");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28);
  FUN_03e85918(param_1,local_34[0],uVar2,local_34,1);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"z");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28)
  ;
  fVar5 = (float)PVZ_T();
  CurveSequence<float>::StartSequence(pCVar1,fVar5,local_54);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"z");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28);
  local_40[0] = 0;
  FUN_03e85918(param_1,local_54[0],uVar2,(string *)local_40,2);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"shadow");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28)
  ;
  fVar5 = (float)PVZ_T();
  local_40[0] = 0;
  CurveSequence<float>::StartSequence(pCVar1,fVar5,(float *)local_40);
  std::string::~string((string *)aRStack_28);
  nop();
  std::string::string((string *)aRStack_28,"shadow");
  uVar2 = CurveSequenceCollection<float>::Get(this_00,(string *)aRStack_28);
  local_40[0] = 0x3f800000;
  CurveSequence<float>::AddCurve
            ((CurveSequence<float> *)(param_1 * 0.33333334),uVar2,(string *)local_40,4);
  std::string::~string((string *)aRStack_28);
  nop();
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)this + 0x1d8))((string *)local_40,this);
  GetPAMByName((string *)local_40);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string((string *)local_40);
  (**(code **)(*(long *)this + 0x1e0))((string *)aRStack_28,this);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,(string *)aRStack_28,2);
  std::string::~string((string *)aRStack_28);
  DVec3::DVec3((DVec3 *)aRStack_28);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_01,(RealObject *)this,(SexyVector3 *)aRStack_28,1);
  Effect_PopAnim::SetCentered(this_01,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::onDrawShadow(Sexy::Graphics*) */

void __thiscall FlyingFireball::onDrawShadow(FlyingFireball *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  CurveSequence<float> *this_00;
  Image *pIVar4;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)FUN_03e84ce0(*puVar3);
  fVar6 = (float)FUN_03e84ce0(puVar3[1]);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar6;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar5;
  std::string::string(asStack_18,"shadow");
  this_00 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 200));
  fVar5 = (float)PVZ_T();
  fVar5 = (float)CurveSequence<float>::operator[](this_00,fVar5);
  std::string::~string(asStack_18);
  nop();
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Insets::Insets((Insets *)asStack_18,0xff,0xff,0xff,(int)(fVar5 * 255.0));
  Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
  pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfe50);
  this_01 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfe50);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfe50);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_02);
  Sexy::Graphics::DrawImage(param_1,pIVar4,-(iVar1 / 2),-(iVar2 / 2));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FlyingFireball::onUpdate() */

void __thiscall FlyingFireball::onUpdate(FlyingFireball *this)

{
  CurveSequenceCollection<float> *this_00;
  char cVar1;
  CurveSequence<float> *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CurveSequenceCollection<float> *)(this + 200);
  std::string::string(asStack_18,"x");
  pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::Get(this_00,asStack_18);
  fVar3 = (float)PVZ_T();
  cVar1 = CurveSequence<float>::IsTimeInSequence(pCVar2,fVar3);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 == '\0') {
    onHitGround(this);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    std::string::string(asStack_30,"x");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar3 = (float)PVZ_T();
    fVar3 = (float)CurveSequence<float>::operator[](pCVar2,fVar3);
    std::string::string(asStack_28,"y");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar4 = (float)PVZ_T();
    fVar4 = (float)CurveSequence<float>::operator[](pCVar2,fVar4);
    std::string::string(asStack_20,"z");
    pCVar2 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)this_00);
    fVar5 = (float)PVZ_T();
    fVar5 = (float)CurveSequence<float>::operator[](pCVar2,fVar5);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar3,fVar4,fVar5);
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    (**(code **)(*(long *)this + 0x78))(this,asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

