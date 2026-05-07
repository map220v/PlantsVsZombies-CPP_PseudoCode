// Class: CBBigRocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::StaticClassInit() */

void CBBigRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"CBBigRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_0414a87c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBBigRocket::StaticGetClass() */

long * CBBigRocket::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CBBigRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBBigRocket::GetClass() const */

long * CBBigRocket::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CBBigRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBBigRocket::SetPlantfood(bool) */

void __thiscall CBBigRocket::SetPlantfood(CBBigRocket *this,bool param_1)

{
  this[0x1a6] = (CBBigRocket)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::SetOwner(Sexy::RtWeakPtr<Plant>) */

void __thiscall CBBigRocket::SetOwner(CBBigRocket *this,RtWeakPtr *param_2)

{
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  if ((pRVar1 == (ResourceInfo *)0x0) ||
     (pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2),
     pRVar1 == (ResourceInfo *)0x0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Plant::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d8),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::PlayEnd() */

void __thiscall CBBigRocket::PlayEnd(CBBigRocket *this)

{
  PopAnimRig *pPVar1;
  long lVar2;
  undefined8 *puVar3;
  ResourceInfo *pRVar4;
  GridItemVase *this_00;
  StandaloneEffect *this_01;
  SexyVector3 *pSVar5;
  Effect_PopAnim *pEVar6;
  undefined8 uVar7;
  Board *pBVar10;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_58,"animation3");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DropCore);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<CBBigRocket,void(CBBigRocket::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (this[0x1a5] == (CBBigRocket)0x0) {
    Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    this_01 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    StandaloneEffect::SetBoardSpaceOrigin(this_01,pSVar5,899999);
    pEVar6 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"POPANIM_EFFECTS_COBCANNON_CORE");
    GetPAMByName(asStack_58);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
    Effect_PopAnim::CreatePopAnimRig(pEVar6,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    pEVar6 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Effect_PopAnim::SetCentered(pEVar6,true);
    pEVar6 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string((string *)aRStack_50,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar6,aRStack_50,0);
    std::string::~string((string *)aRStack_50);
    nop();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),(RtWeakPtr *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
    lVar2 = FUN_0414582c(*(undefined8 *)(lVar2 + 0x70),1);
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar9 = *(float *)(puVar3 + 1);
    fVar8 = *(float *)((long)puVar3 + 4);
                    /* WARNING: Load size is inaccurate */
    pBVar10._0_4_ = *puVar3;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(lVar2 + 8));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1c0));
    lVar2 = Board::AddProjectile(pBVar10._0_4_,fVar8 - fVar9,0,uVar7,aRStack_50,pRVar4,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    if (lVar2 != 0) {
      Sexy::SexyMath::DegToRad(-90.0);
      FUN_0414575c(lVar2 + 0xc4);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d0),(RtWeakPtrBase *)aRStack_50)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
      nop();
      if (this_00 != (GridItemVase *)0x0) {
        FUN_04145970(this_00 + 0x24);
        GridItemVase::SetAllowPreGameplayInteraction(this_00,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBBigRocket::CBBigRocket() */

void __thiscall CBBigRocket::CBBigRocket(CBBigRocket *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (CBBigRocket)0x0;
  this[0x1a6] = (CBBigRocket)0x0;
  *(undefined ***)this = &PTR_GetClass_067ef8b0;
  *(undefined ***)(this + 0x10) = &PTR__CBBigRocket_067efaa0;
  this[0x1a7] = (CBBigRocket)0x0;
  this[0x1a8] = (CBBigRocket)0x0;
  this[0x1a9] = (CBBigRocket)0x0;
  this[0x1aa] = (CBBigRocket)0x0;
  this[0x1ab] = (CBBigRocket)0x0;
  this[0x1ac] = (CBBigRocket)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e0));
  return;
}


/* CBBigRocket::StaticNew() */

CBBigRocket * CBBigRocket::StaticNew(void)

{
  CBBigRocket *this;
  
  this = ::operator_new(0x1f8);
  CBBigRocket(this);
  return this;
}


/* CBBigRocket::~CBBigRocket() */

void __thiscall CBBigRocket::~CBBigRocket(CBBigRocket *this)

