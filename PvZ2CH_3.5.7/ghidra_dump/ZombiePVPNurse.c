// Class: ZombiePVPNurse


/* ZombiePVPNurse::ZombiePVPNurse() */

void __thiscall ZombiePVPNurse::ZombiePVPNurse(ZombiePVPNurse *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0691ca30;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPNurse_0691d468;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x808));
  return;
}


/* ZombiePVPNurse::~ZombiePVPNurse() */

void __thiscall ZombiePVPNurse::~ZombiePVPNurse(ZombiePVPNurse *this)

{
  *(undefined ***)this = &PTR_GetClass_0691ca30;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPNurse_0691d468;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x808));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePVPNurse::~ZombiePVPNurse() */

void __thiscall ZombiePVPNurse::~ZombiePVPNurse(ZombiePVPNurse *this)

{
  ~ZombiePVPNurse(this + -0x10);
  return;
}


/* ZombiePVPNurse::~ZombiePVPNurse() */

void __thiscall ZombiePVPNurse::~ZombiePVPNurse(ZombiePVPNurse *this)

{
  ~ZombiePVPNurse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPNurse::~ZombiePVPNurse() */

void __thiscall ZombiePVPNurse::~ZombiePVPNurse(ZombiePVPNurse *this)

{
  ~ZombiePVPNurse(this + -0x10);
  return;
}


/* ZombiePVPNurse::CanWalkTreat() */

void __thiscall ZombiePVPNurse::CanWalkTreat(ZombiePVPNurse *this)

{
  RealObject::IsOnOpposingTeam(this,1);
  return;
}


/* ZombiePVPNurse::onTreatAnimationDone(std::string const&) */

void ZombiePVPNurse::onTreatAnimationDone(string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  cVar1 = Zombie::HasCondition(param_1,0x19);
  if ((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,0x77), cVar1 == '\0')) {
    cVar1 = RealObject::IsOnTeam(param_1,1);
    if (cVar1 == '\0') {
      Zombie::SetFacing((Zombie *)param_1);
    }
  }
  cVar1 = (**(code **)(*(long *)param_1 + 0x4c0))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x800) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::IsArenaValidTreatTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ZombiePVPNurse::IsArenaValidTreatTarget(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  RtObject *pRVar4;
  Zombie *pZVar5;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 == '\0') {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar4);
      if (bVar2) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        bVar3 = (**(code **)(*(long *)pZVar5 + 0x330))();
        bVar3 = bVar3 ^ 1;
        goto LAB_04996d9c;
      }
    }
  }
  bVar3 = 0;
LAB_04996d9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::IsBoardValidTreatTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ZombiePVPNurse::IsBoardValidTreatTarget(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  RtObject *pRVar4;
  Zombie *pZVar5;
  Plant *this;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_10,(RtWeakPtrBase *)param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar2 == '\0') {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar4);
      if (bVar3) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
        cVar2 = (**(code **)(*(long *)pZVar5 + 0x330))();
        if (cVar2 != '\0') goto LAB_04996f74;
      }
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar3 = Sexy::RtObject::IsA<Plant>(pRVar4);
      if (bVar3) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        this = Sexy::RtObject::Cast<Plant>(pRVar4);
        cVar1 = Plant::CanBeTargeted(this);
      }
      goto LAB_04996f78;
    }
  }
LAB_04996f74:
  cVar1 = '\0';
LAB_04996f78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ZombiePVPNurse::IsArenaBattle() */

char ZombiePVPNurse::IsArenaBattle(void)

{
  long lVar1;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0)) {
    lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (*(char *)(lVar1 + 0x114) != '\0') {
      return *(char *)(lVar1 + 0x114);
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::IsValidTreatTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ZombiePVPNurse::IsValidTreatTarget(ZombiePVPNurse *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsArenaBattle();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = IsBoardValidTreatTarget(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = IsArenaValidTreatTarget(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombiePVPNurse::StaticNew() */

ZombiePVPNurse * ZombiePVPNurse::StaticNew(void)

{
  ZombiePVPNurse *this;
  
  this = ::operator_new(0x820);
  ZombiePVPNurse(this);
  return this;
}


/* ZombiePVPNurse::GetTimeBeforeFirstTreat() */

undefined1  [16] __thiscall ZombiePVPNurse::GetTimeBeforeFirstTreat(ZombiePVPNurse *this)

{
  char cVar1;
  ZombiePVPNurseProps *pZVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  cVar1 = IsArenaBattle();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)this);
    return ZEXT416(*(uint *)(pZVar2 + 0x270));
  }
  pZVar2 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)this);
  ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x228));
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


/* ZombiePVPNurse::GetTimeBetweenTreat() */

