// Class: ZombossRobotSpitOutBallActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::StaticClassInit() */

void ZombossRobotSpitOutBallActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotSpitOutBallActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f18410,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpitOutBallActionHandler::StaticGetClass() */

long * ZombossRobotSpitOutBallActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotSpitOutBallActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpitOutBallActionHandler::GetClass() const */

long * ZombossRobotSpitOutBallActionHandler::GetClass(void)

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
  uVar2 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotSpitOutBallActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotSpitOutBallActionHandler::pickRandomRowToSpit() */

void ZombossRobotSpitOutBallActionHandler::pickRandomRowToSpit(void)

{
  Sexy::Rand(5);
  return;
}


/* ZombossRobotSpitOutBallActionHandler::pickRandomBallType() */

void ZombossRobotSpitOutBallActionHandler::pickRandomBallType(void)

{
  Sexy::Rand(2);
  return;
}


/* ZombossRobotSpitOutBallActionHandler::ZombossRobotSpitOutBallActionHandler() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::ZombossRobotSpitOutBallActionHandler
          (ZombossRobotSpitOutBallActionHandler *this)

{
  undefined4 uVar1;
  
  ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a10930;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* ZombossRobotSpitOutBallActionHandler::StaticNew() */

ZombossRobotSpitOutBallActionHandler * ZombossRobotSpitOutBallActionHandler::StaticNew(void)

{
  ZombossRobotSpitOutBallActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombossRobotSpitOutBallActionHandler(this);
  return this;
}


/* ZombossRobotSpitOutBallActionHandler::~ZombossRobotSpitOutBallActionHandler() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::~ZombossRobotSpitOutBallActionHandler
          (ZombossRobotSpitOutBallActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10930;
  ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
            ((ZombossRobotBaseZombieActionHandler *)this);
  return;
}


/* ZombossRobotSpitOutBallActionHandler::~ZombossRobotSpitOutBallActionHandler() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::~ZombossRobotSpitOutBallActionHandler
          (ZombossRobotSpitOutBallActionHandler *this)

{
  ~ZombossRobotSpitOutBallActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRobotSpitOutBallActionHandler::pushLeftTime() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::pushLeftTime(ZombossRobotSpitOutBallActionHandler *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)PVZ_EOT();
  fVar3 = *(float *)(this + 0x44);
  if (fVar3 < fVar1) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x44) = fVar1;
    *(float *)(this + 0x48) = fVar3 - fVar2;
  }
  return;
}


/* ZombossRobotSpitOutBallActionHandler::popLeftTime() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::popLeftTime(ZombossRobotSpitOutBallActionHandler *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x48) < fVar1) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x48);
    *(float *)(this + 0x48) = fVar1;
    *(float *)(this + 0x44) = fVar2 + fVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::playDownIdleAnim() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::playDownIdleAnim(ZombossRobotSpitOutBallActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  FUN_04f12200(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)pZVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::spawnBall() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::spawnBall(ZombossRobotSpitOutBallActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  RtObject *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if (*(int *)(this + 0x38) == 1) {
    __s = "zomboss_robot_ice_ball";
  }
  else {
    __s = "zomboss_robot_fire_ball";
  }
  std::string::string(asStack_10,__s);
  nop();
  this_00 = (RtObject *)
            Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_10,6,*(int *)(this + 0x3c),1);
  Sexy::RtObject::Cast<GridItemZombossRobotBall>(this_00);
  GridItemZombossRobotBall::initializeHitpoints(*(float *)(pZVar1 + 0x54));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void ZombossRobotSpitOutBallActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  ZombieZombossMech_PVZ1_Robot *pZVar4;
  Zombie *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech_PVZ1_Robot>(pRVar3);
  this = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pRVar3 = (RtObject *)Zombie::GetAnimRig(this);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(pRVar3);
  FUN_04f12130(asStack_10);
  cVar1 = std::operator==(param_4,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_4,"adjust_position_down");
    if (bVar2) {
      FUN_04f11ec4(pZVar4 + 0x9a0,0xfffffefc);
    }
    else {
      bVar2 = std::operator==(param_4,"adjust_position_up");
      if (bVar2) {
        FUN_04f11ec4(pZVar4 + 0x9a0,0);
      }
    }
  }
  else {
    spawnBall((ZombossRobotSpitOutBallActionHandler *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpitOutBallActionHandler::onStartAction() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::onStartAction(ZombossRobotSpitOutBallActionHandler *this)

{
  undefined4 uVar1;
  Zombie *this_00;
  RtObject *this_01;
  
  ZombossRobotBaseZombieActionHandler::onStartAction((ZombossRobotBaseZombieActionHandler *)this);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  uVar1 = pickRandomRowToSpit();
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar1 = pickRandomBallType();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::playGetDownAnim() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::playGetDownAnim(ZombossRobotSpitOutBallActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f12198(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpitAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::playSpitBallAnim() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::playSpitBallAnim(ZombossRobotSpitOutBallActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f11ed0(asStack_70,*(int *)(this + 0x38) != 0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpitAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::playStandUpAnim() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::playStandUpAnim(ZombossRobotSpitOutBallActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  FUN_04f12268(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpitAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::setState(ZombossRobotSpitBallState) */

