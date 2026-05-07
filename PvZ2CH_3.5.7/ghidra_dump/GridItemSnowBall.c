// Class: GridItemSnowBall


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::StaticClassInit() */

void GridItemSnowBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSnowBall");
    (*pcVar2)(plVar1,asStack_10,FUN_03473674,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowBall::StaticGetClass() */

long * GridItemSnowBall::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSnowBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSnowBall::GetClass() const */

long * GridItemSnowBall::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSnowBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSnowBall::setMyType(int) */

void __thiscall GridItemSnowBall::setMyType(GridItemSnowBall *this,int param_1)

{
  *(int *)(this + 0x1ec) = param_1;
  return;
}


/* GridItemSnowBall::GridItemSnowBall() */

void __thiscall GridItemSnowBall::GridItemSnowBall(GridItemSnowBall *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0663bb30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnowBall_0663be40;
  Sexy::Point::Point((Point *)(this + 0x1f0));
  return;
}


/* GridItemSnowBall::StaticNew() */

GridItemSnowBall * GridItemSnowBall::StaticNew(void)

{
  GridItemSnowBall *this;
  
  this = ::operator_new(0x200);
  GridItemSnowBall(this);
  return this;
}


/* GridItemSnowBall::~GridItemSnowBall() */

void __thiscall GridItemSnowBall::~GridItemSnowBall(GridItemSnowBall *this)

{
  *(undefined ***)this = &PTR_GetClass_0663bb30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSnowBall_0663be40;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemSnowBall::~GridItemSnowBall() */

void __thiscall GridItemSnowBall::~GridItemSnowBall(GridItemSnowBall *this)

{
  ~GridItemSnowBall(this + -0x10);
  return;
}


/* GridItemSnowBall::~GridItemSnowBall() */

void __thiscall GridItemSnowBall::~GridItemSnowBall(GridItemSnowBall *this)

{
  ~GridItemSnowBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSnowBall::~GridItemSnowBall() */

void __thiscall GridItemSnowBall::~GridItemSnowBall(GridItemSnowBall *this)

{
  ~GridItemSnowBall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::calZombieSpeed(Zombie*) */

void __thiscall GridItemSnowBall::calZombieSpeed(GridItemSnowBall *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ZombieAnimRig *this_00;
  PopAnimRig *pPVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Zombie::GetAnimRig(param_1);
  lVar4 = FUN_034720f0(*(undefined8 *)(lVar4 + 0x20));
  iVar1 = *(int *)(lVar4 + 0x30);
  fVar8 = *(float *)(**(long **)(lVar4 + 0x58) + 0x90);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  iVar2 = ZombieAnimRig::GetAnimRateModifier(this_00);
  pPVar5 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  Zombie::GetAnimRig(param_1);
  ZombieAnimRig::GetGroundTrackName();
  plVar6 = (long *)Zombie::GetAnimRig(param_1);
  (**(code **)(*plVar6 + 0x1f0))(asStack_10);
  fVar7 = (float)CalcWalkPixelsPerSecondForAnimLabel(pPVar5,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((((float)iVar1 / ((float)iVar2 * fVar8)) * fVar7) / (float)iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onAnimAttackStoppedCallback(std::string const&) */

void __thiscall
GridItemSnowBall::onAnimAttackStoppedCallback(GridItemSnowBall *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"big_birth");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"big_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"big_attack");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"big_attack_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"mid_attack");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"mid_attack_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"small_attack");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"small_attack_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onAnimHitStoppedCallback(std::string const&) */

void __thiscall GridItemSnowBall::onAnimHitStoppedCallback(GridItemSnowBall *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"big_hit");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"big_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"mid_hit");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"mid_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"small_hit");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"small_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onAnimCrashStoppedCallback(std::string const&) */

void __thiscall GridItemSnowBall::onAnimCrashStoppedCallback(GridItemSnowBall *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"big_crash");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"big_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  bVar1 = std::operator==(param_1,"mid_crash");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  bVar1 = std::operator==(param_1,"small_crash");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowBall::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
GridItemSnowBall::OverrideProjectileCollision(GridItemSnowBall *this,Projectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_034720f4(*(undefined8 *)(param_1 + 0xe0));
  bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x2000000000);
  if (!bVar1) {
    uVar2 = GridItemBoardEntityConditionTarget::OverrideProjectileCollision
                      ((GridItemBoardEntityConditionTarget *)this,param_1);
    return uVar2;
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onAnimMeltStoppedCallback(std::string const&) */

void __thiscall GridItemSnowBall::onAnimMeltStoppedCallback(GridItemSnowBall *this,string *param_1)

{
  bool bVar1;
  RtObject *pRVar2;
  GridItemSmallSnowBall *this_00;
  GridItemMidSnowBall *this_01;
  Board *pBVar3;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  fVar5 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_0347211c(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(long)(int)fVar4,fVar4,fVar5);
  bVar1 = std::operator==(param_1,"big_melt");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"mid_snowball");
    pRVar2 = (RtObject *)Board::AddGridItem(pBVar3,asStack_10,local_18,local_14,1);
    this_01 = Sexy::RtObject::Cast<GridItemMidSnowBall>(pRVar2);
    std::string::~string(asStack_10);
    nop();
    setMyType((GridItemSnowBall *)this_01,1);
  }
  bVar1 = std::operator==(param_1,"mid_melt");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"small_snowball");
    pRVar2 = (RtObject *)Board::AddGridItem(pBVar3,asStack_10,local_18,local_14,1);
    this_00 = Sexy::RtObject::Cast<GridItemSmallSnowBall>(pRVar2);
    std::string::~string(asStack_10);
    nop();
    setMyType((GridItemSnowBall *)this_00,2);
  }
  bVar1 = std::operator==(param_1,"small_melt");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowBall::changeRowPosition(Zombie*) */

void __thiscall GridItemSnowBall::changeRowPosition(GridItemSnowBall *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ZombieLaneChangingSubsystem *pZVar5;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
    iVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar4 + 4));
    iVar3 = RandRangeInt(0,1);
    if (iVar3 < 1) {
      iVar3 = iVar2 + -1;
      if (iVar2 + 1 < 5) {
        iVar3 = iVar2 + 1;
      }
    }
    else {
      iVar3 = iVar2 + 1;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
    }
    pZVar5 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ZombieLaneChangingSubsystem::ForceLaneChange
              ((ZombieLaneChangingSubsystem *)0x3fc00000,0x40200000,pZVar5,param_1,iVar3,4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onGridItemInitialize() */

void __thiscall GridItemSnowBall::onGridItemInitialize(GridItemSnowBall *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  *(undefined4 *)(this + 0x1e8) = 0;
  this[0x1f8] = (GridItemSnowBall)0x1;
  this[0x1f9] = (GridItemSnowBall)0x1;
  *(undefined4 *)(this + 0x1ec) = 0;
  this[0x1fa] = (GridItemSnowBall)0x0;
  Sexy::Point::Point((Point *)&local_58,-1,-1);
  *(undefined8 *)(this + 0x1f0) = local_58;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_68,"big_birth");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_58,"onAnimAttackStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             (Point *)&local_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  FUN_03472110(this + 0x195);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::attackTarget() */

void __thiscall GridItemSnowBall::attackTarget(GridItemSnowBall *this)

{
  int iVar1;
  RtObject *pRVar2;
  char *__s;
  GridItemSnowRig *local_98;
  int local_80 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar1 = local_80[0] + 1;
  local_80[0] = -1;
  (**(code **)(*(long *)this + 0x2d0))((float)iVar1 * 0.5,this,local_80);
  iVar1 = *(int *)(this + 0x1ec);
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "mid";
  }
  else if (iVar1 == 2) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "small";
  }
  else {
    if (iVar1 != 0) goto LAB_03474738;
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "big";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimAttackStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemSnowRig::playPreAttack(local_98,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_03474738:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onHit() */

void __thiscall GridItemSnowBall::onHit(GridItemSnowBall *this)

{
  int iVar1;
  RtObject *pRVar2;
  char *__s;
  GridItemSnowRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1ec);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "mid";
  }
  else if (iVar1 == 2) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "small";
  }
  else {
    if (iVar1 != 0) goto LAB_03474930;
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "big";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimHitStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemSnowRig::playHit(local_98,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_03474930:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::toCrash() */

void __thiscall GridItemSnowBall::toCrash(GridItemSnowBall *this)

{
  int iVar1;
  Effect_BigCrash *this_00;
  PopAnim *pPVar2;
  undefined4 *puVar3;
  RtObject *pRVar4;
  char *__s;
  GridItemSnowRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BigCrash>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_60,"POPANIM_EFFECTS_BIG_CRASH");
  GetPAMByName(asStack_60);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  std::string::~string(asStack_60);
  nop();
  iVar1 = *(int *)(this + 0x1ec);
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar4);
    __s = "mid";
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 0) {
        puVar3 = (undefined4 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
        Effect_BigCrash::startBigCrash(*puVar3,puVar3[1],puVar3[2],this_00);
      }
      goto LAB_03474b98;
    }
    GridItemAnimation::GetAnimRig();
    pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar4);
    __s = "small";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_58,"onAnimCrashStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_60,
             aRStack_58);
  GridItemSnowRig::playCrash(local_98,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_03474b98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowBall::executeAttack(Plant*) */

void __thiscall GridItemSnowBall::executeAttack(GridItemSnowBall *this,Plant *param_1)

{
  char cVar1;
  
  toCrash(this);
  cVar1 = FUN_034720f8(*(undefined4 *)(param_1 + 0x1d0));
  if (cVar1 != '\0') {
    return;
  }
  Plant::beThrown(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::meltSnowBall() */

void __thiscall GridItemSnowBall::meltSnowBall(GridItemSnowBall *this)

{
  int iVar1;
  RtObject *pRVar2;
  char *__s;
  GridItemSnowRig *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1ec);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "mid";
  }
  else if (iVar1 == 2) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "small";
  }
  else {
    if (iVar1 != 0) goto LAB_03474dec;
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    local_98 = Sexy::RtObject::Cast<GridItemSnowRig>(pRVar2);
    __s = "big";
  }
  std::string::string(asStack_68,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimMeltStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  GridItemSnowRig::playMelt(local_98,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_03474dec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSnowBall::TakeDamage(DamageInfo const&) */

void __thiscall GridItemSnowBall::TakeDamage(GridItemSnowBall *this,DamageInfo *param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = operator|(0x400,0x400000);
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),uVar3);
  if (bVar2) {
    iVar1 = *(int *)(this + 0x1e8);
    *(int *)(this + 0x1e8) = iVar1 + 1;
    if (iVar1 + 1 < 10) {
      onHit(this);
      return;
    }
    meltSnowBall(this);
    this[0x1f9] = (GridItemSnowBall)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::onUpdate() */

void __thiscall GridItemSnowBall::onUpdate(GridItemSnowBall *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Insets *pIVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  Zombie *this_00;
  string *psVar7;
  float fVar8;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  GridItem::GetGridLocation();
  if ((((local_48 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= local_48)) ||
      (local_44 < 0)) || (iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar3 <= local_44)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (this[0x1f9] != (GridItemSnowBall)0x0) {
    pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
    Sexy::Insets::Insets(aIStack_30,pIVar4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInRectangle(avStack_20,2,aIStack_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (this_00 != (Zombie *)0x0) {
        psVar7 = (string *)Zombie::GetTypeName(this_00);
        bVar1 = std::operator==(psVar7,"modern_allstar");
        if (((bVar1) || (fVar8 = (float)calZombieSpeed(this,this_00), 1.0 <= fVar8)) ||
           ((cVar2 = Zombie::IsBoss(this_00), cVar2 != '\0' ||
            (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')))) {
          attackTarget(this);
          this[0x1fa] = (GridItemSnowBall)0x1;
          this[0x1f9] = (GridItemSnowBall)0x0;
        }
        else {
          changeRowPosition(this,this_00);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (this[0x1fa] != (GridItemSnowBall)0x0) {
    pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
    Sexy::Insets::Insets(aIStack_30,pIVar4);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesInRectangle(avStack_20,1,aIStack_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
      (**(code **)(*(long *)this + 0x2f8))(this,pPVar6);
      if (*(int *)(this + 0x1ec) - 1U < 2) {
        this[0x1fa] = (GridItemSnowBall)0x0;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSnowBall::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSnowBall::GatherPlantingRestrictions
          (GridItemSnowBall *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x71;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

