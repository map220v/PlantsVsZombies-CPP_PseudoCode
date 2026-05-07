// Class: PlantWarsFadeOutOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsFadeOutOutroProperties::StaticClassInit() */

void PlantWarsFadeOutOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsFadeOutOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04d903e8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsFadeOutOutroProperties::StaticGetClass() */

long * PlantWarsFadeOutOutroProperties::StaticGetClass(void)

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
  uVar2 = FadeOutOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsFadeOutOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsFadeOutOutroProperties::GetClass() const */

long * PlantWarsFadeOutOutroProperties::GetClass(void)

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
  uVar2 = FadeOutOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsFadeOutOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsFadeOutOutroProperties::GetModuleClass() const */

long * PlantWarsFadeOutOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsFadeOutOutroModule::sClass != (long *)0x0) {
    return PlantWarsFadeOutOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsFadeOutOutroModule::sClass = plVar1;
  uVar2 = FadeOutOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsFadeOutOutroModule",uVar2,PlantWarsFadeOutOutroModule::StaticNew);
  return PlantWarsFadeOutOutroModule::sClass;
}


/* PlantWarsFadeOutOutroProperties::PlantWarsFadeOutOutroProperties() */

void __thiscall
PlantWarsFadeOutOutroProperties::PlantWarsFadeOutOutroProperties
          (PlantWarsFadeOutOutroProperties *this)

{
  FadeOutOutroProperties::FadeOutOutroProperties((FadeOutOutroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069baf60;
  return;
}


/* PlantWarsFadeOutOutroProperties::StaticNew() */

PlantWarsFadeOutOutroProperties * PlantWarsFadeOutOutroProperties::StaticNew(void)

{
  PlantWarsFadeOutOutroProperties *this;
  
  this = ::operator_new(0x60);
  PlantWarsFadeOutOutroProperties(this);
  return this;
}


/* PlantWarsFadeOutOutroProperties::~PlantWarsFadeOutOutroProperties() */

void __thiscall
PlantWarsFadeOutOutroProperties::~PlantWarsFadeOutOutroProperties
          (PlantWarsFadeOutOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069baf60;
  FadeOutOutroProperties::~FadeOutOutroProperties((FadeOutOutroProperties *)this);
  return;
}


/* PlantWarsFadeOutOutroProperties::~PlantWarsFadeOutOutroProperties() */

void __thiscall
PlantWarsFadeOutOutroProperties::~PlantWarsFadeOutOutroProperties
          (PlantWarsFadeOutOutroProperties *this)

{
  ~PlantWarsFadeOutOutroProperties(this);
  AK::FreeHook(this);
  return;
}

