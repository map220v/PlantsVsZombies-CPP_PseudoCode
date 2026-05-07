// Class: ZombieSteamStove


/* ZombieSteamStove::~ZombieSteamStove() */

void __thiscall ZombieSteamStove::~ZombieSteamStove(ZombieSteamStove *this)

{
  *(undefined ***)this = &PTR_GetClass_0674fe20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamStove_06750880;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieSteamStove::~ZombieSteamStove() */

void __thiscall ZombieSteamStove::~ZombieSteamStove(ZombieSteamStove *this)

{
  ~ZombieSteamStove(this + -0x10);
  return;
}


/* ZombieSteamStove::~ZombieSteamStove() */

void __thiscall ZombieSteamStove::~ZombieSteamStove(ZombieSteamStove *this)

{
  ~ZombieSteamStove(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSteamStove::~ZombieSteamStove() */

void __thiscall ZombieSteamStove::~ZombieSteamStove(ZombieSteamStove *this)

{
  ~ZombieSteamStove(this + -0x10);
  return;
}


/* ZombieSteamStove::ZombieSteamStove() */

void __thiscall ZombieSteamStove::ZombieSteamStove(ZombieSteamStove *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined ***)this = &PTR_GetClass_0674fe20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSteamStove_06750880;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  *(undefined4 *)(this + 0x80c) = uVar1;
  *(undefined4 *)(this + 0x808) = 0;
  return;
}


/* ZombieSteamStove::StaticNew() */

ZombieSteamStove * ZombieSteamStove::StaticNew(void)

{
  ZombieSteamStove *this;
  
  this = ::operator_new(0x810);
  ZombieSteamStove(this);
  return this;
}


/* ZombieSteamStove::CanRaiseTemp() */

byte __thiscall ZombieSteamStove::CanRaiseTemp(ZombieSteamStove *this)

{
  byte bVar1;
  
  bVar1 = Zombie::HasCondition(this,1);
  return bVar1 ^ 1;
}


/* ZombieSteamStove::shouldExplode() */

byte __thiscall ZombieSteamStove::shouldExplode(ZombieSteamStove *this)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((((cVar1 == '\0') && (lVar3 = (**(code **)(*(long *)this + 0x228))(this), lVar3 != 0)) &&
      (cVar1 = FUN_03c3bc50(*(undefined4 *)(this + 0x804)), cVar1 != '\0')) &&
     (cVar1 = Zombie::HasCondition(this,0x19), cVar1 == '\0')) {
    bVar2 = Zombie::HasCondition(this,0x77);
    bVar2 = bVar2 ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


/* ZombieSteamStove::setState(StoveState) */

void __thiscall ZombieSteamStove::setState(ZombieSteamStove *this,int param_2)

{
  int iVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  
  iVar1 = *(int *)(this + 0x804);
  if (iVar1 != param_2) {
    *(int *)(this + 0x804) = param_2;
    switch(param_2) {
    case 1:
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                ((ZombieAnimRig_ZombossMech_Future *)pZVar3,8);
      cVar2 = (**(code **)(*(long *)this + 0x328))(this);
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) {
        Zombie::setZombieState((Zombie *)this,0x1f);
        return;
      }
      break;
    case 2:
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                ((ZombieAnimRig_ZombossMech_Future *)pZVar3,8);
      if (iVar1 != 3) {
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x800) = fVar4 + *(float *)(this + 0x808);
      }
      break;
    case 3:
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                ((ZombieAnimRig_ZombossMech_Future *)pZVar3,9);
      return;
    case 4:
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                ((ZombieAnimRig_ZombossMech_Future *)pZVar3,8);
      return;
    }
  }
  return;
}


/* ZombieSteamStove::onSkipRaisingTempAnimDone() */

void __thiscall ZombieSteamStove::onSkipRaisingTempAnimDone(ZombieSteamStove *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
    setState(this,2);
    return;
  }
  return;
}


