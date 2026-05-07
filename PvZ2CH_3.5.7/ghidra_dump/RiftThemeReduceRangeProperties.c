// Class: RiftThemeReduceRangeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeReduceRangeProperties::StaticClassInit() */

void RiftThemeReduceRangeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeReduceRangeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03706390,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeReduceRangeProperties::StaticGetClass() */

long * RiftThemeReduceRangeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeReduceRangeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeReduceRangeProperties::GetClass() const */

long * RiftThemeReduceRangeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeReduceRangeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeReduceRangeProperties::RiftThemeReduceRangeProperties() */

void __thiscall
RiftThemeReduceRangeProperties::RiftThemeReduceRangeProperties(RiftThemeReduceRangeProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687000;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* RiftThemeReduceRangeProperties::StaticNew() */

RiftThemeReduceRangeProperties * RiftThemeReduceRangeProperties::StaticNew(void)

{
  RiftThemeReduceRangeProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeReduceRangeProperties(this);
  return this;
}


/* RiftThemeReduceRangeProperties::~RiftThemeReduceRangeProperties() */

void __thiscall
RiftThemeReduceRangeProperties::~RiftThemeReduceRangeProperties
          (RiftThemeReduceRangeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687000;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeReduceRangeProperties::~RiftThemeReduceRangeProperties() */

void __thiscall
RiftThemeReduceRangeProperties::~RiftThemeReduceRangeProperties
          (RiftThemeReduceRangeProperties *this)

{
  ~RiftThemeReduceRangeProperties(this);
  AK::FreeHook(this);
  return;
}

