// Class: ZombieEliteElectricProjectileActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteElectricProjectileActionDefinition::StaticClassInit() */

void ZombieEliteElectricProjectileActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteElectricProjectileActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef9198,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteElectricProjectileActionDefinition::StaticGetClass() */

long * ZombieEliteElectricProjectileActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieElectricProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteElectricProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteElectricProjectileActionDefinition::GetClass() const */

long * ZombieEliteElectricProjectileActionDefinition::GetClass(void)

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
  uVar2 = ZombieElectricProjectileActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteElectricProjectileActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteElectricProjectileActionDefinition::ZombieEliteElectricProjectileActionDefinition() */

void __thiscall
ZombieEliteElectricProjectileActionDefinition::ZombieEliteElectricProjectileActionDefinition
          (ZombieEliteElectricProjectileActionDefinition *this)

{
  ZombieElectricProjectileActionDefinition::ZombieElectricProjectileActionDefinition
            ((ZombieElectricProjectileActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a088c0;
  return;
}


/* ZombieEliteElectricProjectileActionDefinition::StaticNew() */

ZombieEliteElectricProjectileActionDefinition *
ZombieEliteElectricProjectileActionDefinition::StaticNew(void)

{
  ZombieEliteElectricProjectileActionDefinition *this;
  
  this = ::operator_new(0x88);
  ZombieEliteElectricProjectileActionDefinition(this);
  return this;
}


/* ZombieEliteElectricProjectileActionDefinition::~ZombieEliteElectricProjectileActionDefinition()
    */

void __thiscall
ZombieEliteElectricProjectileActionDefinition::~ZombieEliteElectricProjectileActionDefinition
          (ZombieEliteElectricProjectileActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a088c0;
  ZombieElectricProjectileActionDefinition::~ZombieElectricProjectileActionDefinition
            ((ZombieElectricProjectileActionDefinition *)this);
  return;
}


/* ZombieEliteElectricProjectileActionDefinition::~ZombieEliteElectricProjectileActionDefinition()
    */

void __thiscall
ZombieEliteElectricProjectileActionDefinition::~ZombieEliteElectricProjectileActionDefinition
          (ZombieEliteElectricProjectileActionDefinition *this)

{
  ~ZombieEliteElectricProjectileActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04efa174 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieEliteElectricProjectileActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieEliteElectricProjectileActionDefinition::TryStartAction
          (ZombieEliteElectricProjectileActionDefinition *this,RtWeakPtrBase *param_2,
          undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieEliteElectricProjectileActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

