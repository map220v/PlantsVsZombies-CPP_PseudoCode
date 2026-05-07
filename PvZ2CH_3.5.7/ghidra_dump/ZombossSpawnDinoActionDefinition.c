// Class: ZombossSpawnDinoActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionDefinition::StaticClassInit() */

void ZombossSpawnDinoActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnDinoActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047f3cb0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnDinoActionDefinition::StaticGetClass() */

long * ZombossSpawnDinoActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossSummonActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnDinoActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnDinoActionDefinition::GetClass() const */

long * ZombossSpawnDinoActionDefinition::GetClass(void)

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
  uVar2 = ZombossSummonActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnDinoActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnDinoActionDefinition::ZombossSpawnDinoActionDefinition() */

void __thiscall
ZombossSpawnDinoActionDefinition::ZombossSpawnDinoActionDefinition
          (ZombossSpawnDinoActionDefinition *this)

{
  ZombossSummonActionDefinition::ZombossSummonActionDefinition
            ((ZombossSummonActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068f6b30;
  Set8BytesTo0(this + 0x70);
  return;
}


/* ZombossSpawnDinoActionDefinition::StaticNew() */

ZombossSpawnDinoActionDefinition * ZombossSpawnDinoActionDefinition::StaticNew(void)

{
  ZombossSpawnDinoActionDefinition *this;
  
  this = ::operator_new(0x78);
  ZombossSpawnDinoActionDefinition(this);
  return this;
}


/* ZombossSpawnDinoActionDefinition::~ZombossSpawnDinoActionDefinition() */

void __thiscall
ZombossSpawnDinoActionDefinition::~ZombossSpawnDinoActionDefinition
          (ZombossSpawnDinoActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6b30;
  std::string::~string((string *)(this + 0x70));
  ZombossSummonActionDefinition::~ZombossSummonActionDefinition
            ((ZombossSummonActionDefinition *)this);
  return;
}


/* ZombossSpawnDinoActionDefinition::~ZombossSpawnDinoActionDefinition() */

void __thiscall
ZombossSpawnDinoActionDefinition::~ZombossSpawnDinoActionDefinition
          (ZombossSpawnDinoActionDefinition *this)

{
  ~ZombossSpawnDinoActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossSpawnDinoActionDefinition::GatherResourceRequirements
          (ZombossSpawnDinoActionDefinition *this,set *param_1)

{
  string *psVar1;
  CreatureType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossSummonActionDefinition::GatherResourceRequirements
            ((ZombossSummonActionDefinition *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar1);
  this_00 = (CreatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  CreatureType::AddInGameResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f8700 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSpawnDinoActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSpawnDinoActionDefinition::TryStartAction
          (ZombossSpawnDinoActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossSpawnDinoActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

