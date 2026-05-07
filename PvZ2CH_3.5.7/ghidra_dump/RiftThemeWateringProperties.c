// Class: RiftThemeWateringProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWateringProperties::StaticClassInit() */

void RiftThemeWateringProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeWateringProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03706fe8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeWateringProperties::StaticGetClass() */

long * RiftThemeWateringProperties::StaticGetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeWateringProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWateringProperties::GetClass() const */

long * RiftThemeWateringProperties::GetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeWateringProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWateringProperties::RiftThemeWateringProperties() */

void __thiscall
RiftThemeWateringProperties::RiftThemeWateringProperties(RiftThemeWateringProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066896e0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeWateringProperties::StaticNew() */

RiftThemeWateringProperties * RiftThemeWateringProperties::StaticNew(void)

{
  RiftThemeWateringProperties *this;
  
  this = ::operator_new(0x48);
  RiftThemeWateringProperties(this);
  return this;
}


/* RiftThemeWateringProperties::~RiftThemeWateringProperties() */

void __thiscall
RiftThemeWateringProperties::~RiftThemeWateringProperties(RiftThemeWateringProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066896e0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeWateringProperties::~RiftThemeWateringProperties() */

void __thiscall
RiftThemeWateringProperties::~RiftThemeWateringProperties(RiftThemeWateringProperties *this)

{
  ~RiftThemeWateringProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWateringProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeWateringProperties::GatherResourceRequirements
          (RiftThemeWateringProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieArchmageGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"WaterShovelAudio");
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