undefined1  [16] __thiscall ZombiePVPNurse::GetTimeBetweenTreat(ZombiePVPNurse *this)

{
  char cVar1;
  ZombiePVPNurseProps *pZVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  cVar1 = IsArenaBattle();
  if (cVar1 == '\0') {
    pZVar2 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)this);
    return ZEXT416(*(uint *)(pZVar2 + 0x274));
  }
  pZVar2 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)this);
  ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x230));
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::IsZombieInPool(Zombie*) */

void __thiscall ZombiePVPNurse::IsZombieInPool(ZombiePVPNurse *this,Zombie *param_1)

{
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ZombiePVPNurseProps *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<std::string,std::allocator<std::string>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_38,lVar2 + 8);
  pZVar3 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)this);
  std::vector<std::string,std::allocator<std::string>>::vector
            (avStack_20,(vector *)(pZVar3 + 0x210));
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar4,uVar5,asStack_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_20);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::GetBoardValidTreatTarget() */

void ZombiePVPNurse::GetBoardValidTreatTarget(void)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Zombie *in_x0;
  undefined8 *puVar9;
  Zombie *pZVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Plant *pPVar13;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  int local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar5 = 1;
  cVar3 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar3 == '\0') {
    uVar5 = operator|(2,1);
  }
  cVar3 = Zombie::IsIZombie(in_x0);
  if (cVar3 == '\0') {
    iVar6 = SharkMinion::getRow((SharkMinion *)in_x0);
    iVar7 = SharkMinion::getRow((SharkMinion *)in_x0);
    local_60 = 0;
  }
  else {
    local_60 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x0);
    iVar6 = SharkMinion::getRow((SharkMinion *)in_x0);
    iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar8 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x0);
    iVar7 = iVar7 - iVar8;
  }
  Sexy::Insets::Insets((Insets *)local_30,local_60,iVar6,iVar7,1);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar5,
             (Insets *)local_30);
  cVar3 = Zombie::IsIZombie(in_x0);
  uVar11 = local_20;
  if (cVar3 != '\0') {
    iVar7 = FUN_04996320(local_20,local_18);
    uVar1 = iVar7 - 1;
    if (-1 < (int)uVar1) {
      lVar14 = (long)(int)uVar1 + -1;
      lVar2 = lVar14;
      lVar16 = (long)(int)uVar1;
      do {
        lVar15 = lVar2;
        puVar9 = (undefined8 *)FUN_0499632c(uVar11,lVar16);
        if ((RtObject *)*puVar9 == (RtObject *)0x0) {
LAB_04998ee8:
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
          local_38 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_40,lVar16);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_30,(__normal_iterator *)&local_38);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_30[0]);
        }
        else {
          bVar4 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar9);
          if (bVar4) {
            puVar9 = (undefined8 *)FUN_0499632c(local_20,lVar16);
            pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
            fVar17 = (float)FUN_049962f4(*(undefined4 *)(pZVar10 + 0x280));
            if (fVar17 != 0.0) {
              puVar9 = (undefined8 *)FUN_0499632c(local_20,lVar16);
              pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
              cVar3 = (**(code **)(*(long *)pZVar10 + 0x328))();
              if (cVar3 == '\0') {
                puVar9 = (undefined8 *)FUN_0499632c(local_20,lVar16);
                pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
                cVar3 = (**(code **)(*(long *)pZVar10 + 0x330))();
                if (cVar3 == '\0') goto LAB_04998f1c;
              }
            }
            goto LAB_04998ee8;
          }
        }
