// Class: Effect_DinoRun_For_Artifact_Dinosaur_horn


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticClassInit() */

void Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DinoRun_For_Artifact_Dinosaur_horn");
    (*pcVar2)(plVar1,asStack_10,FUN_037d922c,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticGetClass() */

long * Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DinoRun_For_Artifact_Dinosaur_horn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::GetClass() const */

long * Effect_DinoRun_For_Artifact_Dinosaur_horn::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DinoRun_For_Artifact_Dinosaur_horn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::canZombieBeSecKilled(Zombie*) */

char __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::canZombieBeSecKilled
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (Zombie *)0x0) {
    iVar2 = Zombie::GetSizeType(param_1);
    if (((iVar2 == 2) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')) ||
       (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    return cVar1;
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::getMinNumToSeckill(std::string) */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::getMinNumToSeckill
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,string *param_2)

{
  char cVar1;
  bool bVar2;
  TypeToSpawnDes *pTVar3;
  undefined8 local_30;
  undefined8 local_28;
  TypeToSpawnDes aTStack_20 [12];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xc0));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xc0));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
      local_14 = 0;
LAB_037d618c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_14);
    }
    pTVar3 = (TypeToSpawnDes *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(aTStack_20,pTVar3);
    cVar1 = std::operator==((string *)aTStack_20,param_2);
    if (cVar1 != '\0') {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
      goto LAB_037d618c;
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::getMaxNumToSeckill(std::string) */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::getMaxNumToSeckill
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,string *param_2)

{
  char cVar1;
  bool bVar2;
  TypeToSpawnDes *pTVar3;
  undefined8 local_30;
  undefined8 local_28;
  TypeToSpawnDes aTStack_20 [16];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xc0));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xc0));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar2) {
      local_10 = 0;
LAB_037d6270:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    pTVar3 = (TypeToSpawnDes *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(aTStack_20,pTVar3);
    cVar1 = std::operator==((string *)aTStack_20,param_2);
    if (cVar1 != '\0') {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
      goto LAB_037d6270;
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchStunZOmbies(Sexy::RtWeakPtr<DinosaurRunner>)
    */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchStunZOmbies
          (undefined8 param_1,RtMixedPtrBase *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  RtObject *this;
  ArtifactDinosaurHorn *pAVar4;
  long *plVar5;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    DinosaurRunner::FindTargetZombie();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar2 != '\0') {
      Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetActivatedArtifact();
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (!bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1000,0x37d6724);
        (*pcVar1)();
      }
      Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      ArtifactMgr::GetActivatedArtifact();
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pAVar4 = Sexy::RtObject::Cast<ArtifactDinosaurHorn>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      FUN_037d5074(*(undefined4 *)(pAVar4 + 0x54));
      (**(code **)(*plVar5 + 0x298))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::calcDamageAmountToSurvivor(std::string) */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::calcDamageAmountToSurvivor
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,string *param_2)

{
  bool bVar1;
  char cVar2;
  TypeToSpawnDes *pTVar3;
  RtObject *this_00;
  ArtifactDinosaurHorn *pAVar4;
  float fVar5;
  undefined8 local_30;
  undefined8 local_28;
  TypeToSpawnDes aTStack_20 [20];
  float local_c;
  long local_8;
  
  pAVar4 = (ArtifactDinosaurHorn *)0x0;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
  if (bVar1) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_20);
    pAVar4 = Sexy::RtObject::Cast<ArtifactDinosaurHorn>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xc0));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xc0));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      fVar5 = 0.0;
