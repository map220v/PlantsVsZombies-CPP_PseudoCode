// Class: ZombossImpCannonActionDefinition


/* ZombossImpCannonActionDefinition::~ZombossImpCannonActionDefinition() */

void __thiscall
ZombossImpCannonActionDefinition::~ZombossImpCannonActionDefinition
          (ZombossImpCannonActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068bfab0;
  std::string::~string((string *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossImpCannonActionDefinition::~ZombossImpCannonActionDefinition() */

void __thiscall
ZombossImpCannonActionDefinition::~ZombossImpCannonActionDefinition
          (ZombossImpCannonActionDefinition *this)

{
  ~ZombossImpCannonActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombossImpCannonActionDefinition::ZombossImpCannonActionDefinition() */

void __thiscall
ZombossImpCannonActionDefinition::ZombossImpCannonActionDefinition
          (ZombossImpCannonActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068bfab0;
  Set8BytesTo0(this + 0x38);
  *(undefined4 *)(this + 0x48) = 7;
  *(undefined4 *)(this + 0x58) = 2;
  *(undefined4 *)(this + 0x5c) = 5;
  *(undefined4 *)(this + 0x44) = 0x40400000;
  *(undefined4 *)(this + 0x40) = 0x42c80000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x54) = 0x43960000;
  *(undefined4 *)(this + 0x50) = 0x3f000000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionDefinition::StaticClassInit() */

void ZombossImpCannonActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossImpCannonActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0471b9d4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossImpCannonActionDefinition::StaticGetClass() */

long * ZombossImpCannonActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossImpCannonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossImpCannonActionDefinition::GetClass() const */

long * ZombossImpCannonActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossImpCannonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossImpCannonActionDefinition::StaticNew() */

ZombossImpCannonActionDefinition * ZombossImpCannonActionDefinition::StaticNew(void)

{
  ZombossImpCannonActionDefinition *this;
  
  this = ::operator_new(0x60);
  ZombossImpCannonActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossImpCannonActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossImpCannonActionDefinition::GatherResourceRequirements
          (ZombossImpCannonActionDefinition *this,set *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  ZombieType::AddInGameResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0471d490 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossImpCannonActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossImpCannonActionDefinition::TryStartAction
          (ZombossImpCannonActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossImpCannonActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