/* ZombieSteamStove::updateState_RaisingTemp() */

void __thiscall ZombieSteamStove::updateState_RaisingTemp(ZombieSteamStove *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
    setState(this,2);
    return;
  }
  return;
}


/* ZombieSteamStove::onSkipFullTempAnimDone() */

void __thiscall ZombieSteamStove::onSkipFullTempAnimDone(ZombieSteamStove *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
    setState(this,3);
    return;
  }
  return;
}


/* ZombieSteamStove::updateState_FullTemp() */

void __thiscall ZombieSteamStove::updateState_FullTemp(ZombieSteamStove *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x260))(this);
    setState(this,3);
    return;
  }
  return;
}


/* ZombieSteamStove::onRaisingTempAnimDone(std::string const&) */

void ZombieSteamStove::onRaisingTempAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    setState((ZombieSteamStove *)param_1,2);
    return;
  }
  return;
}


/* ZombieSteamStove::onFullTempAnimDone(std::string const&) */

void ZombieSteamStove::onFullTempAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    setState((ZombieSteamStove *)param_1,3);
    return;
  }
  return;
}


/* ZombieSteamStove::updateState() */

void __thiscall ZombieSteamStove::updateState(ZombieSteamStove *this)

{
  char cVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = ZombieModernMiner::getState((ZombieModernMiner *)this);
  if ((iVar2 == 2) && (cVar1 = CanRaiseTemp(this), cVar1 != '\0')) {
    fVar4 = (float)PVZ_EOT();
    if (*(float *)(this + 0x80c) == fVar4) {
      fVar6 = *(float *)(this + 0x800);
    }
    else {
      fVar6 = (float)PVZ_T();
      fVar5 = *(float *)(this + 0x80c);
      *(float *)(this + 0x80c) = fVar4;
      fVar6 = (*(float *)(this + 0x800) - fVar5) + fVar6;
      *(float *)(this + 0x800) = fVar6;
    }
    fVar5 = (float)PVZ_T();
    if (fVar5 <= fVar6) {
      fVar5 = *(float *)(this + 0x808);
      fVar6 = (float)PVZ_T();
      fVar6 = (fVar5 - *(float *)(this + 0x800)) + fVar6;
      if ((fVar5 <= fVar6) || (fVar4 == *(float *)(this + 0x800))) {
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        ZombieAnimRig_SteamStoveTruck::SetTempState((ZombieAnimRig_SteamStoveTruck *)pZVar3,4);
      }
      else {
        iVar2 = (int)((fVar6 / fVar5) * 4.0);
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        ZombieAnimRig_SteamStoveTruck::SetTempState((ZombieAnimRig_SteamStoveTruck *)pZVar3,iVar2);
        if (iVar2 < 3) {
          pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
          ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                    ((ZombieAnimRig_ZombossMech_Future *)pZVar3,8);
          return;
        }
      }
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
                ((ZombieAnimRig_ZombossMech_Future *)pZVar3,9);
      return;
    }
    *(float *)(this + 0x800) = fVar4;
    cVar1 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
      setState(this,3);
      return;
    }
  }
  return;
}


/* ZombieSteamStove::onApplyCondition(ZombieConditions) */

void __thiscall ZombieSteamStove::onApplyCondition(ZombieSteamStove *this,int param_2)

