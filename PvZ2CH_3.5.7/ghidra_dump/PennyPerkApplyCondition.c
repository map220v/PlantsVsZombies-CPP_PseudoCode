// Class: PennyPerkApplyCondition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyCondition::StaticClassInit() */

void PennyPerkApplyCondition::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkApplyCondition");
    (*pcVar2)(plVar1,asStack_10,FUN_036c02fc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkApplyCondition::StaticGetClass() */

long * PennyPerkApplyCondition::StaticGetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkApplyCondition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkApplyCondition::GetClass() const */

long * PennyPerkApplyCondition::GetClass(void)

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
  uVar2 = PennyPerkTimedEffect::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkApplyCondition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkApplyCondition::~PennyPerkApplyCondition() */

void __thiscall PennyPerkApplyCondition::~PennyPerkApplyCondition(PennyPerkApplyCondition *this)

{
  *(undefined ***)this = &PTR_GetClass_06681680;
  PennyPerkTimedEffect::~PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  return;
}


/* PennyPerkApplyCondition::~PennyPerkApplyCondition() */

void __thiscall PennyPerkApplyCondition::~PennyPerkApplyCondition(PennyPerkApplyCondition *this)

{
  ~PennyPerkApplyCondition(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkApplyCondition::PennyPerkApplyCondition() */

void __thiscall PennyPerkApplyCondition::PennyPerkApplyCondition(PennyPerkApplyCondition *this)

{
  PennyPerkTimedEffect::PennyPerkTimedEffect((PennyPerkTimedEffect *)this);
  *(undefined ***)this = &PTR_GetClass_06681680;
  return;
}


/* PennyPerkApplyCondition::StaticNew() */

PennyPerkApplyCondition * PennyPerkApplyCondition::StaticNew(void)

{
  PennyPerkApplyCondition *this;
  
  this = ::operator_new(0x28);
  PennyPerkApplyCondition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyCondition::calcNextUpdateTime() */

void __thiscall PennyPerkApplyCondition::calcNextUpdateTime(PennyPerkApplyCondition *this)

{
  long extraout_x0;
  float *pfVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_036be178(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 + *pfVar1);
}


/* PennyPerkApplyCondition::canApplyCondition(Zombie*, ZombieConditions) */

bool __thiscall
PennyPerkApplyCondition::canApplyCondition(undefined8 param_1_00,Zombie *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ZombieSkyCityTwinsPlane *pZVar4;
  ZombieCavalry *pZVar5;
  ZombieModernSolarTruck *pZVar6;
  ZombieSkycityBattlePlane *pZVar7;
  
  bVar1 = true;
  if (param_3 == 0x19) {
    cVar2 = Zombie::IsBoss(param_1);
    if ((((cVar2 != '\0') ||
         (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 != '\0')) ||
       (((iVar3 = Zombie::GetSizeType(param_1), iVar3 == 2 ||
         (pZVar4 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)param_1),
         pZVar4 != (ZombieSkyCityTwinsPlane *)0x0)) ||
        ((pZVar5 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)param_1),
         pZVar5 != (ZombieCavalry *)0x0 ||
         (pZVar6 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)param_1),
         pZVar6 != (ZombieModernSolarTruck *)0x0)))))) {
      return false;
    }
    pZVar7 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)param_1);
    bVar1 = pZVar7 == (ZombieSkycityBattlePlane *)0x0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyCondition::applyCondition() */

