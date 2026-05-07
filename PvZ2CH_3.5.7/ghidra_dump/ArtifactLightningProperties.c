// Class: ArtifactLightningProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightningProperties::StaticClassInit() */

void ArtifactLightningProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactLightningProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037452e0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactLightningProperties::StaticGetClass() */

long * ArtifactLightningProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactLightningProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactLightningProperties::GetClass() const */

long * ArtifactLightningProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactLightningProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactLightningProperties::ArtifactLightningProperties() */

void __thiscall
ArtifactLightningProperties::ArtifactLightningProperties(ArtifactLightningProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x158) = 0x18;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined ***)this = &PTR_GetClass_0668af70;
  *(undefined4 *)(this + 0x160) = 5;
  *(undefined4 *)(this + 0x15c) = 0x40a00000;
  *(undefined4 *)(this + 0x164) = 0x41a00000;
  return;
}


/* ArtifactLightningProperties::StaticNew() */

ArtifactLightningProperties * ArtifactLightningProperties::StaticNew(void)

{
  ArtifactLightningProperties *this;
  
  this = ::operator_new(0x168);
  ArtifactLightningProperties(this);
  return this;
}


/* ArtifactLightningProperties::~ArtifactLightningProperties() */

void __thiscall
ArtifactLightningProperties::~ArtifactLightningProperties(ArtifactLightningProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668af70;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactLightningProperties::~ArtifactLightningProperties() */

void __thiscall
ArtifactLightningProperties::~ArtifactLightningProperties(ArtifactLightningProperties *this)

{
  ~ArtifactLightningProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightningProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactLightningProperties::GatherResourceRequirements
          (ArtifactLightningProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"thunder");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantPepperpult");
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

