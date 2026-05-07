// Class: VaseBreakerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerProperties::StaticClassInit() */

void VaseBreakerProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_049800a4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseContentProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0497f2c0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerProperties::StaticGetClass() */

long * VaseBreakerProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerProperties::GetClass() const */

long * VaseBreakerProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerProperties::VaseBreakerProperties() */

void __thiscall VaseBreakerProperties::VaseBreakerProperties(VaseBreakerProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06918770;
  return;
}


/* VaseBreakerProperties::StaticNew() */

VaseBreakerProperties * VaseBreakerProperties::StaticNew(void)

{
  VaseBreakerProperties *this;
  
  this = ::operator_new(0x40);
  VaseBreakerProperties(this);
  return this;
}


/* VaseBreakerProperties::~VaseBreakerProperties() */

void __thiscall VaseBreakerProperties::~VaseBreakerProperties(VaseBreakerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918770;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* VaseBreakerProperties::~VaseBreakerProperties() */

void __thiscall VaseBreakerProperties::~VaseBreakerProperties(VaseBreakerProperties *this)

{
  ~VaseBreakerProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
VaseBreakerProperties::GatherResourceRequirements(VaseBreakerProperties *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"vase");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

