// Class: ZombossBeachDiveActionHandler


/* ZombossBeachDiveActionHandler::onEmergeAnimDone(std::string const&) */

void ZombossBeachDiveActionHandler::onEmergeAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionHandler::StaticClassInit() */

void ZombossBeachDiveActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossBeachDiveActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04841a58,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossBeachDiveActionHandler::StaticGetClass() */

long * ZombossBeachDiveActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBeachDiveActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBeachDiveActionHandler::GetClass() const */

long * ZombossBeachDiveActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossBeachDiveActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossBeachDiveActionHandler::SetEmergeTarget(Sexy::Point const&, float) */

void __thiscall
ZombossBeachDiveActionHandler::SetEmergeTarget
          (ZombossBeachDiveActionHandler *this,Point *param_1,float param_2)

{
  *(undefined8 *)(this + 0x24) = *(undefined8 *)param_1;
  *(float *)(this + 0x2c) = param_2;
  return;
}


/* ZombossBeachDiveActionHandler::ZombossBeachDiveActionHandler() */

void __thiscall
ZombossBeachDiveActionHandler::ZombossBeachDiveActionHandler(ZombossBeachDiveActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06909270;
  Sexy::Point::Point((Point *)(this + 0x24));
  *(undefined4 *)(this + 0x2c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* ZombossBeachDiveActionHandler::StaticNew() */

ZombossBeachDiveActionHandler * ZombossBeachDiveActionHandler::StaticNew(void)

{
  ZombossBeachDiveActionHandler *this;
  
  this = ::operator_new(0x38);
  ZombossBeachDiveActionHandler(this);
  return this;
}


/* ZombossBeachDiveActionHandler::~ZombossBeachDiveActionHandler() */

void __thiscall
ZombossBeachDiveActionHandler::~ZombossBeachDiveActionHandler(ZombossBeachDiveActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06909270;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossBeachDiveActionHandler::~ZombossBeachDiveActionHandler() */

void __thiscall
ZombossBeachDiveActionHandler::~ZombossBeachDiveActionHandler(ZombossBeachDiveActionHandler *this)

{
  ~ZombossBeachDiveActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossBeachDiveActionHandler::onSubmergeAnimDone(std::string const&) */

void ZombossBeachDiveActionHandler::onSubmergeAnimDone(string *param_1)

{
  ZombieZombossMech *this;
  float fVar1;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  nop();
  fVar1 = (float)ZombieZombossMech::GetZomboss_T(this);
  *(float *)(param_1 + 0x30) = fVar1 + *(float *)(param_1 + 0x2c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionHandler::onStartAction() */

void __thiscall ZombossBeachDiveActionHandler::onStartAction(ZombossBeachDiveActionHandler *this)

{
  long lVar1;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined4 uVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSubmergeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Beach::PlaySubmerge
            ((ZombieAnimRig_ZombossMech_Beach *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  uVar3 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBeachDiveActionHandler::onUpdateAction() */

void __thiscall ZombossBeachDiveActionHandler::onUpdateAction(ZombossBeachDiveActionHandler *this)

{
  char cVar1;
  int iVar2;
  ZombieZombossMech_Beach *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  float local_60;
  float local_5c;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  cVar1 = ZombieZombossMech_Beach::IsSubmerged(this_00);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)this_00 + 0xa90))(this_00);
    if ((cVar1 != '\0') ||
       (fVar4 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this_00),
       fVar4 < *(float *)(this + 0x30))) goto LAB_04843154;
  }
  else {
    fVar4 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this_00);
    if (fVar4 < *(float *)(this + 0x30)) goto LAB_04843154;
  }
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = uVar5;
  DVec3::DVec3((DVec3 *)&local_60);
  iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x24));
  local_60 = (float)iVar2;
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x28));
  local_5c = (float)iVar2;
  (**(code **)(*(long *)this_00 + 0x78))(this_00,(DVec3 *)&local_60);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onEmergeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  ZombieAnimRig_ZombossMech_Beach::PlayEmerge((ZombieAnimRig_ZombossMech_Beach *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  ZombieZombossMech::StompEntitiesUnderfoot((ZombieZombossMech *)this_00);
LAB_04843154:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