void __thiscall PennyPerkApplyCondition::applyCondition(PennyPerkApplyCondition *this)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long extraout_x0;
  ulong uVar7;
  Zombie *pZVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  ResourceInfo *pRVar12;
  long *plVar13;
  RealObject *pRVar14;
  int extraout_w1;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ZombieConditionTracker *pZVar18;
  Zombie *pZVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  iVar6 = 0x7fffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar16 = *(undefined8 *)(extraout_x0 + 0xc0);
  uVar7 = FUN_036bdf7c(uVar16,*(undefined8 *)(extraout_x0 + 200));
  uVar15 = (ulong)*(int *)(this + 0x10);
  if (uVar15 < uVar7) {
    uVar17 = *(undefined8 *)(extraout_x0 + 0xd8);
    uVar7 = FUN_036bdf7c(uVar17,*(undefined8 *)(extraout_x0 + 0xe0));
    if (uVar15 < uVar7) {
      piVar11 = (int *)FUN_036bdf94(uVar16,uVar15);
      piVar9 = (int *)FUN_036bdf94(uVar17,uVar15);
      iVar6 = RandRangeInt(*piVar11,*piVar9);
    }
  }
  uVar16 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_28,uVar16,0x29);
  while ((bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar3 &&
         (0 < iVar6))) {
    iVar6 = iVar6 + -1;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
    if (cVar4 != '\0') {
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      uVar5 = operator|(1,0x200);
      cVar4 = Zombie::MatchesAny(pZVar8,uVar5);
      if (cVar4 == '\0') {
        uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar4 = Zombie::HasCondition(uVar16,0x27);
        if (cVar4 == '\0') {
          uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          cVar4 = Zombie::HasCondition(uVar16,0x25);
          if (cVar4 == '\0') {
            uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            cVar4 = Zombie::HasCondition(uVar16,0x65);
            if (cVar4 == '\0') {
              uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
              cVar4 = RealObject::IsOnTeam(uVar16,1);
              if (cVar4 == '\0') {
                local_40 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)(extraout_x0 + 0xa8));
                local_38 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(extraout_x0 + 0xa8));
                while (bVar3 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_40,
                                          (__normal_iterator *)&local_38), bVar3) {
                  piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                             ((exception_ptr *)&local_40);
                  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48)
                  ;
                  cVar4 = canApplyCondition(this,pRVar12,*piVar11);
                  if (cVar4 != '\0') {
                    if (*piVar11 == 0x1e) {
                      bVar3 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::SetHasPlantFood(bVar3);
                    }
                    else if (*piVar11 == 0x19) {
                      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::SetFacing(pZVar8,1);
                      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      pZVar8 = (Zombie *)PVZ_EOT();
                      Zombie::ApplyCondition(pZVar8,0,uVar16,0x19,1);
                      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      (**(code **)(*plVar13 + 0x2f0))();
                      puVar2 = gMessageRouter;
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,
                                 (RtWeakPtrBase *)aRStack_48);
                      MessageRouter::Broadcast<Zombie*,Sexy::RtWeakPtr<Zombie>>
                                ((MessageRouter *)puVar2,Message::ZombieHypnotized,aRStack_30);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                      pRVar14 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      RealObject::JoinTeam(pRVar14,1);
                    }
                    else {
                      cVar4 = std::vector<int,std::allocator<int>>::empty
                                        ((vector<int,std::allocator<int>> *)(extraout_x0 + 0x78));
                      iVar1 = *(int *)(this + 0x10);
                      pZVar18._0_4_ = (ZombieConditionTracker *)0x0;
                      if (cVar4 == '\0') {
                        piVar9 = (int *)FUN_036bdf94(*(undefined8 *)(extraout_x0 + 0x78),(long)iVar1
                                                    );
                        pZVar18._0_4_ = (ZombieConditionTracker *)(float)*piVar9;
                      }
                      puVar10 = (undefined8 *)
                                FUN_036be178(*(undefined8 *)(extraout_x0 + 0x90),(long)iVar1);
                    /* WARNING: Load size is inaccurate */
                      pZVar19._0_4_ = *puVar10;
                      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      uVar16 = Zombie::GetConditionTracker(pZVar8);
                      ZombieConditionTracker::SetAdditionalValue(pZVar18._0_4_,uVar16,*piVar11);
                      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::ApplyCondition(pZVar19._0_4_,0,uVar16,*piVar11,1);
                    }
                  }
                  eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                            ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_40);
                }
              }
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkApplyCondition::onUpdate() */