void __thiscall
ZombossRobotSpitOutBallActionHandler::setState
          (ZombossRobotSpitOutBallActionHandler *this,int param_2)

{
  RtObject *pRVar1;
  ZombieZombossMech_PVZ1_Robot *this_00;
  Zombie *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) != param_2) {
    *(int *)(this + 0x40) = param_2;
    pRVar1 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_00 = Sexy::RtObject::Cast<ZombieZombossMech_PVZ1_Robot>(pRVar1);
    this_01 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pRVar1 = (RtObject *)Zombie::GetAnimRig(this_01);
    pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(pRVar1);
    pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    switch(*(undefined4 *)(this + 0x40)) {
    case 1:
      fVar5 = (float)PVZ_T();
      pcVar4 = *(code **)(*(long *)pZVar2 + 0x268);
      *(float *)(this + 0x44) = fVar5 + *(float *)(pZVar3 + 0x3c);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate(aRStack_50);
      (*pcVar4)(pZVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      break;
    case 2:
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar6;
      playGetDownAnim(this);
      break;
    case 3:
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar5 + *(float *)(pZVar3 + 0x48);
      playDownIdleAnim(this);
      Zombie::SetIsTargetable((Zombie *)this_00,true);
      Zombie::SetIgnoresAllDamage((Zombie *)this_00,false);
      break;
    case 4:
    case 6:
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar6;
      break;
    case 5:
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar6;
      playSpitBallAnim(this);
      break;
    case 7:
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar5 + *(float *)(pZVar3 + 0x4c);
      playDownIdleAnim(this);
      break;
    case 8:
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar6;
      playStandUpAnim(this);
      Zombie::SetIsTargetable((Zombie *)this_00,false);
      Zombie::SetIgnoresAllDamage((Zombie *)this_00,true);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::onUpdateAction() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::onUpdateAction(ZombossRobotSpitOutBallActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech_PVZ1_Robot *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  cVar1 = FUN_04f11f6c(this[0x28]);
  if (cVar1 == '\0') {
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieZombossMech_PVZ1_Robot>(this_00);
    pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    switch(*(undefined4 *)(this + 0x40)) {
    case 3:
      fVar7 = (float)PVZ_T();
      if (*(float *)(this + 0x44) < fVar7) {
        setState(this,4);
      }
      break;
    case 4:
      if (*(int *)(this + 0x3c) < 4) {
        fVar7 = -1.0;
        iVar5 = -1;
      }
      else {
        fVar7 = 1.0;
        iVar5 = 1;
      }
      fVar8 = *(float *)(pZVar3 + 0x50);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_01);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      fVar6 = (float)PVZ_Dt();
      local_18 = CONCAT44(local_18._4_4_ + fVar8 * fVar7 * fVar6,(undefined4)local_18);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_18);
      iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(*(int *)(this + 0x3c));
      if (iVar5 == 1) {
        if (*(float *)((long)puVar4 + 4) <= (float)iVar2) break;
      }
      else if ((iVar5 != -1) || ((float)iVar2 <= *(float *)((long)puVar4 + 4))) break;
      setState(this,5);
      break;
    case 6:
      if (*(int *)(this + 0x3c) < 4) {
        fVar7 = 1.0;
        iVar5 = 1;
      }
      else {
        fVar7 = -1.0;
        iVar5 = -1;
      }
      fVar8 = *(float *)(pZVar3 + 0x50);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_01);
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      fVar6 = (float)PVZ_Dt();
      local_18 = CONCAT44(local_18._4_4_ + fVar8 * fVar7 * fVar6,(undefined4)local_18);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_18);
      iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(3);
      if (iVar5 == 1) {
        if (*(float *)((long)puVar4 + 4) <= (float)iVar2) break;
      }
      else if ((iVar5 != -1) || ((float)iVar2 <= *(float *)((long)puVar4 + 4))) break;
      setState(this,7);
      break;
    case 7:
      fVar7 = (float)PVZ_T();
      if (*(float *)(this + 0x44) < fVar7) {
        setState(this,8);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpitOutBallActionHandler::startNextAction() */

void __thiscall
ZombossRobotSpitOutBallActionHandler::startNextAction(ZombossRobotSpitOutBallActionHandler *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpitOutBallActionHandler::onSpitAnimStoppedCallback(std::string const&) */

void __thiscall
ZombossRobotSpitOutBallActionHandler::onSpitAnimStoppedCallback
          (ZombossRobotSpitOutBallActionHandler *this,string *param_1)

{
  char cVar1;
  Zombie *this_00;
  RtObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  FUN_04f12198(asStack_10);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_04f11ed0(asStack_10,*(int *)(this + 0x38) != 0);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      FUN_04f12268(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0xb0))(this);
      }
    }
    else {
      setState(this,6);
    }
  }
  else {
    setState(this,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

