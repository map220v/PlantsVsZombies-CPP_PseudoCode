// Class: ZombieBalletSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::StaticClassInit() */

void ZombieBalletSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBalletCollection");
    (*pcVar3)(plVar2,asStack_10,FUN_0464d068,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieBalletSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0464d3bc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBalletSubSystem::StaticGetClass() */

long * ZombieBalletSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBalletSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBalletSubSystem::GetClass() const */

long * ZombieBalletSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBalletSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::GetBalletForZombie(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletSubSystem::GetBalletForZombie(ZombieBalletSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  ZombieBalletCollection *pZVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_0464aa1c(uVar5,*(undefined8 *)(this + 0x18));
    if (iVar2 <= (int)lVar4) {
      pZVar3 = (ZombieBalletCollection *)0x0;
      break;
    }
    pZVar3 = (ZombieBalletCollection *)FUN_0464aa4c(uVar5,lVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    cVar1 = ZombieBalletCollection::ContainsZombie(pZVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::IsAllBottomRow(ZombieBalletCollection&) */

void __thiscall
ZombieBalletSubSystem::IsAllBottomRow(ZombieBalletSubSystem *this,ZombieBalletCollection *param_1)

{
  char cVar1;
  int iVar2;
  SharkMinion *this_00;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieBalletCollection::GetHeadZombie();
  do {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 == '\0') {
      uVar3 = 1;
LAB_0464b918:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar2 = SharkMinion::getRow(this_00);
    if (iVar2 != *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1) {
      uVar3 = 0;
      goto LAB_0464b918;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    ZombieBalletCollection::GetNextZombie(aRStack_10,param_1,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::IsAllTopRow(ZombieBalletCollection&) */

void __thiscall
ZombieBalletSubSystem::IsAllTopRow(ZombieBalletSubSystem *this,ZombieBalletCollection *param_1)

{
  char cVar1;
  int iVar2;
  SharkMinion *this_00;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieBalletCollection::GetHeadZombie();
  do {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 == '\0') {
      uVar3 = 1;
LAB_0464b9f8:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar2 = SharkMinion::getRow(this_00);
    if (iVar2 != 0) {
      uVar3 = 0;
      goto LAB_0464b9f8;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    ZombieBalletCollection::GetNextZombie(aRStack_10,param_1,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::onZombieEat(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletSubSystem::onZombieEat(ZombieBalletSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long lVar2;
  ZombieBallet *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = GetBalletForZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar2 != 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieBalletCollection::GetNextZombie(aRStack_20,lVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    while (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar1 != '\0') {
      this_00 = (ZombieBallet *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      ZombieBallet::StopWalk(this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
      ZombieBalletCollection::GetNextZombie(aRStack_10,lVar2,aRStack_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::onZombieEatEnd(Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletSubSystem::onZombieEatEnd(ZombieBalletSubSystem *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  long lVar2;
  ZombieBallet *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = GetBalletForZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (lVar2 != 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieBalletCollection::GetNextZombie(aRStack_20,lVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    while (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar1 != '\0') {
      this_00 = (ZombieBallet *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      ZombieBallet::StartWalk(this_00);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
      ZombieBalletCollection::GetNextZombie(aRStack_10,lVar2,aRStack_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aRStack_20,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBalletSubSystem::ZombieBalletSubSystem() */

void __thiscall ZombieBalletSubSystem::ZombieBalletSubSystem(ZombieBalletSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06887460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieBalletSubSystem::StaticNew() */

ZombieBalletSubSystem * ZombieBalletSubSystem::StaticNew(void)

{
  ZombieBalletSubSystem *this;
  
  this = ::operator_new(0x28);
  ZombieBalletSubSystem(this);
  return this;
}


/* ZombieBalletSubSystem::registerForEvents() */

void __thiscall ZombieBalletSubSystem::registerForEvents(ZombieBalletSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieBalletSubSystem,void(ZombieBalletSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::updateLaneChange() */

void ZombieBalletSubSystem::updateLaneChange(void)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ZombieBalletSubSystem *in_x0;
  char *pcVar6;
  undefined1 *puVar7;
  ZombieBallet *pZVar8;
  long *plVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var10;
  long lVar11;
  Zombie *pZVar12;
  EntityConditionTracker<Creature,CreatureConditions> *this;
  undefined8 *puVar13;
  float *pfVar14;
  ZombieBalletCollection *pZVar15;
  SharkMinion *pSVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  float local_30 [2];
  undefined4 local_28;
  float local_24 [3];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar17 = *(undefined8 *)(in_x0 + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_0464aa1c(uVar17,*(undefined8 *)(in_x0 + 0x18));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_0464ca78:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar19 = (long)(int)uVar1 + -1;
  lVar18 = (long)(int)uVar1;
  lVar20 = lVar19;
  do {
    pcVar6 = (char *)FUN_0464aa4c(uVar17,lVar18);
    if (*pcVar6 == '\0') {
      fVar21 = (float)PVZ_T();
      puVar7 = (undefined1 *)FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
      if (*(float *)(puVar7 + 8) < fVar21) {
        *puVar7 = 1;
        fVar21 = (float)PVZ_T();
        *(float *)(puVar7 + 4) = fVar21 + 2.0;
        iVar5 = Sexy::Rand(2);
        iVar4 = -1;
        if (iVar5 == 0) {
          iVar4 = 1;
        }
        pZVar15 = (ZombieBalletCollection *)FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
        cVar3 = IsAllTopRow(in_x0,pZVar15);
        if (cVar3 == '\0') {
          pZVar15 = (ZombieBalletCollection *)FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
          cVar3 = IsAllBottomRow(in_x0,pZVar15);
          if (cVar3 != '\0') {
            iVar4 = -1;
          }
        }
        else {
          iVar4 = 1;
        }
        FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
        ZombieBalletCollection::GetHeadZombie();
        while (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38), cVar3 != '\0') {
          while( true ) {
            pZVar12 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            cVar3 = Zombie::IsSuspended(pZVar12);
            if (cVar3 != '\0') break;
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            cVar3 = (**(code **)(*plVar9 + 0x328))();
            if (cVar3 != '\0') break;
            pZVar12 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            cVar3 = Zombie::IsControlled(pZVar12);
            if (cVar3 != '\0') break;
            pZVar12 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar5 = Zombie::getZombieStateSerialization(pZVar12);
            if (iVar5 == 0x20) break;
            pZVar12 = (Zombie *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar5 = Zombie::getZombieStateSerialization(pZVar12);
            if (iVar5 == 0x1f) break;
            pSVar16 = (SharkMinion *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar5 = SharkMinion::getRow(pSVar16);
            if (iVar4 == 1) {
              bVar2 = iVar5 == *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
            }
            else {
              bVar2 = iVar5 == 0;
            }
            DVec3::DVec3((DVec3 *)&local_18);
            pSVar16 = (SharkMinion *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            iVar5 = SharkMinion::getRow(pSVar16);
            iVar5 = BoardTransforms::GridToBoardSpaceY(iVar5 + (uint)!bVar2 * iVar4);
            local_18 = CONCAT44((float)iVar5,(undefined4)local_18);
            pZVar8 = (ZombieBallet *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            ZombieBallet::setEndPosition(pZVar8,(SexyVector3 *)&local_18);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            *(undefined1 *)(lVar11 + 0x801) = 0;
            uVar17 = FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
            ZombieBalletCollection::GetNextZombie
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_28,uVar17,
                       (RtWeakPtr<Sexy::SoundResource> *)local_30);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aRStack_38,(RtWeakPtr *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
            if (cVar3 == '\0') goto LAB_0464cd24;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          *(undefined1 *)(lVar11 + 0x801) = 1;
          uVar17 = FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_38);
          ZombieBalletCollection::GetNextZombie
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,uVar17,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_28);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)aRStack_38,(RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        }
LAB_0464cd24:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
      }
    }
    else {
      fVar21 = (float)PVZ_T();
      puVar7 = (undefined1 *)FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
      fVar24 = *(float *)(puVar7 + 4);
      if (fVar24 <= fVar21) {
        *puVar7 = 0;
        fVar21 = (float)PVZ_T();
        *(float *)(puVar7 + 8) = fVar21 + 4.0;
      }
      else {
        ZombieBalletCollection::GetHeadZombie();
        while (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40), cVar3 != '\0') {
          while( true ) {
            pZVar8 = (ZombieBallet *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            local_28 = ZombieBallet::getEndPosition(pZVar8);
            local_24[0] = fVar24;
            cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
            if (cVar3 == '\0') break;
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            cVar3 = (**(code **)(*plVar9 + 0x328))();
            if (cVar3 != '\0') break;
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            lVar11 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(p_Var10);
            fVar21 = local_24[0];
            if (*(float *)(lVar11 + 4) == local_24[0]) break;
            pZVar12 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            cVar3 = Zombie::IsControlled(pZVar12);
            if ((cVar3 != '\0') ||
               (lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40),
               *(char *)(lVar11 + 0x801) != '\0')) break;
            pZVar12 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            this = (EntityConditionTracker<Creature,CreatureConditions> *)
                   Zombie::GetConditionTracker(pZVar12);
            fVar22 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
                                      (this);
            if (fVar22 == 0.0) {
              fVar22 = 1.0;
            }
            fVar23 = (float)PVZ_Dt();
            fVar22 = fVar22 * fVar23 * 100.0;
            p_Var10 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            puVar13 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var10);
            uVar17 = *puVar13;
            local_18._4_4_ = (float)((ulong)uVar17 >> 0x20);
            local_10 = *(undefined4 *)(puVar13 + 1);
            local_18 = uVar17;
            if (fVar21 <= local_18._4_4_) {
              local_30[0] = local_18._4_4_ - fVar22;
              pfVar14 = eastl::max_alt<float>(local_30,local_24);
              local_18 = CONCAT44(*pfVar14,(undefined4)local_18);
            }
            else {
              local_30[0] = fVar22 + local_18._4_4_;
              pfVar14 = eastl::min_alt<float>(local_30,local_24);
              local_18 = CONCAT44(*pfVar14,(undefined4)local_18);
            }
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            (**(code **)(*plVar9 + 0x78))(plVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            uVar17 = FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            ZombieBalletCollection::GetNextZombie
                      ((RtWeakPtr<Sexy::SoundResource> *)local_30,uVar17,aRStack_38);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)aRStack_40,(RtWeakPtr *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
            if (cVar3 == '\0') goto LAB_0464ca60;
          }
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          *(undefined1 *)(lVar11 + 0x801) = 1;
          uVar17 = FUN_0464aa4c(*(undefined8 *)(in_x0 + 0x10),lVar18);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_40);
          ZombieBalletCollection::GetNextZombie
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,uVar17,
                     (RtWeakPtr<Sexy::SoundResource> *)local_30);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)aRStack_40,(RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
        }
LAB_0464ca60:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
    }
    if (lVar20 == lVar19 - (ulong)uVar1) goto LAB_0464ca78;
    uVar17 = *(undefined8 *)(in_x0 + 0x10);
    lVar18 = lVar20;
    lVar20 = lVar20 + -1;
  } while( true );
}


/* ZombieBalletSubSystem::~ZombieBalletSubSystem() */

void __thiscall ZombieBalletSubSystem::~ZombieBalletSubSystem(ZombieBalletSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06887460;
  std::vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>>::~vector
            ((vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>> *)(this + 0x10))
  ;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieBalletSubSystem::~ZombieBalletSubSystem() */

void __thiscall ZombieBalletSubSystem::~ZombieBalletSubSystem(ZombieBalletSubSystem *this)

{
  ~ZombieBalletSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::OnBalletSegmentCreated(Sexy::RtWeakPtr<ZombieBallet>,
   Sexy::RtWeakPtr<ZombieBallet>) */

void __thiscall
ZombieBalletSubSystem::OnBalletSegmentCreated
          (ZombieBalletSubSystem *this,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3)

{
  ZombieBalletCollection *pZVar1;
  Zombie *this_00;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
  pZVar1 = (ZombieBalletCollection *)GetBalletForZombie(this,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (pZVar1 == (ZombieBalletCollection *)0x0) {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pRVar2 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar2);
    ZombieBalletCollection::ZombieBalletCollection((ZombieBalletCollection *)aRStack_38,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
    ZombieBalletCollection::AddZombie((ZombieBalletCollection *)aRStack_38,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>>::push_back
              ((vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>> *)
               (this + 0x10),(ZombieBalletCollection *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
    GetBalletForZombie(this,aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    ZombieBalletCollection::~ZombieBalletCollection((ZombieBalletCollection *)aRStack_38);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_3);
    ZombieBalletCollection::AddZombie(pZVar1,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::Update() */

void __thiscall ZombieBalletSubSystem::Update(ZombieBalletSubSystem *this)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ZombieBalletCollection *pZVar5;
  ZombieBallet *this_00;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_0464aa1c(uVar6,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar2 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar2;
      pZVar5 = (ZombieBalletCollection *)FUN_0464aa4c(uVar6,lVar9);
      cVar3 = ZombieBalletCollection::RemoveNotTeamZombie(pZVar5);
      if (cVar3 == '\0') {
        pZVar5 = (ZombieBalletCollection *)FUN_0464aa4c(*(undefined8 *)(this + 0x10),lVar9);
        iVar4 = ZombieBalletCollection::GetSize(pZVar5);
      }
      else {
        FUN_0464aa4c(*(undefined8 *)(this + 0x10),lVar9);
        ZombieBalletCollection::GetHeadZombie();
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
        if (cVar3 != '\0') {
          this_00 = (ZombieBallet *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          ZombieBallet::StartWalk(this_00);
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
        onZombieEatEnd(this,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        pZVar5 = (ZombieBalletCollection *)FUN_0464aa4c(*(undefined8 *)(this + 0x10),lVar9);
        iVar4 = ZombieBalletCollection::GetSize(pZVar5);
      }
      if (iVar4 == 0) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_18 = __gnu_cxx::
                   __normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                   ::operator+((__normal_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*,std::vector<Sexy::Delegate1wRet<bool,SexyURL_const&>,std::allocator<Sexy::Delegate1wRet<bool,SexyURL_const&>>>>
                                *)&local_20,lVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>>::erase
                  ((vector<ZombieBalletCollection,std::allocator<ZombieBalletCollection>> *)
                   (this + 0x10),local_10);
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 0x10);
      lVar2 = lVar8 + -1;
      lVar9 = lVar8;
    }
  }
  updateLaneChange();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletSubSystem::OnZombieRemoved(Zombie*) */

void __thiscall ZombieBalletSubSystem::OnZombieRemoved(ZombieBalletSubSystem *this,Zombie *param_1)

{
  bool bVar1;
  ZombieBalletCollection *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieBallet>((RtObject *)param_1), bVar1)) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    onZombieEatEnd(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    pZVar2 = (ZombieBalletCollection *)GetBalletForZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (pZVar2 != (ZombieBalletCollection *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      ZombieBalletCollection::RemoveZombie(pZVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

