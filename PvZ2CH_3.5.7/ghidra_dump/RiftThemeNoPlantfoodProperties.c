// Class: RiftThemeNoPlantfoodProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeNoPlantfoodProperties::StaticClassInit() */

void RiftThemeNoPlantfoodProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeNoPlantfoodProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0370622c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeNoPlantfoodProperties::StaticGetClass() */

long * RiftThemeNoPlantfoodProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeNoPlantfoodProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeNoPlantfoodProperties::GetClass() const */

long * RiftThemeNoPlantfoodProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeNoPlantfoodProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeNoPlantfoodProperties::RiftThemeNoPlantfoodProperties() */

void __thiscall
RiftThemeNoPlantfoodProperties::RiftThemeNoPlantfoodProperties(RiftThemeNoPlantfoodProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06686da0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeNoPlantfoodProperties::StaticNew() */

RiftThemeNoPlantfoodProperties * RiftThemeNoPlantfoodProperties::StaticNew(void)

{
  RiftThemeNoPlantfoodProperties *this;
  
  this = ::operator_new(0x48);
  RiftThemeNoPlantfoodProperties(this);
  return this;
}


/* RiftThemeNoPlantfoodProperties::~RiftThemeNoPlantfoodProperties() */

void __thiscall
RiftThemeNoPlantfoodProperties::~RiftThemeNoPlantfoodProperties
          (RiftThemeNoPlantfoodProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686da0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeNoPlantfoodProperties::~RiftThemeNoPlantfoodProperties() */

void __thiscall
RiftThemeNoPlantfoodProperties::~RiftThemeNoPlantfoodProperties
          (RiftThemeNoPlantfoodProperties *this)

{
  ~RiftThemeNoPlantfoodProperties(this);
  AK::FreeHook(this);
  return;
}

