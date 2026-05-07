// Class: RafflesiaSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSubSystem::StaticClassInit() */

void RafflesiaSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"RafflesiaEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_040be80c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RafflesiaSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_040bee94,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaSubSystem::StaticGetClass() */

long * RafflesiaSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaSubSystem::GetClass() const */

long * RafflesiaSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaSubSystem::LaunchAllProjectiles() */

void __thiscall RafflesiaSubSystem::LaunchAllProjectiles(RafflesiaSubSystem *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr *this_00;
  ulong uVar4;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RafflesiaSpecialProjectile *this_03;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x28);
  lVar3 = FUN_040bb9d4(uVar6,*(undefined8 *)(this + 0x30));
  if (lVar3 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_040bb9e0(uVar6,uVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtMixedPtrBase *)FUN_040bb9e0(*(undefined8 *)(this + 0x28),uVar5);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
        if (cVar2 != '\0') {
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_040bb9e0(*(undefined8 *)(this + 0x28),uVar5);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          nop();
          RafflesiaSpecialProjectile::LaunchToTarget(this_03);
        }
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x28);
      uVar4 = FUN_040bb9d4(uVar6,*(undefined8 *)(this + 0x30));
    } while (uVar5 < uVar4);
  }
  return;
}


/* RafflesiaSubSystem::RafflesiaSubSystem() */

