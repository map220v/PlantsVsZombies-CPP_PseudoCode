// Class: ZombiePlayAnimationActionDefinition


/* ZombiePlayAnimationActionDefinition::~ZombiePlayAnimationActionDefinition() */

void __thiscall
ZombiePlayAnimationActionDefinition::~ZombiePlayAnimationActionDefinition
          (ZombiePlayAnimationActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0be90;
  std::string::~string((string *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombiePlayAnimationActionDefinition::~ZombiePlayAnimationActionDefinition() */

void __thiscall
ZombiePlayAnimationActionDefinition::~ZombiePlayAnimationActionDefinition
          (ZombiePlayAnimationActionDefinition *this)

{
  ~ZombiePlayAnimationActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePlayAnimationActionDefinition::StaticClassInit() */

void ZombiePlayAnimationActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePlayAnimationActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f01ad8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePlayAnimationActionDefinition::StaticGetClass() */

long * ZombiePlayAnimationActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePlayAnimationActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePlayAnimationActionDefinition::GetClass() const */

long * ZombiePlayAnimationActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePlayAnimationActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePlayAnimationActionDefinition::ZombiePlayAnimationActionDefinition() */

void __thiscall
ZombiePlayAnimationActionDefinition::ZombiePlayAnimationActionDefinition
          (ZombiePlayAnimationActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a0be90;
  Set8BytesTo0(this + 0x38);
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* ZombiePlayAnimationActionDefinition::StaticNew() */

ZombiePlayAnimationActionDefinition * ZombiePlayAnimationActionDefinition::StaticNew(void)

{
  ZombiePlayAnimationActionDefinition *this;
  
  this = ::operator_new(0x48);
  ZombiePlayAnimationActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f03ff8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombiePlayAnimationActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombiePlayAnimationActionDefinition::TryStartAction
          (ZombiePlayAnimationActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombiePlayAnimationActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

