// Class: HotUIPlantProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPlantProperties::StaticClassInit() */

void HotUIPlantProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPlantProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_033c12dc,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPlantProperties::StaticGetClass() */

long * HotUIPlantProperties::StaticGetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPlantProperties::GetClass() const */

long * HotUIPlantProperties::GetClass(void)

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
  uVar2 = HotUIAnimProperties::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPlantProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPlantProperties::GetWidgetClass() const */

long * HotUIPlantProperties::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HotUIPlant::sClass != (long *)0x0) {
    return HotUIPlant::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HotUIPlant::sClass = plVar1;
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPlant",uVar2,HotUIPlant::StaticNew);
  HotUIPlant::StaticClassInit();
  return HotUIPlant::sClass;
}


/* HotUIPlantProperties::HotUIPlantProperties() */

void __thiscall HotUIPlantProperties::HotUIPlantProperties(HotUIPlantProperties *this)

{
  HotUIAnimProperties::HotUIAnimProperties((HotUIAnimProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066194b0;
  return;
}


/* HotUIPlantProperties::StaticNew() */

HotUIPlantProperties * HotUIPlantProperties::StaticNew(void)

{
  HotUIPlantProperties *this;
  
  this = ::operator_new(0x170);
  HotUIPlantProperties(this);
  return this;
}


/* HotUIPlantProperties::~HotUIPlantProperties() */

void __thiscall HotUIPlantProperties::~HotUIPlantProperties(HotUIPlantProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066194b0;
  HotUIAnimProperties::~HotUIAnimProperties((HotUIAnimProperties *)this);
  return;
}


/* HotUIPlantProperties::~HotUIPlantProperties() */

void __thiscall HotUIPlantProperties::~HotUIPlantProperties(HotUIPlantProperties *this)

{
  ~HotUIPlantProperties(this);
  AK::FreeHook(this);
  return;
}

