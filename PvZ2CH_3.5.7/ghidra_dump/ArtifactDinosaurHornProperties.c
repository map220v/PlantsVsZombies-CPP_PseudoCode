// Class: ArtifactDinosaurHornProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHornProperties::StaticClassInit() */

void ArtifactDinosaurHornProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TypeToSpawnDes");
    (*pcVar3)(plVar2,asStack_10,FUN_03725734,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactDinosaurHornProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03766354,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDinosaurHornProperties::StaticGetClass() */

long * ArtifactDinosaurHornProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDinosaurHornProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDinosaurHornProperties::GetClass() const */

long * ArtifactDinosaurHornProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDinosaurHornProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHornProperties::ArtifactDinosaurHornProperties() */

void __thiscall
ArtifactDinosaurHornProperties::ArtifactDinosaurHornProperties(ArtifactDinosaurHornProperties *this)

{
  size_t in_x2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06691210;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x16c));
  Set8BytesTo0((string *)(this + 0x178));
  Set8BytesTo0((string *)(this + 0x180));
  *(undefined4 *)(this + 0x168) = 0x40800000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x16c) = local_10;
  std::string::append((string *)(this + 0x178),"",in_x2);
  std::string::append((string *)(this + 0x180),"idle",in_x2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDinosaurHornProperties::StaticNew() */

ArtifactDinosaurHornProperties * ArtifactDinosaurHornProperties::StaticNew(void)

{
  ArtifactDinosaurHornProperties *this;
  
  this = ::operator_new(0x188);
  ArtifactDinosaurHornProperties(this);
  return this;
}


/* ArtifactDinosaurHornProperties::~ArtifactDinosaurHornProperties() */

void __thiscall
ArtifactDinosaurHornProperties::~ArtifactDinosaurHornProperties
          (ArtifactDinosaurHornProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06691210;
  std::string::~string((string *)(this + 0x180));
  std::string::~string((string *)(this + 0x178));
  std::
  vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
  ::~vector((vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
             *)(this + 0x150));
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactDinosaurHornProperties::~ArtifactDinosaurHornProperties() */

void __thiscall
ArtifactDinosaurHornProperties::~ArtifactDinosaurHornProperties
          (ArtifactDinosaurHornProperties *this)

{
  ~ArtifactDinosaurHornProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHornProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactDinosaurHornProperties::GatherResourceRequirements
          (ArtifactDinosaurHornProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"HeianWind");
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

