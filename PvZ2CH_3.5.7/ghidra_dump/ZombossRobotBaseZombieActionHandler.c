// Class: ZombossRobotBaseZombieActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotBaseZombieActionHandler::StaticClassInit() */

void ZombossRobotBaseZombieActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotBaseZombieActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f16f94,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotBaseZombieActionHandler::StaticGetClass() */

long * ZombossRobotBaseZombieActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotBaseZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotBaseZombieActionHandler::GetClass() const */

long * ZombossRobotBaseZombieActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotBaseZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler() */

void __thiscall
ZombossRobotBaseZombieActionHandler::ZombossRobotBaseZombieActionHandler
          (ZombossRobotBaseZombieActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a102d0;
  uVar1 = PVZ_EOT();
  this[0x28] = (ZombossRobotBaseZombieActionHandler)0x0;
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* ZombossRobotBaseZombieActionHandler::StaticNew() */

ZombossRobotBaseZombieActionHandler * ZombossRobotBaseZombieActionHandler::StaticNew(void)

{
  ZombossRobotBaseZombieActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombossRobotBaseZombieActionHandler(this);
  return this;
}


/* ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler() */

void __thiscall
ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
          (ZombossRobotBaseZombieActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a102d0;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler() */

void __thiscall
ZombossRobotBaseZombieActionHandler::~ZombossRobotBaseZombieActionHandler
          (ZombossRobotBaseZombieActionHandler *this)

{
  ~ZombossRobotBaseZombieActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRobotBaseZombieActionHandler::onIdleContinued(std::string const&, std::string const&, int)
    */

void ZombossRobotBaseZombieActionHandler::onIdleContinued
               (string *param_1,string *param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(param_1 + 0x24) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    (**(code **)(*(long *)param_1 + 0xa8))(param_1);
  }
  if (param_1[0x28] == (string)0x0) {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotBaseZombieActionHandler::onStartAction() */

void __thiscall
ZombossRobotBaseZombieActionHandler::onStartAction(ZombossRobotBaseZombieActionHandler *this)

{
  bool bVar1;
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar2 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x24) = fVar5 + *(float *)(pZVar3 + 0x38);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotBaseZombieActionHandler::endThisAction() */

void __thiscall
ZombossRobotBaseZombieActionHandler::endThisAction(ZombossRobotBaseZombieActionHandler *this)

{
  Zombie *this_00;
  RtObject *this_01;
  ZombieAnimRig_ZombossMech_PVZ1_Robot *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x28] = (ZombossRobotBaseZombieActionHandler)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = (RtObject *)Zombie::GetAnimRig(this_00);
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_ZombossMech_PVZ1_Robot>(this_01);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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

