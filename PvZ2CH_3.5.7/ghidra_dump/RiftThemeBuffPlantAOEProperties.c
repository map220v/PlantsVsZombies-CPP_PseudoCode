// Class: RiftThemeBuffPlantAOEProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOEProperties::StaticClassInit() */

void RiftThemeBuffPlantAOEProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffPlantAOEProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03706738,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffPlantAOEProperties::StaticGetClass() */

long * RiftThemeBuffPlantAOEProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantAOEProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantAOEProperties::GetClass() const */

long * RiftThemeBuffPlantAOEProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantAOEProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantAOEProperties::RiftThemeBuffPlantAOEProperties() */

void __thiscall
RiftThemeBuffPlantAOEProperties::RiftThemeBuffPlantAOEProperties
          (RiftThemeBuffPlantAOEProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687d10;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  return;
}


/* RiftThemeBuffPlantAOEProperties::StaticNew() */

RiftThemeBuffPlantAOEProperties * RiftThemeBuffPlantAOEProperties::StaticNew(void)

{
  RiftThemeBuffPlantAOEProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeBuffPlantAOEProperties(this);
  return this;
}


/* RiftThemeBuffPlantAOEProperties::~RiftThemeBuffPlantAOEProperties() */

void __thiscall
RiftThemeBuffPlantAOEProperties::~RiftThemeBuffPlantAOEProperties
          (RiftThemeBuffPlantAOEProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687d10;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeBuffPlantAOEProperties::~RiftThemeBuffPlantAOEProperties() */

void __thiscall
RiftThemeBuffPlantAOEProperties::~RiftThemeBuffPlantAOEProperties
          (RiftThemeBuffPlantAOEProperties *this)

{
  ~RiftThemeBuffPlantAOEProperties(this);
  AK::FreeHook(this);
  return;
}

