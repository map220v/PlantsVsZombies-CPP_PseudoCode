// Class: ArtifactMagichatProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichatProperties::StaticClassInit() */

void ArtifactMagichatProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMagichatProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03734088,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagichatProperties::StaticGetClass() */

long * ArtifactMagichatProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagichatProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagichatProperties::GetClass() const */

long * ArtifactMagichatProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagichatProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagichatProperties::ArtifactMagichatProperties() */

void __thiscall
ArtifactMagichatProperties::ArtifactMagichatProperties(ArtifactMagichatProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06691720;
  return;
}


/* ArtifactMagichatProperties::StaticNew() */

ArtifactMagichatProperties * ArtifactMagichatProperties::StaticNew(void)

{
  ArtifactMagichatProperties *this;
  
  this = ::operator_new(0x150);
  ArtifactMagichatProperties(this);
  return this;
}


/* ArtifactMagichatProperties::~ArtifactMagichatProperties() */

void __thiscall
ArtifactMagichatProperties::~ArtifactMagichatProperties(ArtifactMagichatProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691720;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactMagichatProperties::~ArtifactMagichatProperties() */

void __thiscall
ArtifactMagichatProperties::~ArtifactMagichatProperties(ArtifactMagichatProperties *this)

{
  ~ArtifactMagichatProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichatProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactMagichatProperties::GatherResourceRequirements
          (ArtifactMagichatProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombiePirateCaptainGroup");
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

