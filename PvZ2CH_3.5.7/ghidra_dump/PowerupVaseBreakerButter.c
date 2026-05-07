// Class: PowerupVaseBreakerButter


/* PowerupVaseBreakerButter::StaticGetClass() */

long * PowerupVaseBreakerButter::StaticGetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerButter",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerButter::GetClass() const */

long * PowerupVaseBreakerButter::GetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerButter",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerButter::~PowerupVaseBreakerButter() */

void __thiscall PowerupVaseBreakerButter::~PowerupVaseBreakerButter(PowerupVaseBreakerButter *this)

{
  *(undefined ***)this = &PTR_GetClass_06916f40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  PowerupTouchBased::~PowerupTouchBased((PowerupTouchBased *)this);
  return;
}


/* PowerupVaseBreakerButter::~PowerupVaseBreakerButter() */

void __thiscall PowerupVaseBreakerButter::~PowerupVaseBreakerButter(PowerupVaseBreakerButter *this)

{
  ~PowerupVaseBreakerButter(this);
  AK::FreeHook(this);
  return;
}


/* PowerupVaseBreakerButter::PowerupVaseBreakerButter() */

void __thiscall PowerupVaseBreakerButter::PowerupVaseBreakerButter(PowerupVaseBreakerButter *this)

{
  PowerupTouchBased::PowerupTouchBased((PowerupTouchBased *)this);
  *(undefined ***)this = &PTR_GetClass_06916f40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  return;
}


/* PowerupVaseBreakerButter::StaticNew() */

PowerupVaseBreakerButter * PowerupVaseBreakerButter::StaticNew(void)

