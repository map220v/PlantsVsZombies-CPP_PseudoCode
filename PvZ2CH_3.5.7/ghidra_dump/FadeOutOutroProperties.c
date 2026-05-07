// Class: FadeOutOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroProperties::StaticClassInit() */

void FadeOutOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"FadeOutOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce2550,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FadeOutOutroProperties::StaticGetClass() */

long * FadeOutOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FadeOutOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FadeOutOutroProperties::GetClass() const */

long * FadeOutOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FadeOutOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FadeOutOutroProperties::GetModuleClass() const */

long * FadeOutOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FadeOutOutroModule::sClass != (long *)0x0) {
    return FadeOutOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FadeOutOutroModule::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"FadeOutOutroModule",uVar2,FadeOutOutroModule::StaticNew);
  return FadeOutOutroModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroProperties::FadeOutOutroProperties() */

void __thiscall FadeOutOutroProperties::FadeOutOutroProperties(FadeOutOutroProperties *this)

{
  bool bVar1;
  size_t in_x2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06760c30;
  Set8BytesTo0((string *)(this + 0x40));
  Sexy::Color::Color((Color *)(this + 0x48));
  std::string::append((string *)(this + 0x40),"",in_x2);
  *(undefined4 *)(this + 0x5c) = 0x40800000;
  *(undefined4 *)(this + 0x58) = 0x40000000;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0xff);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x48) = local_18;
  *(undefined8 *)(this + 0x50) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FadeOutOutroProperties::StaticNew() */

FadeOutOutroProperties * FadeOutOutroProperties::StaticNew(void)

{
  FadeOutOutroProperties *this;
  
  this = ::operator_new(0x60);
  FadeOutOutroProperties(this);
  return this;
}


/* FadeOutOutroProperties::~FadeOutOutroProperties() */

void __thiscall FadeOutOutroProperties::~FadeOutOutroProperties(FadeOutOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06760c30;
  std::string::~string((string *)(this + 0x40));
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* FadeOutOutroProperties::~FadeOutOutroProperties() */

void __thiscall FadeOutOutroProperties::~FadeOutOutroProperties(FadeOutOutroProperties *this)

{
  ~FadeOutOutroProperties(this);
  AK::FreeHook(this);
  return;
}

