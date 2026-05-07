// Class: ZombieMirrorQueenIdleActionDefinition


/* ZombieMirrorQueenIdleActionDefinition::~ZombieMirrorQueenIdleActionDefinition() */

void __thiscall
ZombieMirrorQueenIdleActionDefinition::~ZombieMirrorQueenIdleActionDefinition
          (ZombieMirrorQueenIdleActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0ef10;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieMirrorQueenIdleActionDefinition::~ZombieMirrorQueenIdleActionDefinition() */

void __thiscall
ZombieMirrorQueenIdleActionDefinition::~ZombieMirrorQueenIdleActionDefinition
          (ZombieMirrorQueenIdleActionDefinition *this)

{
  ~ZombieMirrorQueenIdleActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenIdleActionDefinition::StaticClassInit() */

void ZombieMirrorQueenIdleActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenIdleActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0829c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenIdleActionDefinition::StaticGetClass() */

long * ZombieMirrorQueenIdleActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenIdleActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenIdleActionDefinition::GetClass() const */

long * ZombieMirrorQueenIdleActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenIdleActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenIdleActionDefinition::ZombieMirrorQueenIdleActionDefinition() */

void __thiscall
ZombieMirrorQueenIdleActionDefinition::ZombieMirrorQueenIdleActionDefinition
          (ZombieMirrorQueenIdleActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_06a0ef10;
  return;
}


/* ZombieMirrorQueenIdleActionDefinition::StaticNew() */

ZombieMirrorQueenIdleActionDefinition * ZombieMirrorQueenIdleActionDefinition::StaticNew(void)

{
  ZombieMirrorQueenIdleActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombieMirrorQueenIdleActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f106f0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieMirrorQueenIdleActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieMirrorQueenIdleActionDefinition::TryStartAction
          (ZombieMirrorQueenIdleActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieMirrorQueenIdleActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

