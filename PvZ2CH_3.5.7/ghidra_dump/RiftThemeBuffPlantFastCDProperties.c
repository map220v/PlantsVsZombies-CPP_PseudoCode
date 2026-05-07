// Class: RiftThemeBuffPlantFastCDProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCDProperties::StaticClassInit() */

void RiftThemeBuffPlantFastCDProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBuffPlantFastCDProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03706984,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBuffPlantFastCDProperties::StaticGetClass() */

long * RiftThemeBuffPlantFastCDProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantFastCDProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantFastCDProperties::GetClass() const */

long * RiftThemeBuffPlantFastCDProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeBuffPlantFastCDProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBuffPlantFastCDProperties::RiftThemeBuffPlantFastCDProperties() */

void __thiscall
RiftThemeBuffPlantFastCDProperties::RiftThemeBuffPlantFastCDProperties
          (RiftThemeBuffPlantFastCDProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687e40;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  return;
}


/* RiftThemeBuffPlantFastCDProperties::StaticNew() */

RiftThemeBuffPlantFastCDProperties * RiftThemeBuffPlantFastCDProperties::StaticNew(void)

{
  RiftThemeBuffPlantFastCDProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeBuffPlantFastCDProperties(this);
  return this;
}


/* RiftThemeBuffPlantFastCDProperties::~RiftThemeBuffPlantFastCDProperties() */

void __thiscall
RiftThemeBuffPlantFastCDProperties::~RiftThemeBuffPlantFastCDProperties
          (RiftThemeBuffPlantFastCDProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687e40;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeBuffPlantFastCDProperties::~RiftThemeBuffPlantFastCDProperties() */

void __thiscall
RiftThemeBuffPlantFastCDProperties::~RiftThemeBuffPlantFastCDProperties
          (RiftThemeBuffPlantFastCDProperties *this)

{
  ~RiftThemeBuffPlantFastCDProperties(this);
  AK::FreeHook(this);
  return;
}

