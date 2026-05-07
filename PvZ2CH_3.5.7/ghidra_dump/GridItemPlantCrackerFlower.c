// Class: GridItemPlantCrackerFlower


/* GridItemPlantCrackerFlower::getIsAvatarEnable() const */

GridItemPlantCrackerFlower __thiscall
GridItemPlantCrackerFlower::getIsAvatarEnable(GridItemPlantCrackerFlower *this)

{
  return this[0x1c0];
}


/* GridItemPlantCrackerFlower::SetSplashDamageProps(float, float) */

void __thiscall
GridItemPlantCrackerFlower::SetSplashDamageProps
          (GridItemPlantCrackerFlower *this,float param_1,float param_2)

{
  *(float *)(this + 0x1b0) = param_1;
  *(float *)(this + 0x1b4) = param_2;
  return;
}


/* GridItemPlantCrackerFlower::SetShrapnelProps(float, float) */

void __thiscall
GridItemPlantCrackerFlower::SetShrapnelProps
          (GridItemPlantCrackerFlower *this,float param_1,float param_2)

{
  *(float *)(this + 0x1b8) = param_2;
  *(float *)(this + 0x1bc) = param_1;
  return;
}


/* GridItemPlantCrackerFlower::CalcRenderOrder() const */

void __thiscall GridItemPlantCrackerFlower::CalcRenderOrder(GridItemPlantCrackerFlower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemPlantCrackerFlower::CalcRenderOrder() const */

void __thiscall GridItemPlantCrackerFlower::CalcRenderOrder(GridItemPlantCrackerFlower *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower() */

void __thiscall
GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower(GridItemPlantCrackerFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0fe0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlantCrackerFlower_067d1298;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower() */

void __thiscall
GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower(GridItemPlantCrackerFlower *this)

{
  ~GridItemPlantCrackerFlower(this + -0x10);
  return;
}


/* GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower() */

void __thiscall
GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower(GridItemPlantCrackerFlower *this)

{
  ~GridItemPlantCrackerFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower() */

void __thiscall
GridItemPlantCrackerFlower::~GridItemPlantCrackerFlower(GridItemPlantCrackerFlower *this)

{
  ~GridItemPlantCrackerFlower(this + -0x10);
  return;
}


/* GridItemPlantCrackerFlower::GridItemPlantCrackerFlower() */

void __thiscall
GridItemPlantCrackerFlower::GridItemPlantCrackerFlower(GridItemPlantCrackerFlower *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_067d0fe0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlantCrackerFlower_067d1298;
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* GridItemPlantCrackerFlower::StaticNew() */

GridItemPlantCrackerFlower * GridItemPlantCrackerFlower::StaticNew(void)

{
  GridItemPlantCrackerFlower *this;
  
  this = ::operator_new(0x1d0);
  GridItemPlantCrackerFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlower::StaticClassInit() */

void GridItemPlantCrackerFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlantCrackerFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_040a2c00,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlantCrackerFlower::StaticGetClass() */

long * GridItemPlantCrackerFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPlantCrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlantCrackerFlower::GetClass() const */

long * GridItemPlantCrackerFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPlantCrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlantCrackerFlower::getPlantWeapon() const */

undefined4 __thiscall GridItemPlantCrackerFlower::getPlantWeapon(GridItemPlantCrackerFlower *this)

{
  return *(undefined4 *)(this + 0x1cc);
}


/* GridItemPlantCrackerFlower::stunZombie(BoardEntity*) */

void __thiscall
GridItemPlantCrackerFlower::stunZombie(GridItemPlantCrackerFlower *this,BoardEntity *param_1)

{
  if (param_1 != (BoardEntity *)0x0) {
    nop();
    Zombie::ApplyCondition((Zombie *)0x40000000,0);
    return;
  }
  return;
}


/* GridItemPlantCrackerFlower::shouldStun(BoardEntity*) */

GridItemPlantCrackerFlower __thiscall
GridItemPlantCrackerFlower::shouldStun(GridItemPlantCrackerFlower *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  
  if (((((((param_1 != (BoardEntity *)0x0) &&
          (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0))
         && (cVar1 = Zombie::IsFriendZombie(this_00), cVar1 == '\0')) &&
        ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
         (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')))) &&
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
        ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
         (cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0')))))) &&
      (cVar1 = Zombie::IsFlickedOff(this_00), cVar1 == '\0')) &&
     ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
      (((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
        (iVar2 = Zombie::GetSizeType(this_00), iVar2 != 2)) &&
       ((cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0' &&
        ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))))))) {
    return this[0x1c0];
  }
  return (GridItemPlantCrackerFlower)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlower::launchDescendingAvatarProjectile() */

void __thiscall
GridItemPlantCrackerFlower::launchDescendingAvatarProjectile(GridItemPlantCrackerFlower *this)

{
  undefined4 uVar1;
  GridItemPlantCrackerFlowerProps *pGVar2;
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
  pBVar6._0_4_ = (Board *)FUN_040a1014(*(undefined4 *)(this + 0x18),fVar5,
                                       *(undefined4 *)(this + 0x20));
  pGVar2 = GridItem::GetProps<GridItemPlantCrackerFlowerProps>();
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
  uVar1 = FUN_040a0ba4(*(undefined4 *)(this + 0x24));
  FUN_040a0ba8(pPVar4 + 0x24,uVar1);
  uVar1 = FUN_040a0c98(*(undefined4 *)(this + 0x134));
  uVar1 = Board::MakeRenderOrder(0x64960,uVar1,0);
  FUN_040a0c74(pPVar4 + 0x50,uVar1);
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
/* GridItemPlantCrackerFlower::doDamage(int, float) */

void GridItemPlantCrackerFlower::doDamage(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Zombie *pZVar9;
  int in_w1;
  int in_w4;
  ulong uVar10;
  undefined8 uVar11;
  FastCurve aFStack_98 [4];
  float local_94;
  int local_8c;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_68;
  float local_60;
  undefined8 local_58 [10];
  long local_8;
  
  uVar5 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((0 < in_w1) && (0.0 < param_2)) {
    uVar10 = 0;
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    local_58[0] = 0x400;
    local_60 = (float)in_w1;
    local_68 = uVar5;
    SetFlag<DamageTypeFlags>(local_58,0x2000000000,0);
    SetFlag<DamageTypeFlags>(local_58,0x800,0);
    Sexy::FastCurve::SetOutRange(aFStack_98,*(float *)(uVar5 + 0x18),*(float *)(uVar5 + 0x1c));
    iVar2 = FUN_040a0c98(*(undefined4 *)(uVar5 + 0x134));
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
    uVar11 = local_80;
    lVar6 = FUN_040a0cc4(local_80,local_78);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_040a0cd0(uVar11,uVar10);
        uVar3 = FUN_040a0ba4(*(undefined4 *)(uVar5 + 0x24));
        cVar1 = RealObject::IsOnOpposingTeam(*puVar7,uVar3);
        if (cVar1 != '\0') {
          puVar7 = (undefined8 *)FUN_040a0cd0(local_80,uVar10);
          pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
          if ((pZVar9 == (Zombie *)0x0) ||
             (cVar1 = (**(code **)(*(long *)pZVar9 + 0xb8))(pZVar9,7), cVar1 != '\0')) {
            puVar7 = (undefined8 *)FUN_040a0cd0(local_80,uVar10);
            (**(code **)(*(long *)*puVar7 + 0x110))((long *)*puVar7,(DamageInfo *)&local_68);
          }
        }
        uVar11 = local_80;
        uVar10 = uVar10 + 1;
        uVar8 = FUN_040a0cc4(local_80,local_78);
      } while (uVar10 < uVar8);
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


/* GridItemPlantCrackerFlower::radiateSplashDamage() */

void __thiscall GridItemPlantCrackerFlower::radiateSplashDamage(GridItemPlantCrackerFlower *this)

{
  doDamage((int)this,*(float *)(this + 0x1b4));
  return;
}


/* GridItemPlantCrackerFlower::doShrapnelDamage() */

void __thiscall GridItemPlantCrackerFlower::doShrapnelDamage(GridItemPlantCrackerFlower *this)

{
  doDamage((int)this,*(float *)(this + 0x1bc));
  return;
}


/* GridItemPlantCrackerFlower::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemPlantCrackerFlower::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (!bVar1) {
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"GridItemPlantCrackerFlower::onPopAnimCommand");
  doShrapnelDamage((GridItemPlantCrackerFlower *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantCrackerFlower::setState(GridItemPlantCrackerFlowerState) */

void __thiscall
GridItemPlantCrackerFlower::setState(GridItemPlantCrackerFlower *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  undefined4 uVar2;
  PopAnimRig *local_88;
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
    (**(code **)(*(long *)this + 0x80))(this,0);
    std::string::string(asStack_78,"idle_drop");
    nop();
    GridItemAnimation::GetAnimRig();
    local_88 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    __s = "onDropFinished";
    goto LAB_040a5150;
  case 4:
    (**(code **)(*(long *)this + 0x80))(this,0);
    std::string::string(asStack_78,"attack");
    nop();
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onGrowFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1c8) = uVar2;
    std::string::~string(asStack_78);
    break;
  case 5:
    (**(code **)(*(long *)this + 0x80))(this,0);
    std::string::string(asStack_78,"boom");
    nop();
    Sexy::OutputDebugStrF((wchar_t *)"GridItemPlantCrackerFlower CRACKERFLOWERSTATE_EXPLODE");
    GridItemAnimation::GetAnimRig();
    local_88 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    __s = "onBoomFinished";
LAB_040a5150:
    std::string::string(asStack_58,__s);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_88,asStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
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
/* GridItemPlantCrackerFlower::onGridItemInitialize() */

void __thiscall GridItemPlantCrackerFlower::onGridItemInitialize(GridItemPlantCrackerFlower *this)

{
  TimeChallengeEndLevelUI *this_00;
  undefined4 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1c4) = 0x3f000000;
  *(undefined4 *)(this + 0x1c8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0x42480000;
  *(undefined4 *)(this + 0x1b4) = 0x3f88f5c3;
  *(undefined4 *)(this + 0x1b8) = 0x42480000;
  *(undefined4 *)(this + 0x1bc) = 0x3f88f5c3;
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemPlantCrackerFlower,void(GridItemPlantCrackerFlower::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlantCrackerFlower::onDropFinished(std::string const&) */

void GridItemPlantCrackerFlower::onDropFinished(string *param_1)

{
  setState((GridItemPlantCrackerFlower *)param_1,4);
  return;
}


/* GridItemPlantCrackerFlower::onGrowFinished(std::string const&) */

void GridItemPlantCrackerFlower::onGrowFinished(string *param_1)

{
  setState((GridItemPlantCrackerFlower *)param_1,5);
  return;
}


/* GridItemPlantCrackerFlower::onBoomFinished(std::string const&) */

void __thiscall
GridItemPlantCrackerFlower::onBoomFinished(GridItemPlantCrackerFlower *this,string *param_1)

{
  undefined8 uVar1;
  
  setState(this,7);
  uVar1 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"GridItemPlantCrackerFlower::onBoomFinished %s\n",uVar1);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* GridItemPlantCrackerFlower::StartGrowing() */

void __thiscall GridItemPlantCrackerFlower::StartGrowing(GridItemPlantCrackerFlower *this)

{
  setState(this,4);
  return;
}


/* GridItemPlantCrackerFlower::SetPauseBeforeStartFlower(float) */

void __thiscall
GridItemPlantCrackerFlower::SetPauseBeforeStartFlower
          (GridItemPlantCrackerFlower *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ac) = fVar1 + param_1;
  setState(this,2);
  return;
}


/* GridItemPlantCrackerFlower::onUpdate() */

void __thiscall GridItemPlantCrackerFlower::onUpdate(GridItemPlantCrackerFlower *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_040a0ca8(*(undefined4 *)(this + 0x1a8));
  if (iVar1 == 2) {
    fVar3 = *(float *)(this + 0x1ac);
    fVar2 = (float)PVZ_EOT();
    if (fVar2 <= fVar3) goto LAB_040a6680;
    fVar2 = (float)PVZ_T();
    if (fVar3 <= fVar2) {
      iVar1 = FUN_040a0ca8(*(undefined4 *)(this + 0x1a8));
    }
    else {
      setState(this,3);
      iVar1 = FUN_040a0ca8(*(undefined4 *)(this + 0x1a8));
    }
  }
  if ((iVar1 == 4) && (fVar3 = *(float *)(this + 0x1c8), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
    radiateSplashDamage(this);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1c8) = fVar2 + *(float *)(this + 0x1c4);
  }
LAB_040a6680:
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}

