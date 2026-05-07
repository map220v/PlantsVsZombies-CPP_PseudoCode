// Class: RiftThemeSeedRainProperties


/* RiftThemeSeedRainProperties::~RiftThemeSeedRainProperties() */

void __thiscall
RiftThemeSeedRainProperties::~RiftThemeSeedRainProperties(RiftThemeSeedRainProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066888a0;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeSeedRainProperties::~RiftThemeSeedRainProperties() */

void __thiscall
RiftThemeSeedRainProperties::~RiftThemeSeedRainProperties(RiftThemeSeedRainProperties *this)

{
  ~RiftThemeSeedRainProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSeedRainProperties::StaticClassInit() */

void RiftThemeSeedRainProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeSeedRainProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036ff5c8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeSeedRainProperties::StaticGetClass() */

long * RiftThemeSeedRainProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeSeedRainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSeedRainProperties::GetClass() const */

long * RiftThemeSeedRainProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeSeedRainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSeedRainProperties::RiftThemeSeedRainProperties() */

void __thiscall
RiftThemeSeedRainProperties::RiftThemeSeedRainProperties(RiftThemeSeedRainProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066888a0;
  return;
}


/* RiftThemeSeedRainProperties::StaticNew() */

RiftThemeSeedRainProperties * RiftThemeSeedRainProperties::StaticNew(void)

{
  RiftThemeSeedRainProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemeSeedRainProperties(this);
  return this;
}

