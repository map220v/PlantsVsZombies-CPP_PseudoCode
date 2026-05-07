// Class: ArtifactSquid


/* ArtifactSquid::CanBeControlled(Zombie*) */

byte __thiscall ArtifactSquid::CanBeControlled(ArtifactSquid *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) {
    bVar2 = Zombie::IsControlled(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquid::StaticClassInit() */

void ArtifactSquid::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSquid");
    (*pcVar2)(plVar1,asStack_10,FUN_0372e748,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSquid::StaticGetClass() */

long * ArtifactSquid::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSquid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquid::GetClass() const */

long * ArtifactSquid::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSquid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquid::~ArtifactSquid() */

void __thiscall ArtifactSquid::~ArtifactSquid(ArtifactSquid *this)

{
  *(undefined ***)this = &PTR_GetClass_0668eee0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSquid::~ArtifactSquid() */

void __thiscall ArtifactSquid::~ArtifactSquid(ArtifactSquid *this)

{
  ~ArtifactSquid(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquid::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, TeamFlags, Sexy::RtWeakPtr<BoardEntity>)
    */

void ArtifactSquid::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
               RtWeakPtrBase *param_10,undefined4 param_11,RtWeakPtr *param_12)

{
  bool bVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_20 = SUB84(param_1,0);
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_10);
  Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,0,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_30,param_7,param_8);
  FUN_03723aac(this + 0x24,param_11);
  FUN_03723c2c(*(undefined4 *)(param_9 + 0x40),this + 0x1a8);
  FUN_03723c34(*(undefined4 *)(param_9 + 0x50),this + 0x1ac);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_12);
  if (bVar1) {
    Projectile::SetTarget(this,param_12);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquid::LaunchToTarget(Sexy::RtWeakPtr<Zombie>) */

void ArtifactSquid::LaunchToTarget
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               RtMixedPtrBase *param_5)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(extraout_x0 + 0x150));
  if (cVar1 != '\0') {
    DVec3::DVec3((DVec3 *)&local_48);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
    if (cVar1 != '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
      local_18 = (**(code **)(*plVar3 + 0x3b0))(*(undefined4 *)(extraout_x0 + 0x168));
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,(SexyVector3 *)&local_18);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      uVar4 = 0;
      local_48 = local_48 - *(float *)(extraout_x0 + 0x16c) * (float)iVar2;
      uVar5 = 0x43110000;
      EATextSquish::Vec3::Vec3(aVStack_38,-10.0,0.0,145.0);
      uVar6 = *(undefined4 *)(extraout_x0 + 0x164);
      uVar7 = *(undefined4 *)(extraout_x0 + 0x168);
      local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_38,1.0);
      local_24 = uVar4;
      local_20 = uVar5;
      local_18 = Sexy::SexyVector3::operator+
                           ((SexyVector3 *)(extraout_x0 + 0x158),(SexyVector3 *)&local_28);
      local_14 = uVar4;
      local_10 = uVar5;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                (aRStack_58,(RtWeakPtrBase *)(extraout_x0 + 0x150));
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_50);
      launchProjectile(local_18,local_14,local_10,local_48,local_44,local_40,uVar6,uVar7,param_4,
                       aRStack_58,1,a_Stack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSquid::ArtifactSquid() */

void __thiscall ArtifactSquid::ArtifactSquid(ArtifactSquid *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668eee0;
  return;
}


/* ArtifactSquid::StaticNew() */

ArtifactSquid * ArtifactSquid::StaticNew(void)

{
  ArtifactSquid *this;
  
  this = ::operator_new(0x58);
  ArtifactSquid(this);
  return this;
}


/* ArtifactSquid::Activate() */

void __thiscall ArtifactSquid::Activate(ArtifactSquid *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar6 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(undefined4 *)(this + 0x40) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x44) = fVar5;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) - fVar5 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  iVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    iVar3 = (int)fVar5;
  }
  fVar4 = 0.0;
  *(int *)(this + 0x48) = iVar3;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x4c) = fVar5 + *(float *)(this + 0x44);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(float *)(this + 0x50) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar4 * fVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquid::GetValidTargets(std::vector<Zombie*, std::allocator<Zombie*> >&) */

void __thiscall ArtifactSquid::GetValidTargets(ArtifactSquid *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 local_30;
  Zombie *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    local_28 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if ((((local_28 != (Zombie *)0x0) &&
         (cVar2 = (**(code **)(*(long *)local_28 + 0x328))(), cVar2 == '\0')) &&
        (cVar2 = IsValidTarget(local_28), cVar2 != '\0')) &&
       ((cVar2 = CanBeControlled(this,local_28), cVar2 != '\0' &&
        ((iVar3 = Zombie::GetSizeType(local_28), iVar3 != 2 || (0.0 < *(float *)(this + 0x50)))))))
    {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)param_1,&local_28);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquid::Launch(bool) */

void __thiscall ArtifactSquid::Launch(ArtifactSquid *this,bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetValidTargets(this,(vector *)avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_037806c4(uVar2,uVar3);
  if (param_1) {
    iVar5 = *(int *)(this + 0x48);
  }
  else {
    iVar5 = 9999999;
  }
  iVar4 = 0;
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    iVar4 = iVar4 + 1;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
    LaunchToTarget(this,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    if (iVar5 == iVar4) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSquid::DoTrigger() */

void __thiscall ArtifactSquid::DoTrigger(ArtifactSquid *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  Launch(this,false);
  return;
}


/* ArtifactSquid::Update() */

void __thiscall ArtifactSquid::Update(ArtifactSquid *this)

{
  char cVar1;
  float fVar2;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (((cVar1 != '\0') && (0.0 < *(float *)(this + 0x44))) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x4c) <= fVar2)) {
    Launch(this,true);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x4c) = fVar2 + *(float *)(this + 0x44);
    return;
  }
  return;
}