LAB_04998f1c:
        if (lVar15 == lVar14 - (ulong)uVar1) break;
        uVar11 = local_20;
        lVar2 = lVar15 + -1;
        lVar16 = lVar15;
      } while( true );
    }
  }
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_20);
  FUN_04998d50(uVar11,uVar12);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar3 = Zombie::IsIZombie(in_x0);
  if (cVar3 == '\0') {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar4)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      if (pZVar10 != (Zombie *)0x0) {
        ToolPacketData::GetProps();
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
        if (cVar3 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        else {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
          cVar3 = IsValidTreatTarget();
          if (((cVar3 == '\0') ||
              ((cVar3 = RealObject::IsOnTeam(pZVar10,2), cVar3 == '\0' &&
               ((cVar3 = RealObject::IsOnTeam(pZVar10,1), cVar3 == '\0' ||
                (cVar3 = Zombie::IsIZombie(pZVar10), cVar3 == '\0')))))) ||
             (cVar3 = (**(code **)(*(long *)pZVar10 + 0x330))(pZVar10), cVar3 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          }
          else {
            cVar3 = IsZombieInPool((ZombiePVPNurse *)in_x0,pZVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            if (cVar3 != '\0') goto LAB_049992d8;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
  }
  else {
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar4)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      if (pZVar10 != (Zombie *)0x0) {
        ToolPacketData::GetProps();
        cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
        if (cVar3 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        else {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
          cVar3 = IsValidTreatTarget();
          if ((((cVar3 == '\0') || (cVar3 = RealObject::IsOnTeam(pZVar10,1), cVar3 == '\0')) ||
              (cVar3 = Zombie::IsIZombie(pZVar10), cVar3 == '\0')) ||
             (cVar3 = (**(code **)(*(long *)pZVar10 + 0x330))(pZVar10), cVar3 != '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          }
          else {
            cVar3 = IsZombieInPool((ZombiePVPNurse *)in_x0,pZVar10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            if (cVar3 != '\0') goto LAB_049992d8;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
  }
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar4) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pPVar13 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar9);
    if (pPVar13 != (Plant *)0x0) {
      ToolPacketData::GetProps();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
      if (cVar3 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
        cVar3 = IsValidTreatTarget();
        if (cVar3 != '\0') {
          cVar3 = RealObject::IsOnTeam(pPVar13,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          if (cVar3 == '\0') goto LAB_04999054;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)in_x8,(RtWeakPtr *)local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
          break;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
LAB_04999054:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
LAB_04999140:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_049992d8:
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             in_x8,(RtWeakPtr *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  goto LAB_04999140;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::GetArenaValidTreatTarget() */

void ZombiePVPNurse::GetArenaValidTreatTarget(void)

{
  char cVar1;
  bool bVar2;
  long *in_x0;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  float fVar7;
  float fVar8;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  cVar1 = (**(code **)(*in_x0 + 0x4c0))();
  if (cVar1 == '\0') {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if (pZVar4 != (Zombie *)0x0) {
        fVar7 = (float)FUN_049962f4(*(undefined4 *)(pZVar4 + 0x280));
        fVar8 = (float)FUN_049962f8(*(undefined4 *)(pZVar4 + 0x284));
        if (fVar7 < fVar8) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
          cVar1 = IsValidTreatTarget();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          if (cVar1 != '\0') {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)in_x8,(RtWeakPtr *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)in_x8);
    if (cVar1 == '\0') {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)in_x8);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)in_x8);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
                (uVar5,uVar6);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPNurse::GetValidTreatTarget() */

void ZombiePVPNurse::GetValidTreatTarget(void)

{
  char cVar1;
  undefined8 in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  cVar1 = Zombie::HasCondition(in_x0,0x19);
  if ((cVar1 != '\0') && (cVar1 = Zombie::HasCondition(), cVar1 != '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
    return;
  }
  cVar1 = IsArenaBattle();
  if (cVar1 == '\0') {
    GetBoardValidTreatTarget();
    return;
  }
  GetArenaValidTreatTarget();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::DoConfirmTarget() */

void __thiscall ZombiePVPNurse::DoConfirmTarget(ZombiePVPNurse *this)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar2;
  float *pfVar3;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetValidTreatTarget();
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::operator=
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x808),(vector *)avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x808));
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x4c0))(this), cVar1 == '\0')) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04996338(*(undefined8 *)(this + 0x808));
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if ((*pfVar3 < *pfVar2) && (cVar1 = Zombie::IsIZombie((Zombie *)this), cVar1 == '\0')) {
      Zombie::SetFacing((Zombie *)this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::onEnterState_Treat(ZombieState) */

void ZombiePVPNurse::onEnterState_Treat(ZombiePVPNurse *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DoConfirmTarget(param_1);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTreatAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PVPNurse::StartTreat((ZombieAnimRig_PVPNurse *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::StaticClassInit() */

void ZombiePVPNurse::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombiePVPNurse");
      (*pcVar4)(plVar1,asStack_150,FUN_04999a60,0x820,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPNurse,void(ZombiePVPNurse::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate0::Delegate0<ZombiePVPNurse,void(ZombiePVPNurse::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePVPNurse,void(ZombiePVPNurse::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PVPNurse_Treat");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04999804(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePVPNurse::StaticGetClass() */

long * ZombiePVPNurse::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPNurse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPNurse::GetClass() const */

long * ZombiePVPNurse::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPNurse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::ApplyZombieFood() */

void __thiscall ZombiePVPNurse::ApplyZombieFood(ZombiePVPNurse *this)

{
  char cVar1;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetValidTreatTarget();
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
  }
  Zombie::ApplyZombieFood((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::updateState_Walk() */

void __thiscall ZombiePVPNurse::updateState_Walk(ZombiePVPNurse *this)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x800) == fVar3) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)GetTimeBeforeFirstTreat(this);
    pcVar2 = *(code **)(*(long *)this + 0xa08);
    *(float *)(this + 0x800) = fVar4 + fVar3;
    cVar1 = (*pcVar2)(this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0xa08))(this);
  }
  if ((cVar1 != '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x800) < fVar3)) {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)GetTimeBetweenTreat(this);
    *(float *)(this + 0x800) = fVar4 + fVar3;
    GetValidTreatTarget();
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_04999e4c;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
LAB_04999e4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::updateState_Eat() */

void __thiscall ZombiePVPNurse::updateState_Eat(ZombiePVPNurse *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar2) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)GetTimeBetweenTreat(this);
    *(float *)(this + 0x800) = fVar3 + fVar2;
    GetValidTreatTarget();
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_04999f8c;
    }
  }
  Zombie::updateState_Eat((Zombie *)this);
LAB_04999f8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::updateState_Attack() */

void __thiscall ZombiePVPNurse::updateState_Attack(ZombiePVPNurse *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar2) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)GetTimeBetweenTreat(this);
    *(float *)(this + 0x800) = fVar3 + fVar2;
    GetValidTreatTarget();
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_0499a04c;
    }
  }
  nop();
LAB_0499a04c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPNurse::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePVPNurse::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  RtWeakPtrBase *pRVar7;
  undefined8 *puVar8;
  ZombiePVPNurseProps *pZVar9;
  Projectile *this;
  SharkMinion *this_00;
  RtObject *pRVar10;
  Zombie *pZVar11;
  long lVar12;
  float *pfVar13;
  long extraout_x0;
  Plant *pPVar14;
  undefined8 uVar15;
  float fVar16;
  Board *pBVar18;
  undefined4 uVar17;
  float local_54;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  float afStack_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
      bVar2 = std::operator==(param_4,"throw");
      if (bVar2) {
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x808));
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(param_1 + 0x808));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar2) {
          pRVar7 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,pRVar7);
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
          if (cVar1 != '\0') {
            puVar8 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_1);
                    /* WARNING: Load size is inaccurate */
            pBVar18._0_4_ = *puVar8;
            uVar17 = *(undefined4 *)((long)puVar8 + 4);
            uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
            pZVar9 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)param_1);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      (aRStack_18,(RtWeakPtrBase *)(pZVar9 + 0x268));
            uVar6 = 0x42c80000;
            this = (Projectile *)Board::AddProjectile(pBVar18._0_4_,uVar15,aRStack_18,param_1,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            Projectile::SetShadow(this,false);
            iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
            this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            iVar4 = SharkMinion::getRow(this_00);
            pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar10);
            if (bVar2) {
              pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
              pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
              fVar16 = (float)(**(code **)(*(long *)pZVar11 + 0x3b0))(0x3f800000);
              local_38 = fVar16;
              local_34 = uVar17;
              local_30 = uVar6;
            }
            else {
              pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
              pPVar14 = Sexy::RtObject::Cast<Plant>(pRVar10);
              fVar16 = (float)(**(code **)(*(long *)pPVar14 + 0x1f0))(0x3f800000);
              local_28 = fVar16;
              local_24 = uVar17;
              local_20 = uVar6;
            }
            iVar5 = BoardTransforms::GridToBoardSpaceY(iVar4);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)aRStack_18,(float)(int)fVar16,(float)(iVar5 + -0x50),0.0);
            fVar16 = -150.0;
            if (iVar4 < iVar3) {
              iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
              iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
              fVar16 = -150.0 - (float)(iVar3 - iVar4);
            }
            lVar12 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            local_54 = *(float *)(lVar12 + 8) - fVar16;
            pfVar13 = eastl::max_alt<float>(&local_54,afStack_10);
            Projectile::LaunchAt(this,(SexyVector3 *)aRStack_18,*pfVar13,1.0);
            nop();
            fVar16 = (float)PVZ_T();
            FUN_049962fc(fVar16 + 1.0,extraout_x0 + 0x1a8);
            Projectile::SetTarget(this,(RtWeakPtr *)aRStack_50);
            pZVar9 = Zombie::GetProps<ZombiePVPNurseProps>((Zombie *)param_1);
            FUN_04996304(extraout_x0 + 0x1b4,*(undefined4 *)(pZVar9 + 0x260));
            uVar6 = IsArenaBattle();
            FUN_0499630c(extraout_x0 + 0x1a6,uVar6);
            iVar3 = Zombie::GetFacing((Zombie *)param_1);
            if (iVar3 == 1) {
              FUN_0499633c(this + 0xd4);
              fVar16 = (float)FUN_049962d8(*(undefined4 *)(this + 0xcc));
              FUN_049962e4(-fVar16,this + 0xcc);
            }
          }
          cVar1 = (**(code **)(*(long *)param_1 + 0x4c0))(param_1);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
            break;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