void __thiscall PennyPerkApplyCondition::onUpdate(PennyPerkApplyCondition *this)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long extraout_x0;
  ulong uVar7;
  Zombie *pZVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  ResourceInfo *pRVar12;
  long *plVar13;
  RealObject *pRVar14;
  int extraout_w1;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ZombieConditionTracker *pZVar18;
  Zombie *pZVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  MiniGamePerk::GetProps();
  iVar6 = 0x7fffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar16 = *(undefined8 *)(extraout_x0 + 0xc0);
  uVar7 = FUN_036bdf7c(uVar16,*(undefined8 *)(extraout_x0 + 200));
  uVar15 = (ulong)*(int *)(this + 0x10);
  if (uVar15 < uVar7) {
    uVar17 = *(undefined8 *)(extraout_x0 + 0xd8);
    uVar7 = FUN_036bdf7c(uVar17,*(undefined8 *)(extraout_x0 + 0xe0));
    if (uVar15 < uVar7) {
      piVar11 = (int *)FUN_036bdf94(uVar16,uVar15);
      piVar9 = (int *)FUN_036bdf94(uVar17,uVar15);
      iVar6 = RandRangeInt(*piVar11,*piVar9);
    }
  }
  uVar16 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_28,uVar16,0x29);
  while ((bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar3 &&
         (0 < iVar6))) {
    iVar6 = iVar6 + -1;
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
    if (cVar4 != '\0') {
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      uVar5 = operator|(1,0x200);
      cVar4 = Zombie::MatchesAny(pZVar8,uVar5);
      if (cVar4 == '\0') {
        uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar4 = Zombie::HasCondition(uVar16,0x27);
        if (cVar4 == '\0') {
          uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          cVar4 = Zombie::HasCondition(uVar16,0x25);
          if (cVar4 == '\0') {
            uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            cVar4 = Zombie::HasCondition(uVar16,0x65);
            if (cVar4 == '\0') {
              uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
              cVar4 = RealObject::IsOnTeam(uVar16,1);
              if (cVar4 == '\0') {
                uStack_40 = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     *)(extraout_x0 + 0xa8));
                uStack_38 = std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)(extraout_x0 + 0xa8));
                while (bVar3 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&uStack_40,
                                          (__normal_iterator *)&uStack_38), bVar3) {
                  piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                             ((exception_ptr *)&uStack_40);
                  pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48)
                  ;
                  cVar4 = canApplyCondition(this,pRVar12,*piVar11);
                  if (cVar4 != '\0') {
                    if (*piVar11 == 0x1e) {
                      bVar3 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::SetHasPlantFood(bVar3);
                    }
                    else if (*piVar11 == 0x19) {
                      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::SetFacing(pZVar8,1);
                      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      pZVar8 = (Zombie *)PVZ_EOT();
                      Zombie::ApplyCondition(pZVar8,0,uVar16,0x19,1);
                      plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      (**(code **)(*plVar13 + 0x2f0))();
                      puVar2 = gMessageRouter;
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,
                                 (RtWeakPtrBase *)aRStack_48);
                      MessageRouter::Broadcast<Zombie*,Sexy::RtWeakPtr<Zombie>>
                                ((MessageRouter *)puVar2,Message::ZombieHypnotized,aRStack_30);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                      pRVar14 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      RealObject::JoinTeam(pRVar14,1);
                    }
                    else {
                      cVar4 = std::vector<int,std::allocator<int>>::empty
                                        ((vector<int,std::allocator<int>> *)(extraout_x0 + 0x78));
                      iVar1 = *(int *)(this + 0x10);
                      pZVar18._0_4_ = (ZombieConditionTracker *)0x0;
                      if (cVar4 == '\0') {
                        piVar9 = (int *)FUN_036bdf94(*(undefined8 *)(extraout_x0 + 0x78),(long)iVar1
                                                    );
                        pZVar18._0_4_ = (ZombieConditionTracker *)(float)*piVar9;
                      }
                      puVar10 = (undefined8 *)
                                FUN_036be178(*(undefined8 *)(extraout_x0 + 0x90),(long)iVar1);
                    /* WARNING: Load size is inaccurate */
                      pZVar19._0_4_ = *puVar10;
                      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      uVar16 = Zombie::GetConditionTracker(pZVar8);
                      ZombieConditionTracker::SetAdditionalValue(pZVar18._0_4_,uVar16,*piVar11);
                      uVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
                      Zombie::ApplyCondition(pZVar19._0_4_,0,uVar16,*piVar11,1);
                    }
                  }
                  eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                            ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&uStack_40);
                }
              }
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

