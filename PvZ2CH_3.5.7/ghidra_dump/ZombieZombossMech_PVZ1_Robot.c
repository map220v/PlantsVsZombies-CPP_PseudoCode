// Class: ZombieZombossMech_PVZ1_Robot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::getFreeSpacesNear(Sexy::Point const&, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) const */

void __thiscall
ZombieZombossMech_PVZ1_Robot::getFreeSpacesNear
          (ZombieZombossMech_PVZ1_Robot *this,Point *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  long lVar8;
  int local_14;
  int local_10 [2];
  long local_8;
  
  iVar1 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  local_10[0] = iVar1 + -1;
  local_14 = 0;
  piVar7 = eastl::max_alt<int>(&local_14,local_10);
  iVar2 = *piVar7;
  lVar8 = *(long *)(gLawnApp + 0x9f0);
  local_14 = *(int *)(lVar8 + 0xf8) + -1;
  local_10[0] = iVar1 + 1;
  piVar7 = eastl::min_alt<int>(&local_14,local_10);
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *piVar7;
  local_10[0] = iVar1 + -1;
  local_14 = 0;
  piVar7 = eastl::max_alt<int>(&local_14,local_10);
  iVar4 = *piVar7;
  local_14 = *(int *)(lVar8 + 0xfc) + -1;
  local_10[0] = iVar1 + 1;
  piVar7 = eastl::min_alt<int>(&local_14,local_10);
  iVar1 = *piVar7;
  for (; iVar5 = iVar4, iVar2 <= iVar3; iVar2 = iVar2 + 1) {
    for (; iVar5 <= iVar1; iVar5 = iVar5 + 1) {
      Sexy::Point::Point((Point *)local_10,iVar2,iVar5);
      cVar6 = Board::CanAddGraveStoneAt(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar5,false);
      if ((cVar6 != '\0') &&
         (cVar6 = Sexy::TPoint<int>::operator!=((TPoint<int> *)param_1,(TPoint *)local_10),
         cVar6 != '\0')) {
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_2,(Point *)local_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_PVZ1_Robot::OnZombieZombossDied(Zombie*, DamageInfo const*) */

void ZombieZombossMech_PVZ1_Robot::OnZombieZombossDied(Zombie *param_1,DamageInfo *param_2)

{
  if (param_1 != (Zombie *)param_2) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x2f0))();
  return;
}


/* ZombieZombossMech_PVZ1_Robot::CalcRenderOrder() const */

void ZombieZombossMech_PVZ1_Robot::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x635d8,*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),0x1f5);
  return;
}


/* non-virtual thunk to ZombieZombossMech_PVZ1_Robot::CalcRenderOrder() const */

void __thiscall ZombieZombossMech_PVZ1_Robot::CalcRenderOrder(ZombieZombossMech_PVZ1_Robot *this)

{
  CalcRenderOrder();
  return;
}


/* ZombieZombossMech_PVZ1_Robot::Retreat(ZombieState) */

void ZombieZombossMech_PVZ1_Robot::Retreat(Zombie *param_1)

