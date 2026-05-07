// Class: ArtifactCameraProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraProperties::StaticClassInit() */

void ArtifactCameraProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCameraProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0374d3b0,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraProperties::StaticGetClass() */

long * ArtifactCameraProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCameraProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraProperties::GetClass() const */

long * ArtifactCameraProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCameraProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraProperties::ArtifactCameraProperties() */

void __thiscall ArtifactCameraProperties::ArtifactCameraProperties(ArtifactCameraProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066954b0;
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)(this + 0x150));
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)(this + 0x178));
  return;
}


/* ArtifactCameraProperties::StaticNew() */

ArtifactCameraProperties * ArtifactCameraProperties::StaticNew(void)

{
  ArtifactCameraProperties *this;
  
  this = ::operator_new(0x1a0);
  ArtifactCameraProperties(this);
  return this;
}


/* ArtifactCameraProperties::~ArtifactCameraProperties() */

void __thiscall ArtifactCameraProperties::~ArtifactCameraProperties(ArtifactCameraProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066954b0;
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)(this + 0x178));
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactCameraProperties::~ArtifactCameraProperties() */

void __thiscall ArtifactCameraProperties::~ArtifactCameraProperties(ArtifactCameraProperties *this)

{
  ~ArtifactCameraProperties(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactCameraProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactCameraProperties::GatherResourceRequirements(ArtifactCameraProperties *this,set *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_037450a8(*(undefined8 *)(this + 0x108));
  uVar2 = FUN_037450f8(*(undefined8 *)(this + 0x110));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::
  insert<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>>
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,uVar1,
             uVar2);
  return;
}

