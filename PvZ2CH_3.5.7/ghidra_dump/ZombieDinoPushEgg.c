// Class: ZombieDinoPushEgg


/* ZombieDinoPushEgg::updateState_Walk() */

void __thiscall ZombieDinoPushEgg::updateState_Walk(ZombieDinoPushEgg *this)

{
  ZombieDinoPushEgg ZVar1;
  
  ZVar1 = (ZombieDinoPushEgg)BoardEntity::IsOnScreen((BoardEntity *)this);
  this[0x848] = ZVar1;
  ZombieWithPushingAction::updateState_Walk((ZombieWithPushingAction *)this);
  return;
}


/* ZombieDinoPushEgg::TakeDamage(DamageInfo const&) */

void __thiscall ZombieDinoPushEgg::TakeDamage(ZombieDinoPushEgg *this,DamageInfo *param_1)

{
  char cVar1;
  
  if ((this[0x848] == (ZombieDinoPushEgg)0x0) &&
     (cVar1 = Zombie::HasCondition(this,0x91), cVar1 == '\0')) {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  return;
}


/* ZombieDinoPushEgg::TakeFatalDamage(DamageInfo const&) */

void __thiscall ZombieDinoPushEgg::TakeFatalDamage(ZombieDinoPushEgg *this,DamageInfo *param_1)

{
  char cVar1;
  
  if ((this[0x848] == (ZombieDinoPushEgg)0x0) &&
     (cVar1 = Zombie::HasCondition(this,0x91), cVar1 == '\0')) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,param_1);
  return;
}


/* ZombieDinoPushEgg::CanBeFlickedOff() const */

undefined8 __thiscall ZombieDinoPushEgg::CanBeFlickedOff(ZombieDinoPushEgg *this)

{
  undefined8 uVar1;
  
  if (this[0x848] == (ZombieDinoPushEgg)0x0) {
    return 0;
  }
  uVar1 = Zombie::CanBeFlickedOff((Zombie *)this);
  return uVar1;
}


/* ZombieDinoPushEgg::CalcRenderOrder() const */

ulong __thiscall ZombieDinoPushEgg::CalcRenderOrder(ZombieDinoPushEgg *this)

{
  ulong uVar1;
  
  if (-1 < (int)*(uint *)(this + 0x844)) {
    return (ulong)*(uint *)(this + 0x844);
  }
  uVar1 = Zombie::CalcRenderOrder((Zombie *)this);
  return uVar1;
}


/* non-virtual thunk to ZombieDinoPushEgg::CalcRenderOrder() const */

