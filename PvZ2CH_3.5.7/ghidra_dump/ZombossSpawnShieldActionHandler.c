// Class: ZombossSpawnShieldActionHandler


/* ZombossSpawnShieldActionHandler::onSpawnShieldAnimationEnd(std::string const&) */

void ZombossSpawnShieldActionHandler::onSpawnShieldAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnShieldActionHandler::StaticClassInit() */

void ZombossSpawnShieldActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnShieldActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0476de0c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnShieldActionHandler::StaticGetClass() */

long * ZombossSpawnShieldActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSpawnShieldActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnShieldActionHandler::GetClass() const */

long * ZombossSpawnShieldActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSpawnShieldActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnShieldActionHandler::ZombossSpawnShieldActionHandler() */

void __thiscall
ZombossSpawnShieldActionHandler::ZombossSpawnShieldActionHandler
          (ZombossSpawnShieldActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068d4480;
  return;
}


/* ZombossSpawnShieldActionHandler::StaticNew() */

ZombossSpawnShieldActionHandler * ZombossSpawnShieldActionHandler::StaticNew(void)

{
  ZombossSpawnShieldActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombossSpawnShieldActionHandler(this);
  return this;
}


/* ZombossSpawnShieldActionHandler::~ZombossSpawnShieldActionHandler() */

void __thiscall
ZombossSpawnShieldActionHandler::~ZombossSpawnShieldActionHandler
          (ZombossSpawnShieldActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4480;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSpawnShieldActionHandler::~ZombossSpawnShieldActionHandler() */

void __thiscall
ZombossSpawnShieldActionHandler::~ZombossSpawnShieldActionHandler
          (ZombossSpawnShieldActionHandler *this)

{
  ~ZombossSpawnShieldActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombossSpawnShieldActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombossSpawnShieldActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  EliminateModule *this;
  
  bVar1 = std::operator==(param_4,"submerged");
  if ((((bVar1) && (*(long *)(gLawnApp + 0x9f0) != 0)) &&
      (this = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
      this != (EliminateModule *)0x0)) &&
     (cVar2 = EliminateModule::CanSpawnShield(this), cVar2 != '\0')) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnShieldActionHandler::onStartAction() */

void __thiscall
ZombossSpawnShieldActionHandler::onStartAction(ZombossSpawnShieldActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSpawnShieldAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_IceAge::PlayFreezeRow
            ((ZombieAnimRig_ZombossMech_IceAge *)pZVar1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

