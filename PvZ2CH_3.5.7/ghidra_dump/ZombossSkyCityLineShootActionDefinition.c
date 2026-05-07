// Class: ZombossSkyCityLineShootActionDefinition


/* ZombossSkyCityLineShootActionDefinition::~ZombossSkyCityLineShootActionDefinition() */

void __thiscall
ZombossSkyCityLineShootActionDefinition::~ZombossSkyCityLineShootActionDefinition
          (ZombossSkyCityLineShootActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2da0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSkyCityLineShootActionDefinition::~ZombossSkyCityLineShootActionDefinition() */

void __thiscall
ZombossSkyCityLineShootActionDefinition::~ZombossSkyCityLineShootActionDefinition
          (ZombossSkyCityLineShootActionDefinition *this)

{
  ~ZombossSkyCityLineShootActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityLineShootActionDefinition::StaticClassInit() */

void ZombossSkyCityLineShootActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityLineShootActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04726f1c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityLineShootActionDefinition::StaticGetClass() */

long * ZombossSkyCityLineShootActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityLineShootActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityLineShootActionDefinition::GetClass() const */

long * ZombossSkyCityLineShootActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityLineShootActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityLineShootActionDefinition::ZombossSkyCityLineShootActionDefinition() */

void __thiscall
ZombossSkyCityLineShootActionDefinition::ZombossSkyCityLineShootActionDefinition
          (ZombossSkyCityLineShootActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c2da0;
  return;
}


/* ZombossSkyCityLineShootActionDefinition::StaticNew() */

ZombossSkyCityLineShootActionDefinition * ZombossSkyCityLineShootActionDefinition::StaticNew(void)

{
  ZombossSkyCityLineShootActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSkyCityLineShootActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0472fc60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityLineShootActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSkyCityLineShootActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

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
    ZombieWithActions::QueueAction<ZombossSkyCityLineShootActionHandler>(extraout_x0,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZVar1);
}