LAB_037d6858:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(fVar5);
    }
    pTVar3 = (TypeToSpawnDes *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(aTStack_20,pTVar3);
    cVar2 = std::operator==((string *)aTStack_20,param_2);
    if (cVar2 != '\0') {
      fVar5 = (float)FUN_037d5080(*(undefined4 *)(pAVar4 + 0x70));
      fVar5 = (fVar5 + 1.0) * local_c;
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
      goto LAB_037d6858;
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_30);
  } while( true );
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::Effect_DinoRun_For_Artifact_Dinosaur_horn() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::Effect_DinoRun_For_Artifact_Dinosaur_horn
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0669a3f0;
  Set8BytesTo0(this + 0xb8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  this[0xb4] = (Effect_DinoRun_For_Artifact_Dinosaur_horn)0x0;
  return;
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticNew() */

Effect_DinoRun_For_Artifact_Dinosaur_horn *
Effect_DinoRun_For_Artifact_Dinosaur_horn::StaticNew(void)

{
  Effect_DinoRun_For_Artifact_Dinosaur_horn *this;
  
  this = ::operator_new(0x120);
  Effect_DinoRun_For_Artifact_Dinosaur_horn(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::applyDamageNormal() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::applyDamageNormal
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  RtWeakPtrBase *pRVar6;
  SharkMinion *this_00;
  undefined8 *puVar7;
  Zombie *pZVar8;
  GridItem *pGVar9;
  long lVar10;
  RtObject *this_01;
  SharkMinion *this_02;
  code *pcVar11;
  DamageInfo *pDVar13;
  ArtifactDinosaurHorn *pAVar12;
  undefined8 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  string asStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  RtWeakPtr aRStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
  if (bVar1) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    ArtifactMgr::GetActivatedArtifact();
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
    pAVar12 = Sexy::RtObject::Cast<ArtifactDinosaurHorn>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  }
  else {
    pAVar12 = (ArtifactDinosaurHorn *)0x0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  do {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0xd8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)local_68);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b8,pRVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b8);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      nop();
      if (this_00 != (SharkMinion *)0x0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
        uVar3 = operator|(2,4);
        (**(code **)(*(long *)this_00 + 0x1f8))((RtWeakPtr<Sexy::SoundResource> *)local_68,this_00);
        EntityFinder::GetEntitiesTouchingRectangle
                  (aRStack_80,uVar3,(RtWeakPtr<Sexy::SoundResource> *)local_68,0xffffffff,0xffffffff
                  );
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_80);
        local_a8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_80);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8),
              bVar1) {
          puVar7 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          this_02 = (SharkMinion *)*puVar7;
          iVar4 = SharkMinion::getRow(this_02);
          iVar5 = SharkMinion::getRow(this_00);
          if (iVar4 == iVar5) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
            cVar2 = DinosaurRunner::IsInTargetHistory
                              ((DinosaurRunner *)this_00,(RtWeakPtr<Sexy::SoundResource> *)local_68)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
            if (cVar2 == '\0') {
              pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
              if (pZVar8 == (Zombie *)0x0) {
LAB_037d8204:
                pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_02);
                if (((pGVar9 == (GridItem *)0x0) ||
                    (cVar2 = (**(code **)(*(long *)pGVar9 + 0x1f8))(), cVar2 == '\0')) ||
                   (cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 == '\0')) goto LAB_037d8150;
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
                DinosaurRunner::AddToHistoryTargets
                          ((DinosaurRunner *)this_00,(RtWeakPtr<Sexy::SoundResource> *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
                pcVar11 = *(code **)(*(long *)pGVar9 + 0x110);
                TwinsAssistPerson::GetPopAnimRig();
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                FUN_05475d88(asStack_98,lVar10 + 8);
                pDVar13._0_4_ = (DamageInfo *)calcDamageAmountToSurvivor(this,asStack_98);
                Sexy::Point::Point(aPStack_90,-1,-1);
                Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
                DamageInfo::DamageInfo
                          (pDVar13._0_4_,local_88,local_84,
                           (RtWeakPtr<Sexy::SoundResource> *)local_68,aPStack_90,0);
                (*pcVar11)(pGVar9,(RtWeakPtr<Sexy::SoundResource> *)local_68);
              }
              else {
                cVar2 = (**(code **)(*(long *)this_00 + 0x350))(this_00,pZVar8);
                if (cVar2 == '\0') goto LAB_037d8204;
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
                DinosaurRunner::AddToHistoryTargets
                          ((DinosaurRunner *)this_00,(RtWeakPtr<Sexy::SoundResource> *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
                FUN_037d5074(*(undefined4 *)(pAVar12 + 0x54));
                (**(code **)(*(long *)pZVar8 + 0x298))(pZVar8);
                pcVar11 = *(code **)(*(long *)pZVar8 + 0x110);
                TwinsAssistPerson::GetPopAnimRig();
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
                FUN_05475d88(asStack_98,lVar10 + 8);
                pDVar13._0_4_ = (DamageInfo *)calcDamageAmountToSurvivor(this,asStack_98);
                Sexy::Point::Point(aPStack_90,-1,-1);
                Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
                DamageInfo::DamageInfo
                          (pDVar13._0_4_,local_88,local_84,
                           (RtWeakPtr<Sexy::SoundResource> *)local_68,aPStack_90,0);
                (*pcVar11)(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)local_68);
              }
              DamageInfo::~DamageInfo((DamageInfo *)local_68);
              std::string::~string(asStack_98);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
            }
          }
LAB_037d8150:
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
  } while( true );
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::~Effect_DinoRun_For_Artifact_Dinosaur_horn() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::~Effect_DinoRun_For_Artifact_Dinosaur_horn
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a3f0;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108)
            );
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0xf0));
  std::vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>>::~vector
            ((vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>> *)
             (this + 0xd8));
  std::
  vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
  ::~vector((vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
             *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::~Effect_DinoRun_For_Artifact_Dinosaur_horn() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::~Effect_DinoRun_For_Artifact_Dinosaur_horn
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  ~Effect_DinoRun_For_Artifact_Dinosaur_horn(this);
  AK::FreeHook(this);
  return;
}


/* Effect_DinoRun_For_Artifact_Dinosaur_horn::onInitialized() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::onInitialized
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  char *pcVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xac) = fVar2 + 10.0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xa4) = fVar2 + 0.75;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xa8) = fVar2 + 4.25;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_Dino_Extra_Tyrannosaurus_Run");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchTargetPlants(Sexy::RtWeakPtr<DinosaurRunner>)
    */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchTargetPlants
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  DinosaurRunner *pDVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtMixedPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pDVar3 = (DinosaurRunner *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = DinosaurRunner::CanAttackPlants(pDVar3);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      DinosaurRunner::FindTargetPlant();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar1 != '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x108);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<Plant>>
                             (uVar4,uVar5,aRStack_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (bVar2) {
          std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                     this_00,(RtWeakPtr *)aRStack_20);
          pDVar3 = (DinosaurRunner *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          DinosaurRunner::NumPlantsKilledInc(pDVar3);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchTargetZombies(Sexy::RtWeakPtr<DinosaurRunner>)
    */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::DinoSearchTargetZombies
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,RtMixedPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  DinosaurRunner *pDVar3;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RtMixedPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    pDVar3 = (DinosaurRunner *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = DinosaurRunner::CanAttackZombies(pDVar3);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      DinosaurRunner::FindTargetZombie();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar1 != '\0') {
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
        cVar1 = canZombieBeSecKilled(this,(Zombie *)pRVar4);
        if (cVar1 != '\0') {
          this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xf0);
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_18 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                               (uVar5,uVar6,aRStack_20);
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (bVar2) {
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       this_00,(RtWeakPtr *)aRStack_20);
            pDVar3 = (DinosaurRunner *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            DinosaurRunner::NumZombiesKilledInc(pDVar3);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::applyDamage() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::applyDamage
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *this_01;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  DinosaurRunner *this_02;
  RtWeakPtr *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  Zombie *pZVar8;
  code *pcVar9;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 0xf0)
  ;
  this_01 = (vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear(this_01);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0xd8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_78,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      nop();
      if (this_02 != (DinosaurRunner *)0x0) {
        cVar2 = DinosaurRunner::CanAttackPlants(this_02);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
          DinoSearchTargetPlants(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
        cVar2 = DinosaurRunner::CanAttackZombies(this_02);
        if (cVar2 != '\0') {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_70);
          DinoSearchTargetZombies(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_01);
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_01);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
    if (bVar1) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
      if (pPVar7 != (Plant *)0x0) {
        pcVar9 = *(code **)(*(long *)pPVar7 + 0x120);
        Sexy::Point::Point((Point *)aRStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr<Sexy::SoundResource> *)local_68,4,
                   0,(Point *)aRStack_78,0);
        (*pcVar9)(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  while( true ) {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
    if (bVar1) {
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      pZVar8 = Sexy::RtObject::Cast<Zombie>(pRVar6);
      if (pZVar8 != (Zombie *)0x0) {
        pcVar9 = *(code **)(*(long *)pZVar8 + 0x120);
        Sexy::Point::Point((Point *)aRStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr<Sexy::SoundResource> *)local_68,4,
                   0,(Point *)aRStack_78,0);
        (*pcVar9)(pZVar8,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::SpawnDino(std::string const&, int) */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::SpawnDino
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,string *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  CreatureType *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  Board *pBVar6;
  undefined1 auStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58), cVar2 != '\0')) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this_00 = (CreatureType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    CreatureType::AddInGameResourceRequirements(this_00,(set *)amStack_38);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    uVar4 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar4,uVar5,auStack_60);
    Board::LoadResourceGroupsForGameplay(pBVar6,(vector *)avStack_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)avStack_50,(RtWeakPtrBase *)aRStack_58);
    uVar4 = Board::AddCreatureInRow(pBVar6,avStack_50,param_2,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_50);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  else {
    uVar4 = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::onUpdate() */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::onUpdate(Effect_DinoRun_For_Artifact_Dinosaur_horn *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  RtWeakPtrBase *pRVar4;
  DinosaurRunner *this_00;
  char *pcVar5;
  string *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  EffectObjectType *this_01;
  Board *pBVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50 [3];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xa4) <= fVar11) {
    fVar11 = (float)PVZ_T();
    *(float *)(this + 0xa4) = fVar11 + 0.25;
    applyDamage(this);
  }
  applyDamageNormal(this);
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xa8) <= fVar11) {
    uVar12 = PVZ_EOT();
    bVar3 = false;
    *(undefined4 *)(this + 0xa8) = uVar12;
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xd8));
    while( true ) {
      local_38[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0xd8));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_50,(__normal_iterator *)local_38);
      if (!bVar2) break;
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_38,pRVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_38);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
        nop();
        if (this_00 != (DinosaurRunner *)0x0) {
          cVar1 = DinosaurRunner::CanBeScaredAway(this_00);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
            this[0xb4] = (Effect_DinoRun_For_Artifact_Dinosaur_horn)0x1;
            goto LAB_037da818;
          }
          bVar3 = true;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
    }
    if (bVar3) {
      this[0xb4] = (Effect_DinoRun_For_Artifact_Dinosaur_horn)0x0;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)local_38);
      psVar6 = (string *)
               Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
      std::string::string((string *)local_50,"effect_dinoshadow");
      ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar6);
      std::string::~string((string *)local_50);
      nop();
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
      if (bVar3) {
        this_01 = (EffectObjectType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        EffectObjectType::AddResourceRequirements(this_01,(set *)local_38);
      }
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      uVar7 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                        ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                         local_38);
      uVar8 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)local_38);
      std::vector<std::string,std::allocator<std::string>>::
      vector<std::_Rb_tree_const_iterator<std::string>,void>
                ((exception_ptr *)local_50,uVar7,uVar8,auStack_60);
      Board::LoadResourceGroupsForGameplay(pBVar10,(vector *)local_50);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_50);
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)local_50,"effect_dinoshadow");
      lVar9 = Board::AddEffectObject(pBVar10,(string *)local_50,0,0);
      std::string::~string((string *)local_50);
      nop();
      uVar12 = Board::MakeRenderOrder(0x64d48,5,10);
      FUN_037d506c(lVar9 + 0x1c,uVar12);
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Stop_Zomb_Dino_Extra_Tyrannosaurus_Run");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
                ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)local_38);
    }
    else {
      this[0xb4] = (Effect_DinoRun_For_Artifact_Dinosaur_horn)0x1;
    }
  }
