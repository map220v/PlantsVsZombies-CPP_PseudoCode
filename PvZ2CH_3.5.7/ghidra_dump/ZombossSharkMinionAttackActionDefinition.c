// Class: ZombossSharkMinionAttackActionDefinition


/* ZombossSharkMinionAttackActionDefinition::~ZombossSharkMinionAttackActionDefinition() */

void __thiscall
ZombossSharkMinionAttackActionDefinition::~ZombossSharkMinionAttackActionDefinition
          (ZombossSharkMinionAttackActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06909490;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSharkMinionAttackActionDefinition::~ZombossSharkMinionAttackActionDefinition() */

void __thiscall
ZombossSharkMinionAttackActionDefinition::~ZombossSharkMinionAttackActionDefinition
          (ZombossSharkMinionAttackActionDefinition *this)

{
  ~ZombossSharkMinionAttackActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSharkMinionAttackActionDefinition::StaticClassInit() */

void ZombossSharkMinionAttackActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSharkMinionAttackActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04840350,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSharkMinionAttackActionDefinition::StaticGetClass() */

long * ZombossSharkMinionAttackActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSharkMinionAttackActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSharkMinionAttackActionDefinition::GetClass() const */

long * ZombossSharkMinionAttackActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSharkMinionAttackActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSharkMinionAttackActionDefinition::ZombossSharkMinionAttackActionDefinition() */

void __thiscall
ZombossSharkMinionAttackActionDefinition::ZombossSharkMinionAttackActionDefinition
          (ZombossSharkMinionAttackActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR_GetClass_06909490;
  return;
}


/* ZombossSharkMinionAttackActionDefinition::StaticNew() */

ZombossSharkMinionAttackActionDefinition * ZombossSharkMinionAttackActionDefinition::StaticNew(void)

{
  ZombossSharkMinionAttackActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossSharkMinionAttackActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04846d8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSharkMinionAttackActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSharkMinionAttackActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

{
  ZombieZombossMech_Beach *this;
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pZVar1._0_1_ = (ZombieWithActions *)ZombieZombossMech_Beach::CanAnyMinionAttack(this);
  if (pZVar1._0_1_ != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieWithActions::QueueAction<ZombossSharkMinionAttackActionHandler>(pZVar1._0_1_,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined1)pZVar1._0_1_);
}

