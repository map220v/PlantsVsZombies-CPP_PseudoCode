// Class: ZombieTimedActionDefinition


/* ZombieTimedActionDefinition::~ZombieTimedActionDefinition() */

void __thiscall
ZombieTimedActionDefinition::~ZombieTimedActionDefinition(ZombieTimedActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0bbd0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieTimedActionDefinition::~ZombieTimedActionDefinition() */

void __thiscall
ZombieTimedActionDefinition::~ZombieTimedActionDefinition(ZombieTimedActionDefinition *this)

{
  ~ZombieTimedActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTimedActionDefinition::StaticClassInit() */

void ZombieTimedActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTimedActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f01190,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTimedActionDefinition::StaticGetClass() */

long * ZombieTimedActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTimedActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTimedActionDefinition::GetClass() const */

long * ZombieTimedActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTimedActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTimedActionDefinition::ZombieTimedActionDefinition() */

void __thiscall
ZombieTimedActionDefinition::ZombieTimedActionDefinition(ZombieTimedActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a0bbd0;
  return;
}


/* ZombieTimedActionDefinition::StaticNew() */

ZombieTimedActionDefinition * ZombieTimedActionDefinition::StaticNew(void)

{
  ZombieTimedActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombieTimedActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f03da0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieTimedActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombieTimedActionDefinition::TryStartAction
          (ZombieTimedActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieTimedActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

