// Class: ArtifactBlackholeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackholeProperties::StaticClassInit() */

void ArtifactBlackholeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactBlackholeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03733594,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBlackholeProperties::StaticGetClass() */

long * ArtifactBlackholeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackholeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBlackholeProperties::GetClass() const */

long * ArtifactBlackholeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackholeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBlackholeProperties::ArtifactBlackholeProperties() */

void __thiscall
ArtifactBlackholeProperties::ArtifactBlackholeProperties(ArtifactBlackholeProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x154) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_06691570;
  *(undefined4 *)(this + 0x158) = 0x40000000;
  *(undefined4 *)(this + 0x150) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x15c) = 0x40a00000;
  return;
}


/* ArtifactBlackholeProperties::StaticNew() */

ArtifactBlackholeProperties * ArtifactBlackholeProperties::StaticNew(void)

{
  ArtifactBlackholeProperties *this;
  
  this = ::operator_new(0x160);
  ArtifactBlackholeProperties(this);
  return this;
}


/* ArtifactBlackholeProperties::~ArtifactBlackholeProperties() */

void __thiscall
ArtifactBlackholeProperties::~ArtifactBlackholeProperties(ArtifactBlackholeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691570;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactBlackholeProperties::~ArtifactBlackholeProperties() */

void __thiscall
ArtifactBlackholeProperties::~ArtifactBlackholeProperties(ArtifactBlackholeProperties *this)

{
  ~ArtifactBlackholeProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackholeProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactBlackholeProperties::GatherResourceRequirements
          (ArtifactBlackholeProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantMagicbeans");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
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

