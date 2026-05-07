// Class: ZombieSkyCityGgtImp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGgtImp::updateState_Walk() */

void __thiscall ZombieSkyCityGgtImp::updateState_Walk(ZombieSkyCityGgtImp *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  RtObject *pRVar7;
  Zombie *pZVar8;
  PlantGroup *this_00;
  GridItem *this_01;
  Plant *pPVar9;
  GridItemArmrack *pGVar10;
  long lVar11;
  ZombieLaneChangingSubsystem *pZVar12;
  float *pfVar13;
  SpeedUpTileModule *this_02;
  long *extraout_x0;
  long *extraout_x0_00;
  Board *this_03;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x930))(aRStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa8),aRStack_18);
    Zombie::setZombieState((Zombie *)this,0xd,0);
    goto LAB_045e2710;
  }
  pRVar7 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (pRVar7 == (RtObject *)0x0) {
    cVar2 = Zombie::HasCondition(this,0x55);
    if (cVar2 == '\0') {
      pZVar12 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      cVar2 = ZombieLaneChangingSubsystem::IsZombieChangingLanes((Zombie *)pZVar12);
      if ((((cVar2 == '\0') && (cVar2 = Zombie::IsFlying((Zombie *)this), cVar2 == '\0')) &&
          (this[0x7e2] != (ZombieSkyCityGgtImp)0x0)) &&
         (cVar2 = RealObject::IsOnTeam(this,2), cVar2 != '\0')) {
        pfVar13 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this);
        iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar13);
        iVar5 = BoardTransforms::BoardSpaceToGridY(pfVar13[1]);
        this_03 = *(Board **)(gLawnApp + 0x9f0);
        iVar6 = Board::GetGridSquareType(this_03,iVar4,iVar5);
        if (iVar6 == 7) {
          this_02 = (SpeedUpTileModule *)FUN_045bfbe8(*(undefined8 *)(this_03 + 0xad8));
          iVar4 = SpeedUpTileModule::GetSpeedUpTileDirection(this_02,iVar4,iVar5);
          if (iVar4 == 0) {
            Zombie::setZombieState((Zombie *)this,0x1d,0);
          }
          else if (iVar4 == 1) {
            Zombie::setZombieState((Zombie *)this,0x1e,0);
          }
          else if (iVar4 == 2) {
            Zombie::setZombieState((Zombie *)this,0x1b,0);
          }
          else if (iVar4 == 3) {
            Zombie::setZombieState((Zombie *)this,0x1c,0);
          }
        }
      }
    }
    else {
      Zombie::setZombieState((Zombie *)this,0,0);
    }
    goto LAB_045e2710;
  }
  pZVar8 = Sexy::RtObject::Cast<Zombie>(pRVar7);
  this_00 = Sexy::RtObject::Cast<PlantGroup>(pRVar7);
  this_01 = Sexy::RtObject::Cast<GridItem>(pRVar7);
  pPVar9 = Sexy::RtObject::Cast<Plant>(pRVar7);
  if ((this_01 != (GridItem *)0x0) &&
     (pGVar10 = Sexy::RtObject::Cast<GridItemArmrack>((RtObject *)this_01),
     pGVar10 == (GridItemArmrack *)0x0)) goto LAB_045e2814;
  if (pPVar9 == (Plant *)0x0) {
LAB_045e2944:
    if (this_00 == (PlantGroup *)0x0) {
      if (pZVar8 == (Zombie *)0x0) goto LAB_045e2710;
    }
    else {
      PlantGroup::GetTopPlant(this_00);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (*(RtObject **)(lVar11 + 0xa8) != (RtObject *)0x0) {
        bVar1 = Sexy::RtObject::IsA<PlantSpringbean>(*(RtObject **)(lVar11 + 0xa8));
        if (bVar1) {
          nop();
          bVar3 = (**(code **)(*extraout_x0 + 0x348))();
          pRVar7 = *(RtObject **)(lVar11 + 0xa8);
          goto joined_r0x045e29a0;
        }
        pRVar7 = *(RtObject **)(lVar11 + 0xa8);
        if (pRVar7 != (RtObject *)0x0) goto LAB_045e27f0;
      }
    }
  }
  else {
    Plant::GetType();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar11 + 8),"smallChestnut");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (!bVar1) goto LAB_045e2944;
    if (*(RtObject **)(pPVar9 + 0xa8) != (RtObject *)0x0) {
      bVar1 = Sexy::RtObject::IsA<PlantSpringbean>(*(RtObject **)(pPVar9 + 0xa8));
      if (bVar1) {
        nop();
        bVar3 = (**(code **)(*extraout_x0_00 + 0x348))();
        pRVar7 = *(RtObject **)(pPVar9 + 0xa8);
joined_r0x045e29a0:
        bVar3 = bVar3 ^ 1;
        if ((pRVar7 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<PlantBamboo>(pRVar7), bVar1)
           ) goto LAB_045e2800;
      }
      else {
        pRVar7 = *(RtObject **)(pPVar9 + 0xa8);
        if (pRVar7 == (RtObject *)0x0) goto LAB_045e2814;
LAB_045e27f0:
        bVar1 = Sexy::RtObject::IsA<PlantBamboo>(pRVar7);
        bVar3 = 1;
        if (!bVar1) goto LAB_045e2814;
LAB_045e2800:
        lVar11 = FUN_045b32dc(*(undefined8 *)(this + 0x550));
        if (*(char *)(lVar11 + 0x44) == '\0') goto LAB_045e2710;
      }
      if (bVar3 == 0) goto LAB_045e2710;
    }
  }