{
  char *pcVar1;
  
  *(undefined ***)this = &PTR_GetClass_067ef8b0;
  *(undefined ***)(this + 0x10) = &PTR__CBBigRocket_067efaa0;
  if ((this[0x1a6] != (CBBigRocket)0x0) && (this[0x1a9] == (CBBigRocket)0x0)) {
    this[0x1a9] = (CBBigRocket)0x1;
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Plant_CobCannon_PlantFood_End");
  }
  std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CBBigRocket::~CBBigRocket() */

void __thiscall CBBigRocket::~CBBigRocket(CBBigRocket *this)

{
  ~CBBigRocket(this + -0x10);
  return;
}


/* CBBigRocket::~CBBigRocket() */

void __thiscall CBBigRocket::~CBBigRocket(CBBigRocket *this)

{
  ~CBBigRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CBBigRocket::~CBBigRocket() */

void __thiscall CBBigRocket::~CBBigRocket(CBBigRocket *this)

{
  ~CBBigRocket(this + -0x10);
  return;
}


/* CBBigRocket::AddTargets(std::vector<BulletTarget, std::allocator<BulletTarget> >) */

void __thiscall CBBigRocket::AddTargets(CBBigRocket *this,vector *param_2)

{
  std::vector<BulletTarget,std::allocator<BulletTarget>>::operator=
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x1e0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::DropCore(std::string const&) */

void CBBigRocket::DropCore(string *param_1)

{
  CBMiniRocket *this;
  PopAnimRig *pPVar1;
  long extraout_x0;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 local_48;
  float local_44;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1a5] == (string)0x0) {
    Projectile::SetShadow((Projectile *)param_1,false);
    uVar3 = PVZ_T();
    param_1[0x1aa] = (string)0x1;
    *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1d0));
    nop();
    if (this != (CBMiniRocket *)0x0) {
      pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)param_1);
      std::string::string((string *)&local_48,"animation1");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar1,(string *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
      CBMiniRocket::FindNewTarget(this);
      PineconePlantfoodProjectile::SetTargetLocked((PineconePlantfoodProjectile *)this,true);
      fVar2 = (float)PVZ_T();
      fVar4 = _FUN_0414d9cc;
      PineconePlantfoodProjectile::SetKeepDown
                ((PineconePlantfoodProjectile *)this,fVar2 + _FUN_0414d9cc);
      Projectile::GetProps((Projectile *)this);
      nop();
      local_48 = ProjectileHelpers::RandomizeVectorFromRange((vector *)(extraout_x0 + 0x78));
      local_44 = fVar4;
      Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_48);
      local_48 = ProjectileHelpers::RandomizeVectorFromRange((vector *)(extraout_x0 + 0x90));
      local_44 = fVar4;
      Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)&local_48);
    }
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::DoShot(std::vector<BulletTarget, std::allocator<BulletTarget> >&, int) */

void __thiscall CBBigRocket::DoShot(CBBigRocket *this,vector *param_1,int param_2)

