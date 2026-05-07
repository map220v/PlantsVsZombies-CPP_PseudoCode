// Class: RiftThemeExploderProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeExploderProperties::StaticClassInit() */

void RiftThemeExploderProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeExploderProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0370714c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeExploderProperties::StaticGetClass() */

long * RiftThemeExploderProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeExploderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeExploderProperties::GetClass() const */

long * RiftThemeExploderProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeExploderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeExploderProperties::RiftThemeExploderProperties() */

void __thiscall
RiftThemeExploderProperties::RiftThemeExploderProperties(RiftThemeExploderProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06686c70;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  return;
}


/* RiftThemeExploderProperties::StaticNew() */

RiftThemeExploderProperties * RiftThemeExploderProperties::StaticNew(void)

{
  RiftThemeExploderProperties *this;
  
  this = ::operator_new(0x48);
  RiftThemeExploderProperties(this);
  return this;
}


/* RiftThemeExploderProperties::~RiftThemeExploderProperties() */

void __thiscall
RiftThemeExploderProperties::~RiftThemeExploderProperties(RiftThemeExploderProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686c70;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeExploderProperties::~RiftThemeExploderProperties() */

void __thiscall
RiftThemeExploderProperties::~RiftThemeExploderProperties(RiftThemeExploderProperties *this)

{
  ~RiftThemeExploderProperties(this);
  AK::FreeHook(this);
  return;
}

