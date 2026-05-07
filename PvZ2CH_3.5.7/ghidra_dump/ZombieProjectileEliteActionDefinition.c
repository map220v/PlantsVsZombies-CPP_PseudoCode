// Class: ZombieProjectileEliteActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieProjectileEliteActionDefinition::StaticClassInit() */

void ZombieProjectileEliteActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieProjectileEliteActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_046322d0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieProjectileEliteActionDefinition::ZombieProjectileEliteActionDefinition() */

void __thiscall
ZombieProjectileEliteActionDefinition::ZombieProjectileEliteActionDefinition
          (ZombieProjectileEliteActionDefinition *this)

{
  ZombieProjectileActionDefinition::ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_0687ef50;
  return;
}


/* ZombieProjectileEliteActionDefinition::StaticNew() */

ZombieProjectileEliteActionDefinition * ZombieProjectileEliteActionDefinition::StaticNew(void)

{
  ZombieProjectileEliteActionDefinition *this;
  
  this = ::operator_new(0x78);
  ZombieProjectileEliteActionDefinition(this);
  return this;
}


/* ZombieProjectileEliteActionDefinition::~ZombieProjectileEliteActionDefinition() */

void __thiscall
ZombieProjectileEliteActionDefinition::~ZombieProjectileEliteActionDefinition
          (ZombieProjectileEliteActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687ef50;
  ZombieProjectileActionDefinition::~ZombieProjectileActionDefinition
            ((ZombieProjectileActionDefinition *)this);
  return;
}


/* ZombieProjectileEliteActionDefinition::~ZombieProjectileEliteActionDefinition() */

void __thiscall
ZombieProjectileEliteActionDefinition::~ZombieProjectileEliteActionDefinition
          (ZombieProjectileEliteActionDefinition *this)

{
  ~ZombieProjectileEliteActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04630ff8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieProjectileEliteActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieProjectileEliteActionDefinition::TryStartAction
          (ZombieProjectileEliteActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieProjectileEliteActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZombieProjectileEliteActionDefinition::StaticGetClass() */

long * ZombieProjectileEliteActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileEliteActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieProjectileEliteActionDefinition::GetClass() const */

long * ZombieProjectileEliteActionDefinition::GetClass(void)

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
  uVar2 = ZombieProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieProjectileEliteActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