void __thiscall ZombieDinoPushEgg::CalcRenderOrder(ZombieDinoPushEgg *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEgg::StaticClassInit() */

void ZombieDinoPushEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDinoPushEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_047fc978,0x850,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoPushEgg::StaticGetClass() */

long * ZombieDinoPushEgg::StaticGetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoPushEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoPushEgg::GetClass() const */

long * ZombieDinoPushEgg::GetClass(void)

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
  uVar2 = ZombieWithPushingAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoPushEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoPushEgg::CanBeFlicked() const */

undefined8 __thiscall ZombieDinoPushEgg::CanBeFlicked(ZombieDinoPushEgg *this)

{
  undefined8 uVar1;
  
  if (this[0x848] == (ZombieDinoPushEgg)0x0) {
    return 0;
  }
  uVar1 = Zombie::CanBeFlicked((Zombie *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEgg::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieDinoPushEgg::CanBeTargetedByPlant
          (ZombieDinoPushEgg *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (this[0x848] != (ZombieDinoPushEgg)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar1 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieDinoPushEgg::onZombieInitialize() */

void __thiscall ZombieDinoPushEgg::onZombieInitialize(ZombieDinoPushEgg *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  ZombieDinoPushEggProps *pZVar1;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieDinoPushEggProps_const>(this_01);
  if (pZVar1 != (ZombieDinoPushEggProps *)0x0) {
    ZombieWithPushingAction::setPushingProperties
              ((ZombieWithPushingAction *)this,*(int *)(pZVar1 + 0x228));
    return;
  }
  return;
}


/* ZombieDinoPushEgg::ZombieDinoPushEgg() */

void __thiscall ZombieDinoPushEgg::ZombieDinoPushEgg(ZombieDinoPushEgg *this)

{
  ZombieWithPushingAction::ZombieWithPushingAction((ZombieWithPushingAction *)this);
  *(undefined4 *)(this + 0x844) = 0xffffffff;
  this[0x848] = (ZombieDinoPushEgg)0x0;
  *(undefined ***)this = &PTR_GetClass_068fa9c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoPushEgg_068fb438;
  return;
}


/* ZombieDinoPushEgg::StaticNew() */

ZombieDinoPushEgg * ZombieDinoPushEgg::StaticNew(void)

{
  ZombieDinoPushEgg *this;
  
  this = ::operator_new(0x850);
  ZombieDinoPushEgg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEgg::updateState_Eat() */

void __thiscall ZombieDinoPushEgg::updateState_Eat(ZombieDinoPushEgg *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  Zombie *this_01;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  DamageInfo *pDVar7;
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Eat((Zombie *)this);
  if (((this[0x848] == (ZombieDinoPushEgg)0x0) &&
      (this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this), this_00 != (RtObject *)0x0)
      ) && (this_01 = Sexy::RtObject::Cast<Zombie>(this_00), this_01 != (Zombie *)0x0)) {
    fVar5 = (float)(**(code **)(*(long *)this + 0x498))(this);
    fVar6 = (float)PVZ_Dt();
    local_68[0] = 0;
    local_70 = fVar5 * fVar6 * 100.0;
    pfVar3 = eastl::max_alt<float>(&local_70,(float *)local_68);
                    /* WARNING: Load size is inaccurate */
    pDVar7._0_4_ = *(DamageInfo **)pfVar3;
    pcVar4 = *(code **)(*(long *)this_01 + 0x110);
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
    iVar2 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Point::Point(aPStack_78,iVar1,iVar2);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar7._0_4_,local_70,local_6c,(DamageInfo *)local_68,this,aPStack_78,0);
    (*pcVar4)(this_01,(DamageInfo *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoPushEgg::~ZombieDinoPushEgg() */

void __thiscall ZombieDinoPushEgg::~ZombieDinoPushEgg(ZombieDinoPushEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_068fa9c0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDinoPushEgg_068fb438;
  ZombieWithPushingAction::~ZombieWithPushingAction((ZombieWithPushingAction *)this);
  return;
}


/* non-virtual thunk to ZombieDinoPushEgg::~ZombieDinoPushEgg() */

void __thiscall ZombieDinoPushEgg::~ZombieDinoPushEgg(ZombieDinoPushEgg *this)

{
  ~ZombieDinoPushEgg(this + -0x10);
  return;
}


/* ZombieDinoPushEgg::~ZombieDinoPushEgg() */

void __thiscall ZombieDinoPushEgg::~ZombieDinoPushEgg(ZombieDinoPushEgg *this)

{
  ~ZombieDinoPushEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDinoPushEgg::~ZombieDinoPushEgg() */

void __thiscall ZombieDinoPushEgg::~ZombieDinoPushEgg(ZombieDinoPushEgg *this)

{
  ~ZombieDinoPushEgg(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEgg::pickDinoEgg() */

void ZombieDinoPushEgg::pickDinoEgg(void)

{
  bool bVar1;
  Zombie *in_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar2;
  ZombieDinoPushEggProps *pZVar3;
  EntityWeight *pEVar4;
  size_t in_x2;
  string *in_x8;
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  EntityWeight aEStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(in_x0);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_05475d88(asStack_78,lVar2 + 8);
  bVar1 = std::operator==(asStack_78,"dino_pushegg");
  if (bVar1) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    pZVar3 = Zombie::GetProps<ZombieDinoPushEggProps>(in_x0);
    local_70 = FUN_047fce20(*(undefined8 *)(pZVar3 + 0x230));
    local_68 = FUN_047fce70(*(undefined8 *)(pZVar3 + 0x238));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1)
    {
      pEVar4 = (EntityWeight *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      EntityWeight::EntityWeight(aEStack_58,pEVar4);
      FUN_05475d88(asStack_60,auStack_48);
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
      std::string::~string(asStack_60);
      EntityWeight::~EntityWeight(aEStack_58);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
    }
    ProbabilitySet<std::string>::PickItem();
    FUN_05474278();
    std::string::~string((string *)aEStack_58);
    ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  }
  else {
    bVar1 = std::operator==(asStack_78,"dino_pushptero");
    if (bVar1) {
      std::string::append(in_x8,"dinoegg_ptero",in_x2);
    }
    else {
      bVar1 = std::operator==(asStack_78,"dino_pushbronto");
      if (bVar1) {
        std::string::append(in_x8,"dinoegg_bronto",in_x2);
      }
      else {
        bVar1 = std::operator==(asStack_78,"dino_pushtyranno");
        if (bVar1) {
          std::string::append(in_x8,"dinoegg_tyranno",in_x2);
        }
        else {
          std::operator==(asStack_78,"dino_pushzomshell");
          std::string::append(in_x8,"dinoegg_zomshell",in_x2);
        }
      }
    }
  }
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEgg::spawnGridItemThatZombiePushes(int) */

void __thiscall
ZombieDinoPushEgg::spawnGridItemThatZombiePushes(ZombieDinoPushEgg *this,int param_1)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  GridItemEgg *this_01;
  int local_34;
  string asStack_30 [8];
  int local_28;
  int local_24;
  Point aPStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(local_34);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar1,(float)iVar2,0.0);
  pickDinoEgg();
  this_00 = (RtObject *)Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_30,0,0,1);
  if ((this_00 != (RtObject *)0x0) &&
     (this_01 = Sexy::RtObject::Cast<GridItemEgg>(this_00), this_01 != (GridItemEgg *)0x0)) {
    GridItemEgg::SetLevelHitpoints(this_01,*(int *)(this + 0x50));
    Sexy::Point::Point((Point *)&local_28,(int)local_18,(int)local_14);
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
    Sexy::Point::Point(aPStack_20,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this_01,aPStack_20,1);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

