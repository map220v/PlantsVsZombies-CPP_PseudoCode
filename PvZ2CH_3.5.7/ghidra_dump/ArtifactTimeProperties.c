// Class: ArtifactTimeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTimeProperties::StaticClassInit() */

void ArtifactTimeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactTimeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037497f8,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTimeProperties::StaticGetClass() */

long * ArtifactTimeProperties::StaticGetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactTimeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTimeProperties::GetClass() const */

long * ArtifactTimeProperties::GetClass(void)

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
  uVar2 = ArtifactProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactTimeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTimeProperties::ArtifactTimeProperties() */

void __thiscall ArtifactTimeProperties::ArtifactTimeProperties(ArtifactTimeProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668eff0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  return;
}


/* ArtifactTimeProperties::StaticNew() */

ArtifactTimeProperties * ArtifactTimeProperties::StaticNew(void)

{
  ArtifactTimeProperties *this;
  
  this = ::operator_new(0x178);
  ArtifactTimeProperties(this);
  return this;
}


/* ArtifactTimeProperties::~ArtifactTimeProperties() */

void __thiscall ArtifactTimeProperties::~ArtifactTimeProperties(ArtifactTimeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668eff0;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x158));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactTimeProperties::~ArtifactTimeProperties() */

void __thiscall ArtifactTimeProperties::~ArtifactTimeProperties(ArtifactTimeProperties *this)

{
  ~ArtifactTimeProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTimeProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
ArtifactTimeProperties::GatherResourceRequirements(ArtifactTimeProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantThymeWarp");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

