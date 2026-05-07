// Class: RiftThemeCrossFireProperties


/* RiftThemeCrossFireProperties::~RiftThemeCrossFireProperties() */

void __thiscall
RiftThemeCrossFireProperties::~RiftThemeCrossFireProperties(RiftThemeCrossFireProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066890f0;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeCrossFireProperties::~RiftThemeCrossFireProperties() */

void __thiscall
RiftThemeCrossFireProperties::~RiftThemeCrossFireProperties(RiftThemeCrossFireProperties *this)

{
  ~RiftThemeCrossFireProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeCrossFireProperties::StaticClassInit() */

void RiftThemeCrossFireProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeCrossFireProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037012e0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeCrossFireProperties::StaticGetClass() */

long * RiftThemeCrossFireProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeCrossFireProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCrossFireProperties::GetClass() const */

long * RiftThemeCrossFireProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeCrossFireProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCrossFireProperties::RiftThemeCrossFireProperties() */

void __thiscall
RiftThemeCrossFireProperties::RiftThemeCrossFireProperties(RiftThemeCrossFireProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066890f0;
  return;
}


/* RiftThemeCrossFireProperties::StaticNew() */

RiftThemeCrossFireProperties * RiftThemeCrossFireProperties::StaticNew(void)

{
  RiftThemeCrossFireProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemeCrossFireProperties(this);
  return this;
}