{
  PowerupVaseBreakerButter *this;
  
  this = ::operator_new(0x110);
  PowerupVaseBreakerButter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerButter::setHighlightedZombie(Zombie*) */

void __thiscall
PowerupVaseBreakerButter::setHighlightedZombie(PowerupVaseBreakerButter *this,Zombie *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  if (param_1 != (Zombie *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupVaseBreakerButter::onTouchCanceled() */

void __thiscall PowerupVaseBreakerButter::onTouchCanceled(PowerupVaseBreakerButter *this)

{
  setHighlightedZombie(this,(Zombie *)0x0);
  return;
}


/* PowerupVaseBreakerButter::updateState_Selected() */

void __thiscall PowerupVaseBreakerButter::updateState_Selected(PowerupVaseBreakerButter *this)

{
  char cVar1;
  Zombie *this_00;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x108));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  Zombie::SetDamageFlash(this_00,0.25);
  return;
}


/* PowerupVaseBreakerButter::onTouchEnd(Sexy::Touch const&) */

void PowerupVaseBreakerButter::onTouchEnd(Touch *param_1)

{
  char cVar1;
  ResourceInfo *pRVar2;
  long extraout_x0;
  PowerupManager *this;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x108));
  if (cVar1 == '\0') {
    this = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    PowerupManager::CancelActivePowerup(this);
    return;
  }
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x108));
  setHighlightedZombie((PowerupVaseBreakerButter *)param_1,(Zombie *)0x0);
  BasePowerup::GetType((BasePowerup *)param_1);
  nop();
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 0x74),0,pRVar2,3,1);
  cVar1 = BasePowerup::isInState((BasePowerup *)param_1,2);
  if (cVar1 != '\0') {
    BasePowerup::DecrementTimeByUseCost((BasePowerup *)param_1);
    return;
  }
  BasePowerup::Activate((BasePowerup *)param_1);
  BasePowerup::DecrementTimeByUseCost((BasePowerup *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerButter::getClosestButterableZombie(Sexy::SexyVector2 const&, float) */

void __thiscall
PowerupVaseBreakerButter::getClosestButterableZombie
          (PowerupVaseBreakerButter *this,SexyVector2 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  long lVar6;
  long *extraout_x0;
  Insets *pIVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long *plVar17;
  long *plVar18;
  int local_48;
  int local_44;
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  float local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar9 = 0;
  plVar17 = (long *)0x0;
  plVar11 = (long *)0x0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  psVar5 = (string *)
           EntityFinder::GetEntitiesTouchingCircle2D
                     ((float)iVar4 * param_2,
                      (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                      param_1,0xffffffff,0xffffffff);
  fVar13 = (float)CheatManager::GetVariableValue(psVar5);
  uVar10 = local_20;
  lVar6 = FUN_0496ef1c(local_20,local_18);
  plVar12 = plVar11;
  plVar18 = plVar17;
  fVar16 = fVar13;
  if (lVar6 != 0) {
    do {
      FUN_0496ef28(uVar10,uVar9);
      nop();
      pIVar7 = (Insets *)(**(code **)(*extraout_x0 + 0x178))();
      Sexy::Insets::Insets(aIStack_30,pIVar7);
      Sexy::TRect<int>::GetCenter();
      Sexy::Point::Point((Point *)&local_48,(TPoint *)&local_38);
      cVar3 = RealObject::IsOnTeam(extraout_x0,2);
      if ((cVar3 == '\0') ||
         (cVar3 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar3 != '\0')) {
LAB_0496ff68:
        plVar11 = plVar12;
        plVar17 = plVar18;
        fVar15 = fVar13;
        fVar2 = fVar16;
      }
      else {
        fVar15 = (float)local_44;
        Sexy::FastCurve::SetOutRange(aFStack_40,(float)local_48,fVar15);
        local_38 = Sexy::SexyVector2::operator-(param_1,(SexyVector2 *)aFStack_40);
        local_34 = fVar15;
        fVar14 = (float)VectorNorm((FPoint *)&local_38);
        cVar3 = Zombie::HasCondition(extraout_x0,3);
        plVar17 = extraout_x0;
        plVar11 = plVar12;
        fVar15 = fVar13;
        fVar2 = fVar14;
        fVar1 = fVar16;
        if (cVar3 == '\0') {
          plVar17 = plVar18;
          plVar11 = extraout_x0;
          fVar15 = fVar14;
          fVar2 = fVar16;
          fVar1 = fVar13;
        }
        if (fVar1 <= fVar14) goto LAB_0496ff68;
      }
      fVar16 = fVar2;
      fVar13 = fVar15;
      uVar10 = local_20;
      uVar9 = uVar9 + 1;
      uVar8 = FUN_0496ef1c(local_20,local_18);
      plVar12 = plVar11;
      plVar18 = plVar17;
    } while (uVar9 < uVar8);
  }
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar17;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar11);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerButter::onTouchBegin(Sexy::Touch const&) */

void __thiscall
PowerupVaseBreakerButter::onTouchBegin(PowerupVaseBreakerButter *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  Zombie *pZVar3;
  undefined4 local_18;
  undefined4 local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_18,(TPoint *)(param_1 + 0x10));
  iVar1 = FUN_0496ef74(local_18);
  iVar2 = FUN_0496ef74(local_14);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  pZVar3 = (Zombie *)getClosestButterableZombie(this,(SexyVector2 *)aFStack_10,1.5);
  setHighlightedZombie(this,pZVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerButter::onTouchMoved(Sexy::Touch const&) */

void __thiscall
PowerupVaseBreakerButter::onTouchMoved(PowerupVaseBreakerButter *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  Zombie *pZVar3;
  undefined4 local_18;
  undefined4 local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_18,(TPoint *)(param_1 + 0x10));
  iVar1 = FUN_0496ef74(local_18);
  iVar2 = FUN_0496ef74(local_14);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  pZVar3 = (Zombie *)getClosestButterableZombie(this,(SexyVector2 *)aFStack_10,1.5);
  setHighlightedZombie(this,pZVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupVaseBreakerButter::onEnterState_Activated(PowerupState) */

void PowerupVaseBreakerButter::onEnterState_Activated(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_MiniGame_VaseBreak_ButterZombie");
  return;
}

