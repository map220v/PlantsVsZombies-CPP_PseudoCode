// Class: GumPoisonSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumPoisonSubsystem::StaticClassInit() */

void GumPoisonSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PoisonGumInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0427e040,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GumPoisonSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0427ca54,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GumPoisonSubsystem::StaticGetClass() */

long * GumPoisonSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"GumPoisonSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GumPoisonSubsystem::GetClass() const */

long * GumPoisonSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"GumPoisonSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GumPoisonSubsystem::IsZombieAffectedByGas(Zombie*) */

undefined8 __thiscall
GumPoisonSubsystem::IsZombieAffectedByGas(GumPoisonSubsystem *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (Zombie *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar3 + 8),"west_bull");
    if ((((((!bVar1) && (bVar1 = std::operator==((string *)(lVar3 + 8),"treasureyeti"), !bVar1)) &&
          (bVar1 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar1)) &&
         ((bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1 &&
          (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)))) &&
        ((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
         ((cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0' &&
          (cVar2 = Zombie::HasCondition(param_1,0x27), cVar2 == '\0')))))) &&
       (cVar2 = (**(code **)(*(long *)param_1 + 0x400))(param_1), cVar2 != '\0')) {
      uVar4 = RealObject::IsOnTeam(param_1,2);
      return uVar4;
    }
  }
  return 0;
}


/* GumPoisonSubsystem::GumPoisonSubsystem() */

