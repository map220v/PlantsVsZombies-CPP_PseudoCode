// Class: ArtifactWatergunProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunProperties::StaticClassInit() */

void ArtifactWatergunProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWatergunProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03732c14,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWatergunProperties::StaticGetClass() */

long * ArtifactWatergunProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergunProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergunProperties::GetClass() const */

long * ArtifactWatergunProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWatergunProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWatergunProperties::ArtifactWatergunProperties() */

void __thiscall
ArtifactWatergunProperties::ArtifactWatergunProperties(ArtifactWatergunProperties *this)

{
  ArtifactProperties::ArtifactProperties((ArtifactProperties *)this);
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_066913c0;
  *(undefined4 *)(this + 0x154) = 0x40400000;
  *(undefined4 *)(this + 0x15c) = 0x3e800000;
  *(undefined4 *)(this + 0x158) = 0x40c00000;
  *(undefined4 *)(this + 0x160) = 0x41700000;
  *(undefined4 *)(this + 0x164) = 0x41000000;
  *(undefined4 *)(this + 0x16c) = 0x41700000;
  *(undefined4 *)(this + 0x168) = 0x40800000;
  *(undefined4 *)(this + 0x170) = 0x3e800000;
  return;
}


/* ArtifactWatergunProperties::StaticNew() */

ArtifactWatergunProperties * ArtifactWatergunProperties::StaticNew(void)

{
  ArtifactWatergunProperties *this;
  
  this = ::operator_new(0x178);
  ArtifactWatergunProperties(this);
  return this;
}


/* ArtifactWatergunProperties::~ArtifactWatergunProperties() */

void __thiscall
ArtifactWatergunProperties::~ArtifactWatergunProperties(ArtifactWatergunProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066913c0;
  ArtifactProperties::~ArtifactProperties((ArtifactProperties *)this);
  return;
}


/* ArtifactWatergunProperties::~ArtifactWatergunProperties() */

void __thiscall
ArtifactWatergunProperties::~ArtifactWatergunProperties(ArtifactWatergunProperties *this)

{
  ~ArtifactWatergunProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWatergunProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ArtifactWatergunProperties::GatherResourceRequirements
          (ArtifactWatergunProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlantLotusshooter");
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

