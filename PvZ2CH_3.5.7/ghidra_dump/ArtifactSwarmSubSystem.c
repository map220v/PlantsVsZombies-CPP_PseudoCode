// Class: ArtifactSwarmSubSystem


/* ArtifactSwarmSubSystem::~ArtifactSwarmSubSystem() */

void __thiscall ArtifactSwarmSubSystem::~ArtifactSwarmSubSystem(ArtifactSwarmSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c830;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactSwarmSubSystem::~ArtifactSwarmSubSystem() */

void __thiscall ArtifactSwarmSubSystem::~ArtifactSwarmSubSystem(ArtifactSwarmSubSystem *this)

{
  ~ArtifactSwarmSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmSubSystem::StaticClassInit() */

void ArtifactSwarmSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSwarmSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037f0fac,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarmSubSystem::StaticGetClass() */

long * ArtifactSwarmSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmSubSystem::GetClass() const */

long * ArtifactSwarmSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSwarmSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarmSubSystem::ArtifactSwarmSubSystem() */

void __thiscall ArtifactSwarmSubSystem::ArtifactSwarmSubSystem(ArtifactSwarmSubSystem *this)

{
  undefined4 uVar1;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_0669c830;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* ArtifactSwarmSubSystem::StaticNew() */

ArtifactSwarmSubSystem * ArtifactSwarmSubSystem::StaticNew(void)

{
  ArtifactSwarmSubSystem *this;
  
  this = ::operator_new(0x20);
  ArtifactSwarmSubSystem(this);
  return this;
}


/* ArtifactSwarmSubSystem::LaunchProjectile(int, float) */

void __thiscall
ArtifactSwarmSubSystem::LaunchProjectile(ArtifactSwarmSubSystem *this,int param_1,float param_2)

{
  float fVar1;
  
  *(int *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x14) = 0;
  *(float *)(this + 0x18) = param_2;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c) = fVar1 + *(float *)(this + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarmSubSystem::FindTarget() */

void ArtifactSwarmSubSystem::FindTarget(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  GridItem *pGVar7;
  Zombie *this;
  long lVar8;
  undefined8 local_58;
  Point aPStack_50 [8];
  GridItem *local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point(aPStack_50,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_48,aPStack_50);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48[0] = (GridItem *)
                std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_48);
  if (bVar1) {
    do {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aPStack_50,(RtWeakPtrBase *)local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aPStack_50);
      if (cVar2 != '\0') {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_50);
        cVar2 = RealObject::IsOnTeam(uVar4,2);
        if (cVar2 != '\0') {
          if (((((this != (Zombie *)0x0) &&
                (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) &&
               (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
              ((cVar2 = Zombie::HasCondition(this,0x65), cVar2 == '\0' &&
               (cVar2 = Zombie::HasCondition(this,0x27), cVar2 == '\0')))) &&
             ((cVar2 = Zombie::HasCondition(this,0x25), cVar2 == '\0' &&
              ((cVar2 = Zombie::IsInvisible(this), cVar2 == '\0' &&
               (cVar2 = Zombie::HasCondition(this,0x2c), cVar2 == '\0')))))) {
            local_48[0] = (GridItem *)this;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                       (BoardEntity **)local_48);
          }
          if ((pGVar7 != (GridItem *)0x0) &&
             (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
            local_48[0] = pGVar7;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                       (BoardEntity **)local_48);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      local_48[0] = (GridItem *)
                    std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_20);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_48);
    } while (bVar1);
  }
  lVar8 = FUN_037f0e30(local_38,local_30);
  if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_037f0e3c(local_38);
    uVar4 = *puVar6;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* ArtifactSwarmSubSystem::Update() */

void __thiscall ArtifactSwarmSubSystem::Update(ArtifactSwarmSubSystem *this)

{
  int iVar1;
  BoardEntity *pBVar2;
  float fVar3;
  
  if ((0 < *(int *)(this + 0x10)) && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x1c) < fVar3)) {
    pBVar2 = (BoardEntity *)FindTarget();
    MessageRouter::Post<BoardEntity*,int,BoardEntity*,int>
              ((MessageRouter *)gMessageRouter,Message::NotifySwarmFireProjectile,pBVar2,
               *(int *)(this + 0x14));
    fVar3 = (float)PVZ_T();
    iVar1 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar1 + -1;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    *(float *)(this + 0x1c) = fVar3 + *(float *)(this + 0x18);
    if (iVar1 + -1 == 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}