{
  char cVar1;
  int iVar2;
  ZombieSteamStoveProps *pZVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == 0) {
    cVar1 = Zombie::HasCondition(this,1);
    if (cVar1 == '\0') {
      pZVar3 = Zombie::GetProps<ZombieSteamStoveProps>((Zombie *)this);
      fVar7 = *(float *)(this + 0x808);
      fVar4 = *(float *)(pZVar3 + 0x21c);
      iVar2 = ZombieModernMiner::getState((ZombieModernMiner *)this);
      if (iVar2 == 3) {
        fVar6 = (float)PVZ_T();
        *(float *)(this + 0x800) = fVar6 + fVar4 / fVar7;
        setState(this,2);
        return;
      }
      cVar1 = Zombie::isInState((Zombie *)this,0x20);
      if (cVar1 == '\0') {
        *(float *)(this + 0x800) = *(float *)(this + 0x800) + fVar4 / fVar7;
      }
    }
  }
  else if (param_2 == 1) {
    pZVar3 = Zombie::GetProps<ZombieSteamStoveProps>((Zombie *)this);
    fVar7 = *(float *)(this + 0x808);
    fVar4 = *(float *)(pZVar3 + 0x220);
    iVar2 = ZombieModernMiner::getState((ZombieModernMiner *)this);
    if (iVar2 == 3) {
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x800) = fVar6 + fVar4 / fVar7;
      setState(this,2);
    }
    else {
      cVar1 = Zombie::isInState((Zombie *)this,0x20);
      if (cVar1 == '\0') {
        *(float *)(this + 0x800) = *(float *)(this + 0x800) + fVar4 / fVar7;
      }
    }
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x80c) = uVar5;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStove::onEnterState_Explode(ZombieState) */

void ZombieSteamStove::onEnterState_Explode(Zombie *param_1)

{
  ZombieAnimRig_SteamStoveTruck *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_SteamStoveTruck *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onExplodeAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_SteamStoveTruck::PlayExplode(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStove::doExplode(int, int, bool) */

void __thiscall
ZombieSteamStove::doExplode(ZombieSteamStove *this,int param_1,int param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombieSteamStoveProps *pZVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  Plant *pPVar8;
  ulong uVar9;
  long *extraout_x0;
  long *plVar10;
  Board *this_00;
  RtObject *this_01;
  ulong uVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  DamageInfo aDStack_c8 [8];
  undefined4 local_c0;
  Point aPStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_c8);
  pZVar4 = Zombie::GetProps<ZombieSteamStoveProps>((Zombie *)this);
  local_c0 = *(undefined4 *)(pZVar4 + 0x218);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
  Sexy::Point::Point(aPStack_68,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0,aPStack_68);
  Sexy::Point::Point(aPStack_68,param_1 + -1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0,aPStack_68);
  Sexy::Point::Point(aPStack_68,param_1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0,aPStack_68);
  Sexy::Point::Point(aPStack_68,param_1 + 1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0,aPStack_68);
  Sexy::Point::Point(aPStack_68,param_1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0,aPStack_68);
  lVar5 = FUN_03c3bc3c(local_e0,local_d8);
  if (lVar5 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_68);
      uVar3 = operator|(1,4);
      puVar6 = (undefined4 *)FUN_03c3bc48(local_e0,uVar11);
      EntityFinder::GetEntitiesAtGridSquare(aPStack_68,uVar3,*puVar6,puVar6[1]);
      local_f0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_68);
      local_e8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_68);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8),
            bVar1) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
        this_01 = (RtObject *)*puVar7;
        cVar2 = RealObject::IsOnOpposingTeam(this_01,2);
        if (cVar2 != '\0') {
          pPVar8 = Sexy::RtObject::Cast<Plant>(this_01);
          if (pPVar8 == (Plant *)0x0) {
            nop();
            if (extraout_x0 != (long *)0x0) {
              (**(code **)(*extraout_x0 + 0x110))();
            }
          }
          else {
            pPVar8 = Sexy::RtObject::Cast<Plant>(this_01);
            if (pPVar8 != (Plant *)0x0) {
              (**(code **)(*(long *)pPVar8 + 0x110))(pPVar8,aDStack_c8);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
      }
      uVar11 = uVar11 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_68);
      uVar9 = FUN_03c3bc3c(local_e0,local_d8);
    } while (uVar11 < uVar9);
  }
  if (param_3) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)aPStack_68,"");
    plVar10 = (long *)Board::GetPlantAt(this_00,param_1 + -2,param_2,(string *)aPStack_68);
    std::string::~string((string *)aPStack_68);
    nop();
    if (plVar10 != (long *)0x0) {
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_68);
      bVar1 = std::operator==((string *)(lVar5 + 8),"cobcannon");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_68);
      if (bVar1) {
        (**(code **)(*plVar10 + 0x110))(plVar10,aDStack_c8);
      }
    }
  }
  DamageInfo::DamageInfo((DamageInfo *)aPStack_68);
  local_60 = 0x47c34ff3;
  (**(code **)(*(long *)this + 0x110))(this,aPStack_68);
  DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_e0);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStove::findAndExplodePlant() */

