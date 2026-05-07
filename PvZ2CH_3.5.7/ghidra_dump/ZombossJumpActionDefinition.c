// Class: ZombossJumpActionDefinition


/* ZombossJumpActionDefinition::~ZombossJumpActionDefinition() */

void __thiscall
ZombossJumpActionDefinition::~ZombossJumpActionDefinition(ZombossJumpActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5f50;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossJumpActionDefinition::~ZombossJumpActionDefinition() */

void __thiscall
ZombossJumpActionDefinition::~ZombossJumpActionDefinition(ZombossJumpActionDefinition *this)

{
  ~ZombossJumpActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombossJumpActionDefinition::ZombossJumpActionDefinition() */

void __thiscall
ZombossJumpActionDefinition::ZombossJumpActionDefinition(ZombossJumpActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_068c5f50;
  *(undefined4 *)(this + 0x38) = 0x43480000;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionDefinition::StaticClassInit() */

void ZombossJumpActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossJumpActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0473666c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossJumpActionDefinition::StaticGetClass() */

long * ZombossJumpActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossJumpActionDefinition::GetClass() const */

long * ZombossJumpActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossJumpActionDefinition::StaticNew() */

ZombossJumpActionDefinition * ZombossJumpActionDefinition::StaticNew(void)

{
  ZombossJumpActionDefinition *this;
  
  this = ::operator_new(0x48);
  ZombossJumpActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0473d950 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossJumpActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossJumpActionDefinition::TryStartAction
          (ZombossJumpActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossJumpActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

