// Class: ArtifactMagicBeansProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagicBeansProperties::StaticClassInit() */

void ArtifactMagicBeansProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMagicBeansProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03730668,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagicBeansProperties::StaticGetClass() */

long * ArtifactMagicBeansProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagicBeansProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagicBeansProperties::GetClass() const */

long * ArtifactMagicBeansProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagicBeansProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagicBeansProperties::ArtifactMagicBeansProperties() */

void __thiscall
ArtifactMagicBeansProperties::ArtifactMagicBeansProperties(ArtifactMagicBeansProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0668ff80;
  return;
}


/* ArtifactMagicBeansProperties::StaticNew() */

ArtifactMagicBeansProperties * ArtifactMagicBeansProperties::StaticNew(void)

{
  ArtifactMagicBeansProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactMagicBeansProperties(this);
  return this;
}


/* ArtifactMagicBeansProperties::~ArtifactMagicBeansProperties() */

void __thiscall
ArtifactMagicBeansProperties::~ArtifactMagicBeansProperties(ArtifactMagicBeansProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ff80;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactMagicBeansProperties::~ArtifactMagicBeansProperties() */

void __thiscall
ArtifactMagicBeansProperties::~ArtifactMagicBeansProperties(ArtifactMagicBeansProperties *this)

{
  ~ArtifactMagicBeansProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagicBeansProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactMagicBeansProperties::GatherResourceRequirements
          (ArtifactMagicBeansProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PowerUpIcons");
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