LAB_045e2814:
  cVar2 = (**(code **)(*(long *)this + 0x540))(this);
  if (cVar2 == '\0') {
    Zombie::setZombieState((Zombie *)this,2,0);
  }
  else {
    Zombie::setZombieState((Zombie *)this,3,0);
  }
LAB_045e2710:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSkyCityGgtImp::onEnterState_Walk(ZombieState) */

void __thiscall ZombieSkyCityGgtImp::onEnterState_Walk(ZombieSkyCityGgtImp *this,undefined4 param_2)

{
  Zombie::SetFacing((Zombie *)this,1);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieSkyCityGgtImp::onEnterState_ImpFlying(ZombieState) */

void __thiscall
ZombieSkyCityGgtImp::onEnterState_ImpFlying(ZombieSkyCityGgtImp *this,undefined4 param_2)

{
  Zombie::SetIsControlled((Zombie *)this,true);
  ZombieImp::onEnterState_ImpFlying(this,param_2);
  return;
}


/* ZombieSkyCityGgtImp::onExitState_ImpFlying(ZombieState) */

void ZombieSkyCityGgtImp::onExitState_ImpFlying(Zombie *param_1)

{
  Zombie::SetIsControlled(param_1,false);
  ZombieSwashbuckler::updateState_SwingFail((ZombieSwashbuckler *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGgtImp::StaticClassInit() */

void ZombieSkyCityGgtImp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityGgtImp");
    (*pcVar2)(plVar1,asStack_10,FUN_047a95b4,0x818,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityGgtImp::StaticGetClass() */

long * ZombieSkyCityGgtImp::StaticGetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGgtImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityGgtImp::GetClass() const */

long * ZombieSkyCityGgtImp::GetClass(void)

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
  uVar2 = ZombieImp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGgtImp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp() */

void __thiscall ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp(ZombieSkyCityGgtImp *this)

{
  *(undefined ***)this = &PTR_GetClass_068e13c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityGgtImp_068e1e80;
  ZombieImp::~ZombieImp((ZombieImp *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp() */

void __thiscall ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp(ZombieSkyCityGgtImp *this)

{
  ~ZombieSkyCityGgtImp(this + -0x10);
  return;
}


/* ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp() */

void __thiscall ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp(ZombieSkyCityGgtImp *this)

{
  ~ZombieSkyCityGgtImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp() */

void __thiscall ZombieSkyCityGgtImp::~ZombieSkyCityGgtImp(ZombieSkyCityGgtImp *this)

{
  ~ZombieSkyCityGgtImp(this + -0x10);
  return;
}


/* ZombieSkyCityGgtImp::ZombieSkyCityGgtImp() */

void __thiscall ZombieSkyCityGgtImp::ZombieSkyCityGgtImp(ZombieSkyCityGgtImp *this)

{
  ZombieImp::ZombieImp((ZombieImp *)this);
  *(undefined ***)this = &PTR_GetClass_068e13c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityGgtImp_068e1e80;
  return;
}


/* ZombieSkyCityGgtImp::StaticNew() */

ZombieSkyCityGgtImp * ZombieSkyCityGgtImp::StaticNew(void)

{
  ZombieSkyCityGgtImp *this;
  
  this = ::operator_new(0x818);
  ZombieSkyCityGgtImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGgtImp::findTarget() */

void __thiscall ZombieSkyCityGgtImp::findTarget(ZombieSkyCityGgtImp *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  Plant *this_00;
  GridItemAirship *pGVar5;
  Plant *pPVar6;
  Plant *extraout_x0;
  RtObject *pRVar7;
  ZombieAnimRig_SkyCityGgtImp *pZVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar4);
  if (cVar1 == '\0') {
    this_00 = (Plant *)Zombie::findTarget((Zombie *)this);
    if ((this_00 != (Plant *)0x0) &&
       (pGVar5 = Sexy::RtObject::Cast<GridItemAirship>((RtObject *)this_00),
       pGVar5 != (GridItemAirship *)0x0)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      pPVar6 = (Plant *)Zombie::GetForcedTarget((Zombie *)this);
      (**(code **)(*(long *)this + 0x3a0))(auStack_30,this);
      iVar3 = SharkMinion::getRow((SharkMinion *)this);
      (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
      EntityFinder::GetEntitiesTouchingRectangle
                (avStack_20,1,auStack_30,(iVar3 - local_38._4_4_) + 1);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        nop();
        cVar1 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0);
        if ((cVar1 != '\0') && ((pPVar6 == extraout_x0 || (pPVar6 == (Plant *)0x0)))) {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          this_00 = extraout_x0;
          goto LAB_047a9bdc;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      pRVar7 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
      pZVar8 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCityGgtImp>(pRVar7);
      FUN_047a93bc(pZVar8 + 0x240,1);
      Zombie::setZombieState((Zombie *)this,5,0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  else {
    pRVar7 = (RtObject *)Zombie::GetAnimRig((Zombie *)this);
    pZVar8 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCityGgtImp>(pRVar7);
    FUN_047a93bc(pZVar8 + 0x240,2);
    Zombie::setZombieState((Zombie *)this,5,0);
    this_00 = (Plant *)0x0;
  }
LAB_047a9bdc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}