void __thiscall ZombieSteamStove::findAndExplodePlant(ZombieSteamStove *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  PlantGroup *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if ((cVar1 == '\0') &&
     (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0))
  {
    Sexy::RtObject::Cast<Plant>(this_00);
    this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    Sexy::RtObject::Cast<GridItem>(this_00);
    Sexy::RtObject::Cast<Zombie>(this_00);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    uVar2 = false;
    if (this_01 != (PlantGroup *)0x0) {
      std::string::string(asStack_10,"cobcannon");
      uVar2 = PlantGroup::HasPlant(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    doExplode(this,iVar3,iVar4,(bool)uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStove::onExplodeAnimDone(std::string const&) */

void ZombieSteamStove::onExplodeAnimDone(string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  RtObject *this;
  PlantGroup *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)param_1,4);
  if ((cVar1 == '\0') &&
     (this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1), this != (RtObject *)0x0))
  {
    Sexy::RtObject::Cast<Plant>(this);
    this_00 = Sexy::RtObject::Cast<PlantGroup>(this);
    Sexy::RtObject::Cast<GridItem>(this);
    Sexy::RtObject::Cast<Zombie>(this);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    uVar2 = false;
    if (this_00 != (PlantGroup *)0x0) {
      std::string::string(asStack_10,"cobcannon");
      uVar2 = PlantGroup::HasPlant(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    doExplode((ZombieSteamStove *)param_1,iVar3,iVar4,(bool)uVar2);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSteamStove::StaticClassInit() */

void ZombieSteamStove::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieSteamStove");
      (*pcVar4)(plVar1,asStack_150,FUN_03c3ddbc,0x810,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieSteamStove,void(ZombieSteamStove::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_RAISING_TEMP");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c3da08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieSteamStove,void(ZombieSteamStove::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_FULL_TEMP");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c3da08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieSteamStove,void(ZombieSteamStove::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieSteamStove,void(ZombieSteamStove::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_EXPLODE");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c3da08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSteamStove::StaticGetClass() */

long * ZombieSteamStove::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamStove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamStove::GetClass() const */

long * ZombieSteamStove::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSteamStove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSteamStove::onZombieInitialize() */

void __thiscall ZombieSteamStove::onZombieInitialize(ZombieSteamStove *this)

{
  ZombieSteamStoveProps *pZVar1;
  float fVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieSteamStoveProps>((Zombie *)this);
  fVar2 = *(float *)(pZVar1 + 0x210);
  pZVar1 = Zombie::GetProps<ZombieSteamStoveProps>((Zombie *)this);
  *(float *)(this + 0x808) = fVar2 / *(float *)(pZVar1 + 0x214);
  return;
}


/* ZombieSteamStove::onPlaceOnBoard() */

void __thiscall ZombieSteamStove::onPlaceOnBoard(ZombieSteamStove *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  setState(this,1);
  return;
}


/* ZombieSteamStove::onUpdate() */

void __thiscall ZombieSteamStove::onUpdate(ZombieSteamStove *this)

{
  Zombie::onUpdate((Zombie *)this);
  updateState(this);
  return;
}


/* ZombieSteamStove::updateState_Walk() */

void __thiscall ZombieSteamStove::updateState_Walk(ZombieSteamStove *this)

{
  char cVar1;
  
  cVar1 = shouldExplode(this);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x21);
      return;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}

