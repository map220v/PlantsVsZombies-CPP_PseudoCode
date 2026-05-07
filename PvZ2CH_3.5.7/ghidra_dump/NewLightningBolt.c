// Class: NewLightningBolt


/* NewLightningBolt::InitializeDamageInfo(float, float, float) */

void __thiscall
NewLightningBolt::InitializeDamageInfo
          (NewLightningBolt *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x120) = param_1;
  *(float *)(this + 0x124) = param_2;
  *(float *)(this + 0x128) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLightningBolt::StaticClassInit() */

void NewLightningBolt::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewLightningBolt");
    (*pcVar2)(plVar1,asStack_10,FUN_03e7d96c,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewLightningBolt::StaticGetClass() */

long * NewLightningBolt::StaticGetClass(void)

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
  uVar2 = NewRayEntity::StaticGetClass();
  (*pcVar3)(plVar1,"NewLightningBolt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewLightningBolt::GetClass() const */

long * NewLightningBolt::GetClass(void)

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
  uVar2 = NewRayEntity::StaticGetClass();
  (*pcVar3)(plVar1,"NewLightningBolt",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewLightningBolt::InitializeBounceInfo(int, float, std::string const&, std::string const&) */

void __thiscall
NewLightningBolt::InitializeBounceInfo
          (NewLightningBolt *this,int param_1,float param_2,string *param_3,string *param_4)

{
  *(int *)(this + 0x11c) = param_1;
  *(float *)(this + 0x14c) = param_2;
  thunk_FUN_05475e00(this + 0x150,param_3);
  thunk_FUN_05475e00(this + 0x158,param_4);
  return;
}


/* NewLightningBolt::onInitialized() */

void __thiscall NewLightningBolt::onInitialized(NewLightningBolt *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x148) = fVar1 + *(float *)(this + 0x14c);
  return;
}


/* NewLightningBolt::NewLightningBolt() */

void __thiscall NewLightningBolt::NewLightningBolt(NewLightningBolt *this)

{
  undefined4 uVar1;
  
  NewRayEntity::NewRayEntity((NewRayEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678dac0;
  *(undefined ***)(this + 0x10) = &PTR__NewLightningBolt_0678dcb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Set8BytesTo0(this + 0x150);
  Set8BytesTo0(this + 0x158);
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0xe0) = uVar1;
  return;
}


/* NewLightningBolt::StaticNew() */

NewLightningBolt * NewLightningBolt::StaticNew(void)

{
  NewLightningBolt *this;
  
  this = ::operator_new(0x160);
  NewLightningBolt(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLightningBolt::causeDamage(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall NewLightningBolt::causeDamage(NewLightningBolt *this,RtWeakPtr *param_2)

{
  bool bVar1;
  RtObject *pRVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  DamageInfo *pDVar6;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar2);
    if (!bVar1) {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar2);
      if (!bVar1) goto LAB_03e7d6b8;
    }
                    /* WARNING: Load size is inaccurate */
    pDVar6._0_4_ = *(DamageInfo **)(this + 0x120);
    lVar3 = FUN_03e7d374(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
    if (lVar3 != 0) {
      pDVar6._0_4_ = (DamageInfo *)((float)pDVar6._0_4_ * *(float *)(this + 0x124));
    }
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
    ;
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar6._0_4_,local_70,local_6c,aDStack_68,0x80,uVar4,aPStack_78,0);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    (**(code **)(*plVar5 + 0x110))(plVar5,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
LAB_03e7d6b8:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x130),param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLightningBolt::createPopAnimsToTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
NewLightningBolt::createPopAnimsToTarget(NewLightningBolt *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  NewRayEntity::createPopAnimsToTarget((NewRayEntity *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    causeDamage(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewLightningBolt::~NewLightningBolt() */

void __thiscall NewLightningBolt::~NewLightningBolt(NewLightningBolt *this)

{
  *(undefined ***)this = &PTR_GetClass_0678dac0;
  *(undefined ***)(this + 0x10) = &PTR__NewLightningBolt_0678dcb8;
  std::string::~string((string *)(this + 0x158));
  std::string::~string((string *)(this + 0x150));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x130));
  NewRayEntity::~NewRayEntity((NewRayEntity *)this);
  return;
}


/* non-virtual thunk to NewLightningBolt::~NewLightningBolt() */

void __thiscall NewLightningBolt::~NewLightningBolt(NewLightningBolt *this)

{
  ~NewLightningBolt(this + -0x10);
  return;
}


/* NewLightningBolt::~NewLightningBolt() */

void __thiscall NewLightningBolt::~NewLightningBolt(NewLightningBolt *this)

{
  ~NewLightningBolt(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewLightningBolt::~NewLightningBolt() */

void __thiscall NewLightningBolt::~NewLightningBolt(NewLightningBolt *this)

{
  ~NewLightningBolt(this + -0x10);
  return;
}


/* NewLightningBolt::SetHitTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall NewLightningBolt::SetHitTargets(NewLightningBolt *this,vector *param_2)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x130),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewLightningBolt::createBounce() */

void __thiscall NewLightningBolt::createBounce(NewLightningBolt *this)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  GridItem *pGVar11;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  string *psVar15;
  long lVar16;
  NewLightningBolt *this_01;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0xe8));
  iVar5 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0xec));
  local_38 = iVar4 + -1;
  local_20._0_4_ = 0;
  piVar8 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar7 = *piVar8;
  local_38 = iVar5 + -1;
  local_20 = (Zombie *)((ulong)local_20._4_4_ << 0x20);
  piVar8 = eastl::max_alt<int>(&local_38,(int *)&local_20);
  iVar1 = *piVar8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  uVar6 = operator|(4,2);
  Sexy::Insets::Insets((Insets *)&local_20,iVar7,iVar1,(iVar4 - iVar7) + 2,(iVar5 - iVar1) + 2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,uVar6,
             (Insets *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar18 = local_68;
  iVar7 = FUN_03e7d360(local_68,local_60);
  uVar2 = iVar7 - 1;
  if (-1 < (int)uVar2) {
    lVar19 = (long)(int)uVar2 + -1;
    lVar16 = (long)(int)uVar2;
    lVar20 = lVar19;
    do {
      puVar9 = (undefined8 *)FUN_03e7d36c(uVar18,lVar16);
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      puVar9 = (undefined8 *)FUN_03e7d36c(local_68,lVar16);
      pGVar11 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
      uVar17 = 0;
      do {
        uVar18 = *(undefined8 *)(this + 0x130);
        uVar14 = FUN_03e7d374(uVar18,*(undefined8 *)(this + 0x138));
        if (uVar14 <= uVar17) {
          if ((pGVar11 == (GridItem *)0x0) ||
             (cVar3 = (**(code **)(*(long *)pGVar11 + 0x200))(pGVar11), cVar3 != '\0')) {
            if (pZVar10 == (Zombie *)0x0) {
              uVar18 = local_68;
              if (pGVar11 != (GridItem *)0x0) {
                local_20 = (Zombie *)pGVar11;
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                           (BoardEntity **)&local_20);
                uVar18 = local_68;
              }
              goto joined_r0x03e7e16c;
            }
            cVar3 = (**(code **)(*(long *)pZVar10 + 0x328))(pZVar10);
            if (cVar3 == '\0') {
              pcVar21 = *(code **)(*(long *)pZVar10 + 0x3d0);
              psVar15 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_70);
              cVar3 = (*pcVar21)(pZVar10,(Insets *)&local_20,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
              if (cVar3 != '\0') {
                local_20 = pZVar10;
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,
                           (BoardEntity **)&local_20);
                uVar18 = local_68;
                goto joined_r0x03e7e16c;
              }
            }
          }
          break;
        }
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e7d380(uVar18,uVar17);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        plVar13 = (long *)FUN_03e7d36c(local_68,lVar16);
        uVar17 = uVar17 + 1;
      } while (lVar12 != *plVar13);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_68);
      local_70 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_78,lVar16);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_20,(__normal_iterator *)&local_70);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68,local_20);
      uVar18 = local_68;
joined_r0x03e7e16c:
      if (lVar20 == lVar19 - (ulong)uVar2) break;
      lVar16 = lVar20;
      lVar20 = lVar20 + -1;
      local_68 = uVar18;
    } while( true );
  }
  lVar16 = FUN_03e7d360(local_50,local_48);
  if (lVar16 == 0) {
    lVar16 = FUN_03e7d360(CONCAT44(uStack_34,local_38),local_30);
    if (lVar16 == 0) goto LAB_03e7e264;
    iVar7 = Sexy::Rand((int)lVar16);
    FUN_03e7d36c(CONCAT44(uStack_34,local_38),(long)iVar7);
  }
  else {
    iVar7 = Sexy::Rand((int)lVar16);
    FUN_03e7d36c(local_50,(long)iVar7);
  }
  this_01 = GameObject::Create<NewLightningBolt>();
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20,(vector *)(this + 0x130));
  SetHitTargets(this_01,(Insets *)&local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  InitializeBounceInfo
            (this_01,*(int *)(this + 0x11c),*(float *)(this + 0x14c),(string *)(this + 0x150),
             (string *)(this + 0x158));
  InitializeDamageInfo
            (this_01,*(float *)(this + 0x120),*(float *)(this + 0x124),*(float *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(this + 0xd8));
                    /* WARNING: Load size is inaccurate */
  NewRayEntity::Initialize(*(NewRayEntity **)(this + 0xe4),this_01,this + 0xa8,(Insets *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_70);
  RayEntity::InitiateWithTarget((RayEntity *)this_01,(Insets *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  FUN_03e7d34c(this_01 + 0x118,*(int *)(this + 0x118) + 1);
LAB_03e7e264:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewLightningBolt::onUpdate() */

void __thiscall NewLightningBolt::onUpdate(NewLightningBolt *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  NewRayEntity::updateTiles((NewRayEntity *)this);
  fVar1 = (float)PVZ_T();
  fVar3 = *(float *)(this + 0xe0);
  if (fVar1 < fVar3) {
    fVar2 = (float)PVZ_EOT();
    if ((fVar3 == fVar2) && (fVar3 = *(float *)(this + 0x148), fVar3 <= fVar1)) {
      if (*(int *)(this + 0x118) < *(int *)(this + 0x11c)) {
        createBounce(this);
        fVar3 = *(float *)(this + 0x148);
      }
      *(float *)(this + 0xe0) = fVar3 + *(float *)(this + 0xe4);
    }
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

