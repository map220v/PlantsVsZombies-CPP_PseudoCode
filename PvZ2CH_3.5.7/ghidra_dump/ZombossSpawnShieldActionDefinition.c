// Class: ZombossSpawnShieldActionDefinition


/* ZombossSpawnShieldActionDefinition::~ZombossSpawnShieldActionDefinition() */

void __thiscall
ZombossSpawnShieldActionDefinition::~ZombossSpawnShieldActionDefinition
          (ZombossSpawnShieldActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068d43e0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSpawnShieldActionDefinition::~ZombossSpawnShieldActionDefinition() */

void __thiscall
ZombossSpawnShieldActionDefinition::~ZombossSpawnShieldActionDefinition
          (ZombossSpawnShieldActionDefinition *this)

{
  ~ZombossSpawnShieldActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnShieldActionDefinition::StaticClassInit() */

void ZombossSpawnShieldActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnShieldActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0476c920,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnShieldActionDefinition::StaticGetClass() */

long * ZombossSpawnShieldActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSpawnShieldActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnShieldActionDefinition::GetClass() const */

long * ZombossSpawnShieldActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSpawnShieldActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnShieldActionDefinition::ZombossSpawnShieldActionDefinition() */

void __thiscall
ZombossSpawnShieldActionDefinition::ZombossSpawnShieldActionDefinition
          (ZombossSpawnShieldActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068d43e0;
  return;
}


/* ZombossSpawnShieldActionDefinition::StaticNew() */

ZombossSpawnShieldActionDefinition * ZombossSpawnShieldActionDefinition::StaticNew(void)

{
  ZombossSpawnShieldActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSpawnShieldActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnShieldActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossSpawnShieldActionDefinition::GatherResourceRequirements
          (ZombossSpawnShieldActionDefinition *this,set *param_1)

{
  string *psVar1;
  EffectObjectType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
  std::string::string(asStack_10,"effectobject_frostwind_zomboss");
  ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (EffectObjectType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  EffectObjectType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047703ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSpawnShieldActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossSpawnShieldActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

{
  EliminateModule *this;
  ZombieWithActions *pZVar1;
  ulong uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (EliminateModule *)0x0) {
    pZVar1 = (ZombieWithActions *)EliminateModule::CanSpawnShield(this);
    uVar2 = (ulong)pZVar1 & 0xff;
    if (((ulong)pZVar1 & 0xff) != 0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      ZombieWithActions::QueueAction<ZombossSpawnShieldActionHandler>(pZVar1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_047703a8;
    }
  }
  uVar2 = 0;
LAB_047703a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

