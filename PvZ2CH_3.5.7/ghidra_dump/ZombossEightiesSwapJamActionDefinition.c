// Class: ZombossEightiesSwapJamActionDefinition


/* ZombossEightiesSwapJamActionDefinition::~ZombossEightiesSwapJamActionDefinition() */

void __thiscall
ZombossEightiesSwapJamActionDefinition::~ZombossEightiesSwapJamActionDefinition
          (ZombossEightiesSwapJamActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068f69d0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossEightiesSwapJamActionDefinition::~ZombossEightiesSwapJamActionDefinition() */

void __thiscall
ZombossEightiesSwapJamActionDefinition::~ZombossEightiesSwapJamActionDefinition
          (ZombossEightiesSwapJamActionDefinition *this)

{
  ~ZombossEightiesSwapJamActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesSwapJamActionDefinition::StaticClassInit() */

void ZombossEightiesSwapJamActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossEightiesSwapJamActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047efa6c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesSwapJamActionDefinition::StaticGetClass() */

long * ZombossEightiesSwapJamActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesSwapJamActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesSwapJamActionDefinition::GetClass() const */

long * ZombossEightiesSwapJamActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossEightiesSwapJamActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesSwapJamActionDefinition::ZombossEightiesSwapJamActionDefinition() */

void __thiscall
ZombossEightiesSwapJamActionDefinition::ZombossEightiesSwapJamActionDefinition
          (ZombossEightiesSwapJamActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068f69d0;
  return;
}


/* ZombossEightiesSwapJamActionDefinition::StaticNew() */

ZombossEightiesSwapJamActionDefinition * ZombossEightiesSwapJamActionDefinition::StaticNew(void)

{
  ZombossEightiesSwapJamActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossEightiesSwapJamActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f2368 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossEightiesSwapJamActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossEightiesSwapJamActionDefinition::TryStartAction
          (ZombossEightiesSwapJamActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossEightiesSwapJamActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

