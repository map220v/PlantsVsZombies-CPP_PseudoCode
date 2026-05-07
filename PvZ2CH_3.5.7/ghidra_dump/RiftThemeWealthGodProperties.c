// Class: RiftThemeWealthGodProperties


/* RiftThemeWealthGodProperties::~RiftThemeWealthGodProperties() */

void __thiscall
RiftThemeWealthGodProperties::~RiftThemeWealthGodProperties(RiftThemeWealthGodProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066889d0;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeWealthGodProperties::~RiftThemeWealthGodProperties() */

void __thiscall
RiftThemeWealthGodProperties::~RiftThemeWealthGodProperties(RiftThemeWealthGodProperties *this)

{
  ~RiftThemeWealthGodProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWealthGodProperties::StaticClassInit() */

void RiftThemeWealthGodProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeWealthGodProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036ff9f0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeWealthGodProperties::StaticGetClass() */

long * RiftThemeWealthGodProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWealthGodProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWealthGodProperties::GetClass() const */

long * RiftThemeWealthGodProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWealthGodProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWealthGodProperties::RiftThemeWealthGodProperties() */

void __thiscall
RiftThemeWealthGodProperties::RiftThemeWealthGodProperties(RiftThemeWealthGodProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066889d0;
  return;
}


/* RiftThemeWealthGodProperties::StaticNew() */

RiftThemeWealthGodProperties * RiftThemeWealthGodProperties::StaticNew(void)

{
  RiftThemeWealthGodProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemeWealthGodProperties(this);
  return this;
}