{
  ZombieCamelTouch::SetCardType();
  Zombie::setZombieState(param_1,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::updateState_ZombossStageChange() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::updateState_ZombossStageChange(ZombieZombossMech_PVZ1_Robot *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  ZombieZombossMech::onStunEndAnimDone((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::StaticClassInit() */

void ZombieZombossMech_PVZ1_Robot::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_PVZ1_Robot");
    (*pcVar2)(plVar1,asStack_10,FUN_04f1e7d8,0x9a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_PVZ1_Robot::StaticGetClass() */

long * ZombieZombossMech_PVZ1_Robot::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_PVZ1_Robot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_PVZ1_Robot::GetClass() const */

long * ZombieZombossMech_PVZ1_Robot::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_PVZ1_Robot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::getLastActionIndex() */

void __thiscall ZombieZombossMech_PVZ1_Robot::getLastActionIndex(ZombieZombossMech_PVZ1_Robot *this)

{
  ZombieZombossMech_PVZ1_Robot *pZVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtrBase *this_00;
  ulong uVar5;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  pZVar1 = this + 0x960;
  if (this[0x990] != (ZombieZombossMech_PVZ1_Robot)0x0) {
    pZVar1 = this + 0x978;
  }
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04f11fc0(*(undefined8 *)pZVar1,*(undefined8 *)(pZVar1 + 8));
  if (lVar3 != 0) {
    do {
      ZombieZombossMech::getLastAction();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
      else {
        this_00 = (RtWeakPtrBase *)FUN_04f11ff0(*(undefined8 *)pZVar1,uVar5);
        ZombieZombossMech::getLastAction();
        cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,(RtWeakPtrBase *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (cVar2 != '\0') {
          uVar5 = uVar5 & 0xffffffff;
          goto LAB_04f16104;
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_04f11fc0(*(undefined8 *)pZVar1,*(undefined8 *)(pZVar1 + 8));
    } while (uVar5 < uVar4);
  }
  uVar5 = 0xffffffff;
LAB_04f16104:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* ZombieZombossMech_PVZ1_Robot::getSpitOutBallActionHandler() */

ZombossRobotSpitOutBallActionHandler * __thiscall
ZombieZombossMech_PVZ1_Robot::getSpitOutBallActionHandler(ZombieZombossMech_PVZ1_Robot *this)

{
  char cVar1;
  RtObject *this_00;
  ZombossRobotSpitOutBallActionHandler *pZVar2;
  
  cVar1 = Zombie::IsIgnoringAllDamage((Zombie *)this);
  if ((cVar1 == '\0') &&
     (this_00 = (RtObject *)ZombieWithActions::getCurrentAction((ZombieWithActions *)this),
     this_00 != (RtObject *)0x0)) {
    pZVar2 = Sexy::RtObject::Cast<ZombossRobotSpitOutBallActionHandler>(this_00);
    return pZVar2;
  }
  return (ZombossRobotSpitOutBallActionHandler *)0x0;
}


/* ZombieZombossMech_PVZ1_Robot::onEndCondition(ZombieConditions) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onEndCondition(ZombieZombossMech_PVZ1_Robot *this,int param_2)

{
  ZombossRobotSpitOutBallActionHandler *this_00;
  
  if ((param_2 == 1) &&
     (this_00 = (ZombossRobotSpitOutBallActionHandler *)getSpitOutBallActionHandler(this),
     this_00 != (ZombossRobotSpitOutBallActionHandler *)0x0)) {
    ZombossRobotSpitOutBallActionHandler::popLeftTime(this_00);
    return;
  }
  return;
}


/* ZombieZombossMech_PVZ1_Robot::ZombieZombossMech_PVZ1_Robot() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::ZombieZombossMech_PVZ1_Robot(ZombieZombossMech_PVZ1_Robot *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_06a0f290;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_PVZ1_Robot_06a0fe50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x960));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x978));
  this[0x990] = (ZombieZombossMech_PVZ1_Robot)0x0;
  *(undefined4 *)(this + 0x998) = 0;
  this[0x99c] = (ZombieZombossMech_PVZ1_Robot)0x0;
  *(undefined4 *)(this + 0x994) = 0xffffffff;
  *(undefined4 *)(this + 0x9a0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieZombossDied);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFreezeZombossRobot);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<GameObject*,float,Sexy::CBMemberTranslatorX<ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(GameObject*,float)>>
            ((MessageRouter *)puVar1,Message::FreezeZombossRobot,&local_70);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::StaticNew() */

ZombieZombossMech_PVZ1_Robot * ZombieZombossMech_PVZ1_Robot::StaticNew(void)

{
  ZombieZombossMech_PVZ1_Robot *this;
  
  this = ::operator_new(0x9a8);
  ZombieZombossMech_PVZ1_Robot(this);
  return this;
}


/* ZombieZombossMech_PVZ1_Robot::onEnterState_ZombossStageChange(ZombieState) */

void ZombieZombossMech_PVZ1_Robot::onEnterState_ZombossStageChange(Zombie *param_1)

{
  int iVar1;
  
  Zombie::GetProps<ZombieZombossMechProps>(param_1);
  iVar1 = FUN_04f11ec0(*(undefined4 *)(param_1 + 0x844));
  ZombieZombossMech::setStageIndex((ZombieZombossMech *)param_1,iVar1 + 1);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::onFreezeZombossRobot(GameObject*, float) */

void ZombieZombossMech_PVZ1_Robot::onFreezeZombossRobot(GameObject *param_1,float param_2)

{
  ZombossRobotSpitOutBallActionHandler *this;
  ZombieZombossMechPVZ1RobotProps *pZVar1;
  float *pfVar2;
  undefined8 uVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  float local_4;
  
  local_4 = param_2;
  this = (ZombossRobotSpitOutBallActionHandler *)
         getSpitOutBallActionHandler((ZombieZombossMech_PVZ1_Robot *)param_1);
  if (this != (ZombossRobotSpitOutBallActionHandler *)0x0) {
    pZVar1 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>((Zombie *)param_1);
    pfVar2 = eastl::min_alt<float>(&local_4,(float *)(pZVar1 + 0x2b0));
                    /* WARNING: Load size is inaccurate */
    pEVar4._0_4_ = *(EntityConditionTracker<Zombie,ZombieConditions> **)pfVar2;
    uVar3 = Zombie::GetConditionTracker((Zombie *)param_1);
    EntityConditionTracker<Zombie,ZombieConditions>::ApplyCondition(pEVar4._0_4_,0,uVar3,param_1,1);
    ZombossRobotSpitOutBallActionHandler::pushLeftTime(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::tossGravestone(Sexy::Point const&, Sexy::Point const&) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::tossGravestone
          (ZombieZombossMech_PVZ1_Robot *this,Point *param_1,Point *param_2)

{
  ZombieZombossMechPVZ1RobotProps *pZVar1;
  Projectile *this_00;
  TombraiserProjectile *this_01;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpace(param_1);
  pZVar1 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>((Zombie *)this);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar1 + 0x2a8));
  this_00 = (Projectile *)
            Board::AddProjectile((Board *)(float)local_28,(float)local_24,0,uVar2,aRStack_18,this,0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  nop();
  TombraiserProjectile::SetGridTarget(this_01,param_2);
  BoardTransforms::GridToBoardSpace(param_2);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_20,(float)local_1c,0.0);
  Projectile::LaunchAt(this_00,(SexyVector3 *)aRStack_18,250.0,1.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_PVZ1_Robot::clearOverrideLoopActionPool() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::clearOverrideLoopActionPool(ZombieZombossMech_PVZ1_Robot *this)

{
  ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::clear((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
           *)(this + 0x978));
  this[0x990] = (ZombieZombossMech_PVZ1_Robot)0x0;
  return;
}


/* ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot(ZombieZombossMech_PVZ1_Robot *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0f290;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_PVZ1_Robot_06a0fe50;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x978));
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x960));
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot(ZombieZombossMech_PVZ1_Robot *this)

{
  ~ZombieZombossMech_PVZ1_Robot(this + -0x10);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot(ZombieZombossMech_PVZ1_Robot *this)

{
  ~ZombieZombossMech_PVZ1_Robot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::~ZombieZombossMech_PVZ1_Robot(ZombieZombossMech_PVZ1_Robot *this)

{
  ~ZombieZombossMech_PVZ1_Robot(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::pickRandomSpacesFrom(int, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> > const&, std::vector<Sexy::Point, std::allocator<Sexy::Point> >&)
   const */

void __thiscall
ZombieZombossMech_PVZ1_Robot::pickRandomSpacesFrom
          (ZombieZombossMech_PVZ1_Robot *this,int param_1,vector *param_2,vector *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Point *pPVar4;
  int iVar5;
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [8];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_20,param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  if (0 < param_1) {
    iVar5 = 0;
    do {
      cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(avStack_20);
      if (cVar1 != '\0') break;
      iVar5 = iVar5 + 1;
      pPVar4 = (Point *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_20);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_3,pPVar4);
      FUN_04f12c28(auStack_18);
    } while (iVar5 != param_1);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::OnRocketHitGround(ZombossRocket*) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::OnRocketHitGround
          (ZombieZombossMech_PVZ1_Robot *this,ZombossRocket *param_1)

{
  int iVar1;
  bool bVar2;
  Point *pPVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  ZombieZombossMechProps *pZVar6;
  ZombieZombossMechProps *pZVar7;
  ZombieZombossMechPVZ1RobotProps *pZVar8;
  Point *pPVar9;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (Point *)NetworkCacheQueue::getItemFragmentCache((NetworkCacheQueue *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_50,1,*(undefined4 *)pPVar3,*(undefined4 *)(pPVar3 + 4));
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_50);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_20);
    if (!bVar2) break;
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
    if (pPVar5 != (Plant *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)aRStack_38);
      Plant::TakeSmashAttack(pPVar5,(RtWeakPtr<Sexy::SoundResource> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    FUN_04f16b9c((exception_ptr *)&local_58);
  }
  pZVar6 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  pZVar7 = Zombie::GetProps<ZombieZombossMechProps>((Zombie *)this);
  ZombossRocket::CreateExplosionEffect
            (param_1,(string *)(pZVar6 + 0x220),(string *)(pZVar7 + 0x238));
  std::string::string((string *)local_20,"Play_Zomb_Egypt_Zomboss_Attack_Projectile_Impact");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_20,0.0);
  std::string::~string((string *)local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_38);
  getFreeSpacesNear(this,pPVar3,(vector *)aRStack_38);
  pZVar8 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar8 + 0x2a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  pickRandomSpacesFrom(this,iVar1,(vector *)aRStack_38,(vector *)local_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    pPVar9 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    tossGravestone(this,pPVar3,pPVar9);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)aRStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::initLoopActionPool() */

void __thiscall ZombieZombossMech_PVZ1_Robot::initLoopActionPool(ZombieZombossMech_PVZ1_Robot *this)

{
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x960);
  local_8 = ___stack_chk_guard;
  lVar1 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar2 = FUN_04f16cdc(*(undefined8 *)(lVar1 + 0x50));
  uVar3 = FUN_04f16d2c(*(undefined8 *)(lVar1 + 0x58));
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::
  insert<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ZombieActionDefinition>const*,std::vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>>,void>
            (this_00,local_10,uVar2,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::setLoopActionPoolOverride(std::vector<Sexy::RtWeakPtr<ZombieActionDefinition>,
   std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition> > >) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::setLoopActionPoolOverride
          (ZombieZombossMech_PVZ1_Robot *this,undefined8 *param_2)

{
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)(this + 0x978);
  local_8 = ___stack_chk_guard;
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::clear(this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar2 = FUN_04f16cdc(*param_2);
  uVar3 = FUN_04f16d2c(param_2[1]);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::
  insert<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ZombieActionDefinition>const*,std::vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>>,void>
            (this_00,local_10,uVar2,uVar3);
  lVar1 = ___stack_chk_guard;
  this[0x990] = (ZombieZombossMech_PVZ1_Robot)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::onCompletedSkillCycle() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onCompletedSkillCycle(ZombieZombossMech_PVZ1_Robot *this)

{
  int iVar1;
  ZombieZombossMechPVZ1RobotProps *pZVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>((Zombie *)this);
  iVar1 = FUN_04f11ec0(*(undefined4 *)(this + 0x844));
  if (((iVar1 - 2U < 2) && (this[0x990] == (ZombieZombossMech_PVZ1_Robot)0x0)) &&
     (1 < *(int *)(this + 0x998))) {
    *(undefined4 *)(this + 0x998) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    ZombieZombossMech::setLastAction((ZombieZombossMech *)this,a_Stack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    std::
    vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
    ::vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
              *)a_Stack_20,(vector *)(pZVar2 + 0x2b8));
    setLoopActionPoolOverride(this,a_Stack_20);
    std::
    vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
    ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
               *)a_Stack_20);
    this[0x99c] = (ZombieZombossMech_PVZ1_Robot)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::pickNextLoopAction() */

void ZombieZombossMech_PVZ1_Robot::pickNextLoopAction(void)

{
  char cVar1;
  Zombie *in_x0;
  ZombieZombossMechPVZ1RobotProps *pZVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  Zombie *this;
  int iVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = *(int *)(in_x0 + 0x994);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  pZVar2 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>(in_x0);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::vector(avStack_20,(vector *)(pZVar2 + 0x2d0));
  if (in_x0[0x99c] == (Zombie)0x0) {
    clearOverrideLoopActionPool((ZombieZombossMech_PVZ1_Robot *)in_x0);
  }
  if (in_x0[0x990] == (Zombie)0x0) {
    this = in_x0 + 0x960;
    lVar3 = FUN_04f11fc0(*(undefined8 *)(in_x0 + 0x960),*(undefined8 *)(in_x0 + 0x968));
    pZVar6 = this;
    if (lVar3 + -1 == (long)iVar5) goto LAB_04f21440;
  }
  else {
    this = in_x0 + 0x978;
    lVar3 = FUN_04f11fc0(*(undefined8 *)(in_x0 + 0x978),*(undefined8 *)(in_x0 + 0x980));
    pZVar6 = this;
    if (lVar3 + -1 == (long)iVar5) {
LAB_04f21440:
      *(int *)(in_x0 + 0x998) = *(int *)(in_x0 + 0x998) + 1;
      onCompletedSkillCycle((ZombieZombossMech_PVZ1_Robot *)in_x0);
      if (in_x0[0x990] == (Zombie)0x0) {
        iVar5 = -1;
        pZVar6 = in_x0 + 0x960;
      }
      else {
        iVar5 = -1;
        pZVar6 = in_x0 + 0x978;
      }
    }
  }
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::operator=((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
               *)this,(vector *)pZVar6);
  cVar1 = std::
          vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
          ::empty((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
                   *)this);
  if (cVar1 == '\0') {
    uVar7 = *(undefined8 *)this;
    lVar3 = FUN_04f11fc0(uVar7,*(undefined8 *)(this + 8));
    if (lVar3 != 0) {
      *(int *)(in_x0 + 0x994) = iVar5 + 1;
      pRVar4 = (RtWeakPtrBase *)FUN_04f11fe8(uVar7,(long)(iVar5 + 1));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)in_x8,pRVar4);
      goto LAB_04f213e0;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
LAB_04f213e0:
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector(avStack_20);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionDefinition>,std::allocator<Sexy::RtWeakPtr<ZombieActionDefinition>>>
             *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::performRandomZombossAction() */

void __thiscall
ZombieZombossMech_PVZ1_Robot::performRandomZombossAction(ZombieZombossMech_PVZ1_Robot *this)

{
  char cVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = ZombieZombossMech::tryRepeatAction((ZombieZombossMech *)this);
  if (cVar1 == '\0') {
    while( true ) {
      pickNextLoopAction();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      ZombieZombossMech::setLastAction((ZombieZombossMech *)this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      ZombieZombossMech::getLastAction();
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar1 == '\0') break;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar2 = ZombieZombossMech::tryPerformZombossAction((ZombieZombossMech *)this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 != '\0') {
        ZombieZombossMech::pickRandomRepeatCountForLastAction((ZombieZombossMech *)this);
        break;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ZombieZombossMech_PVZ1_Robot::onPlaceOnBoard() */

void __thiscall ZombieZombossMech_PVZ1_Robot::onPlaceOnBoard(ZombieZombossMech_PVZ1_Robot *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage((ZombieZombossMech *)this);
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::DropAllLoot() */

void __thiscall ZombieZombossMech_PVZ1_Robot::DropAllLoot(ZombieZombossMech_PVZ1_Robot *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  FestivalManager *pFVar7;
  undefined8 uVar8;
  WorldDataManager *this_00;
  string *psVar9;
  ActivityConfig *this_01;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  bool local_69;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  float local_50 [4];
  DVec3 aDStack_40 [4];
  undefined4 local_3c;
  DVec3 aDStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar16 = (float)FUN_04f11ebc(*(undefined4 *)(this + 0x280));
  if ((((fVar16 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     ((lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar6 == 0 ||
      (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar6 + 0x112) == '\0')))) {
    pFVar7 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = FestivalManager::IsFestivalLevel(pFVar7,uVar8,2);
    if (cVar1 == '\0') {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      psVar9 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      lVar6 = WorldDataManager::FindWorldDataByLevelName(this_00,psVar9);
      if (lVar6 != 0) {
        Zombie::DropAllLoot((Zombie *)this);
      }
    }
    else {
      std::string::string(asStack_68,"spring_mode");
      nop();
      std::string::string(asStack_60,"all");
      nop();
      Board::TryDevilDirectDropItemName(*(string **)(gLawnApp + 0x9f0),asStack_68);
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 != 0) {
        lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar2 = FUN_04f11f88(*(undefined4 *)(lVar6 + 0xc));
        uVar8 = LawnApp::GetActivityConfig();
        ActivityConfig::GetCurrentPieceDropPercentArray
                  ((vector<float,std::allocator<float>> *)&local_20,uVar8,asStack_58,uVar2);
        cVar1 = std::vector<float,std::allocator<float>>::empty
                          ((vector<float,std::allocator<float>> *)&local_20);
        if (cVar1 != '\0') {
LAB_04f24dbc:
          std::vector<float,std::allocator<float>>::~vector
                    ((vector<float,std::allocator<float>> *)&local_20);
          std::string::~string(asStack_58);
          std::string::~string(asStack_60);
          std::string::~string(asStack_68);
          goto LAB_04f24960;
        }
        uVar15 = 0;
        this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar3 = ActivityConfig::GetCurrentPieceDropActivityCombat(this_01,asStack_58);
        uVar10 = time((time_t *)0x0);
        Sexy::SRand(uVar10);
        uVar11 = FUN_04f11fa0(local_20,local_18);
        cVar1 = FUN_04f11f84(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa01));
        uVar10 = uVar11 << 1;
        if (cVar1 == '\0') {
          uVar10 = uVar11;
        }
        for (; uVar15 < uVar11; uVar15 = uVar15 + 1) {
          iVar4 = (**(code **)(*(long *)this + 0x2f8))(this);
          lVar6 = *(long *)(gLawnApp + 0x9f0);
          iVar5 = FUN_04f11f80(*(undefined4 *)(lVar6 + 0xc2c));
          uVar8 = local_20;
          if (uVar10 == (long)iVar5) goto LAB_04f24dbc;
          pfVar12 = (float *)FUN_04f11fb8(local_20,uVar15);
          if ((float)iVar4 * (float)iVar3 * 4.656613e-10 <= *pfVar12) {
            FUN_04f11f70(lVar6 + 0xc2c);
            psVar9 = (string *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9);
            if ((p_Var13 !=
                 (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0) &&
               (puVar14 = (undefined8 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var13), 490.0 <= *(float *)((long)puVar14 + 4))) {
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar5 = FUN_04f13680(200);
              iVar4 = 2;
              if (cVar1 != '\0') {
                iVar4 = 1;
              }
              fVar16 = local_50[0] - (float)iVar5;
              local_50[0] = fVar16;
              iVar5 = FUN_04f13680(0x96);
              local_50[0] = (float)(iVar5 * iVar4 * (int)uVar15) + fVar16;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_04f11f8c(*(undefined4 *)(p_Var13 + 0x188));
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
              }
            }
            uVar8 = local_20;
            if ((cVar1 != '\0') &&
               (p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9)
               , uVar8 = local_20,
               p_Var13 !=
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0)) {
              FUN_04f11f70(*(long *)(gLawnApp + 0x9f0) + 0xc2c);
              puVar14 = (undefined8 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var13);
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar4 = FUN_04f13680(200);
              fVar16 = local_50[0] - (float)iVar4;
              local_50[0] = fVar16;
              iVar4 = FUN_04f13680(0x96);
              local_50[0] = fVar16 + (float)iVar4;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_04f11f8c(*(undefined4 *)(p_Var13 + 0x188));
              uVar8 = local_20;
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
                uVar8 = local_20;
              }
            }
          }
          uVar11 = FUN_04f11fa0(uVar8,local_18);
        }
        std::vector<float,std::allocator<float>>::~vector
                  ((vector<float,std::allocator<float>> *)&local_20);
      }
      std::string::~string(asStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
    }
    Zombie::SetHasDroppedLoot((Zombie *)this,true);
  }
LAB_04f24960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_PVZ1_Robot::onZombieInitialize() */

void __thiscall ZombieZombossMech_PVZ1_Robot::onZombieInitialize(ZombieZombossMech_PVZ1_Robot *this)

{
  ZombieZombossMech::onZombieInitialize((ZombieZombossMech *)this);
  Zombie::SetZombieScale((Zombie *)this,0.7);
  Zombie::SetIsTargetable((Zombie *)this,false);
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::onApplyCondition(ZombieConditions) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onApplyCondition(ZombieZombossMech_PVZ1_Robot *this,uint param_2)

{
  if (param_2 == 1) {
    return;
  }
  if ((param_2 & 0xffffffdf) != 0x40) {
    ZombieZombossMech::onApplyCondition((ZombieZombossMech *)this,param_2);
    return;
  }
  Zombie::EndCondition((Zombie *)this,0x41);
  Zombie::EndCondition((Zombie *)this,0x60);
  ZombieZombossMech::onApplyCondition((ZombieZombossMech *)this,param_2);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::onStartedNewStage(int) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onStartedNewStage(ZombieZombossMech_PVZ1_Robot *this,int param_1)

{
  ZombieZombossMech::onStartedNewStage((ZombieZombossMech *)this,param_1);
  initLoopActionPool(this);
  *(undefined4 *)(this + 0x998) = 0;
  this[0x99c] = (ZombieZombossMech_PVZ1_Robot)0x0;
  *(undefined4 *)(this + 0x994) = 0xffffffff;
  return;
}


/* ZombieZombossMech_PVZ1_Robot::onUpdate() */

void __thiscall ZombieZombossMech_PVZ1_Robot::onUpdate(ZombieZombossMech_PVZ1_Robot *this)

{
  RtObject *this_00;
  ZombossRobotSpitOutBallActionHandler *pZVar1;
  
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  this_00 = (RtObject *)ZombieWithActions::getCurrentAction((ZombieWithActions *)this);
  if ((this_00 != (RtObject *)0x0) &&
     (pZVar1 = Sexy::RtObject::Cast<ZombossRobotSpitOutBallActionHandler>(this_00),
     pZVar1 != (ZombossRobotSpitOutBallActionHandler *)0x0)) {
    return;
  }
  FUN_04f11ec4(this + 0x9a0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::onDraw(Sexy::Graphics*) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onDraw(ZombieZombossMech_PVZ1_Robot *this,Graphics *param_1)

{
  CreatureConditionTracker *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(this + 0x9a0);
  fVar2 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  fVar3 = (float)Zombie::GetZombieScale((Zombie *)this);
  this_00 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_00);
  fVar1 = (float)FUN_04f13670(fVar1 * fVar5 * fVar2 * fVar3 * fVar4);
  Sexy::Graphics::Translate(param_1,0,(int)fVar1);
  Zombie::onDraw((Graphics *)this);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_PVZ1_Robot::TakeDamage(DamageInfo const&) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::TakeDamage(ZombieZombossMech_PVZ1_Robot *this,DamageInfo *param_1)

{
  ZombieZombossMechPVZ1RobotProps *pZVar1;
  float *pfVar2;
  float local_6c;
  DamageInfo aDStack_68 [8];
  float local_60 [22];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  pZVar1 = Zombie::GetProps<ZombieZombossMechPVZ1RobotProps>((Zombie *)this);
  local_6c = *(float *)(pZVar1 + 0x2b4);
  pfVar2 = eastl::min_alt<float>(local_60,&local_6c);
  local_60[0] = *pfVar2;
  Zombie::TakeDamage((Zombie *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_PVZ1_Robot::onExitState_ZombossIntro(ZombieState) */

void ZombieZombossMech_PVZ1_Robot::onExitState_ZombossIntro(Zombie *param_1)

{
  ZombieCarnieDoveArtifact::onExitState_Returning();
  Zombie::SetIgnoresAllDamage(param_1,true);
  return;
}


/* ZombieZombossMech_PVZ1_Robot::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void __thiscall
ZombieZombossMech_PVZ1_Robot::onPopAnimCommand
          (ZombieZombossMech_PVZ1_Robot *this,string *param_1,float param_2,string *param_3,
          string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_3,"shake_board");
  if (bVar1) {
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),0,-10,0.15);
  }
  ZombieZombossMech::onPopAnimCommand((ZombieZombossMech *)this,param_1,param_2,param_3,param_4);
  return;
}