{
  RtWeakPtr *this_00;
  char cVar1;
  ProbabilityBucket *pPVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  SexyVector3 *this_01;
  CBBullet *extraout_x0;
  RealObject *this_02;
  undefined8 uVar5;
  Board *pBVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_40;
  ProbabilityBucket aPStack_38 [16];
  undefined8 local_28 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProbabilityBucket *)FUN_04145820(*(undefined8 *)param_1,(long)param_2);
  this_00 = (RtWeakPtr *)(this + 0x1c0);
  ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket(aPStack_38,pPVar2);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_28[0] = __gnu_cxx::
                __normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                ::operator+((__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                             *)&local_40,(long)param_2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)local_28);
  std::vector<BulletTarget,std::allocator<BulletTarget>>::erase
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)param_1,
             CONCAT44(uStack_14,local_18));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  lVar3 = FUN_0414582c(*(undefined8 *)(lVar3 + 0x70),3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  if ((pRVar4 != (ResourceInfo *)0x0) &&
     (cVar1 = FUN_0547419c((string *)(lVar3 + 0x50)), cVar1 == '\0')) {
    this_02 = (RealObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    RealObject::PlayPositionalSound(this_02,(string *)(lVar3 + 0x50),0.0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  uVar7 = (ulong)(uint)*(float *)(lVar3 + 0x6c);
  uVar8 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)local_28,*(float *)(lVar3 + 0x68),*(float *)(lVar3 + 0x6c),0.0);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  pBVar6 = (Board *)Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)local_28);
  local_18 = SUB84(pBVar6,0);
  uStack_14 = (undefined4)uVar7;
  local_10 = (undefined4)uVar8;
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(lVar3 + 8));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  lVar3 = Board::AddProjectile
                    (pBVar6,uVar7,uVar8,uVar5,
                     (__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                      *)&local_40,pRVar4,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  if (lVar3 != 0) {
    FUN_04145970(lVar3 + 0x24);
    nop();
    if (extraout_x0 != (CBBullet *)0x0) {
      Sexy::Point::Point((Point *)&local_40,(TPoint *)aPStack_38);
      CBBullet::SetTargetPos
                (extraout_x0,
                 (__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                  *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBBigRocket::DoOneShot() */

void __thiscall CBBigRocket::DoOneShot(CBBigRocket *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  uVar5 = *(undefined8 *)(this + 0x1e0);
  lVar4 = 0;
  do {
    iVar1 = FUN_041457f0(uVar5,*(undefined8 *)(this + 0x1e8));
    iVar3 = (int)lVar4;
    if (iVar1 <= iVar3) {
      return;
    }
    fVar6 = (float)PVZ_T();
    uVar5 = *(undefined8 *)(this + 0x1e0);
    lVar2 = FUN_04145820(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (fVar6 < *(float *)(lVar2 + 8));
  DoShot(this,(vector *)(this + 0x1e0),iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBBigRocket::moveThroughTime(float) */

void __thiscall CBBigRocket::moveThroughTime(CBBigRocket *this,float param_1)

{
  CBBigRocket CVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *pPVar4;
  char *pcVar5;
  undefined8 *puVar6;
  StandaloneEffect *pSVar7;
  Effect_PopAnim *pEVar8;
  ResourceInfo *pRVar9;
  UIWidget *this_00;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  float local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a7] == (CBBigRocket)0x0) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    if (*(float *)(this + 0x1b0) < *(float *)(lVar3 + 8)) {
      Projectile::moveThroughTime((Projectile *)this,param_1);
    }
    else {
      this[0x1a7] = (CBBigRocket)0x1;
      pPVar4 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      std::string::string((string *)&local_48,"animation2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar4,(string *)&local_48,0,aDStack_38);
      std::string::~string((string *)&local_48);
      nop();
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_Plant_CobCannon_PlantFood");
    }
LAB_04150098:
    if (this[0x1aa] == (CBBigRocket)0x0) goto LAB_04150118;
LAB_041500a0:
    if (this[0x1ab] == (CBBigRocket)0x0) {
      fVar10 = *(float *)(this + 0x1b4);
      fVar11 = (float)PVZ_T();
      if (fVar11 <= fVar10 + 0.2) {
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        local_48 = *puVar6;
        local_40 = *(float *)(puVar6 + 1);
        fVar10 = (float)PVZ_T();
        fVar11 = (0.2 - (fVar10 - *(float *)(this + 0x1b4))) * 5.0;
        local_40 = *(float *)(this + 0x1b0) * fVar11 * fVar11 + 70.0;
        if ((local_40 <= 70.0) || (0.1999 < fVar10 - *(float *)(this + 0x1b4))) {
          this[0x1ab] = (CBBigRocket)0x1;
          local_40 = 80.0;
        }
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c8));
        if (bVar2) {
          pSVar7 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
          StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_48,899999);
        }
        goto LAB_04150118;
      }
      this[0x1ab] = (CBBigRocket)0x1;
      CVar1 = this[0x1ac];
      goto joined_r0x0415011c;
    }
    if (this[0x1ac] == (CBBigRocket)0x0) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_Plant_CobCannon_PlantFood_Land");
      puVar6 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      local_48 = *puVar6;
      local_40 = 70.0;
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)&local_48,899999);
      pEVar8 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      std::string::string(asStack_58,"POPANIM_EFFECTS_COBCANNON_CORE");
      GetPAMByName(asStack_58);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
      Effect_PopAnim::CreatePopAnimRig(pEVar8,(PopAnim *)pRVar9,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      pEVar8 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      Effect_PopAnim::SetCentered(pEVar8,true);
      pEVar8 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      std::string::string((string *)aRStack_50,"animation1");
      Effect_PopAnim::PlaySingleAnimation(pEVar8,aRStack_50,0);
      std::string::~string((string *)aRStack_50);
      nop();
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
      std::string::string((string *)aRStack_50,"animation1");
      fVar10 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar4,(string *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      nop();
      fVar11 = (float)PVZ_T();
      this[0x1aa] = (CBBigRocket)0x0;
      this[0x1ac] = (CBBigRocket)0x1;
      *(float *)(this + 0x1b8) = fVar11 + fVar10;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      CVar1 = this[0x1ac];
      goto joined_r0x0415011c;
    }
  }
  else {
    if (this[0x1a8] != (CBBigRocket)0x0) {
      if (this[0x1a9] == (CBBigRocket)0x0) {
        pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar5,"Play_Plant_CobCannon_PlantFood_End");
        PlayEnd(this);
        this[0x1a9] = (CBBigRocket)0x1;
      }
      goto LAB_04150098;
    }
    lVar3 = FUN_041457f0(*(undefined8 *)(this + 0x1e0),*(undefined8 *)(this + 0x1e8));
    if (lVar3 != 0) {
      DoOneShot(this);
      goto LAB_04150098;
    }
    this[0x1a8] = (CBBigRocket)0x1;
    if (this[0x1aa] != (CBBigRocket)0x0) goto LAB_041500a0;
LAB_04150118:
    CVar1 = this[0x1ac];
joined_r0x0415011c:
    if (CVar1 == (CBBigRocket)0x0) goto LAB_041500c0;
  }
  fVar11 = *(float *)(this + 0x1b8);
  fVar10 = (float)PVZ_T();
  if (fVar11 <= fVar10) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
LAB_041500c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

