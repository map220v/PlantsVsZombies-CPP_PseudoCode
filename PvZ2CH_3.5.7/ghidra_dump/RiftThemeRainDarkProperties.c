// Class: RiftThemeRainDarkProperties


/* RiftThemeRainDarkProperties::~RiftThemeRainDarkProperties() */

void __thiscall
RiftThemeRainDarkProperties::~RiftThemeRainDarkProperties(RiftThemeRainDarkProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687850;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeRainDarkProperties::~RiftThemeRainDarkProperties() */

void __thiscall
RiftThemeRainDarkProperties::~RiftThemeRainDarkProperties(RiftThemeRainDarkProperties *this)

{
  ~RiftThemeRainDarkProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeRainDarkProperties::StaticClassInit() */

void RiftThemeRainDarkProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeRainDarkProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036fba7c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeRainDarkProperties::StaticGetClass() */

long * RiftThemeRainDarkProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainDarkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeRainDarkProperties::GetClass() const */

long * RiftThemeRainDarkProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeRainDarkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeRainDarkProperties::RiftThemeRainDarkProperties() */

void __thiscall
RiftThemeRainDarkProperties::RiftThemeRainDarkProperties(RiftThemeRainDarkProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687850;
  return;
}


/* RiftThemeRainDarkProperties::StaticNew() */

RiftThemeRainDarkProperties * RiftThemeRainDarkProperties::StaticNew(void)

{
  RiftThemeRainDarkProperties *this;
  
  this = ::operator_new(0x28);
  RiftThemeRainDarkProperties(this);
  return this;
}

