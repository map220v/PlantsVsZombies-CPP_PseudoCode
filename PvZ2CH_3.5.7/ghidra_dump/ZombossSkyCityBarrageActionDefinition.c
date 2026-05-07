// Class: ZombossSkyCityBarrageActionDefinition


/* ZombossSkyCityBarrageActionDefinition::~ZombossSkyCityBarrageActionDefinition() */

void __thiscall
ZombossSkyCityBarrageActionDefinition::~ZombossSkyCityBarrageActionDefinition
          (ZombossSkyCityBarrageActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c36a0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSkyCityBarrageActionDefinition::~ZombossSkyCityBarrageActionDefinition() */

void __thiscall
ZombossSkyCityBarrageActionDefinition::~ZombossSkyCityBarrageActionDefinition
          (ZombossSkyCityBarrageActionDefinition *this)

{
  ~ZombossSkyCityBarrageActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageActionDefinition::StaticClassInit() */

void ZombossSkyCityBarrageActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityBarrageActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04728198,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityBarrageActionDefinition::StaticGetClass() */

long * ZombossSkyCityBarrageActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityBarrageActionDefinition::GetClass() const */

long * ZombossSkyCityBarrageActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityBarrageActionDefinition::ZombossSkyCityBarrageActionDefinition() */

void __thiscall
ZombossSkyCityBarrageActionDefinition::ZombossSkyCityBarrageActionDefinition
          (ZombossSkyCityBarrageActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x40) = 10;
  *(undefined ***)this = &PTR_GetClass_068c36a0;
  *(undefined4 *)(this + 0x3c) = 0x40a00000;
  *(undefined4 *)(this + 0x38) = 0x3e4ccccd;
  return;
}


/* ZombossSkyCityBarrageActionDefinition::StaticNew() */

ZombossSkyCityBarrageActionDefinition * ZombossSkyCityBarrageActionDefinition::StaticNew(void)

{
  ZombossSkyCityBarrageActionDefinition *this;
  
  this = ::operator_new(0x48);
  ZombossSkyCityBarrageActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047303d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityBarrageActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSkyCityBarrageActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

{
  ZombieWithActions ZVar1;
  ZombieWithActions *extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  ZVar1 = extraout_x0[0x964];
  if (ZVar1 != (ZombieWithActions)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieWithActions::QueueAction<ZombossSkyCityBarrageActionHandler>(extraout_x0,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZVar1);
}

