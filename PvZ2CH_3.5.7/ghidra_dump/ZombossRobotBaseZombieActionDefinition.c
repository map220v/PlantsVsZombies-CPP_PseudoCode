// Class: ZombossRobotBaseZombieActionDefinition


/* ZombossRobotBaseZombieActionDefinition::~ZombossRobotBaseZombieActionDefinition() */

void __thiscall
ZombossRobotBaseZombieActionDefinition::~ZombossRobotBaseZombieActionDefinition
          (ZombossRobotBaseZombieActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a10230;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossRobotBaseZombieActionDefinition::~ZombossRobotBaseZombieActionDefinition() */

void __thiscall
ZombossRobotBaseZombieActionDefinition::~ZombossRobotBaseZombieActionDefinition
          (ZombossRobotBaseZombieActionDefinition *this)

{
  ~ZombossRobotBaseZombieActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotBaseZombieActionDefinition::StaticClassInit() */

void ZombossRobotBaseZombieActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRobotBaseZombieActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f13f34,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotBaseZombieActionDefinition::StaticGetClass() */

long * ZombossRobotBaseZombieActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotBaseZombieActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotBaseZombieActionDefinition::GetClass() const */

long * ZombossRobotBaseZombieActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRobotBaseZombieActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRobotBaseZombieActionDefinition::ZombossRobotBaseZombieActionDefinition() */

void __thiscall
ZombossRobotBaseZombieActionDefinition::ZombossRobotBaseZombieActionDefinition
          (ZombossRobotBaseZombieActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a10230;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* ZombossRobotBaseZombieActionDefinition::StaticNew() */

ZombossRobotBaseZombieActionDefinition * ZombossRobotBaseZombieActionDefinition::StaticNew(void)

{
  ZombossRobotBaseZombieActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossRobotBaseZombieActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f20520 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossRobotBaseZombieActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossRobotBaseZombieActionDefinition::TryStartAction
          (ZombossRobotBaseZombieActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossRobotBaseZombieActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

