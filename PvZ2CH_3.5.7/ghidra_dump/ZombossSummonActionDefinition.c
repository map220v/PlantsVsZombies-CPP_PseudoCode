// Class: ZombossSummonActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionDefinition::StaticClassInit() */

void ZombossSummonActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSummonActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04738a30,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSummonActionDefinition::StaticGetClass() */

long * ZombossSummonActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSummonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSummonActionDefinition::GetClass() const */

long * ZombossSummonActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSummonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSummonActionDefinition::ZombossSummonActionDefinition() */

void __thiscall
ZombossSummonActionDefinition::ZombossSummonActionDefinition(ZombossSummonActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x96;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR_GetClass_068c6210;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(undefined4 *)(this + 0x5c) = 0x3fc00000;
  DVec2::DVec2((DVec2 *)(this + 0x60),1.0,1.0);
  DVec2::DVec2((DVec2 *)(this + 0x68),1500.0,7500.0);
  return;
}


/* ZombossSummonActionDefinition::StaticNew() */

ZombossSummonActionDefinition * ZombossSummonActionDefinition::StaticNew(void)

{
  ZombossSummonActionDefinition *this;
  
  this = ::operator_new(0x70);
  ZombossSummonActionDefinition(this);
  return this;
}


/* ZombossSummonActionDefinition::~ZombossSummonActionDefinition() */

void __thiscall
ZombossSummonActionDefinition::~ZombossSummonActionDefinition(ZombossSummonActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6210;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSummonActionDefinition::~ZombossSummonActionDefinition() */

void __thiscall
ZombossSummonActionDefinition::~ZombossSummonActionDefinition(ZombossSummonActionDefinition *this)

{
  ~ZombossSummonActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionDefinition::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombossSummonActionDefinition::GatherResourceRequirements
          (ZombossSummonActionDefinition *this,set *param_1)

{
  string *psVar1;
  ZombieType *this_00;
  ulong uVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_04735bd0(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04735c00(*(undefined8 *)(this + 0x40),uVar3);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    ZombieType::AddInGameResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0473dc0c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSummonActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSummonActionDefinition::TryStartAction
          (ZombossSummonActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossSummonActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