void __thiscall RafflesiaSubSystem::RafflesiaSubSystem(RafflesiaSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067d7730;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* RafflesiaSubSystem::StaticNew() */

RafflesiaSubSystem * RafflesiaSubSystem::StaticNew(void)

{
  RafflesiaSubSystem *this;
  
  this = ::operator_new(0x40);
  RafflesiaSubSystem(this);
  return this;
}


/* RafflesiaSubSystem::~RafflesiaSubSystem() */

void __thiscall RafflesiaSubSystem::~RafflesiaSubSystem(RafflesiaSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067d7730;
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x28));
  std::vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
  ::~vector((vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* RafflesiaSubSystem::~RafflesiaSubSystem() */

void __thiscall RafflesiaSubSystem::~RafflesiaSubSystem(RafflesiaSubSystem *this)

{
  ~RafflesiaSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSubSystem::QueueShot(PlantRafflesia*, float, Sexy::SexyVector3 const&,
   Sexy::RtWeakPtr<BoardEntity>, int) */

void __thiscall
RafflesiaSubSystem::QueueShot
          (RafflesiaEntry *param_1_00,RafflesiaSubSystem *this,undefined8 param_1,undefined8 param_3
          ,RtWeakPtrBase *param_5,undefined8 param_6)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RafflesiaEntry aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_5);
  RafflesiaEntry::RafflesiaEntry(param_1_00,aRStack_38,param_1,param_3,aRStack_40,param_6);
  std::vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
  ::push_back((vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
               *)(this + 0x10),aRStack_38);
  RafflesiaEntry::~RafflesiaEntry(aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSubSystem::launch(RafflesiaSubSystem::RafflesiaEntry const&) */

void __thiscall RafflesiaSubSystem::launch(RafflesiaSubSystem *this,RafflesiaEntry *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *this_00;
  ResourceInfo *pRVar4;
  long lVar5;
  long extraout_x0;
  float *pfVar6;
  BashoPultProjectile *extraout_x0_00;
  PopAnimRig *pPVar7;
  BashoPultProjectile *extraout_x0_01;
  undefined8 uVar8;
  BashoPultProjectile *this_01;
  float fVar9;
  Board *pBVar14;
  float fVar10;
  Board *pBVar15;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_1);
  if (this_00 != (ResourceInfo *)0x0) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 8));
    lVar5 = FUN_040bb984(*(undefined8 *)(pRVar4 + 0x70),1);
    nop();
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(extraout_x0 + 0x10));
    if (cVar1 != '\0') {
      lVar5 = FUN_040bb984(*(undefined8 *)(pRVar4 + 0x70),2);
    }
    cVar1 = FUN_0547419c((string *)(lVar5 + 0x50));
    if (cVar1 == '\0') {
      RealObject::PlayPositionalSound((RealObject *)this_00,(string *)(lVar5 + 0x50),0.0);
    }
    fVar11 = *(float *)(param_1 + 0x14);
    fVar12 = *(float *)(param_1 + 0x18);
    fVar9 = *(float *)(this_00 + 0xc4);
    fVar10 = -(*(float *)(lVar5 + 0x6c) * fVar9);
    if ((fVar11 == -1.0 || fVar12 == -1.0) ||
       (fVar13 = *(float *)(param_1 + 0x1c), *(float *)(param_1 + 0x1c) == -1.0)) {
      iVar2 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
      iVar3 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      iVar2 = BoardTransforms::GridToBoardSpaceX((int)(float)iVar2);
      fVar11 = (float)iVar2;
      iVar2 = BoardTransforms::GridToBoardSpaceY((int)(float)iVar3);
      fVar9 = *(float *)(this_00 + 0xc4);
      fVar12 = (float)iVar2;
      fVar13 = fVar10;
    }
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
                    /* WARNING: Load size is inaccurate */
    pBVar15._0_4_ = *(Board **)(pfVar6 + 1);
    pBVar14._0_4_ = (Board *)(*pfVar6 + *(float *)(lVar5 + 0x68) * fVar9);
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      break;
    case 1:
      pBVar14._0_4_ = (Board *)((float)pBVar14._0_4_ + 30.0);
      pBVar15._0_4_ = (Board *)((float)pBVar15._0_4_ - 30.0);
      break;
    case 2:
      pBVar14._0_4_ = (Board *)((float)pBVar14._0_4_ - 25.0);
      pBVar15._0_4_ = (Board *)((float)pBVar15._0_4_ - 20.0);
      break;
    case 3:
      pBVar14._0_4_ = (Board *)((float)pBVar14._0_4_ - 22.0);
      pBVar15._0_4_ = (Board *)((float)pBVar15._0_4_ + 8.0);
      break;
    case 4:
      pBVar14._0_4_ = (Board *)((float)pBVar14._0_4_ + 20.0);
      pBVar15._0_4_ = (Board *)((float)pBVar15._0_4_ + 10.0);
      break;
    default:
      pBVar15._0_4_ = (Board *)0x0;
      pBVar14._0_4_ = pBVar15._0_4_;
    }
    cVar1 = Plant::GetAvatarEnable((Plant *)this_00);
    if (cVar1 == '\0') {
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar5 + 8));
      Board::AddProjectile
                (pBVar14._0_4_,(undefined4)pBVar15._0_4_,fVar10,uVar8,aRStack_18,this_00,0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      this_01 = extraout_x0_01;
    }
    else {
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar5 + 8));
      Board::AddProjectile
                (pBVar14._0_4_,(undefined4)pBVar15._0_4_,fVar10,uVar8,aRStack_18,this_00,0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      this_01 = extraout_x0_00;
    }
    if (this_01 != (BashoPultProjectile *)0x0) {
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar11,fVar12,fVar13);
      BashoPultProjectile::SetReturnPosition(this_01,(SexyVector3 *)aRStack_18);
      FUN_040bb95c(*(undefined4 *)(pRVar4 + 0x2c0),this_01 + 0x1c0);
      FUN_040bb964(fVar10,this_01 + 0x1c4);
      cVar1 = Plant::GetAvatarEnable((Plant *)this_00);
      if (cVar1 == '\0') {
        pPVar7 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_01);
        std::string::string((string *)aRStack_18,"purple");
        PopAnimRig::SetLayerVisibility(pPVar7,(string *)aRStack_18,false);
        std::string::~string((string *)aRStack_18);
        nop();
        pPVar7 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_01);
        std::string::string((string *)aRStack_18,"green");
      }
      else {
        pPVar7 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_01);
        std::string::string((string *)aRStack_18,"purple");
        PopAnimRig::SetLayerVisibility(pPVar7,(string *)aRStack_18,true);
        std::string::~string((string *)aRStack_18);
        nop();
        pPVar7 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this_01);
        std::string::string((string *)aRStack_18,"green");
      }
      PopAnimRig::SetLayerVisibility(pPVar7,(string *)aRStack_18,cVar1 == '\0');
      std::string::~string((string *)aRStack_18);
      nop();
      FUN_040bba58(this_01 + 0x24);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
      std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::
      push_back((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
                (this + 0x28),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSubSystem::Update() */

void __thiscall RafflesiaSubSystem::Update(RafflesiaSubSystem *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  RafflesiaEntry *pRVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_040bb998(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar5 = (long)(int)uVar1 + -1;
    lVar2 = lVar5;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      lVar6 = lVar2;
      fVar8 = (float)PVZ_T();
      pRVar4 = (RafflesiaEntry *)FUN_040bb9c8(*(undefined8 *)(this + 0x10),lVar7);
      if (*(float *)(pRVar4 + 0x10) <= fVar8) {
        launch(this,pRVar4);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                   ::operator+((__normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                                *)&local_20,lVar7);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::
        vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
        ::erase((vector<RafflesiaSubSystem::RafflesiaEntry,std::allocator<RafflesiaSubSystem::RafflesiaEntry>>
                 *)(this + 0x10),local_10);
      }
      if (lVar6 == lVar5 - (ulong)uVar1) break;
      lVar2 = lVar6 + -1;
      lVar7 = lVar6;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

