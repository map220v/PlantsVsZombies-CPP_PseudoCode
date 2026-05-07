// Class: ZombieInstantTargetAttackActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInstantTargetAttackActionHandler::StaticClassInit() */

void ZombieInstantTargetAttackActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieInstantTargetAttackActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0462e468,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieInstantTargetAttackActionHandler::StaticGetClass() */

long * ZombieInstantTargetAttackActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieProjectileLaunchActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInstantTargetAttackActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInstantTargetAttackActionHandler::GetClass() const */

long * ZombieInstantTargetAttackActionHandler::GetClass(void)

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
  uVar2 = ZombieProjectileLaunchActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieInstantTargetAttackActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieInstantTargetAttackActionHandler::ZombieInstantTargetAttackActionHandler() */

void __thiscall
ZombieInstantTargetAttackActionHandler::ZombieInstantTargetAttackActionHandler
          (ZombieInstantTargetAttackActionHandler *this)

{
  ZombieProjectileLaunchActionHandler::ZombieProjectileLaunchActionHandler
            ((ZombieProjectileLaunchActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_0687f2d0;
  DVec3::DVec3((DVec3 *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ZombieInstantTargetAttackActionHandler::StaticNew() */

ZombieInstantTargetAttackActionHandler * ZombieInstantTargetAttackActionHandler::StaticNew(void)

{
  ZombieInstantTargetAttackActionHandler *this;
  
  this = ::operator_new(0x50);
  ZombieInstantTargetAttackActionHandler(this);
  return this;
}


/* ZombieInstantTargetAttackActionHandler::~ZombieInstantTargetAttackActionHandler() */

void __thiscall
ZombieInstantTargetAttackActionHandler::~ZombieInstantTargetAttackActionHandler
          (ZombieInstantTargetAttackActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f2d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  ZombieProjectileLaunchActionHandler::~ZombieProjectileLaunchActionHandler
            ((ZombieProjectileLaunchActionHandler *)this);
  return;
}


/* ZombieInstantTargetAttackActionHandler::~ZombieInstantTargetAttackActionHandler() */

void __thiscall
ZombieInstantTargetAttackActionHandler::~ZombieInstantTargetAttackActionHandler
          (ZombieInstantTargetAttackActionHandler *this)

{
  ~ZombieInstantTargetAttackActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieInstantTargetAttackActionHandler::launchProjectile() */

void __thiscall
ZombieInstantTargetAttackActionHandler::launchProjectile
          (ZombieInstantTargetAttackActionHandler *this)

{
  ZombossHydraSprayActionDefinition *this_00;
  ZombieWithActions *pZVar1;
  RtObject *this_01;
  Zombie *pZVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if ((this_00 != (ZombossHydraSprayActionDefinition *)0x0) && (*(int *)(this_00 + 0x88) == 1)) {
    pZVar1 = (ZombieWithActions *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = (RtObject *)
              ZombieProjectileLaunchActionDefinition::findTarget
                        ((ZombieProjectileLaunchActionDefinition *)this_00,pZVar1);
    if ((this_01 != (RtObject *)0x0) &&
       (pZVar2 = Sexy::RtObject::Cast<Zombie>(this_01), pZVar2 != (Zombie *)0x0)) {
      std::string::string(asStack_10,"HelmetDefault");
      Zombie::AddArmor(pZVar2,asStack_10);
      std::string::~string(asStack_10);
      nop();
      Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar2,0x1d,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