LAB_037da818:
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xac) <= fVar11) {
    uVar12 = PVZ_EOT();
    *(undefined4 *)(this + 0xac) = uVar12;
    if (this[0xb4] != (Effect_DinoRun_For_Artifact_Dinosaur_horn)0x0) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Stop_Zomb_Dino_Extra_Tyrannosaurus_Run");
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::pickDinoTypeName() */

void Effect_DinoRun_For_Artifact_Dinosaur_horn::pickDinoTypeName(void)

{
  bool bVar1;
  long in_x0;
  TypeToSpawnDes *pTVar2;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_58 [8];
  TypeToSpawnDes aTStack_50 [8];
  undefined4 local_48;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0xc0));
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0xc0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1) {
    pTVar2 = (TypeToSpawnDes *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    ArtifactDinosaurHornProperties::TypeToSpawnDes::TypeToSpawnDes(aTStack_50,pTVar2);
    FUN_05475d88(asStack_58,aTStack_50);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)aPStack_38,asStack_58,local_48);
    std::string::~string(asStack_58);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_50);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_68);
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_38);
  thunk_FUN_05475e00(in_x0 + 0xb8,aTStack_50);
  FUN_05475d88();
  std::string::~string((string *)aTStack_50);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoRun_For_Artifact_Dinosaur_horn::spawnDinos(std::vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,
   std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes> >, int) */