void __thiscall GumPoisonSubsystem::GumPoisonSubsystem(GumPoisonSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068232b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* GumPoisonSubsystem::StaticNew() */

GumPoisonSubsystem * GumPoisonSubsystem::StaticNew(void)

{
  GumPoisonSubsystem *this;
  
  this = ::operator_new(0x28);
  GumPoisonSubsystem(this);
  return this;
}


/* GumPoisonSubsystem::~GumPoisonSubsystem() */

void __thiscall GumPoisonSubsystem::~GumPoisonSubsystem(GumPoisonSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068232b0;
  std::vector<PoisonGumInfo,std::allocator<PoisonGumInfo>>::~vector
            ((vector<PoisonGumInfo,std::allocator<PoisonGumInfo>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* GumPoisonSubsystem::~GumPoisonSubsystem() */

void __thiscall GumPoisonSubsystem::~GumPoisonSubsystem(GumPoisonSubsystem *this)

{
  ~GumPoisonSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumPoisonSubsystem::SpawnGasCloudOverZombie(Zombie*, float) */

void __thiscall
GumPoisonSubsystem::SpawnGasCloudOverZombie(GumPoisonSubsystem *this,Zombie *param_1,float param_2)

{
  Effect_GumPoisonCloud *this_00;
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_GumPoisonCloud>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"POPANIM_EFFECTS_GUMNUT_POISON_CLOUD");
  GetPAMByName(asStack_18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Effect_GumPoisonCloud::StartCloud(this_00,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumPoisonSubsystem::StartGasEffect(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
GumPoisonSubsystem::StartGasEffect
          (Zombie *param_1,GumPoisonSubsystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Zombie *pZVar5;
  long lVar6;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar7;
  long *plVar8;
  PopAnimRig *this_01;
  BoardEntity *pBVar9;
  SharkMinion *pSVar10;
  Zombie *extraout_x0;
  ulong uVar11;
  RealObject *this_02;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  string asStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar2 = Zombie::GetFacing(pZVar5);
  if (iVar2 == 0) {
    fVar17 = -78.0;
  }
  else {
    fVar17 = 78.0;
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  fVar16 = *(float *)(lVar6 + 0x1c);
  fVar15 = (float)FUN_0427c660(*(undefined4 *)(lVar6 + 0x18),fVar16,*(undefined4 *)(lVar6 + 0x20));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_GUMNUT_POISON_ATTACK");
  GetPAMByName(asStack_30);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_30);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,fVar17 + fVar15,fVar16 - 125.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_20,-1);
  plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar2 = (**(code **)(*plVar8 + 0x170))();
  FUN_0427c5ac(this_00 + 0x1c,iVar2 + 1);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar2 = Zombie::GetFacing(pZVar5);
  PopAnimRig::SetMirrorX(this_01,iVar2 == 1);
  std::string::string((string *)&local_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_20,0);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar2 = Zombie::GetFacing(pZVar5);
  if (iVar2 == 0) {
    pBVar9 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar9);
    pSVar10 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar4 = SharkMinion::getRow(pSVar10);
    iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  }
  else {
    pSVar10 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar4 = SharkMinion::getRow(pSVar10);
    pBVar9 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    iVar2 = BoardEntity::CalcColumnPosition(pBVar9);
    iVar3 = 0;
  }
  Sexy::Insets::Insets((Insets *)asStack_30,iVar3,iVar4,iVar2,1);
  uVar12 = 0;
  EntityFinder::GetEntitiesInGridSquares((RtWeakPtr *)&local_20,2,asStack_30);
  uVar13 = local_20;
  lVar6 = FUN_0427c5d8(local_20,local_18);
  if (lVar6 != 0) {
    do {
      plVar8 = (long *)FUN_0427c5e4(uVar13,uVar12);
      lVar14 = *plVar8;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      if (lVar14 != lVar6) {
        FUN_0427c5e4(local_20,uVar12);
        nop();
        cVar1 = IsZombieAffectedByGas(this,extraout_x0);
        if (cVar1 != '\0') {
          Zombie::ApplyCondition(param_1._0_4_,0,extraout_x0,0x18,1);
          SpawnGasCloudOverZombie(this,extraout_x0,(float)param_1._0_4_);
        }
      }
      uVar13 = local_20;
      uVar12 = uVar12 + 1;
      uVar11 = FUN_0427c5d8(local_20,local_18);
    } while (uVar12 < uVar11);
  }
  this_02 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  std::string::string(asStack_30,"Play_ChiliBean_Fart");
  RealObject::PlayPositionalSound(this_02,asStack_30,0.0);
  std::string::~string(asStack_30);
  nop();
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumPoisonSubsystem::Update() */

void __thiscall GumPoisonSubsystem::Update(GumPoisonSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if ((!bVar1) ||
         (lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
         *(char *)(lVar2 + 0x18) != '\0')) break;
      fVar4 = (float)PVZ_T();
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(float *)(lVar2 + 8) < fVar4) {
        *(undefined1 *)(lVar2 + 0x18) = 1;
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
        lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
                    /* WARNING: Load size is inaccurate */
        StartGasEffect(*(GumPoisonSubsystem **)(lVar2 + 0xc),this,
                       (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        pRVar3 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (pRVar3[0x10] != (RtWeakPtrBase)0x0) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
          lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          FUN_0427d930((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10,*(undefined4 *)(lVar2 + 0x14));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        }
      }
      FUN_0427d3c8((__normal_iterator *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<PoisonGumInfo,std::allocator<PoisonGumInfo>>::erase
                         ((vector<PoisonGumInfo,std::allocator<PoisonGumInfo>> *)this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumPoisonSubsystem::ZombieEatPoisonGum(Sexy::RtWeakPtr<Zombie>, bool, int, float, float) */

void __thiscall
GumPoisonSubsystem::ZombieEatPoisonGum
          (float param_1,undefined4 param_2,GumPoisonSubsystem *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_4,undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  PoisonGumInfo aPStack_28 [8];
  float local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PoisonGumInfo::PoisonGumInfo(aPStack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aPStack_28,(RtWeakPtr *)param_4);
  local_20 = (float)PVZ_T();
  local_20 = local_20 + param_1;
  local_1c = param_2;
  local_18 = param_5;
  local_14 = param_6;
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_4);
  Zombie::ApplyCondition((Zombie *)(param_1 + 0.5),0,uVar1,0x18,1);
  std::vector<PoisonGumInfo,std::allocator<PoisonGumInfo>>::push_back
            ((vector<PoisonGumInfo,std::allocator<PoisonGumInfo>> *)(this + 0x10),aPStack_28);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aPStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

