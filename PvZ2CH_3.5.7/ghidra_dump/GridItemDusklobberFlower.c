// Class: GridItemDusklobberFlower


/* GridItemDusklobberFlower::CalcRenderOrder() const */

void __thiscall GridItemDusklobberFlower::CalcRenderOrder(GridItemDusklobberFlower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemDusklobberFlower::CalcRenderOrder() const */

void __thiscall GridItemDusklobberFlower::CalcRenderOrder(GridItemDusklobberFlower *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemDusklobberFlower::~GridItemDusklobberFlower() */

void __thiscall GridItemDusklobberFlower::~GridItemDusklobberFlower(GridItemDusklobberFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_0673cec0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDusklobberFlower_0673d178;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemDusklobberFlower::~GridItemDusklobberFlower() */

void __thiscall GridItemDusklobberFlower::~GridItemDusklobberFlower(GridItemDusklobberFlower *this)

{
  ~GridItemDusklobberFlower(this + -0x10);
  return;
}


/* GridItemDusklobberFlower::~GridItemDusklobberFlower() */

void __thiscall GridItemDusklobberFlower::~GridItemDusklobberFlower(GridItemDusklobberFlower *this)

{
  ~GridItemDusklobberFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemDusklobberFlower::~GridItemDusklobberFlower() */

void __thiscall GridItemDusklobberFlower::~GridItemDusklobberFlower(GridItemDusklobberFlower *this)

{
  ~GridItemDusklobberFlower(this + -0x10);
  return;
}


/* GridItemDusklobberFlower::GridItemDusklobberFlower() */

void __thiscall GridItemDusklobberFlower::GridItemDusklobberFlower(GridItemDusklobberFlower *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0673cec0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemDusklobberFlower_0673d178;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* GridItemDusklobberFlower::StaticNew() */

GridItemDusklobberFlower * GridItemDusklobberFlower::StaticNew(void)

{
  GridItemDusklobberFlower *this;
  
  this = ::operator_new(0x1d0);
  GridItemDusklobberFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlower::StaticClassInit() */

void GridItemDusklobberFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemDusklobberFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd7af8,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDusklobberFlower::StaticGetClass() */

long * GridItemDusklobberFlower::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDusklobberFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDusklobberFlower::GetClass() const */

long * GridItemDusklobberFlower::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemDusklobberFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemDusklobberFlower::getPlantWeapon() const */

undefined4 __thiscall GridItemDusklobberFlower::getPlantWeapon(GridItemDusklobberFlower *this)

{
  return *(undefined4 *)(this + 0x1c4);
}


/* GridItemDusklobberFlower::shouldStun(BoardEntity*) */

GridItemDusklobberFlower __thiscall
GridItemDusklobberFlower::shouldStun(GridItemDusklobberFlower *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  
  if (((((param_1 != (BoardEntity *)0x0) &&
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
       (cVar1 = Zombie::IsFriendZombie(this_00), cVar1 == '\0')) &&
      (((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
        (cVar1 = Zombie::IsFlickedOff(this_00), cVar1 == '\0')) &&
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
        ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
         (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')))))))) &&
     ((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
      ((((iVar2 = Zombie::GetSizeType(this_00), iVar2 != 2 &&
         (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))) {
    return this[0x1c0];
  }
  return (GridItemDusklobberFlower)0x0;
}


/* GridItemDusklobberFlower::stunZombie(BoardEntity*) */

void __thiscall
GridItemDusklobberFlower::stunZombie(GridItemDusklobberFlower *this,BoardEntity *param_1)

{
  if (param_1 != (BoardEntity *)0x0) {
    nop();
    Zombie::ApplyCondition((Zombie *)(*(float *)(this + 0x1c8) + *(float *)(this + 0x1c8)),0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlower::launchDescendingAvatarProjectile() */

void __thiscall
GridItemDusklobberFlower::launchDescendingAvatarProjectile(GridItemDusklobberFlower *this)

{
  undefined4 uVar1;
  GridItemDusklobberFlowerProps *pGVar2;
  undefined8 uVar3;
  Projectile *pPVar4;
  ZombossCrosshair *extraout_x0;
  Board *pBVar6;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  pBVar6._0_4_ = (Board *)FUN_03bd4574(*(undefined4 *)(this + 0x18),fVar5,
                                       *(undefined4 *)(this + 0x20));
  pGVar2 = GridItem::GetProps<GridItemDusklobberFlowerProps>();
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString((string *)(pGVar2 + 0xd8));
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  pPVar4 = (Projectile *)
           Board::AddProjectile(pBVar6._0_4_,0xc2c80000,0x42700000,uVar3,aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar1 = FUN_03bd4210(*(undefined4 *)(this + 0x24));
  FUN_03bd4214(pPVar4 + 0x24,uVar1);
  uVar1 = FUN_03bd430c(*(undefined4 *)(this + 0x134));
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_03bd42e4(pPVar4 + 0x50,uVar1);
  nop();
  if (extraout_x0 != (ZombossCrosshair *)0x0) {
    BombProjectile::SetOwningRocket(extraout_x0);
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)pBVar6._0_4_,fVar5,0.0);
  PepperpultPlantfoodProjectile::launchProjectileAt
            ((PepperpultPlantfoodProjectile *)this,pPVar4,(SexyVector3 *)aRStack_18,1.0,0.15);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlower::doDamage(int, float) */

void GridItemDusklobberFlower::doDamage(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  GridItemDusklobberFlower *this;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Zombie *pZVar8;
  int in_w1;
  int in_w4;
  ulong uVar9;
  undefined8 uVar10;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  GridItemDusklobberFlower *local_68;
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  this = (GridItemDusklobberFlower *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((0 < in_w1) && (0.0 < param_2)) {
    uVar9 = 0;
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_60 = (float)in_w1;
    local_68 = this;
    SetFlag<DamageTypeFlags>(auStack_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(auStack_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    iVar2 = FUN_03bd430c(*(undefined4 *)(this + 0x134));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar2,1,1,in_w4);
    local_94 = (float)(local_8c + local_84 / 2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = operator|(2,4);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar4 * SQRT(param_2),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
               aFStack_98,iVar2 - (int)param_2 / 2,iVar2 + (int)param_2 / 2);
    uVar10 = local_80;
    lVar5 = FUN_03bd43c4(local_80,local_78);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_03bd43e0(uVar10,uVar9);
        uVar3 = FUN_03bd4210(*(undefined4 *)(this + 0x24));
        cVar1 = RealObject::IsOnOpposingTeam(*puVar6,uVar3);
        if (cVar1 != '\0') {
          puVar6 = (undefined8 *)FUN_03bd43e0(local_80,uVar9);
          pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
          if ((pZVar8 == (Zombie *)0x0) ||
             (cVar1 = (**(code **)(*(long *)pZVar8 + 0xb8))(pZVar8,7), cVar1 != '\0')) {
            puVar6 = (undefined8 *)FUN_03bd43e0(local_80,uVar9);
            (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,(DamageInfo *)&local_68);
            puVar6 = (undefined8 *)FUN_03bd43e0(local_80,uVar9);
            cVar1 = shouldStun(this,(BoardEntity *)*puVar6);
            if ((cVar1 != '\0') && (*(int *)(this + 0x1c4) == 2)) {
              puVar6 = (undefined8 *)FUN_03bd43e0(local_80,uVar9);
              stunZombie(this,(BoardEntity *)*puVar6);
            }
          }
        }
        uVar10 = local_80;
        uVar9 = uVar9 + 1;
        uVar7 = FUN_03bd43c4(local_80,local_78);
      } while (uVar9 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDusklobberFlower::radiateSplashDamage() */

void __thiscall GridItemDusklobberFlower::radiateSplashDamage(GridItemDusklobberFlower *this)

{
  doDamage((int)this,*(float *)(this + 0x1b4));
  return;
}


/* GridItemDusklobberFlower::doShrapnelDamage() */

void __thiscall GridItemDusklobberFlower::doShrapnelDamage(GridItemDusklobberFlower *this)

{
  doDamage((int)this,*(float *)(this + 0x1bc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlower::setState(GridItemDusklobberFlowerState) */

void __thiscall
GridItemDusklobberFlower::setState(GridItemDusklobberFlower *this,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  GridItemDusklobberFlowerProps *pGVar3;
  PopAnimRig *pPVar4;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
  case 2:
    (**(code **)(*(long *)this + 0x80))(this,1);
    break;
  case 3:
    pGVar3 = GridItem::GetProps<GridItemDusklobberFlowerProps>();
    bVar1 = std::operator==((string *)(pGVar3 + 0xd8),"DusklobberPlantfoodAvatarBomb");
    if (bVar1) {
      launchDescendingAvatarProjectile(this);
    }
    else {
      launchDescendingAvatarProjectile(this);
    }
    break;
  case 4:
    (**(code **)(*(long *)this + 0x80))(this,0);
    std::string::string(asStack_78,"animation");
    nop();
    uVar2 = RandRangeInt(2,3);
    Sexy::OutputDebugStrF
              ((wchar_t *)"GridItemDusklobberFlower::setState subscript is %d",(ulong)uVar2);
    if (*(int *)(this + 0x1c4) == 2) {
      uVar2 = 4;
    }
    Sexy::StrFormat("%d",asStack_58,(ulong)uVar2);
    thunk_FUN_054757c0(asStack_78,asStack_58);
    std::string::~string(asStack_58);
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onGrowFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar4,asStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
    break;
  case 5:
    radiateSplashDamage(this);
    break;
  case 6:
    doShrapnelDamage(this);
  }
  *(undefined4 *)(this + 0x1a8) = param_2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemDusklobberFlower::onGridItemInitialize() */

void __thiscall GridItemDusklobberFlower::onGridItemInitialize(GridItemDusklobberFlower *this)

{
  bool bVar1;
  TimeChallengeEndLevelUI *this_00;
  NameMapperBase *this_01;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar3;
  *(undefined4 *)(this + 0x1b0) = 0x42480000;
  *(undefined4 *)(this + 0x1b8) = 0x42480000;
  *(undefined4 *)(this + 0x1b4) = 0x40200000;
  *(undefined4 *)(this + 0x1bc) = 0x40047ae1;
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemDusklobberFlower,void(GridItemDusklobberFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
  std::string::string(asStack_50,"dusklobber");
  uVar3 = NameMapperBase::GetIdForName(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  uVar2 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar4 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar2,uVar3,0x1f,0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1c8) = fVar4 + 1.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemDusklobberFlower::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemDusklobberFlower::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    iVar2 = FUN_03bd433c(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar2 == 4) {
      setState((GridItemDusklobberFlower *)param_1,5);
      return;
    }
    if (iVar2 == 5) {
      setState((GridItemDusklobberFlower *)param_1,6);
      return;
    }
  }
  return;
}


/* GridItemDusklobberFlower::onGrowFinished(std::string const&) */

void GridItemDusklobberFlower::onGrowFinished(string *param_1)

{
  setState((GridItemDusklobberFlower *)param_1,7);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* GridItemDusklobberFlower::StartGrowing() */

void __thiscall GridItemDusklobberFlower::StartGrowing(GridItemDusklobberFlower *this)

{
  setState(this,4);
  return;
}


/* GridItemDusklobberFlower::SetPauseBeforeStartFlower(float) */

void __thiscall
GridItemDusklobberFlower::SetPauseBeforeStartFlower(GridItemDusklobberFlower *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar1 + param_1;
  setState(this,2);
  return;
}


/* GridItemDusklobberFlower::onUpdate() */

void __thiscall GridItemDusklobberFlower::onUpdate(GridItemDusklobberFlower *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_03bd433c(*(undefined4 *)(this + 0x1a8));
  if (iVar1 == 2) {
    fVar3 = *(float *)(this + 0x1ac);
    fVar2 = (float)PVZ_EOT();
    if ((fVar3 < fVar2) && (fVar2 = (float)PVZ_T(), fVar2 < fVar3)) {
      setState(this,3);
      GridItemAnimation::onUpdate((GridItemAnimation *)this);
      return;
    }
  }
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}

