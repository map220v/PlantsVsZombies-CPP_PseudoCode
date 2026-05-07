// Class: RiftThemeProperties


/* RiftThemeProperties::~RiftThemeProperties() */

void __thiscall RiftThemeProperties::~RiftThemeProperties(RiftThemeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066868e0;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* RiftThemeProperties::~RiftThemeProperties() */

void __thiscall RiftThemeProperties::~RiftThemeProperties(RiftThemeProperties *this)

{
  ~RiftThemeProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeProperties::StaticClassInit() */

void RiftThemeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036f89ac,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeProperties::StaticGetClass() */

long * RiftThemeProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeProperties::GetClass() const */

long * RiftThemeProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeProperties::RiftThemeProperties() */

void __thiscall RiftThemeProperties::RiftThemeProperties(RiftThemeProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066868e0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  return;
}


/* RiftThemeProperties::StaticNew() */

RiftThemeProperties * RiftThemeProperties::StaticNew(void)

{
  RiftThemeProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemeProperties(this);
  return this;
}