void __thiscall
Effect_DinoRun_For_Artifact_Dinosaur_horn::spawnDinos
          (Effect_DinoRun_For_Artifact_Dinosaur_horn *this,vector *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *this_00;
  DinosaurRunner *this_01;
  long lVar5;
  int iVar6;
  int iVar7;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
  ::operator=((vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
               *)(this + 0xc0),param_2);
  *(int *)(this + 0xb0) = param_3;
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  if (0 < iVar1) {
    iVar7 = 0;
    while( true ) {
      iVar6 = 0;
      if (0 < param_3) {
        do {
          pickDinoTypeName();
          this_00 = (RtObject *)SpawnDino(this,asStack_30,iVar7);
          if (this_00 != (RtObject *)0x0) {
            this_01 = Sexy::RtObject::Cast<DinosaurRunner>(this_00);
            if (this_01 != (DinosaurRunner *)0x0) {
              DinosaurRunner::SetRunRight(this_01,30.0);
              TwinsAssistPerson::GetPopAnimRig();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              FUN_05475d88(asStack_20,lVar5 + 8);
              iVar2 = getMaxNumToSeckill(this,asStack_20);
              TwinsAssistPerson::GetPopAnimRig();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
              FUN_05475d88(asStack_10,lVar5 + 8);
              iVar3 = getMaxNumToSeckill(this,asStack_10);
              RandRangeInt(iVar2,iVar3);
              std::string::~string(asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
              std::string::~string(asStack_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              TwinsAssistPerson::GetPopAnimRig();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
              FUN_05475d88(asStack_10,lVar5 + 8);
              uVar4 = getMinNumToSeckill(this,asStack_10);
              FUN_037d5084(this_01 + 0x244,uVar4);
              std::string::~string(asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
              FUN_037d53b8(this_01 + 0x248);
            }
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
            std::vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>>::
            push_back((vector<Sexy::RtWeakPtr<Creature>,std::allocator<Sexy::RtWeakPtr<Creature>>> *
                      )(this + 0xd8),(RtWeakPtr *)asStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          iVar6 = iVar6 + 1;
          std::string::~string(asStack_30);
        } while (iVar6 < *(int *)(this + 0xb0));
      }
      iVar7 = iVar7 + 1;
      if (iVar7 == iVar1) break;
      param_3 = *(int *)(this + 0xb0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

