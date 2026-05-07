// Class: RiftThemeShrunkenProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeShrunkenProperties::StaticClassInit() */

void RiftThemeShrunkenProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeShrunkenProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037077bc,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeShrunkenProperties::StaticGetClass() */

long * RiftThemeShrunkenProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeShrunkenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeShrunkenProperties::GetClass() const */

long * RiftThemeShrunkenProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeShrunkenProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeShrunkenProperties::RiftThemeShrunkenProperties() */

void __thiscall
RiftThemeShrunkenProperties::RiftThemeShrunkenProperties(RiftThemeShrunkenProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066875f0;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeShrunkenProperties::StaticNew() */

RiftThemeShrunkenProperties * RiftThemeShrunkenProperties::StaticNew(void)

{
  RiftThemeShrunkenProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeShrunkenProperties(this);
  return this;
}


/* RiftThemeShrunkenProperties::~RiftThemeShrunkenProperties() */

void __thiscall
RiftThemeShrunkenProperties::~RiftThemeShrunkenProperties(RiftThemeShrunkenProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066875f0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeShrunkenProperties::~RiftThemeShrunkenProperties() */

void __thiscall
RiftThemeShrunkenProperties::~RiftThemeShrunkenProperties(RiftThemeShrunkenProperties *this)

{
  ~RiftThemeShrunkenProperties(this);
  AK::FreeHook(this);
  return;
}

